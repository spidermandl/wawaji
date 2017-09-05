﻿using System;
using System.Collections;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;
using PathologicalGames;
using DG.Tweening;
using MonsterLove.StateMachine;

public class GameManager : MonoBehaviour
{
	SpawnPool pool;
	///// 球相关属性 ///////////////////////////////////////////
	ArrayList balls;

	const int BALL_TOTAL = 120;//生成球数量
	const float BALL_RADIUS = 0.25f;//球半径
	const int CREATION_X=-2;
	const int CREATION_Y=-2;
	const int CREATION_Z = 2;
	const int LENGTH_X=4;
	const int LENGTH_Y=3;
	const int LENGTH_Z = 5;
	///// ////////////////////////////////////////////////////////

	///// 夹球器相关属性 ///////////////////////////////////////////
	Picker picker;
	///// 摄像头相关////////////////////////////////////////////////////////
	Transform _3dCamera;
	public Transform SpaceCamera{
		get{ return _3dCamera;}
	}
	const float CAMERA_ROTATE_SPEED = 0.15f;
	const float RETURN_FULL_TIME = 1.5f;
	private StateMachine<States> cameraStateMachine;//
	enum States
	{
		Still,// 静止
		Rotate,// 旋转
		Return,// 还原
	}
	///// //////////////////////////////////////////////////////// 
	public enum DIRECTION{
		Left,
		Right,
		Forward,
		Back,
	}

	class LEFT_SIDE{
		public static Vector3 LEFT = new Vector3 (0, 0, 1);
		public static Vector3 RIGHT = new Vector3 (0, 0, -1);
		public static Vector3 FORWORD = new Vector3 (-1, 0, 0);
		public static Vector3 BACK = new Vector3 (1, 0, 0);
	}
	class FORWARD_SIDE{
		public static Vector3 LEFT = new Vector3 (-1, 0, 0);
		public static Vector3 RIGHT = new Vector3 (1, 0, 0);
		public static Vector3 FORWORD = new Vector3 (0, 0, -1);
		public static Vector3 BACK = new Vector3 (0, 0, 1);
	}
	class RIGHT_SIDE{
		public static Vector3 LEFT = new Vector3 (0, 0, -1);
		public static Vector3 RIGHT = new Vector3 (0, 0, 1);
		public static Vector3 FORWORD = new Vector3 (1, 0, 0);
		public static Vector3 BACK = new Vector3 (-1, 0, 0);
	}
	///// //////////////////////////////////////////////////////// 

	void Awake(){
		this.pool = PoolManager.Pools["WaWaJi"];
		this._3dCamera = this.gameObject.transform.Find ("3d_Camera");
		//初始摄像机角度
		if (Math.Abs (this._3dCamera.position.x) < 0.01f)
			this._3dCamera = this._3dCamera;
		else if (this._3dCamera.position.x < 0)
			this._3dCamera.transform.RotateAround(Vector3.zero,Vector3.up,90);
		else if (this._3dCamera.position.x > 0)
			this._3dCamera.transform.RotateAround(Vector3.zero,Vector3.up,-90);


		GameObject root = this.gameObject.transform.Find ("structure/Player").gameObject;
		Picker p = root.GetComponent (typeof(Picker)) as Picker;
		if ( p!= null) {
			p.initConfig ();
		}else
			p = root.AddComponent (typeof(Picker)) as Picker;
		this.picker=p;
		this.balls = new ArrayList();
		//StartCoroutine (initBalls());
		initBalls();

		GameObject pass = this.gameObject.transform.Find ("structure/pass").gameObject;
		PassChecker pChecker = pass.GetComponent (typeof(PassChecker)) as PassChecker;
		if (pChecker == null) {
			pass.AddComponent (typeof(PassChecker));
		}

		cameraStateMachine = StateMachine<States>.Initialize(this, States.Still);
	}

	void Start(){

	}
	void FixedUpdate(){
	}
	void OnDestroy() {
		GameObject.Destroy (GetComponent<StateMachineRunner>());
	}
	/// ////////////////////////////////////////////////////////////////////////////
	/// 内部方法
	/// ////////////////////////////////////////////////////////////////////////////
	/// <summary>
	/// 初始化 抓球
	/// </summary>
	void initBalls(){
		Transform balls = this.gameObject.transform.Find ("structure/balls");
		GameObject ball1 = (GameObject)Resources.Load ("Prefabs/ball/ball_1");
		GameObject ball2 =(GameObject)Resources.Load ("Prefabs/ball/ball_2");
		GameObject ball3 =(GameObject)Resources.Load ("Prefabs/ball/ball_3");
		//        2   2
		//-2              2
		//   -3   -1
		//3*4*5
		ArrayList indexs = new ArrayList();	
		for (int i = 0; i < 2 * LENGTH_Y * 2 * LENGTH_X * 2 * LENGTH_Z; i++) {
			indexs.Add (i);
		}

		for (int i = 0; i < BALL_TOTAL; i++) {
			System.Random seed =  new System.Random ();
			int rand = seed.Next (1, 4);
			Transform ball = null;	
			switch(rand){
			case 1: 
				ball = this.pool.Spawn(ball1, Vector3.zero, Quaternion.identity,balls);
				//ball = GameObject.Instantiate (ball1);
				break;
			case 2: 
				//ball = GameObject.Instantiate (ball2);
				ball = this.pool.Spawn(ball2, Vector3.zero, Quaternion.identity,balls);
				break;
			case 3: 
				//ball = GameObject.Instantiate (ball3);
				ball = this.pool.Spawn(ball3, Vector3.zero, Quaternion.identity,balls);
				break;
			default:
				break;
			}
			if(ball!=null){
				seed =  new System.Random ();
//				float x = (float)Math.Round(seed.NextDouble()*4 - 2,2);
//				float z = (float)Math.Round(seed.NextDouble()*3 - 2,2);
//				ball.position = new Vector3 (x, -2.5f, z);

				rand = seed.Next (0, indexs.Count);
				Int32 index = (Int32)indexs [rand];
				indexs.Remove (index);
				int n_y = index / (6 * 8);
				int n_z = (index - 6 * 8 * n_y) / 8;
				int n_x = index - 6 * 8 * n_y - 8 * n_z;
				//Debug.Log (new Vector3 (n_x, n_y, n_z));
				ball.position = new Vector3 (
					CREATION_X+2*BALL_RADIUS*n_x+BALL_RADIUS,
					CREATION_Y+2*BALL_RADIUS*n_y+BALL_RADIUS,
					CREATION_Z-2*BALL_RADIUS*n_z+BALL_RADIUS);

				ball.gameObject.layer = LayerMask.NameToLayer ("Ball"); 
				this.balls.Add (ball);
				//yield return new WaitForSeconds(0.1f);  
			}
			//yield return null;
		}
	}
	/// ////////////////////////////////////////////////////////////////////////////
	/// 状态机相关
	/// ////////////////////////////////////////////////////////////////////////////
	public void Return_Enter(){
		float degree = _3dCamera.position.x/Math.Abs(_3dCamera.position.x)*
			Vector3.Angle (new Vector3(_3dCamera.position.x,0,_3dCamera.position.z),Vector3.back);
		//Debug.Log (degree);
		if (Math.Abs(degree)<=45) {
		} else if (degree > 45) {
			degree = degree-90;
		} else if (degree < -45) {
			degree = degree+90;
		}
		GameObject temp = new GameObject ();
		temp.transform.position = Vector3.zero;
		temp.transform.parent = this._3dCamera.parent;
		this._3dCamera.parent = temp.transform;
		Tweener t = temp.transform.DORotate (new Vector3(0,degree,0),Math.Abs(degree)/45 * RETURN_FULL_TIME,RotateMode.Fast);
		t.OnComplete (() => {
			cameraStateMachine.ChangeState(States.Still);
		});
	}

	public void Return_Exit(){
		Transform temp = this._3dCamera.parent;
		this._3dCamera.parent = temp.parent;
		GameObject.Destroy (temp.gameObject);
	}
	/// ////////////////////////////////////////////////////////////////////////////
	/// 外部调用
	/// ////////////////////////////////////////////////////////////////////////////
	public void setMoveDirection(DIRECTION direction){
		if (cameraStateMachine.State != States.Still)
			return;
		Vector3 dir = Vector3.zero;
		switch(direction){
		case DIRECTION.Left:
			if (Math.Abs (this._3dCamera.position.x) < 0.01f)
				dir = FORWARD_SIDE.LEFT;
			else if (this._3dCamera.position.x < 0)
				dir = LEFT_SIDE.LEFT;
			else if (this._3dCamera.position.x > 0)
				dir = RIGHT_SIDE.LEFT;
			break;
		case DIRECTION.Right:
			if (Math.Abs (this._3dCamera.position.x) < 0.01f)
				dir = FORWARD_SIDE.RIGHT;
			else if (this._3dCamera.position.x < 0)
				dir = LEFT_SIDE.RIGHT;
			else if (this._3dCamera.position.x > 0)
				dir = RIGHT_SIDE.RIGHT;
			break;
		case DIRECTION.Forward:
			if (Math.Abs (this._3dCamera.position.x) < 0.01f)
				dir = FORWARD_SIDE.FORWORD;
			else if (this._3dCamera.position.x < 0)
				dir = LEFT_SIDE.FORWORD;
			else if (this._3dCamera.position.x > 0)
				dir = RIGHT_SIDE.FORWORD;
			break;
		case DIRECTION.Back:
			if (Math.Abs (this._3dCamera.position.x) < 0.01f)
				dir = FORWARD_SIDE.BACK;
			else if (this._3dCamera.position.x < 0)
				dir = LEFT_SIDE.BACK;
			else if (this._3dCamera.position.x > 0)
				dir = RIGHT_SIDE.BACK;
			break;
		default:
			break;
		}
		this.picker.startSeeking (dir);
	}
	public void stopMoving(){
		this.picker.stopSeeking ();
	}
	public void startPick(){		
		if (cameraStateMachine.State != States.Still)
			return;
		float degree = 0;
		//初始摄像机角度
		if (Math.Abs (this._3dCamera.position.x) < 0.01f)
			degree = 0;
		else if (this._3dCamera.position.x < 0)
			degree = -90;
		else if (this._3dCamera.position.x > 0)
			degree = 90;

		if (degree == 0) {
			this.picker.startTargeting ();
			return;
		}
		GameObject temp = new GameObject ();
		temp.transform.position = Vector3.zero;
		temp.transform.parent = this._3dCamera.parent;
		this._3dCamera.parent = temp.transform;
		Tweener t = temp.transform.DORotate (new Vector3(0,degree,0),RETURN_FULL_TIME,RotateMode.Fast);
		t.OnComplete (() => {
			Transform temp1 = this._3dCamera.parent;
			this._3dCamera.parent = temp1.parent;
			GameObject.Destroy (temp1.gameObject);
			this.picker.startTargeting ();
		});
	}

	public bool isIdle(){
		return this.picker.isIdle ()&&cameraStateMachine.State == States.Still;
	}
	/// <summary>
	/// Rotates the camera.
	/// </summary>
	/// <param name="delta">Delta.</param>
	public void rotateCamera(float delta){
		//爪子是否静止
		if (!this.picker.isIdle ())
			return;

		if (cameraStateMachine.State == States.Still) {
			cameraStateMachine.ChangeState (States.Rotate);
		}
		if (cameraStateMachine.State != States.Return) {
			float degree = _3dCamera.position.x/Math.Abs(_3dCamera.position.x)*
				Vector3.Angle (new Vector3(_3dCamera.position.x,0,_3dCamera.position.z),Vector3.back);
			//摄像机转角越界判断
			if (degree - delta * CAMERA_ROTATE_SPEED > 90)
				degree = 90 - degree;
			else if (degree - delta * CAMERA_ROTATE_SPEED < -90)
				degree = -90 - degree;
			else
				degree = delta * CAMERA_ROTATE_SPEED;
			
			if(degree!=0)
				this._3dCamera.RotateAround (Vector3.zero, Vector3.up, degree);
		}
		
	}
	public void returnCamera(){
		cameraStateMachine.ChangeState (States.Return);
	}

	public void inactive(){
		while (this.pool.Count > 0)
		{
			// Despawn the last instance (like dequeue in a queue because 
			//   Despawn() will also remove the item from the list, so the list
			//   is being changed in-place.)
			Transform instance = this.pool[pool.Count - 1];
			this.pool.Despawn(instance);  // Internal count--

		}
	}

}

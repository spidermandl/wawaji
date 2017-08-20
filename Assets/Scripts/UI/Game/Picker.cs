using System;
using System.Collections;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;
using PathologicalGames;
using MonsterLove.StateMachine;

public class Picker : MonoBehaviour
{  

	SpawnPool pool;
	static Vector3 initPos = new Vector3 (1.26f, 3, 0);//
	static float ground_Y = 1.55f;
	static Vector3 dropPos = new Vector3 (0,3,-1.72f);//
	///// 夹球腿相关属性 ///////////////////////////////////////////
	Transform[] foots;
	public float radius = 0.5f;//曲面距离内心半径
	public float angle = 135;//曲面拉弧角度
	public float divide = 15;//曲面个数
	public int legs = 3;//抓脚个数
	static Vector3 initFootPos = new Vector3 (0, -1.2f, 0);//
	///// ////////////////////////////////////////////////////////
	///// //////////////////////////////////////////////////////// 
	Transform triangle_cell;
	Transform hexagon_cell;
	///// //////////////////////////////////////////////////////// 
	GameObject fill;
	GameObject cover;
	///// //////////////////////////////////////////////////////// 
	private StateMachine<States> pickerStateMachine;//
	public enum States
	{
		Still,// 静止
		Seek,// 寻找落点
		Down,// 下落
		Pick,//
		Up,//
		Release,
	}
	/////seek state //////////////////////////////////////////////////////// 
	Vector3 moveDiretion = Vector3.zero;
	///// //////////////////////////////////////////////////////// 
	void Awake(){
		this.pool = PoolManager.Pools["WaWaJi"];
		this.gameObject.transform.localPosition = Picker.initPos;
		Transform rootFoot = this.gameObject.transform.Find ("foot");
		this.hexagon_cell = this.gameObject.transform.Find ("hexagon_cell");
		this.triangle_cell = this.gameObject.transform.Find ("triangle_cell");
		this.hexagon_cell.gameObject.SetActive (false);
		this.triangle_cell.gameObject.SetActive (false);
		this.fill = this.gameObject.transform.parent.Find ("fill").gameObject;
		this.cover = this.gameObject.transform.parent.Find ("cover").gameObject;

		//生成每个抓脚的根节点
		foots = new Transform[this.legs];
		for (int i = 0; i < this.legs; i++) {
			GameObject prefab = (GameObject)Resources.Load ("Prefabs/foot");
			foots[i]= this.pool.Spawn(prefab, Vector3.zero, Quaternion.identity,rootFoot);
			foots [i].localPosition = Vector3.zero;
		}

		initFoot ();

		rootFoot.Translate (Picker.initFootPos);

		//Initialize State Machine Engine		
		pickerStateMachine = StateMachine<States>.Initialize(this, States.Still);

	}

	public void FixedUpdate(){
		
	}

	public void Seek_FixedUpdate()
	{
		//移动速度1
		this.gameObject.transform.Translate (new Vector3(
				this.moveDiretion.x * Time.fixedDeltaTime,
				this.moveDiretion.y * Time.fixedDeltaTime,
				this.moveDiretion.z * Time.fixedDeltaTime));
	}

	public void Down_FixedUpdate(){
		//移动速度1
		this.gameObject.transform.Translate (new Vector3 (0,-Time.fixedDeltaTime,0));
		if (this.gameObject.transform.localPosition.y <= Picker.ground_Y) {
			this.pickerStateMachine.ChangeState (States.Pick);
		}
	}

	public IEnumerator Pick_Enter(){
		yield return new WaitForSeconds(1);
	}


	public void Pick_FixedUpdate(){
//		for(int i=0;i<this.legs;i++){
//			double angle = Math.PI / 180 * (270 - 360 / this.legs * i + 90);
//			Vector3 center = this.foots [i].position+new Vector3(0,radius,0);
//			this.foots [i].RotateAround (
//				center, 
//				new Vector3 ((float)Math.Cos (angle), 0, (float)Math.Sin (angle)),
//				60f);
		//		}
		this.hexagon_cell.gameObject.SetActive (true);
		this.pickerStateMachine.ChangeState (States.Up);
	}

	public void Up_FixedUpdate(){
		//移动速度1
		this.gameObject.transform.Translate (new Vector3 (0,Time.fixedDeltaTime,0));
		if (this.gameObject.transform.localPosition.y >= Picker.initPos.y) {
			this.pickerStateMachine.ChangeState (States.Release);
		}
	}

	public void Release_FixedUpdate(){
		Vector3 dir = Picker.dropPos - this.gameObject.transform.localPosition;
		this.gameObject.transform.Translate (
			0.4f*Time.fixedDeltaTime*dir.x,
			0.4f*Time.fixedDeltaTime*dir.y,
			0.4f*Time.fixedDeltaTime*dir.z);
		if (Vector3.Distance(this.gameObject.transform.localPosition,Picker.dropPos)<=0.01) {
			this.pickerStateMachine.ChangeState (States.Still);
			this.hexagon_cell.gameObject.SetActive (false);
			this.fill.SetActive (false);
			this.cover.SetActive (false);
			for (int i = 1; i < this.legs; i++) {
				this.foots [i].gameObject.SetActive (false);
			}
		}
	}

	/// <summary>
	/// 初始化所有抓脚
	/// </summary>
	void initFoot() {  
		for (int i = 0; i < this.legs; i++) {
			this.createFoot (this.foots [i]);
			this.foots [i].Rotate (270,i*360/this.legs,0);
		}

	}  
	/// <summary>
	/// 生成一个抓脚
	/// </summary>
	/// <param name="parent">Parent.</param>
	void createFoot(Transform parent){
		float ang_unit = angle / divide;
		for (int i = 0; i <= divide; i++) {
			GameObject prefab = (GameObject)Resources.Load ("Prefabs/foot_piece");
			Transform quad = this.pool.Spawn(prefab, Vector3.zero, Quaternion.identity,parent);
			quad.parent = parent;
			quad.localPosition = Vector3.zero;
			//quad.transform.localRotation = Quaternion.Euler (270,0,0);
			//设置面片大小
			//quad.localScale = new Vector3 (radius*i/divide, 2*radius * Mathf.Tan (2*Mathf.PI/360 * ang_unit / 2), 1);
			quad.localScale = new Vector3 (radius, 2*radius * Mathf.Tan (2*Mathf.PI/360 * ang_unit / 2), 1);
			//先移动
			quad.Translate (0,radius * Mathf.Sin (2*Mathf.PI/360 *ang_unit * i),radius * Mathf.Cos (2*Mathf.PI/360 *ang_unit * i),Space.Self);
			//后旋转
			quad.Rotate (-ang_unit*i, 0, 0);
		}
	}

	/// ////////////////////////////////////////////////////////////////////////////
	/// 外部调用
	/// ////////////////////////////////////////////////////////////////////////////
	public void startSeeking(Vector3 direction){
		this.moveDiretion = direction;
		this.pickerStateMachine.ChangeState (States.Seek);
	}
	public void stopSeeking(){
		this.pickerStateMachine.ChangeState (States.Still);
	}

	public void startTargeting(){
		if (this.pickerStateMachine.State == States.Still) {
			this.pickerStateMachine.ChangeState (States.Down);
		}
	}

}  
using System;
using System.Collections;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;
using PathologicalGames;

public class GameManager : MonoBehaviour
{
	SpawnPool pool;
	///// 球相关属性 ///////////////////////////////////////////
	ArrayList balls;
	int m_ball_num = 120;//生成球数量
	///// ////////////////////////////////////////////////////////

	///// 夹球器相关属性 ///////////////////////////////////////////
	Picker picker;
	///// ////////////////////////////////////////////////////////
	///// //////////////////////////////////////////////////////// 

	void Awake(){
		this.pool = PoolManager.Pools["WaWaJi"];
		GameObject root = this.gameObject.transform.Find ("structure/Player").gameObject;
		if (root.GetComponent (typeof(Picker)) != null) {
			Destroy (root.GetComponent (typeof(Picker)));
		}
		this.picker = root.AddComponent (typeof(Picker)) as Picker;

		this.balls = new ArrayList();
		initBalls ();
	}

	public void FixedUpdate(){

	}

	void removeColliderRender(){

	}
	void initBalls(){
		int num = this.m_ball_num;
		GameObject ball1 = (GameObject)Resources.Load ("Prefabs/ball/ball_1");
		GameObject ball2 =(GameObject)Resources.Load ("Prefabs/ball/ball_2");
		GameObject ball3 =(GameObject)Resources.Load ("Prefabs/ball/ball_3");

		//    -2
		//-2       2
		//     1

		for (int i = 0; i < num; i++) {
			System.Random seed =  new System.Random ();
			int rand = seed.Next (1, 4);
			Transform ball = null;	
			switch(rand){
			case 1: 
				ball = this.pool.Spawn(ball1, Vector3.zero, Quaternion.identity);
				//ball = GameObject.Instantiate (ball1);
				break;
			case 2: 
				//ball = GameObject.Instantiate (ball2);
				ball = this.pool.Spawn(ball2, Vector3.zero, Quaternion.identity);
				break;
			case 3: 
				//ball = GameObject.Instantiate (ball3);
				ball = this.pool.Spawn(ball3, Vector3.zero, Quaternion.identity);
				break;
			default:
				break;
			}
			if(ball!=null){
				seed =  new System.Random ();
				float x = (float)Math.Round(seed.NextDouble()*4 - 2,2);
				float z = (float)Math.Round(seed.NextDouble()*3 - 2,2);
				ball.position = new Vector3 (x, -2.5f, z);
				//Debug.Log (ball.transform.position);
				this.balls.Add (ball);
			}
		}
		
	}

	public void setMoveDirection(Vector3 direction){
		this.picker.startSeeking (direction);
	}
	public void stopMoving(){
		this.picker.stopSeeking ();
	}
	public void startPick(){
		this.picker.startTargeting ();
	}

	public void destroyObjects(){
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


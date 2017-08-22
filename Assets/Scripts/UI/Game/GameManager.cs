﻿using System;
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
	///// ////////////////////////////////////////////////////////
	///// //////////////////////////////////////////////////////// 

	void Awake(){
		this.pool = PoolManager.Pools["WaWaJi"];
		GameObject root = this.gameObject.transform.Find ("structure/Player").gameObject;
		Picker p = root.GetComponent (typeof(Picker)) as Picker;
		if ( p!= null) {
			p.initConfig ();
			//Destroy (root.GetComponent (typeof(Picker)));
		}else
			p = root.AddComponent (typeof(Picker)) as Picker;
		this.picker=p;
		this.balls = new ArrayList();
		initBalls ();
	}

	public void FixedUpdate(){

	}

	void removeColliderRender(){

	}

	void initBalls(){
		GameObject ball1 = (GameObject)Resources.Load ("Prefabs/ball/ball_1");
		GameObject ball2 =(GameObject)Resources.Load ("Prefabs/ball/ball_2");
		GameObject ball3 =(GameObject)Resources.Load ("Prefabs/ball/ball_3");

		//        2   2
		//-2              2
		//   -3   -1
		//3*4*5
		ArrayList indexs = new ArrayList();
		for (int i = 0; i < 6 * 8 * 10; i++) {
			indexs.Add (i);
		}

		for (int i = 0; i < BALL_TOTAL; i++) {
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

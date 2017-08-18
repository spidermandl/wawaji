using System;
using System.Collections;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;
using PathologicalGames;

public class GameManager
{
	GameObject root;
	GameObject picker;
	ArrayList balls;
	SpawnPool pool;
	Vector3 moveDiretion = Vector3.zero;
	float speed = 10;
	bool isMoving = false;

	public GameManager (GameObject root)
	{
		this.pool = PoolManager.Pools["WaWaJi"];
		this.root = root;
		this.picker = this.root.transform.Find ("structure/Player").gameObject;
		this.balls = new ArrayList();
		initBalls ();
	}

	void removeColliderRender(){

	}
	void initBalls(){
		int num = 80;
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
				Debug.Log (ball.transform.position);
				this.balls.Add (ball);
			}
		}
		
	}

	public void setMoveDirection(Vector3 direction){
		this.moveDiretion = direction;
		this.isMoving = true;
	}
	public void stopMoving(){
		this.isMoving = false;
	}

	void FixedUpdate(){
		if(isMoving)
			this.picker.transform.Translate (
				this.moveDiretion.x * Time.fixedDeltaTime,
				this.moveDiretion.y * Time.fixedDeltaTime,
				this.moveDiretion.z * Time.fixedDeltaTime);

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


using System;
using System.Collections;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;
using PathologicalGames;

public class Picker  
{  

	SpawnPool pool;
	Transform root;
	static Vector3 initPos = new Vector3 (1.26f, 3, 0);//
	///// 夹球腿相关属性 ///////////////////////////////////////////
	Transform[] foots;
	public float radius = 0.5f;//曲面距离内心半径
	public float angle = 135;//曲面拉弧角度
	public float divide = 15;//曲面个数
	public int legs = 4;//抓脚个数
	static Vector3 initFootPos = new Vector3 (0, -1.2f, 0);//
	///// ////////////////////////////////////////////////////////
	///// //////////////////////////////////////////////////////// 
	Transform triangle_cell;
	Transform hexagon_cell;
	///// //////////////////////////////////////////////////////// 

	public Picker (Transform root)
	{
		this.pool = PoolManager.Pools["WaWaJi"];
		this.root = root;
		this.root.localPosition = Picker.initPos;
		Transform rootFoot = this.root.Find ("foot");
		this.hexagon_cell = this.root.Find ("hexagon_cell");
		this.triangle_cell = this.root.Find ("triangle_cell");
		this.hexagon_cell.gameObject.SetActive (false);
		this.triangle_cell.gameObject.SetActive (false);

		//生成每个抓脚的根节点
		foots = new Transform[this.legs];
		for (int i = 0; i < this.legs; i++) {
			GameObject prefab = (GameObject)Resources.Load ("Prefabs/foot");
			foots[i]= this.pool.Spawn(prefab, Vector3.zero, Quaternion.identity,rootFoot);
			foots [i].localPosition = Vector3.zero;
		}

		initFoot ();

		rootFoot.Translate (Picker.initFootPos);
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
	//移动
	public void move(Vector3 dir){
		this.root.Translate (dir);
	}

	public void pickBalls(){

	}

}  
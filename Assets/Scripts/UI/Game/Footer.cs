﻿using System;
using System.Collections;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;
using PathologicalGames;

public class Footer:MonoBehaviour
{
	SpawnPool pool;

	public float radius = 0.5f;//曲面距离内心半径
	public float angle = 135;//曲面拉弧角度
	public int divide = 15;//曲面个数
	public Vector3 initRotate = Vector3.zero;

	static Vector3 initFootPos = new Vector3 (0, -0.8f, 0);//中心点初始偏移位置

	Transform[] quads;

	void Awake(){
		this.pool = PoolManager.Pools["WaWaJi"];
		quads = new Transform[divide+1];

		float ang_unit = angle / divide;
		for (int i = 0; i <= divide; i++) {
			GameObject prefab = (GameObject)Resources.Load ("Prefabs/foot_piece");
			Transform quad = this.pool.Spawn(prefab, Vector3.zero, Quaternion.identity,this.gameObject.transform);
			quad.parent = this.gameObject.transform;
			quad.localPosition = Vector3.zero;
			//quad.transform.localRotation = Quaternion.Euler (270,0,0);
			//设置面片大小
			//quad.localScale = new Vector3 (radius*i/divide, 2*radius * Mathf.Tan (2*Mathf.PI/360 * ang_unit / 2), 1);
			quad.localScale = new Vector3 (radius, 2*radius * Mathf.Tan (2*Mathf.PI/360 * ang_unit / 2), 1);
			//先移动
			quad.Translate (0,radius * Mathf.Sin (2*Mathf.PI/360 *ang_unit * i),radius * Mathf.Cos (2*Mathf.PI/360 *ang_unit * i),Space.Self);
			//后旋转
			quad.Rotate (-ang_unit*i, 0, 0);

			quads [i] = quad;
		}

		this.gameObject.transform.Rotate (initRotate);
		for (int i = 0; i <= divide; i++) {
			quads[i].Translate (0, -radius, 0,Space.World);
		}

		this.gameObject.transform.Translate (Footer.initFootPos,Space.World);
	}

	void Update(){
		
	}

	void FixedUpdate(){

	}
}


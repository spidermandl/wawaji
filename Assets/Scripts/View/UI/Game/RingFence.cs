using System;
using System.Collections.Generic;
using UnityEngine;

public class RingFence :MonoBehaviour
{
	float radius = 0.2f;
	int divide = 20;

	void Awake(){
		float angle = 360 / divide;
		float unit_angular = (float)(2 * Math.PI / 360);
		for (int i = 0; i < divide; i++) {
			GameObject piece = GameObject.Instantiate ((GameObject)Resources.Load ("Prefabs/ring_piece"));
			//this.pool.Spawn(prefab, Vector3.zero, Quaternion.identity,this.rootFoot);
			piece.transform.parent = this.gameObject.transform;
			piece.transform.localPosition = Vector3.zero;
			piece.transform.localScale =new Vector3((float) (radius * 2 * Math.Sin (angle/2 * unit_angular)),0.01f,1);
			float dis = radius * (float)Math.Cos (angle/2 * unit_angular);
			piece.transform.Translate (dis *(float)Math.Sin (angle * i * unit_angular), 0, dis * (float)Math.Cos (angle * i * unit_angular),Space.Self);
			piece.transform.Rotate (0, i * angle, 0,Space.Self);
		}
	}
}


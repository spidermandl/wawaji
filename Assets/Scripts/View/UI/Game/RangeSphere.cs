using System;
using System.Collections.Generic;
using UnityEngine;

public class RangeSphere :MonoBehaviour
{
	private SelectingBall _picking;
	public delegate void SelectingBall(GameObject ball);

	void Awake(){

	}

	void OnTriggerEnter(Collider collider){
		//Debug.Log (collider.gameObject);
		if (this._picking != null) {
			_picking (collider.gameObject);
		}
	}

	void OnCollisionEnter(Collision collsion){
		
	}

	public void setSelectingFunc(SelectingBall func){
		this._picking = func;
	}
}


using System;
using System.Collections.Generic;
using UnityEngine;
using PathologicalGames;

public class PassChecker : MonoBehaviour
{
	SpawnPool pool;

	const string BALL_LAYER = "Ball";
	const string PASS_LAYER = "Pass";

	void Awake(){
		this.pool = PoolManager.Pools["WaWaJi"];
	}

	void OnTriggerEnter(Collider collider){
		//Debug.Log ("OnTriggerEnter");
	}

	void OnCollisionEnter(Collision collsion){
		//Debug.Log ("OnCollisionEnter");
		if(collsion.gameObject.layer == LayerMask.NameToLayer(BALL_LAYER))
			collsion.gameObject.layer = LayerMask.NameToLayer (PASS_LAYER);
	}

	void OnCollisionExit(Collision collsion){
		if (collsion.gameObject.layer == LayerMask.NameToLayer (PASS_LAYER))
			this.pool.Despawn (collsion.gameObject.transform);
	}
}


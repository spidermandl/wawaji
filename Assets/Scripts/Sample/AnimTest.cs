using System;
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using PureMVC.Interfaces;

using DG.Tweening;

public class AnimTest : MonoBehaviour
{
	public AnimTest ()
	{
	}

	void Awake(){

	}

	void Start(){
//		Animator anim = this.gameObject.transform.GetComponent<Animator>();
//		anim.Play ("pick_1");
		this.transform.DOLookAt(Vector3.zero,4);
		//this.transform.DORotate (new Vector3 (0, 45, 0), 3);
	}
}


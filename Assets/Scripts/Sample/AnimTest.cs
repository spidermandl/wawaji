using System;
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using PureMVC.Interfaces;

public class AnimTest : MonoBehaviour
{
	public AnimTest ()
	{
	}

	void Awake(){

	}

	void Start(){
		Animator anim = this.gameObject.transform.GetComponent<Animator>();
		anim.Play ("pick_1");
		//anim.StartRecording (50);
		//anim.GetCurrentAnimatorClipInfo.st
	}
}


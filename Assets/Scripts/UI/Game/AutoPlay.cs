using System;
using System.Collections.Generic;
using UnityEngine;

public class AutoPlay : StateMachineBehaviour
{
	public const string PICK_ANIM = "pick_step";

	override public void OnStateEnter(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
	{
		int r = animator.GetInteger (PICK_ANIM);
		animator.SetInteger (PICK_ANIM, r + 1);
		//Debug.Log (stateInfo);
		if (stateInfo.IsName ("pick_3")) {
			if (animator.GetInteger (PICK_ANIM) == 6) {
				animator.SetInteger (PICK_ANIM, 0);
			}
		}
	}

	override public void OnStateExit(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
	{
		
	}

	override public void OnStateUpdate(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
	{
		
	}

	override public void OnStateMove(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
	{
	}

	override public void OnStateIK(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
	{
		
	}

}


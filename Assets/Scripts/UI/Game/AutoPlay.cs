using System;
using System.Collections.Generic;
using UnityEngine;

public class AutoPlay : StateMachineBehaviour
{
	override public void OnStateEnter(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
	{
		if (stateInfo.IsName ("pick_3")) {
			int r = animator.GetInteger ("repeat_once");
			animator.SetInteger ("repeat_once", r + 1);
		}else if (stateInfo.IsName ("pick_4")) {
			animator.SetInteger ("repeat_once", 0);
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


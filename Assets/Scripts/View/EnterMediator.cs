using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using PureMVC.Interfaces;

public class EnterMediator: PureMVC.Patterns.Mediator {
	
	public EnterMediator (){
		
	}

	public override void HandleNotification(INotification notification)
	{        
		
	}

	public override void OnRegister()
	{
		
	}

	public override void OnRemove()
	{
		Debug.Log("Remove:" + MediatorName );
	}
}


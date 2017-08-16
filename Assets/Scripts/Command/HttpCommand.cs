using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;

/**
 * Desmond
 * http command response
 * */
public class HttpCommand : PureMVC.Patterns.SimpleCommand {

	public override void Execute(PureMVC.Interfaces.INotification notification) {
		object body = notification.Body;
		if (body == null) return;
		
		String msg = (String)body;
		//Util.CallMethod("Network", "OnResponse", msg);

	}
}

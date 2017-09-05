using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;

/**
 * Desmond
 * http command response
 * */
public class HttpReqCommand : PureMVC.Patterns.SimpleCommand {

	public static string HTTP = "UnityFacade.HTTP.Request";

	public override void Execute(PureMVC.Interfaces.INotification notification) {
		object body = notification.Body;
		UnityFacade.GetInstance ().Network.SendPost ((Request)body);
		

	}
}

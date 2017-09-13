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
		Request request = (Request)body;

		if (request.command () == Req_GetUpdatePics.COMMAND) {
			Facade.RegisterProxy (new UpdatesProxy (UpdatesProxy.NAME));
			UpdatesProxy proxy = Facade.RetrieveProxy (UpdatesProxy.NAME) as UpdatesProxy;
			proxy.readLocalVersion ();
			((Req_GetUpdatePics)body).Version = proxy.getLocalVersion ();
		}

		UnityFacade.GetInstance ().Network.SendPost (request);


	}
}

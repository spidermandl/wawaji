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
		} else if (request.command () == Req_UserLogin.COMMAND || request.command () == Req_GetBaseInfo.COMMAND) {
			Facade.RegisterProxy (new AccountProxy (AccountProxy.NAME));
		} else if (request.command () == Req_GetPrizeInfo.COMMAND) {
			Facade.RegisterProxy (new AccountProxy (AccountProxy.NAME));
		} else if (request.command () == Req_GetAllPrize.COMMAND) {
			Facade.RegisterProxy (new PrizeSetProxy (PrizeSetProxy.NAME));
		}

		UnityFacade.GetInstance ().Network.SendPost (request);


	}
}

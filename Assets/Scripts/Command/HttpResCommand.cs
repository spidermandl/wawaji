using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;

/**
 * Desmond
 * http command response
 * */
public class HttpResCommand : PureMVC.Patterns.SimpleCommand {

	public static string HTTP = "UnityFacade.HTTP.Response";

	public override void Execute(PureMVC.Interfaces.INotification notification) {
		object body = notification.Body;
		Request request = (Request)body;

		if (request.command () == Req_GetUpdatePics.COMMAND) {
			UpdatesProxy proxy = Facade.RetrieveProxy (UpdatesProxy.NAME) as UpdatesProxy;
			proxy.fillServerVersion ((Req_GetUpdatePics)request);
			return;
		}else if (request.command () == Req_UserLogin.COMMAND || request.command () == Req_GetBaseInfo.COMMAND) {
			if (request.getResponseType () == typeof(Req_UserLogin.Response)) {
				AccountProxy proxy = Facade.RetrieveProxy (AccountProxy.NAME) as AccountProxy;
				proxy.setUserData ((Base_Req_UserInfo.Response)request.Resp);
			}
		}else if (request.command () == Req_GetPrizeInfo.COMMAND) {
			if (request.getResponseType () == typeof(Req_GetPrizeInfo.Response)) {
				PrizeInfoProxy proxy = Facade.RetrieveProxy (PrizeInfoProxy.NAME) as PrizeInfoProxy;
				proxy.setPrizeInfoData ((Req_GetPrizeInfo.Response)request.Resp);
			}
		}


		SendNotification (request.Api,request);
	}
}

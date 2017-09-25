using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using PureMVC.Patterns.Command;

/**
 * Desmond
 * http command response
 * */
public class HttpReqCommand : SimpleCommand {

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
		} else if (request.command () == Req_GetPrizeInfo.COMMAND) {
		} else if (request.command () == Req_GetAllPrize.COMMAND) {
		} else if (request.command () == Req_GetMachinePrizeInfo.COMMAND) {
		} else if (request.command () == Req_GetMachineInfo.COMMAND) {
		} else if (request.command () == Req_GetPrizeUserHorn.COMMAND) {
		} else if (request.command () == Req_GetPrizeUserLists.COMMAND) {
		} else if (request.command () == Req_GetMachinePrizeBallData.COMMAND||
			request.command () == Req_MachineStartGrab.COMMAND) {
		} else if (request.command () == Req_GetNewsLists.COMMAND) {
		}

		UnityFacade.GetInstance ().Network.SendPost (request);

	}
}

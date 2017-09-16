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
			if(Facade.RetrieveProxy (AccountProxy.NAME) ==null)
				Facade.RegisterProxy (new AccountProxy (AccountProxy.NAME));
			
		} else if (request.command () == Req_GetPrizeInfo.COMMAND) {
			if(Facade.RetrieveProxy (AccountProxy.NAME) ==null)
				Facade.RegisterProxy (new AccountProxy (AccountProxy.NAME));
			
		} else if (request.command () == Req_GetAllPrize.COMMAND) {
			if(Facade.RetrieveProxy (PrizeSetProxy.NAME) ==null)
				Facade.RegisterProxy (new PrizeSetProxy (PrizeSetProxy.NAME));
			
		} else if (request.command () == Req_GetMachinePrizeInfo.COMMAND) {
			if(Facade.RetrieveProxy (MachinePrizeProxy.NAME) ==null)
				Facade.RegisterProxy (new MachinePrizeProxy (MachinePrizeProxy.NAME));
			
		} else if (request.command () == Req_GetMachineInfo.COMMAND) {
			if(Facade.RetrieveProxy (MachineInfoProxy.NAME) ==null)
				Facade.RegisterProxy (new MachineInfoProxy (MachineInfoProxy.NAME));
			
		} else if (request.command () == Req_GetPrizeUserHorn.COMMAND) {
			if(Facade.RetrieveProxy (UserPrizeStringProxy.NAME) ==null)
				Facade.RegisterProxy (new UserPrizeStringProxy (UserPrizeStringProxy.NAME));
			
		} else if (request.command () == Req_GetPrizeUserLists.COMMAND) {
			if(Facade.RetrieveProxy (UserPrizeListsProxy.NAME) ==null)
				Facade.RegisterProxy (new UserPrizeListsProxy (UserPrizeListsProxy.NAME));
			
		} else if (request.command () == Req_GetMachinePrizeBallData.COMMAND) {
			if(Facade.RetrieveProxy (GameBallProxy.NAME) ==null)
				Facade.RegisterProxy (new GameBallProxy (GameBallProxy.NAME));
		}

		UnityFacade.GetInstance ().Network.SendPost (request);

	}
}

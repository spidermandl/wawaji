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
				UserPrizeInfoProxy proxy = Facade.RetrieveProxy (UserPrizeInfoProxy.NAME) as UserPrizeInfoProxy;
				proxy.setPrizeInfoData ((Req_GetPrizeInfo.Response)request.Resp);
			}
		}else if (request.command () == Req_GetAllPrize.COMMAND) {
			if (request.getResponseType () == typeof(Req_GetAllPrize.Response)) {
				PrizeSetProxy proxy = Facade.RetrieveProxy (PrizeSetProxy.NAME) as PrizeSetProxy;
				proxy.setPrizeInfoData ((Req_GetAllPrize.Response)request.Resp);
			}
		}else if (request.command () == Req_GetMachinePrizeInfo.COMMAND) {
			
			if (request.getResponseType () == typeof(Req_GetMachinePrizeInfo.Response)) {
				MachinePrizeProxy proxy = Facade.RetrieveProxy (MachinePrizeProxy.NAME) as MachinePrizeProxy;
				proxy.setMachinePrizeData ((Req_GetMachinePrizeInfo.Response)request.Resp);
			}
		}else if (request.command () == Req_GetMachineInfo.COMMAND) {
			
			if (request.getResponseType () == typeof(Req_GetMachineInfo.Response)) {
				MachineInfoProxy proxy = Facade.RetrieveProxy (MachineInfoProxy.NAME) as MachineInfoProxy;
				proxy.setMachineInfoData ((Req_GetMachineInfo.Response)request.Resp);
			}
		}else if (request.command () == Req_GetPrizeUserHorn.COMMAND) {
			
			if (request.getResponseType () == typeof(Req_GetPrizeUserHorn.Response)) {
				UserPrizeStringProxy proxy = Facade.RetrieveProxy (UserPrizeStringProxy.NAME) as UserPrizeStringProxy;
				proxy.setPrizeStringsData ((Req_GetPrizeUserHorn.Response)request.Resp);
			}
		}else if (request.command () == Req_GetPrizeUserLists.COMMAND) {
			
			if (request.getResponseType () == typeof(Req_GetPrizeUserLists.Response)) {
				UserPrizeListsProxy proxy = Facade.RetrieveProxy (UserPrizeListsProxy.NAME) as UserPrizeListsProxy;
				proxy.setUserPrizeLists ((Req_GetPrizeUserLists.Response)request.Resp);
			}
		}else if (request.command () == Req_GetMachinePrizeBallData.COMMAND) {
			
			if (request.getResponseType () == typeof(Req_GetMachinePrizeBallData.Response)) {
				GameBallProxy proxy = Facade.RetrieveProxy (GameBallProxy.NAME) as GameBallProxy;
				proxy.setBallLists ((Req_GetMachinePrizeBallData.Response)request.Resp);
			}
		}else if (request.command () == Req_MachineStartGrab.COMMAND) {

			if (request.getResponseType () == typeof(Req_MachineStartGrab.Response)) {
				GameBallProxy proxy = Facade.RetrieveProxy (GameBallProxy.NAME) as GameBallProxy;
				proxy.setGameInfo ((Req_MachineStartGrab.Response)request.Resp);
			}
		}


		SendNotification (request.Api,request);
	}
}

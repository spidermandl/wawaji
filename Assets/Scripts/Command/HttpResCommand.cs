using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Reflection;

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
			
			setProxy<Req_UserLogin,AccountProxy,Req_UserLogin.Response>(request);

		}else if (request.command () == Req_GetPrizeInfo.COMMAND) {
			
			setProxy<Req_GetPrizeInfo,UserPrizeInfoProxy,Req_GetPrizeInfo.Response>(request);

		}else if (request.command () == Req_GetAllPrize.COMMAND) {
			
			setProxy<Req_GetAllPrize,PrizeSetProxy,Req_GetAllPrize.Response>(request);

		}else if (request.command () == Req_GetMachinePrizeInfo.COMMAND) {
			
			setProxy<Req_GetMachinePrizeInfo,MachinePrizeProxy,Req_GetMachinePrizeInfo.Response>(request);

		}else if (request.command () == Req_GetMachineInfo.COMMAND) {
			
			setProxy<Req_GetMachineInfo,MachineInfoProxy,Req_GetMachineInfo.Response>(request);

		}else if (request.command () == Req_GetPrizeUserHorn.COMMAND) {
			
			setProxy<Req_GetPrizeUserHorn,UserPrizeStringProxy,Req_GetPrizeUserHorn.Response>(request);

		}else if (request.command () == Req_GetPrizeUserLists.COMMAND) {
			
			setProxy<Req_GetPrizeUserLists,UserPrizeListsProxy,Req_GetPrizeUserLists.Response>(request);

		}else if (request.command () == Req_GetMachinePrizeBallData.COMMAND) {
			
			setProxy<Req_GetMachinePrizeBallData,GameBallProxy,Req_GetMachinePrizeBallData.Response>(request);

		}else if (request.command () == Req_MachineStartGrab.COMMAND) {

			setProxy<Req_MachineStartGrab,GameBallProxy,Req_MachineStartGrab.Response>(request);

		}else if (request.command () == Req_GetNewsLists.COMMAND) {

			setProxy<Req_GetNewsLists,NewsProxy,Req_GetNewsLists.Response>(request);

		}else if (request.command () == Req_UserRecharge.COMMAND) {

			setProxy<Req_UserRecharge,AccountProxy,Req_UserRecharge.Response>(request);

		}else if (request.command () == Req_MachineEndGrab.COMMAND) {

			setProxy<Req_MachineEndGrab,GameBallProxy,Req_MachineEndGrab.Response>(request);

		}else if (request.command () == Req_GetPrizeUseCoin.COMMAND){

			setProxy<Req_GetPrizeUseCoin,AccountProxy,Req_GetPrizeUseCoin.Response>(request);

		}else if (request.command () == Req_UsePrize.COMMAND){

			setProxy<Req_UsePrize,UserPrizeInfoProxy,Req_UsePrize.Response>(request);
		}


		SendNotification (request.Api,request);
	}

	/// <summary>
	/// Sets the proxy.
	/// </summary>
	/// <param name="request">Request.</param>
	/// <typeparam name="T1">The 1st type parameter.</typeparam>
	/// <typeparam name="T2">The 2nd type parameter.</typeparam>
	/// <typeparam name="T3">The 3rd type parameter.</typeparam>
	private void setProxy<T1,T2,T3>(Request request) where T1:Request where T2:BaseProxy where T3:Request.Response{
		if (request.getResponseType () == typeof(T3)) {
			FieldInfo fi = typeof(T2).GetField ("NAME");
			string name = (string)(fi.GetValue(typeof(T2)));
			if(Facade.RetrieveProxy (name) ==null){
				Type t = typeof(T2);
				Type[] pt = new Type[1];
				pt[0] = typeof(string);
				//根据参数类型获取构造函数 
				ConstructorInfo ci = t.GetConstructor(pt); 
				//构造Object数组，作为构造函数的输入参数 
				object[] obj = new object[1]{name};   
				//调用构造函数生成对象 
				T2 o = ci.Invoke(obj) as T2;
				Facade.RegisterProxy (o);
			}

			T2 proxy = Facade.RetrieveProxy (name) as T2;
			proxy.bindingData ((T3)request.Resp);
		}
	}
}

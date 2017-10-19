using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using LitJson;

/// <summary>
/// 开始游戏	用于判断用户金币是否满足游戏,开始游戏
/// </summary>
public class Req_MachineStartGrab :Request {

	new public const string COMMAND = "Machine.MachineStartGrab";

	new protected string _api = Req_MachineStartGrab.COMMAND;

	public const int SUCCESS =0;//0表示成功
	public const int POOR =1;// 1表示金币不足

	public Req_MachineStartGrab()
	{
		base.Api = this._api;
		base.Form = this._form = new WWWForm();
	}


	[Serializable]
	new public class Response : Request.Response{
		//{"ret":200,"data":{"code":0,"msg":"","list":[],"info":"d7mxh"},"msg":""}
		public Data data;

		[Serializable]
		public class Data
		{
			public int code;//操作码，0表示成功， 1表示金币不足
			public Info info;
			public string msg;
		}

		[Serializable]
		public class Info
		{
			public string game_id;
			public List<string> ball_arr;//不可抓中的海洋球ID数组
		}

	}

	public override Request.Response parseLogicResponse(string json){
		try{
			return JsonHelper.DeserializeJsonToObject<Req_MachineStartGrab.Response> (json);
		}catch(JsonException e){
			throw e;
		}
	}

	protected override string getChildMsg(){
		if (base._response.GetType () != typeof(Response))
			return base.getChildMsg ();
		return ((Response)_response).data.msg;
	}

	public override string command ()
	{
		return COMMAND;
	}
}

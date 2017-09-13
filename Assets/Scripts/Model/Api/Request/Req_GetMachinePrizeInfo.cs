using UnityEngine;
using System.Collections;
using System;

/// <summary>
/// 用于获取某类型娃娃机的中奖列表
/// </summary>
public class Req_GetMachinePrizeInfo :Request {

	new public const string COMMAND = "Machine.GetMachinePrizeInfo";

	new protected string _api = Req_GetMachinePrizeInfo.COMMAND;

	public Req_GetMachinePrizeInfo()
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
			public int code;
			public Info info;
			public string msg;
		}

		[Serializable]
		public class Info
		{
			public int id;
			public string name;
			public string num;
		}


	}

	public override Request.Response parseLogicResponse(string json){
		base._response = JsonUtility.FromJson<Req_GetMachinePrizeInfo.Response>(json);
		return base._response;
	}
	public override string command ()
	{
		return COMMAND;
	}
}

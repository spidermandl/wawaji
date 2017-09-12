using UnityEngine;
using System.Collections;
using System;

/// <summary>
/// 获取娃娃机内海洋球数据	用于获取单个娃娃机获取娃娃机内海洋球数据
/// </summary>
public class Req_GetMachinePrizeBallData :Request {

	new public const string COMMAND = "Machine.GetMachinePrizeBallData";

	new protected string _api = Req_GetMachinePrizeBallData.COMMAND;

	public Req_GetMachinePrizeBallData()
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

	public override Request.Response parseResponse(string json){
		base._response = JsonUtility.FromJson<Req_GetMachinePrizeBallData.Response>(json);
		return base._response;
	}
	public override string command ()
	{
		return COMMAND;
	}
}

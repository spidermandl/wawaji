using UnityEngine;
using System.Collections;
using System;

/// <summary>
///获取娃娃机列表信息	用于获取娃娃机列表信息
/// </summary>
public class Req_GetMachineInfo :Request {

	new public const string COMMAND = "Machine.GetMachineInfo";

	new protected string _api = Req_GetMachineInfo.COMMAND;

	public Req_GetMachineInfo()
	{
		base.Api = this._api;
		base.Form = this._form = new WWWForm();
	}

	[Serializable]
	new public class Response : Request.Response{
		//{"ret":200,"data":{"code":0,"msg":"","list":[],"info":"d7mxh"},"msg":""}
		public int ret;
		public string msg;
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
			public string type;//	用户类型（1:手机号登录，2：微信登录，3：游客登录）
			public string name;
			public string phone;
			public string pic;
			public string wxid;
			public string coin;
		}


	}

	public override Request.Response parseResponse(string json){
		base._response = JsonUtility.FromJson<Req_GetMachineInfo.Response>(json);
		return base._response;
	}

}

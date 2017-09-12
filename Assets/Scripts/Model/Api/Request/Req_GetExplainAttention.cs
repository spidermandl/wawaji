using UnityEngine;
using System.Collections;
using System;

/// <summary>
/// 获取游戏说明,注意事项;用于获取游戏说明,注意事项
/// </summary>
public class Req_GetExplainAttention :Request {

	new public const string COMMAND = "News.GetExplainAttention";

	new protected string _api = Req_GetExplainAttention.COMMAND;

	public Req_GetExplainAttention()
	{
		base.Api = this._api;
		//base.Form = this._form = new WWWForm();
	}

	[Serializable]
	new public class Response : Request.Response{
		//{"ret":200,"data":{"code":0,"msg":"","list":[],"info":"d7mxh"},"msg":""}
		public Data data;

		[Serializable]
		public class Data
		{
			public int code;//操作码，0表示成功， 1表示用户不存在, 99表示用户登录异常
			public Info info;
			//public string msg;
		}
		[Serializable]
		public class Info
		{
			public string explain;
			public string attention;
		}

	}

	public override Request.Response parseResponse(string json){
		base._response = JsonUtility.FromJson<Req_GetExplainAttention.Response>(json);
		return base._response;
	}
	public override string command ()
	{
		return COMMAND;
	}

	public string getAwareness(){
		return ((Response)_response).data.info.attention;
	}

	public string getInstruction(){
		return ((Response)_response).data.info.explain;
	}
}

using UnityEngine;
using System.Collections;
using System;
using LitJson;
/// <summary>
/// 获取用户实物中奖信息	用于获取单个用户实物中奖信息
/// </summary>
public class Req_UserLogout :Request {

	new public const string COMMAND = "User.UserLogout";

	new protected string _api = Req_UserLogout.COMMAND;

	public Req_UserLogout()
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
			public int code;//操作码，0表示成功，99表示用户登录异常
			public string msg;
		}


	}

	public override Request.Response parseLogicResponse(string json){
		try{
			return JsonHelper.DeserializeJsonToObject<Req_UserLogout.Response> (json);
			//base._response = JsonUtility.FromJson<Req_GetUpdatePics.Response>(json);
		}catch(JsonException e){
			throw e;
		}
	}

	public override string command ()
	{
		return COMMAND;
	}
}

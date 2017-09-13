using UnityEngine;
using System.Collections;
using System;
using Newtonsoft.Json;

/// <summary>
/// 用户退出	用于用户退出登录
/// </summary>
public class Req_UserRecharge :Request {

	new public const string COMMAND = "User.UserRecharge";

	new protected string _api = Req_UserRecharge.COMMAND;

	int amount;
	public int Amount{
		get{return this.amount;}
		set{ amount = value;_form.AddField ("amount", value);}
	}

	public Req_UserRecharge()
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
			return JsonHelper.DeserializeJsonToObject<Req_UserRecharge.Response> (json);
		}catch(JsonSerializationException e){
			throw e;
		}
	}

	public override string command ()
	{
		return COMMAND;
	}
}

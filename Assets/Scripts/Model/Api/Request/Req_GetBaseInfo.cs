using UnityEngine;
using System.Collections;
using System;
using LitJson;

/// <summary>
/// 	获取用户基本信息	用于获取单个用户基本信息
/// </summary>
public class Req_GetBaseInfo :Base_Req_UserInfo {

	new public const string COMMAND = "User.GetBaseInfo";

	new protected string _api = Req_GetBaseInfo.COMMAND;

	public const int SUCCESS = 0;//0表示成功， 
	public const int NO_USER = 1;//1表示用户不存在, 
	public const int ERROR = 99;//99表示用户登录异常

	public Req_GetBaseInfo()
	{
		base.Api = this._api;
		base.Form = this._form = new WWWForm();
	}

//	[Serializable]
//	new public class Response : Request.Response{
//		//{"ret":200,"data":{"code":0,"msg":"","list":[],"info":"d7mxh"},"msg":""}
//		public Data data;
//
//		[Serializable]
//		public class Data
//		{
//			public int code;//操作码，0表示成功， 1表示用户不存在, 99表示用户登录异常
//			public Info info;
//			public string msg;
//		}
//		[Serializable]
//		public class Info
//		{
//			public int id;
//			public int type;//用户类型（1:手机号注册，2：微信注册，3：游客登录）
//			public string name;
//			public string phone;
//			public string nickname;
//			public string pic;
//			public string wxid;
//			public int coin;
//			public string uuid;
//			public string token;
//		}
//
//	}

	public override Request.Response parseLogicResponse(string json){
		try{
			return JsonHelper.DeserializeJsonToObject<Req_GetBaseInfo.Response> (json);
		}catch(JsonException e){
			throw e;
		}
	}
	public override string command ()
	{
		return COMMAND;
	}

}

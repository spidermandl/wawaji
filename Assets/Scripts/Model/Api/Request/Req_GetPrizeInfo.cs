using UnityEngine;
using System.Collections;
using System;
using Newtonsoft.Json;

/// <summary>
/// 获取用户实物中奖信息	用于获取单个用户实物中奖信息
/// </summary>
public class Req_GetPrizeInfo :Request {

	new public const string COMMAND = "User.GetPrizeInfo";

	new protected string _api = Req_GetPrizeInfo.COMMAND;


	public Req_GetPrizeInfo()
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
			public int code;//操作码，0表示成功， 1表示用户不存在, 99表示用户登录异常
			public Info[] info;
			public string msg;
		}

		[Serializable]
		public class Info
		{
			public string id;
			public int prize_id;
			public string name;
			public string price;
			public string coin;
			public string pic;
			public string desc;
			public int status;//奖品状态(1:待领取,2:已领取,3:已兑换,4:已回购)
		}


	}

	public override Request.Response parseLogicResponse(string json){
		try{
			return JsonHelper.DeserializeJsonToObject<Req_GetPrizeInfo.Response> (json);
		}catch(JsonSerializationException e){
			throw e;
		}
	}
	public override string command ()
	{
		return COMMAND;
	}
}

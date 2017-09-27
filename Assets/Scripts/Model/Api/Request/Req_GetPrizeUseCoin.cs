using UnityEngine;
using System.Collections;
using System;
using Newtonsoft.Json;

/// <summary>
/// 用金币兑换奖品	用金币兑换奖品
/// </summary>
public class Req_GetPrizeUseCoin :Request {

	new public const string COMMAND = "Prize.GetPrizeUseCoin";

	new protected string _api = Req_GetPrizeUseCoin.COMMAND;

	int prizeId;
	public int PrizeId{
		get{ return this.prizeId; }
		set{ prizeId = value;_form.AddField ("prizeId", value);}
	}

	public Req_GetPrizeUseCoin()
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
			public int code;//0表示成功,1表示金币不足，2表示奖品库存不足
			public Info info;
			public string msg;
		}

		[Serializable]
		public class Info
		{
			public int prize_coin;//兑换奖品的金币,前端从用户金币中扣除
		}
	}

	public override Request.Response parseLogicResponse(string json){
		try{
			return JsonHelper.DeserializeJsonToObject<Req_GetPrizeUseCoin.Response> (json);
		}catch(JsonSerializationException e){
			throw e;
		}
	}
	public override string command ()
	{
		return COMMAND;
	}
}

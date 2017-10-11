using UnityEngine;
using System.Collections;
using System;
using LitJson;

/// <summary>
/// 获取小喇叭中奖列表	用于获取小喇叭中奖列表
/// </summary>
public class Req_GetPrizeUserHorn :Request {

	new public const string COMMAND = "Prize.GetPrizeUserHorn";

	new protected string _api = Req_GetPrizeUserHorn.COMMAND;

	int mtId;//娃娃机类型ID
	public int MtId{
		get{ return this.mtId; }
		set{ mtId = value;_form.AddField ("mtId", value);}
	}

	public Req_GetPrizeUserHorn()
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
			public string[] info;
			public string msg;
		}


	}

	public override Request.Response parseLogicResponse(string json){
		try{
			return JsonHelper.DeserializeJsonToObject<Req_GetPrizeUserHorn.Response> (json);
		}catch(JsonException e){
			throw e;
		}
	}

	public override string command ()
	{
		return COMMAND;
	}
}

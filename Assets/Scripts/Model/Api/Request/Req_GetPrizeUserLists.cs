using UnityEngine;
using System.Collections;
using System;
using Newtonsoft.Json;

/// <summary>
/// 获取登录页/奖品中心中奖列表	用于获取中奖列表,可选参数:娃娃机类型ID(手机场,黄金城)
/// </summary>
public class Req_GetPrizeUserLists : Request {

	new public const string COMMAND = "Prize.GetPrizeUserLists";

	new protected string _api = Req_GetPrizeUserLists.COMMAND;

	int mtId;//娃娃机类型ID
	public int MtId{
		get{ return this.mtId; }
		set{ mtId = value;_form.AddField ("mtId", value);}
	}

	public Req_GetPrizeUserLists()
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
			public int user_id;
			public string pic;
			public string phone;
			public int type;
			public string user_name;
			public int prize_id;
			public string name;
		}
	}

	public override Request.Response parseLogicResponse(string json){
		try{
			return JsonHelper.DeserializeJsonToObject<Req_GetPrizeUserLists.Response> (json);
		}catch(JsonSerializationException e){
			throw e;
		}
	}
	public override string command ()
	{
		return COMMAND;
	}
}

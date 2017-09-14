using UnityEngine;
using System.Collections;
using System;
using Newtonsoft.Json;

/// <summary>
/// 获取娃娃机的奖品信息	用于奖品中心获取某类型娃娃机的奖品信息
/// </summary>
public class Req_GetMachinePrizeInfo :Request {

	new public const string COMMAND = "Machine.GetMachinePrizeInfo";

	new protected string _api = Req_GetMachinePrizeInfo.COMMAND;

	public Req_GetMachinePrizeInfo()
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
			public Info[] info;
			public string msg;
		}

		[Serializable]
		public class Info
		{
			public int machine_type_id;//娃娃机类型ID
			public int machine_id;//娃娃机ID
			public int prize_id;//奖品ID
			public int ball_id;//海洋球ID
			public string name;//奖品名称
			public int price;//奖品价格
			public int coin;//奖品金币价格
			public string p_pic;//奖品图片
			public string b_pic;//海洋球图片
		}


	}

	public override Request.Response parseLogicResponse(string json){
		try{
			return JsonHelper.DeserializeJsonToObject<Req_GetMachinePrizeInfo.Response> (json);
		}catch(JsonSerializationException e){
			throw e;
		}
	}
	public override string command ()
	{
		return COMMAND;
	}
}

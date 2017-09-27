﻿using UnityEngine;
using System.Collections;
using System;
using Newtonsoft.Json;

/// <summary>
/// 获取娃娃机内海洋球数据	用于获取单个娃娃机获取娃娃机内海洋球数据
/// </summary>
public class Req_GetMachinePrizeBallData :Request {

	new public const string COMMAND = "Machine.GetMachinePrizeBallData";

	new protected string _api = Req_GetMachinePrizeBallData.COMMAND;

	public Req_GetMachinePrizeBallData()
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
			public int prize_id;//奖品ID
			public int ball_id;//海洋球ID
			public string name;//奖品名称
			public int price;//奖品价格
			public int coin;//奖品金币价格
			public string p_pic;//奖品图片
			public string b_pic;//海洋球图片
			public int is_matter;//0金币 1实物奖品
			public int ball_num;//占奖池内海洋球数量
			public int refresh_time;//抓取多少次后刷新奖池
		}

	}

	public override Request.Response parseLogicResponse(string json){
		try{
			return JsonHelper.DeserializeJsonToObject<Req_GetMachinePrizeBallData.Response> (json);
		}catch(JsonSerializationException e){
			throw e;
		}
	}

	public override string command ()
	{
		return COMMAND;
	}
}

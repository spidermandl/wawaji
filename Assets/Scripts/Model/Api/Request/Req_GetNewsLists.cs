using UnityEngine;
using System.Collections;
using System;
using LitJson;

/// <summary>
/// 获取游戏说明,注意事项;用于获取游戏说明,注意事项
/// </summary>
public class Req_GetNewsLists :Request {

	new public const string COMMAND = "News.GetNewsLists";

	new protected string _api = Req_GetNewsLists.COMMAND;

	public Req_GetNewsLists()
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
			public Info[] info;
			public string msg;
		}
		[Serializable]
		public class Info
		{
			public string id;
			public string type_title;//新闻类型
			public string title;//新闻标题
			public string cont;//新闻内容
			public string date_time;//新闻时间

		}

	}

	public override Request.Response parseLogicResponse(string json){
		try{
			return JsonHelper.DeserializeJsonToObject<Req_GetNewsLists.Response> (json);
		}catch(JsonException e){
			throw e;
		}
	}
	public override string command ()
	{
		return COMMAND;
	}
}

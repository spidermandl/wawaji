using UnityEngine;
using System.Collections;
using System;

/// <summary>
/// 获取登录页/奖品中心中奖列表	用于获取中奖列表,可选参数:娃娃机类型ID(手机场,黄金城)
/// </summary>
public class Req_GetPrizeUserList : Request {

	new public const string COMMAND = "Prize.GetPrizeUserList";

	new protected string _api = Req_GetPrizeUserList.COMMAND;

	int mtId;//娃娃机类型ID
	public string MtId{
		get{ return this.mtId; }
		set{ mtId = value;_form.AddField ("mtId", value);}
	}

	public Req_GetPrizeUserList()
	{
		base.Api = this._api;
		base.Form = this._form = new WWWForm();
	}

	[Serializable]
	new public class Response : Request.Response{
		//{"ret":200,"data":{"code":0,"msg":"","list":[],"info":"d7mxh"},"msg":""}
		public int ret;
		public string msg;
		public Data data;

		[Serializable]
		public class Data
		{
			public int code;//操作码，0表示成功， 1表示用户不存在, 99表示用户登录异常
			public string info;
			//public string msg;
		}

	}

	public override Request.Response parseResponse(string json){
		base._response = JsonUtility.FromJson<Req_GetPrizeUserList.Response>(json);
		return base._response;
	}

}

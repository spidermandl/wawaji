using UnityEngine;
using System.Collections;
using System;
using LitJson;

/// <summary>
/// 注册验证码信息
/// </summary>
public class Req_UserLogin :Base_Req_UserInfo {

	new public const string COMMAND = "User.UserLogin";

	new protected string _api = Req_UserLogin.COMMAND;

	string phone;
	string psd;
	string uuid;
	string wxid;
	int type;

	public string Phone{
		get{return this.phone;}
		set{ phone = value;_form.AddField ("phone", value);}
	}
	public string Psd{
		get{ return this.psd; }
		set{ psd = value;_form.AddField ("psd", value);}
	}
	public string Uuid{
		get{ return this.uuid; }
		set{ uuid = value;_form.AddField ("uuid", value);}
	}
	public string Wxid{
		get{ return this.wxid; }
		set{ wxid = value;_form.AddField ("wxid", value);}
	}
	public int Type{
		get{ return this.type; }
		set{ type = value;_form.AddField ("type", value);}
	}

	public Req_UserLogin()
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
	//			public int code;//操作码，0表示成功,1表示账号或密码错误
	//			public string msg;
	//			public Info info;
	//		}
	//
	//		[Serializable]
	//		public class Info{
	//			public int id;
	//			public int type;
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
			return JsonHelper.DeserializeJsonToObject<Req_UserLogin.Response> (json);
		}catch(JsonException e){
			throw e;
		}
	}
	public override string command ()
	{
		return COMMAND;
	}

	protected override string getChildMsg(){
		if (base._response.GetType () != typeof(Response))
			return base.getChildMsg ();
		return ((Response)_response).data.msg;
	}

	public override int getResponseCode(){
		if (base._response.GetType () != typeof(Response))
			return base.getResponseCode ();
		return ((Response)base._response).data.code;
	}
}

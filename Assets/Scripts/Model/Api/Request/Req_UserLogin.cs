using UnityEngine;
using System.Collections;
using System;

/// <summary>
/// 注册验证码信息
/// </summary>
public class Req_UserLogin :Request {

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

	[Serializable]
	new public class Response : Request.Response{
		//{"ret":200,"data":{"code":0,"msg":"","list":[],"info":"d7mxh"},"msg":""}
		public int ret;
		public string msg;
		public Data data;

		[Serializable]
		public class Data
		{
			//			public int code;
			//			public string msg;
			//			public List list;
		}

		[Serializable]
		public class List{

		}

	}

	public override Request.Response parseResponse(string json){
		base._response = JsonUtility.FromJson<Req_UserRegister.Response>(json);
		return base._response;
	}

}

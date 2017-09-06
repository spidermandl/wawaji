using UnityEngine;
using System.Collections;
using System;

/// <summary>
/// 用于用户注册
/// </summary>
public class Req_UserRegister :Request {

	new public const string COMMAND = "User.UserRegister";

	new protected string _api = Req_UserRegister.COMMAND;

	string phone;
	string verCode;
	string msgCode;
	string psd;
	string uuid;

	public string Phone{
		get{return this.phone;}
		set{ phone = value;_form.AddField ("phone", value);}
	}
	public string VerCode{
		get{ return this.verCode; }
		set{ verCode = value;_form.AddField ("verCode", value);}
	}
	public string MsgCode{
		get{ return this.msgCode; }
		set{ msgCode = value;_form.AddField ("msgCode", value);}
	}
	public string Psd{
		get{ return this.psd; }
		set{ psd = value;_form.AddField ("psd", value);}
	}
	public string Uuid{
		get{ return this.uuid; }
		set{ psd = value;_form.AddField ("uuid", value);}
	}

	public Req_UserRegister()
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

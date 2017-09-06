using UnityEngine;
using System.Collections;
using System;

/// <summary>
/// 注册验证码信息
/// </summary>
public class Req_UserRegisterSendMsg :Request {

	new public const string COMMAND = "User.UserRegisterSendMsg";

	new protected string _api = Req_UserRegisterSendMsg.COMMAND;

	string phone;
	string verCode;

	public string Phone{
		get{return this.phone;}
		set{ phone = value;_form.AddField ("phone", value);}
	}
	public string VerCode{
		get{ return this.verCode; }
		set{ verCode = value;_form.AddField ("verCode", value);}
	}

	public Req_UserRegisterSendMsg()
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

using UnityEngine;
using System.Collections;
using System;

/// <summary>
/// 用于发送用户注册短信
/// </summary>
public class Req_UserForgetPsdSendMsg :Request {

	new public const string COMMAND = "User.UserForgetPsdSendMsg";

	new protected string _api = Req_UserForgetPsdSendMsg.COMMAND;

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

	public Req_UserForgetPsdSendMsg()
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
			public int code;//操作码，0表示成功,1表示手机号码格式不正确,2表示图片验证码错误
			public string msg;
			public List list;
		}

		[Serializable]
		public class List{

		}

	}
	public override string command ()
	{
		return COMMAND;
	}

	public override Request.Response parseResponse(string json){
		base._response = JsonUtility.FromJson<Req_UserForgetPsdSendMsg.Response>(json);
		return base._response;
	}

}

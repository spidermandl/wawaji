﻿using UnityEngine;
using System.Collections;
using System;
using LitJson;

/// <summary>
/// 忘记密码，密码重置
/// </summary>
public class Req_UserResetPsd :Request {

	new public const string COMMAND = "User.UserResetPsd";

	new protected string _api = Req_UserResetPsd.COMMAND;
	public const int SUCCESS=0;//0表示成功
	public const int WRONG_PHONE=1;//,1表示手机号码格式不正确
	public const int WRONG_CODE=2;//,2表示图片验证码错误,
	public const int NONE_EXIST_PHONE=3;//3表示手机号码未注册
	public const int NO_TEXT=4;//,4表示用户未获取短信验证码,
	public const int WRONG_TEXT=5;//5表示短信验证码错误
	public const int EXPIRED_TEXT=6;//,6表示短信验证码过期

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
		set{ uuid = value;_form.AddField ("uuid", value);}
	}

	public Req_UserResetPsd()
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
			public int code;//操作码，0表示成功,1表示手机号码格式不正确,2表示图片验证码错误,3表示手机号码未注册,4表示未获取短信验证码,5表示短信验证码错误，6表示短信验证码过期
			public string msg;
			public Info info;
		}

		[Serializable]
		public class Info{

		}

	}

	public override Request.Response parseLogicResponse(string json){
		try{
			return JsonHelper.DeserializeJsonToObject<Req_UserResetPsd.Response> (json);
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

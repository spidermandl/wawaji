﻿using UnityEngine;
using System.Collections;
using System;
using LitJson;

/// <summary>
/// 用户注册发送短信
/// </summary>
public class Req_UserRegisterSendMsg :Request {

	new public const string COMMAND = "User.UserRegisterSendMsg";
	new protected string _api = Req_UserRegisterSendMsg.COMMAND;

	public const int SUCCESS = 0;
	public const int WRONG_FORMAT = 1;
	public const int WRONG_CODE = 2;

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
		public Data data;

		[Serializable]
		public class Data
		{
			public int code;//操作码，0表示成功,1表示手机号码格式不正确,2表示图片验证码错误
			public string msg;
		}


	}

	public override Request.Response parseLogicResponse(string json){
		try{
			return JsonHelper.DeserializeJsonToObject<Req_UserRegisterSendMsg.Response> (json);
			//base._response = JsonUtility.FromJson<Req_GetUpdatePics.Response>(json);
		}catch(JsonException e){
			throw e;
		}
	}
	public override string command ()
	{
		return COMMAND;
	}

	protected override string getChildMsg(){
		return ((Response)_response).data.msg;
	}

	public override int getResponseCode(){
		return ((Response)base._response).data.code;
	}

}

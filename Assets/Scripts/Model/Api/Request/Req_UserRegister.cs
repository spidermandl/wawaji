using UnityEngine;
using System.Collections;
using System;
using Newtonsoft.Json;

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
		set{ uuid = value;_form.AddField ("uuid", value);}
	}

	public Req_UserRegister()
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
			public int code;//操作码，0表示成功,1表示手机号码格式不正确,2表示图片验证码错误,3表示手机号码已存在,4表示用户未获取短信验证码,5表示短信验证码错误,6表示短信验证码过期
			public string msg;
		}

	}

	public override Request.Response parseResponse(string json){
		//base._response = JsonUtility.FromJson<Req_UserRegister.Response>(json);
		try{
			base._response = JsonHelper.DeserializeJsonToObject<Req_UserRegister.Response> (json);
			//base._response = JsonUtility.FromJson<Req_GetUpdatePics.Response>(json);
		}catch(JsonSerializationException e){
			base._response = JsonHelper.DeserializeJsonToObject<Request.Error> (json);
		}
		return base._response;
	}
	public override string command ()
	{
		return COMMAND;
	}

	protected override string getChildMsg(){
		return ((Response)_response).data.msg;
	}
}

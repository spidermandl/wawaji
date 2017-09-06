using UnityEngine;
using System.Collections;
using System;

/// <summary>
/// 忘记密码，密码重置
/// </summary>
public class Req_UserResetPsd :Request {

	new public const string COMMAND = "User.UserResetPsd";

	new protected string _api = Req_UserResetPsd.COMMAND;

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

	public Req_UserResetPsd()
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
			//			public int code;//操作码，0表示成功,1表示手机号码格式不正确,2表示图片验证码错误,3表示手机号码已存在,4表示短信验证码错误,5表示短信验证码过期
			//			public string msg;
			//			public List list;
		}

		[Serializable]
		public class List{

		}

	}

	public override Request.Response parseResponse(string json){
		base._response = JsonUtility.FromJson<Req_UserResetPsd.Response>(json);
		return base._response;
	}

}

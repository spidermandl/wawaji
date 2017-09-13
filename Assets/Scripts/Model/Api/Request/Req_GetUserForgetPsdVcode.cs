using UnityEngine;
using System.Collections;
using System;

/// <summary>
/// 注册验证码信息
/// </summary>
public class Req_GetUserForgetPsdVcode :Request {

	new public const string COMMAND = "User.Req_GetUserForgetPsdVcode";

	new protected string _api=Req_RegisterVcode.COMMAND;


	public Req_GetUserForgetPsdVcode()
	{
		base.Api = this._api;
		base.Form = this._form;
	}

	[Serializable]
	new public class Response : Request.Response{
		//{"ret":200,"data":{"code":0,"msg":"","list":[],"info":"d7mxh"},"msg":""}
		public Data data;

		[Serializable]
		public class Data
		{
			public int code;//操作码，0表示成功
			public string msg;
			public string info;
		}


	}

	public override Request.Response parseResponse(string json){
		base._response = JsonUtility.FromJson<Req_GetUserForgetPsdVcode.Response>(json);
		return base._response;
	}
	public override string command ()
	{
		return COMMAND;
	}
	/// <summary>
	/// Gets the vcode.
	/// </summary>
	/// <returns>The vcode.</returns>
	public string getVcode(){
		return ((Response)base._response).data.info;
	}
}

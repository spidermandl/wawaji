using UnityEngine;
using System.Collections;
using System;
using LitJson;

/// <summary>
/// 注册验证码信息
/// </summary>
public class Req_RegisterVcode :Request {

	new public const string COMMAND = "User.GetUserRegisterVcode";

	new protected string _api=Req_RegisterVcode.COMMAND;


	public Req_RegisterVcode()
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
			public int code;
			public string msg;
			public string info;
		}

	}

	public override Request.Response parseLogicResponse(string json){
		try{
			return JsonHelper.DeserializeJsonToObject<Req_RegisterVcode.Response> (json);
			//base._response = JsonUtility.FromJson<Req_GetUpdatePics.Response>(json);
		}catch(JsonException e){
			throw e;
		}
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

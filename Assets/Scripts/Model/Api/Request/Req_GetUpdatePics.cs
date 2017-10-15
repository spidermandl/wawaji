using UnityEngine;
using System.Collections;
using System;
using LitJson;

/// <summary>
/// 开始游戏	用于判断用户金币是否满足游戏,开始游戏
/// </summary>
public class Req_GetUpdatePics :Request {

	new public const string COMMAND = "Sys.GetUpdatePics";
	public const int NO_UPDATE = 1;
	public const int UPDATE = 0;

	new protected string _api = Req_GetUpdatePics.COMMAND;

	int version;
	public int Version{
		get{ 
			return this.version; 
		}
		set{ version = value;
			this._form.AddField ("version", version);}
	}

	public Req_GetUpdatePics()
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
			public int code;//操作码，0表示成功, 1表示无更新
			public Info info;
			public string msg;
		}

		[Serializable]
		public class Info
		{
			public Entry[] prize;
			public Entry[] ball;
			public int version;
		}

		[Serializable]
		public class Entry
		{
			public string id;
			public string pic;
			public string pic_path;
		}
	}

	public override Request.Response parseLogicResponse(string json){
		try{
			return JsonHelper.DeserializeJsonToObject<Req_GetUpdatePics.Response> (json);
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
	/// 获取当前版本
	/// </summary>
	/// <returns>The online version.</returns>
	public int getOnlineVersion(){
		if (base._response.GetType() == typeof(Req_GetUpdatePics.Response)) {
			return ((Req_GetUpdatePics.Response)base._response).data.info.version;
		} 
		return this.version;

	}

	public Response.Entry[] getBall(){
		if (base._response.GetType() == typeof(Req_GetUpdatePics.Response)) {
			return ((Req_GetUpdatePics.Response)base._response).data.info.ball;
		} 
		return new Response.Entry[0];
	}

	public Response.Entry[] getPrize(){
		if (base._response.GetType() == typeof(Req_GetUpdatePics.Response)) {
			return ((Req_GetUpdatePics.Response)base._response).data.info.prize;
		} 
		return new Response.Entry[0];
	}


	public override int getResponseCode(){
		if (base._response.GetType() == typeof(Req_GetUpdatePics.Response)) {
			return ((Req_GetUpdatePics.Response)base._response).data.code;
		} 

		return ((Req_GetUpdatePics.Error)base._response).data.code;
	}
}

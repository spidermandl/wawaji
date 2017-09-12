using UnityEngine;
using System.Collections;
using System;

/// <summary>
/// 开始游戏	用于判断用户金币是否满足游戏,开始游戏
/// </summary>
public class Req_GetUpdatePics :Request {

	new public const string COMMAND = "Sys.GetUpdatePics";

	new protected string _api = Req_GetUpdatePics.COMMAND;

	string version;
	public string Version{
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
			public int code;//操作码，0表示成功， 1表示无效娃娃机
			public Info info;
			//public string msg;
		}

		[Serializable]
		public class Info
		{
			public Entry[] prize;
			public Entry[] ball;
			public string version;
		}

		[Serializable]
		public class Entry
		{
			public string id;
			public string pic;
		}
	}

	public override Request.Response parseResponse(string json){
		base._response = JsonUtility.FromJson<Req_GetUpdatePics.Response>(json);
		return base._response;
	}
	public override string command ()
	{
		return COMMAND;
	}

	public Req_GetUpdatePics.Response getResponse(){
		return (Req_GetUpdatePics.Response)base._response;
	}
}

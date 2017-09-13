﻿using UnityEngine;
using System.Collections;
using System;

/// <summary>
/** $token = 'Your Token Here …';
	$allParams['token'] = $token;
	$tmpArr = $allParams;
	sort($tmpArr, SORT_STRING);
	$tmpStr = implode( $tmpArr );
	$tmpStr = sha1( $tmpStr );
**/
/// </summary>
public abstract class Request {
	public const string COMMAND = null;

	protected string _api;
	protected WWWForm _form = null;
	protected Response _response = null;

	public string Api{
		get{ 
			return this._api; 
		}
		set{ _api = value;}
	}
	public WWWForm Form{
		get{ return this._form; }
		set{ _form = value;}
	}


	protected string userId;//用户ID
	protected string token;//用户登录标识
	protected int mId;//娃娃机ID

	public string UserId{
		get{return this.userId;}
		set{ userId = value;_form.AddField ("userId", value);}
	}
	public string Token{
		get{ return this.token; }
		set{ token = value;_form.AddField ("token", value);}
	}
	public int MId{
		get{ return this.mId; }
		set{ mId = value;_form.AddField ("mId", value);}
	}
	public Request()
	{
		
	}

	public abstract class Response{
		public int ret;
		public string msg;
	}

	[Serializable]
	public class Error : Request.Response{
		public Data data;

		[Serializable]
		public class Data
		{
			public int code;//操作码，0表示成功, 1表示无更新
			public ArrayList info;
			public string msg;
		}
	}

	abstract public Response parseResponse(string json);
	abstract public string command ();

	protected virtual string getChildMsg(){
		return null;
	}

	public virtual int getResponseCode(){
		return 0;
	}

	public string getMsg(){
		if(getChildMsg()==null)
			return _response.msg;
		return getChildMsg ();
	}

}

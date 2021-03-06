﻿using UnityEngine;
using System.Collections;
using System;
using LitJson;

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
	public Response Resp{
		get{ return this._response; }
		set{ _response = value;}
	}


	protected int userId;//用户ID
	protected string token;//用户登录标识
	protected int mId;//娃娃机ID

	public int UserId{
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
		Request request;
		public Request Req{
			get{ return this.request;}
			set{ request = value;}
		}

		public int ret;
		public string msg;
	}

	[Serializable]
	public class Error : Request.Exception{
		public Data data;

		[Serializable]
		public class Data
		{
			public int code;//操作码，0表示成功, 1表示无更新
			public string msg;
		}
	}
	[Serializable]
	public class Exception : Request.Response{
	}

	abstract public Response parseLogicResponse(string json);
	abstract public string command ();

	protected virtual string getChildMsg(){
		if (_response.GetType () == typeof(Error)) {
			return ((Error)_response).data.msg;
		}
		return null;
	}

	public virtual int getResponseCode(){
		return -1;
	}
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/// 外部调用
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/// <summary>
	/// Gets the message.
	/// </summary>
	/// <returns>The message.</returns>
	public string getMsg(){
		if(getChildMsg()==null)
			return _response.msg;
		return getChildMsg ();
	}
	/// <summary>
	/// Parses the error.
	/// </summary>
	/// <returns>The error.</returns>
	/// <param name="msg">Message.</param>
	public Response parseError(string msg){
		Exception e = new Exception ();
		e.msg = msg;
		return e;
	}
	/// <summary>
	/// Parses the response.
	/// </summary>
	/// <returns>The response.</returns>
	/// <param name="json">Json.</param>
	public Response parseResponse(string json){
		try{
			_response = parseLogicResponse(json);
			if(_response ==null)
				_response = new Exception();
			_response.Req =this;
			//base._response = JsonUtility.FromJson<Req_GetUpdatePics.Response>(json);
		}catch(JsonException e){
			try{
				_response = JsonHelper.DeserializeJsonToObject<Request.Error> (json);
				_response.Req =this;
			}catch(JsonException e1){
				_response = JsonHelper.DeserializeJsonToObject<Request.Exception> (json);
				_response.Req =this;
			}
		}

		return _response;
	}
	/// <summary>
	/// Gets the type of the response.
	/// </summary>
	/// <returns>The response type.</returns>
	public Type getResponseType(){
		return _response.GetType ();
	}

}

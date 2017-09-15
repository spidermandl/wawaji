using UnityEngine;
using System.Collections;
using System;
using Newtonsoft.Json;

/// <summary>
///获取娃娃机列表信息	用于获取娃娃机列表信息
/// </summary>
public class Req_GetMachineInfo :Request {

	new public const string COMMAND = "Machine.GetMachineInfo";

	new protected string _api = Req_GetMachineInfo.COMMAND;

	public Req_GetMachineInfo()
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
			public int code;
			public Info[] info;
			public string msg;
		}

		[Serializable]
		public class Info
		{
			public string name;
			public int machine_type_id;
			public Machine[] machine;
		}

		[Serializable]
		public class Machine
		{
			public int coin;
			public int machine_id;
		} 
	}

	public override Request.Response parseLogicResponse(string json){
		try{
			return JsonHelper.DeserializeJsonToObject<Req_GetMachineInfo.Response> (json);
		}catch(JsonSerializationException e){
			throw e;
		}
	}
	public override string command ()
	{
		return COMMAND;
	}
}

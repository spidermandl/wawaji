using UnityEngine;
using System.Collections;
using System;

/// <summary>
/// Req_GetBaseInfo 和 Req_UserLogin 父类别
/// </summary>
abstract public class Base_Req_UserInfo : Request {

	[Serializable]
	new public class Response : Request.Response{
		//{"ret":200,"data":{"code":0,"msg":"","list":[],"info":"d7mxh"},"msg":""}
		public Data data;

		[Serializable]
		public class Data
		{
			public int code;//操作码，0表示成功,1表示账号或密码错误
			public string msg;
			public Info info;
		}

		[Serializable]
		public class Info{
			public int id;
			public int type;
			public string name;
			public string phone;
			public string nickname;
			public string pic;
			public string wxid;
			public int coin;
			public string uuid;
			public string token;
		}

	}

}

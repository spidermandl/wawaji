using UnityEngine;
using System.Collections;
using System;

/// <summary>
/// Req_GetBaseInfo 和 Req_UserLogin 父类别
/// </summary>
abstract public class Base_Req_UserInfo : Request {

	public const int SUCCESS=0;//0表示成功
	public const int WRONG_USER_FORMAT=1;//,1表示用户类型错误
	public const int WRONG_PHONE_FORMAT=2;//,2表示手机号码格式不正确
	public const int NONE_EXIST_USER=3;//3表示账号不存在
	public const int WRONG_ACCOUNT_OR_PASSWORD=4;//,4表示手机号或密码错误

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

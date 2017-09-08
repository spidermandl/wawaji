﻿using UnityEngine;
using System.Collections;
using System;

/// <summary>
/// 使用奖品	使用奖品,领取/兑换/回购
/// </summary>
public class Req_UserPrize :Request {

	new public const string COMMAND = "User.UserPrize";

	new protected string _api = Req_UserPrize.COMMAND;

	int prizeId;//必须
	public string MId{
		get{ return this.prizeId; }
		set{ prizeId = value;_form.AddField ("prizeId", value);}
	}
	int userPrizeId;//必须
	public string UserPrizeId{
		get{ return this.userPrizeId; }
		set{ userPrizeId = value;_form.AddField ("userPrizeId", value);}
	}
	int userPrizeType;//必须
	public string UserPrizeType{
		get{ return this.userPrizeType; }
		set{ userPrizeType = value;_form.AddField ("userPrizeType", value);}
	}
	string userName;
	public string UserName{
		get{ return this.userName; }
		set{ userName = value;_form.AddField ("userName", value);}
	}
	string userAddr;
	public string UserAddr{
		get{ return this.userAddr; }
		set{ userAddr = value;_form.AddField ("userAddr", value);}
	}
	string userPhone;
	public string UserPhone{
		get{ return this.userPhone; }
		set{ userPhone = value;_form.AddField ("userPhone", value);}
	}
	int buyBackType;
	public string BuyBackType{
		get{ return this.mId; }
		set{ mId = value;_form.AddField ("mId", value);}
	}
	string buyBackName;
	public string BuyBackName{
		get{ return this.mId; }
		set{ mId = value;_form.AddField ("mId", value);}
	}
	string buyBackPhone;
	public string BuyBackPhone{
		get{ return this.buyBackPhone; }
		set{ buyBackPhone = value;_form.AddField ("buyBackPhone", value);}
	}
	string buyBackAli;
	public string BuyBackAli{
		get{ return this.mId; }
		set{ mId = value;_form.AddField ("mId", value);}
	}
	string buyBackBank;
	public string BuyBackBank{
		get{ return this.buyBackAli; }
		set{ buyBackAli = value;_form.AddField ("buyBackAli", value);}
	}
	string buyBackCard;
	public string BuyBackCard{
		get{ return this.buyBackCard; }
		set{ buyBackCard = value;_form.AddField ("buyBackCard", value);}
	}


	public Req_UserPrize()
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
			public int code;//操作码，0表示成功， 1表示无效娃娃机
			public string info;
			//public string msg;
		}

	}

	public override Request.Response parseResponse(string json){
		base._response = JsonUtility.FromJson<Req_UserPrize.Response>(json);
		return base._response;
	}

}
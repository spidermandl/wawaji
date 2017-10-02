using UnityEngine;
using System.Collections;
using System;
using Newtonsoft.Json;

/// <summary>
/// 使用奖品	使用奖品,领取/兑换/回购
/// </summary>
public class Req_UsePrize :Request {

	new public const string COMMAND = "Prize.UsePrize";

	new protected string _api = Req_UsePrize.COMMAND;

	int prizeId;//必须
	public int PrizeId{
		get{ return this.prizeId; }
		set{ prizeId = value;_form.AddField ("prizeId", value);}
	}
	int userPrizeId;//必须
	public int UserPrizeId{
		get{ return this.userPrizeId; }
		set{ userPrizeId = value;_form.AddField ("userPrizeId", value);}
	}
	int usePrizeType;//必须
	public int UsePrizeType{
		get{ return this.usePrizeType; }
		set{ usePrizeType = value;_form.AddField ("usePrizeType", value);}
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
	public int BuyBackType{
		get{ return this.buyBackType; }
		set{ buyBackType = value;_form.AddField ("buyBackType", value);}
	}
	string buyBackName;
	public string BuyBackName{
		get{ return this.buyBackName; }
		set{ buyBackName = value;_form.AddField ("buyBackName", value);}
	}
	string buyBackPhone;
	public string BuyBackPhone{
		get{ return this.buyBackPhone; }
		set{ buyBackPhone = value;_form.AddField ("buyBackPhone", value);}
	}
	string buyBackAli;
	public string BuyBackAli{
		get{ return this.buyBackAli; }
		set{ buyBackAli = value;_form.AddField ("buyBackAli", value);}
	}
	string buyBackBank;
	public string BuyBackBank{
		get{ return this.buyBackBank; }
		set{ buyBackBank = value;_form.AddField ("buyBackBank", value);}
	}
	string buyBackCard;
	public string BuyBackCard{
		get{ return this.buyBackCard; }
		set{ buyBackCard = value;_form.AddField ("buyBackCard", value);}
	}


	public Req_UsePrize()
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
			public int code;//0表示成功,1表示无效使用类型，2表示已被使用
		}

	}

	public override Request.Response parseLogicResponse(string json){

		try{
			return JsonHelper.DeserializeJsonToObject<Req_UsePrize.Response> (json);
			//base._response = JsonUtility.FromJson<Req_GetUpdatePics.Response>(json);
		}catch(JsonSerializationException e){
			throw e;
		}
	}
	public override string command ()
	{
		return COMMAND;
	}

	protected override string getChildMsg(){
		if (base._response.GetType () == typeof(Req_UsePrize.Response)) {
			switch(((Req_UsePrize.Response)base._response).data.code){
			case 0:
				return "操作成功";
				break;
			case 1:
				return "无效使用类型";
				break;
			case 2:
				return "该奖品已被使用";
				break;
			default:
				return base.getChildMsg ();
			}

		}
		return null;
	}

	public override int getResponseCode(){
		if (base._response.GetType () != typeof(Response))
			return base.getResponseCode ();
		return ((Response)base._response).data.code;
	}
}

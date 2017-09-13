using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using System.IO;
using System.Text;

/// <summary>
/// 资源更新model类
/// </summary>
public class PrizeInfoProxy : PureMVC.Patterns.Proxy {

	public const string NAME = "PrizeInfoProxy";

	List<PrizeItem> items;
	public List<PrizeItem> Items{
		get{return this.items;}
		set{ items = value;}
	}

	public class PrizeItem{
		public string id;
		public int prize_id;
		public string name;
		public string price;
		public string coin;
		public string pic;
		public string desc;
		public int status;//奖品状态(1:待领取,2:已领取,3:已兑换,4:已回购)
	}


	public PrizeInfoProxy (string proxyName)
		: base(proxyName, null){
	
	}
	/// <summary>
	/// Sets the user data.
	/// </summary>
	/// <param name="meta">Meta.</param>
	public void setPrizeInfoData(Req_GetPrizeInfo.Response meta){
		List<PrizeItem> items = new List<PrizeItem> ();
		foreach(Req_GetPrizeInfo.Response.Info info in meta.data.info ){
			PrizeItem i = new PrizeItem ();
			i.id = info.id;
			i.prize_id = info.prize_id;
			i.name = info.name;
			i.price = info.price;
			i.coin = info.coin;
			i.pic = info.pic;
			i.desc = info.desc;
			i.status = info.status;//奖品状态(1:待领取,2:已领取,3:已兑换,4:已回购)
			items.Add (i);
		}

		this.Items = items;
	}

}


﻿using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using System.IO;
using System.Text;

/// <summary>
/// 用户中奖的奖品
/// </summary>
public class UserPrizeInfoProxy : BaseProxy {

	public const string NAME = "UserPrizeInfoProxy";

	List<PrizeItem> items;
	public List<PrizeItem> Items{
		get{return this.items;}
		set{ items = value;}
	}

	/// <summary>
	/// 当前选中prize
	/// </summary>
	PrizeItem selectedItem;
	public PrizeItem SelectedItem{
		get{return this.selectedItem;}
		set{ selectedItem = value;}
	}

	public class PrizeItem{
		public int id;
		public int prize_id;
		public string name;
		public string price;
		public int coin;
		public string pic;
		public string desc;
		public int status;//奖品状态(1:待领取,2:已领取,3:已兑换,4:已回购)
	}


	public UserPrizeInfoProxy (string proxyName)
		: base(proxyName, null){
	
	}

	public override void bindingData (Request.Response meta)
	{
		if (meta.GetType () == typeof(Req_GetPrizeInfo.Response)) {
			bindingData ((Req_GetPrizeInfo.Response)meta);
		}else if (meta.GetType () == typeof(Req_UsePrize.Response)) {
			bindingData ((Req_UsePrize.Response)meta);
		}
	}

	/// <summary>
	/// Sets the user data.
	/// </summary>
	/// <param name="meta">Meta.</param>
	public void bindingData(Req_GetPrizeInfo.Response meta){
		List<PrizeItem> items = new List<PrizeItem> ();
		foreach(Req_GetPrizeInfo.Response.Info info in meta.data.info ){
			PrizeItem i = new PrizeItem ();
			i.id = int.Parse(info.id);
			i.prize_id = int.Parse(info.prize_id);
			i.name = info.name;
			i.price = info.price;
			i.coin = int.Parse(info.coin);
			i.pic = info.pic;
			i.desc = info.desc;
			i.status = int.Parse(info.status);//奖品状态(1:待领取,2:已领取,3:已兑换,4:已回购)
			items.Add (i);
		}

		this.Items = items;
		this.SelectedItem = null;
	}

	/// <summary>
	/// Sets the user data.
	/// </summary>
	/// <param name="meta">Meta.</param>
	public void bindingData(Req_UsePrize.Response meta){
		
	}

}


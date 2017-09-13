using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using System.IO;
using System.Text;

/// <summary>
/// 
/// </summary>
public class PrizeSetProxy : PureMVC.Patterns.Proxy {

	public const string NAME = "PrizeSetProxy";

	List<PrizeItem> items;
	public List<PrizeItem> Items{
		get{return this.items;}
		set{ items = value;}
	}

	public class PrizeItem{
		public int id;
		public string name;
		public int price;
		public int coin;
		public string pic;
		public string desc;
	}


	public PrizeSetProxy (string proxyName)
		: base(proxyName, null){

	}
	/// <summary>
	/// Sets the user data.
	/// </summary>
	/// <param name="meta">Meta.</param>
	public void setPrizeInfoData(Req_GetAllPrize.Response meta){
		List<PrizeItem> items = new List<PrizeItem> ();
		foreach(Req_GetAllPrize.Response.Info info in meta.data.info ){
			PrizeItem i = new PrizeItem ();
			i.id = info.id;
			i.name = info.name;
			i.price = info.price;
			i.coin = info.coin;
			i.pic = info.pic;
			i.desc = info.desc;
			items.Add (i);
		}

		this.Items = items;
	}

}


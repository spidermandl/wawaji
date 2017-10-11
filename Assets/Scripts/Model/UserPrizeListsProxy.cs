using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using System.IO;
using System.Text;

/// <summary>
/// 用户中奖名单
/// </summary>
public class UserPrizeListsProxy : BaseProxy {

	public const string NAME = "UserPrizeListsProxy";

	List<RecordsItem> items;
	public List<RecordsItem> Items{
		get{return this.items;}
		set{ items = value;}
	}

	public class RecordsItem{
		public int user_id;
		public string pic;
		public string phone;
		public int type;
		public string user_name;
		public int prize_id;
		public string name;
	}


	public UserPrizeListsProxy (string proxyName)
		: base(proxyName, null){

	}

	public override void bindingData (Request.Response meta)
	{
		if (meta.GetType () == typeof(Req_GetPrizeUserLists.Response)) {
			bindingData ((Req_GetPrizeUserLists.Response)meta);
		}
	}

	/// <summary>
	/// Sets the user data.
	/// </summary>
	/// <param name="meta">Meta.</param>
	public void bindingData(Req_GetPrizeUserLists.Response meta){
		List<RecordsItem> items = new List<RecordsItem> ();
		foreach(Req_GetPrizeUserLists.Response.Info info in meta.data.info ){
			RecordsItem i = new RecordsItem ();
			i.user_id = int.Parse(info.user_id);
			i.pic = info.pic;
			i.phone = info.phone;
			i.type = int.Parse(info.type);
			i.user_name = info.user_name;
			i.prize_id = int.Parse(info.prize_id);
			i.name = info.name;

			items.Add (i);
		}

		this.Items = items;
	}
}


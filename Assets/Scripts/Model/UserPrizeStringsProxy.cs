using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using System.IO;
using System.Text;

/// <summary>
/// 中奖字串
/// </summary>
public class UserPrizeStringProxy : PureMVC.Patterns.Proxy {

	public const string NAME = "UserPrizeStringProxy";

	List<string> items;
	public List<string> Items{
		get{return this.items;}
		set{ items = value;}
	}

	public UserPrizeStringProxy (string proxyName)
		: base(proxyName, null){

	}
	/// <summary>
	/// Sets the user data.
	/// </summary>
	/// <param name="meta">Meta.</param>
	public void setPrizeStringsData(Req_GetPrizeUserHorn.Response meta){
		List<string> items = new List<string> ();
		foreach(string info in meta.data.info ){
			items.Add (info);
		}

		this.Items = items;
	}

}


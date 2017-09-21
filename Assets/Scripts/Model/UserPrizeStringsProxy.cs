using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using System.IO;
using System.Text;

/// <summary>
/// 中奖字串
/// </summary>
public class UserPrizeStringProxy : BaseProxy {

	public const string NAME = "UserPrizeStringProxy";

	List<string> items;
	public List<string> Items{
		get{return this.items;}
		set{ items = value;}
	}

	public UserPrizeStringProxy (string proxyName)
		: base(proxyName, null){

	}

	public override void bindingData (Request.Response meta)
	{
		if (meta.GetType () == typeof(Req_GetPrizeUserHorn.Response)) {
			bindingData ((Req_GetPrizeUserHorn.Response)meta);
		}
	}

	/// <summary>
	/// Sets the user data.
	/// </summary>
	/// <param name="meta">Meta.</param>
	public void bindingData(Req_GetPrizeUserHorn.Response meta){
		List<string> items = new List<string> ();
		foreach(string info in meta.data.info ){
			items.Add (info);
		}

		this.Items = items;
	}
}


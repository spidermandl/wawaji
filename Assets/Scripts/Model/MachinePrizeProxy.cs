using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using System.IO;
using System.Text;

/// <summary>
/// 
/// </summary>
public class MachinePrizeProxy : BaseProxy {

	public const string NAME = "MachinePrizeProxy";

	List<PrizeItem> items;
	public List<PrizeItem> Items{
		get{ return this.items; }
		set{ this.items = value;}
	}

	public class PrizeItem{
		public int machine_type_id;//娃娃机类型ID
		public int machine_id;//娃娃机ID
		public int prize_id;//奖品ID
		public int ball_id;//海洋球ID
		public string name;//奖品名称
		public int price;//奖品价格
		public int coin;//奖品金币价格
		public string p_pic;//奖品图片
		public string b_pic;//海洋球图片
	}


	public MachinePrizeProxy (string proxyName)
		: base(proxyName, null){
	}

	public override void bindingData (Request.Response meta)
	{
		if (meta.GetType () == typeof(Req_GetMachinePrizeInfo.Response)) {
			bindingData ((Req_GetMachinePrizeInfo.Response)meta);
		}
	}

	/// <summary>
	/// Sets the user data.
	/// </summary>
	/// <param name="meta">Meta.</param>
	public void bindingData(Req_GetMachinePrizeInfo.Response meta){
		List<PrizeItem> list = new List<PrizeItem> ();
		foreach(Req_GetMachinePrizeInfo.Response.Info info in meta.data.info ){
			PrizeItem i = new PrizeItem ();
			i.machine_type_id = int.Parse(info.machine_type_id);//娃娃机类型ID
			i.machine_id = int.Parse(info.machine_id);//娃娃机ID
			i.prize_id = int.Parse(info.prize_id);//奖品ID
			i.ball_id = int.Parse(info.ball_id);//海洋球ID
			i.name = info.name;//奖品名称
			i.price = int.Parse(info.price);//奖品价格
			i.coin = int.Parse(info.coin);//奖品金币价格
			i.p_pic = info.p_pic;//奖品图片
			i.b_pic = info.b_pic;//海洋球图片
			list.Add (i);
		}
		this.items = list;
	}

	/// <summary>
	/// Sorts the list by type identifier.
	/// </summary>
	/// <returns>The list by type identifier.</returns>
	public Dictionary<int,List<PrizeItem>> sortListByTypeId(){
		Dictionary<int,List<PrizeItem>> dic = new Dictionary<int,List<PrizeItem>> ();
		foreach (PrizeItem i in items) {
			if (!dic.ContainsKey (i.machine_type_id)) {
				dic.Add (i.machine_type_id, new List<PrizeItem> ());
			}
			dic [i.machine_type_id].Add (i);
		}

		return dic;
	}
}


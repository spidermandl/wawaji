using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using System.IO;
using System.Text;

/// <summary>
/// 主界面，娃娃机相关信息
/// </summary>
public class MachineInfoProxy : BaseProxy {

	public const string NAME = "MachineInfoProxy";

	List<MachineType> items;//可选机器列表
	TypeAndItem selection;//选中的机器
	public List<MachineType> Items{
		get{return this.items;}
		set{ items = value;}
	}
	public TypeAndItem Selection{
		get{return this.selection;}
		set{selection = value;}
	}

	public class MachineItem{
		public int coin;
		public int machine_id;
	}

	public class MachineType{
		public string name;
		public int machine_type_id;
		public MachineItem[] machine;
	}

	/// <summary>
	/// Type and item.
	/// </summary>
	public class TypeAndItem
	{
		public string name;
		public int machine_type_id;
		public int coin;
		public int machine_id;
	}

	public MachineInfoProxy (string proxyName)
		: base(proxyName, null){

	}

	public override void bindingData (Request.Response meta)
	{
		if (meta.GetType () == typeof(Req_GetMachineInfo.Response)) {
			bindingData ((Req_GetMachineInfo.Response)meta);
		}
	}

	/// <summary>
	/// Sets the user data.
	/// </summary>
	/// <param name="meta">Meta.</param>
	public void bindingData(Req_GetMachineInfo.Response meta){
		List<MachineType> items = new List<MachineType> ();
		foreach(Req_GetMachineInfo.Response.Info info in meta.data.info ){
			MachineType i = new MachineType ();
			i.machine_type_id = info.machine_type_id;//娃娃机类型ID
			i.name = info.name;//娃娃机ID
			i.machine = new MachineItem[info.machine.Length];
			int index = 0;
			foreach (Req_GetMachineInfo.Response.Machine machine in info.machine) {
				MachineItem item = new MachineItem ();
				item.coin = machine.coin;
				item.machine_id = machine.machine_id;
				i.machine [index] = item;
				index++;
			}
			items.Add (i);
		}
		this.Items = items;
		if (items.Count > 0)
			this.Selection = getListByCoin (items [0].machine [0].coin)[0];
		else
			this.Selection = new TypeAndItem ();
	}

	/// <summary>
	/// Gets the list by coin.
	/// </summary>
	/// <returns>The list by coin.</returns>
	/// <param name="coin">Coin.</param>
	public TypeAndItem[] getListByCoin(int coin){
		if (items == null) {
			return null;
		}
		List<TypeAndItem> list = new List<TypeAndItem> ();
		foreach (MachineType t in items) {
			foreach(MachineItem i in t.machine){
				if (i.coin == coin) {
					TypeAndItem item = new TypeAndItem ();
					item.coin = coin;
					item.machine_id = i.machine_id;
					item.machine_type_id = t.machine_type_id;
					item.name = t.name;
					list.Add (item);
				}
			}
		}
		return list.ToArray ();
	}

	/// <summary>
	/// Gets the item by identifier.
	/// </summary>
	/// <returns>The item by identifier.</returns>
	/// <param name="machine_id">Machine identifier.</param>
	public TypeAndItem getItemById(int machine_id){
		if (items == null) {
			return null;
		}
		foreach (MachineType t in items) {
			foreach(MachineItem i in t.machine){
				if (i.machine_id == machine_id) {
					TypeAndItem temp = new TypeAndItem ();
					temp.coin = i.coin;
					temp.machine_id = i.machine_id;
					temp.machine_type_id = t.machine_type_id;
					temp.name = t.name;
					return temp;
				}
			}
		}

		return null;
	}

}


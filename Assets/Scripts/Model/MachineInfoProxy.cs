using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using System.IO;
using System.Text;

/// <summary>
/// 
/// </summary>
public class MachineInfoProxy : PureMVC.Patterns.Proxy {

	public const string NAME = "MachineInfoProxy";

	List<MachineType> items;
	public List<MachineType> Items{
		get{return this.items;}
		set{ items = value;}
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


	public MachineInfoProxy (string proxyName)
		: base(proxyName, null){

	}
	/// <summary>
	/// Sets the user data.
	/// </summary>
	/// <param name="meta">Meta.</param>
	public void setMachineInfoData(Req_GetMachineInfo.Response meta){
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

		if(PlayerPrefs.GetInt (LocalKey.SELECT_MACHINE_TYPE,-1)==-1)
			PlayerPrefs.SetInt (LocalKey.SELECT_MACHINE_TYPE, items [0].machine_type_id);
	}

	/// <summary>
	/// Gets the machine identifier.
	/// </summary>
	/// <returns>The machine identifier.</returns>
	/// <param name="mtid">Mtid.</param>
	/// <param name="coin">Coin.</param>
	public int getMachineId(int mtid,int coin){
		MachineType temp = null;
		foreach (MachineType t in items) {
			if (t.machine_type_id == mtid) {
				temp = t;
				break;
			}
		}
		foreach(MachineItem i in temp.machine){
			if (i.coin == coin)
				return i.machine_id;
		}

		return 0;
	}

}


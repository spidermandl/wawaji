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
	}

}


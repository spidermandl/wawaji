using System;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;
using DG.Tweening;
/// <summary>
/// 查看奖品对话框
/// </summary>
public class UIPrize : BaseWindow
{
	GList _list;
	GObject Close {
		get{ return this.contentPane.GetChild ("n1"); }
	}
	GObject Title {
		get{ return this.contentPane.GetChild ("n21"); }
	}

	MachineInfoProxy machine_proxy;
	Dictionary<int, List<MachinePrizeProxy.PrizeItem>> dic;
	MachineInfoProxy.TypeAndItem item;

	public UIPrize ():base()
	{

	}

	protected override void OnInit()
	{
		this.contentPane = UIPackage.CreateObject("Window", "Prize_dialog").asCom;
		this.Center();
		this.modal = true;
		//this.SetPosition (this.position.x, 0, this.position.z);
		GRoot.inst.modalLayer.onClick.Add (()=>{
			this.Hide();
		});

		Close.onClick.Add (()=>{
			this.Hide();
		});

		_list = this.contentPane.GetChild ("n20").asList;		
		_list.SetVirtual ();
		_list.itemRenderer = RenderListItem;

		//非UI逻辑
		machine_proxy = UnityFacade.GetInstance ().RetrieveProxy (MachineInfoProxy.NAME) as MachineInfoProxy;
		MachinePrizeProxy prize_proxy = UnityFacade.GetInstance ().RetrieveProxy (MachinePrizeProxy.NAME) as MachinePrizeProxy;
		if (machine_proxy != null) {
			item = machine_proxy.Selection;	
		}
		if (prize_proxy != null) {
			validate ();
		} else {
			getMachinePrize ();
		}
	}

	public new void Show(){
		base.Show ();
		MachinePrizeProxy prize_proxy = UnityFacade.GetInstance ().RetrieveProxy (MachinePrizeProxy.NAME) as MachinePrizeProxy;
		if (machine_proxy != null) {
			item = machine_proxy.Selection;	
		}
		validate ();
	}

	void getMachinePrize(){
		int userid = PlayerPrefs.GetInt (LocalKey.USERID, 0);
		string token = PlayerPrefs.GetString (LocalKey.TOKEN, null);
		if (userid != 0 && token != null) {
			Req_GetMachinePrizeInfo request = new Req_GetMachinePrizeInfo ();
			request.UserId = userid;
			request.Token = token;
			request.MtId = item.machine_type_id;
			UnityFacade.GetInstance().SendNotification(HttpReqCommand.HTTP,request);
		}
	}

	/// <summary>
	/// Renders the list item.
	/// </summary>
	/// <param name="index">Index.</param>
	/// <param name="obj">Object.</param>
	void RenderListItem(int index, GObject obj)
	{
		if(this.dic!=null){
			//obj.asCom.GetChild ("n2").asLoader.url = this.items [index].p_pic;
			obj.asCom.GetChild ("n3").asTextField.text = this.dic[item.machine_type_id][index].name;

			UpdatesProxy proxy = UnityFacade.GetInstance ().RetrieveProxy (UpdatesProxy.NAME) as UpdatesProxy;
			proxy.loadPrizeIcon (obj.asCom.GetChild ("n2").asLoader, ""+this.dic[item.machine_type_id][index].prize_id);

		}
	}

	public void validate(){
		MachinePrizeProxy proxy = UnityFacade.GetInstance ().RetrieveProxy (MachinePrizeProxy.NAME) as MachinePrizeProxy;
		if (proxy == null)
			return;
		this.dic = proxy.sortListByTypeId();
		_list.numItems = this.dic[item.machine_type_id].Count;
		_list.RefreshVirtualList ();
		Title.asTextField.text = item.name+"可得奖品";
	}

}


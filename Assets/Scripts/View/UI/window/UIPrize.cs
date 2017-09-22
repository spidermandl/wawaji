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
	MachineInfoProxy machine_proxy;
	List<MachinePrizeProxy.PrizeItem> items;

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
		//		this.contentPane.onClick.Add ((EventContext context) => {
		//			context.StopPropagation ();
		//		});

		Close.onClick.Add (()=>{
			this.Hide();
		});

		_list = this.contentPane.GetChild ("n20").asList;		
		_list.SetVirtual ();
		_list.itemRenderer = RenderListItem;

		machine_proxy = UnityFacade.GetInstance ().RetrieveProxy (MachineInfoProxy.NAME) as MachineInfoProxy;
		if (UnityFacade.GetInstance ().RetrieveProxy (MachinePrizeProxy.NAME) != null) {
			validate ();
		} else {
			getMachinePrize ();
		}
	}

	public new void Show(){
		base.Show ();
		_list.RefreshVirtualList ();
	}

	void getMachinePrize(){
		int userid = PlayerPrefs.GetInt (LocalKey.USERID, 0);
		string token = PlayerPrefs.GetString (LocalKey.TOKEN, null);
		int mtId = 0;
		if (machine_proxy != null) {
			mtId = machine_proxy.Selection.machine_type_id;	
		}
		if (userid != 0 && token != null) {
			Req_GetMachinePrizeInfo request = new Req_GetMachinePrizeInfo ();
			request.UserId = userid;
			request.Token = token;
			request.MtId = mtId;
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
		if(this.items!=null){
			//obj.asCom.GetChild ("n2").asLoader.url = this.items [index].p_pic;
			obj.asCom.GetChild ("n3").asTextField.text = this.items [index].name;

			UpdatesProxy proxy = UnityFacade.GetInstance ().RetrieveProxy (UpdatesProxy.NAME) as UpdatesProxy;
			proxy.loadPrizeIcon (obj.asCom.GetChild ("n2").asLoader, ""+this.items [index].prize_id);

		}
	}

	public void validate(){
		MachinePrizeProxy proxy = UnityFacade.GetInstance ().RetrieveProxy (MachinePrizeProxy.NAME) as MachinePrizeProxy;
		if (proxy == null)
			return;
		this.items = proxy.Items;
		_list.numItems = this.items.Count;
		_list.RefreshVirtualList ();
	}

}


﻿using System;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;
using PureMVC.Interfaces;

/// <summary>
/// 奖品中心
/// </summary>
public class UIPrizeMain : UIMain
{
	UITopup _uiTopup;

	GComponent toolbar;
	GList _list;
	List<MachinePrizeProxy.PrizeItem> items;
	MachineInfoProxy machine_proxy;

	void Awake()
	{
		base.init ("Prize");
	}

	void Start(){
		//getUserPrizeList ();
		//_mainView = this.GetComponent<UIPanel>().ui;

		GLoader bg = _mainView.GetChild ("n0")as GLoader;
		bg.url = "bg/bg_prize";

		//toolbar
		toolbar = _mainView.GetChild ("n1").asCom;
		toolbar.GetChild("n0").onClick.Add(() => {
			this.changeUIpage(typeof(UIHomeMain),true);
		});
		//提现界面
		toolbar.GetChild("n4").onClick.Add(() => {
			//提现界面
			if(_uiTopup == null)
				_uiTopup = new UITopup ();
			_uiTopup.Show();
		});

		_list = _mainView.GetChild ("n32").asList;		
		_list.SetVirtual ();
		_list.itemRenderer = RenderListItem;
//		_list.onClickItem.Add((EventContext context)=>{
//		});
		//非UI逻辑
		validateProfile();

		machine_proxy = UnityFacade.GetInstance ().RetrieveProxy (MachineInfoProxy.NAME) as MachineInfoProxy;
		if (UnityFacade.GetInstance ().RetrieveProxy (MachinePrizeProxy.NAME) != null) {
			RespondMachinePrize (null);
		} else {
			getMachinePrize ();
		}
	}

	void Update(){
	}

	void getMachinePrize(){
		int userid = PlayerPrefs.GetInt (LocalKey.USERID, 0);
		string token = PlayerPrefs.GetString (LocalKey.TOKEN, null);
		if (userid != 0 && token != null) {
			Req_GetMachinePrizeInfo request = new Req_GetMachinePrizeInfo ();
			request.UserId = userid;
			request.Token = token;
			UnityFacade.GetInstance().SendNotification(HttpReqCommand.HTTP,request);
		}
	}
	void validateProfile(){
		AccountProxy proxy = UnityFacade.GetInstance().RetrieveProxy (AccountProxy.NAME) as AccountProxy;
		if (proxy == null) {
			return;
		}
		toolbar.GetChild ("n5").asTextField.text = ""+proxy.Coin;
	}
	/// <summary>
	/// Renders the list item.
	/// </summary>
	/// <param name="index">Index.</param>
	/// <param name="obj">Object.</param>
	void RenderListItem(int index, GObject obj)
	{

//		obj.asCom.GetChild ("n17").onClick.Add (()=>{
//			int a =0;
//		});

		if(this.items!=null){
			//obj.asCom.GetChild ("n6").asLoader.url = this.items [index].p_pic;
			obj.asCom.GetChild ("n7").asTextField.text = this.items [index].name;
			//obj.asCom.GetChild ("n8").asLoader.url = this.items [index].b_pic;
			obj.asCom.GetChild ("n14").asTextField.text = ""+this.items [index].coin;
			obj.asCom.GetChild ("n15").asTextField.text = ""+this.items [index].price;

			UpdatesProxy proxy = UnityFacade.GetInstance ().RetrieveProxy (UpdatesProxy.NAME) as UpdatesProxy;
			proxy.loadPrizeIcon (obj.asCom.GetChild ("n6").asLoader, ""+this.items [index].prize_id);
			proxy.loadBallIcon (obj.asCom.GetChild ("n8").asLoader, ""+this.items [index].ball_id);

			if (machine_proxy != null) {
				MachineInfoProxy.TypeAndItem m = machine_proxy.getItemById (this.items[index].machine_id);
				obj.asCom.GetChild ("n19").asTextField.text = "" + m.name;
				obj.asCom.GetChild ("n17").onClick.Add (()=>{
					machine_proxy.Selection = machine_proxy.getItemById (this.items[index].machine_id);
					//UnityFacade.GetInstance().SendNotification(UserCommand.COMMAND,new UserCommand.MachineUpdate());
					this.changeUIpage(typeof(UIHomeMain),true);
				});
			}
		}
	}
	/////////////////////////////////////////////////////////////////////////////////////////////////////////
	/// 外部调用
	/////////////////////////////////////////////////////////////////////////////////////////////////////////

	public void RespondMachinePrize(INotification notification){
		MachinePrizeProxy proxy = UnityFacade.GetInstance ().RetrieveProxy (MachinePrizeProxy.NAME) as MachinePrizeProxy;
		if (proxy != null) {
			this.items = proxy.Items;
			_list.numItems = this.items.Count;
			_list.RefreshVirtualList ();
		}
	}

	/// <summary>
	/// Responds the user recharge.
	/// </summary>
	/// <param name="notification">Notification.</param>
	public void RespondUserRecharge(INotification notification){
		if (_uiTopup != null) {
			_uiTopup.Hide ();
		}
	}

	/// <summary>
	/// Updates the user info.
	/// </summary>
	/// <param name="notification">Notification.</param>
	public void UpdateUserInfo(INotification notification){
		validateProfile ();
	}
}


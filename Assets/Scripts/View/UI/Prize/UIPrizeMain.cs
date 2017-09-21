using System;
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
		GComponent toolbar = _mainView.GetChild ("n1").asCom;
		toolbar.GetChild("n0").onClick.Add(() => {
			this.changeUIpage(typeof(UIHomeMain));
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
		_list.onClickItem.Add (()=>{
		});

		//非UI逻辑
		AccountProxy proxy = UnityFacade.GetInstance().RetrieveProxy (AccountProxy.NAME) as AccountProxy;
		if (proxy == null) {
			return;
		}
		toolbar.GetChild ("n5").asTextField.text = ""+proxy.Coin;

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

//		obj.asCom.GetChild ("n17").onClick.Add (()=>{
//			int a =0;
//		});

		if(this.items!=null){
			obj.asCom.GetChild ("n6").asLoader.url = this.items [index].p_pic;
			obj.asCom.GetChild ("n7").asTextField.text = this.items [index].name;
			obj.asCom.GetChild ("n8").asLoader.url = this.items [index].b_pic;
			obj.asCom.GetChild ("n14").asTextField.text = ""+this.items [index].coin;
			obj.asCom.GetChild ("n15").asTextField.text = ""+this.items [index].price;

			if (machine_proxy != null) {
				MachineInfoProxy.TypeAndItem m = machine_proxy.getItemById (this.items[index].machine_id);
				machine_proxy.Selection = m;
				obj.asCom.GetChild ("n19").asTextField.text = "" + m.name;
				obj.asCom.GetChild ("n17").onClick.Add (()=>{
					//PlayerPrefs.SetInt (LocalKey.SELECT_MACHINE_ID,m.machine_id);
					this.changeUIpage(typeof(UIGameMain));
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

}


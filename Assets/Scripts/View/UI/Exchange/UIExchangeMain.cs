using System;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;
using PureMVC.Interfaces;

/// <summary>
/// 兑换中心
/// </summary>
public class UIExchangeMain : UIMain
{
	UITopup _uiTopup;

	UIExchangeConfirm _uiConfirm;

	GComponent toolbar;
	GList _list;
	List<PrizeSetProxy.PrizeItem> items;

	void Awake()
	{
		base.init ("Exchange");
	}

	void Start(){

		//_mainView = this.GetComponent<UIPanel>().ui;

		GLoader bg = _mainView.GetChild ("n0")as GLoader;
		bg.url = "bg/bg_prize";

		//toolbar
		toolbar = _mainView.GetChild ("n1").asCom;
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

		_list = _mainView.GetChild ("n6").asList;		
		_list.SetVirtual ();
		_list.itemRenderer = RenderListItem;
//		_list.onClickItem.Add (() => {
//			if(_uiConfirm ==null)
//				_uiConfirm = new UIExchangeConfirm();
//			_uiConfirm.Show();
//		});

		//非UI逻辑
		getAllPrize ();
		AccountProxy proxy = UnityFacade.GetInstance().RetrieveProxy (AccountProxy.NAME) as AccountProxy;
		if (proxy == null) {
			return;
		}
		toolbar.GetChild ("n5").asTextField.text = ""+proxy.Coin;
	}

	void Update(){
		
	}

	/// <summary>
	/// Gets all prize.
	/// </summary>
	void getAllPrize(){
		if (UnityFacade.GetInstance ().RetrieveProxy (PrizeSetProxy.NAME) != null) {
			RespondAllPrize (null);
			return;
		}
		int userid = PlayerPrefs.GetInt (LocalKey.USERID, 0);
		string token = PlayerPrefs.GetString (LocalKey.TOKEN, null);
		if (userid != 0 && token != null) {
			Req_GetAllPrize request = new Req_GetAllPrize ();
			request.UserId = userid;
			request.Token = token;
			UnityFacade.GetInstance().SendNotification(HttpReqCommand.HTTP,request);
		}
	}
	void validateProfile(){
		AccountProxy proxy = UnityFacade.GetInstance ().RetrieveProxy (AccountProxy.NAME) as AccountProxy;
		if (proxy != null) {
			toolbar.GetChild ("n5").asTextField.text = ""+proxy.Coin;
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
			obj.asCom.GetChild ("n12").asTextField.text = this.items [index].name;
			obj.asCom.GetChild ("n11").asTextField.text = this.items [index].desc;
			obj.asCom.GetChild ("n13").asTextField.text = ""+this.items [index].coin;
			//obj.asCom.GetChild ("n3").asLoader.url = this.items [index].pic;
			UpdatesProxy proxy = UnityFacade.GetInstance ().RetrieveProxy (UpdatesProxy.NAME) as UpdatesProxy;
			proxy.loadPrizeIcon (obj.asCom.GetChild ("n3").asLoader, ""+this.items [index].id);

			obj.onClick.Add (() => {
				if(_uiConfirm ==null)
					_uiConfirm = new UIExchangeConfirm();
				_uiConfirm.Show();
				_uiConfirm.bindingData(this.items[index]);
			});
		}
	}
	/////////////////////////////////////////////////////////////////////////////////////////////////////////
	/// 外部调用
	/////////////////////////////////////////////////////////////////////////////////////////////////////////

	/// <summary>
	/// Responds all prize.
	/// </summary>
	/// <param name="notification">Notification.</param>
	public void RespondAllPrize(INotification notification){
		PrizeSetProxy proxy = UnityFacade.GetInstance ().RetrieveProxy (PrizeSetProxy.NAME) as PrizeSetProxy;
		if (proxy != null) {
			this.items = proxy.Items;
			_list.numItems = this.items.Count;
		}
	}

	/// <summary>
	/// Responds the user recharge.
	/// </summary>
	/// <param name="notification">Notification.</param>
	public void RespondUserRecharge(INotification notification){
		if (_uiTopup != null) {
			validateProfile ();
			_uiTopup.Hide ();
		}
	}
	/// <summary>
	/// Responds the exchange coin for prize.
	/// </summary>
	/// <param name="notification">Notification.</param>
	public void RespondExchangeCoinForPrize(INotification notification){
		
	}
}


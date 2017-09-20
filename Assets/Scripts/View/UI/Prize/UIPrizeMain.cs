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

	void Awake()
	{
		base.init ("Prize");
	}

	void Start(){
		getMachinePrize ();
		getUserPrizeList ();
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

		//非UI逻辑
		AccountProxy proxy = UnityFacade.GetInstance().RetrieveProxy (AccountProxy.NAME) as AccountProxy;
		if (proxy == null) {
			return;
		}
		toolbar.GetChild ("n5").asTextField.text = ""+proxy.Coin;
	}

	void Update(){
	}

	void getMachinePrize(){
		if (UnityFacade.GetInstance ().RetrieveProxy (MachinePrizeProxy.NAME) != null)
			return;
		int userid = PlayerPrefs.GetInt (LocalKey.USERID, 0);
		string token = PlayerPrefs.GetString (LocalKey.TOKEN, null);
		if (userid != 0 && token != null) {
			Req_GetMachinePrizeInfo request = new Req_GetMachinePrizeInfo ();
			request.UserId = userid;
			request.Token = token;
			UnityFacade.GetInstance().SendNotification(HttpReqCommand.HTTP,request);
		}
	}

	/// <summary>
	/// Gets the user prize list.
	/// </summary>
	void getUserPrizeList(){
		if (UnityFacade.GetInstance ().RetrieveProxy (UserPrizeListsProxy.NAME) != null)
			return;
		Req_GetPrizeUserLists request = new Req_GetPrizeUserLists ();
		request.Form = null;
		UnityFacade.GetInstance ().SendNotification (HttpReqCommand.HTTP, request);
	}

	/////////////////////////////////////////////////////////////////////////////////////////////////////////
	/// 外部调用
	/////////////////////////////////////////////////////////////////////////////////////////////////////////

	public void RespondMachinePrize(INotification notification){

	}

	public void RespondUserPrizeList(INotification notification){

	}
}


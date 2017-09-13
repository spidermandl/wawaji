using System;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;
using PureMVC.Interfaces;

public class UIExchangeMain : UIMain
{
	UITopup _uiTopup;

	UIExchangeConfirm confirm;

	void Awake()
	{
		base.init ("Exchange");
	}

	void Start(){
		getAllPrize ();

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

		GList list = _mainView.GetChild ("n6").asList;
		list.onClickItem.Add (() => {
			if(confirm ==null)
				confirm = new UIExchangeConfirm();
			confirm.Show();
		});
	}

	void Update(){
	}


	void getAllPrize(){
		if (UnityFacade.GetInstance ().RetrieveProxy (PrizeSetProxy.NAME) != null)
			return;
		int userid = PlayerPrefs.GetInt (LocalKey.USERID, 0);
		string token = PlayerPrefs.GetString (LocalKey.TOKEN, null);
		if (userid != 0 && token != null) {
			Req_GetAllPrize request = new Req_GetAllPrize ();
			request.UserId = userid;
			request.Token = token;
			UnityFacade.GetInstance().SendNotification(HttpReqCommand.HTTP,request);
		}
	}

	/////////////////////////////////////////////////////////////////////////////////////////////////////////
	/// 外部调用
	/////////////////////////////////////////////////////////////////////////////////////////////////////////

	public void RespondAllPrize(INotification notification){

	}
}


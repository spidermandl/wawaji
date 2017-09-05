using System;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;

public class UIExchangeMain : UIMain
{
	UITopup _uiTopup;

	UIExchangeConfirm confirm;

	void Awake()
	{
		base.init ("Exchange");
	}

	void Start(){
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

}


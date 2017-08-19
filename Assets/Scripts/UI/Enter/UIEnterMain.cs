using System;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;

public class UIEnterMain : UIMain
{
	
	UILoginWin _loginWin;//登录对话框

	void Awake()
	{
		base.init ("Enter");

	}

	void Start(){
		//_mainView = this.GetComponent<UIPanel>().ui;

		_loginWin = new UILoginWin();
		_mainView.GetChild("n21").onClick.Add(() => { 
			this._clickFunc(ClickType.StartGame);
			_loginWin.Show(); 

			//关闭登录对话框
			_loginWin.Close.onClick.Add (() => { 
				this._clickFunc(ClickType.CloseLoginPanel);
				_loginWin.Hide(); 
			});

			//进入主界面
			_loginWin.Login.onClick.Add(() => { 
				this._clickFunc(ClickType.LoginGame);
				this.changeUIpage(typeof(UIHomeMain));
			});
		});
			
		
	}

	void Update(){
	}


}


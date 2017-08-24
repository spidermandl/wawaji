using System;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;

public class UIEnterMain : UIMain
{
	
	UILoginWin _loginWin;//登录对话框
	UIDocWin _docWin;//

	void Awake()
	{
		base.init ("Enter");

	}

	void Start(){
		//_mainView = this.GetComponent<UIPanel>().ui;

		GLoader bg = _mainView.GetChild ("n4")as GLoader;
		bg.url = "bg/bg_enter";
		_mainView.GetChild("n0").onClick.Add(() => { 
			this._clickFunc(ClickType.StartGame);
			if(_loginWin == null)
				_loginWin = new UILoginWin();		
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

			//
			_loginWin.Username.onTouchBegin.Add (()=>{
				_loginWin.Username.asTextField.text="";
			});
			//
			_loginWin.Password.onTouchBegin.Add (()=>{
				_loginWin.Password.asTextField.text="";
			});

		});
		_mainView.GetChild ("n7").onClick.Add (() => {
			this.changeUIpage(typeof(UINoticeMain));
		});
		_mainView.GetChild ("n9").onClick.Add (() => {
			if(_docWin == null)
				_docWin = new UIDocWin();
			_docWin.Show();
		});
		//Stage.inst.onKeyDown.Add(OnKeyDown);

		
	}

	void Update(){
	}
	void OnKeyDown(EventContext context)
	{
		Debug.Log(context.inputEvent.keyCode);
	}

}


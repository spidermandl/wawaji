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
		GLoader bg = _mainView.GetChild ("n4")as GLoader;
		bg.url = "bg/bg_enter";
		_mainView.GetChild("n0").onClick.Add(() => { 
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

			//
			_loginWin.Username.onTouchBegin.Add (()=>{
				_loginWin.Username.asTextField.text="";
			});
			//
			_loginWin.Password.onTouchBegin.Add (()=>{
				_loginWin.Password.asTextField.text="";
			});

		});


		//Stage.inst.onClick.Add ();
		//GTextInput.draggingObject;
		Stage.inst.onKeyDown.Add(OnKeyDown);

		
	}

	void Update(){
	}
	void OnKeyDown(EventContext context)
	{
		Debug.Log(context.inputEvent.keyCode);
	}

}


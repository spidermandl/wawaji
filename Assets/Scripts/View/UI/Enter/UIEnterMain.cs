using System;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;

public class UIEnterMain : UIMain
{
	
	UILoginWin _loginWin;//登录对话框
	UIRegisterWin _registerWin;//
	UIForgetWin _forgetWin;//
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

			_loginWin.Register.onClick.Add (() => {
				if(_registerWin == null)
					_registerWin = new UIRegisterWin();
				_loginWin.Hide(); 
				_registerWin.Show();

				Req_RegisterVcode req = new Req_RegisterVcode();
				UnityFacade.GetInstance().SendNotification(HttpReqCommand.HTTP,req);

				_registerWin.Close.onClick.Add (() => {
					_registerWin.Hide(); 
				});
				_registerWin.Pic_code.onClick.Add(()=>{
					UnityFacade.GetInstance().SendNotification(HttpReqCommand.HTTP,new Req_RegisterVcode());
				});

			});
			_loginWin.Forget.onClick.Add (() => {
				if(_forgetWin == null)
					_forgetWin = new UIForgetWin();
				_loginWin.Hide(); 
				_forgetWin.Show();

				_forgetWin.Close.onClick.Add (() => { 
					_forgetWin.Hide(); 
				});
			});
			
		});
		_mainView.GetChild ("n7").onClick.Add (() => {
			this.changeUIpage(typeof(UINoticeMain));
		});
		_mainView.GetChild ("n9").onClick.Add (() => {
			if(_docWin == null)
				_docWin = new UIDocWin();
			_docWin.Show();

			_docWin.Close.onClick.Add(()=>{
				_docWin.Hide();
			});
		});
		//Stage.inst.onKeyDown.Add(OnKeyDown);
	}

	void Update(){
	}

	void OnKeyDown(EventContext context)
	{
		Debug.Log(context.inputEvent.keyCode);
	}

	public void setVcodeTexture(string code){
		if (_registerWin != null) {
			//_registerWin.Pic_code.texture = 
		}
	}
}


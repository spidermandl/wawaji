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
				//登录按钮功能
				if(_loginWin.ValidLogin){
					Req_UserLogin request = new Req_UserLogin();
					request.Phone = _loginWin.Username.asTextField.text;
					request.Psd = _loginWin.Password.asTextField.text;
					request.Uuid = AppConst.UUID;
					request.Type = 1;
					if(request.Phone!=null &&
						request.Psd != null){
						UnityFacade.GetInstance().SendNotification(HttpReqCommand.HTTP,request);
						_loginWin.ValidLogin = false;
					}

				}
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
				_registerWin.Register.onClick.Add(()=>{
					if(_registerWin.ValidRegister){
						Req_UserRegister request = new Req_UserRegister();
						request.Phone = _registerWin.Username.asTextField.text;
						request.MsgCode = _registerWin.Phone_code_input.asTextField.text;
						request.Psd = _registerWin.Password.asTextField.text;
						request.VerCode = _registerWin.Pic_code.asTextField.text;
						request.Uuid = AppConst.UUID;
						if(request.Phone!=null &&
							request.MsgCode != null &&
							request.Psd != null &&
							request.VerCode != null){
							UnityFacade.GetInstance().SendNotification(HttpReqCommand.HTTP,request);
							_registerWin.ValidRegister = false;
						}
					}
				});
			});
			_loginWin.Forget.onClick.Add (() => {
				if(_forgetWin == null)
					_forgetWin = new UIForgetWin();
				_loginWin.Hide(); 
				_forgetWin.Show();

//				Req_RegisterVcode req = new Req_RegisterVcode();
//				UnityFacade.GetInstance().SendNotification(HttpReqCommand.HTTP,req);
				_forgetWin.Close.onClick.Add (() => {
					_forgetWin.Hide(); 
				});

				_forgetWin.Pic_code.onClick.Add(()=>{
					//UnityFacade.GetInstance().SendNotification(HttpReqCommand.HTTP,new Req_RegisterVcode());
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
	/////////////////////////////////////////////////////////////////////////////////////////////////////////
	/// 外部调用
	/////////////////////////////////////////////////////////////////////////////////////////////////////////
	/// <summary>
	/// Sets the vcode texture.
	/// </summary>
	/// <param name="code">Code.</param>
	public void RespondVcode(string code){
		if (_registerWin != null) {
			((GRichTextField)_registerWin.Pic_code).text = code;
		}
	}
	/// <summary>
	/// Responds the register.
	/// </summary>
	public void RespondRegister(){
		if (_registerWin != null) {
			_registerWin.ValidRegister = true;
		}
	}
	public void RespondRegisterSendMsg(string code){
	}
	/// <summary>
	/// Responds the login.
	/// </summary>
	public void RespondLogin(){
		if (_loginWin != null) {
			_loginWin.ValidLogin = true;
		}
	}
}


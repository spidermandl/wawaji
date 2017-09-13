using System;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;
using System.Collections;
using PureMVC.Interfaces;

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

				_registerWin.Verify.onClick.Add(()=>{
					if(_registerWin.ValidVerifying){
						Req_UserRegisterSendMsg request = new Req_UserRegisterSendMsg();
						request.Phone = _registerWin.Username.asTextField.text;
						request.VerCode = _registerWin.Pic_code.asTextField.text;
						if(request.Phone!=null &&
							request.VerCode != null)
							UnityFacade.GetInstance().SendNotification(HttpReqCommand.HTTP,request);
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
	public void RespondVcode(INotification notification){
		if (_registerWin != null) {
			string code = ((Req_RegisterVcode)notification.Body).getVcode ();
			((GRichTextField)_registerWin.Pic_code).text = code;
		}
	}
	/// <summary>
	/// Responds the register.
	/// </summary>
	public void RespondRegister(INotification notification){
		if (_registerWin != null) {
			if (((Request)notification.Body).getResponseCode () == Req_UserRegister.SUCCESS) {//成功注册
				_registerWin.Hide();
				_loginWin.Show ();
				return;
			}

			_registerWin.ValidRegister = true;
			_registerWin.Warn.visible = true;
			_registerWin.Warn.asTextField.text = ((Request)notification.Body).getMsg();

		}
	}
	/// <summary>
	/// Responds the register send message.
	/// </summary>
	/// <param name="code">Code.</param>
	public void RespondRegisterSendMsg(INotification notification){
		if (_registerWin != null) {
			if (((Request)notification.Body).getResponseCode () != Req_UserRegisterSendMsg.SUCCESS) {//有错误
				_registerWin.Warn.visible = true;
				_registerWin.Warn.asTextField.text = ((Request)notification.Body).getMsg ();
				return;
			}

			_registerWin.ValidVerifying = true;
			_registerWin.Verify.visible = false;
			_registerWin.Code_countdown.visible = true;
			StartCoroutine (countDown());
		}
	}
	/// <summary>
	/// Responds the login.
	/// </summary>
	public void RespondLogin(INotification notification){
		if (_loginWin != null) {
			_loginWin.ValidLogin = true;


			this._clickFunc(ClickType.LoginGame);
			this.changeUIpage(typeof(UIHomeMain));
		}
	}

	/// <summary>
	/// Responds the document.
	/// </summary>
	/// <param name="notification">Notification.</param>
	public void RespondDoc(INotification notification){
		if (_docWin != null) {
			Req_GetExplainAttention response = (Req_GetExplainAttention)notification.Body;
			_docWin.Instruction.asTextField.text = response.getInstruction();
			_docWin.Awareness.asTextField.text = response.getAwareness ();
		}
	}

	IEnumerator countDown(){
		for (int i = 0; i < 60; i++) {
			_registerWin.Code_countdown.asTextField.text = (60-i)+"秒后重发";
			yield return new WaitForSeconds (1f);  
		}
		_registerWin.Verify.visible = true;
		_registerWin.Code_countdown.visible = false;
	}
}


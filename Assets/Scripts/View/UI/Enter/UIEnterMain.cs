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

	GList _list;
	List<UserPrizeListsProxy.RecordsItem> records;//中奖名单

	void Awake()
	{
		base.init ("Enter");

	}

	void Start(){
		//自动登录
		autoLogin();

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
					request.Uuid = getDeviceUuid();
					request.Type = 1;
					if(Util.Filter(request.Phone)!=null &&
						Util.Filter(request.Psd) != null){
						UnityFacade.GetInstance().SendNotification(HttpReqCommand.HTTP,request);
						_loginWin.ValidLogin = false;
					}
					_loginWin.Warn.visible= false;
					_loginWin.Warn.text = "";
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
					//UnityFacade.GetInstance().SendNotification(HttpReqCommand.HTTP,new Req_RegisterVcode());
					((GRichTextField)_registerWin.Pic_code).text = Util.CreateRandomCode(5);
				});
				_registerWin.Send.onClick.Add(()=>{
					if(_registerWin.ValidRegister){
						Req_UserRegister request = new Req_UserRegister();
						request.Phone = _registerWin.Username.asTextField.text;
						request.MsgCode = _registerWin.Phone_code_input.asTextField.text;
						request.Psd = _registerWin.Password.asTextField.text;
						//request.VerCode = _registerWin.Pic_code.asTextField.text;
						request.Uuid = getDeviceUuid();
						if(Util.Filter(request.Phone)==null){
							_registerWin.Warn.visible= true;
							_registerWin.Warn.text = "请输入密码";
							return;
						}
						if(Util.Filter(request.MsgCode)==null){
							_registerWin.Warn.visible= true;
							_registerWin.Warn.text = "请输入短信验证码";
							return;
						}
						if(Util.Filter(request.Psd)==null){
							_registerWin.Warn.visible= true;
							_registerWin.Warn.text = "请输入密码";
							return;
						}
						if(Util.Filter(_registerWin.Pic_code_input.text)==null||
							!Util.Filter(_registerWin.Pic_code_input.text).Equals(_registerWin.Pic_code.asTextField.text)){
							_registerWin.Warn.visible= true;
							_registerWin.Warn.text = "验证码不正确";
							return;
						}
						_registerWin.Warn.visible= false;
						_registerWin.Warn.text = "";
						UnityFacade.GetInstance().SendNotification(HttpReqCommand.HTTP,request);
						_registerWin.ValidRegister = false;

					}
				});

				_registerWin.Verify.onClick.Add(()=>{
					if(_registerWin.ValidVerifying){
						Req_UserRegisterSendMsg request = new Req_UserRegisterSendMsg();
						request.Phone = _registerWin.Username.asTextField.text;
						request.VerCode = _registerWin.Pic_code.asTextField.text;
						if(Util.Filter(request.Phone)!=null &&
							Util.Filter(request.VerCode) != null)
							UnityFacade.GetInstance().SendNotification(HttpReqCommand.HTTP,request);
					}
				});
			});
			_loginWin.Forget.onClick.Add (() => {
				if(_forgetWin == null)
					_forgetWin = new UIForgetWin();
				_loginWin.Hide(); 
				_forgetWin.Show();

				Req_GetUserForgetPsdVcode req = new Req_GetUserForgetPsdVcode();
				UnityFacade.GetInstance().SendNotification(HttpReqCommand.HTTP,req);

				_forgetWin.Close.onClick.Add (() => {
					_forgetWin.Hide(); 
				});

				_forgetWin.Pic_code.onClick.Add(()=>{
					//UnityFacade.GetInstance().SendNotification(HttpReqCommand.HTTP,new Req_GetUserForgetPsdVcode());
					((GRichTextField)_forgetWin.Pic_code).text = Util.CreateRandomCode(5);
				});

				_forgetWin.Verify.onClick.Add(()=>{
					if(_forgetWin.ValidVerifying){
						Req_UserForgetPsdSendMsg request = new Req_UserForgetPsdSendMsg();
						request.Phone = _forgetWin.Username.asTextField.text;
						request.VerCode = _forgetWin.Pic_code.asTextField.text;
						if(Util.Filter(request.Phone)!=null &&
							Util.Filter(request.VerCode) != null)
							UnityFacade.GetInstance().SendNotification(HttpReqCommand.HTTP,request);
					}
				});

				_forgetWin.Send.onClick.Add(()=>{
					if(_forgetWin.ValidRegister){
						Req_UserResetPsd request = new Req_UserResetPsd();
						request.Phone = _forgetWin.Username.asTextField.text;
						request.MsgCode = _forgetWin.Phone_code_input.asTextField.text;
						request.Psd = _forgetWin.Password.asTextField.text;
						//request.VerCode = _forgetWin.Pic_code.asTextField.text;
						if(Util.Filter(request.Phone)==null){
							_forgetWin.Warn.visible= true;
							_forgetWin.Warn.text = "请输入密码";
							return;
						}
						if(Util.Filter(request.MsgCode)==null){
							_forgetWin.Warn.visible= true;
							_forgetWin.Warn.text = "请输入短信验证码";
							return;
						}
						if(Util.Filter(request.Psd)==null){
							_forgetWin.Warn.visible= true;
							_forgetWin.Warn.text = "请输入密码";
							return;
						}
						if(Util.Filter(_forgetWin.Pic_code_input.text)==null||
							!Util.Filter(_forgetWin.Pic_code_input.text).Equals(_forgetWin.Pic_code.asTextField.text)){
							_forgetWin.Warn.visible= true;
							_forgetWin.Warn.text = "验证码不正确";
							return;
						}
						_forgetWin.Warn.visible= false;
						_forgetWin.Warn.text = "";
						UnityFacade.GetInstance().SendNotification(HttpReqCommand.HTTP,request);
						_forgetWin.ValidRegister = false;

					}
				});
			});

			//wechat login
			_loginWin.Wechat.onClick.Add (() => {
				this.wechatLogin();
			});
			//guest login
			_loginWin.Guest.onClick.Add (() => {
				Req_UserLogin request = new Req_UserLogin();
				request.Uuid = getDeviceUuid();
				request.Type = 3;
				UnityFacade.GetInstance().SendNotification(HttpReqCommand.HTTP,request);
				_loginWin.ValidLogin = false;
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

		_list = _mainView.GetChild ("n20").asList;
		_list.SetVirtual ();
		_list.itemRenderer = RenderListItem;
		_list.numItems = 1;

		//Stage.inst.onKeyDown.Add(OnKeyDown);

	}

	void Update(){
		
	}

	void OnKeyDown(EventContext context)
	{
		if(AppConst.DebugMode)
			Debug.Log(context.inputEvent.keyCode);
	}

	/// <summary>Pic_code
	/// Auto login.
	/// </summary>
	void autoLogin(){
		int userid = PlayerPrefs.GetInt (LocalKey.USERID, 0);
		string token = PlayerPrefs.GetString (LocalKey.TOKEN, null);
		if (userid != 0 && token != null) {
			Req_GetBaseInfo request = new Req_GetBaseInfo ();
			request.UserId = userid;
			request.Token = token;
			UnityFacade.GetInstance ().SendNotification (HttpReqCommand.HTTP, request);
		} else {
			getUserPrizeList ();
		}
	}
	/// <summary>
	/// Gets the user prize list.
	/// </summary>
	void getUserPrizeList(){
		Req_GetPrizeUserLists request = new Req_GetPrizeUserLists ();
		request.Form = null;
		UnityFacade.GetInstance ().SendNotification (HttpReqCommand.HTTP, request);
	}

	/// <summary>
	/// Wechat login.
	/// </summary>
	void wechatLogin(){
		switch(Application.platform){
		case RuntimePlatform.Android:
			using (AndroidJavaClass jc = new AndroidJavaClass(AppConst.ANDROID_INTERFACE_CLASS))
			{  
				//Debug.Log("get AndroidJavaClass");  
				using (AndroidJavaObject jo = jc.GetStatic<AndroidJavaObject>("currentActivity"))  
				{
					Debug.Log("get AndroidJavaObject Begin");  
					jo.Call("requestLogin");
					Debug.Log("get AndroidJavaObject End");  
				}  
			} 
			break;
		case RuntimePlatform.IPhonePlayer:
			
			break;
		default:
			RespondWechatLogin ("061X7UW30hPz1F1dDxV30QdYW30X7UWk");
			break;
		}


	}
	/// <summary>
	/// Gets the device UUID.
	/// </summary>
	/// <returns>The device UUID.</returns>
	string getDeviceUuid(){
		DeviceInfoProxy proxy = UnityFacade.GetInstance ().RetrieveProxy (DeviceInfoProxy.NAME) as DeviceInfoProxy;
		return proxy.Uuid;
	}
	/// <summary>
	/// 发送短信倒计时
	/// </summary>
	/// <returns>The down.</returns>
	/// <param name="_win">Window.</param>
	IEnumerator countDown(UIBaseVerifyWin _win){
		for (int i = 0; i < 60; i++) {
			_win.Code_countdown.asTextField.text = (60-i)+"秒后重发";
			yield return new WaitForSeconds (1f);  
		}
		_win.Verify.visible = true;
		_win.Code_countdown.visible = false;
	}

	/// <summary>
	/// Renders the list item.
	/// </summary>
	/// <param name="index">Index.</param>
	/// <param name="obj">Object.</param>
	void RenderListItem(int index, GObject obj)
	{
		if (this.records != null) {
			obj.asCom.GetChild ("n3").asTextField.text = "获得"+this.records [index].name;
			obj.asCom.GetChild ("n5").asTextField.text = this.records [index].user_name;
			//obj.asCom.GetChild ("n6").asLoader.url = this.records [index].pic;

			UpdatesProxy proxy = UnityFacade.GetInstance ().RetrieveProxy (UpdatesProxy.NAME) as UpdatesProxy;
			proxy.loadPureIcon (obj.asCom.GetChild ("n6").asLoader, ""+this.records [index].pic);
			//this.records[index].
		}
	}

	/////////////////////////////////////////////////////////////////////////////////////////////////////////
	/// 外部调用
	/////////////////////////////////////////////////////////////////////////////////////////////////////////
	/// <summary>
	/// Sets the vcode texture.
	/// </summary>
	/// <param name="code">Code.</param>
	public void RespondRegisterVcode(INotification notification){
		if (_registerWin != null) {
			string code = ((Req_RegisterVcode)notification.Body).getVcode ();
			((GRichTextField)_registerWin.Pic_code).text = code;
		}
	}
	/// <summary>
	/// Responds the forget vcode.
	/// </summary>
	/// <param name="notification">Notification.</param>
	public void RespondForgetVcode(INotification notification){
		if (_forgetWin != null) {
			string code = ((Req_GetUserForgetPsdVcode)notification.Body).getVcode ();
			((GRichTextField)_forgetWin.Pic_code).text = code;
		}
	}
	/// <summary>
	/// Responds the register.
	/// </summary>
	public void RespondRegister(INotification notification){
		_registerWin.ValidRegister = true;
		if (_registerWin != null) {
			if (((Request)notification.Body).getResponseCode () == Req_UserRegister.SUCCESS) {//成功注册
				_registerWin.Hide();
				_loginWin.Show ();
				return;
			}

			_registerWin.Warn.visible = true;
			_registerWin.Warn.asTextField.text = ((Request)notification.Body).getMsg();

		}
	}
	/// <summary>
	/// Responds the reset psd.
	/// </summary>
	/// <param name="notification">Notification.</param>
	public void RespondResetPsd(INotification notification){
		_forgetWin.ValidRegister = true;
		if (_forgetWin != null) {
			if (((Request)notification.Body).getResponseCode () == Req_UserResetPsd.SUCCESS) {//成功注册
				_forgetWin.Hide();
				_loginWin.Show ();
				return;
			}

			_forgetWin.Warn.visible = true;
			_forgetWin.Warn.asTextField.text = ((Request)notification.Body).getMsg();

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
			StartCoroutine (countDown(_registerWin));
		}
	}

	/// <summary>
	/// Responds the register send message.
	/// </summary>
	/// <param name="code">Code.</param>
	public void RespondForgetSendMsg(INotification notification){
		if (_forgetWin != null) {
			if (((Request)notification.Body).getResponseCode () != Req_UserRegisterSendMsg.SUCCESS) {//有错误
				_forgetWin.Warn.visible = true;
				_forgetWin.Warn.asTextField.text = ((Request)notification.Body).getMsg ();
				return;
			}

			_forgetWin.ValidVerifying = true;
			_forgetWin.Verify.visible = false;
			_forgetWin.Code_countdown.visible = true;
			StartCoroutine (countDown(_forgetWin));
		}
	}

	/// <summary>
	/// Responds the login.
	/// </summary>
	public void RespondLogin(INotification notification){
		if (_loginWin != null) {
			_loginWin.ValidLogin = true;
			if (((Request)notification.Body).getResponseCode () == Base_Req_UserInfo.SUCCESS) {//成功注册

				this._clickFunc(ClickType.LoginGame);
				this.changeUIpage(typeof(UIHomeMain));
				return;
			}
			_loginWin.Warn.visible = true;
			_loginWin.Warn.asTextField.text = ((Request)notification.Body).getMsg();


		}
	}

	/// <summary>
	/// Responds the base info.
	/// </summary>
	/// <param name="notification">Notification.</param>
	public void RespondBaseInfo(INotification notification){

		Request resp = (Request)notification.Body;
		if (resp.getResponseType () == typeof(Base_Req_UserInfo.Response)) {
			if (((Base_Req_UserInfo.Response)resp.Resp).data.code == Req_GetBaseInfo.SUCCESS) {
				this._clickFunc (ClickType.LoginGame);
				this.changeUIpage (typeof(UIHomeMain));
			}
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

	/// <summary>
	/// Responds the user prize list.
	/// </summary>
	/// <param name="notification">Notification.</param>
	public void RespondUserPrizeList(INotification notification){
		UserPrizeListsProxy proxy = UnityFacade.GetInstance ().RetrieveProxy (UserPrizeListsProxy.NAME) as UserPrizeListsProxy;
		if (proxy != null) {
			this.records = proxy.Items;
			_list.numItems = proxy.Items.Count;
			_list.RefreshVirtualList ();
		}
	}

	/// <summary>
	/// Responds the wechat login.
	/// </summary>
	/// <param name="wxid">Wxid.</param>
	public void RespondWechatLogin(string wxid){
		Req_UserLogin request = new Req_UserLogin();
		request.Uuid = getDeviceUuid();
		request.Wxid = wxid;
		request.Type = 2;
		UnityFacade.GetInstance().SendNotification(HttpReqCommand.HTTP,request);
		_loginWin.ValidLogin = false;
	}

}


using System;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;
using PureMVC.Interfaces;
using System.Collections;

public class UIHomeMain : UIMain
{
	int item_index;//列表item索引值
	HornMarquee hornMarquee;
	MachineSelection machineSelection;

	//UIExchange _exchangeWin;
	UITopup _topupWin;//
	UISetting _settingWin;//
	UIHelp _helpWin;
	UIProfile _profileWin;//
	UIPrize _prizeWin;//


	GLoader _head;
	GComponent toolbar;	
	GTextField _coin;

	void Awake()
	{
		base.init ("Home");
		UIPackage.AddPackage ("Window");
	}

	void Start(){

		GLoader bg = _mainView.GetChild ("n1")as GLoader;
		bg.url = "bg/bg_home";

		toolbar = _mainView.GetChild ("n3").asCom;
		_coin = toolbar.GetChild ("n13").asTextField;
		//提现界面
		toolbar.GetChild("n12").onClick.Add(() => {
			//提现界面
			//			if(_exchangeWin == null)
			//				_exchangeWin = new UIExchange ();
			//			_exchangeWin.Show();
			this.changeUIpage(typeof(UIExchangeMain),true);
			//this.changeUIpage(typeof(UIExchangeMain));
		});
		//奖励界面
		toolbar.GetChild ("n11").onClick.Add (() => {
			//奖励界面
			this.changeUIpage(typeof(UIPrizeMain),true);
			//this.changeUIpage(typeof(UIPrizeMain));
		});
		//充值界面
		toolbar.GetChild ("n10").onClick.Add (() => {
			//充值界面
			if(_topupWin == null)
				_topupWin = new UITopup ();
			_topupWin.Show();
		});
		GComponent g = toolbar.GetChild ("n15").asCom;
		_head = toolbar.GetChild ("n15").asCom.GetChild ("n26").asLoader;
		toolbar.GetChild ("n15").onClick.Add (() => {
			//个人界面
			if(_profileWin == null){
				_profileWin = new UIProfile ();
				_profileWin.Ui = this;
			}
			_profileWin.Show();
			_profileWin.Logout.onClick.Add(()=>{

				Req_UserLogout request = new Req_UserLogout ();
				request.UserId = PlayerPrefs.GetInt(LocalKey.USERID);
				request.Token = PlayerPrefs.GetString(LocalKey.TOKEN);
				UnityFacade.GetInstance().SendNotification(HttpReqCommand.HTTP,request);

				UnityFacade.GetInstance().RemoveProxy(UserPrizeInfoProxy.NAME);

			});
			_profileWin.Exchange.onClick.Add(()=>{
				_profileWin.Hide();
				this.changeUIpage(typeof(UIExchangeMain),true);
				//this.changeUIpage(typeof(UIExchangeMain));
			});
			_profileWin.Topup.onClick.Add(()=>{
				_profileWin.Hide();
				if(_topupWin == null)
					_topupWin = new UITopup ();
				_topupWin.Show();
			});
		});
		//查看奖品
		_mainView.GetChild ("n12").onClick.Add (() => {
			//查看奖品
			if(_prizeWin == null)
				_prizeWin = new UIPrize ();
			_prizeWin.Show();
		});
		//开始游戏
		_mainView.GetChild("n11").onClick.Add(() => {
			enterGame();
		});

		_mainView.GetChild ("n13").onClick.Add(() => {
			if(_settingWin==null)
				_settingWin = new UISetting();
			_settingWin.Show();

		});
		_mainView.GetChild ("n10").onClick.Add(() => { 
			if(_helpWin==null)
				_helpWin = new UIHelp();
			_helpWin.Show();

		});

		hornMarquee = new HornMarquee (_mainView.GetChild ("n14").asCom);
		machineSelection = new MachineSelection (_mainView);
		machineSelection.setEnterGame (enterGame);
		//非ui逻辑

		//http
		getMachineInfo ();
		getHornList ();
		validateProfile ();

	}

	void Update(){
	}

	/**
	 * 销毁界面回调
	 * */
	public override void destroyUI (){
		if(hornMarquee != null)
			hornMarquee.stop ();
		base.destroyUI ();
	}

	/// <summary>
	/// Moves to page.
	/// </summary>
	/// <param name="cls">Cls.</param>
	public void moveToPage(Type cls){
		changeUIpage (cls);
	}

	void validateProfile(){
		AccountProxy proxy = UnityFacade.GetInstance ().RetrieveProxy (AccountProxy.NAME) as AccountProxy;
		UpdatesProxy u_proxy = UnityFacade.GetInstance().RetrieveProxy (UpdatesProxy.NAME) as UpdatesProxy;
		if (proxy != null) {
			_coin.text = "" + proxy.Coin;
			u_proxy.loadPureIcon (_head,proxy.Pic);//头像
		}
	}
	/// <summary>
	/// http请求hron list
	/// </summary>
	void getHornList(){
		hornMarquee.refresh ();
		int userid = PlayerPrefs.GetInt (LocalKey.USERID, 0);
		string token = PlayerPrefs.GetString (LocalKey.TOKEN, null);
		MachineInfoProxy m_proxy = UnityFacade.GetInstance ().RetrieveProxy (MachineInfoProxy.NAME) as MachineInfoProxy;
		if ( m_proxy!= null) {//数据已经存在
			int mtid = m_proxy.Selection.machine_type_id;
			if (userid != 0 && token != null) {
				Req_GetPrizeUserHorn request = new Req_GetPrizeUserHorn ();
				request.UserId = userid;
				request.Token = token;
				request.MtId = mtid;
				UnityFacade.GetInstance().SendNotification(HttpReqCommand.HTTP,request);
			}
		}

	}

	/// <summary>
	///http 请求 machine info
	/// </summary>
	void getMachineInfo(){
		if (UnityFacade.GetInstance ().RetrieveProxy (MachineInfoProxy.NAME) != null) {//数据已经存在
			machineSelection.validateUI();
			return;
		}

		int userid = PlayerPrefs.GetInt (LocalKey.USERID, 0);
		string token = PlayerPrefs.GetString (LocalKey.TOKEN, null);
		if (userid != 0 && token != null) {
			Req_GetMachineInfo request = new Req_GetMachineInfo ();
			request.UserId = userid;
			request.Token = token;
			UnityFacade.GetInstance().SendNotification(HttpReqCommand.HTTP,request);

		}


	}

	/////////////////////////////////////////////////////////////////////////////////////////////////////////
	/// /// /// /// /// ///
	/////////////////////////////////////////////////////////////////////////////////////////////////////////


	/// <summary>
	/// 进入游戏
	/// </summary>
	void enterGame(){
		this.changeUIpage(typeof(UIGameMain));
	}

	/////////////////////////////////////////////////////////////////////////////////////////////////////////
	/// 外部调用
	/////////////////////////////////////////////////////////////////////////////////////////////////////////

	public void RespondPrizeInfo(INotification notification){
		if (_profileWin != null) {
			_profileWin.refreshList ();
		}
	}

	public void RespondLogout(INotification notification){
		PlayerPrefs.SetInt (LocalKey.USERID, 0);
		PlayerPrefs.SetString (LocalKey.TOKEN, null);
		_profileWin.Hide();
		this.changeUIpage(typeof(UIEnterMain));
	}

	/// <summary>
	/// Responds the machine info.
	/// </summary>
	/// <param name="notification">Notification.</param>
	public void RespondMachineInfo(INotification notification){
		//bindMachineData ();
		//selectMachine ();
		machineSelection.validateUI();
		getHornList ();

		Req_GetPrizeInfo request = new Req_GetPrizeInfo();
		request.UserId = PlayerPrefs.GetInt (LocalKey.USERID, 0);
		request.Token = PlayerPrefs.GetString (LocalKey.TOKEN, null);
		UnityFacade.GetInstance().SendNotification(HttpReqCommand.HTTP,request);

		this.moveToPage (typeof(UIPrizeMain), true);
	}

	/// <summary>
	/// Responds the user prize strings.
	/// </summary>
	/// <param name="notification">Notification.</param>
	public void RespondUserPrizeStrings(INotification notification){
		hornMarquee.refresh ();

	}
	/// <summary>
	/// Responds the user recharge.
	/// </summary>
	/// <param name="notification">Notification.</param>
	public void RespondUserRecharge(INotification notification){
		if (_topupWin != null) {
			_topupWin.Hide ();
		}
	}

	/// <summary>
	/// Responds all prize.
	/// </summary>
	/// <param name="notification">Notification.</param>
	public void RespondAllPrize(INotification notification){
		if (_prizeWin != null&&_prizeWin.isShowing) {
			_prizeWin.validate ();
		}
	}

	/// <summary>
	/// Updates the user info.
	/// </summary>
	/// <param name="notification">Notification.</param>
	public void UpdateUserInfo(INotification notification){
		AccountProxy proxy = UnityFacade.GetInstance ().RetrieveProxy (AccountProxy.NAME) as AccountProxy;
		_coin.text = "" + proxy.Coin;
	}

	public void UpdateMachineInfo(INotification notification){
		//validateMachineInfo ();
	}

	public void RestartGame (INotification notification){
		changeUIpage (typeof(UIGameMain));
	}

	public void RespondOpenURL(INotification notification){

	}
}


using System;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;
using PureMVC.Interfaces;

public class UIHomeMain : UIMain
{
	GList _list;
	int item_index;//列表item索引值

	//UIExchange _exchangeWin;
	UITopup _topupWin;//
	UISetting _settingWin;//
	UIHelp _helpWin;
	UIProfile _profileWin;//
	UIPrize _prizeWin;//

	GComponent toolbar;
	GButton b_coin_1,b_coin_5,b_coin_10;
	MachineInfoProxy.TypeAndItem[] machine_data;

	void Awake()
	{
		base.init ("Home");
		UIPackage.AddPackage ("Window");
	}

	void Start(){

		_list = _mainView.GetChild("n17").asList;
		//		_list.SetVirtualAndLoop();

		_list.itemRenderer = RenderListItem;
		_list.SetVirtual ();
		_list.numItems = 3;
		item_index = 0;
		_list.scrollPane.onScroll.Add(DoSpecialEffect);
		DoSpecialEffect();

		GLoader bg = _mainView.GetChild ("n1")as GLoader;
		bg.url = "bg/bg_home";

		b_coin_1 = _mainView.GetChild ("n4") as GButton;
		b_coin_5 = _mainView.GetChild ("n5") as GButton;
		b_coin_10 = _mainView.GetChild ("n6") as GButton;
		initCoin ();
		b_coin_1.onChanged.Add(bindData);
		b_coin_5.onChanged.Add(bindData);
		b_coin_10.onChanged.Add(bindData);
		bindData ();

		toolbar = _mainView.GetChild ("n3").asCom;
		//提现界面
		toolbar.GetChild("n12").onClick.Add(() => {
			//提现界面
			//			if(_exchangeWin == null)
			//				_exchangeWin = new UIExchange ();
			//			_exchangeWin.Show();
			this.changeUIpage(typeof(UIExchangeMain));
		});
		//奖励界面
		toolbar.GetChild ("n11").onClick.Add (() => {
			//奖励界面
			this.changeUIpage(typeof(UIPrizeMain));
		});
		//充值界面
		toolbar.GetChild ("n10").onClick.Add (() => {
			//充值界面
			if(_topupWin == null)
				_topupWin = new UITopup ();
			_topupWin.Show();
		});
		toolbar.GetChild ("n14").onClick.Add (() => {
			//个人界面
			if(_profileWin == null)
				_profileWin = new UIProfile ();
			_profileWin.Show();
			_profileWin.Logout.onClick.Add(()=>{

				Req_UserLogout request = new Req_UserLogout ();
				request.UserId = PlayerPrefs.GetInt(LocalKey.USERID);
				request.Token = PlayerPrefs.GetString(LocalKey.TOKEN);
				UnityFacade.GetInstance().SendNotification(HttpReqCommand.HTTP,request);

			});
			_profileWin.Exchange.onClick.Add(()=>{
				_profileWin.Hide();
				this.changeUIpage(typeof(UIExchangeMain));
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
			//缓存选中的machine信息
			MachineInfoProxy m_proxy = UnityFacade.GetInstance ().RetrieveProxy (MachineInfoProxy.NAME) as MachineInfoProxy;
			if (m_proxy != null&& machine_data!=null) {
				m_proxy.Selection = machine_data [item_index];	
			}
			_prizeWin.Show();
		});
		//开始游戏
		_mainView.GetChild("n11").onClick.Add(() => { 
			this._clickFunc(ClickType.PlayGame);
			enterGame();

		});

		_mainView.GetChild("n8").onClick.Add(() => { 
			this.ScrollToNext(1);

		});
		_mainView.GetChild("n9").onClick.Add(() => { 
			this.ScrollToNext(-1);

		});
		_mainView.GetChild("n13").onClick.Add(() => { 
			if(_settingWin==null)
				_settingWin = new UISetting();
			_settingWin.Show();

		});
		_mainView.GetChild ("n10").onClick.Add(() => { 
			if(_helpWin==null)
				_helpWin = new UIHelp();
			_helpWin.Show();

		});

		//非ui逻辑
		getMachineInfo ();
		validateProfile ();
		UpdatesProxy u_proxy = UnityFacade.GetInstance().RetrieveProxy (UpdatesProxy.NAME) as UpdatesProxy;
		AccountProxy proxy = UnityFacade.GetInstance ().RetrieveProxy (AccountProxy.NAME) as AccountProxy;
		u_proxy.loadPureIcon (toolbar.GetChild ("n14").asLoader,proxy.Pic);//头像
	}

	void Update(){
	}

	/// <summary>
	///http 请求 machine info
	/// </summary>
	void getMachineInfo(){
		if (UnityFacade.GetInstance ().RetrieveProxy (MachineInfoProxy.NAME) != null) {//数据已经存在
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

	void validateProfile(){
		AccountProxy proxy = UnityFacade.GetInstance ().RetrieveProxy (AccountProxy.NAME) as AccountProxy;
		if (proxy != null) {
			toolbar.GetChild ("n13").asTextField.text = "" + proxy.Coin;
			toolbar.GetChild ("n14").asLoader.url = proxy.Pic;
		}
	}
	/// <summary>
	/// http请求hron list
	/// </summary>
	void getHornList(){
		if (UnityFacade.GetInstance ().RetrieveProxy (UserPrizeStringProxy.NAME) != null)
			return;
		int userid = PlayerPrefs.GetInt (LocalKey.USERID, 0);
		string token = PlayerPrefs.GetString (LocalKey.TOKEN, null);
		if (machine_data != null) {
			int mtid = machine_data [item_index].machine_type_id;
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
	/// Inits the coin.
	/// </summary>
	void initCoin(){
		int coin = PlayerPrefs.GetInt (LocalKey.SELECT_COIN_GAME);
		if (coin == 1)
			b_coin_1.selected = true;
		else if (coin == 5)
			b_coin_5.selected = true;
		else if (coin == 10)
			b_coin_10.selected = true;
		else
			b_coin_1.selected = true;
	}

	/// <summary>
	/// 绑定数据
	/// </summary>
	void bindData(){
		int coin = 1;
		if (b_coin_1.selected)
			coin = 1;
		else if (b_coin_5.selected)
			coin = 5;
		else if (b_coin_10.selected)
			coin = 10;
		if (UnityFacade.GetInstance ().RetrieveProxy (MachineInfoProxy.NAME) == null)
			return;
		
		PlayerPrefs.SetInt (LocalKey.SELECT_COIN_GAME,coin);

		MachineInfoProxy proxy = UnityFacade.GetInstance ().RetrieveProxy (MachineInfoProxy.NAME) as MachineInfoProxy;
		machine_data = proxy.getListByCoin (coin);
		if (machine_data!=null&&machine_data.Length > 0) {
			_list.numItems = machine_data.Length;
			_list.RefreshVirtualList ();
		}
	}
	/// <summary>
	/// 进入游戏
	/// </summary>
	void enterGame(){
		this.changeUIpage(typeof(UIGameMain));
	}

	void DoSpecialEffect()
	{
		//change the scale according to the distance to middle
		//		float midX = _list.scrollPane.posX + _list.viewWidth / 2;
		//		int cnt = _list.numChildren;
		//		for (int i = 0; i < cnt; i++)
		//		{
		//			GObject obj = _list.GetChildAt(i);
		//			float dist = Mathf.Abs(midX - obj.x - obj.width / 2);
		//			if (dist > obj.width) //no intersection
		//				obj.SetScale(1, 1);
		//			else
		//			{
		//				float ss = 1 + (1 - dist / obj.width) * 0.24f;
		//				obj.SetScale(ss, ss);
		//			}
		//		}

		//_mainView.GetChild("n3").text = "" + ((_list.GetFirstChildInView() + 1) % _list.numItems);
	}

	void RenderListItem(int index, GObject obj)
	{
		if(machine_data !=null && machine_data.Length>0){
			(obj.asCom.GetChild ("n2") as GRichTextField).text = machine_data[index].name;
		}
		obj.onClick.Add (() => {
			enterGame();
		});
	}

	void ScrollToNext(int step){
		int index = item_index + step;
		if ( index < _list.numItems && index >= 0) {
			_list.ScrollToView (index, true);
			item_index = index;
		}
	}

	/**
	 * 切换界面
	 * */
	protected new void changeUIpage(Type cls){
		//缓存选中的machine信息
		MachineInfoProxy proxy = UnityFacade.GetInstance ().RetrieveProxy (MachineInfoProxy.NAME) as MachineInfoProxy;
		if (proxy != null&& machine_data!=null) {
			proxy.Selection = machine_data [item_index];	
		}
		base.changeUIpage (cls);
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
		bindData ();
		getHornList ();
	}

	/// <summary>
	/// Responds the user prize strings.
	/// </summary>
	/// <param name="notification">Notification.</param>
	public void RespondUserPrizeStrings(INotification notification){
		this.changeUIpage(typeof(UIPrizeMain));
	}
	/// <summary>
	/// Responds the user recharge.
	/// </summary>
	/// <param name="notification">Notification.</param>
	public void RespondUserRecharge(INotification notification){
		if (_topupWin != null) {
			validateProfile ();
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
}


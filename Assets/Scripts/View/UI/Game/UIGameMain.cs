using System;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;
using PathologicalGames;
using DG.Tweening;
using PureMVC.Interfaces;

public class UIGameMain : UIMain
{

	UIConfirm _confirmWin;//中奖对话框
	UICoinPrize _coinWin;//没中奖对话框
	UIFailure _failWin;//中金币对话框

	//UIExchange _exchangeWin;
	UITopup _topupWin;//
	UICommon _commonWin;//

	GameObject root = null;
	GameManager gameManager;

	GComponent toolbar;
	GList _list;
	List<GameBallProxy.BallsItem> items;

	SwipeGesture _gesture;

	void Awake()
	{
		base.init ("Game");
		UIPackage.AddPackage ("Window");

	}

	void Start(){

		////获取游戏3d场景对象，以及游戏管理对象///////////////////////////////////////////////
		root = UIMain._3dGameObj;//GameObject.Find("3dGame");
		if (root == null) {
			root = GameObject.Instantiate ((GameObject)Resources.Load ("Prefabs/3dGame")as GameObject);
			root.name = "3dGame";
			UIMain._3dGameObj = root;
		}
		root.SetActive (true);
		if (root.GetComponent (typeof(GameManager)) != null) {
			Destroy (root.GetComponent (typeof(GameManager)));
		}
		this.gameManager = root.AddComponent (typeof(GameManager)) as GameManager;
		/////////////////////////////////////////////////////////////////////////////////
		//toolbar
		toolbar = _mainView.GetChild ("n19").asCom;
		toolbar.GetChild("n3").onClick.Add(() => {
			if(gameManager.isIdle())
				this.changeUIpage(typeof(UIHomeMain));
		});
		//提现界面
		toolbar.GetChild("n4").onClick.Add(() => {
			//提现界面
//			if(_exchangeWin == null)
//				_exchangeWin = new UIExchange ();
//			_exchangeWin.Show();
			if(gameManager.isIdle())
				this.changeUIpage(typeof(UIExchangeMain));
		});
		//充值界面
		toolbar.GetChild ("n2").onClick.Add (() => {
			if(!gameManager.isIdle())
				return;
			//充值界面
			if(_topupWin == null)
				_topupWin = new UITopup ();
			_topupWin.Show();
		});
		/////////////////////////////////////////////////////////////////////////////////
		/// 3d场景操作按键相关
		/////////////////////////////////////////////////////////////////////////////////
		GComponent controller = _mainView.GetChild ("n22").asCom;
		Vector3 pos = controller.position;
		Debug.Log (GRoot.inst.height);
		Debug.Log (UI_HEIGHT);
		controller.SetPosition (pos.x,pos.y*GRoot.inst.height/UI_HEIGHT,pos.z);
		//move forward
		controller.GetChild("n5").onTouchBegin.Add(() => {
			gameManager.setMoveDirection(GameManager.DIRECTION.Forward);
		});
		controller.GetChild("n5").onTouchEnd.Add(() => { 
			gameManager.stopMoving();
		});
		//move back
		controller.GetChild("n2").onTouchBegin.Add(() => {
			this.gameManager.setMoveDirection(GameManager.DIRECTION.Back);
		});
		controller.GetChild("n2").onTouchEnd.Add(() => {
			this.gameManager.stopMoving();

		});
		//move right
		controller.GetChild("n4").onTouchBegin.Add(() => {
			this.gameManager.setMoveDirection(GameManager.DIRECTION.Right);
		});
		controller.GetChild("n4").onTouchEnd.Add(() => {
			this.gameManager.stopMoving();

		});
		//move left
		controller.GetChild("n3").onTouchBegin.Add(() => {
			this.gameManager.setMoveDirection(GameManager.DIRECTION.Left);
		});
		controller.GetChild("n3").onTouchEnd.Add(() => {
			this.gameManager.stopMoving();

		});
		//go
		controller.GetChild("n6").onClick.Add(() => {
			AccountProxy u_proxy = UnityFacade.GetInstance ().RetrieveProxy (AccountProxy.NAME) as AccountProxy;
			MachineInfoProxy m_proxy = UnityFacade.GetInstance ().RetrieveProxy (MachineInfoProxy.NAME) as MachineInfoProxy;
			if (m_proxy != null||u_proxy != null){
				if(u_proxy.Coin<m_proxy.Selection.coin){
					this.CantStart(null);
					return;
				}
			}
			
			this.gameManager.startPick();
			getBallPickingOdd();
		});

		_list = controller.GetChild ("n7").asList;
		_list.SetVirtual ();
		_list.itemRenderer = RenderListItem;

		/////////////////////////////////////////////////////////////////////////////////
		/// 手势操作相关
		/////////////////////////////////////////////////////////////////////////////////
		GObject holder = _mainView.GetChild("holder");

		_gesture = new SwipeGesture(holder);
		_gesture.onMove.Add(OnSwipeMove);
		_gesture.onEnd.Add(OnSwipeEnd);

//		RotationGesture gesture4 = new RotationGesture(holder);
//		gesture4.onAction.Add(OnRotate);

//		LongPressGesture gesture2 = new LongPressGesture(holder);
//		gesture2.once = false;
//		gesture2.onAction.Add(OnHold);

//		PinchGesture gesture3 = new PinchGesture(holder);
//		gesture3.onAction.Add(OnPinch);

		//非显示相关
		getBallsInfoFromServer ();
		validateProfile ();
	}

	void Update(){
	}

	/// <summary>
	/// Gets the balls info from server.
	/// </summary>
	void getBallsInfoFromServer(){
		MachineInfoProxy proxy = UnityFacade.GetInstance ().RetrieveProxy (MachineInfoProxy.NAME) as MachineInfoProxy;
		if (proxy == null)
			return;
		Req_GetMachinePrizeBallData request = new Req_GetMachinePrizeBallData ();
		request.UserId = PlayerPrefs.GetInt(LocalKey.USERID);
		request.Token = PlayerPrefs.GetString(LocalKey.TOKEN);
		request.MId = proxy.Selection.machine_id;
		UnityFacade.GetInstance().SendNotification(HttpReqCommand.HTTP,request);
	}
	/// <summary>
	/// Gets the ball picking odd.
	/// </summary>
	void getBallPickingOdd(){
		MachineInfoProxy proxy = UnityFacade.GetInstance ().RetrieveProxy (MachineInfoProxy.NAME) as MachineInfoProxy;
		if (proxy == null)
			return;
		Req_MachineStartGrab request = new Req_MachineStartGrab ();
		request.UserId = PlayerPrefs.GetInt(LocalKey.USERID);
		request.Token = PlayerPrefs.GetString(LocalKey.TOKEN);
		request.MId = proxy.Selection.machine_id;
		UnityFacade.GetInstance().SendNotification(HttpReqCommand.HTTP,request);
	}
    /// <summary>
	/// 销毁界面回调
    /// </summary>
	public override void destroyUI (){
		base.destroyUI ();
		gameManager.inactive ();
		root.SetActive (false);
	}

	void validateProfile(){
		AccountProxy proxy = UnityFacade.GetInstance ().RetrieveProxy (AccountProxy.NAME) as AccountProxy;
		if (proxy != null) {
			toolbar.GetChild("n5").asTextField.text = "" + proxy.Coin;
		}
	}

	void setGestureValidate(bool validate){
		if (_gesture == null)
			return;
		if (validate) {
			_gesture.onMove.Add(OnSwipeMove);
			_gesture.onEnd.Add(OnSwipeEnd);
		}
		else{
			_gesture.onMove.Remove(OnSwipeMove);
			_gesture.onEnd.Remove(OnSwipeEnd);
		}
	}

	void OnSwipeMove(EventContext context)
	{
		//Debug.Log ("OnSwipeMove");
		SwipeGesture gesture = (SwipeGesture)context.sender;

		float delta_x = Mathf.Round(gesture.delta.x);
		if (Mathf.Abs(delta_x) < 2) //消除手抖的影响
			return;
		gameManager.rotateCamera (delta_x);
	}

	void OnSwipeEnd(EventContext context)
	{
		//Debug.Log ("OnSwipeEnd");
		gameManager.returnCamera ();

	}

//	void OnHold(EventContext context)
//	{
//		_ball.DOShakePosition(0.3f, new Vector3(0.1f, 0.1f, 0));
//	}

//	void OnPinch(EventContext context)
//	{
//		DOTween.Kill(_ball);
//
//		PinchGesture gesture = (PinchGesture)context.sender;
//		float newValue = Mathf.Clamp(_ball.localScale.x + gesture.delta, 0.3f, 2);
//		_ball.localScale = new Vector3(newValue, newValue, newValue);
//	}

//	void OnRotate(EventContext context)
//	{
//		DOTween.Kill(gameManager.SpaceCamera);
//
//		RotationGesture gesture = (RotationGesture)context.sender;
//		gameManager.SpaceCamera.Rotate(Vector3.forward, -gesture.delta, Space.World);
//	}

	/// <summary>
	/// Renders the list item.
	/// </summary>
	/// <param name="index">Index.</param>
	/// <param name="obj">Object.</param>
	void RenderListItem(int index, GObject obj)
	{
		if(this.items!=null){
			//obj.asCom.GetChild ("n3").asLoader.url = this.items [index].b_pic;
			//obj.asCom.GetChild ("n4").asLoader.url = this.items [index].p_pic;
			obj.asCom.GetChild ("n5").asTextField.text = this.items [index].name;

			UpdatesProxy proxy = UnityFacade.GetInstance ().RetrieveProxy (UpdatesProxy.NAME) as UpdatesProxy;
			proxy.loadBallIcon (obj.asCom.GetChild ("n3").asLoader, ""+this.items [index].ball_id);
			proxy.loadPrizeIcon (obj.asCom.GetChild ("n4").asLoader, ""+this.items [index].prize_id);
		}
	}

	/////////////////////////////////////////////////////////////////////////////////////////////////////////
	/// 外部调用
	/////////////////////////////////////////////////////////////////////////////////////////////////////////
	public void GameOver(INotification notification){
		GameBallProxy proxy = UnityFacade.GetInstance ().RetrieveProxy (GameBallProxy.NAME) as GameBallProxy;
		if (proxy == null)
			return;
		GameBallProxy.Answer answer = proxy.Result;
		/////////////////////////没中奖///////////////////////////////////////////
		if (answer == null || answer.type == -1) {
			if (_failWin == null)
				_failWin = new UIFailure ();
			_failWin.Show ();
			_failWin.Contiune.onClick.Add (() => {
				_failWin.Hide();
				if(proxy.CountDown==0)
					this.changeUIpage(typeof(UIHomeMain));
				else
					proxy.CountDown = proxy.CountDown-1;
			});
			return;
		}

		/////////////////////////中奖///////////////////////////////////////////
		if (answer.type == 0) {
			if (_confirmWin == null)
				_confirmWin = new UIConfirm ();
			_confirmWin.Show ();

			//关闭登录对话框
			_confirmWin.Confirm.onClick.Add (() => { 
				_confirmWin.Hide (); 
				this.changeUIpage (typeof(UIRewardsMain));
			});

			//进入主界面
			_confirmWin.Cancel.onClick.Add (() => { 
				_confirmWin.Hide (); 
				if(proxy.CountDown==0)
					this.changeUIpage(typeof(UIHomeMain));
				else
					proxy.CountDown = proxy.CountDown-1;
			});

			UpdatesProxy u_proxy = UnityFacade.GetInstance ().RetrieveProxy (UpdatesProxy.NAME) as UpdatesProxy;
			u_proxy.loadPrizeIcon (_confirmWin.Photo.asLoader, ""+answer.prizes[0].prize_id);
			_confirmWin.Discription.asTextField.text = "恭喜您！获得" + answer.prizes[0].name;

			return;
		}
		/////////////////////////中金币奖///////////////////////////////////////////
		if (_coinWin == null)
			_coinWin = new UICoinPrize ();
		_coinWin.Show ();
		_coinWin.onClick.Add (() => {
			_coinWin.Hide();
			if(proxy.CountDown==0)
				this.changeUIpage(typeof(UIHomeMain));
			else
				proxy.CountDown = proxy.CountDown-1;
		});
		_coinWin.Amount.asTextField.text = ""+answer.coin;
	}

	/// <summary>
	/// Determines whether this instance cant start the specified notification.
	/// </summary>
	/// <returns><c>true</c> if this instance cant start the specified notification; otherwise, <c>false</c>.</returns>
	/// <param name="notification">Notification.</param>
	public void CantStart(INotification notification){
		if(_commonWin == null)
			_commonWin = new UICommon ();
		_commonWin.Show();
		_commonWin.Title.asTextField.text = "金币不足";
		_commonWin.Content.asTextField.text = "开始游戏所需的金币不够，请冲金币";
		_commonWin.Yes.onClick.Add (() => {
			_commonWin.Hide();
			this.changeUIpage(typeof(UIHomeMain));
		});
	}
	/// <summary>
	/// Responds the ball info.
	/// </summary>
	/// <param name="notification">Notification.</param>
	public void RespondBallInfo(INotification notification){
		gameManager.initBalls ();
		GameBallProxy proxy = UnityFacade.GetInstance ().RetrieveProxy (GameBallProxy.NAME) as GameBallProxy;
		if (proxy != null) {
			
			GameBallProxy.BallsItem[] temps = proxy.Items.ToArray ();
			GameBallProxy.BallsItem[] copy = new GameBallProxy.BallsItem[temps.Length];
			Array.Copy (temps, copy, copy.Length);

			this.items = new List<GameBallProxy.BallsItem>(copy);
			int coin_ball = 0;
			for (int i = 0; i < this.items.Count; i++) {
				if (this.items [i].is_matter == 0)
					coin_ball = i;
			}
			this.items.RemoveAt (coin_ball);
			_list.numItems = this.items.Count;
			_list.RefreshVirtualList ();
		}
	}

	public void RespondGameStart(INotification notification){

	}

	public void RespondGameEnd(INotification notification){
		gameManager.machineEndGrab ();
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
	/// Updates the user info.
	/// </summary>
	/// <param name="notification">Notification.</param>
	public void UpdateUserInfo(INotification notification){
		validateProfile ();
	}

	public void EnterGameStill(INotification notification){
		setGestureValidate (true);
	}

	public void ExitGameStill(INotification notification){
		setGestureValidate (false);
	}
}


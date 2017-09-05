using System;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;
using PathologicalGames;
using DG.Tweening;

public class UIGameMain : UIMain
{
	GList _list;
	UIConfirm _confirmWin;//登录对话框
	UIExchange _exchangeWin;//
	UITopup _topupWin;//

	GameObject root = null;
	GameManager gameManager;

	void Awake()
	{
		base.init ("Game");
		UIPackage.AddPackage ("Window");

	}

	void Start(){
		////获取游戏3d场景对象，以及游戏管理对象///////////////////////////////////////////////
		root = GameObject.Find("3dGame");
		if (root == null) {
			root = GameObject.Instantiate ((GameObject)Resources.Load ("Prefabs/3dGame")as GameObject);
			root.name = "3dGame";
		}
		root.SetActive (true);
		if (root.GetComponent (typeof(GameManager)) != null) {
			Destroy (root.GetComponent (typeof(GameManager)));
		}
		this.gameManager = root.AddComponent (typeof(GameManager)) as GameManager;
		/////////////////////////////////////////////////////////////////////////////////
		//toolbar
		GComponent toolbar = _mainView.GetChild ("n19").asCom;
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

		controller.GetChild("n6").onClick.Add(() => { 
			this.gameManager.startPick();
		});
		/////////////////////////////////////////////////////////////////////////////////
		/// 手势操作相关
		/////////////////////////////////////////////////////////////////////////////////
		GObject holder = _mainView.GetChild("holder");

		SwipeGesture gesture = new SwipeGesture(holder);
		gesture.onMove.Add(OnSwipeMove);
		gesture.onEnd.Add(OnSwipeEnd);

//
//		RotationGesture gesture4 = new RotationGesture(holder);
//		gesture4.onAction.Add(OnRotate);

//		LongPressGesture gesture2 = new LongPressGesture(holder);
//		gesture2.once = false;
//		gesture2.onAction.Add(OnHold);

//		PinchGesture gesture3 = new PinchGesture(holder);
//		gesture3.onAction.Add(OnPinch);



	}

	void Update(){
	}


	/**
	 * 销毁界面回调
	 * */
	protected override void destroyUI (){
		base.destroyUI ();
		gameManager.inactive ();
		root.SetActive (false);
	}

	public void gameOver(){
		if(_confirmWin == null)
			_confirmWin = new UIConfirm ();
		_confirmWin.Show ();

		//关闭登录对话框
		_confirmWin.Confirm.onClick.Add (() => { 
			_confirmWin.Hide(); 
		});

		//进入主界面
		_confirmWin.Cancel.onClick.Add(() => { 
			this.changeUIpage(typeof(UIRewardsMain));
			_confirmWin.Hide(); 
		});
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
}


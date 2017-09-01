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

	GameManager gameManager;

	void Awake()
	{
		base.init ("Game");
		UIPackage.AddPackage ("Window");

	}

	void Start(){
		////获取游戏3d场景对象，以及游戏管理对象///////////////////////////////////////////////
		GameObject root = GameObject.Find("3dGame");
		if (root == null) {
			root = GameObject.Instantiate ((GameObject)Resources.Load ("Prefabs/3dGame")as GameObject);
			root.name = "3dGame";
		}

		if (root.GetComponent (typeof(GameManager)) != null) {
			Destroy (root.GetComponent (typeof(GameManager)));
		}
		this.gameManager = root.AddComponent (typeof(GameManager)) as GameManager;
		/////////////////////////////////////////////////////////////////////////////////
		//toolbar
		GComponent toolbar = _mainView.GetChild ("n19").asCom;
		toolbar.GetChild("n3").onClick.Add(() => {
			if(gameManager.isPickerRunning()==true)
				this.changeUIpage(typeof(UIHomeMain));
		});
		//提现界面
		toolbar.GetChild("n4").onClick.Add(() => {
			//提现界面
//			if(_exchangeWin == null)
//				_exchangeWin = new UIExchange ();
//			_exchangeWin.Show();
			this.changeUIpage(typeof(UIExchangeMain));
		});
		//充值界面
		toolbar.GetChild ("n2").onClick.Add (() => {
			//充值界面
			if(_topupWin == null)
				_topupWin = new UITopup ();
			_topupWin.Show();
		});
		/////////////////////////////////////////////////////////////////////////////////
		GComponent controller = _mainView.GetChild ("n22").asCom;
		Vector3 pos = controller.position;
		controller.SetPosition (pos.x,pos.y*GRoot.inst.height/UI_HEIGHT,pos.z);
		//move forward
		controller.GetChild("n5").onTouchBegin.Add(() => {
			gameManager.setMoveDirection(new Vector3(0,0,-1));
		});
		controller.GetChild("n5").onTouchEnd.Add(() => { 
			gameManager.stopMoving();
		});
		//move back
		controller.GetChild("n2").onTouchBegin.Add(() => {
			this.gameManager.setMoveDirection(new Vector3(0,0,1));
		});
		controller.GetChild("n2").onTouchEnd.Add(() => {
			this.gameManager.stopMoving();

		});
		//move right
		controller.GetChild("n4").onTouchBegin.Add(() => {
			this.gameManager.setMoveDirection(new Vector3(1,0,0));
		});
		controller.GetChild("n4").onTouchEnd.Add(() => {
			this.gameManager.stopMoving();

		});
		//move left
		controller.GetChild("n3").onTouchBegin.Add(() => {
			this.gameManager.setMoveDirection(new Vector3(-1,0,0));
		});
		controller.GetChild("n3").onTouchEnd.Add(() => {
			this.gameManager.stopMoving();

		});

		controller.GetChild("n6").onClick.Add(() => { 
			this.gameManager.startPick();
		});

		GObject holder = _mainView.GetChild("holder");

//		SwipeGesture gesture1 = new SwipeGesture(holder);
//		gesture1.onMove.Add(OnSwipeMove);
//		gesture1.onEnd.Add(OnSwipeEnd);
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
		SwipeGesture gesture = (SwipeGesture)context.sender;
		Vector3 v = new Vector3();
		if (Mathf.Abs(gesture.delta.x) > Mathf.Abs(gesture.delta.y))
		{
			v.y = -Mathf.Round(gesture.delta.x);
			if (Mathf.Abs(v.y) < 2) //消除手抖的影响
				return;
			gameManager.SpaceCamera.RotateAround (Vector3.zero, Vector3.up,v.y);
		}
		else
		{
			v.x = -Mathf.Round(gesture.delta.y);
			if (Mathf.Abs(v.x) < 2)
				return;
			gameManager.SpaceCamera.RotateAround (Vector3.zero, Vector3.right,v.x);
		}

		//gameManager.SpaceCamera.Rotate(v, Space.World);
	}

	void OnSwipeEnd(EventContext context)
	{
		SwipeGesture gesture = (SwipeGesture)context.sender;
		Vector3 v = new Vector3();
		if (Mathf.Abs(gesture.velocity.x) > Mathf.Abs(gesture.velocity.y))
		{
			v.y = -Mathf.Round(Mathf.Sign(gesture.velocity.x) * Mathf.Sqrt(Mathf.Abs(gesture.velocity.x)));
			if (Mathf.Abs(v.y) < 2)
				return;
			gameManager.SpaceCamera.RotateAround (Vector3.zero, Vector3.up,v.y);
		}
		else
		{
			v.x = -Mathf.Round(Mathf.Sign(gesture.velocity.y) * Mathf.Sqrt(Mathf.Abs(gesture.velocity.y)));
			if (Mathf.Abs(v.x) < 2)
				return;
			gameManager.SpaceCamera.RotateAround (Vector3.zero, Vector3.right,v.x);
		}
		//gameManager.SpaceCamera.DORotate(v, 0.3f, RotateMode.WorldAxisAdd);
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

	void OnRotate(EventContext context)
	{
		DOTween.Kill(gameManager.SpaceCamera);

		RotationGesture gesture = (RotationGesture)context.sender;
		gameManager.SpaceCamera.Rotate(Vector3.forward, -gesture.delta, Space.World);
	}
}


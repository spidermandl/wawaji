using System;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;
using PathologicalGames;

public class UIGameMain : UIMain
{
	GList _list;
	UIConfirm _confirmWin;//登录对话框
	UIExchange _exchangeWin;//
	UITopup _topupWin;//

	GameManager gameManager;
	SpawnPool pool;

	void Awake()
	{
		base.init ("Game");
		UIPackage.AddPackage ("Window");
		this.pool = PoolManager.Pools["WaWaJi"];

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
			if(_exchangeWin == null)
				_exchangeWin = new UIExchange ();
			_exchangeWin.Show();
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

	}

	void Update(){
	}


	/**
	 * 销毁界面回调
	 * */
	protected override void destroyUI (){
		base.destroyUI ();
		gameManager.destroyObjects ();
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

}


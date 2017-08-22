using System;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;
using PathologicalGames;

public class UIGameMain : UIMain
{
	GList _list;
	UIConfirm _confirmWin;//登录对话框

	int item_index;//列表item索引值
	GameManager gameManager;
	SpawnPool pool;

	void Awake()
	{
		base.init ("Game");
		this.pool = PoolManager.Pools["WaWaJi"];

	}

	void Start(){
//		this.gameManager = new GameManager (
//			this.pool.Spawn ((GameObject)Resources.Load ("Prefabs/3dGame")).gameObject);

		//GameObject root = this.pool.Spawn ((GameObject)Resources.Load ("Prefabs/3dGame")).gameObject;
		GameObject root = GameObject.Find("3dGame");
		if (root == null) {
			root = GameObject.Instantiate ((GameObject)Resources.Load ("Prefabs/3dGame")as GameObject);
			root.name = "3dGame";
		}

		if (root.GetComponent (typeof(GameManager)) != null) {
			Destroy (root.GetComponent (typeof(GameManager)));
		}
		this.gameManager = root.AddComponent (typeof(GameManager)) as GameManager;
		
		GComponent toolbar = _mainView.GetChild ("n19").asCom;
		toolbar.GetChild("n3").onClick.Add(() => { 
			this.changeUIpage(typeof(UIHomeMain));
		});
		GComponent controller = _mainView.GetChild ("n22").asCom;
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

		_confirmWin = new UIConfirm ();
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


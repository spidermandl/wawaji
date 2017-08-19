using System;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;
using PathologicalGames;

public class UIGameMain : UIMain
{
	GList _list;
	int item_index;//列表item索引值
	GameManager gameManager;
	SpawnPool pool;

	void Awake()
	{
		base.init ("Game");
		this.pool = PoolManager.Pools["WaWaJi"];

	}

	void Start(){
		this.gameManager = new GameManager (
			this.pool.Spawn ((GameObject)Resources.Load ("Prefabs/3dGame")).gameObject);
		
		GComponent toolbar = _mainView.GetChild ("n19").asCom;
		toolbar.GetChild("n3").onClick.Add(() => { 
			this.changeUIpage(typeof(UIHomeMain));

		});
		//move forward
		_mainView.GetChild("n6").onTouchBegin.Add(() => {
			gameManager.setMoveDirection(new Vector3(0,0,-1));
		});
		_mainView.GetChild("n6").onTouchEnd.Add(() => { 
			gameManager.stopMoving();
		});
		//move back
		_mainView.GetChild("n9").onTouchBegin.Add(() => {
			this.gameManager.setMoveDirection(new Vector3(0,0,1));
		});
		_mainView.GetChild("n9").onTouchEnd.Add(() => {
			this.gameManager.stopMoving();

		});
		//move right
		_mainView.GetChild("n7").onTouchBegin.Add(() => {
			this.gameManager.setMoveDirection(new Vector3(1,0,0));
		});
		_mainView.GetChild("n7").onTouchEnd.Add(() => {
			this.gameManager.stopMoving();

		});
		//move left
		_mainView.GetChild("n8").onTouchBegin.Add(() => {
			this.gameManager.setMoveDirection(new Vector3(-1,0,0));
		});
		_mainView.GetChild("n8").onTouchEnd.Add(() => {
			this.gameManager.stopMoving();

		});

		_mainView.GetChild("n10").onClick.Add(() => { 
			//this.changeUIpage(typeof(UIHomeMain));
			//go
		});
	}

	void Update(){
	}

	void FixedUpdate(){
		if(gameObject != null)
			gameManager.UpdateFrame ();
	}

	/**
	 * 销毁界面回调
	 * */
	protected override void destroyUI (){
		base.destroyUI ();
		gameManager.destroyObjects ();
	}

}


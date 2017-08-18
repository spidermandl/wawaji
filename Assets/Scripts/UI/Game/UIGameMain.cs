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
		this.gameManager = new GameManager (
			this.pool.Spawn ((GameObject)Resources.Load ("Prefabs/3dGame")).gameObject);

	}

	void Start(){
		GComponent toolbar = _mainView.GetChild ("n19").asCom;
		toolbar.GetChild("n3").onClick.Add(() => { 
			this.changeUIpage(typeof(UIHomeMain));

		});
		_mainView.GetChild("n3").onClick.Add(() => { 
			Debug.Log("forward click");

		});
		_mainView.GetChild("n3").onTouchBegin.Add(() => { 
			Debug.Log("forward onTouchBegin");

		});
		_mainView.GetChild("n3").onTouchEnd.Add(() => { 
			Debug.Log("forward onTouchEnd");

		});

		_mainView.GetChild("n6").onClick.Add(() => { 
			//this.changeUIpage(typeof(UIHomeMain));
			//forward
			Debug.Log("forward click");

		});
		_mainView.GetChild("n6").onTouchBegin.Add(() => { 
			//this.changeUIpage(typeof(UIHomeMain));
			//forward
			this.gameManager.setMoveDirection(new Vector3(0,0,1));
			Debug.Log("forward onTouchBegin");

		});
		_mainView.GetChild("n6").onTouchEnd.Add(() => { 
			//this.changeUIpage(typeof(UIHomeMain));
			//forward
			this.gameManager.stopMoving();
			Debug.Log("forward onTouchEnd");

		});
		_mainView.GetChild("n9").onClick.Add(() => { 
			//this.changeUIpage(typeof(UIHomeMain));
			//back
		});
		_mainView.GetChild("n7").onClick.Add(() => { 
			//this.changeUIpage(typeof(UIHomeMain));
			//right
		});
		_mainView.GetChild("n3").onClick.Add(() => { 
			//this.changeUIpage(typeof(UIHomeMain));
			//left
		});

		_mainView.GetChild("n10").onClick.Add(() => { 
			//this.changeUIpage(typeof(UIHomeMain));
			//go
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

}


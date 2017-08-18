using System;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;

public class UIGameMain : UIMain
{
	GList _list;
	int item_index;//列表item索引值
	GameObject gameScene;

	void Awake()
	{
		base.init ("Game");
		this.gameScene =Instantiate((GameObject)Resources.Load("3d/3dGame"));

	}

	void Start(){
		GComponent toolbar = _mainView.GetChild ("n19").asCom;
		toolbar.GetChild("n3").onClick.Add(() => { 
			this.changeUIpage(typeof(UIHomeMain));

		});
	}

	void Update(){
	}

	/**
	 * 销毁界面回调
	 * */
	protected void destroyUI (){
		base.destroyUI ();
		GameObject.Destroy (this.gameScene);
	}

}


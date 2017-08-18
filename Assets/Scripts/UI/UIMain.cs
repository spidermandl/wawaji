using System;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;

public abstract class UIMain : MonoBehaviour
{
	protected const int UI_WIDTH = 750;
	protected const int UI_HEIGHT = 1206;

	protected GComponent _mainView;
	protected ClickDelegateFunc _clickFunc;
	public delegate void ClickDelegateFunc(ClickType type);

	public enum ClickType
	{ 
		StartGame = 1,//开始游戏按钮
		CloseLoginPanel = 2,//关闭登录框
		LoginGame = 3, //登录游戏
		PlayGame = 4, // 进入玩游戏界面
	}

	/**
	 * 初始化主界面
	 * */
	protected void init(string module){
		GRoot.inst.SetContentScaleFactor (UI_WIDTH,UI_HEIGHT);

		UIPackage.AddPackage (module);
		_mainView = UIPackage.CreateObject (module, module).asCom;
		GRoot.inst.AddChild (_mainView);

		this.gameObject.SetActive (false);
		MediatorPlug plug = this.gameObject.AddComponent (typeof(MediatorPlug)) as MediatorPlug;
		plug.setClassRef (module+"Mediator");
		this.gameObject.SetActive (true);
	}

	/**
	 * 切换界面
	 * */
	protected void changeUIpage(Type cls){
		destroyUI ();
		GameObject obj = new GameObject(cls.ToString());
		obj.AddComponent(cls);
	}

	/**
	 * 销毁界面回调
	 * */
	protected void destroyUI (){
		GRoot.inst.RemoveChildren ();
		Destroy (this.gameObject);//销毁自身脚本
	}

	/**
	 * 加入单机监听回调函数
	 * */
	public void setClickFunc(ClickDelegateFunc func){
		this._clickFunc = func;
	}
}


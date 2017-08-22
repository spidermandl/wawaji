﻿using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Enter;
using PureMVC.Interfaces;

public class HomeMediator: BaseMediator {
	public new const string NAME = "HomeMediator";
	private UIHomeMain m_home_ui{
		get{ return ((GameObject)ViewComponent).GetComponent<UIHomeMain>(); }
	}

	//IMediatorPlug needs
	public HomeMediator(string mediatorName, object viewComponent ):base(mediatorName, viewComponent ) {

	}

	public override IList<string> ListNotificationInterests()
	{
		IList<string> list = new List<string>();
		return list;
	}

	public override void HandleNotification(INotification notification){        

	}

	public override void OnRegister()
	{
		m_home_ui.setClickFunc (clickFunc);
	}

	public override void OnRemove()
	{
		Debug.Log("Remove:" + MediatorName );
	}

	/**
	 * 单击事件逻辑
	 * */
	protected override void clickFunc(UIMain.ClickType type){
		switch (type) {
		case UIMain.ClickType.PlayGame:
			playGame ();
			break;
		default:
			break;
		}
	}
	/**
	 * 开始游戏按钮
	 * */
	void playGame(){
		Debug.Log("playGame:" + MediatorName );
	}

}


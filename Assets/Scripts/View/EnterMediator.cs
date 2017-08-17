using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Enter;
using PureMVC.Interfaces;

public class EnterMediator: PureMVC.Patterns.Mediator {

	private UIEnterMain m_login_dialog{
		get{ return ((GameObject)ViewComponent).GetComponent<UIEnterMain>(); }
	}

	//IMediatorPlug needs
	public EnterMediator(string mediatorName, object viewComponent ):base(mediatorName, viewComponent ) {
		
	}

	public override void HandleNotification(INotification notification){        
		
	}

	public override void OnRegister()
	{
		m_login_dialog.setClickFunc (clickFunc);
	}

	public override void OnRemove()
	{
		Debug.Log("Remove:" + MediatorName );
	}

	/**
	 * 单击事件逻辑
	 * */
	void clickFunc(UIMain.ClickType type){
		switch (type) {
		case UIMain.ClickType.StartGame:
			break;
		case UIMain.ClickType.CloseLoginPanel:
			break;
		default:
			break;
		}
	}
	/**
	 * 开始游戏按钮
	 * */
	void startGame(){
		Debug.Log("clickStartGame:" + MediatorName );
	}
	/**
	 * 关闭登录界面
	 * */
	void closeLoginPanel(){
		Debug.Log("closeLoginPanel:" + MediatorName );
	}

}


using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Enter;
using PureMVC.Interfaces;

public class GameMediator: BaseMediator {

	private UIGameMain m_game_ui{
		get{ return ((GameObject)ViewComponent).GetComponent<UIGameMain>(); }
	}

	//IMediatorPlug needs
	public GameMediator(string mediatorName, object viewComponent ):base(mediatorName, viewComponent ) {

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
		m_game_ui.setClickFunc (clickFunc);
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
		case UIMain.ClickType.CloseLoginPanel:
			closeLoginPanel ();
			break;
		case UIMain.ClickType.LoginGame:
			loginGame ();
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
	/**
	 * 关闭登录界面
	 * */
	void closeLoginPanel(){
		Debug.Log("closeLoginPanel:" + MediatorName );
	}
	/**
	 * 登录游戏
	 * */
	void loginGame(){
		Debug.Log("loginGame:" + MediatorName );
	}

}


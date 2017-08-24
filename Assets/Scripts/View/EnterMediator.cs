using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using PureMVC.Interfaces;

public class EnterMediator: BaseMediator {
	public new const string NAME = "EnterMediator";

	private UIEnterMain m_login_ui{
		get{ return ((GameObject)ViewComponent).GetComponent<UIEnterMain>(); }
	}

	//IMediatorPlug needs
	public EnterMediator(string mediatorName, object viewComponent ):base(mediatorName, viewComponent ) {
		
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
		m_login_ui.setClickFunc (clickFunc);
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
		case UIMain.ClickType.StartGame:
			startGame ();
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
	void startGame(){
		Debug.Log("clickStartGame:" + MediatorName );
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


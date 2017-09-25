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

	public override string[] ListNotificationInterests()
	{
		List<string> list = new List<string>();
		list.Add (Req_RegisterVcode.COMMAND);
		list.Add (Req_UserRegister.COMMAND);
		list.Add (Req_UserRegisterSendMsg.COMMAND);
		list.Add (Req_UserLogin.COMMAND);
		list.Add (Req_GetExplainAttention.COMMAND);
		list.Add (Req_GetBaseInfo.COMMAND);
		list.Add (Req_GetPrizeUserLists.COMMAND);
		list.Add (Req_GetUserForgetPsdVcode.COMMAND);
		list.Add (Req_UserForgetPsdSendMsg.COMMAND);
		list.Add (Req_UserResetPsd.COMMAND);
		return list.ToArray();
	}

	public override void HandleNotification(INotification notification){        
		switch( notification.Name ){
		case  Req_RegisterVcode.COMMAND:
			m_login_ui.RespondRegisterVcode (notification);
			break;
		case Req_UserRegister.COMMAND:
			m_login_ui.RespondRegister (notification);
			break;
		case Req_UserRegisterSendMsg.COMMAND:
			m_login_ui.RespondRegisterSendMsg (notification);
			break;
		case Req_UserLogin.COMMAND:
			m_login_ui.RespondLogin (notification);
			break;
		case Req_GetExplainAttention.COMMAND:
			m_login_ui.RespondDoc (notification);
			break;
		case Req_GetBaseInfo.COMMAND:
			m_login_ui.RespondBaseInfo (notification);
			break;
		case Req_GetPrizeUserLists.COMMAND:
			m_login_ui.RespondUserPrizeList (notification);
			break;
		case Req_GetUserForgetPsdVcode.COMMAND:
			m_login_ui.RespondForgetVcode (notification);
			break;
		case Req_UserForgetPsdSendMsg.COMMAND:
			m_login_ui.RespondForgetSendMsg (notification);
			break;
		case Req_UserResetPsd.COMMAND:
			m_login_ui.RespondResetPsd (notification);
			break;

		default:
			break;
		}
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


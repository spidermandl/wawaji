using UnityEngine;
using System.Collections;
using System.Collections.Generic;
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
		list.Add (Req_GetPrizeInfo.COMMAND);
		list.Add (Req_UserLogout.COMMAND);
		list.Add (Req_GetMachineInfo.COMMAND);
		list.Add (Req_GetPrizeUserHorn.COMMAND);
		list.Add (Req_MachineStartGrab.COMMAND);
		return list;
	}

	public override void HandleNotification(INotification notification){        
		switch( notification.Name ){
		case  Req_GetPrizeInfo.COMMAND:
			m_home_ui.RespondPrizeInfo (notification);
			break;
		case  Req_UserLogout.COMMAND:
			m_home_ui.RespondLogout (notification);
			break;
		case Req_GetMachineInfo.COMMAND:
			m_home_ui.RespondMachineInfo (notification);
			break;
		case Req_GetPrizeUserHorn.COMMAND:
			m_home_ui.RespondUserPrizeStrings (notification);
			break;
		default:
			break;
		}
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


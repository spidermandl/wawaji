using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using PureMVC.Interfaces;

public class NoticeMediator: BaseMediator {
	public new const string NAME = "NoticeMediator";

	private UINoticeMain m_notice_ui{
		get{ return ((GameObject)ViewComponent).GetComponent<UINoticeMain>(); }
	}

	//IMediatorPlug needs
	public NoticeMediator(string mediatorName, object viewComponent ):base(mediatorName, viewComponent ) {

	}

	public override string[] ListNotificationInterests()
	{
		List<string> list = new List<string>();
		list.Add (Req_GetNewsLists.COMMAND);
		return list.ToArray();
	}

	public override void HandleNotification(INotification notification){        
		switch( notification.Name ){
		case  Req_GetNewsLists.COMMAND:
			m_notice_ui.RespondNoticeList (notification);
			break;
		default:
			break;
		}
	}

	public override void OnRegister()
	{
		
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
		default:
			break;
		}
	}



}


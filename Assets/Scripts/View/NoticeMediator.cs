using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using PureMVC.Interfaces;

public class NoticeMediator: BaseMediator {
	public new const string NAME = "NoticeMediator";

	//IMediatorPlug needs
	public NoticeMediator(string mediatorName, object viewComponent ):base(mediatorName, viewComponent ) {

	}

	public override IList<string> ListNotificationInterests()
	{
		IList<string> list = new List<string>();
		list.Add (Req_GetNewsLists.COMMAND);
		return list;
	}

	public override void HandleNotification(INotification notification){        
		switch( notification.Name ){
		case  Req_GetNewsLists.COMMAND:
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


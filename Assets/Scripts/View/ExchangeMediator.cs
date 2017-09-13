using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using PureMVC.Interfaces;

public class ExchangeMediator: BaseMediator {
	public new const string NAME = "ExchangeMediator";
	private UIExchangeMain m_exchange_ui{
		get{ return ((GameObject)ViewComponent).GetComponent<UIExchangeMain>(); }
	}

	//IMediatorPlug needs
	public ExchangeMediator(string mediatorName, object viewComponent ):base(mediatorName, viewComponent ) {

	}

	public override IList<string> ListNotificationInterests()
	{
		IList<string> list = new List<string>();
		list.Add (Req_GetAllPrize.COMMAND);
		return list;
	}

	public override void HandleNotification(INotification notification){        
		switch( notification.Name ){
		case  Req_GetAllPrize.COMMAND:
			m_exchange_ui.RespondAllPrize (notification);
			break;
		default:
			break;
		}
	}

	public override void OnRegister()
	{
		m_exchange_ui.setClickFunc (clickFunc);
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


using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using PureMVC.Interfaces;

public class PrizeMediator: BaseMediator {
	public new const string NAME = "PrizeMediator";
	private UIPrizeMain m_prize_ui{
		get{ return ((GameObject)ViewComponent).GetComponent<UIPrizeMain>(); }
	}

	//IMediatorPlug needs
	public PrizeMediator(string mediatorName, object viewComponent ):base(mediatorName, viewComponent ) {

	}

	public override IList<string> ListNotificationInterests()
	{
		IList<string> list = new List<string>();
		list.Add (Req_GetMachinePrizeInfo.COMMAND);
		return list;
	}

	public override void HandleNotification(INotification notification){        
		switch( notification.Name ){
		case  Req_GetMachinePrizeInfo.COMMAND:
			m_prize_ui.RespondMachinePrize (notification);
			break;
		default:
			break;
		}
	}

	public override void OnRegister()
	{
		m_prize_ui.setClickFunc (clickFunc);
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


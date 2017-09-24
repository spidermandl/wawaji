using System;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;
using PureMVC.Interfaces;
using System.Collections;

public class RewardsMediator: BaseMediator {
	public new const string NAME = "RewardsMediator";
	private UIRewardsMain m_rewards_ui{
		get{ return ((GameObject)ViewComponent).GetComponent<UIRewardsMain>(); }
	}

	//IMediatorPlug needs
	public RewardsMediator(string mediatorName, object viewComponent ):base(mediatorName, viewComponent ) {

	}

	public override IList<string> ListNotificationInterests()
	{
		IList<string> list = new List<string>();
		list.Add (Req_UsePrize.COMMAND);
		return list;
	}

	public override void HandleNotification(INotification notification){        
		switch( notification.Name ){
		case  Req_UsePrize.COMMAND:
			m_rewards_ui.RespondUsePrize (notification);
			break;
		default:
			break;
		}
	}

	public override void OnRegister()
	{
		m_rewards_ui.setClickFunc (clickFunc);
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


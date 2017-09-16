using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using PureMVC.Interfaces;

public class GameMediator: BaseMediator {
	public new const string NAME = "GameMediator";

	private UIGameMain m_game_ui{
		get{ return ((GameObject)ViewComponent).GetComponent<UIGameMain>(); }
	}

	//IMediatorPlug needs
	public GameMediator(string mediatorName, object viewComponent ):base(mediatorName, viewComponent ) {

	}

	public override IList<string> ListNotificationInterests()
	{
		IList<string> list = new List<string>();
		list.Add (Req_GetMachinePrizeBallData.COMMAND);
		list.Add (Req_MachineStartGrab.COMMAND);
		return list;
	}

	public override void HandleNotification(INotification notification){        
		switch( notification.Name ){
		case  Req_GetMachinePrizeBallData.COMMAND:
			m_game_ui.RespondBallInfo (notification);
			break;
		case Req_MachineStartGrab.COMMAND:
			//m_game_ui.RespondGameStart (notification);
			break;
		default:
			break;
		}
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
		default:
			break;
		}
	}

	public void gameOver(){
		m_game_ui.gameOver ();
	}

}


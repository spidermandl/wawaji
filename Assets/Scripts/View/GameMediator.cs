using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using PureMVC.Interfaces;

/// <summary>
/// Game mediator.
/// </summary>
public class GameMediator: BaseMediator {
	public new const string NAME = "GameMediator";

	private UIGameMain m_game_ui{
		get{ return ((GameObject)ViewComponent).GetComponent<UIGameMain>(); }
	}

	//IMediatorPlug needs
	public GameMediator(string mediatorName, object viewComponent ):base(mediatorName, viewComponent ) {

	}

	public override string[] ListNotificationInterests()
	{
		List<string> list = new List<string>();
		list.Add (Req_GetMachinePrizeBallData.COMMAND);
		list.Add (Req_MachineStartGrab.COMMAND);
		list.Add (Req_MachineEndGrab.COMMAND);
		list.Add (Req_UserRecharge.COMMAND);
		list.Add (GameCommand.GameEnd.COMMAND);
		list.Add (GameCommand.GameNoMoney.COMMAND);
		list.Add (UserCommand.CoinUpdate.COMMAND);
		list.Add (GameCommand.GameStillEnter.COMMAND);
		list.Add (GameCommand.GameStillExit.COMMAND);
		list.Add (GameCommand.GameBlockPicking.COMMAND);
		return list.ToArray();
	}

	public override void HandleNotification(INotification notification){        
		switch( notification.Name ){
		case  Req_GetMachinePrizeBallData.COMMAND:
			m_game_ui.RespondBallInfo (notification);
			break;
		case Req_MachineStartGrab.COMMAND:
			m_game_ui.RespondGameStart (notification);
			break;
		case Req_MachineEndGrab.COMMAND:
			m_game_ui.RespondGameEnd (notification);
			break;
		case Req_UserRecharge.COMMAND:
			m_game_ui.RespondUserRecharge (notification);
			break;
		case GameCommand.GameEnd.COMMAND:
			m_game_ui.GameOver (notification);
			break;
		case GameCommand.GameNoMoney.COMMAND:
			m_game_ui.CantStart (null);
			break;
		case UserCommand.CoinUpdate.COMMAND:
			m_game_ui.UpdateUserInfo (notification);
			break;
		case GameCommand.GameStillEnter.COMMAND:
			m_game_ui.EnterGameStill (notification);
			break;
		case GameCommand.GameStillExit.COMMAND:
			m_game_ui.ExitGameStill (notification);
			break;
		case GameCommand.GameBlockPicking.COMMAND:
			m_game_ui.GameBlockPicking (notification);
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


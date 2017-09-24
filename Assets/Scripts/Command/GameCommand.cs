using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;

/**
 * Desmond
 * 游戏抓球过程中的消息
 * */
public class GameCommand : PureMVC.Patterns.SimpleCommand {

	public static string COMMAND = "GAME_IN_COMMAND";

	public override void Execute(PureMVC.Interfaces.INotification notification) {
		
		object body = notification.Body;
		if (body.GetType () == typeof(GameEnd))
			SendNotification (GameEnd.COMMAND);
		else if (body.GetType () == typeof(GameNoMoney))
			SendNotification (GameNoMoney.COMMAND);
	}

	public class GameEnd{
		public const string COMMAND = "GAME_END";
	}

	public class GameNoMoney{
		public const string COMMAND = "GAME_NO_MONEY";
	}
}

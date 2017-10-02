using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using PureMVC.Patterns.Command;

/**
 * Desmond
 * 游戏抓球过程中的消息
 * */
public class GameCommand : SimpleCommand {

	public static string COMMAND = "GAME_IN_COMMAND";

	public override void Execute(PureMVC.Interfaces.INotification notification) {
		
		object body = notification.Body;
		if (body.GetType () == typeof(GameEnd))
			SendNotification (GameEnd.COMMAND);
		else if (body.GetType () == typeof(GameNoMoney))
			SendNotification (GameNoMoney.COMMAND);
		else if (body.GetType () == typeof(GameStillEnter))
			SendNotification (GameStillEnter.COMMAND);
		else if (body.GetType () == typeof(GameStillExit))
			SendNotification (GameStillExit.COMMAND);
		else if (body.GetType () == typeof(GameRestart))
			SendNotification (GameRestart.COMMAND);
		else if (body.GetType () == typeof(GameBlockPicking))
			SendNotification (GameBlockPicking.COMMAND);
	}
	public class GameRestart{
		public const string COMMAND = "GAME_RESTART";
	}
	public class GameEnd{
		public const string COMMAND = "GAME_END";
	}

	public class GameNoMoney{
		public const string COMMAND = "GAME_NO_MONEY";
	}

	public class GameStillEnter{
		public const string COMMAND = "GAME_STILL_ENTER";
	}
	public class GameStillExit{
		public const string COMMAND = "GAME_STILL_EXIT";
	}
	public class GameBlockPicking{
		public const string COMMAND = "GANE_BLOCK_PICKING";
	}
}

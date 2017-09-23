using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;

/**
 * Desmond
 * http command response
 * */
public class GameCommand : PureMVC.Patterns.SimpleCommand {

	public static string COMMAND = "GAME_IN_COMMAND";

	public override void Execute(PureMVC.Interfaces.INotification notification) {
		object body = notification.Body;
		if(body.GetType()==typeof(GameEnd))
			SendNotification (GameEnd.COMMAND);
	}

	public class GameEnd{
		public const string COMMAND = "GAME_END";
	}
}

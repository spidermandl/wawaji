using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using PureMVC.Patterns.Command;

/**
 * Desmond
 * 用户信息更新消息
 * */
public class UserCommand : SimpleCommand {

	public static string COMMAND = "USER_COMMAND";

	public override void Execute(PureMVC.Interfaces.INotification notification) {

		object body = notification.Body;
		if (body.GetType () == typeof(CoinUpdate))
			SendNotification (CoinUpdate.COMMAND);
		else if (body.GetType() == typeof(MachineUpdate))
			SendNotification (MachineUpdate.COMMAND);
	}

	public class CoinUpdate{
		public const string COMMAND = "COIN_UPDATE";
	}

	public class MachineUpdate{
		public const string COMMAND = "MACHINE_UPDATE";
	}

}
	
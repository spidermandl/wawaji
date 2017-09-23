using UnityEngine;
using System.Collections;
using UnityEngine.UI;

/// <summary>
/// Start up command.
/// </summary>
public class StartUpCommand : PureMVC.Patterns.SimpleCommand {

	public static string STARTUP = "UnityFacade.StartUp";

	public override void Execute(PureMVC.Interfaces.INotification notification)
	{
		Debug.Log("Execute StartUpCommand");
		//Register default proxies and commands
		Facade.RegisterProxy( new DeviceInfoProxy( DeviceInfoProxy.NAME ) );
//		Facade.RegisterProxy( new Count2Proxy( Count2Proxy.NAME ) );

		GameObject enter = new GameObject (typeof(UIEnterMain).ToString());
		enter.AddComponent (typeof(UIEnterMain));

		//
		Facade.RegisterCommand (HttpReqCommand.HTTP,typeof(HttpReqCommand));
		Facade.RegisterCommand (HttpResCommand.HTTP,typeof(HttpResCommand));
		Facade.RegisterCommand (GameCommand.COMMAND,typeof(GameCommand));

	}
}

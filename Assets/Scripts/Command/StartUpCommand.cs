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

		NetworkManager network = (new GameObject (typeof(NetworkManager).ToString())).AddComponent<NetworkManager> ();
			//this.gameObject.AddComponent<NetworkManager> ();
		UnityFacade.GetInstance ().Network = network;

		//Register default proxies and commands
		Facade.RegisterProxy( new DeviceInfoProxy( DeviceInfoProxy.NAME ) );

		GameObject enter = new GameObject (typeof(UIEnterMain).ToString());
		enter.AddComponent (typeof(UIEnterMain));

		//
		Facade.RegisterCommand (HttpReqCommand.HTTP,typeof(HttpReqCommand));
		Facade.RegisterCommand (HttpResCommand.HTTP,typeof(HttpResCommand));
		Facade.RegisterCommand (GameCommand.COMMAND,typeof(GameCommand));

		//版本资源更新检查
		Req_GetUpdatePics resquest = new Req_GetUpdatePics ();
		UnityFacade.GetInstance().SendNotification(HttpReqCommand.HTTP,resquest);

	}
}

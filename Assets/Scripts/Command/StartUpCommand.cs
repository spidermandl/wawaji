using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class StartUpCommand : PureMVC.Patterns.SimpleCommand {

	public static string STARTUP = "UnityFacade.StartUp";

	public override void Execute(PureMVC.Interfaces.INotification notification)
	{
		Debug.Log("Execute StartUpCommand");
		//Register default proxies and commands
//		Facade.RegisterProxy( new CountProxy( CountProxy.NAME ) );
//		Facade.RegisterProxy( new Count2Proxy( Count2Proxy.NAME ) );

		GameObject enter = new GameObject (typeof(UIEnterMain).ToString());
		enter.AddComponent (typeof(UIEnterMain));

		//
		UnityFacade.GetInstance().RegisterCommand (HttpReqCommand.HTTP,typeof(HttpReqCommand));
		UnityFacade.GetInstance().RegisterCommand (HttpResCommand.HTTP,typeof(HttpResCommand));
	}
}

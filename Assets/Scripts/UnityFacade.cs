﻿using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using PureMVC.Interfaces;
using System;

public class UnityFacade : PureMVC.Patterns.Facade {

	private NetworkManager network;

	public NetworkManager Network{
		get{ return this.network; }
		set{ network = value;}
	}

	static UnityFacade()
	{
		m_instance = new UnityFacade();
    }
	 
	// Override Singleton Factory method 
	public static UnityFacade GetInstance() {
		return m_instance as UnityFacade;
	}

	protected override void InitializeController() {
		base.InitializeController();
		RegisterCommand( StartUpCommand.STARTUP, typeof(StartUpCommand)  );
	}
		
	public void StartUp()
	{
		SendNotification( StartUpCommand.STARTUP );
	}
	//Handle IMediatorPlug connection
	public void ConnectMediator( IMediatorPlug item )
	{
		Type mediatorType = Type.GetType( item.GetClassRef() );
		if( mediatorType!=null){
			IMediator mediatorPlug = (IMediator)Activator.CreateInstance( mediatorType, item.GetName(), item.GetView() ) ;
			RegisterMediator( mediatorPlug );
		}
	}

	public void DisconnectMediator( string mediatorName )
	{
		RemoveMediator( mediatorName );
	}
}

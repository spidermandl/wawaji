using System;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;
using DG.Tweening;

public class UIRegisterWin : UIBaseVerifyWin
{
	
	public UIRegisterWin ():base()
	{

	}

	protected override void OnInit()
	{
		this.contentPane = UIPackage.CreateObject("Enter", "Register_dialog").asCom;
		base.OnInit ();

	}



}


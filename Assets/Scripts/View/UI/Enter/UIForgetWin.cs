using System;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;
using DG.Tweening;

public class UIForgetWin : UIBaseVerifyWin
{


	public UIForgetWin ():base()
	{

	}

	protected override void OnInit()
	{
		this.contentPane = UIPackage.CreateObject("Enter", "Forget_dialog").asCom;
		base.OnInit ();
	}



}


﻿using System;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;
using DG.Tweening;

public class UIHelp : BaseWindow
{

	GObject Dial {
		get{ return this.contentPane.GetChild ("n5"); }
	}
	GObject Online{
		get{ return this.contentPane.GetChild ("n4"); }
	}


	public UIHelp ():base()
	{
		
	}

	protected override void OnInit()
	{
		this.contentPane = UIPackage.CreateObject("Window", "Help_dialog").asCom;
		this.Center();
		this.modal = true;
		//this.SetPosition (this.position.x, 0, this.position.z);
		GRoot.inst.modalLayer.onClick.Add (()=>{
			this.Hide();
		});
//		this.contentPane.onClick.Add ((EventContext context) => {
//			context.StopPropagation ();
//		});

	}

}


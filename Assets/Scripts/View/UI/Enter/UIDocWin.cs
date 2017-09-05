using System;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;
using DG.Tweening;

public class UIDocWin : BaseWindow
{
	public GObject Close {
		get{ return this.contentPane.GetChild ("n25"); }
	}

	public UIDocWin ():base()
	{
		
	}

	protected override void OnInit()
	{
		this.contentPane = UIPackage.CreateObject("Enter", "Doc_dialog").asCom;
		this.Center();
		this.modal = true;

		GRoot.inst.modalLayer.onClick.Add (()=>{
			this.Hide();
		});
	}



}


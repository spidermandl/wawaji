using System;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;
using DG.Tweening;

public class UISetting : BaseWindow
{

	GObject Close {
		get{ return this.contentPane.GetChild ("n13"); }
	}

	public UISetting ():base()
	{
		
	}

	protected override void OnInit()
	{
		this.contentPane = UIPackage.CreateObject("Window", "Setting_dialog").asCom;
		this.Center();
		this.modal = true;
		//this.SetPosition (this.position.x, 0, this.position.z);
		GRoot.inst.modalLayer.onClick.Add (()=>{
			this.Hide();
		});

		Close.onClick.Add (() => {
			this.Hide();
		});

		base.OnInit ();
	}
//
//	void OnClickModal(){
//		this.Hide();
//		//GRoot.inst.modalLayer.onClick.Remove (OnClickModal);
//	}
}


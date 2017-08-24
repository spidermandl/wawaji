using System;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;
using DG.Tweening;

public class UIPrize : BaseWindow
{
	public UIPrize ():base()
	{

	}

	protected override void OnInit()
	{
		this.contentPane = UIPackage.CreateObject("Window", "Prize_dialog").asCom;
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


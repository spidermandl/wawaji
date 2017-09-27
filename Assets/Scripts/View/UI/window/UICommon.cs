using System;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;
using DG.Tweening;

public class UICommon : BaseWindow
{

	public GObject Yes {
		get{ return this.contentPane.GetChild ("n12"); }
	}
	public GObject Title {
		get{ return this.contentPane.GetChild ("n10"); }
	}
	public GObject Content {
		get{ return this.contentPane.GetChild ("n6"); }
	}

	public UICommon ():base()
	{

	}

	protected override void OnInit()
	{
		this.contentPane = UIPackage.CreateObject("Window", "Common_dialog").asCom;
		this.Center();
//		this.SetPosition (this.position.x, this.position.y + 10, this.position.z);
		this.modal = true;
		//this.SetPosition (this.position.x, 0, this.position.z);
		GRoot.inst.modalLayer.onClick.Add (()=>{
			this.Hide();
		});
		//		this.contentPane.onClick.Add ((EventContext context) => {
		//			context.StopPropagation ();
		//		});

		Yes.onClick.Add (() => {
			this.Hide();
		});
	}

}


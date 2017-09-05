using System;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;
using DG.Tweening;

public class UIExchangeConfirm : BaseWindow
{

	GObject Confirm_exchange{
		get{ return this.contentPane.GetChild ("n16"); }
	}
	GObject Close {
		get{ return this.contentPane.GetChild ("n13"); }
	}

	public UIExchangeConfirm ():base()
	{

	}

	protected override void OnInit()
	{
		this.contentPane = UIPackage.CreateObject("Window", "Exchange_confirm_dialog").asCom;
		this.Center();
		this.modal = true;


		Confirm_exchange.onClick.Add(()=>{

		});
		Close.onClick.Add(() => {
			this.Hide();
		});


	}




}


using System;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;
using DG.Tweening;

public class UIExchange : BaseWindow
{

	GObject Coin_exchange {
		get{ return this.contentPane.GetChild ("n15"); }
	}
	GObject Alipay_account{
		get{ return this.contentPane.GetChild ("n16"); }
	}

	GObject Bind_alipay{
		get{ return this.contentPane.GetChild ("n4"); }
	}
	GObject Max{
		get{ return this.contentPane.GetChild ("n3"); }
	}
	GObject Confirm_exchange{
		get{ return this.contentPane.GetChild ("n7"); }
	}
	GObject Close {
		get{ return this.contentPane.GetChild ("n1"); }
	}

	public UIExchange ():base()
	{
		
	}

	protected override void OnInit()
	{
		this.contentPane = UIPackage.CreateObject("Window", "Exchange_dialog").asCom;
		this.Center();
		this.modal = true;


		Max.onClick.Add(()=>{
			
		});
		Confirm_exchange.onClick.Add(()=>{
			
		});
		Coin_exchange.onClick.Add(()=>{
			
		});
		Bind_alipay.onClick.Add(()=>{
			
		});
		Alipay_account.onClick.Add(()=>{
			
		});
		Close.onClick.Add(() => {
			this.Hide();
		});


	}




}


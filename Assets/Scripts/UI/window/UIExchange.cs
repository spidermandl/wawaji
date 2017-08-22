using System;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;
using DG.Tweening;

public class UIExchange : Window
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

	public UIExchange ()
	{
		UIConfig.modalLayerColor = new Color (0f, 0f, 0f, 0.4f);
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

	override protected void DoShowAnimation()
	{
		this.SetScale(0.1f, 0.1f);
		this.SetPivot(0.5f, 0.5f);
		this.TweenScale(new Vector2(1, 1), 0.3f).SetEase(Ease.OutQuad).OnComplete(this.OnShown);
	}

	override protected void DoHideAnimation()
	{
		this.TweenScale(new Vector2(0.1f, 0.1f), 0.3f).SetEase(Ease.OutQuad).OnComplete(this.HideImmediately);
	}


}


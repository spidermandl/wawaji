﻿using System;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;
using DG.Tweening;

public class UILoginWin : Window
{

	public GObject Close {
		get{ return this.contentPane.GetChild ("n7"); }
	}
	public GObject Login{
		get{ return this.contentPane.GetChild ("n5"); }
	}
	public GObject Username {
		get{ return this.contentPane.GetChild ("n16"); }
	}
	public GObject Password{
		get{ return this.contentPane.GetChild ("n17"); }
	}

	public UILoginWin ()
	{
		UIConfig.modalLayerColor = new Color (0f, 0f, 0f, 0.4f);
	}

	protected override void OnInit()
	{
		this.contentPane = UIPackage.CreateObject("Enter", "Login_dialog").asCom;
		this.Center();
		this.modal = true;

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

﻿using System;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;
using DG.Tweening;

public class UIConfirm : Window
{

	EventCallback0 _onConfirm;
	EventCallback0 _onCancel;

	public GObject Cancel {
		get{ return this.contentPane.GetChild ("n10"); }
	}
	public GObject Confirm{
		get{ return this.contentPane.GetChild ("n9"); }
	}
	public GObject Photo{
		get{ return this.contentPane.GetChild ("n11"); }
	}
	public GObject Discription{
		get{ return this.contentPane.GetChild ("n12"); }
	}
	public UIConfirm ()
	{
		UIConfig.modalLayerColor = new Color (0f, 0f, 0f, 0.4f);
	}

	protected override void OnInit()
	{
		this.contentPane = UIPackage.CreateObject("Game", "Confirm_dialog").asCom;
		this.Center();
		this.modal = true;

		Confirm.onClick.Add (() => {
			this.Hide();
			if(_onConfirm !=null)
				_onConfirm();
		});

		Cancel.onClick.Add (() => {
			this.Hide();
			if(_onCancel !=null)
				_onCancel();
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

	public void setConfirmClick(EventCallback0 func){
		this._onConfirm = func;
	}

	public void setCancelClick(EventCallback0 func){
		this._onCancel = func;
	}

}


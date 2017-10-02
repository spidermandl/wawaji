using System;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;
using DG.Tweening;

public class UIFailure : Window
{
	EventCallback0 _onConfirm;

	public GObject Contiune {
		get{ return this.contentPane.GetChild ("n3"); }
	}

	public UIFailure ()
	{
		UIConfig.modalLayerColor = new Color (0f, 0f, 0f, 0.4f);
	}

	protected override void OnInit()
	{
		this.contentPane = UIPackage.CreateObject("Game", "Failure_dialog").asCom;
		this.Center();
		this.modal = true;

		Contiune.onClick.Add (() => {
			this.Hide();
			if(_onConfirm !=null)
				_onConfirm();
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
}


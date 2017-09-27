using System;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;
using DG.Tweening;

public abstract class BaseWindow : Window
{
	
	public BaseWindow ()
	{
		UIConfig.modalLayerColor = new Color (0f, 0f, 0f, 0.5f);
	}

	protected override void OnInit()
	{
		UIInstanceManager.getInstance ().addWin (this);
		base.OnInit ();
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

	/**
	 * 销毁界面
	 * */
	public virtual void destroyUI (){
		GRoot.inst.RemoveChild (this.contentPane);
	}


}


using System;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;
using DG.Tweening;

public class UITopup : BaseWindow
{

	GObject Input_figure {
		get{ return this.contentPane.GetChild ("n17"); }
	}
	GObject Pay{
		get{ return this.contentPane.GetChild ("n7"); }
	}

	GObject Close {
		get{ return this.contentPane.GetChild ("n1"); }
	}

	public UITopup ()
	{
		UIConfig.modalLayerColor = new Color (0f, 0f, 0f, 0.4f);
	}

	GButton m_20,m_50,m_100,m_200,m_500,m_1000;
	GButton checked_m = null;

	protected override void OnInit()
	{
		this.contentPane = UIPackage.CreateObject("Window", "Topup_dialog").asCom;
		this.Center();
		this.modal = true;

		m_20 = this.contentPane.GetChild ("n19").asButton;
		m_50 = this.contentPane.GetChild ("n20").asButton;
		m_100 = this.contentPane.GetChild ("n21").asButton;
		m_200 = this.contentPane.GetChild ("n22").asButton;
		m_500 = this.contentPane.GetChild ("n23").asButton;
		m_1000 = this.contentPane.GetChild ("n24").asButton;

		m_20.onClick.Add (OnCheck);
		m_50.onClick.Add (OnCheck);
		m_100.onClick.Add (OnCheck);
		m_200.onClick.Add (OnCheck);
		m_500.onClick.Add (OnCheck);
		m_1000.onClick.Add (OnCheck);

		Close.onClick.Add(() => {
			this.Hide();
		});
		Pay.onClick.Add(() => {
			//
			this.Hide();
		});
		Input_figure.onClick.Add(()=>{

		});

	}

	void OnCheck(EventContext context){
		if(checked_m != null)
			checked_m.selected = false;
		checked_m = ((GButton)context.sender);
	}

}


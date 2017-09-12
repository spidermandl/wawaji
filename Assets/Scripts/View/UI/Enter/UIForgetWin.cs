using System;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;
using DG.Tweening;

public class UIForgetWin : BaseWindow
{

	public GObject Close {
		get{ return this.contentPane.GetChild ("n7"); }
	}
	public GObject Register{
		get{ return this.contentPane.GetChild ("n5"); }
	}
	public GObject Verify {
		get{ return this.contentPane.GetChild ("n18"); }
	}
	public GObject Username {
		get{ return this.contentPane.GetChild ("n20"); }
	}
	public GObject Pic_code_input {
		get{ return this.contentPane.GetChild ("n29"); }
	}
	public GObject Phone_code {
		get{ return this.contentPane.GetChild ("n21"); }
	}
	public GObject Password{
		get{ return this.contentPane.GetChild ("n30"); }
	}

	public GObject Pic_code{
		get{ return this.contentPane.GetChild ("n32"); }
	}

	public GObject Code_countdown{
		get{ return this.contentPane.GetChild ("n33"); }
	}
	public GObject Warn{
		get{ return this.contentPane.GetChild ("n34"); }
	}

	bool isRegistering;
	bool isVerifying;
	public bool ValidRegister{
		get{ return !isRegistering; }
		set{ isRegistering = !value; }
	}
	public bool ValidVerifying{
		get{ return !isVerifying; }
		set{ isVerifying = !value; }
	}

	public UIForgetWin ():base()
	{

	}

	protected override void OnInit()
	{
		this.contentPane = UIPackage.CreateObject("Enter", "Forget_dialog").asCom;
		this.Center();
		this.modal = true;

		this.isRegistering = false;
		this.isVerifying = false;
		Code_countdown.visible = false;
		Warn.visible = false;
		Warn.onClick.Add (()=>{
			Warn.visible = false;
		});
	}



}


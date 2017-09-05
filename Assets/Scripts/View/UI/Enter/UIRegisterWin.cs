using System;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;
using DG.Tweening;

public class UIRegisterWin : BaseWindow
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
	public GObject Phone_code_input {
		get{ return this.contentPane.GetChild ("n21"); }
	}
	public GObject Password{
		get{ return this.contentPane.GetChild ("n30"); }
	}

	public GLoader Pic_code{
		get{ return this.contentPane.GetChild ("n31").asLoader; }
	}

	public UIRegisterWin ():base()
	{

	}

	protected override void OnInit()
	{
		this.contentPane = UIPackage.CreateObject("Enter", "Register_dialog").asCom;
		this.Center();
		this.modal = true;

	}



}


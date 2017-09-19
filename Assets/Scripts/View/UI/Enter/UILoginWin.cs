using System;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;
using DG.Tweening;

public class UILoginWin : BaseWindow
{

	public GObject Close {
		get{ return this.contentPane.GetChild ("n7"); }
	}
	public GObject Login{
		get{ return this.contentPane.GetChild ("n5"); }
	}
	public GObject Username {
		get{ return this.contentPane.GetChild ("n20"); }
	}
	public GObject Password{
		get{ return this.contentPane.GetChild ("n21"); }
	}
	public GObject Register {
		get{ return this.contentPane.GetChild ("n25"); }
	}
	public GObject Forget{
		get{ return this.contentPane.GetChild ("n24"); }
	}

	public GObject Wechat{
		get{ return this.contentPane.GetChild ("n12"); }
	}
	public GObject Guest{
		get{ return this.contentPane.GetChild ("n13"); }
	}
	bool isLogining;
	public bool ValidLogin {
		get{ return !isLogining; }
		set{ isLogining = !value; }
	}

	public UILoginWin ():base()
	{
		
	}

	protected override void OnInit()
	{
		this.contentPane = UIPackage.CreateObject("Enter", "Login_dialog").asCom;
		this.Center();
		this.modal = true;

	}
		


}


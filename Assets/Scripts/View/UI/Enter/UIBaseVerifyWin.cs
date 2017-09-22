using System;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;
using DG.Tweening;

abstract public class UIBaseVerifyWin : BaseWindow
{
	public GObject Close {
		get{ return this.contentPane.GetChild ("n7"); }
	}
	public GObject Send{
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
	public GObject Code_countdown{
		get{ return this.contentPane.GetChild ("n33"); }
	}
	public GObject Warn{
		get{ return this.contentPane.GetChild ("n34"); }
	}
	public GObject Pic_code{
		get{ return this.contentPane.GetChild ("n32"); }
	}

	string code;
	public string Code{
		get{ return code; }
		set{ code = value;}
	}

	protected bool isProcessing;
	protected bool isVerifying;
	public bool ValidRegister{
		get{ return !isProcessing; }
		set{ isProcessing = !value; }
	}
	public bool ValidVerifying{
		get{ return !isVerifying; }
		set{ isVerifying = !value; }
	}

	protected override void OnInit()
	{
		
		this.Center();
		this.modal = true;

		this.isProcessing = false;
		this.isVerifying = false;
		Code_countdown.visible = false;
		Warn.visible = false;
		Warn.onClick.Add (()=>{
			Warn.visible = false;
		});

		Pic_code.asRichTextField.text = Util.CreateRandomCode(5);
	}



}


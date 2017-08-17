using System;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;

public class UIEnterMain : UIMain
{
	
	GComponent _mainView;
	UILoginWin _loginWin;

	ClickDelegateFunc _clickFunc;
	public delegate void ClickDelegateFunc(ClickType type);

	void Awake()
	{
		GRoot.inst.SetContentScaleFactor (UI_WIDTH,UI_HEIGHT);

		UIPackage.AddPackage ("Enter");
		_mainView = UIPackage.CreateObject ("Enter", "Enter").asCom;
		GRoot.inst.AddChild (_mainView);

		this.gameObject.SetActive (false);
		MediatorPlug plug = this.gameObject.AddComponent (typeof(MediatorPlug)) as MediatorPlug;
		plug.setClassRef ("EnterMediator");
		this.gameObject.SetActive (true);

	}

	void Start(){
		//_mainView = this.GetComponent<UIPanel>().ui;

		_loginWin = new UILoginWin();
		_mainView.GetChild("n0").onClick.Add(() => { 
			this._clickFunc(ClickType.StartGame);
			_loginWin.Show(); 

			_loginWin.Close.onClick.Add (() => { 
				this._clickFunc(ClickType.CloseLoginPanel);
				_loginWin.Hide(); 
				//Debug.Log("bbbbbbbbbbbb");
			});

			_loginWin.Login.onClick.Add(() => { 
				Debug.Log("aaaaaaaaaaaaaaaaaaaaaa");
			});
		});


		
	}

	void Update(){
	}

	public void setClickFunc(ClickDelegateFunc func){
		this._clickFunc = func;
	}

}


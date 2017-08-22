using System;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;

public class UIRewardsMain : UIMain
{

	void Awake()
	{
		base.init ("Rewards");

	}

	void Start(){
		//_mainView = this.GetComponent<UIPanel>().ui;
		GLoader bg = _mainView.GetChild ("n12")as GLoader;
		bg.url = "bg/bg_rewards";

		GComponent toolbar = _mainView.GetChild ("n2").asCom;
		toolbar.GetChild("n0").onClick.Add(() => { 
			this.changeUIpage(typeof(UIGameMain));

		});


	}

	void Update(){
	}


}


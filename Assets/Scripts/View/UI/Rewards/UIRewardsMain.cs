using System;
using System.Collections;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;
/// <summary>
/// 领取，兑换，回购奖品
/// </summary>
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
			///this.changeUIpage(typeof(UIGameMain));
			this.jumpToPrevious();
		});

		////////////////////////////////////////////////////////////////////////////////////
		GComponent buyback = _mainView.GetChild ("n26").asCom;
		GComboBox pay_channel = buyback.GetChild ("n39").asComboBox;
		paySetting(buyback,false);
		pay_channel.onChanged.Add (
			(EventContext context) => {
				switch(pay_channel.selectedIndex){
				case 0://alipay
					paySetting(buyback,false);
					break;
				case 1:
					paySetting(buyback,true);
					break;
				default:
					break;
				}
			}
		);
	}

	void Update(){
	}

	void paySetting(GComponent buyback,bool show){
		ArrayList positives = new ArrayList ();
		positives.Add(buyback.GetChild ("n28"));
		positives.Add(buyback.GetChild ("n29"));
		positives.Add(buyback.GetChild ("n30"));

		positives.Add(buyback.GetChild ("n26"));
		positives.Add(buyback.GetChild ("n27"));
		positives.Add(buyback.GetChild ("n31"));

		positives.Add(buyback.GetChild ("n32"));
		positives.Add(buyback.GetChild ("n33"));
		positives.Add(buyback.GetChild ("n43"));
		positives.Add(buyback.GetChild ("n33"));

		foreach (var p in positives) {
			(p as GObject).visible = show;
		}

		ArrayList negitives = new ArrayList ();
		negitives.Add(buyback.GetChild ("n45"));
		negitives.Add(buyback.GetChild ("n46"));
		foreach (var p in negitives) {
			(p as GObject).visible = !show;
		}
	}
}


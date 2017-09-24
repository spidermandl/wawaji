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
	ClaimComponent _claim;
	BuybackComponent _buyback;
	ExchangeComponent _exchange;

	GButton b_claim,b_exchange,b_buyback;

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
		AccountProxy u_proxy = UnityFacade.GetInstance().RetrieveProxy (AccountProxy.NAME) as AccountProxy;
		toolbar.GetChild ("n4").asTextField.text = ""+u_proxy.Coin;

		UserPrizeInfoProxy proxy = UnityFacade.GetInstance ().RetrieveProxy (UserPrizeInfoProxy.NAME) as UserPrizeInfoProxy;
		UserPrizeInfoProxy.PrizeItem prizeItem = proxy.SelectedItem;

		////////////////////////////////////////////////////////////////////////////////////
		_buyback = new BuybackComponent(_mainView.GetChild("n26").asCom,_mainView.GetChild("n29").asCom,prizeItem);
		_exchange = new ExchangeComponent(_mainView.GetChild("n25").asCom,_mainView.GetChild("n28").asCom,prizeItem);
		_claim = new ClaimComponent(_mainView.GetChild("n14").asCom,_mainView.GetChild("n27").asCom,prizeItem);

		b_claim = _mainView.GetChild ("n24").asButton;
		b_exchange = _mainView.GetChild("n22").asButton;
		b_buyback = _mainView.GetChild("n23").asButton;
		b_claim.onChanged.Add (()=>{
			if(b_claim.selected){
				_claim.validateUI();
			}
		});
		b_exchange.onChanged.Add (()=>{
			if(b_exchange.selected){
				_exchange.validateUI();
			}
		});
		b_buyback.onChanged.Add (()=>{
			if(b_buyback.selected){
				_buyback.validateUI();
			}
		});

	}

	void Update(){
	}

	void validateProfile(){

	}
}


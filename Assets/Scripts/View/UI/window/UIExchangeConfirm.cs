using System;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;
using DG.Tweening;

public class UIExchangeConfirm : BaseWindow
{

	GObject Confirm_exchange{
		get{ return this.contentPane.GetChild ("n16"); }
	}
	GObject Close {
		get{ return this.contentPane.GetChild ("n13"); }
	}

	PrizeSetProxy.PrizeItem prize_item;

	public UIExchangeConfirm ():base()
	{

	}

	protected override void OnInit()
	{
		this.contentPane = UIPackage.CreateObject("Window", "Exchange_confirm_dialog").asCom;
		this.Center();
		this.modal = true;


		Confirm_exchange.onClick.Add(()=>{
			int userid = PlayerPrefs.GetInt (LocalKey.USERID, 0);
			string token = PlayerPrefs.GetString (LocalKey.TOKEN, null);
			Req_GetPrizeUseCoin request = new Req_GetPrizeUseCoin ();
			request.UserId = userid;
			request.Token = token;
			request.PrizeId = this.prize_item.id;
			UnityFacade.GetInstance().SendNotification(HttpReqCommand.HTTP,request);
		});
		Close.onClick.Add(() => {
			this.Hide();
		});


	}

	public void bindingData(PrizeSetProxy.PrizeItem item){
		this.prize_item = item;
		this.contentPane.GetChild ("n25").asTextField.text = ""+item.coin;
		this.contentPane.GetChild ("n21").asTextField.text = item.name;
		UpdatesProxy proxy = UnityFacade.GetInstance ().RetrieveProxy (UpdatesProxy.NAME) as UpdatesProxy;
		proxy.loadPrizeIcon (this.contentPane.GetChild ("n22").asLoader, ""+item.id);
		//this.contentPane.GetChild ("n22").asLoader = item.pic;
	}


}


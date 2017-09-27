using System;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;
using DG.Tweening;

public class UITopup : BaseWindow
{

	GObject Input_figure {
		get{ return this.contentPane.GetChild ("n27"); }
	}
	GObject Pay{
		get{ return this.contentPane.GetChild ("n7"); }
	}

	GObject Close {
		get{ return this.contentPane.GetChild ("n1"); }
	}

	public UITopup ():base()
	{
		
	}

	GButton m_20,m_50,m_100,m_200,m_500,m_1000;

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

//		m_20.onClick.Add (OnCheck);
//		m_50.onClick.Add (OnCheck);
//		m_100.onClick.Add (OnCheck);
//		m_200.onClick.Add (OnCheck);
//		m_500.onClick.Add (OnCheck);
//		m_1000.onClick.Add (OnCheck);

		Close.onClick.Add(() => {
			this.Hide();
		});
		Pay.onClick.Add(() => {
			//
			int money = getPayAmount();
			if(money>0){
				AccountProxy proxy = UnityFacade.GetInstance ().RetrieveProxy (AccountProxy.NAME) as AccountProxy;
				if (proxy == null)
					return;
				Req_UserRecharge request = new Req_UserRecharge ();
				request.UserId = PlayerPrefs.GetInt(LocalKey.USERID);
				request.Token = PlayerPrefs.GetString(LocalKey.TOKEN);
				request.Amount = money;
				UnityFacade.GetInstance().SendNotification(HttpReqCommand.HTTP,request);
			}
		});
		Input_figure.onClick.Add(()=>{
			m_20.selected = false;
			m_50.selected = false;
			m_100.selected = false;
			m_200.selected = false;
			m_500.selected = false;
			m_1000.selected = false;
		});

		base.OnInit ();
	}

	public int getPayAmount(){
		if (m_20.selected) {
			return 20;
		}else if(m_50.selected){
			return 50;
		}else if(m_100.selected){
			return 100;
		}else if(m_200.selected){
			return 200;
		}else if(m_500.selected){
			return 500;
		}else if(m_1000.selected){
			return 1000;
		}else {
			try{
				return int.Parse(Input_figure.asTextInput.text);
			}catch(FormatException e){
				return 0;
			}

		}
	}

}


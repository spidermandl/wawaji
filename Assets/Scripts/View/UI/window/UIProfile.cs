﻿using System;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;
using DG.Tweening;
using System.Collections;

public class UIProfile : BaseWindow
{

	public GObject Topup {
		get{ return this.contentPane.GetChild ("n8"); }
	}
	public GObject Exchange{
		get{ return this.contentPane.GetChild ("n10"); }
	}

	public GObject Logout {
		get{ return this.contentPane.GetChild ("n3"); }
	}

	GObject Down {
		get{ return this.contentPane.GetChild ("n14"); }
	}

	GList List {
		get{ return this.contentPane.GetChild ("n15").asList; }
	}

	GObject Close {
		get{ return this.contentPane.GetChild ("n17"); }
	}

	List<UserPrizeInfoProxy.PrizeItem> items = null;

	public UIProfile ():base()
	{
		
	}

	protected override void OnInit()
	{
		this.contentPane = UIPackage.CreateObject("Window", "Profile_dialog").asCom;
		this.Center();
		this.modal = true;
		this.SetPosition (this.position.x, 0, this.position.z);
		GRoot.inst.modalLayer.onClick.Add (()=>{
			this.Hide();
		});
		//		this.contentPane.onClick.Add ((EventContext context) => {
		//			context.StopPropagation ();
		//		});
		GList m_list = List;
		m_list.SetVirtual ();
		m_list.itemRenderer = RenderListItem;
		m_list.numItems = 5;

		Down.onClick.Add (()=>{
			m_list.scrollPane.ScrollDown();
			//m_list.AddSelection(4, true);
		});

		Close.onClick.Add (()=>{
			this.Hide();
		});
		//非UI逻辑
		AccountProxy proxy = UnityFacade.GetInstance().RetrieveProxy (AccountProxy.NAME) as AccountProxy;
		if (proxy == null) {
			return;
		}
		this.contentPane.GetChild ("n18").asLoader.url = proxy.Pic;
		this.contentPane.GetChild ("n19").asTextField.text = proxy.Name;
		this.contentPane.GetChild ("n20").asTextField.text = ""+proxy.Coin;

		Req_GetPrizeInfo request = new Req_GetPrizeInfo();
		request.UserId = PlayerPrefs.GetInt (LocalKey.USERID, 0);
		request.Token = PlayerPrefs.GetString (LocalKey.TOKEN, null);
		UnityFacade.GetInstance().SendNotification(HttpReqCommand.HTTP,request);
	}

	void RenderListItem(int index, GObject obj)
	{
		obj.asCom.GetChild ("n1").onClick.Add (()=>{
//			GList m_list = List;
//			m_list.numItems -= 1;
			//m_list.RefreshVirtualList();
			//this.changeUIpage(typeof(UIEnterMain));
		});
		if (this.items != null && this.items.Count>0) {
			obj.asCom.GetChild ("n2").asTextField.text = "【中奖信息】"+this.items [index].desc;
		}

	}

	public void refreshList(){
		UserPrizeInfoProxy proxy =UnityFacade.GetInstance().RetrieveProxy (UserPrizeInfoProxy.NAME) as UserPrizeInfoProxy;
		if (proxy == null) {
			return;
		}
		this.items = proxy.Items;
		this.List.numItems = this.items.Count;
		this.List.RefreshVirtualList ();
	}

}


using System;
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

		AccountProxy proxy = UnityFacade.GetInstance().RetrieveProxy (AccountProxy.NAME) as AccountProxy;
		Req_GetPrizeInfo request = new Req_GetPrizeInfo();
		request.UserId = proxy.Id;
		request.Token = proxy.Token;
		UnityFacade.GetInstance().SendNotification(HttpReqCommand.HTTP,request);
	}

	void RenderListItem(int index, GObject obj)
	{
		Debug.Log (index);
		obj.asCom.GetChild ("n1").onClick.Add (()=>{
			//m_list.RemoveChildToPoolAt(index);
			//Debug.Log(m_list.numItems);
			GList m_list = List;
			m_list.numItems -= 1;
			//m_list.RefreshVirtualList();
		});

	}

}


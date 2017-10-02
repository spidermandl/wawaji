using System;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;
using DG.Tweening;
using System.Collections;

/// <summary>
/// User interface profile.
/// </summary>
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
	UIMain _ui;
	public UIMain Ui{
		get{ return this._ui;}
		set{ this._ui = value;}
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
		//非UI逻辑
		AccountProxy proxy = UnityFacade.GetInstance().RetrieveProxy (AccountProxy.NAME) as AccountProxy;
		if (proxy == null) {
			return;
		}
		//this.contentPane.GetChild ("n18").asLoader.url = proxy.Pic;
		this.contentPane.GetChild ("n19").asTextField.text = proxy.Name;
		this.contentPane.GetChild ("n20").asTextField.text = ""+proxy.Coin;
		UpdatesProxy u_proxy = UnityFacade.GetInstance().RetrieveProxy (UpdatesProxy.NAME) as UpdatesProxy;
		u_proxy.loadPureIcon (this.contentPane.GetChild ("n18").asLoader,proxy.Pic);

		refreshList ();
		base.OnInit ();
	}

	void RenderListItem(int index, GObject obj)
	{
		if (this.items != null && this.items.Count>0) {
			obj.asCom.GetChild ("n2").asTextField.text = "【中奖信息】"+this.items [index].desc;
			if (this.items [index].status == 1) {//待领取状态
				obj.asCom.GetChild ("n3").visible = false;
				obj.asCom.GetChild ("n1").visible = true;
				obj.asCom.GetChild ("n1").onClick.Add (()=>{
					if(_ui!=null){
						UserPrizeInfoProxy proxy =UnityFacade.GetInstance().RetrieveProxy (UserPrizeInfoProxy.NAME) as UserPrizeInfoProxy;
						if (proxy == null) {
							return;
						}
						this.Hide();
						proxy.SelectedItem = this.items [index];
						_ui.moveToPage(typeof(UIRewardsMain));
					}
				});
			} else {
				obj.asCom.GetChild ("n3").visible = true;
				obj.asCom.GetChild ("n1").visible = false;
				obj.asCom.GetChild ("n3").onClick.Add (()=>{
					if(_ui!=null){
						UserPrizeInfoProxy proxy =UnityFacade.GetInstance().RetrieveProxy (UserPrizeInfoProxy.NAME) as UserPrizeInfoProxy;
						if (proxy == null) {
							return;
						}
						this.Hide();
						proxy.SelectedItem = this.items [index];
						_ui.moveToPage(typeof(UIRewardsMain));
					}
				});
			}

		}

	}

	public void refreshList(){
		UserPrizeInfoProxy proxy =UnityFacade.GetInstance().RetrieveProxy (UserPrizeInfoProxy.NAME) as UserPrizeInfoProxy;
		if (proxy == null) {
			Req_GetPrizeInfo request = new Req_GetPrizeInfo();
			request.UserId = PlayerPrefs.GetInt (LocalKey.USERID, 0);
			request.Token = PlayerPrefs.GetString (LocalKey.TOKEN, null);
			UnityFacade.GetInstance().SendNotification(HttpReqCommand.HTTP,request);
			return;
		}
		this.items = proxy.Items;
		this.List.numItems = this.items.Count;
		this.List.RefreshVirtualList ();
	}

}


using System;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;
using PureMVC.Interfaces;

public class UINoticeMain : UIMain
{
	UITopup _uiTopup;
	int expend_index = -1;
	GList list;

	List<NewsProxy.NewsItem> newsList;

	void Awake()
	{
		base.init ("Notice");
	}

	void Start(){
		//_mainView = this.GetComponent<UIPanel>().ui;
		GLoader bg = _mainView.GetChild ("n5")as GLoader;
		bg.url = "bg/bg_notice";

		_mainView.GetChild("n2").onClick.Add(() => {
			this.changeUIpage(typeof(UIEnterMain));
		});

		list = _mainView.GetChild ("n4").asList;
		list.SetVirtual ();
		list.itemProvider = GetListItemResource;
		list.itemRenderer = RenderListItem;
		list.numItems = 1;
		//非ui逻辑
		Req_GetNewsLists request = new Req_GetNewsLists ();
		UnityFacade.GetInstance().SendNotification(HttpReqCommand.HTTP,request);
	}

	void Update(){
	}

	void RenderListItem(int index, GObject obj)
	{
		if (index == this.expend_index) {
			obj.asCom.GetChild ("n5").onClick.Add (()=>{
				expend_index = -1;
				list.RefreshVirtualList ();
			});
			GRichTextField content = obj.asCom.GetChild ("n4").asRichTextField;
			GTextField title = obj.asCom.GetChild ("n3").asTextField;
			GTextField time = obj.asCom.GetChild ("n7").asTextField;
			if (this.newsList != null) {//有网络数据
				NewsProxy.NewsItem item = this.newsList [index];
				title.text = "【"+item.type_title + "】 " + item.title;
				time.text = item.date_time;
				content.text = item.cont;
			}else
				content.text = "     aaaaaaaabbbbbbbbcccccccccddddddddddeeeeeeeeeffffffffggggggggg";
			return;
		}
		if (this.newsList != null) {//有网络数据
			GTextField title = obj.asCom.GetChild ("n3").asTextField;
			NewsProxy.NewsItem item = this.newsList [index];
			title.text = "【"+item.type_title + "】 " + item.title;
		}
		obj.asCom.GetChild ("n2").onClick.Add (()=>{
			expend_index = index;
			list.RefreshVirtualList ();
		});

	}

	//根据索引的不同，返回不同的资源URL
	string GetListItemResource(int index)
	{
		if (index == this.expend_index)
			return "ui://Notice/expand_notice_item";
		else
			return "ui://Notice/shrink_notice_item";
	}

	/////////////////////////////////////////////////////////////////////////////////////////////////////////
	/// 外部调用
	/////////////////////////////////////////////////////////////////////////////////////////////////////////
	public void RespondNoticeList(INotification notification){
		NewsProxy proxy = UnityFacade.GetInstance ().RetrieveProxy (NewsProxy.NAME) as NewsProxy;
		if (proxy != null) {
			this.newsList = proxy.Items;
			list.numItems = proxy.Items.Count;
			list.RefreshVirtualList ();
		}
	}
}


using System;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;

public class UINoticeMain : UIMain
{
	UITopup _uiTopup;
	int expend_index = -1;
	GList list;

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
		list.numItems = 100;

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
			GRichTextField text = obj.asCom.GetChild ("n4").asRichTextField;
			text.text = "     aaaaaaaabbbbbbbbcccccccccddddddddddeeeeeeeeeffffffffggggggggg";
			return;
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
}


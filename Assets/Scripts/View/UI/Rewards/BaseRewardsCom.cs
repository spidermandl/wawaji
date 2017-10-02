using System;
using System.Collections;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;

public abstract class BaseRewardsCom
{
	protected UserPrizeInfoProxy.PrizeItem item;
	protected GComponent open;//认领奖品
	protected GComponent close;//已经获得奖品

	protected UICommon warn;

	public BaseRewardsCom (GComponent open,GComponent close,UserPrizeInfoProxy.PrizeItem item)
	{
		this.open = open;
		this.close = close;
		this.item = item;

		if (item.status == 1) {
			open.visible = true;
			close.visible = false;
		} else {
			open.visible = false;
			close.visible = true;
		}

		validateUI ();

	}

	public abstract void validateUI ();


	protected void warning(string content){
		if (warn == null) {
			warn = new UICommon ();
		}
		warn.Show ();
		warn.Title.text = "输入信息不完整";
		warn.Content.text = content;
	}
}



using System;
using System.Collections;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;

public abstract class BaseRewardsCom
{
	protected UserPrizeInfoProxy.PrizeItem item;
	protected GComponent open;
	protected GComponent close;

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

}



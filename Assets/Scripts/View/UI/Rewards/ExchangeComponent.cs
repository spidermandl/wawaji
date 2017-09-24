using System;
using System.Collections;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;

/// <summary>
/// Exchange component.
/// </summary>
public class ExchangeComponent : BaseRewardsCom
{


	public ExchangeComponent (GComponent open,GComponent close,UserPrizeInfoProxy.PrizeItem item):base(open,close,item)
	{

	}

	public override void validateUI ()
	{
		if (item.status == 1) {
			UpdatesProxy proxy = UnityFacade.GetInstance ().RetrieveProxy (UpdatesProxy.NAME) as UpdatesProxy;
			proxy.loadPrizeIcon (open.GetChild ("n23").asLoader, ""+item.prize_id);
			open.GetChild ("n25").asTextField.text = item.name;
			open.GetChild ("n26").asTextField.text = ""+item.coin;

		} else {

			UpdatesProxy proxy = UnityFacade.GetInstance ().RetrieveProxy (UpdatesProxy.NAME) as UpdatesProxy;
			proxy.loadPrizeIcon (close.GetChild ("n23").asLoader, ""+item.prize_id);
			close.GetChild ("n24").asTextField.text = "已经回购"+item.name;
			close.GetChild ("n25").asTextField.text = ""+item.price;
		}
	}
}



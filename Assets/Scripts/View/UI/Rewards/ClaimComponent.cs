using System;
using System.Collections;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;

/// <summary>
/// Claim component.
/// </summary>
public class ClaimComponent : BaseRewardsCom
{
	public ClaimComponent (GComponent open,GComponent close,UserPrizeInfoProxy.PrizeItem item):base(open,close,item)
	{

	}

	public override void validateUI ()
	{
		if (item.status == 1) {
			AccountProxy u_proxy = UnityFacade.GetInstance ().RetrieveProxy (AccountProxy.NAME) as AccountProxy;
			UpdatesProxy proxy = UnityFacade.GetInstance ().RetrieveProxy (UpdatesProxy.NAME) as UpdatesProxy;
			proxy.loadPureIcon (open.GetChild ("n19").asLoader, ""+u_proxy.Pic);
			open.GetChild ("n8").asTextField.text = u_proxy.Name;

		} else {
			AccountProxy u_proxy = UnityFacade.GetInstance ().RetrieveProxy (AccountProxy.NAME) as AccountProxy;
			UpdatesProxy proxy = UnityFacade.GetInstance ().RetrieveProxy (UpdatesProxy.NAME) as UpdatesProxy;
			proxy.loadPureIcon (close.GetChild ("n19").asLoader, ""+u_proxy.Pic);
			close.GetChild ("n8").asTextField.text = u_proxy.Name;
		}
	}
}



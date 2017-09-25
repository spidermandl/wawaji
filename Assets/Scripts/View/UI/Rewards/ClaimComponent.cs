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
		open.GetChild ("n5").onClick.Add (() => {
			Req_UsePrize request = new Req_UsePrize();
			request.UserId = PlayerPrefs.GetInt(LocalKey.USERID);
			request.Token = PlayerPrefs.GetString(LocalKey.TOKEN);
			request.PrizeId = item.prize_id;
			request.UserPrizeId = item.id;
			request.UserPrizeType = 1;
			request.UserName = open.GetChild ("n14").asTextInput.text;
			request.UserAddr = open.GetChild ("n15").asTextInput.text;
			request.UserPhone = open.GetChild ("n16").asTextInput.text;
			UnityFacade.GetInstance().SendNotification(HttpReqCommand.HTTP,request);
		});
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



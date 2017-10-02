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
			if(!checkInput())
				return;
			Req_UsePrize request = new Req_UsePrize();
			request.UserId = PlayerPrefs.GetInt(LocalKey.USERID);
			request.Token = PlayerPrefs.GetString(LocalKey.TOKEN);
			request.PrizeId = item.prize_id;
			request.UserPrizeId = item.id;
			request.UsePrizeType = 1;
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
			proxy.loadPureIcon (open.GetChild ("n21").asCom.GetChild("n24").asLoader, ""+u_proxy.Pic);
			open.GetChild ("n8").asTextField.text = u_proxy.Name;

		} else {
			AccountProxy u_proxy = UnityFacade.GetInstance ().RetrieveProxy (AccountProxy.NAME) as AccountProxy;
			UpdatesProxy proxy = UnityFacade.GetInstance ().RetrieveProxy (UpdatesProxy.NAME) as UpdatesProxy;
			proxy.loadPureIcon (close.GetChild ("n23").asCom.GetChild("n24").asLoader, ""+u_proxy.Pic);
			close.GetChild ("n8").asTextField.text = u_proxy.Name;
		}

	}

	bool checkInput(){
		string txt = open.GetChild ("n14").asTextField.text;
		if (txt == null||txt.Length==0) {
			warning ("收件人地址不能为空");
			return false;
		}
		txt =open.GetChild ("n15").asTextField.text;
		if (txt == null||txt.Length==0) {
			warning ("邮寄地址不能为空");
			return false;
		}
		txt =open.GetChild ("n16").asTextField.text;
		if (txt == null||txt.Length==0) {
			warning ("手机号不能为空");
			return false;
		}

		return true;
	}
}



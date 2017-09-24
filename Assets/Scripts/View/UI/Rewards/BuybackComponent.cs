using System;
using System.Collections;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;

/// <summary>
/// Buyback component.
/// </summary>
public class BuybackComponent : BaseRewardsCom
{
	public BuybackComponent (GComponent open,GComponent close,UserPrizeInfoProxy.PrizeItem item):base(open,close,item)
	{
		


	}

	public override void validateUI ()
	{
		if (item.status == 1) {
			GComboBox pay_channel = open.GetChild ("n39").asComboBox;
			paySetting (open, false);
			pay_channel.onChanged.Add (
				(EventContext context) => {
					switch (pay_channel.selectedIndex) {
					case 0://alipay
						paySetting (open, false);
						break;
					case 1:
						paySetting (open, true);
						break;
					default:
						break;
					}
				}
			);

			UpdatesProxy proxy = UnityFacade.GetInstance ().RetrieveProxy (UpdatesProxy.NAME) as UpdatesProxy;
			proxy.loadPrizeIcon (open.GetChild ("n47").asLoader, ""+item.prize_id);
			open.GetChild ("n35").asTextField.text = item.name;
			open.GetChild ("n51").asTextField.text = item.price;

		} else {

			UpdatesProxy proxy = UnityFacade.GetInstance ().RetrieveProxy (UpdatesProxy.NAME) as UpdatesProxy;
			proxy.loadPrizeIcon (close.GetChild ("n49").asLoader, ""+item.prize_id);
			close.GetChild ("n35").asTextField.text = "已经回购"+item.name;
			close.GetChild ("n51").asTextField.text = item.price;
		}
	}

	void paySetting(GComponent buyback,bool show){
		ArrayList positives = new ArrayList ();
		positives.Add(buyback.GetChild ("n28"));
		positives.Add(buyback.GetChild ("n29"));
		positives.Add(buyback.GetChild ("n30"));

		positives.Add(buyback.GetChild ("n26"));
		positives.Add(buyback.GetChild ("n27"));
		positives.Add(buyback.GetChild ("n31"));

		positives.Add(buyback.GetChild ("n32"));
		positives.Add(buyback.GetChild ("n33"));
		positives.Add(buyback.GetChild ("n43"));
		positives.Add(buyback.GetChild ("n33"));

		foreach (var p in positives) {
			(p as GObject).visible = show;
		}

		ArrayList negitives = new ArrayList ();
		negitives.Add(buyback.GetChild ("n45"));
		negitives.Add(buyback.GetChild ("n46"));
		foreach (var p in negitives) {
			(p as GObject).visible = !show;
		}
	}

}



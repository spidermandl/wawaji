using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using PureMVC.Interfaces;
using PureMVC.Patterns.Mediator;

public abstract class BaseMediator: Mediator {

	//IMediatorPlug needs
	public BaseMediator(string mediatorName, object viewComponent ):base(mediatorName, viewComponent ) {

	}

	/**
	 * 单击事件逻辑
	 * */
	protected abstract void clickFunc(UIMain.ClickType type);

}


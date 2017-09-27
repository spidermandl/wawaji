using System;
using System.Collections;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;

/// <summary>
/// User interface instance manager.
/// </summary>
public class UIInstanceManager
{
	Stack<UIMain> uiStack;
	private static UIInstanceManager instance = null;
	public static UIInstanceManager getInstance(){
		if (instance == null)
			instance = new UIInstanceManager ();
		return instance;
	}

	private UIInstanceManager (){
		uiStack = new Stack<UIMain> ();
	}
	/// <summary>
	/// Adds UI package.
	/// </summary>
	/// <param name="name">Name.</param>
	public void addUI(UIMain ui){
		uiStack.Push (ui);
		//open animation
	}

	public void changeUI(Type cls){
		//需要缓存
		UIMain current = uiStack.Peek ();
		if (current.GetType () == cls) {
			return;
		}
		//需要缓存
		if (current.Stacked) {
			//create obj
			createObj(cls);
			return;
		}
		//上一个为本次跳转页面
		uiStack.Pop();
		UIMain previous = uiStack.Count == 0?null:uiStack.Peek ();
		if (previous !=null && previous.GetType () == cls&&previous.Stacked) {
			//close animation
			current.playCloseAnim (
			() => {
					//destroy all UI
					current.destroyUI();
				},
			() => {
				current.destroyUI();
				//destroy all UI
				clearStack();
				//create
				createObj(cls);
			});
			return;
		}
		//一帮情况
		current.destroyUI();
		//destroy all UI
		clearStack();
		//create
		createObj(cls);
	}


	public bool hasStack(){
		if (uiStack.Count > 1)
			return true;
		else
			return false;
	}

	/// <summary>
	/// 创建新UI物体
	/// </summary>
	/// <param name="cls">Cls.</param>
	protected void createObj(Type cls){
		GameObject obj = new GameObject(cls.ToString());
		obj.AddComponent(cls);
	}
	/// <summary>
	/// 清空堆栈
	/// </summary>
	protected void clearStack (){
		while (uiStack.Count > 0) {
			UIMain ui = uiStack.Peek ();
			uiStack.Pop ();
			ui.destroyUI ();
		}
	}



}


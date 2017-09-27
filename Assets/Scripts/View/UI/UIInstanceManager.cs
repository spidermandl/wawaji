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
	Stack<string> logStack;
	private static UIInstanceManager instance = null;
	public static UIInstanceManager getInstance(){
		if (instance == null)
			instance = new UIInstanceManager ();
		return instance;
	}

	private UIInstanceManager (){
		uiStack = new Stack<UIMain> ();
		logStack = new Stack<string> ();
	}
	/// <summary>
	/// Adds UI package.
	/// </summary>
	/// <param name="name">Name.</param>
//	public void addUI(UIMain ui){
//		uiStack.Push (ui);
//		//open animation
//	}

	public void addUI(UIMain ui){
		if(logStack.Count==0)//第一个ui log
			logStack.Push (ui.GetType().ToString ());
		UIMain previous = null;
		if(uiStack.Count>0)
			previous = uiStack.Peek ();
		if (previous != null && previous.Stacked) {
			ui.playOpenAnim (() => {
				clearStack ();
				uiStack.Push (ui);
			});
		} else {
			clearStack ();
			uiStack.Push (ui);
		}
		//open animation
	}

	public void changeUI(Type cls){
		//需要缓存
		UIMain current = uiStack.Peek ();
		string name = logStack.Peek ();
		if (current.GetType () == cls||name.Equals(cls.ToString())) {
			return;
		}
		logStack.Push (cls.ToString ());
		createObj(cls);

	}

//	public void changeUI(Type cls){
//		//需要缓存
//		UIMain current = uiStack.Peek ();
//		if (current.GetType () == cls) {
//			return;
//		}
//		//需要缓存
//		if (current.Stacked) {
//			//create obj
//			createObj(cls);
//			//
////			uiStack.Pop ();
////			current.destroyUI();
//			return;
//		}
//		//上一个为本次跳转页面
//		uiStack.Pop();
//		UIMain previous = uiStack.Count == 0?null:uiStack.Peek ();
//		if (previous !=null && previous.GetType () == cls&&previous.Stacked) {
//			//close animation
//			current.playCloseAnim (
//			() => {
//					//destroy all UI
//					current.destroyUI();
//				},
//			() => {
//				current.destroyUI();
//				//destroy all UI
//				clearStack();
//				//create
//				createObj(cls);
//			});
//			return;
//		}
//		//一帮情况
//		current.destroyUI();
//		//destroy all UI
//		clearStack();
//		//create
//		createObj(cls);
//	}


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


using System;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;

public abstract class UIMain : MonoBehaviour
{
	protected const int UI_WIDTH = 750;
	protected const int UI_HEIGHT = 1206;

	protected static GameObject _3dGameObj = null;
	protected GComponent _mainView;
	public delegate void ClickDelegateFunc(ClickType type);
	public delegate void OpenAnimCallBack();
	public delegate void CloseAnimCallBack();


	private bool is_stacked =false;//是否保存上一个界面
	public bool Stacked{
		get{ return this.is_stacked;}
		set{ this.is_stacked = value;}
	}

	public enum ClickType
	{
		StartGame = 1,//开始游戏按钮
		CloseLoginPanel = 2,//关闭登录框
		LoginGame = 3, //登录游戏
		PlayGame = 4, // 进入玩游戏界面
	}

	/**
	 * 初始化主界面
	 * */
	protected void init(string module){
		//GRoot.inst.SetContentScaleFactor (UI_WIDTH,UI_HEIGHT,FairyGUI.UIContentScaler.ScreenMatchMode.MatchHeight);
		GRoot.inst.SetContentScaleFactor (UI_WIDTH,UI_HEIGHT,FairyGUI.UIContentScaler.ScreenMatchMode.MatchWidth);
		//GRoot.inst.SetContentScaleFactor (UI_WIDTH,UI_HEIGHT);
		GRoot.inst.MakeFullScreen();
		//GRoot.inst.SetContentScaleFactor ((int)GRoot.inst.width,(int)GRoot.inst.height);
		Debug.Log (GRoot.inst.width);
		Debug.Log (GRoot.inst.height);
		UIConfig.defaultFont = "FZCuYuan-M03S";

		UIPackageManager.getInstance ().addPackage (module);
		//UIPackage.AddPackage (module);
		_mainView = UIPackage.CreateObject (module, module).asCom;
		//_mainView.SetSize (GRoot.inst.width, GRoot.inst.height);
		GRoot.inst.AddChild (_mainView);

		this.gameObject.SetActive (false);
		MediatorPlug plug = this.gameObject.AddComponent (typeof(MediatorPlug)) as MediatorPlug;
		plug.setClassRef (module+"Mediator");
		plug.setMediatorName (module + "Mediator");
		this.gameObject.SetActive (true);

		UIInstanceManager.getInstance ().addUI (this);

	}


	protected void changeUIpage(Type cls){
		changeUIpage (cls, false);
	}

	/**
	 * 切换界面
	 * */
	protected void changeUIpage(Type cls,bool keep){
		this.is_stacked = keep;
		UIInstanceManager.getInstance ().changeUI (cls);

	}
	public void playOpenAnim(OpenAnimCallBack func){
		/**
	 	* 进场动画
	 	* **/
		Transition t = _mainView.GetTransition("open");
		if (t != null) {
			t.Play (() => {
				func ();
			});
		} else {
			func ();
		}
	}
	public void playCloseAnim(CloseAnimCallBack func1,CloseAnimCallBack func2){
		Transition t = _mainView.GetTransition("close");
		if (t != null) {
			t.Play(() =>
				{	
					//删除本界面
					func1();
				});
			return;
		} 
		func2 ();
	}
	/// <summary>
	/// Jumps to previous.
	/// </summary>
	protected void jumpToPrevious(){
		string name = UIPackageManager.getInstance ().getPreviousPackage ();
		if (name != null) {
			this.changeUIpage(Type.GetType ("UI"+name+"Main"));
		}
	}
	/**
	 * 销毁界面回调
	 * */
	public virtual void destroyUI (){
		GRoot.inst.RemoveChild (_mainView);
		//GRoot.inst.RemoveChildren ();
		Destroy (this.gameObject);//销毁自身脚本
		//      UIPackage.RemovePackage(this.ui_module);
		//		UIPackage.RemoveAllPackages();
		//		Resources.UnloadUnusedAssets();
		//		System.GC.Collect();
	}

	/// <summary>
	/// Moves to page.
	/// </summary>
	/// <param name="cls">Cls.</param>
	public void moveToPage(Type cls){
		changeUIpage (cls);
	}

	/// <summary>
	/// Moves to page.
	/// </summary>
	/// <param name="cls">Cls.</param>
	/// <param name="keep">If set to <c>true</c> keep.</param>
	public void moveToPage(Type cls,bool keep){
		changeUIpage (cls,keep);
	}
}


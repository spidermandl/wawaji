using System;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;

public class UIHomeMain : UIMain
{
	GList _list;
	int item_index;//列表item索引值

	UIExchange _exchangeWin;//
	UITopup _topupWin;//
	UISetting _settingWin;//
	UIHelp _helpWin;
	UIProfile _profileWin;//

	void Awake()
	{
		base.init ("Home");
		UIPackage.AddPackage ("Window");
	}

	void Start(){

		_list = _mainView.GetChild("n17").asList;
//		_list.SetVirtualAndLoop();

		_list.itemRenderer = RenderListItem;
		//_list.numItems = 5;
		item_index = 0;
		_list.scrollPane.onScroll.Add(DoSpecialEffect);
		DoSpecialEffect();

		GLoader bg = _mainView.GetChild ("n1")as GLoader;
		bg.url = "bg/bg_home";

		GComponent toolbar = _mainView.GetChild ("n3").asCom;
		//提现界面
		toolbar.GetChild("n12").onClick.Add(() => {
			//提现界面
			if(_exchangeWin == null)
				_exchangeWin = new UIExchange ();
			_exchangeWin.Show();
		});
		//奖励界面
		toolbar.GetChild ("n11").onClick.Add (() => {
			//奖励界面
			this.changeUIpage(typeof(UIPrizeMain));
		});
		//充值界面
		toolbar.GetChild ("n10").onClick.Add (() => {
			//充值界面
			if(_topupWin == null)
				_topupWin = new UITopup ();
			_topupWin.Show();
		});
		toolbar.GetChild ("n14").onClick.Add (() => {
			//个人界面
			if(_profileWin == null)
				_profileWin = new UIProfile ();
			_profileWin.Show();
			_profileWin.Logout.onClick.Add(()=>{
				_profileWin.Hide();
				this.changeUIpage(typeof(UIEnterMain));
				
			});
			_profileWin.Exchange.onClick.Add(()=>{
				_profileWin.Hide();
				if(_exchangeWin == null)
					_exchangeWin = new UIExchange ();
				_exchangeWin.Show();
			});
			_profileWin.Topup.onClick.Add(()=>{
				_profileWin.Hide();
				if(_topupWin == null)
					_topupWin = new UITopup ();
				_topupWin.Show();
			});
		});
		_mainView.GetChild("n11").onClick.Add(() => { 
			this._clickFunc(ClickType.PlayGame);
			this.changeUIpage(typeof(UIGameMain));

		});

		_mainView.GetChild("n8").onClick.Add(() => { 
			this.ScrollToNext(1);

		});
		_mainView.GetChild("n9").onClick.Add(() => { 
			this.ScrollToNext(-1);

		});
		_mainView.GetChild("n13").onClick.Add(() => { 
			if(_settingWin==null)
				_settingWin = new UISetting();
			_settingWin.Show();

		});
		_mainView.GetChild ("n10").onClick.Add(() => { 
			if(_helpWin==null)
				_helpWin = new UIHelp();
			_helpWin.Show();

		});
	}

	void Update(){
	}


	void DoSpecialEffect()
	{
		//change the scale according to the distance to middle
//		float midX = _list.scrollPane.posX + _list.viewWidth / 2;
//		int cnt = _list.numChildren;
//		for (int i = 0; i < cnt; i++)
//		{
//			GObject obj = _list.GetChildAt(i);
//			float dist = Mathf.Abs(midX - obj.x - obj.width / 2);
//			if (dist > obj.width) //no intersection
//				obj.SetScale(1, 1);
//			else
//			{
//				float ss = 1 + (1 - dist / obj.width) * 0.24f;
//				obj.SetScale(ss, ss);
//			}
//		}

		//_mainView.GetChild("n3").text = "" + ((_list.GetFirstChildInView() + 1) % _list.numItems);
	}

	void RenderListItem(int index, GObject obj)
	{
		GButton item = (GButton)obj;
		item.SetPivot(0.5f, 0.5f);
		//item.icon = UIPackage.GetItemURL("LoopList", "n" + (index + 1));
	}

	void ScrollToNext(int step){
		int index = item_index + step;
		if ( index < _list.numItems && index >= 0) {
			_list.ScrollToView (index, true);
			item_index = index;
		}
	}

}


using System;
using System.Collections;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;
using DG.Tweening;

/// <summary>
/// Claim component.
/// </summary>
public class HornMarquee
{
	GList _list;
	public GList HornList{
		get{return _list;}
		set{ _list = value;}
	}

	List<string> data;
	int current_index;
	MarqueeState state;
	enum MarqueeState{
		STOP,RUNNING,RESTART
	}

	public HornMarquee (GComponent root)
	{
		_list = root.GetChild ("n16").asCom.GetChild("n24").asList;
		_list.itemRenderer = RenderListItem;
		_list.SetVirtualAndLoop ();
		_list.numItems = 3;
		current_index = 0;
		state = MarqueeState.STOP;
	}


	void RenderListItem(int index, GObject obj)
	{
		if (data!=null &&index < data.Count) {
			GObject text = obj.asCom.GetChild ("n23");
			text.asTextField.text = data [index];
		}
	}

	/// <summary>
	/// 自动滑动到下一个
	/// </summary>
	void ScrollToNext(){
		current_index++;
		current_index %= this.data.Count;
		Debug.Log (current_index);
		_list.ScrollToView (current_index, current_index==0?false:true);//索引为0，迅速跳转
		int childIndex = _list.ItemIndexToChildIndex(current_index);
		GObject obj = _list.GetChildAt(childIndex);

		marquee (obj);
	}

	void marquee(GObject obj){
		if (state == MarqueeState.STOP)
			return;
		GObject text = obj.asCom.GetChild ("n23");
		text.x = 0;
		text.TweenMoveX(-text.width,5).SetEase(Ease.InOutQuad).OnComplete(this.ScrollToNext);
	}

	/////////////////////////////////////////////////////////////////////////////////////////////////////////
	/// 外部调用
	/////////////////////////////////////////////////////////////////////////////////////////////////////////
	public void stop(){
		state = MarqueeState.STOP;
	}

	public void refresh(){
		UserPrizeStringProxy proxy = UnityFacade.GetInstance ().RetrieveProxy (UserPrizeStringProxy.NAME) as UserPrizeStringProxy;
		if (proxy == null) {
			return;
		}
		this.data = proxy.Items;
		_list.numItems = this.data.Count;
		_list.RefreshVirtualList ();
		current_index = -1;
		if (state==MarqueeState.RUNNING) {//防止循环调用
			return;
		}
		state=MarqueeState.RUNNING;
		ScrollToNext ();
	}
}



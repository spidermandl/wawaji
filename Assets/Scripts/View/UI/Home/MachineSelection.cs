using System;
using System.Collections;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;
using DG.Tweening;

/// <summary>
/// 娃娃机器列表逻辑
/// 																					 updateArrow
/// 																						 /|\
/// 																						  |
/// validateUI  ->  initCoinSelection  -> updateCoinSelection  -> updateListSelection -> ScrollToNext -> onScrollEnd -> updateArrow
/// 							                /|\				         					 /|\              /|\
/// 				            onCoinClick -----|                        onArrowClick -------| 			   |            
/// 															                                  onScroll ----|
/// 																	
/// 											
/// </summary>
public class MachineSelection
{
	GList _list;
	GButton b_coin_1,b_coin_5,b_coin_10;
	GComponent _left_arrow,_right_arrow;

	MachineInfoProxy m_proxy;
	MachineInfoProxy.TypeAndItem[] machine_list;
	int item_index;
	Action action;

	enum Action{
		VALIDATE,
		ARROW,
		DRAG,
		COIN,
	}


	public delegate void EnterGame();
	EnterGame _enterGame;

	public MachineSelection (GComponent root)
	{
		_list = root.GetChild("n17").asList;
		//		_list.SetVirtualAndLoop();

		_list.itemRenderer = RenderListItem;
		_list.SetVirtual ();
		_list.numItems = 0;
		item_index = 0;
		//_list.scrollPane.onScroll.Add(DoSpecialEffect);
		_list.scrollPane.onScrollEnd.Add(onScrollEnd);
		_list.scrollPane.onPullUpRelease.Add(onScrollEnd);

		b_coin_1 = root.GetChild ("n4") as GButton;
		b_coin_5 = root.GetChild ("n5") as GButton;
		b_coin_10 = root.GetChild ("n6") as GButton;
		_left_arrow = root.GetChild("n9").asCom;
		_right_arrow = root.GetChild ("n8").asCom;
		_left_arrow.onClick.Add (()=>{
			item_index--;
			onClickArrow();
		});
		_right_arrow.onClick.Add (()=>{
			item_index++;
			onClickArrow();
		});

		action = Action.DRAG;
		//int machine_id = PlayerPrefs.SetInt (LocalKey.MACHINE_ID, 0);

	}
	/////////////////////////////////////////////////////////////////////////////////////////////////////////
	/// 回调函数
	/////////////////////////////////////////////////////////////////////////////////////////////////////////
	void RenderListItem(int index, GObject obj)
	{
		if(machine_list !=null && machine_list.Length>0){
			(obj.asCom.GetChild ("n2") as GRichTextField).text = machine_list[index].name;
		}
		obj.onClick.Add (() => {
			_enterGame();
		});
	}

	void onScrollEnd()
	{
		if (action == Action.DRAG) {
			float midX = _list.scrollPane.posX + _list.viewWidth / 2;
			int cnt = _list.numChildren;
			for (int i = 0; i < cnt; i++)
			{
				GObject obj = _list.GetChildAt(i);
				float dist = Mathf.Abs(midX - obj.x - obj.width / 2);
				if (dist > obj.width) {
				}
				else
				{
					item_index = _list.ChildIndexToItemIndex (i);
					m_proxy.Selection = machine_list[item_index];
					updateArrow ();
					break;
				}
			}
		}
		action = Action.DRAG;
		updateArrow ();
	}
	/////////////////////////////////////////////////////////////////////////////////////////////////////////
	///        end
	/////////////////////////////////////////////////////////////////////////////////////////////////////////
	void onClickArrow(){
		action = Action.ARROW;
		m_proxy.Selection = machine_list[item_index];
		ScrollToNext(item_index);
	}

	void onCoinClick(){
		action = Action.COIN;
		int coin = 1;
		if (b_coin_1.selected)
			coin = 1;
		else if (b_coin_5.selected)
			coin = 5;
		else if (b_coin_10.selected)
			coin = 10;
		machine_list = m_proxy.getListByCoin (coin);
		m_proxy.Selection = machine_list [0];
		updateCoinSelection ();
	}

	/// <summary>
	/// Updates the arrow.
	/// </summary>
	void updateArrow(){
		//箭头显示控制
		if (item_index == 0) {
			_left_arrow.visible = false;
			_right_arrow.visible = true;
		} else if (item_index == (_list.numItems - 1)) {
			_left_arrow.visible = true;
			_right_arrow.visible = false;
		} else {
			_left_arrow.visible = true;
			_right_arrow.visible = true;
		}
	}
	/// <summary>
	/// 开启列表滑动操作
	/// </summary>
	/// <param name="index">Index.</param>
	void ScrollToNext(int index){
		if ( index < _list.numItems && index >= 0) {
			_list.ScrollToView (index, true);
		}
		updateArrow ();
	}
	/// <summary>
	/// 首次根据金币选中金币按钮
	/// </summary>
	void initCoinSelection(){
		b_coin_1.onChanged.Remove(onCoinClick);
		b_coin_5.onChanged.Remove(onCoinClick);
		b_coin_10.onChanged.Remove(onCoinClick);
		int coin = m_proxy.Selection.coin;
		if (coin == 1)
			b_coin_1.selected = true;
		else if (coin == 5)
			b_coin_5.selected = true;
		else if (coin == 10)
			b_coin_10.selected = true;
		else
			b_coin_1.selected = true;

		b_coin_1.onChanged.Add(onCoinClick);
		b_coin_5.onChanged.Add(onCoinClick);
		b_coin_10.onChanged.Add(onCoinClick);

		updateCoinSelection ();
	}

	/// <summary>
	/// 改变金币选择
	/// </summary>
	void updateCoinSelection(){
		_list.numItems = machine_list.Length;
		_list.RefreshVirtualList ();
		updateListSelection ();
	}

	/// <summary>
	/// 更新选中的列表数据
	/// </summary>
	void updateListSelection(){
		int index = 0;
		foreach(MachineInfoProxy.TypeAndItem i in machine_list){
			if (i.machine_id == m_proxy.Selection.machine_id) {
				item_index = index;
				break;
			}
			index++;
		}

		ScrollToNext (item_index);
	}

	/////////////////////////////////////////////////////////////////////////////////////////////////////////
	/// 外部调用
	/////////////////////////////////////////////////////////////////////////////////////////////////////////
	public void validateUI(){
		action = Action.VALIDATE;
		m_proxy = UnityFacade.GetInstance ().RetrieveProxy (MachineInfoProxy.NAME) as MachineInfoProxy;
		machine_list = m_proxy.getListByCoin (m_proxy.Selection.coin);
		initCoinSelection ();
	}

	public void setEnterGame(EnterGame func){
		_enterGame = func;
	}
}



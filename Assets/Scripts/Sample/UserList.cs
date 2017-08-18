using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

//UserList用户界面列表部分
public class UserList : MonoBehaviour
{
	//定义UI组件
	public Text txt_userCount;//用户列表文本框
	public UGUI_MyToggleGroup myToggleGroup;//用户列表滑动条
	public Button btn_New;//新建按钮
	public Button btn_Delete;//删除按钮
	public UserList_Item itemPrefab;//单个列表文件的预置体
	List<UserList_Item> itemList = new List<UserList_Item>();//临时存列表

	//定义事件操作
	public System.Action NewUser;//添加用户事件
	public System.Action DeleteUser;//删除用户事件
	public System.Action SelectUser;//选择用户事件

	//定义数据
	public UserVO SelectedUserData;//列表中选择好的用户
	private IList<UserVO> m_currentUsers;//当前选择的用户

	//开始函数
	void Start ()
	{
		itemPrefab.gameObject.SetActive(false);

		myToggleGroup.onToggleChange.AddListener(onSelectUserItem);
		btn_New.onClick.AddListener(onClick_btn_New);
		btn_Delete.onClick.AddListener(onClick_btn_Delete);

		UpdateButtons();
	}
	//加载用户
	public void LoadUsers(IList<UserVO> list)
	{
		m_currentUsers = list;
		RefreshUI(list);
	}
	//点击新建
	void onClick_btn_New()
	{
		if (NewUser != null) NewUser();
	}
	//点击删除
	void onClick_btn_Delete()
	{
		if (DeleteUser != null) DeleteUser();
	}
	//选择物体
	void onSelectUserItem(Toggle itemToggle)
	{
		if (itemToggle == null)
		{
			return;
		}

		UserList_Item item = itemToggle.GetComponent<UserList_Item>();
		this.SelectedUserData = item.userData;
		UpdateButtons();
		if (SelectUser != null) SelectUser();

	}
	//取消选择
	public void Deselect()
	{
		myToggleGroup.toggleGroup.SetAllTogglesOff();
		this.SelectedUserData = null;
		UpdateButtons();
	}
	//刷新UI
	void RefreshUI(IList<UserVO> datas)
	{
		ClearItems();
		foreach (var data in datas)
		{
			UserList_Item item = CreateItem();
			item.UpdateData(data);
			itemList.Add(item);
		}
		txt_userCount.text = datas.Count.ToString();
	}
	//新建列表项目
	UserList_Item CreateItem()
	{
		UserList_Item item = GameObject.Instantiate<UserList_Item>(itemPrefab);
		item.transform.SetParent(itemPrefab.transform.parent);
		item.gameObject.SetActive(true);
		item.transform.localScale = Vector3.one;
		item.transform.localPosition = Vector3.zero;

		return item;
	}
	//清空列表
	void ClearItems()
	{
		foreach(var item in itemList)
		{
			Destroy(item.gameObject);
		}
		itemList.Clear();
	}
	//更新按钮
	private void UpdateButtons()
	{
		btn_Delete.interactable = (SelectedUserData != null);
	}
}

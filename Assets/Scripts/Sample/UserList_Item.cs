using UnityEngine;
using UnityEngine.UI;
using System.Collections;

//UserList列表当中单条数据信息
public class UserList_Item : MonoBehaviour
{
	//定义UI组件
	public Text txt_userName;//用户名文本框
	public Text txt_firstName;//名字文本框
	public Text txt_lastName;//姓氏文本框
	public Text txt_email;//邮件文本框
	public Text txt_department;//部门文本框

	//定义User信息类
	public UserVO userData;

	//更新User类
	public void UpdateData(UserVO data)
	{
		//获取需要更改的User信息
		this.userData = data;

		//更改UI的文字信息
		txt_userName.text = data.UserName;
		txt_firstName.text = data.FirstName;
		txt_lastName.text = data.LastName;
		txt_email.text = data.Email;
		txt_department.text = data.Department;
	}
}

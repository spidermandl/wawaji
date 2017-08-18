using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityEngine.EventSystems;

//用户个人信息表单模式?编辑:新增
public enum UserFormMode
{
	ADD,
	EDIT,
}
//用户个人信息表单
public class UserForm : MonoBehaviour
{
	//UI项的定义
	public InputField txt_firstName;
	public InputField txt_lastName;
	public InputField txt_email;
	public InputField txt_userName;
	public InputField txt_password;
	public InputField txt_confirmPassword;
	public InputField txt_department;
	public Button btn_updateUser;
	public Button btn_cancel;

	//其他
	public System.Action AddUser;
	public System.Action UpdateUser;
	public System.Action CancelUser;

	//用户信息获取
	public UserVO User
	{
		get { return m_user; }
	}
	private UserVO m_user;

	//用户信息表单
	public UserFormMode Mode
	{
		get { return m_mode; }
	}
	private UserFormMode m_mode = UserFormMode.ADD;

	//开始
	void Start ()
	{
		//设置UI
		btn_updateUser.onClick.AddListener(btn_updateUser_Click);
		btn_cancel.onClick.AddListener(btn_cancel_Click);

		txt_userName.onValueChange.AddListener(InputField_onValueChange);
		txt_password.onValueChange.AddListener(InputField_onValueChange);
		txt_confirmPassword.onValueChange.AddListener(InputField_onValueChange);

		UpdateButtons();
	}

	//显示当前用户信息
	public void ShowUser(UserVO user, UserFormMode mode)
	{
		m_mode = mode;
		if (user == null)
		{
			ClearForm();
		}
		else
		{
			m_user = user;
			txt_firstName.text = user.FirstName;
			txt_lastName.text = user.LastName;
			txt_email.text = user.Email;
			txt_userName.text = user.UserName;
			txt_password.text = txt_confirmPassword.text = user != null ? user.Password : "";
			txt_department.text = user.Department;
			//txt_firstName.ActivateInputField();
			EventSystem.current.SetSelectedGameObject(txt_firstName.gameObject);
			//txt_firstName.MoveTextEnd(false);
			txt_firstName.caretPosition = txt_firstName.text.Length - 1;
			UpdateButtons();
		}
	}

	//更新按钮
	private void UpdateButtons()
	{
		if (btn_updateUser != null)
		{
			btn_updateUser.interactable = (txt_firstName.text.Length > 0 && txt_password.text.Length > 0 && txt_password.text.Equals(txt_confirmPassword.text));
		}
	}

	//清空表单
	public void ClearForm()
	{
		m_user = null;
		txt_firstName.text = txt_lastName.text = txt_email.text = txt_userName.text = "";
		txt_password.text = txt_confirmPassword.text = "";
		txt_department.text = "";
		UpdateButtons();
	}

	//更新用户信息
	void btn_updateUser_Click()
	{
		m_user = new UserVO(
			txt_userName.text, txt_firstName.text, 
			txt_lastName.text, txt_email.text, 
			txt_password.text, txt_department.text);

		if (m_user.IsValid)
		{
			if (m_mode == UserFormMode.ADD)
			{
				if (AddUser != null) AddUser();
			}
			else
			{
				if (UpdateUser != null) UpdateUser();
			}
		}
	}

	//取消信息
	void btn_cancel_Click()
	{
		if (CancelUser != null) CancelUser();
	}

	//输入
	void InputField_onValueChange(string value)
	{
		UpdateButtons();
	}
}

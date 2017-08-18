using UnityEngine;
using System.Collections;
//显示用的数据信息UserViewObject
public class UserVO
{
	//用户名
	public string UserName
	{
		get { return m_userName; }
	}
	private string m_userName = "";
	//名字
	public string FirstName
	{
		get { return m_firstName; }
	}
	private string m_firstName = "";
	//姓氏
	public string LastName
	{
		get { return m_lastName; }
	}
	private string m_lastName = "";
	//邮箱
	public string Email
	{
		get { return m_email; }
	}
	private string m_email = "";
	//密码
	public string Password
	{
		get { return m_password; }
	}
	private string m_password = "";
	//部门
	public string Department
	{
		get { return m_department; }
	}
	private string m_department = "";
	//是否合法
	public bool IsValid
	{
		get
		{
			return !string.IsNullOrEmpty(UserName) && !string.IsNullOrEmpty(Password);
		}
	}
	//合并名字
	public string GivenName
	{
		get { return LastName + ", " + FirstName; }
	}
	//构造器
	public UserVO()
	{
	}
	//构造函数
	public UserVO(string uname, string fname, string lname, string email, string password, string department)
	{
		if (uname != null) m_userName = uname;
		if (fname != null) m_firstName = fname;
		if (lname != null) m_lastName = lname;
		if (email != null) m_email = email;
		if (password != null) m_password = password;
		if (department != null) m_department = department;
	}
}

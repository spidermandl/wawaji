using UnityEngine;
using System.Collections.Generic;
using PureMVC.Patterns;
using PureMVC.Interfaces;

//数据操作
public class UserProxy : Proxy, IProxy
{
	public new const string NAME = "UserProxy";

	//返回数据操作类
	public IList<UserVO> Users
	{
		get { return (IList<UserVO>) base.Data; }
	}

	//构造函数，添加几条数据进去先
	public UserProxy():base(NAME, new List<UserVO>())
	{
		Debug.Log("UserProxy()");
		//添加几条测试用的数据        
		AddItem(new UserVO("lstooge", "Larry", "Stooge", "larry@stooges.com", "ijk456", "ACCT"));
		AddItem(new UserVO("cstooge", "Curly", "Stooge", "curly@stooges.com", "xyz987", "SALES"));
		AddItem(new UserVO("mstooge", "Moe", "Stooge", "moe@stooges.com", "abc123", "PLANT"));
		AddItem(new UserVO("lzh", "abc", "def", "lzh@stooges.com", "abc123", "IT"));
	}

	//添加数据的方法
	public void AddItem(UserVO user)
	{
		Users.Add(user);
	}

	//更新数据的方法
	public void UpdateItem(UserVO user)
	{
		for (int i = 0; i < Users.Count; i++)
		{
			if (Users[i].UserName.Equals(user.UserName))
			{
				Users[i] = user;
				break;
			}
		}
	}

	//删除数据的方法
	public void DeleteItem(UserVO user)
	{
		for (int i = 0; i < Users.Count; i++)
		{
			if (Users[i].UserName.Equals(user.UserName))
			{
				Users.RemoveAt(i);
				break;
			}
		}
	}
}

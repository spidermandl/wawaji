using UnityEngine;
using System.Collections;

//处理该UI场景的入口
public class MainUI : MonoBehaviour
{
	public UserList userList;
	public UserForm userForm;
	//启动函数
	void Awake()
	{
		//启动PureMVC程序，执行StartUP()方法
		ApplicationFacade facade = ApplicationFacade.Instance as ApplicationFacade;
		facade.Startup(this);
	}
}

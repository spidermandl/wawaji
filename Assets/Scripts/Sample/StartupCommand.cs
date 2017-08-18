using UnityEngine;
using System.Collections;
using PureMVC.Patterns;
using PureMVC.Interfaces;

//启动事件
public class StartupCommand : SimpleCommand, ICommand
{
	//复写原有的Execute执行函数
	public override void Execute(INotification notification)
	{
		//注册统一的数据接口UserProxy，给其他事件处理
		Debug.Log("StartupCommand.Execute()");
		Facade.RegisterProxy(new UserProxy());

		//注册局部界面Mediator，给其他事件处理
		MainUI mainUI = notification.Body as MainUI;
		Facade.RegisterMediator(new UserListMediator(mainUI.userList));
		Facade.RegisterMediator(new UserFormMediator(mainUI.userForm));
	}
}

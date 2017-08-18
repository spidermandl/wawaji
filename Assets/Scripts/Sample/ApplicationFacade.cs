using UnityEngine;
using System.Collections;
using PureMVC.Patterns;
using PureMVC.Interfaces;

//Facade模式的单例
public class ApplicationFacade : Facade
{
	//实例化函数，保证单例模式(Singleton)运行该函数
	public new static IFacade Instance
	{
		get
		{
			if(m_instance == null)
			{
				lock(m_staticSyncRoot)
				{
					if (m_instance == null)
					{
						Debug.Log("ApplicationFacade");
						m_instance = new ApplicationFacade();
					}
				}
			}
			return m_instance;
		}
	}
	//启动PureMVC的入口函数
	public void Startup(MainUI mainUI)
	{
		Debug.Log("Startup() to SendNotification.");
		SendNotification(EventsEnum.STARTUP, mainUI);
	}
	//该类的构造器
	protected ApplicationFacade()
	{

	}
	//设置静态
	static ApplicationFacade()
	{

	}
	//初始化控制器函数
	protected override void InitializeController()
	{
		Debug.Log("InitializeController()");
		base.InitializeController();
		RegisterCommand(EventsEnum.STARTUP, typeof(StartupCommand));
		RegisterCommand(EventsEnum.DELETE_USER, typeof(DeleteUserCommand));
	}
}

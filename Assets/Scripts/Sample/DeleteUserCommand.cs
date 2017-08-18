using PureMVC.Patterns;
using PureMVC.Interfaces;

//删除用户事件
public class DeleteUserCommand : SimpleCommand, ICommand
{
	//复写原有的Execute执行函数
	public override void Execute(INotification notification)
	{
		//获取要删除的对象user
		UserVO user = (UserVO)notification.Body;
		//获取处理数据操作的userProxy
		UserProxy userProxy = (UserProxy)Facade.RetrieveProxy(UserProxy.NAME);

		//操作数据，删除user
		userProxy.DeleteItem(user);
		//删除完毕，广播USER_DELETED进行通知
		SendNotification(EventsEnum.USER_DELETED);
	}
}

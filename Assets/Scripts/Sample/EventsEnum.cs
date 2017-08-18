using UnityEngine;
using System.Collections;

//处理事件的枚举
public class EventsEnum
{
	public const string STARTUP = "startup";//启动事件

	public const string NEW_USER = "newUser";//新建用户
	public const string DELETE_USER = "deleteUser";//删除用户
	public const string CANCEL_SELECTED = "cancelSelected";//取消选择

	public const string USER_SELECTED = "userSelected";//选择用户
	public const string USER_ADDED = "userAdded";//添加用户
	public const string USER_UPDATED = "userUpdated";//更新用户
	public const string USER_DELETED = "userDeleted";//删除用户

	public const string ADD_ROLE = "addRole";//添加角色
	public const string ADD_ROLE_RESULT = "addRoleResult";//查询添加角色的结果
}

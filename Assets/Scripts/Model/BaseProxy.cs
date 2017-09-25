using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using System.IO;
using System.Text;
using PureMVC.Patterns.Proxy;
/// <summary>
/// 资源更新model类
/// </summary>
public abstract class BaseProxy : Proxy {

	public const string NAME = "BaseProxy";

	public BaseProxy (string proxyName)
		: base(proxyName, null){
	}

	public BaseProxy (string proxyName,object data)
		: base(proxyName, data){
	}

	public abstract void bindingData (Request.Response meta);
}


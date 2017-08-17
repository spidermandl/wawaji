using UnityEngine;
using System.Collections;


public class EnterProxy : PureMVC.Patterns.Proxy {

	public const string NAME = "EnterProxy";
	public const string UPDATED = "EnterProxy.Updated";

	public EnterProxy (string proxyName)
			: base(proxyName, null){

	}

}


﻿using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using System.IO;
using System.Text;

/// <summary>
/// 设备信息
/// </summary>
public class DeviceInfoProxy : PureMVC.Patterns.Proxy {

	public const string NAME = "DeviceInfoProxy";

	int type;
	string uuid;
	public string Uuid{
		get{ 
			if (uuid != null)
				return uuid;

			switch(Application.platform){
			case RuntimePlatform.Android:
				using (AndroidJavaClass jc = new AndroidJavaClass (AppConst.ANDROID_INTERFACE_CLASS)) {  
					//Debug.Log("get AndroidJavaClass");  
					using (AndroidJavaObject jo = jc.GetStatic<AndroidJavaObject> ("currentActivity")) {    
						uuid = jo.Call<string> ("uuid");
					}  
				} 
				break;
			case RuntimePlatform.IPhonePlayer:
				uuid = "ios";
				break;
			default:
				uuid = AppConst.UUID;
				break;
			}

			return uuid;

		}
		set{ uuid = value;}
	}
	public int Type{
		get{ return this.type; }
		set{ type = value;}
	}
		
	public DeviceInfoProxy (string proxyName)
		: base(proxyName, null){
		Uuid = null;
	}
}


using System;
using System.Collections;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;

public class UIPackageManager
{
	Dictionary<string,int> packageMap;
	private static UIPackageManager instance = null;
	public static UIPackageManager getInstance(){
		if (instance == null)
			instance = new UIPackageManager ();
		return instance;
	}

	private UIPackageManager (){
		packageMap = new Dictionary<string, int> ();
	}
	/// <summary>
	/// Adds UI package.
	/// </summary>
	/// <param name="name">Name.</param>
	public void addPackage(string name){
		//加入新ui package
		if (!packageMap.ContainsKey (name)) {
			UIPackage.AddPackage (name);
			packageMap.Add (name,packageMap.Count+1);
		}
		//调整ui被调用顺序
		int current = packageMap [name];
		foreach (string key in new List<string>(packageMap.Keys))
		{
			if (!key.Equals (name)&&packageMap[key]<current) {
				packageMap [key] = packageMap [key] + 1;
			}
		}
		packageMap [name] = 1;

		//remove old ui
		bool hasRemove = false;
		foreach (string key in new List<string>(packageMap.Keys))
		{
			if (packageMap[key]>2) {//保留两个ui的资源在内存
				packageMap.Remove (key);
				hasRemove = true;
				UIPackage.RemovePackage (key);

			}
		}
		if (hasRemove) {
			Resources.UnloadUnusedAssets ();
			System.GC.Collect ();
		}
	}

	public string getPreviousPackage(){
		foreach (string key in new List<string>(packageMap.Keys))
		{
			if (packageMap[key]==2) {//保留两个ui的资源在内存
				return key;
			}
		}
		return null;
	}
}


﻿using UnityEngine;
using System;
using System.IO;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Security.Cryptography;
using System.Text.RegularExpressions;
using System.Reflection;

public class Util
{

	public static int Int(object o) {
		return Convert.ToInt32(o);
	}

	public static float Float(object o) {
		return (float)Math.Round(Convert.ToSingle(o), 2);
	}

	public static long Long(object o) {
		return Convert.ToInt64(o);
	}

	public static int Random(int min, int max) {
		return UnityEngine.Random.Range(min, max);
	}

	public static float Random(float min, float max) {
		return UnityEngine.Random.Range(min, max);
	}

	public static string Uid(string uid) {
		int position = uid.LastIndexOf('_');
		return uid.Remove(0, position + 1);
	}

	public static string Filter(string str) {
		if (str!=null && str.Equals (""))
			return null;
		return str;
	}

	public static long GetTime() {
		TimeSpan ts = new TimeSpan(DateTime.UtcNow.Ticks - new DateTime(1970, 1, 1, 0, 0, 0).Ticks);
		return (long)ts.TotalMilliseconds;
	}

	/// <summary>
	/// 搜索子物体组件-GameObject版
	/// </summary>
	public static T Get<T>(GameObject go, string subnode) where T : Component {
		if (go != null) {
			Transform sub = go.transform.Find(subnode);
			if (sub != null) return sub.GetComponent<T>();
		}
		return null;
	}

	/// <summary>
	/// 搜索子物体组件-Transform版
	/// </summary>
	public static T Get<T>(Transform go, string subnode) where T : Component {
		if (go != null) {
			Transform sub = go.Find(subnode);
			if (sub != null) return sub.GetComponent<T>();
		}
		return null;
	}

	/// <summary>
	/// 搜索子物体组件-Component版
	/// </summary>
	public static T Get<T>(Component go, string subnode) where T : Component {
		return go.transform.Find(subnode).GetComponent<T>();
	}

	/// <summary>
	/// 添加组件
	/// </summary>
	public static T Add<T>(GameObject go) where T : Component {
		if (go != null) {
			T[] ts = go.GetComponents<T>();
			for (int i = 0; i < ts.Length; i++) {
				if (ts[i] != null) GameObject.Destroy(ts[i]);
			}
			return go.gameObject.AddComponent<T>();
		}
		return null;
	}

	/// <summary>
	/// 添加组件
	/// </summary>
	public static T Add<T>(Transform go) where T : Component {
		return Add<T>(go.gameObject);
	}

	/// <summary>
	/// 查找子对象
	/// </summary>
	public static GameObject Child(GameObject go, string subnode) {
		return Child(go.transform, subnode);
	}

	/// <summary>
	/// 查找子对象
	/// </summary>
	public static GameObject Child(Transform go, string subnode) {
		Transform tran = go.Find(subnode);
		if (tran == null) return null;
		return tran.gameObject;
	}

	/// <summary>
	/// 取平级对象
	/// </summary>
	public static GameObject Peer(GameObject go, string subnode) {
		return Peer(go.transform, subnode);
	}

	/// <summary>
	/// 取平级对象
	/// </summary>
	public static GameObject Peer(Transform go, string subnode) {
		Transform tran = go.parent.Find(subnode);
		if (tran == null) return null;
		return tran.gameObject;
	}

	/// <summary>
	/// 手机震动
	/// </summary>
	public static void Vibrate() {
		//int canVibrate = PlayerPrefs.GetInt(Const.AppPrefix + "Vibrate", 1);
		//if (canVibrate == 1) iPhoneUtils.Vibrate();
	}

	/// <summary>
	/// Base64编码
	/// </summary>
	public static string Encode(string message) {
		byte[] bytes = Encoding.GetEncoding("utf-8").GetBytes(message);
		return Convert.ToBase64String(bytes);
	}

	/// <summary>
	/// Base64解码
	/// </summary>
	public static string Decode(string message) {
		byte[] bytes = Convert.FromBase64String(message);
		return Encoding.GetEncoding("utf-8").GetString(bytes);
	}

	/// <summary>
	/// 判断数字
	/// </summary>
	public static bool IsNumeric(string str) {
		if (str == null || str.Length == 0) return false;
		for (int i = 0; i < str.Length; i++) {
			if (!Char.IsNumber(str[i])) { return false; }
		}
		return true;
	}

	/// <summary>
	/// HashToMD5Hex
	/// </summary>
	public static string HashToMD5Hex(string sourceStr) {
		byte[] Bytes = Encoding.UTF8.GetBytes(sourceStr);
		using (MD5CryptoServiceProvider md5 = new MD5CryptoServiceProvider()) {
			byte[] result = md5.ComputeHash(Bytes);
			StringBuilder builder = new StringBuilder();
			for (int i = 0; i < result.Length; i++)
				builder.Append(result[i].ToString("x2"));
			return builder.ToString();
		}
	}

	/// <summary>
	/// 计算字符串的MD5值
	/// </summary>
	public static string md5(string source) {
		MD5CryptoServiceProvider md5 = new MD5CryptoServiceProvider();
		byte[] data = System.Text.Encoding.UTF8.GetBytes(source);
		byte[] md5Data = md5.ComputeHash(data, 0, data.Length);
		md5.Clear();

		string destString = "";
		for (int i = 0; i < md5Data.Length; i++) {
			destString += System.Convert.ToString(md5Data[i], 16).PadLeft(2, '0');
		}
		destString = destString.PadLeft(32, '0');
		return destString;
	}

	/// <summary>
	/// 计算文件的MD5值
	/// </summary>
	public static string md5file(string file) {
		try {
			FileStream fs = new FileStream(file, FileMode.Open);
			System.Security.Cryptography.MD5 md5 = new System.Security.Cryptography.MD5CryptoServiceProvider();
			byte[] retVal = md5.ComputeHash(fs);
			fs.Close();

			StringBuilder sb = new StringBuilder();
			for (int i = 0; i < retVal.Length; i++) {
				sb.Append(retVal[i].ToString("x2"));
			}
			return sb.ToString();
		} catch (Exception ex) {
			throw new Exception("md5file() fail, error:" + ex.Message);
		}
	}

	/// <summary>
	/// 清除所有子节点
	/// </summary>
	public static void ClearChild(Transform go) {
		if (go == null) return;
		for (int i = go.childCount - 1; i >= 0; i--) {
			GameObject.Destroy(go.GetChild(i).gameObject);
		}
	}

	/// <summary>
	/// 生成一个Key名
	/// </summary>
	public static string GetKey(string key) {
		return key;//AppConst.AppPrefix + AppConst.UserId + "_" + key;
	}

	/// <summary>
	/// 取得整型
	/// </summary>
	public static int GetInt(string key) {
		string name = GetKey(key);
		return PlayerPrefs.GetInt(name);
	}

	/// <summary>
	/// 有没有值
	/// </summary>
	public static bool HasKey(string key) {
		string name = GetKey(key);
		return PlayerPrefs.HasKey(name);
	}

	/// <summary>
	/// 保存整型
	/// </summary>
	public static void SetInt(string key, int value) {
		string name = GetKey(key);
		PlayerPrefs.DeleteKey(name);
		PlayerPrefs.SetInt(name, value);
	}

	/// <summary>
	/// 取得数据
	/// </summary>
	public static string GetString(string key) {
		string name = GetKey(key);
		return PlayerPrefs.GetString(name);
	}

	/// <summary>
	/// 保存数据
	/// </summary>
	public static void SetString(string key, string value) {
		string name = GetKey(key);
		PlayerPrefs.DeleteKey(name);
		PlayerPrefs.SetString(name, value);
	}

	/// <summary>
	/// 删除数据
	/// </summary>
	public static void RemoveData(string key) {
		string name = GetKey(key);
		PlayerPrefs.DeleteKey(name);
	}

	/// <summary>
	/// 是否为数字
	/// </summary>
	public static bool IsNumber(string strNumber) {
		Regex regex = new Regex("[^0-9]");
		return !regex.IsMatch(strNumber);
	}

	/// <summary>
	/// 取得数据存放目录
	/// </summary>
	public static string DataPath {
		get {
			string game = AppConst.AppName.ToLower();
			if (Application.isMobilePlatform) {
				return Application.persistentDataPath + "/" + game + "/";
			}
			if (Application.platform == RuntimePlatform.WindowsPlayer) {
				return Application.streamingAssetsPath + "/";
			}
			return Application.streamingAssetsPath + "/";
		}
	}

	/// <summary>
	/// AssetBundle存放目录
	/// </summary>
	public static string AssetBundlePath {
		get {
			if (Application.isMobilePlatform) {
				return DataPath + AppConst.AssetBundleName + "/";
			}
			if (Application.platform == RuntimePlatform.WindowsPlayer) {
				return DataPath + AppConst.AssetBundleName + "/";
			}
			if (AppConst.DebugMode) {
				if (Application.isEditor) {
					return Application.dataPath + "/StreamingAssets/" + AppConst.AssetBundleName + "/";
				}
			}
			return Application.dataPath + "/StreamingAssets/" + AppConst.AssetBundleName + "/";
		}
	}

	/// <summary>
	/// AssetBundle存放目录
	/// </summary>
	public static string PlatformName {
		get {
			switch(Application.platform){
			case RuntimePlatform.Android:
				return "android";
			case RuntimePlatform.IPhonePlayer:
				return "ios";
			default:
				return "android";
			}
		}
	}

	/// <summary>
	/// 取得行文本
	/// </summary>
	public static string GetFileText(string path) {
		return File.ReadAllText(path);
	}

	/// <summary>
	/// 取得行文本
	/// </summary>
	public static void WriteJsonText(string path,string value) {
		File.WriteAllText (path, value);
//		FileStream fs = new FileStream(path,FileMode.Open,FileAccess.ReadWrite);
//		StreamWriter sw = new StreamWriter(fs, Encoding.UTF8);
//		sw.Write(value);
//		sw.Close();
//		fs.Close();
	}

	public static void WriteToFile(string path, byte[] info)  
	{
		//Debug.Log ("local path" + path);
		//文件流信息  
		//StreamWriter sw;  
		Stream sw;  
		FileInfo t = new FileInfo(path);  
		if (t.Exists) {
			t.Delete ();
		}

		//如果此文件不存在则创建  
		sw = t.Create();  

		//以行的形式写入信息  
		//sw.WriteLine(info);  
		sw.Write(info, 0, info.Length);  
		//关闭流  
		sw.Close();  
		//销毁流  
		sw.Dispose();  
	}   

	/// <summary>
	/// 网络可用
	/// </summary>
	public static bool NetAvailable {
		get {
			return Application.internetReachability != NetworkReachability.NotReachable;
		}
	}

	/// <summary>
	/// 是否是无线
	/// </summary>
	public static bool IsWifi {
		get {
			return Application.internetReachability == NetworkReachability.ReachableViaLocalAreaNetwork;
		}
	}

	/// <summary>
	/// 应用程序内容路径
	/// </summary>
	public static string AppContentPath {
		get{
			string path = string.Empty;
			switch (Application.platform) {
			case RuntimePlatform.Android:
				path = "jar:file://" + Application.dataPath + "!/assets/";
				break;
			case RuntimePlatform.IPhonePlayer:
				path = Application.dataPath + "/Raw/";
				break;
			default:
				path = Application.dataPath + "/StreamingAssets/";
				break;
			}
			return path;
		}

	}

	public static void Log(string str) {
		Debug.Log(str);
	}

	public static void LogWarning(string str) {
		Debug.LogWarning(str);
	}

	public static void LogError(string str) {
		Debug.LogError(str);
	}

	public static GameObject LoadAsset(AssetBundle bundle, string name) {
		#if UNITY_5
		return bundle.LoadAsset(name, typeof(GameObject)) as GameObject;
		#else
		return bundle.Load(name, typeof(GameObject)) as GameObject;
		#endif
	}

	public static Component AddComponent(GameObject go, string assembly, string classname) {
		Assembly asmb = Assembly.Load(assembly);
		Type t = asmb.GetType(assembly + "." + classname);
		return go.AddComponent(t);
	}

	/// <summary>
	/// 是不是苹果平台
	/// </summary>
	/// <returns></returns>
	public static bool isApplePlatform {
		get {
			return Application.platform == RuntimePlatform.IPhonePlayer ||
				Application.platform == RuntimePlatform.OSXEditor ||
				Application.platform == RuntimePlatform.OSXPlayer;            
		}
	}


	/// <summary>
	/// 生成随机的字符串
	/// </summary>
	/// <param name="codeCount"></param>
	/// <returns></returns>
	public static string CreateRandomCode(int codeCount)
	{
		string allChar = "0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,a,b,c,d,e,f,g,h,i,g,k,l,m,n,o,p,q,r,F,G,H,I,G,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,s,t,u,v,w,x,y,z";
		string[] allCharArray = allChar.Split(',');
		string randomCode = "";
		int temp = -1;
		System.Random rand = new System.Random();
		for (int i = 0; i < codeCount; i++)
		{
			if (temp != -1)
			{
				rand = new System.Random(i * temp * ((int)DateTime.Now.Ticks));
			}
			int t = rand.Next(35);
			if (temp == t)
			{
				return CreateRandomCode(codeCount);
			}
			temp = t;
			randomCode += allCharArray[t];
		}
		return randomCode;
	}

}


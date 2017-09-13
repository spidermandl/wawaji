using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using System.IO;
using System.Text;

/// <summary>
/// 资源更新model类
/// </summary>
public class UpdatesProxy : PureMVC.Patterns.Proxy {

	public const string NAME = "UpdatesProxy";
	const string FILE_NAME = "version.txt";

	ResVersion localVersion = null;//本地版本
	MemoryVersion memVersion = null;//内存版本
	Req_GetUpdatePics serverVersion = null;//服务器版本

	public UpdatesProxy (string proxyName)
		: base(proxyName, null){


	}
	/// <summary>
	/// Reads the local version.
	/// </summary>
	public void readLocalVersion(){
		if (!Directory.Exists(Util.DataPath))
		{
			Directory.CreateDirectory(Util.DataPath);
			File.Create (Util.DataPath+FILE_NAME).Close();
		}
		string txt = Util.GetFileText (Util.DataPath+FILE_NAME);
		if (txt != null) {
			//"{\"ret\":200,\"data\":{\"code\":0,\"msg\":\"\",\"info\":{\"prize\":[{\"id\":\"3\",\"pic\":null},{\"id\":\"7\",\"pic\":null}],\"…"
			localVersion = //JsonUtility.FromJson<ResVersion> (txt);
				JsonHelper.DeserializeJsonToObject<ResVersion> (txt);
		} 
		fillMemory ();
	}
	/// <summary>
	/// local version 写入内存version.
	/// </summary>
	void fillMemory(){
		if (localVersion == null)
			localVersion = new ResVersion ();
		memVersion = new MemoryVersion ();
		if (localVersion.data.ball != null) {
			foreach (ResVersion.Entry d in localVersion.data.ball) {
				MemoryVersion.Entry v = new MemoryVersion.Entry ();
				v.is_new = d.is_new;
				v.pic = d.pic;
				memVersion.ball.Add (d.id, v);
			}
		}
		if (localVersion.data.prize != null) {
			foreach (ResVersion.Entry d in localVersion.data.prize) {
				MemoryVersion.Entry v = new MemoryVersion.Entry ();
				v.is_new = d.is_new;
				v.pic = d.pic;
				memVersion.prize.Add (d.id, v);
			}
		}
	}

	/// <summary>
	/// 填充服务器 version 更新内存版本.
	/// </summary>
	/// <param name="online">Online.</param>
	public void fillServerVersion(Req_GetUpdatePics online){
		if (online.getResponseCode () == Req_GetUpdatePics.NO_UPDATE)//没有更新
			return;
		
		serverVersion = online;
		if (!online.Version.Equals(online.getOnlineVersion())) {
			foreach (Req_GetUpdatePics.Response.Entry e in online.getBall()) {
				if (!memVersion.ball.ContainsKey (e.id)) {
					memVersion.ball.Add (e.id, new MemoryVersion.Entry ());
					memVersion.ball [e.id].is_new = 0;
				}
				if (memVersion.ball [e.id].pic == null || !memVersion.ball [e.id].pic.Equals (e.pic)) {
					memVersion.ball [e.id].is_new = 1;
					memVersion.ball [e.id].pic = e.pic;
				}
			}
			foreach (Req_GetUpdatePics.Response.Entry e in online.getPrize()) {
				if (!memVersion.prize.ContainsKey (e.id)) {
					memVersion.prize.Add (e.id, new MemoryVersion.Entry ());
					memVersion.prize [e.id].is_new = 0;
				}
				if (memVersion.prize [e.id].pic == null || !memVersion.prize [e.id].pic.Equals (e.pic)) {
					memVersion.prize [e.id].is_new = 1;
					memVersion.prize [e.id].pic = e.pic;
				}
			}
		}

		saveToLocalVersion ();
	}

	/// <summary>
	/// 内存 version 写回local.
	/// </summary>
	/// <param name="online">Online.</param>
	public void saveToLocalVersion(){
		localVersion.version = serverVersion.getOnlineVersion();
		localVersion.data.ball = new ResVersion.Entry[serverVersion.getBall ().Length];
		int index = 0;
		foreach(string key in memVersion.ball.Keys){
			ResVersion.Entry e = new ResVersion.Entry ();
			e.id = key;
			e.is_new = memVersion.ball [key].is_new;
			e.pic = memVersion.ball [key].pic;
			localVersion.data.ball [index] = e;
			index++;
		}
		index = 0;
		localVersion.data.prize = new ResVersion.Entry[serverVersion.getPrize ().Length];
		foreach(string key in memVersion.prize.Keys){
			ResVersion.Entry e = new ResVersion.Entry ();
			e.id = key;
			e.is_new = memVersion.prize [key].is_new;
			e.pic = memVersion.prize [key].pic;
			localVersion.data.prize [index] = e;
			index++;
		}
		Util.WriteJsonText (Util.DataPath+FILE_NAME, JsonHelper.SerializeObject (localVersion));
		//Util.WriteJsonText (Util.DataPath+FILE_NAME, JsonUtility.ToJson (localVersion));
		//{"version":"2","data":{"prize":[{"id":"3","pic":"","is_new":1},{"id":"7","pic":"","is_new":1}],"ball":[{"id":"2","pic":"","is_new":1}]}}
	}

	/// <summary>
	/// Gets the local version.
	/// </summary>
	/// <returns>The local version.</returns>
	public string getLocalVersion(){
		return localVersion.version;
	}

	[Serializable]
	public class ResVersion{

		public string version;
		public Data data;

		public ResVersion(){
			version = "1";
			data = new Data();
		}

		[Serializable]
		public class Data
		{
			public Entry[] prize;
			public Entry[] ball;
		}

		[Serializable]
		public class Entry
		{
			public string id;
			public string pic;
			public int is_new;
		}


	}

	[Serializable]
	public class MemoryVersion{
		public Dictionary<string,Entry> prize;
		public Dictionary<string,Entry> ball;

		public MemoryVersion(){
			prize = new Dictionary<string,Entry>();
			ball = new Dictionary<string,Entry>();
		}

		[Serializable]
		public class Entry{
			public string pic;
			public int is_new;
		}
	}
}


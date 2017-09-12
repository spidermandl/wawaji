using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using System.IO;
using System.Text;


public class UpdatesProxy : PureMVC.Patterns.Proxy {

	public const string NAME = "UpdatesProxy";
	const string FILE_NAME = "version.txt";

	ResVersion localVersion = null;
	MemoryVersion memVersion = null;
	Req_GetUpdatePics serverVersion = null;

	public UpdatesProxy (string proxyName)
		: base(proxyName, null){

		if (!Directory.Exists(Util.DataPath))
		{
			Directory.CreateDirectory(Util.DataPath);
			File.Create (Util.DataPath+FILE_NAME).Close();
		}
		string txt = Util.GetFileText (Util.DataPath+FILE_NAME);
		if (txt != null) {
			localVersion = JsonUtility.FromJson<ResVersion> (txt);
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
				v.is_new = false;
				v.pic = d.pic;
				memVersion.ball.Add (d.id, v);
			}
		}
		if (localVersion.data.prize != null) {
			foreach (ResVersion.Entry d in localVersion.data.prize) {
				MemoryVersion.Entry v = new MemoryVersion.Entry ();
				v.is_new = false;
				v.pic = d.pic;
				memVersion.prize.Add (d.id, v);
			}
		}
	}

	/// <summary>
	/// 填充服务器 version.
	/// </summary>
	/// <param name="online">Online.</param>
	public void fillServerVersion(Req_GetUpdatePics online){
		serverVersion = online;
		if (!online.Version.Equals(online.getResponse().data.info.version)) {
			foreach (Req_GetUpdatePics.Response.Entry e in online.getResponse().data.info.ball) {
				if (memVersion.ball.ContainsKey (e.id)) {
					memVersion.ball [e.id].is_new = true;
					memVersion.ball [e.id].pic = e.pic;
				}
			}
			foreach (Req_GetUpdatePics.Response.Entry e in online.getResponse().data.info.prize) {
				if (memVersion.prize.ContainsKey (e.id)) {
					memVersion.prize [e.id].is_new = true;
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
		localVersion.version = serverVersion.getResponse ().data.info.version;
		localVersion.data.ball = new ResVersion.Entry[serverVersion.getResponse ().data.info.ball.Length];
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
		localVersion.data.prize = new ResVersion.Entry[serverVersion.getResponse ().data.info.prize.Length];
		foreach(string key in memVersion.prize.Keys){
			ResVersion.Entry e = new ResVersion.Entry ();
			e.id = key;
			e.is_new = memVersion.prize [key].is_new;
			e.pic = memVersion.prize [key].pic;
			localVersion.data.prize [index] = e;
			index++;
		}
		Util.WriteJsonText (Util.DataPath, JsonUtility.ToJson (memVersion));
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
			public bool is_new;
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
			public bool is_new;
		}
	}
}


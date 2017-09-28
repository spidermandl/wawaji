using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using System.IO;
using System.Text;
using FairyGUI;

/// <summary>
/// 资源更新model类
/// </summary>
public class UpdatesProxy : BaseProxy {

	public const string NAME = "UpdatesProxy";
	const string FILE_NAME = "version.txt";

	ResVersion localVersion = null;//本地版本
	MemoryVersion memVersion = null;//内存版本
	Req_GetUpdatePics serverVersion = null;//服务器版本

	public UpdatesProxy (string proxyName)
		: base(proxyName, null){


	}

	public override void bindingData (Request.Response meta)
	{
		if (meta.GetType () == typeof(Req_GetUpdatePics.Response)) {
			bindingData ((Req_GetUpdatePics.Response)meta);
		}
	}

	void bindingData(Req_GetUpdatePics.Response data){
		fillServerVersion ((Req_GetUpdatePics)data.Req);
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
			localVersion = JsonHelper.DeserializeJsonToObject<ResVersion> (txt);
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
				v.pic_path = d.pic_path;
				v.local_path = d.local_path;
				v.type = Convert.ToInt32(MemoryVersion.RES_TYPE.BALL);
				memVersion.ball.Add (d.id, v);
			}
		}
		if (localVersion.data.prize != null) {
			foreach (ResVersion.Entry d in localVersion.data.prize) {
				MemoryVersion.Entry v = new MemoryVersion.Entry ();
				v.is_new = d.is_new;
				v.pic = d.pic;
				v.pic_path = d.pic_path;
				v.local_path = d.local_path;
				v.type = Convert.ToInt32(MemoryVersion.RES_TYPE.PRIZE);
				memVersion.prize.Add (d.id, v);
			}
		}

		if (localVersion.data.raw != null) {
			foreach (ResVersion.Entry d in localVersion.data.raw) {
				MemoryVersion.Entry v = new MemoryVersion.Entry ();
				v.is_new = d.is_new;
				v.pic = d.pic;
				v.pic_path = d.pic_path;
				v.local_path = d.local_path;
				v.type = Convert.ToInt32(MemoryVersion.RES_TYPE.RAW);
				memVersion.raw.Add (d.id, v);
			}
		}
	}

	/// <summary>
	/// 填充服务器 version,更新内存版本.
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
				}
				memVersion.ball [e.id].is_new = 1;
				memVersion.ball [e.id].pic = e.pic;
				memVersion.ball [e.id].pic_path = e.pic_path;
				memVersion.ball [e.id].type = Convert.ToInt32(MemoryVersion.RES_TYPE.BALL);

			}
			foreach (Req_GetUpdatePics.Response.Entry e in online.getPrize()) {
				if (!memVersion.prize.ContainsKey (e.id)) {
					memVersion.prize.Add (e.id, new MemoryVersion.Entry ());
				}
				memVersion.prize [e.id].is_new = 1;
				memVersion.prize [e.id].pic = e.pic;
				memVersion.prize [e.id].pic_path = e.pic_path;
				memVersion.ball [e.id].type = Convert.ToInt32(MemoryVersion.RES_TYPE.PRIZE);

			}
		}

		saveToLocalVersion ();
	}

	/// <summary>
	/// 内存 version 写回local.
	/// </summary>
	/// <param name="online">Online.</param>
	void saveToLocalVersion(){
		if(serverVersion!=null)
			localVersion.version = serverVersion.getOnlineVersion();
		localVersion.data.ball = new ResVersion.Entry[memVersion.ball.Count];
		int index = 0;
		foreach(string key in memVersion.ball.Keys){
			ResVersion.Entry e = new ResVersion.Entry ();
			e.id = key;
			e.is_new = memVersion.ball [key].is_new;
			e.pic = memVersion.ball [key].pic;
			e.pic_path = memVersion.ball [key].pic_path;
			e.local_path = memVersion.ball [key].local_path;
			localVersion.data.ball [index] = e;
			index++;
		}
		index = 0;
		localVersion.data.prize = new ResVersion.Entry[memVersion.prize.Count];
		foreach(string key in memVersion.prize.Keys){
			ResVersion.Entry e = new ResVersion.Entry ();
			e.id = key;
			e.is_new = memVersion.prize [key].is_new;
			e.pic = memVersion.prize [key].pic;
			e.pic_path = memVersion.prize [key].pic_path;
			e.local_path = memVersion.prize [key].local_path;
			localVersion.data.prize [index] = e;
			index++;
		}
		index = 0;
		localVersion.data.raw = new ResVersion.Entry[memVersion.raw.Count];
		foreach(string key in memVersion.raw.Keys){
			ResVersion.Entry e = new ResVersion.Entry ();
			e.id = key;
			e.is_new = memVersion.raw [key].is_new;
			e.pic = memVersion.raw [key].pic;
			e.pic_path = memVersion.raw [key].pic_path;
			e.local_path = memVersion.raw [key].local_path;
			localVersion.data.raw [index] = e;
			index++;
		}
		Util.WriteJsonText (Util.DataPath+FILE_NAME, JsonHelper.SerializeObject (localVersion));
		//Util.WriteJsonText (Util.DataPath+FILE_NAME, JsonUtility.ToJson (localVersion));
	}

	void mirror(){

	}
	/// <summary>
	/// Gets the local version.
	/// </summary>
	/// <returns>The local version.</returns>
	public string getLocalVersion(){
		return localVersion.version;
	}

	/// <summary>
	/// Loads the ball icon.
	/// </summary>
	/// <param name="loader">Loader.</param>
	/// <param name="id">Identifier.</param>
	public void loadBallIcon(GLoader loader,string id){
		MemoryVersion.Entry entry = memVersion.ball [id];
		if (entry != null) {
			loadIcon (loader, entry);
		}
	}
	/// <summary>
	/// Loads the prize icon.
	/// </summary>
	/// <param name="loader">Loader.</param>
	/// <param name="id">Identifier.</param>
	public void loadPrizeIcon(GLoader loader,string id){
		MemoryVersion.Entry entry = memVersion.prize [id];
		if (entry != null) {
			loadIcon (loader, entry);
		}
	}
	/// <summary>
	/// Loads the pure icon.
	/// </summary>
	/// <param name="loader">Loader.</param>
	/// <param name="url">URL.</param>
	public void loadPureIcon(GLoader loader,string url){
		Uri uri = new Uri (url);

		if (!memVersion.raw.ContainsKey (url)) {
			MemoryVersion.Entry entry = new MemoryVersion.Entry ();
			entry.is_new =1;
			entry.pic_path = url;
			entry.pic = uri.LocalPath;
			entry.type = Convert.ToInt32(MemoryVersion.RES_TYPE.RAW);
			memVersion.raw.Add (url, entry);
		}

		loadIcon(loader,memVersion.raw[url]);
	}
	/// <summary>
	/// Loads the icon.
	/// </summary>
	/// <param name="loader">Loader.</param>
	/// <param name="entry">Entry.</param>
	public void loadIcon(GLoader loader,MemoryVersion.Entry entry){
		ResourceManager.inst.LoadIcon (entry, 
				(NTexture texture)=>{
					loader.texture = texture;
				}, 
				(string error) => {
				},
				(byte[] stream)=> {
					if(entry.is_new==1){
						string path = Util.md5(entry.pic_path);
						Util.WriteToFile(Util.DataPath+path,stream);
						entry.is_new = 0;
						entry.local_path = path;
					}

					if(ResourceManager.inst.isQueued()==false){
						saveToLocalVersion();
					}
				});
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
			public Entry[] raw;
		}

		[Serializable]
		public class Entry
		{
			public string id;
			public string pic;//资源名
			public string pic_path;//资源网络路径
			public string local_path;//资源本地路径
			public int is_new;//0 已经存在的，1 需要更新的
		}


	}

	[Serializable]
	public class MemoryVersion{

		public enum RES_TYPE{
			PRIZE=0,
			BALL=1,
			RAW=-1
		}

		public Dictionary<string,Entry> prize;
		public Dictionary<string,Entry> ball;
		public Dictionary<string,Entry> raw;

		public MemoryVersion(){
			prize = new Dictionary<string,Entry>();
			ball = new Dictionary<string,Entry>();
			raw = new Dictionary<string,Entry>(); 
		}

		[Serializable]
		public class Entry{
			public string pic;//资源名
			public string pic_path;//资源网络路径
			public string local_path;//资源本地路径
			public int is_new;//0 已经存在的，1 需要更新的
			public int type;//-1:pure resource; 0:prize;1:ball
		}
	}

}


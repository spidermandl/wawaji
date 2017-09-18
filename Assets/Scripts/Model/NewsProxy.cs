using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using System.IO;
using System.Text;

/// <summary>
/// 新闻列表
/// </summary>
public class NewsProxy : PureMVC.Patterns.Proxy {

	public const string NAME = "NewsProxy";

	List<NewsItem> items;
	public List<NewsItem> Items{
		get{return this.items;}
		set{ items = value;}
	}

	public class NewsItem{
		public int id;
		public string type_title;//新闻类型
		public string title;//新闻标题
		public string cont;//新闻内容
		public string date_time;//新闻时间
	}


	public NewsProxy (string proxyName)
		: base(proxyName, null){

	}
	/// <summary>
	/// Sets the news data.
	/// </summary>
	/// <param name="meta">Meta.</param>
	public void setNewsData(Req_GetNewsLists.Response meta){
		List<NewsItem> items = new List<NewsItem> ();
		foreach(Req_GetNewsLists.Response.Info info in meta.data.info ){
			NewsItem i = new NewsItem ();
			i.id = info.id;
			i.type_title = info.type_title;
			i.title = info.title;
			i.cont = info.cont;
			i.date_time = info.date_time;
			items.Add (i);
		}

		this.Items = items;
	}

}


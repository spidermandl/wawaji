﻿using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using System.IO;
using System.Text;

/// <summary>
/// 资源更新model类
/// </summary>
public class AccountProxy : PureMVC.Patterns.Proxy {

	public const string NAME = "AccountProxy";

	int id;
	int type;//用户类型（1:手机号注册，2：微信注册，3：游客登录）
	string name;
	string phone;
	string nickname;
	string pic;
	string wxid;
	int coin;
	string uuid;
	string token;

	public int Id{
		get{return this.id;}
		set{ id = value;}
	}
	public int Type{
		get{return this.type;}
		set{ type = value;}
	}
	public string Name{
		get{return this.name;}
		set{ name = value;}
	}
	public string Phone{
		get{return this.phone;}
		set{ phone = value;}
	}
	public string Nickname{
		get{return this.nickname;}
		set{ nickname = value;}
	}
	public string Pic{
		get{return this.pic;}
		set{ pic = value;}
	}
	public string Wxid{
		get{return this.wxid;}
		set{ wxid = value;}
	}	
	public string Uuid{
		get{return this.uuid;}
		set{ uuid = value;}
	}
	public int Coin{
		get{return this.coin;}
		set{ coin = value;}
	}
	public string Token{
		get{return this.token;}
		set{ token = value;PlayerPrefs.SetString (LocalKey.TOKEN, token);}
	}


	public AccountProxy (string proxyName)
		: base(proxyName, null){


	}
	/// <summary>
	/// Sets the user data.
	/// </summary>
	/// <param name="meta">Meta.</param>
	public void setUserData(Base_Req_UserInfo.Response meta){
		this.Id = meta.data.info.id;
		this.Type = meta.data.info.type;
		this.Name = meta.data.info.name;
		this.Phone = meta.data.info.phone;
		this.Nickname = meta.data.info.nickname;
		this.Pic = meta.data.info.pic;
		this.Wxid = meta.data.info.wxid;
		this.Coin = meta.data.info.coin;
		this.Uuid = meta.data.info.uuid;
		this.Token = meta.data.info.token;
	}

}

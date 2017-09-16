using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using System.IO;
using System.Text;

/// <summary>
/// 用户中奖名单
/// </summary>
public class GameBallProxy : PureMVC.Patterns.Proxy {

	public const string NAME = "GameBallProxy";

	int num;
	public int Num{
		get{return this.num;}
		set{ num = value;}
	}

	List<BallsItem> items;
	public List<BallsItem> Items{
		get{return this.items;}
		set{ items = value;}
	}

	public class BallsItem{
		public int prize_id;
		public int ball_id;
		public string name;
		public int price;
		public int coin;
		public string p_pic;
		public string b_pic;
		public float proportion;
	}


	public GameBallProxy (string proxyName)
		: base(proxyName, null){

	}
	/// <summary>
	/// Sets the user data.
	/// </summary>
	/// <param name="meta">Meta.</param>
	public void setBallLists(Req_GetMachinePrizeBallData.Response meta){
		Num = meta.data.info.count_ball_num;
		List<BallsItem> items = new List<BallsItem> ();
		foreach(Req_GetMachinePrizeBallData.Response.PrizeBall ball in meta.data.info.prize_ball_arr ){
			BallsItem b = new BallsItem ();
			b.prize_id = ball.prize_id;
			b.ball_id = ball.ball_id;
			b.name = ball.name;
			b.price = ball.price;
			b.coin = ball.coin;
			b.p_pic = ball.p_pic;
			b.b_pic = ball.b_pic;
			b.proportion = ball.proportion;

			items.Add (b);
		}

		this.Items = items;
	}

}


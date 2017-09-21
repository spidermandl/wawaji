using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using System.IO;
using System.Text;

/// <summary>
/// 游戏中奖球数据
/// </summary>
public class GameBallProxy : BaseProxy {

	public const string NAME = "GameBallProxy";

	//球的数量
	int num;
	public int Num{
		get{return this.num;}
		set{ num = value;}
	}

	//球的属性和分布情况
	List<BallsItem> items;
	public List<BallsItem> Items{
		get{return this.items;}
		set{ items = value;}
	}

	//游戏id
	int game_id;
	public int GameId{
		get{return this.game_id;}
		set{ game_id = value;}
	}

	//不可抓中的海洋球类型ID数组
	int[] ball_arr;
	public int[] BallArr{
		get{return this.BallArr;}
		set{ 
			BallArr = value;}
	}

	public class BallsItem{
		public int prize_id;
		public int ball_id;
		public string name;
		public int price;
		public int coin;
		public string p_pic;
		public string b_pic;
		public int is_matter;
		public int ball_num;
	}


	public GameBallProxy (string proxyName)
		: base(proxyName, null){

	}

	public override void bindingData (Request.Response meta)
	{
		if (meta.GetType () == typeof(Req_GetMachinePrizeBallData.Response)) {
			bindingData ((Req_GetMachinePrizeBallData.Response)meta);
		}
	}

	/// <summary>
	/// Sets the user data.
	/// </summary>
	/// <param name="meta">Meta.</param>
	public void bindingData(Req_GetMachinePrizeBallData.Response meta){
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
			b.is_matter = ball.is_matter;
			b.ball_num = ball.ball_num;

			items.Add (b);
		}

		this.Items = items;
	}

	/// <summary>
	/// Sets the game info.
	/// </summary>
	/// <param name="meta">Meta.</param>
	public void bindingData(Req_MachineStartGrab.Response meta){
		GameId = meta.data.info.game_id;
		int[] copy = new int[meta.data.info.ball_arr.Length];
		Array.Copy (meta.data.info.ball_arr, copy, copy.Length);
		this.ball_arr = copy;
	}

}


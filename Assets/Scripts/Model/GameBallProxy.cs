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
	public int[] getBallArr(){
		return this.ball_arr;
	}
	//最终的抓球结果
//	int[] ball_result;
//	public int[] getBallResult(){
//		return this.ball_result;
//	}
	//最终的抓球结果
	Answer result;
	public Answer Result{
		get{return this.result;}
		set{ result = value;}
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

	/// <summary>
	/// 抓球结果
	/// </summary>
	public class Answer{
		public BallsItem[] prizes;
		public int coin;
		public int type; // -1: no prize ; 0: big prize; 1: coin prize
	}

	public GameBallProxy (string proxyName)
		: base(proxyName, null){

	}
	/// <summary>
	/// Bindings the data.
	/// </summary>
	/// <param name="meta">Meta.</param>
	public override void bindingData (Request.Response meta)
	{
		if (meta.GetType () == typeof(Req_GetMachinePrizeBallData.Response)) {
			bindingData ((Req_GetMachinePrizeBallData.Response)meta);
		}else if(meta.GetType () == typeof(Req_MachineStartGrab.Response)){
			bindingData ((Req_MachineStartGrab.Response)meta);
		}else if(meta.GetType () == typeof(Req_MachineEndGrab.Response)){
			bindingData ((Req_MachineEndGrab.Response)meta);
		}
	}

	/// <summary>
	/// Sets the user data.
	/// </summary>
	/// <param name="meta">Meta.</param>
	public void bindingData(Req_GetMachinePrizeBallData.Response meta){
		List<BallsItem> items = new List<BallsItem> ();
		foreach(Req_GetMachinePrizeBallData.Response.Info ball in meta.data.info ){
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

	/// <summary>
	/// Bindings the data.
	/// </summary>
	/// <param name="meta">Meta.</param>
	public void bindingData(Req_MachineEndGrab.Response meta){
//		int[] copy = new int[meta.data.info.ball_arr.Length];
//		Array.Copy (meta.data.info.ball_arr, copy, copy.Length);
//		this.ball_result = copy;
		Answer answer = new Answer();
		this.Result = answer;
		int len = meta.data.info.ball_arr.Length;
		if (len == 0) {
			answer.prizes = new BallsItem[0];
			answer.type = -1;
			return;
		}
		BallsItem[] res = new BallsItem[len];
		int prize_index = -1;
		bool isPrize = false;
		for (int i = 0; i < len; i++) {
			foreach(BallsItem item in items){
				if (meta.data.info.ball_arr[i] == item.ball_id) {
					res [i] = item;
					if (item.is_matter == 1) {
						prize_index = i;
						isPrize = true;
					}
					break;
				}
			}
		}
		
		answer.prizes = res;
		if (isPrize) {
			answer.type = 0;
			UserPrizeInfoProxy proxy = UnityFacade.GetInstance ().RetrieveProxy (UserPrizeInfoProxy.NAME) as UserPrizeInfoProxy;
			UserPrizeInfoProxy.PrizeItem u_item = new UserPrizeInfoProxy.PrizeItem ();
			BallsItem item = res [prize_index];
			u_item.coin = item.coin;
			u_item.name = item.name;
			u_item.pic = item.p_pic;
			u_item.price = ""+item.price;
			u_item.prize_id = item.prize_id;
			u_item.status = 1;
			proxy.SelectedItem = u_item;

		} else {
			answer.coin = meta.data.info.coin;
			answer.type = 1;
			AccountProxy proxy = UnityFacade.GetInstance ().RetrieveProxy (AccountProxy.NAME) as AccountProxy;
			proxy.Coin = proxy.Coin + answer.coin;
		}
	}

}


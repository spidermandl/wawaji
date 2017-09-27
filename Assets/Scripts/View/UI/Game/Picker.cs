﻿using System;
using System.Collections;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;
using PathologicalGames;
using MonsterLove.StateMachine;
using DG.Tweening;

public class Picker : MonoBehaviour
{
	SpawnPool pool;
	static Vector3 initPos = new Vector3 (1.26f, 3, 0);//
	static float ground_Y = 1.55f;
	static Vector3 dropPos = new Vector3 (0,3,-1.72f);//

	Transform claw =null;//
	Transform rootFoot;//
	GameObject pickRange;//
	///// 夹球腿相关属性 ///////////////////////////////////////////
	Transform[] foots;
	public int legs = 3;//抓脚个数
	///// ////////////////////////////////////////////////////////
	///// //////////////////////////////////////////////////////// 
	Transform triangle_cell;
	Transform hexagon_cell;
	Transform slot;
	///// //////////////////////////////////////////////////////// 
	GameObject fill;//槽口填充
	GameObject cover;//槽口挡板
	GameObject fence;//后栏珊，防止球扔出界
	///// //////////////////////////////////////////////////////// 
	private StateMachine<States> pickerStateMachine;//
	enum States
	{
		Still,// 静止
		Seek,// 寻找落点
		Down,// 下落
		Pick,// 抓取球的过程
		Up,// 上升过程
		Ship,//移动至释放点
		Release,// 释放
	}
	/////seek state //////////////////////////////////////////////////////// 
	Vector3 moveDiretion = Vector3.zero;
	const float EDGE_RADIUS = 0.8f;
	///// //////////////////////////////////////////////////////// 
	/// /////pick state //////////////////////////////////////////////////////// 
	const float FOOT_INIT_ANGLE = 20f;//20f;
	const float FOOT_FINAL_ANGLE = 30f;//70f;
	Vector3 releaseDirection = Vector3.zero;//释放移动路径方向
	///// //////////////////////////////////////////////////////// 
	public delegate bool CheckDropBall(GameObject ball);
	private CheckDropBall _checkDropBall;//掉球回调函数
	public delegate void CheckResultBall(List<GameObject> balls);
	private CheckResultBall _checkResultBall;//结果回调函数
	public delegate int[] CheckRemainingBall(List<GameObject> balls);
	private CheckRemainingBall _checkRemainingBall;//剩余球回调函数
//	public delegate GameBallProxy.BallsItem[] CalResult(List<GameObject> balls);
//	private CalResult _calResult;//计算最终结果
	Transform ball_objs = null;//被抓住的球的根结点
	List<BallBundle> picked_balls = new List<BallBundle>();
	class BallBundle{
		float dis;
		GameObject ball;
		public float Distance{
			get{ return dis;}
			set{ dis = value;}
		}
		public GameObject Ball{
			get{ return ball;}
			set{ ball = value;}
		}
	}
	class BallCompare: IComparer<BallBundle>
	{
		public int Compare(BallBundle x, BallBundle y)
		{
			if(x.Distance>y.Distance)
				return -1;
			return 1;
		}
	}
	/// ////////////////////////////////////////////////////////////////////////////////////////////////
	/// monobehaviour相关回调方法
	////////////////////////////////////////////////////////////////////////////////////////////////
	void Awake(){
		this.pool = PoolManager.Pools["WaWaJi"];
		this.claw = this.gameObject.transform.Find ("claw");
		this.rootFoot = this.gameObject.transform.Find ("foot");
		this.fill = this.gameObject.transform.parent.Find ("fill").gameObject;
		this.cover = this.gameObject.transform.parent.Find ("cover").gameObject;
		this.fence = this.gameObject.transform.parent.Find ("back_fence").gameObject;
		this.pickRange = this.gameObject.transform.Find ("picking_range").gameObject;
		this.ball_objs = this.gameObject.transform.Find ("balls");

		////////////////////////////////////////////////////////
		//生成每个抓脚的根节点,初始化所有抓脚
		GameObject prefab = (GameObject)Resources.Load ("Prefabs/foot");
		foots = new Transform[this.legs];
		for (int i = 0; i < this.legs; i++) {
			foots[i]= this.pool.Spawn(prefab, Vector3.zero, Quaternion.identity,this.rootFoot);
			foots [i].localPosition = Vector3.zero;
			foots [i].gameObject.SetActive (false);
			Footer footer = foots [i].gameObject.AddComponent<Footer> ();
			footer.initRotate = new Vector3(270,i*360/this.legs,0);
			footer.footFactor = (float)i/(float)this.legs;
			foots [i].gameObject.SetActive (true);

			footer.rotateAroundAxis (Picker.FOOT_INIT_ANGLE);
			removeMeshRender (this.foots [i].gameObject);

			//绑入模型中
			if (this.legs == 3) {
				switch (i) {
				case 0:
					this.foots [0].parent = this.claw.transform.Find ("polySurface42");
					break;
				case 1:
					this.foots [1].parent = this.claw.transform.Find ("polySurface58");
					break;
				case 2:
					this.foots [2].parent = this.claw.transform.Find ("polySurface56");
					break;
				default:
					break;
				}
			}
		}
		////////////////////////////////////////////////////////
		/// range
		RangeSphere range = this.pickRange.GetComponent (typeof(RangeSphere)) as RangeSphere;
		if (range == null) {
			RangeSphere sphere = this.pickRange.AddComponent (typeof(RangeSphere)) as RangeSphere;
			sphere.setSelectingFunc (this.selectedBall);
		}
		////////////////////////////////////////////////////////
		this.initConfig ();
	}

	void FixedUpdate(){
		
	}
	void OnDestroy(){
		//Destroy (GetComponent (typeof(StateMachineRunner)));
	}
	////////////////////////////////////////////////////////////////////////////////////////////////
	/// 状态机相关回调方法
	////////////////////////////////////////////////////////////////////////////////////////////////
	public void Still_Enter(){
		UnityFacade.GetInstance().SendNotification(GameCommand.COMMAND,new GameCommand.GameStillEnter());
		Animator anim = this.claw.GetComponent<Animator>();
		anim.Play ("idle");
	}

	public void Still_Exit(){
		UnityFacade.GetInstance().SendNotification(GameCommand.COMMAND,new GameCommand.GameStillExit());
	}

	public void Seek_Enter(){
		
	}
	public void Seek_FixedUpdate()
	{
		//Debug.Log (this.moveDiretion);
		if (this.moveDiretion.x == 1) {//右
			Ray ray = new Ray(transform.position, Vector3.right);  
			RaycastHit hit;  
			if(Physics.Raycast(ray, out hit, EDGE_RADIUS, 1<<LayerMask.NameToLayer("Wall")))  
				return;
		} else if (this.moveDiretion.x == -1) {//左
			Ray ray = new Ray(transform.position, Vector3.left);  
			RaycastHit hit;  
			if(Physics.Raycast(ray, out hit, EDGE_RADIUS, 1<<LayerMask.NameToLayer("Wall")))  
				return;
		} else if (this.moveDiretion.z == 1) {//后
			Ray ray = new Ray(transform.position, Vector3.forward);  
			RaycastHit hit;  
			if (Physics.Raycast (ray, out hit, EDGE_RADIUS, 1<<LayerMask.NameToLayer("Wall")))  
				return;
		} else if (this.moveDiretion.z == -1) {//前
			Ray ray = new Ray(transform.position, Vector3.back);  
			RaycastHit hit;  
			if(Physics.Raycast(ray, out hit, EDGE_RADIUS, 1<<LayerMask.NameToLayer("Wall")))  
				return;
		}
		//移动速度1
		this.gameObject.transform.Translate (new Vector3(
				this.moveDiretion.x * Time.fixedDeltaTime,
				this.moveDiretion.y * Time.fixedDeltaTime,
				this.moveDiretion.z * Time.fixedDeltaTime));
	}

	public void Down_Enter(){
		for (int i = 0; i < this.legs; i++) {
			foots [i].gameObject.SetActive (true);
		}
	}

	public void Down_FixedUpdate(){
		//移动速度1
		this.gameObject.transform.Translate (new Vector3 (0,-Time.fixedDeltaTime,0));
		if (this.gameObject.transform.localPosition.y <= Picker.ground_Y) {
			this.pickerStateMachine.ChangeState (States.Pick);
		}
	}

	public IEnumerator Pick_Enter(){
		yield return new WaitForSeconds(1);
		Animator anim = this.claw.GetComponent<Animator>();
		anim.Play ("pick_4");
	}


	public void Pick_FixedUpdate(){
		Animator anim = this.claw.GetComponent<Animator>();
		AnimatorStateInfo info = anim.GetCurrentAnimatorStateInfo(0);
		//Debug.Log (anim.GetInteger(AutoPlay.PICK_ANIM));
		// 判断动画是否播放完成
		if (anim.GetInteger(AutoPlay.PICK_ANIM)==0&&info.IsName("pick_3")&&info.normalizedTime > 1.0f){
			this.validFence ();
			this.pickerStateMachine.ChangeState (States.Up);
		}
	}

	public IEnumerator Pick_Exit(){
		yield return new WaitForSeconds(0.4f);
		this.pickRange.SetActive (true);
		yield return new WaitForSeconds(0.1f);
		this.pickRange.SetActive (false);
	}

	public void Up_Enter(){
		sortBallsByDistance ();
		StartCoroutine (dropExcessBall ());
	}
	public void Up_FixedUpdate(){
		//移动速度1
		this.gameObject.transform.Translate (new Vector3 (0,Time.fixedDeltaTime,0));
		if (this.gameObject.transform.localPosition.y >= Picker.initPos.y) {
			this.pickerStateMachine.ChangeState (States.Ship);
		}
	}
	public void Ship_Enter(){
		Vector3 dir = Picker.dropPos - this.gameObject.transform.localPosition;
		float dis = (float)Math.Sqrt (dir.x * dir.x + dir.y * dir.y + dir.z * dir.z);
		this.releaseDirection = new Vector3 (dir.x/dis,dir.y/dis,dir.z/dis);
		StartCoroutine (dropBallByType ());
		StartCoroutine (confirmDrops ());
	}
	public void Ship_FixedUpdate(){
		this.gameObject.transform.Translate (
			0.4f*Time.fixedDeltaTime*this.releaseDirection.x,
			0.4f*Time.fixedDeltaTime*this.releaseDirection.y,
			0.4f*Time.fixedDeltaTime*this.releaseDirection.z);
		if (Vector3.Distance (this.gameObject.transform.localPosition, Picker.dropPos) <= 0.01) {
			this.pickerStateMachine.ChangeState (States.Release);
		}
	}
	public void Release_Enter(){
		this.invalidFence ();
		this.fill.SetActive (false);
		this.cover.SetActive (false);
		this.fence.SetActive (true);
		for (int i = 0; i < this.legs; i++) {
			this.foots [i].gameObject.SetActive (false);
		}

		while (this.picked_balls.Count > 0) {
			restorePhysics ();
		}
		//this.rotateAround (this.acclumlated_angle - Picker.FOOT_INIT_ANGLE);
		Animator anim = this.claw.GetComponent<Animator>();
		anim.Play ("release_1");
	}

	public void Release_FixedUpdate(){
		Animator anim = this.claw.GetComponent<Animator>();
		AnimatorStateInfo info = anim.GetCurrentAnimatorStateInfo(0);
		// 判断动画是否播放完成
		if (info.IsName("release_3")&&info.normalizedTime >= 1.0f){
			this.pickerStateMachine.ChangeState (States.Still);
		}
	}
	public IEnumerator Release_Exit(){
		yield return new WaitForSeconds(1);

		UnityFacade.GetInstance().SendNotification(GameCommand.COMMAND,new GameCommand.GameEnd());
	}
	////////////////////////////////////////////////////////////////////////////////////////////////////////
	/// ************************************************************************************************
	////////////////////////////////////////////////////////////////////////////////////////////////////////
	//初始化所有object
	public void initConfig(){
		this.gameObject.transform.localPosition = Picker.initPos;
		this.fill.SetActive (true);
		this.cover.SetActive (true);
		this.fence.SetActive (false);

		//初始化底部fence
		initFence ();

		//this.rotateAround (Picker.FOOT_INIT_ANGLE);
		for (int i = 0; i < this.legs; i++) {
			foots [i].gameObject.SetActive (false);
		}
		//
		this.pickRange.SetActive (false);
		//Initialize State Machine Engine		
		pickerStateMachine = StateMachine<States>.Initialize(this, States.Still);

	}

	/// <summary>
	/// Inits the fence.
	/// </summary>
	void initFence(){

		this.hexagon_cell = this.gameObject.transform.Find ("hexagon_cell");
		this.triangle_cell = this.gameObject.transform.Find ("triangle_cell");
		this.slot = this.gameObject.transform.Find ("slot");
		//remove mesh renderer
		removeMeshRender(this.triangle_cell.gameObject);
		removeMeshRender (this.hexagon_cell.gameObject);
		invalidFence ();
	}
	/// <summary>
	/// Invalids the 多边形 fence.
	/// </summary>
	void invalidFence(){
		this.hexagon_cell.gameObject.SetActive (false);
		this.triangle_cell.gameObject.SetActive (false);
		this.slot.gameObject.SetActive (false);
	}
	/// <summary>
	/// Valids the 多边形 fence.
	/// </summary>
	void validFence(){
		//this.hexagon_cell.gameObject.SetActive (true);
		//this.slot.gameObject.SetActive(true);
		//this.rootFoot.gameObject.SetActive (false);
	}

	void removeMeshRender(GameObject root){
		MeshRenderer[] renders = root.gameObject.transform.GetComponentsInChildren<MeshRenderer> ();
		foreach(MeshRenderer r in renders){
			r.enabled = false;
		}
	}
	////////////////////////////////////////////////////////////////////////////////////////////////////////
	/// 掉落相关方法
	////////////////////////////////////////////////////////////////////////////////////////////////////////
	/// <summary>
	/// 按与抓取范围中心点的距离排序
	/// </summary>
	void sortBallsByDistance(){
		picked_balls.Sort (new BallCompare());
	}
	/// <summary>
	/// 上升过程球掉落，大于3个的必掉
	/// </summary>
	/// <returns>The excess ball.</returns>
	IEnumerator dropExcessBall(){
		yield return new WaitForSeconds (0.5f);
		while (true) {
			if (this.picked_balls.Count <= 3) {
				break;
			}
			yield return new WaitForSeconds (0.2f);
			restorePhysics ();
		}
	}

	/// <summary>
	/// 移动过程按概率掉落
	/// </summary>
	/// <returns>The ball by odds.</returns>
	IEnumerator dropBallByType(){
		GameBallProxy proxy = UnityFacade.GetInstance ().RetrieveProxy (GameBallProxy.NAME) as GameBallProxy;
		if (proxy != null) {
			for (int i = this.picked_balls.Count - 1; i >= 0; i--) {
				BallBundle ball = this.picked_balls [i];
				if (this._checkDropBall (ball.Ball) == true) {
					restorePhysics (ball);
					this.picked_balls.Remove (ball);
					yield return new WaitForSeconds (0.2f);
				}
			}
			List<GameObject> bs = new List<GameObject> ();
			for (int i = this.picked_balls.Count - 1; i >= 0; i--) {
				bs.Add (this.picked_balls [i].Ball);
			}
			this._checkResultBall (bs);
		} else {//无网络情况逻辑
			yield return dropBallByOdds();
		}
	}

	/// <summary>
	/// 按服务器返回结果掉落
	/// </summary>
	/// <returns>The ball by odds.</returns>
	IEnumerator dropBallByResult(){
		GameBallProxy proxy = UnityFacade.GetInstance ().RetrieveProxy (GameBallProxy.NAME) as GameBallProxy;
		if (proxy != null) {
			List<GameObject> bs = new List<GameObject> ();
			for (int i = 0;i< this.picked_balls.Count; i++) {
				bs.Add (this.picked_balls [i].Ball);
			}
			int[] drops = _checkRemainingBall (bs);
			BallBundle[] drop_balls = new BallBundle[drops.Length];
			for (int i = 0; i < drops.Length; i++) {
				BallBundle b = this.picked_balls [i];
				drop_balls [i] = b;
				restorePhysics (b);
				yield return new WaitForSeconds (0.2f);
			}
			for (int i = 0; i < drop_balls.Length; i++) {
				this.picked_balls.Remove (drop_balls[i]);
			}
		}
	}

	/// <summary>
	/// 移动过程按概率掉落
	/// </summary>
	/// <returns>The ball by odds.</returns>
	IEnumerator dropBallByOdds(){
		while (true) {
			bool noDrop = true;
			switch (this.picked_balls.Count) {
			case 1:
				System.Random rand = new System.Random ();
				float odd = (float)rand.NextDouble ();
				if (odd > 0.9f) {
					restorePhysics ();
					noDrop = false;
				}
				break;
			case 2:
				rand = new System.Random ();
				odd = (float)rand.NextDouble ();
				if (odd > 0.7f) {
					restorePhysics ();
					noDrop = false;
				}
				break;
			case 3:
				rand = new System.Random ();
				odd = (float)rand.NextDouble ();
				if (odd > 0.5f) {
					restorePhysics ();
					noDrop = false;
				}
				break;
			default:
				noDrop = false;
				break;
			}
			if (noDrop)
				break;
			yield return new WaitForSeconds (0.2f);
		}
	}
	/// <summary>
	/// 掉落目前离中心距离最远的球，加上物理
	/// </summary>
	void restorePhysics(){
		BallBundle ball = this.picked_balls [0];
		restorePhysics (ball);
		this.picked_balls.RemoveAt (0);
	}
	/// <summary>
	/// Restores the physics.
	/// </summary>
	/// <param name="ball">Ball.</param>
	void restorePhysics(BallBundle ball){
		ball.Ball.transform.parent = this.gameObject.transform.parent.Find ("balls");//还原根节点
		Rigidbody rb = ball.Ball.GetComponent<Rigidbody> ();
		rb.useGravity = true;
		rb.constraints = RigidbodyConstraints.None;
	}

	IEnumerator confirmDrops(){
		yield return new WaitForSeconds(1);
		for (int i = 0; i < this.legs; i++) {
			foots [i].gameObject.SetActive (false);
		}
	}
	/// ////////////////////////////////////////////////////////////////////////////
	/// 外部调用
	/// ////////////////////////////////////////////////////////////////////////////
	public void startSeeking(Vector3 direction){
		//Debug.Log (this.pickerStateMachine.State);
		if (this.pickerStateMachine.State == States.Still) {//只有静止的时候才会移动
			this.moveDiretion = direction;
			this.pickerStateMachine.ChangeState (States.Seek);
		}
	}
	public void stopSeeking(){
		if (this.pickerStateMachine.State == States.Seek) {
			this.pickerStateMachine.ChangeState (States.Still);//只有寻找的时候才能静止
		}
	}

	public void startTargeting(){
		if (this.pickerStateMachine.State == States.Still) {//只有静止的时候才会下落
			this.pickerStateMachine.ChangeState (States.Down);
		}
	}
	//pick 是否为静止状态
	public bool isIdle(){
		if (this.pickerStateMachine.State == States.Still) {
			return true;
		}
		return false;
	}
	/// <summary>
	/// 服务器最终掉落确认
	/// </summary>
	public void serverConfirmDrop(){
		if (this.pickerStateMachine.State != States.Ship) {
			return;
		}

		StartCoroutine (dropBallByResult ());
	}
	/// <summary>
	/// 回调方法 抓取范围内的球
	/// </summary>
	/// <param name="ball">Ball.</param>
	public void selectedBall(GameObject ball){
		float radius = this.pickRange.GetComponent<SphereCollider> ().radius;
		float dis = Vector3.Distance (ball.transform.position, this.pickRange.transform.position);
//		if (dis < radius) {
			ball.transform.parent = this.ball_objs;
			Rigidbody rb = ball.GetComponent<Rigidbody> ();
			rb.useGravity = false;
			rb.constraints = RigidbodyConstraints.FreezeAll;
			
			BallBundle bundle = new BallBundle();
			bundle.Ball= ball;
			bundle.Distance = dis;

			picked_balls.Add (bundle);
		//}
	}
	/// <summary>
	/// 设置掉球回调函数
	/// </summary>
	/// <param name="_func">Func.</param>
	public void setCheckDropBall(CheckDropBall _func){
		this._checkDropBall = _func;
	}
	/// <summary>
	/// 设置结果回调函数
	/// </summary>
	/// <param name="_func">Func.</param>
	public void setCheckResultBall(CheckResultBall _func){
		this._checkResultBall = _func;
	}
	/// <summary>
	/// Sets the check remaining ball.
	/// </summary>
	/// <param name="_func">Func.</param>
	public void setCheckRemainingBall(CheckRemainingBall _func){
		this._checkRemainingBall = _func;
	}

	/// <summary>
	/// Sets the cal result.
	/// </summary>
	/// <returns>The cal result.</returns>
	/// <param name="_func">Func.</param>
//	public GameBallProxy.BallsItem[] setCalResult(CalResult _func){
//		this._calResult = _func;
//	}
	/// ////////////////////////////////////////////////////////////////////////////
	/// ////////////////////////////////////////////////////////////////////////////
	/// ////////////////////////////////////////////////////////////////////////////

}  
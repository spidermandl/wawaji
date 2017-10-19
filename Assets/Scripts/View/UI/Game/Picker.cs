using System;
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
	static Vector3 initPos;//
	static Vector3 clawPos = new Vector3 (1.26f, 3, 0);//爪子初始点
	static Vector3 jointPos = new Vector3 (1.26f, 4.37f, 0);//铰链顶部初始点
	static float ground_Y = 1.55f;//爪子下降抓球高度距离
	static Vector3 dropPos = new Vector3 (0,initPos.y,-1.72f);//释放点

	Transform handler = null;
	Transform joint;
	Transform physics;
	Transform claw =null;//
	Transform rootFoot;//
	GameObject pickRange;//
	///// 夹球腿相关属性 ///////////////////////////////////////////
	Transform[] foots;
	public int legs = 3;//抓脚个数
	///// ////////////////////////////////////////////////////////
	///// //////////////////////////////////////////////////////// 
//	Transform triangle_cell;
//	Transform hexagon_cell;
//	Transform slot;
	///// //////////////////////////////////////////////////////// 
//	GameObject fill;//槽口填充
//	GameObject cover;//槽口挡板
	GameObject fence;//后栏珊，防止球扔出界
	Transform ball_container;//所有生成球容器
	///// //////////////////////////////////////////////////////// 
	private StateMachine<States> pickerStateMachine;//
	enum States
	{
		Still,// 静止
		Seek,// 寻找落点
		RemoveJoint,//还原垂直，去物理,swing爪子才有
		Down,// 下落
		Pick,// 抓取球的过程
		Up,// 上升过程
		RecoverJoint,//还原物理，swing爪子才有
		Ship,//移动至释放点
		Release,// 释放
		Init,//还原
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
		Transform topNode = GameObject.Find ("structure").transform;
//		this.fill = topNode.Find ("fill").gameObject;
//		this.cover = topNode.Find ("cover").gameObject;
		this.fence = topNode.Find ("back_fence").gameObject;
		this.ball_container = topNode.Find ("balls");
		this.pickRange = this.gameObject.transform.Find ("picking_range").gameObject;
		this.ball_objs = this.gameObject.transform.Find ("balls");

		this.physics = this.transform.parent;
		this.joint = this.physics.parent.Find ("joint");
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
			Ray ray = new Ray(handler.position, Vector3.right);  
			RaycastHit hit;  
			if(Physics.Raycast(ray, out hit, EDGE_RADIUS, 1<<LayerMask.NameToLayer("Wall")))  
				return;
		} else if (this.moveDiretion.x == -1) {//左
			Ray ray = new Ray(handler.position, Vector3.left);  
			RaycastHit hit;  
			if(Physics.Raycast(ray, out hit, EDGE_RADIUS, 1<<LayerMask.NameToLayer("Wall")))  
				return;
		} else if (this.moveDiretion.z == 1) {//后
			Ray ray = new Ray(handler.position, Vector3.forward);  
			RaycastHit hit;  
			if (Physics.Raycast (ray, out hit, EDGE_RADIUS, 1<<LayerMask.NameToLayer("Wall")))  
				return;
		} else if (this.moveDiretion.z == -1) {//前
			Ray ray = new Ray(handler.position, Vector3.back);  
			RaycastHit hit;  
			if(Physics.Raycast(ray, out hit, EDGE_RADIUS, 1<<LayerMask.NameToLayer("Wall")))  
				return;
		}
		//移动速度1
		Vector3 deltaDir = new Vector3 (
			                   this.moveDiretion.x * Time.fixedDeltaTime,
			                   this.moveDiretion.y * Time.fixedDeltaTime,
			                   this.moveDiretion.z * Time.fixedDeltaTime);
		//Debug.Log (deltaDir);
		//handler.Translate (deltaDir);
		handler.position = handler.position + deltaDir;
	}

	public void RemoveJoint_Enter(){
		//去物理
		handler = transform;
		transform.parent = physics.parent;

//		//矫正physics垂直方向
//		Vector3 fromVector = transform.position - joint.position;
//		Vector3 toVector = Vector3.down;
//		float angle = Vector3.Angle (fromVector, toVector); //求出两向量之间的夹角 
//		Vector3 normal = Vector3.Cross (fromVector,toVector);//叉乘求出法线向量
//		physics.GetComponent<Rigidbody>().constraints = RigidbodyConstraints.FreezeAll;
//		physics.RotateAround(joint.transform.position, normal, angle);//
	}

	public void RemoveJoint_FixedUpdate(){
		//矫正垂直方向
		Vector3 fromVector = transform.position - joint.position;
		Vector3 toVector = Vector3.down;
		float angle = Vector3.Angle (fromVector, toVector); //求出两向量之间的夹角 
		Vector3 normal = Vector3.Cross (fromVector,toVector);//叉乘求出法线向量
		float delta_angle = 10*Time.fixedDeltaTime;
		if (Math.Abs (angle) < delta_angle) {
			transform.RotateAround (joint.transform.position, normal, angle);
			this.pickerStateMachine.ChangeState (States.Down);
			return;
		}
			
		transform.RotateAround (joint.transform.position, normal, delta_angle);
	}

	public void Down_Enter(){
		for (int i = 0; i < this.legs; i++) {
			foots [i].gameObject.SetActive (true);
		}
	}

	public void Down_FixedUpdate(){
		//移动速度1
		Vector3 delta = new Vector3 (0,-Time.fixedDeltaTime,0);
		handler.position = handler.position + delta;
		if (handler.localPosition.y <= ground_Y) {
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
		sortBallsByDistance ();//距离由远及近

		informPickedBalls ();
		StartCoroutine (dropExcessBall ());
		StartCoroutine (dropBallByType ());
		StartCoroutine (confirmDrops ());
	}
	public void Up_FixedUpdate(){
		//移动速度1
		float delta = Time.fixedDeltaTime;
		if ((Picker.clawPos.y - handler.localPosition.y) < delta) {
			handler.position = handler.position + new Vector3 (0, Picker.clawPos.y - handler.localPosition.y, 0);
			if(AppConst.Swing)
				this.pickerStateMachine.ChangeState (States.RecoverJoint);
			else
				this.pickerStateMachine.ChangeState (States.Ship);
		}
		handler.position = handler.position + new Vector3 (0, delta, 0);
	}
		

	public IEnumerator RecoverJoint_Enter(){
//		handler = joint;
//		//addSwingComponent();
//		transform.parent = physics;
//		transform.localPosition = Vector3.zero;
//		physics.GetComponent<Rigidbody>().constraints = RigidbodyConstraints.None;

//		this.handler = joint;
//		this.handler.localPosition = Picker.jointPos;
//		this.physics.localPosition = Picker.initPos;
//		transform.parent = physics;
//		transform.localPosition = Vector3.zero;
//		physics.GetComponent<Rigidbody>().constraints = RigidbodyConstraints.None;


		yield return new WaitForSeconds(0.5f);
		Picker.dropPos.y = Picker.clawPos.y;
		this.pickerStateMachine.ChangeState (States.Ship);
	}

	public void Ship_Enter(){
		Vector3 dir = Picker.dropPos - handler.localPosition;
		float dis = (float)Math.Sqrt (dir.x * dir.x + dir.y * dir.y + dir.z * dir.z);
		this.releaseDirection = new Vector3 (dir.x/dis,dir.y/dis,dir.z/dis);
//		StartCoroutine (dropBallByType ());
//		StartCoroutine (confirmDrops ());
	}
	public void Ship_FixedUpdate(){
		Vector3 delta = new Vector3(
			0.4f*Time.fixedDeltaTime*this.releaseDirection.x,
			0.4f*Time.fixedDeltaTime*this.releaseDirection.y,
			0.4f*Time.fixedDeltaTime*this.releaseDirection.z);
		//translate 移动会受到力的影响
		handler.position = handler.position + delta;
		if (Vector3.Distance (handler.localPosition, Picker.dropPos) <= 0.01) {
			this.pickerStateMachine.ChangeState (States.Release);
		}
	}
	public void Release_Enter(){
//		this.fill.SetActive (false);
//		this.cover.SetActive (false);
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
			this.pickerStateMachine.ChangeState (States.Init);
		}
	}
	public IEnumerator Release_Exit(){
		yield return new WaitForSeconds(1);

		UnityFacade.GetInstance().SendNotification(GameCommand.COMMAND,new GameCommand.GameEnd());
	}

	public void Init_Enter(){
		initConfig ();
	}
	////////////////////////////////////////////////////////////////////////////////////////////////////////
	/// ************************************************************************************************
	////////////////////////////////////////////////////////////////////////////////////////////////////////

	public void initPicker(){
		this.pickerStateMachine.ChangeState (States.Init);
	}

	//初始化所有object
	public void initConfig(){
		if (AppConst.Swing) {
			this.handler = joint;
			//this.gameObject.transform.localPosition = Picker.clawPos;
			this.handler.localPosition = Picker.jointPos;
			this.physics.localPosition = Picker.initPos;
			transform.parent = physics;
			transform.localPosition = Vector3.zero;
			physics.GetComponent<Rigidbody>().constraints = RigidbodyConstraints.None;
			//addSwingComponent ();
			Picker.initPos = Picker.jointPos;
			Picker.dropPos.y = Picker.initPos.y;
		} else {
			this.handler = transform;
			this.transform.parent = physics.parent;
			Picker.initPos = Picker.clawPos;
			Picker.dropPos.y = Picker.initPos.y;
			this.gameObject.transform.localPosition = Picker.initPos;
		}
//		this.fill.SetActive (true);
//		this.cover.SetActive (true);
		this.fence.SetActive (false);

		//this.rotateAround (Picker.FOOT_INIT_ANGLE);
		for (int i = 0; i < this.legs; i++) {
			foots [i].gameObject.SetActive (false);
		}
		//
		this.pickRange.SetActive (false);
		//Initialize State Machine Engine		
		pickerStateMachine = StateMachine<States>.Initialize(this, States.Still);

	}

	void addSwingComponent(){
		Rigidbody rigid = this.gameObject.GetComponent<Rigidbody> ();
		if(rigid == null){
			rigid = this.gameObject.AddComponent<Rigidbody> ();
		}
		rigid.mass = 1;
		rigid.drag = 1;
		rigid.angularDrag = 1;
		//rigid.constraints = RigidbodyConstraints.FreezeRotationY;//RigidbodyConstraints.FreezeRotationY|RigidbodyConstraints.FreezePositionY;
		FixedJoint fJoint = this.gameObject.GetComponent<FixedJoint>();
		if (fJoint == null)
			fJoint = this.gameObject.AddComponent<FixedJoint> ();
		fJoint.connectedBody = this.handler.GetComponent<Rigidbody> ();

//		HingeJoint hinge = this.gameObject.GetComponent<HingeJoint> ();
//		if(hinge ==null)
//			hinge = this.gameObject.AddComponent<HingeJoint> ();
//		hinge.connectedBody = this.handler.GetComponent<Rigidbody> ();
//		hinge.anchor = new Vector3(0,1,0);
		//hinge.anchor = new Vector3(0,Picker.jointPos.y - Picker.clawPos.y,0);
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
//			List<GameObject> bs = new List<GameObject> ();
//			for (int i = this.picked_balls.Count - 1; i >= 0; i--) {
//				bs.Add (this.picked_balls [i].Ball);
//			}
//			this._checkResultBall (bs);
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
				BallBundle b = this.picked_balls [drops[i]];
				drop_balls [i] = b;
				restorePhysics (b);
				yield return new WaitForSeconds (0.2f);
			}
			for (int i = 0; i < drop_balls.Length; i++) {
				this.picked_balls.Remove (drop_balls[i]);
			}
			//切换球的碰撞层
			for(int i = 0; i < picked_balls.Count; i++){
				GameObject ball = this.picked_balls [i].Ball;
				ball.layer = LayerMask.NameToLayer("Hang");
				Rigidbody rb = ball.GetComponent<Rigidbody> ();
				rb.useGravity = true;
				rb.constraints = RigidbodyConstraints.None;
			}
		}
	}
	/// <summary>
	/// 提交服务器抓住的球
	/// </summary>
	void informPickedBalls(){
		///////////网络请求掉球结果//////////////////
		List<GameObject> bs = new List<GameObject> ();
		for (int i = 0; i <3; i++) {
			int size = this.picked_balls.Count-1;
			if(size-i>0)
				bs.Add (this.picked_balls [size-i].Ball);
		}
		this._checkResultBall (bs);
		//////////////////////////////////////////
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
		ball.Ball.transform.parent = this.ball_container;//还原根节点
		ball.Ball.layer = LayerMask.NameToLayer("Ball");
		Rigidbody rb = ball.Ball.GetComponent<Rigidbody> ();
		rb.useGravity = true;
		rb.constraints = RigidbodyConstraints.None;
	}
	/// <summary>
	/// 去抓脚物理，确保掉球
	/// </summary>
	/// <returns>The drops.</returns>
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
			bool collide = Physics.Raycast (handler.position, Vector3.down, 
				               Mathf.Infinity, 1<< LayerMask.NameToLayer ("Empty"));
			if (collide) {
				UnityFacade.GetInstance ().SendNotification (GameCommand.COMMAND,new GameCommand.GameBlockPicking());
				return;

			}
			if(AppConst.Swing)
				this.pickerStateMachine.ChangeState (States.RemoveJoint);
			else
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
		if (this.pickerStateMachine.State != States.Ship && this.pickerStateMachine.State != States.Up) {
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
	/// ////////////////////////////////////////////////////////////////////////////
	/// ////////////////////////////////////////////////////////////////////////////
	/// ////////////////////////////////////////////////////////////////////////////

}  
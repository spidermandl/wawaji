using System;
using System.Collections;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;
using PathologicalGames;
using MonsterLove.StateMachine;

public class Picker : MonoBehaviour
{
	SpawnPool pool;
	static Vector3 initPos = new Vector3 (1.26f, 3, 0);//
	static float ground_Y = 1.55f;
	static Vector3 dropPos = new Vector3 (0,3,-1.72f);//

	Transform claw =null;//
	Transform rootFoot;
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
	///// //////////////////////////////////////////////////////// 
	private StateMachine<States> pickerStateMachine;//
	public enum States
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
	///// //////////////////////////////////////////////////////// 
	/// /////pick state //////////////////////////////////////////////////////// 
	const float FOOT_INIT_ANGLE = 20f;//20f;
	const float FOOT_FINAL_ANGLE = 30f;//70f;
	float acclumlated_angle = 0f;
	const float angular_speed=30f;
	Vector3 releaseDirection = Vector3.zero;
	///// //////////////////////////////////////////////////////// 
	void Awake(){
		this.initConfig ();
	}

	void FixedUpdate(){
		
	}
	void OnDestroy(){
		//Destroy (GetComponent (typeof(StateMachineRunner)));
	}
	public void Seek_Enter(){
//		Animator anim = this.gameObject.transform.FindChild ("claw").GetComponent<Animator>();
//		anim.Play ("pick");
	}
	public void Seek_FixedUpdate()
	{
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
		this.acclumlated_angle = 0f;
		yield return new WaitForSeconds(1);
		Animator anim = this.claw.GetComponent<Animator>();
		anim.Play ("pick_1");
	}


	public void Pick_FixedUpdate(){
		
		if (this.acclumlated_angle >= Picker.FOOT_FINAL_ANGLE) {
			this.validFence ();
			Animator anim = this.claw.GetComponent<Animator>();
			AnimatorStateInfo info = anim.GetCurrentAnimatorStateInfo(0);
			// 判断动画是否播放完成
			if (anim.GetInteger("repeat_once")>1&&info.IsName("pick_3")&&info.normalizedTime >= 1.0f){
				this.pickerStateMachine.ChangeState (States.Up);
			}
			return;
		}
		float delta = Picker.angular_speed * Time.fixedDeltaTime;
		//this.rotateAround(-delta);
		this.acclumlated_angle += delta;
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
		for (int i = 0; i < this.legs; i++) {
			this.foots [i].gameObject.SetActive (false);
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
		GameMediator mediator = UnityFacade.GetInstance ().RetrieveMediator (GameMediator.NAME) as GameMediator;
		mediator.gameOver ();
	}
	//初始化所有object
	public void initConfig(){
		this.pool = PoolManager.Pools["WaWaJi"];
		this.gameObject.transform.localPosition = Picker.initPos;
		this.claw = this.gameObject.transform.FindChild ("claw");
		this.rootFoot = this.gameObject.transform.Find ("foot");
		this.fill = this.gameObject.transform.parent.Find ("fill").gameObject;
		this.cover = this.gameObject.transform.parent.Find ("cover").gameObject;
		this.fill.SetActive (true);
		this.cover.SetActive (true);

		//初始化底部fence
		initFence ();
		//生成每个抓脚的根节点,初始化所有抓脚
		foots = new Transform[this.legs];
		for (int i = 0; i < this.legs; i++) {
			GameObject prefab = (GameObject)Resources.Load ("Prefabs/foot");
			foots[i]= this.pool.Spawn(prefab, Vector3.zero, Quaternion.identity,this.rootFoot);
			foots [i].localPosition = Vector3.zero;
			foots [i].gameObject.SetActive (false);
			Footer footer = foots [i].gameObject.AddComponent<Footer> ();
			footer.initRotate = new Vector3(270,i*360/this.legs,0);
			foots [i].gameObject.SetActive (true);

			removeMeshRender (this.foots [i].gameObject);
		}

		this.rotateAround (Picker.FOOT_INIT_ANGLE);
		this.bindToModelFoot ();
		for (int i = 0; i < this.legs; i++) {
			foots [i].gameObject.SetActive (false);
		}
		//Initialize State Machine Engine		
		pickerStateMachine = StateMachine<States>.Initialize(this, States.Still);

	}

	public void bindToModelFoot(){
		if (this.legs == 3) {
			this.foots [0].parent = this.claw.transform.FindChild ("polySurface42");
			this.foots [1].parent = this.claw.transform.FindChild ("polySurface58");
			this.foots [2].parent = this.claw.transform.FindChild ("polySurface56");
		}
	}
	//爪脚绕点选择
	void rotateAround(float delta){
		for(int i=0;i<this.legs;i++){
			double angle = Math.PI / 180 * (270 - 360 / this.legs * i + 90);
			Vector3 center = this.foots [i].position;//+new Vector3(0,radius,0);
			this.foots [i].RotateAround (
				center, 
				new Vector3 ((float)Math.Cos (angle), 0, (float)Math.Sin (angle)),
				delta);
		}
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
	/// Invalids the fence.
	/// </summary>
	void invalidFence(){
		this.hexagon_cell.gameObject.SetActive (false);
		this.triangle_cell.gameObject.SetActive (false);
		this.slot.gameObject.SetActive (false);
	}
	/// <summary>
	/// Valids the fence.
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
	/// ////////////////////////////////////////////////////////////////////////////
	/// 外部调用
	/// ////////////////////////////////////////////////////////////////////////////
	public void startSeeking(Vector3 direction){
		Debug.Log (this.pickerStateMachine.State);
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

	public bool isPickerRunning(){
		if (this.pickerStateMachine.State == States.Still) {
			return true;
		}
		return false;
	}
	/// ////////////////////////////////////////////////////////////////////////////
	/// ////////////////////////////////////////////////////////////////////////////
	/// ////////////////////////////////////////////////////////////////////////////

}  
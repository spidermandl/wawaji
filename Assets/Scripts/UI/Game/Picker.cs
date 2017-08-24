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
	Transform rootFoot;
	///// 夹球腿相关属性 ///////////////////////////////////////////
	Transform[] foots;
	public float radius = 0.5f;//曲面距离内心半径
	public float angle = 135;//曲面拉弧角度
	public float divide = 15;//曲面个数
	public int legs = 3;//抓脚个数
	static Vector3 initFootPos = new Vector3 (0, -1.2f, 0);//
	///// ////////////////////////////////////////////////////////
	///// //////////////////////////////////////////////////////// 
	Transform triangle_cell;
	Transform hexagon_cell;
	///// //////////////////////////////////////////////////////// 
	GameObject fill;
	GameObject cover;
	///// //////////////////////////////////////////////////////// 
	private StateMachine<States> pickerStateMachine;//
	public enum States
	{
		Still,// 静止
		Seek,// 寻找落点
		Down,// 下落
		Pick,// 抓取球的过程
		Up,// 上升过程
		Release,// 移动至释放点
	}
	/////seek state //////////////////////////////////////////////////////// 
	Vector3 moveDiretion = Vector3.zero;
	///// //////////////////////////////////////////////////////// 
	/// /////pick state //////////////////////////////////////////////////////// 
	const float FOOT_INIT_ANGLE = 20f;
	const float FOOT_FINAL_ANGLE = 70f;
	float acclumlated_angle = 0f;
	const float angular_speed=30f;
	Vector3 releaseDirection = Vector3.zero;
	///// //////////////////////////////////////////////////////// 
	void Awake(){
		this.initConfig ();
		//remove mesh renderer
		removeMeshRender(this.triangle_cell.gameObject);
		removeMeshRender (this.hexagon_cell.gameObject);
		for(int i = 0; i < this.legs; i++){
			removeMeshRender (this.foots [i].gameObject);
		}
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

	public void Down_FixedUpdate(){
		//移动速度1
		this.gameObject.transform.Translate (new Vector3 (0,-Time.fixedDeltaTime,0));
		if (this.gameObject.transform.localPosition.y <= Picker.ground_Y) {
			this.pickerStateMachine.ChangeState (States.Pick);
		}
	}

	public IEnumerator Pick_Enter(){
		this.rootFoot.gameObject.SetActive (true);
		this.rotateAround (Picker.FOOT_INIT_ANGLE);
		this.acclumlated_angle = 0f;
		yield return new WaitForSeconds(1);
		Animator anim = this.gameObject.transform.FindChild ("claw").GetComponent<Animator>();
		anim.Play ("pick");
	}


	public void Pick_FixedUpdate(){
//		for(int i=0;i<this.legs;i++){
//			double angle = Math.PI / 180 * (270 - 360 / this.legs * i + 90);
//			Vector3 center = this.foots [i].position+new Vector3(0,radius,0);
//			this.foots [i].RotateAround (
//				center, 
//				new Vector3 ((float)Math.Cos (angle), 0, (float)Math.Sin (angle)),
//				60f);
		//		}
		if (this.acclumlated_angle >= Picker.FOOT_FINAL_ANGLE) {
			this.hexagon_cell.gameObject.SetActive (true);
			Animator anim = this.gameObject.transform.FindChild ("claw").GetComponent<Animator>();
			AnimatorStateInfo info = anim.GetCurrentAnimatorStateInfo(0);
			// 判断动画是否播放完成
			if (info.normalizedTime >= 1.0f){
				this.pickerStateMachine.ChangeState (States.Up);
			}
			return;
		}
		float delta = Picker.angular_speed * Time.fixedDeltaTime;
		this.rotateAround(-delta);
		this.acclumlated_angle += delta;
		//Debug.Log(this.acclumlated_angle);
	}

	public void Up_FixedUpdate(){
		//移动速度1
		this.gameObject.transform.Translate (new Vector3 (0,Time.fixedDeltaTime,0));
		if (this.gameObject.transform.localPosition.y >= Picker.initPos.y) {
			this.pickerStateMachine.ChangeState (States.Release);
		}
	}
	public void Release_Enter(){
		Vector3 dir = Picker.dropPos - this.gameObject.transform.localPosition;
		float dis = (float)Math.Sqrt (dir.x * dir.x + dir.y * dir.y + dir.z * dir.z);
		this.releaseDirection = new Vector3 (dir.x/dis,dir.y/dis,dir.z/dis);
	}
	public void Release_FixedUpdate(){
		this.gameObject.transform.Translate (
			0.4f*Time.fixedDeltaTime*this.releaseDirection.x,
			0.4f*Time.fixedDeltaTime*this.releaseDirection.y,
			0.4f*Time.fixedDeltaTime*this.releaseDirection.z);
		if (Vector3.Distance(this.gameObject.transform.localPosition,Picker.dropPos)<=0.01) {
			this.pickerStateMachine.ChangeState (States.Still);
			this.hexagon_cell.gameObject.SetActive (false);
			this.fill.SetActive (false);
			this.cover.SetActive (false);
			this.rootFoot.gameObject.SetActive (false);
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
		this.rootFoot = this.gameObject.transform.Find ("foot");
		this.hexagon_cell = this.gameObject.transform.Find ("hexagon_cell");
		this.triangle_cell = this.gameObject.transform.Find ("triangle_cell");
		this.hexagon_cell.gameObject.SetActive (false);
		this.triangle_cell.gameObject.SetActive (false);
		this.fill = this.gameObject.transform.parent.Find ("fill").gameObject;
		this.cover = this.gameObject.transform.parent.Find ("cover").gameObject;
		this.fill.SetActive (true);
		this.cover.SetActive (true);

		//生成每个抓脚的根节点
		foots = new Transform[this.legs];
		for (int i = 0; i < this.legs; i++) {
			GameObject prefab = (GameObject)Resources.Load ("Prefabs/foot");
			foots[i]= this.pool.Spawn(prefab, Vector3.zero, Quaternion.identity,this.rootFoot);
			foots [i].localPosition = Vector3.zero;
		}

		initFoot ();

		this.rootFoot.localPosition =  Picker.initFootPos;
		this.rootFoot.gameObject.SetActive (false);

		//Initialize State Machine Engine		
		pickerStateMachine = StateMachine<States>.Initialize(this, States.Still);

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
	/// 初始化所有抓脚
	/// </summary>
	void initFoot() {  
		for (int i = 0; i < this.legs; i++) {
			this.createFoot (this.foots [i]);
			this.foots [i].Rotate (270,i*360/this.legs,0);
		}

	}  
	/// <summary>
	/// 生成一个抓脚
	/// </summary>
	/// <param name="parent">Parent.</param>
	void createFoot(Transform parent){
		float ang_unit = angle / divide;
		for (int i = 0; i <= divide; i++) {
			GameObject prefab = (GameObject)Resources.Load ("Prefabs/foot_piece");
			Transform quad = this.pool.Spawn(prefab, Vector3.zero, Quaternion.identity,parent);
			quad.parent = parent;
			quad.localPosition = Vector3.zero;
			//quad.transform.localRotation = Quaternion.Euler (270,0,0);
			//设置面片大小
			//quad.localScale = new Vector3 (radius*i/divide, 2*radius * Mathf.Tan (2*Mathf.PI/360 * ang_unit / 2), 1);
			quad.localScale = new Vector3 (radius, 2*radius * Mathf.Tan (2*Mathf.PI/360 * ang_unit / 2), 1);
			//先移动
			quad.Translate (0,radius * Mathf.Sin (2*Mathf.PI/360 *ang_unit * i),radius * Mathf.Cos (2*Mathf.PI/360 *ang_unit * i),Space.Self);
			//后旋转
			quad.Rotate (-ang_unit*i, 0, 0);
		}
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
	/// ////////////////////////////////////////////////////////////////////////////
	/// ////////////////////////////////////////////////////////////////////////////
	/// ////////////////////////////////////////////////////////////////////////////

}  
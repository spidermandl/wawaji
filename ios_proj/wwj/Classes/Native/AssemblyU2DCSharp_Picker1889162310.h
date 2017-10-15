#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// PathologicalGames.SpawnPool
struct SpawnPool_t2419717525;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform[]
struct TransformU5BU5D_t3764228911;
// MonsterLove.StateMachine.StateMachine`1<Picker/States>
struct StateMachine_1_t3720007309;
// Picker/CheckDropBall
struct CheckDropBall_t64179887;
// Picker/CheckResultBall
struct CheckResultBall_t1920898355;
// Picker/CheckRemainingBall
struct CheckRemainingBall_t967539078;
// System.Collections.Generic.List`1<Picker/BallBundle>
struct List_1_t4142016994;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Picker
struct  Picker_t1889162310  : public MonoBehaviour_t1158329972
{
public:
	// PathologicalGames.SpawnPool Picker::pool
	SpawnPool_t2419717525 * ___pool_2;
	// UnityEngine.Transform Picker::handler
	Transform_t3275118058 * ___handler_8;
	// UnityEngine.Transform Picker::joint
	Transform_t3275118058 * ___joint_9;
	// UnityEngine.Transform Picker::physics
	Transform_t3275118058 * ___physics_10;
	// UnityEngine.Transform Picker::claw
	Transform_t3275118058 * ___claw_11;
	// UnityEngine.Transform Picker::rootFoot
	Transform_t3275118058 * ___rootFoot_12;
	// UnityEngine.GameObject Picker::pickRange
	GameObject_t1756533147 * ___pickRange_13;
	// UnityEngine.Transform[] Picker::foots
	TransformU5BU5D_t3764228911* ___foots_14;
	// System.Int32 Picker::legs
	int32_t ___legs_15;
	// UnityEngine.GameObject Picker::fence
	GameObject_t1756533147 * ___fence_16;
	// UnityEngine.Transform Picker::ball_container
	Transform_t3275118058 * ___ball_container_17;
	// MonsterLove.StateMachine.StateMachine`1<Picker/States> Picker::pickerStateMachine
	StateMachine_1_t3720007309 * ___pickerStateMachine_18;
	// UnityEngine.Vector3 Picker::moveDiretion
	Vector3_t2243707580  ___moveDiretion_19;
	// UnityEngine.Vector3 Picker::releaseDirection
	Vector3_t2243707580  ___releaseDirection_23;
	// Picker/CheckDropBall Picker::_checkDropBall
	CheckDropBall_t64179887 * ____checkDropBall_24;
	// Picker/CheckResultBall Picker::_checkResultBall
	CheckResultBall_t1920898355 * ____checkResultBall_25;
	// Picker/CheckRemainingBall Picker::_checkRemainingBall
	CheckRemainingBall_t967539078 * ____checkRemainingBall_26;
	// UnityEngine.Transform Picker::ball_objs
	Transform_t3275118058 * ___ball_objs_27;
	// System.Collections.Generic.List`1<Picker/BallBundle> Picker::picked_balls
	List_1_t4142016994 * ___picked_balls_28;

public:
	inline static int32_t get_offset_of_pool_2() { return static_cast<int32_t>(offsetof(Picker_t1889162310, ___pool_2)); }
	inline SpawnPool_t2419717525 * get_pool_2() const { return ___pool_2; }
	inline SpawnPool_t2419717525 ** get_address_of_pool_2() { return &___pool_2; }
	inline void set_pool_2(SpawnPool_t2419717525 * value)
	{
		___pool_2 = value;
		Il2CppCodeGenWriteBarrier(&___pool_2, value);
	}

	inline static int32_t get_offset_of_handler_8() { return static_cast<int32_t>(offsetof(Picker_t1889162310, ___handler_8)); }
	inline Transform_t3275118058 * get_handler_8() const { return ___handler_8; }
	inline Transform_t3275118058 ** get_address_of_handler_8() { return &___handler_8; }
	inline void set_handler_8(Transform_t3275118058 * value)
	{
		___handler_8 = value;
		Il2CppCodeGenWriteBarrier(&___handler_8, value);
	}

	inline static int32_t get_offset_of_joint_9() { return static_cast<int32_t>(offsetof(Picker_t1889162310, ___joint_9)); }
	inline Transform_t3275118058 * get_joint_9() const { return ___joint_9; }
	inline Transform_t3275118058 ** get_address_of_joint_9() { return &___joint_9; }
	inline void set_joint_9(Transform_t3275118058 * value)
	{
		___joint_9 = value;
		Il2CppCodeGenWriteBarrier(&___joint_9, value);
	}

	inline static int32_t get_offset_of_physics_10() { return static_cast<int32_t>(offsetof(Picker_t1889162310, ___physics_10)); }
	inline Transform_t3275118058 * get_physics_10() const { return ___physics_10; }
	inline Transform_t3275118058 ** get_address_of_physics_10() { return &___physics_10; }
	inline void set_physics_10(Transform_t3275118058 * value)
	{
		___physics_10 = value;
		Il2CppCodeGenWriteBarrier(&___physics_10, value);
	}

	inline static int32_t get_offset_of_claw_11() { return static_cast<int32_t>(offsetof(Picker_t1889162310, ___claw_11)); }
	inline Transform_t3275118058 * get_claw_11() const { return ___claw_11; }
	inline Transform_t3275118058 ** get_address_of_claw_11() { return &___claw_11; }
	inline void set_claw_11(Transform_t3275118058 * value)
	{
		___claw_11 = value;
		Il2CppCodeGenWriteBarrier(&___claw_11, value);
	}

	inline static int32_t get_offset_of_rootFoot_12() { return static_cast<int32_t>(offsetof(Picker_t1889162310, ___rootFoot_12)); }
	inline Transform_t3275118058 * get_rootFoot_12() const { return ___rootFoot_12; }
	inline Transform_t3275118058 ** get_address_of_rootFoot_12() { return &___rootFoot_12; }
	inline void set_rootFoot_12(Transform_t3275118058 * value)
	{
		___rootFoot_12 = value;
		Il2CppCodeGenWriteBarrier(&___rootFoot_12, value);
	}

	inline static int32_t get_offset_of_pickRange_13() { return static_cast<int32_t>(offsetof(Picker_t1889162310, ___pickRange_13)); }
	inline GameObject_t1756533147 * get_pickRange_13() const { return ___pickRange_13; }
	inline GameObject_t1756533147 ** get_address_of_pickRange_13() { return &___pickRange_13; }
	inline void set_pickRange_13(GameObject_t1756533147 * value)
	{
		___pickRange_13 = value;
		Il2CppCodeGenWriteBarrier(&___pickRange_13, value);
	}

	inline static int32_t get_offset_of_foots_14() { return static_cast<int32_t>(offsetof(Picker_t1889162310, ___foots_14)); }
	inline TransformU5BU5D_t3764228911* get_foots_14() const { return ___foots_14; }
	inline TransformU5BU5D_t3764228911** get_address_of_foots_14() { return &___foots_14; }
	inline void set_foots_14(TransformU5BU5D_t3764228911* value)
	{
		___foots_14 = value;
		Il2CppCodeGenWriteBarrier(&___foots_14, value);
	}

	inline static int32_t get_offset_of_legs_15() { return static_cast<int32_t>(offsetof(Picker_t1889162310, ___legs_15)); }
	inline int32_t get_legs_15() const { return ___legs_15; }
	inline int32_t* get_address_of_legs_15() { return &___legs_15; }
	inline void set_legs_15(int32_t value)
	{
		___legs_15 = value;
	}

	inline static int32_t get_offset_of_fence_16() { return static_cast<int32_t>(offsetof(Picker_t1889162310, ___fence_16)); }
	inline GameObject_t1756533147 * get_fence_16() const { return ___fence_16; }
	inline GameObject_t1756533147 ** get_address_of_fence_16() { return &___fence_16; }
	inline void set_fence_16(GameObject_t1756533147 * value)
	{
		___fence_16 = value;
		Il2CppCodeGenWriteBarrier(&___fence_16, value);
	}

	inline static int32_t get_offset_of_ball_container_17() { return static_cast<int32_t>(offsetof(Picker_t1889162310, ___ball_container_17)); }
	inline Transform_t3275118058 * get_ball_container_17() const { return ___ball_container_17; }
	inline Transform_t3275118058 ** get_address_of_ball_container_17() { return &___ball_container_17; }
	inline void set_ball_container_17(Transform_t3275118058 * value)
	{
		___ball_container_17 = value;
		Il2CppCodeGenWriteBarrier(&___ball_container_17, value);
	}

	inline static int32_t get_offset_of_pickerStateMachine_18() { return static_cast<int32_t>(offsetof(Picker_t1889162310, ___pickerStateMachine_18)); }
	inline StateMachine_1_t3720007309 * get_pickerStateMachine_18() const { return ___pickerStateMachine_18; }
	inline StateMachine_1_t3720007309 ** get_address_of_pickerStateMachine_18() { return &___pickerStateMachine_18; }
	inline void set_pickerStateMachine_18(StateMachine_1_t3720007309 * value)
	{
		___pickerStateMachine_18 = value;
		Il2CppCodeGenWriteBarrier(&___pickerStateMachine_18, value);
	}

	inline static int32_t get_offset_of_moveDiretion_19() { return static_cast<int32_t>(offsetof(Picker_t1889162310, ___moveDiretion_19)); }
	inline Vector3_t2243707580  get_moveDiretion_19() const { return ___moveDiretion_19; }
	inline Vector3_t2243707580 * get_address_of_moveDiretion_19() { return &___moveDiretion_19; }
	inline void set_moveDiretion_19(Vector3_t2243707580  value)
	{
		___moveDiretion_19 = value;
	}

	inline static int32_t get_offset_of_releaseDirection_23() { return static_cast<int32_t>(offsetof(Picker_t1889162310, ___releaseDirection_23)); }
	inline Vector3_t2243707580  get_releaseDirection_23() const { return ___releaseDirection_23; }
	inline Vector3_t2243707580 * get_address_of_releaseDirection_23() { return &___releaseDirection_23; }
	inline void set_releaseDirection_23(Vector3_t2243707580  value)
	{
		___releaseDirection_23 = value;
	}

	inline static int32_t get_offset_of__checkDropBall_24() { return static_cast<int32_t>(offsetof(Picker_t1889162310, ____checkDropBall_24)); }
	inline CheckDropBall_t64179887 * get__checkDropBall_24() const { return ____checkDropBall_24; }
	inline CheckDropBall_t64179887 ** get_address_of__checkDropBall_24() { return &____checkDropBall_24; }
	inline void set__checkDropBall_24(CheckDropBall_t64179887 * value)
	{
		____checkDropBall_24 = value;
		Il2CppCodeGenWriteBarrier(&____checkDropBall_24, value);
	}

	inline static int32_t get_offset_of__checkResultBall_25() { return static_cast<int32_t>(offsetof(Picker_t1889162310, ____checkResultBall_25)); }
	inline CheckResultBall_t1920898355 * get__checkResultBall_25() const { return ____checkResultBall_25; }
	inline CheckResultBall_t1920898355 ** get_address_of__checkResultBall_25() { return &____checkResultBall_25; }
	inline void set__checkResultBall_25(CheckResultBall_t1920898355 * value)
	{
		____checkResultBall_25 = value;
		Il2CppCodeGenWriteBarrier(&____checkResultBall_25, value);
	}

	inline static int32_t get_offset_of__checkRemainingBall_26() { return static_cast<int32_t>(offsetof(Picker_t1889162310, ____checkRemainingBall_26)); }
	inline CheckRemainingBall_t967539078 * get__checkRemainingBall_26() const { return ____checkRemainingBall_26; }
	inline CheckRemainingBall_t967539078 ** get_address_of__checkRemainingBall_26() { return &____checkRemainingBall_26; }
	inline void set__checkRemainingBall_26(CheckRemainingBall_t967539078 * value)
	{
		____checkRemainingBall_26 = value;
		Il2CppCodeGenWriteBarrier(&____checkRemainingBall_26, value);
	}

	inline static int32_t get_offset_of_ball_objs_27() { return static_cast<int32_t>(offsetof(Picker_t1889162310, ___ball_objs_27)); }
	inline Transform_t3275118058 * get_ball_objs_27() const { return ___ball_objs_27; }
	inline Transform_t3275118058 ** get_address_of_ball_objs_27() { return &___ball_objs_27; }
	inline void set_ball_objs_27(Transform_t3275118058 * value)
	{
		___ball_objs_27 = value;
		Il2CppCodeGenWriteBarrier(&___ball_objs_27, value);
	}

	inline static int32_t get_offset_of_picked_balls_28() { return static_cast<int32_t>(offsetof(Picker_t1889162310, ___picked_balls_28)); }
	inline List_1_t4142016994 * get_picked_balls_28() const { return ___picked_balls_28; }
	inline List_1_t4142016994 ** get_address_of_picked_balls_28() { return &___picked_balls_28; }
	inline void set_picked_balls_28(List_1_t4142016994 * value)
	{
		___picked_balls_28 = value;
		Il2CppCodeGenWriteBarrier(&___picked_balls_28, value);
	}
};

struct Picker_t1889162310_StaticFields
{
public:
	// UnityEngine.Vector3 Picker::initPos
	Vector3_t2243707580  ___initPos_3;
	// UnityEngine.Vector3 Picker::clawPos
	Vector3_t2243707580  ___clawPos_4;
	// UnityEngine.Vector3 Picker::jointPos
	Vector3_t2243707580  ___jointPos_5;
	// System.Single Picker::ground_Y
	float ___ground_Y_6;
	// UnityEngine.Vector3 Picker::dropPos
	Vector3_t2243707580  ___dropPos_7;

public:
	inline static int32_t get_offset_of_initPos_3() { return static_cast<int32_t>(offsetof(Picker_t1889162310_StaticFields, ___initPos_3)); }
	inline Vector3_t2243707580  get_initPos_3() const { return ___initPos_3; }
	inline Vector3_t2243707580 * get_address_of_initPos_3() { return &___initPos_3; }
	inline void set_initPos_3(Vector3_t2243707580  value)
	{
		___initPos_3 = value;
	}

	inline static int32_t get_offset_of_clawPos_4() { return static_cast<int32_t>(offsetof(Picker_t1889162310_StaticFields, ___clawPos_4)); }
	inline Vector3_t2243707580  get_clawPos_4() const { return ___clawPos_4; }
	inline Vector3_t2243707580 * get_address_of_clawPos_4() { return &___clawPos_4; }
	inline void set_clawPos_4(Vector3_t2243707580  value)
	{
		___clawPos_4 = value;
	}

	inline static int32_t get_offset_of_jointPos_5() { return static_cast<int32_t>(offsetof(Picker_t1889162310_StaticFields, ___jointPos_5)); }
	inline Vector3_t2243707580  get_jointPos_5() const { return ___jointPos_5; }
	inline Vector3_t2243707580 * get_address_of_jointPos_5() { return &___jointPos_5; }
	inline void set_jointPos_5(Vector3_t2243707580  value)
	{
		___jointPos_5 = value;
	}

	inline static int32_t get_offset_of_ground_Y_6() { return static_cast<int32_t>(offsetof(Picker_t1889162310_StaticFields, ___ground_Y_6)); }
	inline float get_ground_Y_6() const { return ___ground_Y_6; }
	inline float* get_address_of_ground_Y_6() { return &___ground_Y_6; }
	inline void set_ground_Y_6(float value)
	{
		___ground_Y_6 = value;
	}

	inline static int32_t get_offset_of_dropPos_7() { return static_cast<int32_t>(offsetof(Picker_t1889162310_StaticFields, ___dropPos_7)); }
	inline Vector3_t2243707580  get_dropPos_7() const { return ___dropPos_7; }
	inline Vector3_t2243707580 * get_address_of_dropPos_7() { return &___dropPos_7; }
	inline void set_dropPos_7(Vector3_t2243707580  value)
	{
		___dropPos_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

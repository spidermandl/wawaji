#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Object
struct Il2CppObject;
// System.Action
struct Action_t3226471752;
// System.Func`1<System.Collections.IEnumerator>
struct Func_1_t3420419431;
// System.Action`1<UnityEngine.Collision>
struct Action_1_t2678645790;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MonsterLove.StateMachine.StateMapping
struct  StateMapping_t480561525  : public Il2CppObject
{
public:
	// System.Object MonsterLove.StateMachine.StateMapping::state
	Il2CppObject * ___state_0;
	// System.Boolean MonsterLove.StateMachine.StateMapping::hasEnterRoutine
	bool ___hasEnterRoutine_1;
	// System.Action MonsterLove.StateMachine.StateMapping::EnterCall
	Action_t3226471752 * ___EnterCall_2;
	// System.Func`1<System.Collections.IEnumerator> MonsterLove.StateMachine.StateMapping::EnterRoutine
	Func_1_t3420419431 * ___EnterRoutine_3;
	// System.Boolean MonsterLove.StateMachine.StateMapping::hasExitRoutine
	bool ___hasExitRoutine_4;
	// System.Action MonsterLove.StateMachine.StateMapping::ExitCall
	Action_t3226471752 * ___ExitCall_5;
	// System.Func`1<System.Collections.IEnumerator> MonsterLove.StateMachine.StateMapping::ExitRoutine
	Func_1_t3420419431 * ___ExitRoutine_6;
	// System.Action MonsterLove.StateMachine.StateMapping::Finally
	Action_t3226471752 * ___Finally_7;
	// System.Action MonsterLove.StateMachine.StateMapping::Update
	Action_t3226471752 * ___Update_8;
	// System.Action MonsterLove.StateMachine.StateMapping::LateUpdate
	Action_t3226471752 * ___LateUpdate_9;
	// System.Action MonsterLove.StateMachine.StateMapping::FixedUpdate
	Action_t3226471752 * ___FixedUpdate_10;
	// System.Action`1<UnityEngine.Collision> MonsterLove.StateMachine.StateMapping::OnCollisionEnter
	Action_1_t2678645790 * ___OnCollisionEnter_11;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(StateMapping_t480561525, ___state_0)); }
	inline Il2CppObject * get_state_0() const { return ___state_0; }
	inline Il2CppObject ** get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(Il2CppObject * value)
	{
		___state_0 = value;
		Il2CppCodeGenWriteBarrier(&___state_0, value);
	}

	inline static int32_t get_offset_of_hasEnterRoutine_1() { return static_cast<int32_t>(offsetof(StateMapping_t480561525, ___hasEnterRoutine_1)); }
	inline bool get_hasEnterRoutine_1() const { return ___hasEnterRoutine_1; }
	inline bool* get_address_of_hasEnterRoutine_1() { return &___hasEnterRoutine_1; }
	inline void set_hasEnterRoutine_1(bool value)
	{
		___hasEnterRoutine_1 = value;
	}

	inline static int32_t get_offset_of_EnterCall_2() { return static_cast<int32_t>(offsetof(StateMapping_t480561525, ___EnterCall_2)); }
	inline Action_t3226471752 * get_EnterCall_2() const { return ___EnterCall_2; }
	inline Action_t3226471752 ** get_address_of_EnterCall_2() { return &___EnterCall_2; }
	inline void set_EnterCall_2(Action_t3226471752 * value)
	{
		___EnterCall_2 = value;
		Il2CppCodeGenWriteBarrier(&___EnterCall_2, value);
	}

	inline static int32_t get_offset_of_EnterRoutine_3() { return static_cast<int32_t>(offsetof(StateMapping_t480561525, ___EnterRoutine_3)); }
	inline Func_1_t3420419431 * get_EnterRoutine_3() const { return ___EnterRoutine_3; }
	inline Func_1_t3420419431 ** get_address_of_EnterRoutine_3() { return &___EnterRoutine_3; }
	inline void set_EnterRoutine_3(Func_1_t3420419431 * value)
	{
		___EnterRoutine_3 = value;
		Il2CppCodeGenWriteBarrier(&___EnterRoutine_3, value);
	}

	inline static int32_t get_offset_of_hasExitRoutine_4() { return static_cast<int32_t>(offsetof(StateMapping_t480561525, ___hasExitRoutine_4)); }
	inline bool get_hasExitRoutine_4() const { return ___hasExitRoutine_4; }
	inline bool* get_address_of_hasExitRoutine_4() { return &___hasExitRoutine_4; }
	inline void set_hasExitRoutine_4(bool value)
	{
		___hasExitRoutine_4 = value;
	}

	inline static int32_t get_offset_of_ExitCall_5() { return static_cast<int32_t>(offsetof(StateMapping_t480561525, ___ExitCall_5)); }
	inline Action_t3226471752 * get_ExitCall_5() const { return ___ExitCall_5; }
	inline Action_t3226471752 ** get_address_of_ExitCall_5() { return &___ExitCall_5; }
	inline void set_ExitCall_5(Action_t3226471752 * value)
	{
		___ExitCall_5 = value;
		Il2CppCodeGenWriteBarrier(&___ExitCall_5, value);
	}

	inline static int32_t get_offset_of_ExitRoutine_6() { return static_cast<int32_t>(offsetof(StateMapping_t480561525, ___ExitRoutine_6)); }
	inline Func_1_t3420419431 * get_ExitRoutine_6() const { return ___ExitRoutine_6; }
	inline Func_1_t3420419431 ** get_address_of_ExitRoutine_6() { return &___ExitRoutine_6; }
	inline void set_ExitRoutine_6(Func_1_t3420419431 * value)
	{
		___ExitRoutine_6 = value;
		Il2CppCodeGenWriteBarrier(&___ExitRoutine_6, value);
	}

	inline static int32_t get_offset_of_Finally_7() { return static_cast<int32_t>(offsetof(StateMapping_t480561525, ___Finally_7)); }
	inline Action_t3226471752 * get_Finally_7() const { return ___Finally_7; }
	inline Action_t3226471752 ** get_address_of_Finally_7() { return &___Finally_7; }
	inline void set_Finally_7(Action_t3226471752 * value)
	{
		___Finally_7 = value;
		Il2CppCodeGenWriteBarrier(&___Finally_7, value);
	}

	inline static int32_t get_offset_of_Update_8() { return static_cast<int32_t>(offsetof(StateMapping_t480561525, ___Update_8)); }
	inline Action_t3226471752 * get_Update_8() const { return ___Update_8; }
	inline Action_t3226471752 ** get_address_of_Update_8() { return &___Update_8; }
	inline void set_Update_8(Action_t3226471752 * value)
	{
		___Update_8 = value;
		Il2CppCodeGenWriteBarrier(&___Update_8, value);
	}

	inline static int32_t get_offset_of_LateUpdate_9() { return static_cast<int32_t>(offsetof(StateMapping_t480561525, ___LateUpdate_9)); }
	inline Action_t3226471752 * get_LateUpdate_9() const { return ___LateUpdate_9; }
	inline Action_t3226471752 ** get_address_of_LateUpdate_9() { return &___LateUpdate_9; }
	inline void set_LateUpdate_9(Action_t3226471752 * value)
	{
		___LateUpdate_9 = value;
		Il2CppCodeGenWriteBarrier(&___LateUpdate_9, value);
	}

	inline static int32_t get_offset_of_FixedUpdate_10() { return static_cast<int32_t>(offsetof(StateMapping_t480561525, ___FixedUpdate_10)); }
	inline Action_t3226471752 * get_FixedUpdate_10() const { return ___FixedUpdate_10; }
	inline Action_t3226471752 ** get_address_of_FixedUpdate_10() { return &___FixedUpdate_10; }
	inline void set_FixedUpdate_10(Action_t3226471752 * value)
	{
		___FixedUpdate_10 = value;
		Il2CppCodeGenWriteBarrier(&___FixedUpdate_10, value);
	}

	inline static int32_t get_offset_of_OnCollisionEnter_11() { return static_cast<int32_t>(offsetof(StateMapping_t480561525, ___OnCollisionEnter_11)); }
	inline Action_1_t2678645790 * get_OnCollisionEnter_11() const { return ___OnCollisionEnter_11; }
	inline Action_1_t2678645790 ** get_address_of_OnCollisionEnter_11() { return &___OnCollisionEnter_11; }
	inline void set_OnCollisionEnter_11(Action_1_t2678645790 * value)
	{
		___OnCollisionEnter_11 = value;
		Il2CppCodeGenWriteBarrier(&___OnCollisionEnter_11, value);
	}
};

struct StateMapping_t480561525_StaticFields
{
public:
	// System.Action MonsterLove.StateMachine.StateMapping::<>f__mg$cache0
	Action_t3226471752 * ___U3CU3Ef__mgU24cache0_12;
	// System.Func`1<System.Collections.IEnumerator> MonsterLove.StateMachine.StateMapping::<>f__mg$cache1
	Func_1_t3420419431 * ___U3CU3Ef__mgU24cache1_13;
	// System.Action MonsterLove.StateMachine.StateMapping::<>f__mg$cache2
	Action_t3226471752 * ___U3CU3Ef__mgU24cache2_14;
	// System.Func`1<System.Collections.IEnumerator> MonsterLove.StateMachine.StateMapping::<>f__mg$cache3
	Func_1_t3420419431 * ___U3CU3Ef__mgU24cache3_15;
	// System.Action MonsterLove.StateMachine.StateMapping::<>f__mg$cache4
	Action_t3226471752 * ___U3CU3Ef__mgU24cache4_16;
	// System.Action MonsterLove.StateMachine.StateMapping::<>f__mg$cache5
	Action_t3226471752 * ___U3CU3Ef__mgU24cache5_17;
	// System.Action MonsterLove.StateMachine.StateMapping::<>f__mg$cache6
	Action_t3226471752 * ___U3CU3Ef__mgU24cache6_18;
	// System.Action MonsterLove.StateMachine.StateMapping::<>f__mg$cache7
	Action_t3226471752 * ___U3CU3Ef__mgU24cache7_19;
	// System.Action`1<UnityEngine.Collision> MonsterLove.StateMachine.StateMapping::<>f__mg$cache8
	Action_1_t2678645790 * ___U3CU3Ef__mgU24cache8_20;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_12() { return static_cast<int32_t>(offsetof(StateMapping_t480561525_StaticFields, ___U3CU3Ef__mgU24cache0_12)); }
	inline Action_t3226471752 * get_U3CU3Ef__mgU24cache0_12() const { return ___U3CU3Ef__mgU24cache0_12; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__mgU24cache0_12() { return &___U3CU3Ef__mgU24cache0_12; }
	inline void set_U3CU3Ef__mgU24cache0_12(Action_t3226471752 * value)
	{
		___U3CU3Ef__mgU24cache0_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_12, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_13() { return static_cast<int32_t>(offsetof(StateMapping_t480561525_StaticFields, ___U3CU3Ef__mgU24cache1_13)); }
	inline Func_1_t3420419431 * get_U3CU3Ef__mgU24cache1_13() const { return ___U3CU3Ef__mgU24cache1_13; }
	inline Func_1_t3420419431 ** get_address_of_U3CU3Ef__mgU24cache1_13() { return &___U3CU3Ef__mgU24cache1_13; }
	inline void set_U3CU3Ef__mgU24cache1_13(Func_1_t3420419431 * value)
	{
		___U3CU3Ef__mgU24cache1_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache1_13, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_14() { return static_cast<int32_t>(offsetof(StateMapping_t480561525_StaticFields, ___U3CU3Ef__mgU24cache2_14)); }
	inline Action_t3226471752 * get_U3CU3Ef__mgU24cache2_14() const { return ___U3CU3Ef__mgU24cache2_14; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__mgU24cache2_14() { return &___U3CU3Ef__mgU24cache2_14; }
	inline void set_U3CU3Ef__mgU24cache2_14(Action_t3226471752 * value)
	{
		___U3CU3Ef__mgU24cache2_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache2_14, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_15() { return static_cast<int32_t>(offsetof(StateMapping_t480561525_StaticFields, ___U3CU3Ef__mgU24cache3_15)); }
	inline Func_1_t3420419431 * get_U3CU3Ef__mgU24cache3_15() const { return ___U3CU3Ef__mgU24cache3_15; }
	inline Func_1_t3420419431 ** get_address_of_U3CU3Ef__mgU24cache3_15() { return &___U3CU3Ef__mgU24cache3_15; }
	inline void set_U3CU3Ef__mgU24cache3_15(Func_1_t3420419431 * value)
	{
		___U3CU3Ef__mgU24cache3_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache3_15, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4_16() { return static_cast<int32_t>(offsetof(StateMapping_t480561525_StaticFields, ___U3CU3Ef__mgU24cache4_16)); }
	inline Action_t3226471752 * get_U3CU3Ef__mgU24cache4_16() const { return ___U3CU3Ef__mgU24cache4_16; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__mgU24cache4_16() { return &___U3CU3Ef__mgU24cache4_16; }
	inline void set_U3CU3Ef__mgU24cache4_16(Action_t3226471752 * value)
	{
		___U3CU3Ef__mgU24cache4_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache4_16, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache5_17() { return static_cast<int32_t>(offsetof(StateMapping_t480561525_StaticFields, ___U3CU3Ef__mgU24cache5_17)); }
	inline Action_t3226471752 * get_U3CU3Ef__mgU24cache5_17() const { return ___U3CU3Ef__mgU24cache5_17; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__mgU24cache5_17() { return &___U3CU3Ef__mgU24cache5_17; }
	inline void set_U3CU3Ef__mgU24cache5_17(Action_t3226471752 * value)
	{
		___U3CU3Ef__mgU24cache5_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache5_17, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache6_18() { return static_cast<int32_t>(offsetof(StateMapping_t480561525_StaticFields, ___U3CU3Ef__mgU24cache6_18)); }
	inline Action_t3226471752 * get_U3CU3Ef__mgU24cache6_18() const { return ___U3CU3Ef__mgU24cache6_18; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__mgU24cache6_18() { return &___U3CU3Ef__mgU24cache6_18; }
	inline void set_U3CU3Ef__mgU24cache6_18(Action_t3226471752 * value)
	{
		___U3CU3Ef__mgU24cache6_18 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache6_18, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache7_19() { return static_cast<int32_t>(offsetof(StateMapping_t480561525_StaticFields, ___U3CU3Ef__mgU24cache7_19)); }
	inline Action_t3226471752 * get_U3CU3Ef__mgU24cache7_19() const { return ___U3CU3Ef__mgU24cache7_19; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__mgU24cache7_19() { return &___U3CU3Ef__mgU24cache7_19; }
	inline void set_U3CU3Ef__mgU24cache7_19(Action_t3226471752 * value)
	{
		___U3CU3Ef__mgU24cache7_19 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache7_19, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache8_20() { return static_cast<int32_t>(offsetof(StateMapping_t480561525_StaticFields, ___U3CU3Ef__mgU24cache8_20)); }
	inline Action_1_t2678645790 * get_U3CU3Ef__mgU24cache8_20() const { return ___U3CU3Ef__mgU24cache8_20; }
	inline Action_1_t2678645790 ** get_address_of_U3CU3Ef__mgU24cache8_20() { return &___U3CU3Ef__mgU24cache8_20; }
	inline void set_U3CU3Ef__mgU24cache8_20(Action_1_t2678645790 * value)
	{
		___U3CU3Ef__mgU24cache8_20 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache8_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

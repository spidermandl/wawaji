#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Action`1<Picker/States>
struct Action_1_t3739262201;
// MonsterLove.StateMachine.StateMachineRunner
struct StateMachineRunner_t3151505106;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// MonsterLove.StateMachine.StateMapping
struct StateMapping_t480561525;
// System.Collections.Generic.Dictionary`2<System.Object,MonsterLove.StateMachine.StateMapping>
struct Dictionary_2_t72621653;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MonsterLove.StateMachine.StateMachine`1<Picker/States>
struct  StateMachine_1_t3720007309  : public Il2CppObject
{
public:
	// System.Action`1<T> MonsterLove.StateMachine.StateMachine`1::Changed
	Action_1_t3739262201 * ___Changed_0;
	// MonsterLove.StateMachine.StateMachineRunner MonsterLove.StateMachine.StateMachine`1::engine
	StateMachineRunner_t3151505106 * ___engine_1;
	// UnityEngine.MonoBehaviour MonsterLove.StateMachine.StateMachine`1::component
	MonoBehaviour_t1158329972 * ___component_2;
	// MonsterLove.StateMachine.StateMapping MonsterLove.StateMachine.StateMachine`1::lastState
	StateMapping_t480561525 * ___lastState_3;
	// MonsterLove.StateMachine.StateMapping MonsterLove.StateMachine.StateMachine`1::currentState
	StateMapping_t480561525 * ___currentState_4;
	// MonsterLove.StateMachine.StateMapping MonsterLove.StateMachine.StateMachine`1::destinationState
	StateMapping_t480561525 * ___destinationState_5;
	// System.Collections.Generic.Dictionary`2<System.Object,MonsterLove.StateMachine.StateMapping> MonsterLove.StateMachine.StateMachine`1::stateLookup
	Dictionary_2_t72621653 * ___stateLookup_6;
	// System.String[] MonsterLove.StateMachine.StateMachine`1::ignoredNames
	StringU5BU5D_t1642385972* ___ignoredNames_7;
	// System.Boolean MonsterLove.StateMachine.StateMachine`1::isInTransition
	bool ___isInTransition_8;
	// System.Collections.IEnumerator MonsterLove.StateMachine.StateMachine`1::currentTransition
	Il2CppObject * ___currentTransition_9;
	// System.Collections.IEnumerator MonsterLove.StateMachine.StateMachine`1::exitRoutine
	Il2CppObject * ___exitRoutine_10;
	// System.Collections.IEnumerator MonsterLove.StateMachine.StateMachine`1::enterRoutine
	Il2CppObject * ___enterRoutine_11;
	// System.Collections.IEnumerator MonsterLove.StateMachine.StateMachine`1::queuedChange
	Il2CppObject * ___queuedChange_12;

public:
	inline static int32_t get_offset_of_Changed_0() { return static_cast<int32_t>(offsetof(StateMachine_1_t3720007309, ___Changed_0)); }
	inline Action_1_t3739262201 * get_Changed_0() const { return ___Changed_0; }
	inline Action_1_t3739262201 ** get_address_of_Changed_0() { return &___Changed_0; }
	inline void set_Changed_0(Action_1_t3739262201 * value)
	{
		___Changed_0 = value;
		Il2CppCodeGenWriteBarrier(&___Changed_0, value);
	}

	inline static int32_t get_offset_of_engine_1() { return static_cast<int32_t>(offsetof(StateMachine_1_t3720007309, ___engine_1)); }
	inline StateMachineRunner_t3151505106 * get_engine_1() const { return ___engine_1; }
	inline StateMachineRunner_t3151505106 ** get_address_of_engine_1() { return &___engine_1; }
	inline void set_engine_1(StateMachineRunner_t3151505106 * value)
	{
		___engine_1 = value;
		Il2CppCodeGenWriteBarrier(&___engine_1, value);
	}

	inline static int32_t get_offset_of_component_2() { return static_cast<int32_t>(offsetof(StateMachine_1_t3720007309, ___component_2)); }
	inline MonoBehaviour_t1158329972 * get_component_2() const { return ___component_2; }
	inline MonoBehaviour_t1158329972 ** get_address_of_component_2() { return &___component_2; }
	inline void set_component_2(MonoBehaviour_t1158329972 * value)
	{
		___component_2 = value;
		Il2CppCodeGenWriteBarrier(&___component_2, value);
	}

	inline static int32_t get_offset_of_lastState_3() { return static_cast<int32_t>(offsetof(StateMachine_1_t3720007309, ___lastState_3)); }
	inline StateMapping_t480561525 * get_lastState_3() const { return ___lastState_3; }
	inline StateMapping_t480561525 ** get_address_of_lastState_3() { return &___lastState_3; }
	inline void set_lastState_3(StateMapping_t480561525 * value)
	{
		___lastState_3 = value;
		Il2CppCodeGenWriteBarrier(&___lastState_3, value);
	}

	inline static int32_t get_offset_of_currentState_4() { return static_cast<int32_t>(offsetof(StateMachine_1_t3720007309, ___currentState_4)); }
	inline StateMapping_t480561525 * get_currentState_4() const { return ___currentState_4; }
	inline StateMapping_t480561525 ** get_address_of_currentState_4() { return &___currentState_4; }
	inline void set_currentState_4(StateMapping_t480561525 * value)
	{
		___currentState_4 = value;
		Il2CppCodeGenWriteBarrier(&___currentState_4, value);
	}

	inline static int32_t get_offset_of_destinationState_5() { return static_cast<int32_t>(offsetof(StateMachine_1_t3720007309, ___destinationState_5)); }
	inline StateMapping_t480561525 * get_destinationState_5() const { return ___destinationState_5; }
	inline StateMapping_t480561525 ** get_address_of_destinationState_5() { return &___destinationState_5; }
	inline void set_destinationState_5(StateMapping_t480561525 * value)
	{
		___destinationState_5 = value;
		Il2CppCodeGenWriteBarrier(&___destinationState_5, value);
	}

	inline static int32_t get_offset_of_stateLookup_6() { return static_cast<int32_t>(offsetof(StateMachine_1_t3720007309, ___stateLookup_6)); }
	inline Dictionary_2_t72621653 * get_stateLookup_6() const { return ___stateLookup_6; }
	inline Dictionary_2_t72621653 ** get_address_of_stateLookup_6() { return &___stateLookup_6; }
	inline void set_stateLookup_6(Dictionary_2_t72621653 * value)
	{
		___stateLookup_6 = value;
		Il2CppCodeGenWriteBarrier(&___stateLookup_6, value);
	}

	inline static int32_t get_offset_of_ignoredNames_7() { return static_cast<int32_t>(offsetof(StateMachine_1_t3720007309, ___ignoredNames_7)); }
	inline StringU5BU5D_t1642385972* get_ignoredNames_7() const { return ___ignoredNames_7; }
	inline StringU5BU5D_t1642385972** get_address_of_ignoredNames_7() { return &___ignoredNames_7; }
	inline void set_ignoredNames_7(StringU5BU5D_t1642385972* value)
	{
		___ignoredNames_7 = value;
		Il2CppCodeGenWriteBarrier(&___ignoredNames_7, value);
	}

	inline static int32_t get_offset_of_isInTransition_8() { return static_cast<int32_t>(offsetof(StateMachine_1_t3720007309, ___isInTransition_8)); }
	inline bool get_isInTransition_8() const { return ___isInTransition_8; }
	inline bool* get_address_of_isInTransition_8() { return &___isInTransition_8; }
	inline void set_isInTransition_8(bool value)
	{
		___isInTransition_8 = value;
	}

	inline static int32_t get_offset_of_currentTransition_9() { return static_cast<int32_t>(offsetof(StateMachine_1_t3720007309, ___currentTransition_9)); }
	inline Il2CppObject * get_currentTransition_9() const { return ___currentTransition_9; }
	inline Il2CppObject ** get_address_of_currentTransition_9() { return &___currentTransition_9; }
	inline void set_currentTransition_9(Il2CppObject * value)
	{
		___currentTransition_9 = value;
		Il2CppCodeGenWriteBarrier(&___currentTransition_9, value);
	}

	inline static int32_t get_offset_of_exitRoutine_10() { return static_cast<int32_t>(offsetof(StateMachine_1_t3720007309, ___exitRoutine_10)); }
	inline Il2CppObject * get_exitRoutine_10() const { return ___exitRoutine_10; }
	inline Il2CppObject ** get_address_of_exitRoutine_10() { return &___exitRoutine_10; }
	inline void set_exitRoutine_10(Il2CppObject * value)
	{
		___exitRoutine_10 = value;
		Il2CppCodeGenWriteBarrier(&___exitRoutine_10, value);
	}

	inline static int32_t get_offset_of_enterRoutine_11() { return static_cast<int32_t>(offsetof(StateMachine_1_t3720007309, ___enterRoutine_11)); }
	inline Il2CppObject * get_enterRoutine_11() const { return ___enterRoutine_11; }
	inline Il2CppObject ** get_address_of_enterRoutine_11() { return &___enterRoutine_11; }
	inline void set_enterRoutine_11(Il2CppObject * value)
	{
		___enterRoutine_11 = value;
		Il2CppCodeGenWriteBarrier(&___enterRoutine_11, value);
	}

	inline static int32_t get_offset_of_queuedChange_12() { return static_cast<int32_t>(offsetof(StateMachine_1_t3720007309, ___queuedChange_12)); }
	inline Il2CppObject * get_queuedChange_12() const { return ___queuedChange_12; }
	inline Il2CppObject ** get_address_of_queuedChange_12() { return &___queuedChange_12; }
	inline void set_queuedChange_12(Il2CppObject * value)
	{
		___queuedChange_12 = value;
		Il2CppCodeGenWriteBarrier(&___queuedChange_12, value);
	}
};

struct StateMachine_1_t3720007309_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> MonsterLove.StateMachine.StateMachine`1::<>f__switch$map0
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map0_13;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map0_13() { return static_cast<int32_t>(offsetof(StateMachine_1_t3720007309_StaticFields, ___U3CU3Ef__switchU24map0_13)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map0_13() const { return ___U3CU3Ef__switchU24map0_13; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map0_13() { return &___U3CU3Ef__switchU24map0_13; }
	inline void set_U3CU3Ef__switchU24map0_13(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map0_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map0_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

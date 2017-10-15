#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// MonsterLove.StateMachine.StateMapping
struct StateMapping_t480561525;
// MonsterLove.StateMachine.StateMachine`1<GameManager/States>
struct StateMachine_1_t3073175738;
// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MonsterLove.StateMachine.StateMachine`1/<WaitForPreviousTransition>c__Iterator1<GameManager/States>
struct  U3CWaitForPreviousTransitionU3Ec__Iterator1_t3362351651  : public Il2CppObject
{
public:
	// MonsterLove.StateMachine.StateMapping MonsterLove.StateMachine.StateMachine`1/<WaitForPreviousTransition>c__Iterator1::nextState
	StateMapping_t480561525 * ___nextState_0;
	// MonsterLove.StateMachine.StateMachine`1<T> MonsterLove.StateMachine.StateMachine`1/<WaitForPreviousTransition>c__Iterator1::$this
	StateMachine_1_t3073175738 * ___U24this_1;
	// System.Object MonsterLove.StateMachine.StateMachine`1/<WaitForPreviousTransition>c__Iterator1::$current
	Il2CppObject * ___U24current_2;
	// System.Boolean MonsterLove.StateMachine.StateMachine`1/<WaitForPreviousTransition>c__Iterator1::$disposing
	bool ___U24disposing_3;
	// System.Int32 MonsterLove.StateMachine.StateMachine`1/<WaitForPreviousTransition>c__Iterator1::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_nextState_0() { return static_cast<int32_t>(offsetof(U3CWaitForPreviousTransitionU3Ec__Iterator1_t3362351651, ___nextState_0)); }
	inline StateMapping_t480561525 * get_nextState_0() const { return ___nextState_0; }
	inline StateMapping_t480561525 ** get_address_of_nextState_0() { return &___nextState_0; }
	inline void set_nextState_0(StateMapping_t480561525 * value)
	{
		___nextState_0 = value;
		Il2CppCodeGenWriteBarrier(&___nextState_0, value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CWaitForPreviousTransitionU3Ec__Iterator1_t3362351651, ___U24this_1)); }
	inline StateMachine_1_t3073175738 * get_U24this_1() const { return ___U24this_1; }
	inline StateMachine_1_t3073175738 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(StateMachine_1_t3073175738 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_1, value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CWaitForPreviousTransitionU3Ec__Iterator1_t3362351651, ___U24current_2)); }
	inline Il2CppObject * get_U24current_2() const { return ___U24current_2; }
	inline Il2CppObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(Il2CppObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_2, value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CWaitForPreviousTransitionU3Ec__Iterator1_t3362351651, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CWaitForPreviousTransitionU3Ec__Iterator1_t3362351651, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

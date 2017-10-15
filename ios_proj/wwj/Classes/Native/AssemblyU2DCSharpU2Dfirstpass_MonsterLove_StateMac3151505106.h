#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Collections.Generic.List`1<MonsterLove.StateMachine.IStateMachine>
struct List_1_t2221553273;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MonsterLove.StateMachine.StateMachineRunner
struct  StateMachineRunner_t3151505106  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<MonsterLove.StateMachine.IStateMachine> MonsterLove.StateMachine.StateMachineRunner::stateMachineList
	List_1_t2221553273 * ___stateMachineList_2;

public:
	inline static int32_t get_offset_of_stateMachineList_2() { return static_cast<int32_t>(offsetof(StateMachineRunner_t3151505106, ___stateMachineList_2)); }
	inline List_1_t2221553273 * get_stateMachineList_2() const { return ___stateMachineList_2; }
	inline List_1_t2221553273 ** get_address_of_stateMachineList_2() { return &___stateMachineList_2; }
	inline void set_stateMachineList_2(List_1_t2221553273 * value)
	{
		___stateMachineList_2 = value;
		Il2CppCodeGenWriteBarrier(&___stateMachineList_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

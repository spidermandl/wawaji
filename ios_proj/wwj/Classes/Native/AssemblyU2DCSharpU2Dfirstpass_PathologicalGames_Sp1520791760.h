#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.Dictionary`2<System.String,PathologicalGames.SpawnPoolsDict/OnCreatedDelegate>
struct Dictionary_2_t4164115705;
// System.Collections.Generic.Dictionary`2<System.String,PathologicalGames.SpawnPool>
struct Dictionary_2_t39529491;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PathologicalGames.SpawnPoolsDict
struct  SpawnPoolsDict_t1520791760  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,PathologicalGames.SpawnPoolsDict/OnCreatedDelegate> PathologicalGames.SpawnPoolsDict::onCreatedDelegates
	Dictionary_2_t4164115705 * ___onCreatedDelegates_0;
	// System.Collections.Generic.Dictionary`2<System.String,PathologicalGames.SpawnPool> PathologicalGames.SpawnPoolsDict::_pools
	Dictionary_2_t39529491 * ____pools_1;

public:
	inline static int32_t get_offset_of_onCreatedDelegates_0() { return static_cast<int32_t>(offsetof(SpawnPoolsDict_t1520791760, ___onCreatedDelegates_0)); }
	inline Dictionary_2_t4164115705 * get_onCreatedDelegates_0() const { return ___onCreatedDelegates_0; }
	inline Dictionary_2_t4164115705 ** get_address_of_onCreatedDelegates_0() { return &___onCreatedDelegates_0; }
	inline void set_onCreatedDelegates_0(Dictionary_2_t4164115705 * value)
	{
		___onCreatedDelegates_0 = value;
		Il2CppCodeGenWriteBarrier(&___onCreatedDelegates_0, value);
	}

	inline static int32_t get_offset_of__pools_1() { return static_cast<int32_t>(offsetof(SpawnPoolsDict_t1520791760, ____pools_1)); }
	inline Dictionary_2_t39529491 * get__pools_1() const { return ____pools_1; }
	inline Dictionary_2_t39529491 ** get_address_of__pools_1() { return &____pools_1; }
	inline void set__pools_1(Dictionary_2_t39529491 * value)
	{
		____pools_1 = value;
		Il2CppCodeGenWriteBarrier(&____pools_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

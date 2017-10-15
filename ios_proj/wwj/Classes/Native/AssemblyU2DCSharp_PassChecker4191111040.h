#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// PathologicalGames.SpawnPool
struct SpawnPool_t2419717525;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PassChecker
struct  PassChecker_t4191111040  : public MonoBehaviour_t1158329972
{
public:
	// PathologicalGames.SpawnPool PassChecker::pool
	SpawnPool_t2419717525 * ___pool_2;

public:
	inline static int32_t get_offset_of_pool_2() { return static_cast<int32_t>(offsetof(PassChecker_t4191111040, ___pool_2)); }
	inline SpawnPool_t2419717525 * get_pool_2() const { return ___pool_2; }
	inline SpawnPool_t2419717525 ** get_address_of_pool_2() { return &___pool_2; }
	inline void set_pool_2(SpawnPool_t2419717525 * value)
	{
		___pool_2 = value;
		Il2CppCodeGenWriteBarrier(&___pool_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

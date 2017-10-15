#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// PathologicalGames.SpawnPoolsDict
struct SpawnPoolsDict_t1520791760;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PathologicalGames.PoolManager
struct  PoolManager_t707327633  : public Il2CppObject
{
public:

public:
};

struct PoolManager_t707327633_StaticFields
{
public:
	// PathologicalGames.SpawnPoolsDict PathologicalGames.PoolManager::Pools
	SpawnPoolsDict_t1520791760 * ___Pools_0;

public:
	inline static int32_t get_offset_of_Pools_0() { return static_cast<int32_t>(offsetof(PoolManager_t707327633_StaticFields, ___Pools_0)); }
	inline SpawnPoolsDict_t1520791760 * get_Pools_0() const { return ___Pools_0; }
	inline SpawnPoolsDict_t1520791760 ** get_address_of_Pools_0() { return &___Pools_0; }
	inline void set_Pools_0(SpawnPoolsDict_t1520791760 * value)
	{
		___Pools_0 = value;
		Il2CppCodeGenWriteBarrier(&___Pools_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Transform>
struct Dictionary_2_t894930024;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PathologicalGames.PrefabsDict
struct  PrefabsDict_t1121107021  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Transform> PathologicalGames.PrefabsDict::_prefabs
	Dictionary_2_t894930024 * ____prefabs_0;

public:
	inline static int32_t get_offset_of__prefabs_0() { return static_cast<int32_t>(offsetof(PrefabsDict_t1121107021, ____prefabs_0)); }
	inline Dictionary_2_t894930024 * get__prefabs_0() const { return ____prefabs_0; }
	inline Dictionary_2_t894930024 ** get_address_of__prefabs_0() { return &____prefabs_0; }
	inline void set__prefabs_0(Dictionary_2_t894930024 * value)
	{
		____prefabs_0 = value;
		Il2CppCodeGenWriteBarrier(&____prefabs_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

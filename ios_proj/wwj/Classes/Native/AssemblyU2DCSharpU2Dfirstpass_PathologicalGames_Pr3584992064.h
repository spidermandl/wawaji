#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PathologicalGames.PreRuntimePoolItem
struct  PreRuntimePoolItem_t3584992064  : public MonoBehaviour_t1158329972
{
public:
	// System.String PathologicalGames.PreRuntimePoolItem::poolName
	String_t* ___poolName_2;
	// System.String PathologicalGames.PreRuntimePoolItem::prefabName
	String_t* ___prefabName_3;
	// System.Boolean PathologicalGames.PreRuntimePoolItem::despawnOnStart
	bool ___despawnOnStart_4;
	// System.Boolean PathologicalGames.PreRuntimePoolItem::doNotReparent
	bool ___doNotReparent_5;

public:
	inline static int32_t get_offset_of_poolName_2() { return static_cast<int32_t>(offsetof(PreRuntimePoolItem_t3584992064, ___poolName_2)); }
	inline String_t* get_poolName_2() const { return ___poolName_2; }
	inline String_t** get_address_of_poolName_2() { return &___poolName_2; }
	inline void set_poolName_2(String_t* value)
	{
		___poolName_2 = value;
		Il2CppCodeGenWriteBarrier(&___poolName_2, value);
	}

	inline static int32_t get_offset_of_prefabName_3() { return static_cast<int32_t>(offsetof(PreRuntimePoolItem_t3584992064, ___prefabName_3)); }
	inline String_t* get_prefabName_3() const { return ___prefabName_3; }
	inline String_t** get_address_of_prefabName_3() { return &___prefabName_3; }
	inline void set_prefabName_3(String_t* value)
	{
		___prefabName_3 = value;
		Il2CppCodeGenWriteBarrier(&___prefabName_3, value);
	}

	inline static int32_t get_offset_of_despawnOnStart_4() { return static_cast<int32_t>(offsetof(PreRuntimePoolItem_t3584992064, ___despawnOnStart_4)); }
	inline bool get_despawnOnStart_4() const { return ___despawnOnStart_4; }
	inline bool* get_address_of_despawnOnStart_4() { return &___despawnOnStart_4; }
	inline void set_despawnOnStart_4(bool value)
	{
		___despawnOnStart_4 = value;
	}

	inline static int32_t get_offset_of_doNotReparent_5() { return static_cast<int32_t>(offsetof(PreRuntimePoolItem_t3584992064, ___doNotReparent_5)); }
	inline bool get_doNotReparent_5() const { return ___doNotReparent_5; }
	inline bool* get_address_of_doNotReparent_5() { return &___doNotReparent_5; }
	inline void set_doNotReparent_5(bool value)
	{
		___doNotReparent_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

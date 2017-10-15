#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// PathologicalGames.InstanceHandler/InstantiateDelegate
struct InstantiateDelegate_t3900751951;
// PathologicalGames.InstanceHandler/DestroyDelegate
struct DestroyDelegate_t3666444239;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PathologicalGames.InstanceHandler
struct  InstanceHandler_t1084123187  : public Il2CppObject
{
public:

public:
};

struct InstanceHandler_t1084123187_StaticFields
{
public:
	// PathologicalGames.InstanceHandler/InstantiateDelegate PathologicalGames.InstanceHandler::InstantiateDelegates
	InstantiateDelegate_t3900751951 * ___InstantiateDelegates_0;
	// PathologicalGames.InstanceHandler/DestroyDelegate PathologicalGames.InstanceHandler::DestroyDelegates
	DestroyDelegate_t3666444239 * ___DestroyDelegates_1;

public:
	inline static int32_t get_offset_of_InstantiateDelegates_0() { return static_cast<int32_t>(offsetof(InstanceHandler_t1084123187_StaticFields, ___InstantiateDelegates_0)); }
	inline InstantiateDelegate_t3900751951 * get_InstantiateDelegates_0() const { return ___InstantiateDelegates_0; }
	inline InstantiateDelegate_t3900751951 ** get_address_of_InstantiateDelegates_0() { return &___InstantiateDelegates_0; }
	inline void set_InstantiateDelegates_0(InstantiateDelegate_t3900751951 * value)
	{
		___InstantiateDelegates_0 = value;
		Il2CppCodeGenWriteBarrier(&___InstantiateDelegates_0, value);
	}

	inline static int32_t get_offset_of_DestroyDelegates_1() { return static_cast<int32_t>(offsetof(InstanceHandler_t1084123187_StaticFields, ___DestroyDelegates_1)); }
	inline DestroyDelegate_t3666444239 * get_DestroyDelegates_1() const { return ___DestroyDelegates_1; }
	inline DestroyDelegate_t3666444239 ** get_address_of_DestroyDelegates_1() { return &___DestroyDelegates_1; }
	inline void set_DestroyDelegates_1(DestroyDelegate_t3666444239 * value)
	{
		___DestroyDelegates_1 = value;
		Il2CppCodeGenWriteBarrier(&___DestroyDelegates_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

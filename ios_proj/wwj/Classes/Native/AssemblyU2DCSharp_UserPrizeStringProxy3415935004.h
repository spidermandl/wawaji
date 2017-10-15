#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_BaseProxy1490705299.h"

// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UserPrizeStringProxy
struct  UserPrizeStringProxy_t3415935004  : public BaseProxy_t1490705299
{
public:
	// System.Collections.Generic.List`1<System.String> UserPrizeStringProxy::items
	List_1_t1398341365 * ___items_7;

public:
	inline static int32_t get_offset_of_items_7() { return static_cast<int32_t>(offsetof(UserPrizeStringProxy_t3415935004, ___items_7)); }
	inline List_1_t1398341365 * get_items_7() const { return ___items_7; }
	inline List_1_t1398341365 ** get_address_of_items_7() { return &___items_7; }
	inline void set_items_7(List_1_t1398341365 * value)
	{
		___items_7 = value;
		Il2CppCodeGenWriteBarrier(&___items_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

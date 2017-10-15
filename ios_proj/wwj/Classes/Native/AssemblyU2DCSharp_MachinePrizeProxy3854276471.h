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
// System.Collections.Generic.List`1<MachinePrizeProxy/PrizeItem>
struct List_1_t1177534045;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MachinePrizeProxy
struct  MachinePrizeProxy_t3854276471  : public BaseProxy_t1490705299
{
public:
	// System.Collections.Generic.List`1<MachinePrizeProxy/PrizeItem> MachinePrizeProxy::items
	List_1_t1177534045 * ___items_7;

public:
	inline static int32_t get_offset_of_items_7() { return static_cast<int32_t>(offsetof(MachinePrizeProxy_t3854276471, ___items_7)); }
	inline List_1_t1177534045 * get_items_7() const { return ___items_7; }
	inline List_1_t1177534045 ** get_address_of_items_7() { return &___items_7; }
	inline void set_items_7(List_1_t1177534045 * value)
	{
		___items_7 = value;
		Il2CppCodeGenWriteBarrier(&___items_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

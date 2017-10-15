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
// System.Collections.Generic.List`1<UserPrizeInfoProxy/PrizeItem>
struct List_1_t2253789183;
// UserPrizeInfoProxy/PrizeItem
struct PrizeItem_t2884668051;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UserPrizeInfoProxy
struct  UserPrizeInfoProxy_t2183279781  : public BaseProxy_t1490705299
{
public:
	// System.Collections.Generic.List`1<UserPrizeInfoProxy/PrizeItem> UserPrizeInfoProxy::items
	List_1_t2253789183 * ___items_7;
	// UserPrizeInfoProxy/PrizeItem UserPrizeInfoProxy::selectedItem
	PrizeItem_t2884668051 * ___selectedItem_8;

public:
	inline static int32_t get_offset_of_items_7() { return static_cast<int32_t>(offsetof(UserPrizeInfoProxy_t2183279781, ___items_7)); }
	inline List_1_t2253789183 * get_items_7() const { return ___items_7; }
	inline List_1_t2253789183 ** get_address_of_items_7() { return &___items_7; }
	inline void set_items_7(List_1_t2253789183 * value)
	{
		___items_7 = value;
		Il2CppCodeGenWriteBarrier(&___items_7, value);
	}

	inline static int32_t get_offset_of_selectedItem_8() { return static_cast<int32_t>(offsetof(UserPrizeInfoProxy_t2183279781, ___selectedItem_8)); }
	inline PrizeItem_t2884668051 * get_selectedItem_8() const { return ___selectedItem_8; }
	inline PrizeItem_t2884668051 ** get_address_of_selectedItem_8() { return &___selectedItem_8; }
	inline void set_selectedItem_8(PrizeItem_t2884668051 * value)
	{
		___selectedItem_8 = value;
		Il2CppCodeGenWriteBarrier(&___selectedItem_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_BaseWindow1983497523.h"

// System.Collections.Generic.List`1<UserPrizeInfoProxy/PrizeItem>
struct List_1_t2253789183;
// UIMain
struct UIMain_t658973805;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIProfile
struct  UIProfile_t3129750225  : public BaseWindow_t1983497523
{
public:
	// System.Collections.Generic.List`1<UserPrizeInfoProxy/PrizeItem> UIProfile::items
	List_1_t2253789183 * ___items_104;
	// UIMain UIProfile::_ui
	UIMain_t658973805 * ____ui_105;

public:
	inline static int32_t get_offset_of_items_104() { return static_cast<int32_t>(offsetof(UIProfile_t3129750225, ___items_104)); }
	inline List_1_t2253789183 * get_items_104() const { return ___items_104; }
	inline List_1_t2253789183 ** get_address_of_items_104() { return &___items_104; }
	inline void set_items_104(List_1_t2253789183 * value)
	{
		___items_104 = value;
		Il2CppCodeGenWriteBarrier(&___items_104, value);
	}

	inline static int32_t get_offset_of__ui_105() { return static_cast<int32_t>(offsetof(UIProfile_t3129750225, ____ui_105)); }
	inline UIMain_t658973805 * get__ui_105() const { return ____ui_105; }
	inline UIMain_t658973805 ** get_address_of__ui_105() { return &____ui_105; }
	inline void set__ui_105(UIMain_t658973805 * value)
	{
		____ui_105 = value;
		Il2CppCodeGenWriteBarrier(&____ui_105, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

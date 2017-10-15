#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// UserPrizeInfoProxy/PrizeItem
struct PrizeItem_t2884668051;
// FairyGUI.GComponent
struct GComponent_t4106136290;
// UICommon
struct UICommon_t1511081147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BaseRewardsCom
struct  BaseRewardsCom_t4061300596  : public Il2CppObject
{
public:
	// UserPrizeInfoProxy/PrizeItem BaseRewardsCom::item
	PrizeItem_t2884668051 * ___item_0;
	// FairyGUI.GComponent BaseRewardsCom::open
	GComponent_t4106136290 * ___open_1;
	// FairyGUI.GComponent BaseRewardsCom::close
	GComponent_t4106136290 * ___close_2;
	// UICommon BaseRewardsCom::warn
	UICommon_t1511081147 * ___warn_3;

public:
	inline static int32_t get_offset_of_item_0() { return static_cast<int32_t>(offsetof(BaseRewardsCom_t4061300596, ___item_0)); }
	inline PrizeItem_t2884668051 * get_item_0() const { return ___item_0; }
	inline PrizeItem_t2884668051 ** get_address_of_item_0() { return &___item_0; }
	inline void set_item_0(PrizeItem_t2884668051 * value)
	{
		___item_0 = value;
		Il2CppCodeGenWriteBarrier(&___item_0, value);
	}

	inline static int32_t get_offset_of_open_1() { return static_cast<int32_t>(offsetof(BaseRewardsCom_t4061300596, ___open_1)); }
	inline GComponent_t4106136290 * get_open_1() const { return ___open_1; }
	inline GComponent_t4106136290 ** get_address_of_open_1() { return &___open_1; }
	inline void set_open_1(GComponent_t4106136290 * value)
	{
		___open_1 = value;
		Il2CppCodeGenWriteBarrier(&___open_1, value);
	}

	inline static int32_t get_offset_of_close_2() { return static_cast<int32_t>(offsetof(BaseRewardsCom_t4061300596, ___close_2)); }
	inline GComponent_t4106136290 * get_close_2() const { return ___close_2; }
	inline GComponent_t4106136290 ** get_address_of_close_2() { return &___close_2; }
	inline void set_close_2(GComponent_t4106136290 * value)
	{
		___close_2 = value;
		Il2CppCodeGenWriteBarrier(&___close_2, value);
	}

	inline static int32_t get_offset_of_warn_3() { return static_cast<int32_t>(offsetof(BaseRewardsCom_t4061300596, ___warn_3)); }
	inline UICommon_t1511081147 * get_warn_3() const { return ___warn_3; }
	inline UICommon_t1511081147 ** get_address_of_warn_3() { return &___warn_3; }
	inline void set_warn_3(UICommon_t1511081147 * value)
	{
		___warn_3 = value;
		Il2CppCodeGenWriteBarrier(&___warn_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

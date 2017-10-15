#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_UIMain658973805.h"

// UITopup
struct UITopup_t719491996;
// UICommon
struct UICommon_t1511081147;
// UIExchangeConfirm
struct UIExchangeConfirm_t330140959;
// FairyGUI.GComponent
struct GComponent_t4106136290;
// FairyGUI.GList
struct GList_t2527012171;
// System.Collections.Generic.List`1<PrizeSetProxy/PrizeItem>
struct List_1_t482916620;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIExchangeMain
struct  UIExchangeMain_t4038730646  : public UIMain_t658973805
{
public:
	// UITopup UIExchangeMain::_uiTopup
	UITopup_t719491996 * ____uiTopup_7;
	// UICommon UIExchangeMain::_uiTip
	UICommon_t1511081147 * ____uiTip_8;
	// UIExchangeConfirm UIExchangeMain::_uiConfirm
	UIExchangeConfirm_t330140959 * ____uiConfirm_9;
	// FairyGUI.GComponent UIExchangeMain::toolbar
	GComponent_t4106136290 * ___toolbar_10;
	// FairyGUI.GList UIExchangeMain::_list
	GList_t2527012171 * ____list_11;
	// System.Collections.Generic.List`1<PrizeSetProxy/PrizeItem> UIExchangeMain::items
	List_1_t482916620 * ___items_12;

public:
	inline static int32_t get_offset_of__uiTopup_7() { return static_cast<int32_t>(offsetof(UIExchangeMain_t4038730646, ____uiTopup_7)); }
	inline UITopup_t719491996 * get__uiTopup_7() const { return ____uiTopup_7; }
	inline UITopup_t719491996 ** get_address_of__uiTopup_7() { return &____uiTopup_7; }
	inline void set__uiTopup_7(UITopup_t719491996 * value)
	{
		____uiTopup_7 = value;
		Il2CppCodeGenWriteBarrier(&____uiTopup_7, value);
	}

	inline static int32_t get_offset_of__uiTip_8() { return static_cast<int32_t>(offsetof(UIExchangeMain_t4038730646, ____uiTip_8)); }
	inline UICommon_t1511081147 * get__uiTip_8() const { return ____uiTip_8; }
	inline UICommon_t1511081147 ** get_address_of__uiTip_8() { return &____uiTip_8; }
	inline void set__uiTip_8(UICommon_t1511081147 * value)
	{
		____uiTip_8 = value;
		Il2CppCodeGenWriteBarrier(&____uiTip_8, value);
	}

	inline static int32_t get_offset_of__uiConfirm_9() { return static_cast<int32_t>(offsetof(UIExchangeMain_t4038730646, ____uiConfirm_9)); }
	inline UIExchangeConfirm_t330140959 * get__uiConfirm_9() const { return ____uiConfirm_9; }
	inline UIExchangeConfirm_t330140959 ** get_address_of__uiConfirm_9() { return &____uiConfirm_9; }
	inline void set__uiConfirm_9(UIExchangeConfirm_t330140959 * value)
	{
		____uiConfirm_9 = value;
		Il2CppCodeGenWriteBarrier(&____uiConfirm_9, value);
	}

	inline static int32_t get_offset_of_toolbar_10() { return static_cast<int32_t>(offsetof(UIExchangeMain_t4038730646, ___toolbar_10)); }
	inline GComponent_t4106136290 * get_toolbar_10() const { return ___toolbar_10; }
	inline GComponent_t4106136290 ** get_address_of_toolbar_10() { return &___toolbar_10; }
	inline void set_toolbar_10(GComponent_t4106136290 * value)
	{
		___toolbar_10 = value;
		Il2CppCodeGenWriteBarrier(&___toolbar_10, value);
	}

	inline static int32_t get_offset_of__list_11() { return static_cast<int32_t>(offsetof(UIExchangeMain_t4038730646, ____list_11)); }
	inline GList_t2527012171 * get__list_11() const { return ____list_11; }
	inline GList_t2527012171 ** get_address_of__list_11() { return &____list_11; }
	inline void set__list_11(GList_t2527012171 * value)
	{
		____list_11 = value;
		Il2CppCodeGenWriteBarrier(&____list_11, value);
	}

	inline static int32_t get_offset_of_items_12() { return static_cast<int32_t>(offsetof(UIExchangeMain_t4038730646, ___items_12)); }
	inline List_1_t482916620 * get_items_12() const { return ___items_12; }
	inline List_1_t482916620 ** get_address_of_items_12() { return &___items_12; }
	inline void set_items_12(List_1_t482916620 * value)
	{
		___items_12 = value;
		Il2CppCodeGenWriteBarrier(&___items_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

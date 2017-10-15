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
// FairyGUI.GComponent
struct GComponent_t4106136290;
// FairyGUI.GList
struct GList_t2527012171;
// System.Collections.Generic.List`1<MachinePrizeProxy/PrizeItem>
struct List_1_t1177534045;
// MachineInfoProxy
struct MachineInfoProxy_t2135355597;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIPrizeMain
struct  UIPrizeMain_t3650951181  : public UIMain_t658973805
{
public:
	// UITopup UIPrizeMain::_uiTopup
	UITopup_t719491996 * ____uiTopup_7;
	// FairyGUI.GComponent UIPrizeMain::toolbar
	GComponent_t4106136290 * ___toolbar_8;
	// FairyGUI.GList UIPrizeMain::_list
	GList_t2527012171 * ____list_9;
	// System.Collections.Generic.List`1<MachinePrizeProxy/PrizeItem> UIPrizeMain::items
	List_1_t1177534045 * ___items_10;
	// MachineInfoProxy UIPrizeMain::machine_proxy
	MachineInfoProxy_t2135355597 * ___machine_proxy_11;

public:
	inline static int32_t get_offset_of__uiTopup_7() { return static_cast<int32_t>(offsetof(UIPrizeMain_t3650951181, ____uiTopup_7)); }
	inline UITopup_t719491996 * get__uiTopup_7() const { return ____uiTopup_7; }
	inline UITopup_t719491996 ** get_address_of__uiTopup_7() { return &____uiTopup_7; }
	inline void set__uiTopup_7(UITopup_t719491996 * value)
	{
		____uiTopup_7 = value;
		Il2CppCodeGenWriteBarrier(&____uiTopup_7, value);
	}

	inline static int32_t get_offset_of_toolbar_8() { return static_cast<int32_t>(offsetof(UIPrizeMain_t3650951181, ___toolbar_8)); }
	inline GComponent_t4106136290 * get_toolbar_8() const { return ___toolbar_8; }
	inline GComponent_t4106136290 ** get_address_of_toolbar_8() { return &___toolbar_8; }
	inline void set_toolbar_8(GComponent_t4106136290 * value)
	{
		___toolbar_8 = value;
		Il2CppCodeGenWriteBarrier(&___toolbar_8, value);
	}

	inline static int32_t get_offset_of__list_9() { return static_cast<int32_t>(offsetof(UIPrizeMain_t3650951181, ____list_9)); }
	inline GList_t2527012171 * get__list_9() const { return ____list_9; }
	inline GList_t2527012171 ** get_address_of__list_9() { return &____list_9; }
	inline void set__list_9(GList_t2527012171 * value)
	{
		____list_9 = value;
		Il2CppCodeGenWriteBarrier(&____list_9, value);
	}

	inline static int32_t get_offset_of_items_10() { return static_cast<int32_t>(offsetof(UIPrizeMain_t3650951181, ___items_10)); }
	inline List_1_t1177534045 * get_items_10() const { return ___items_10; }
	inline List_1_t1177534045 ** get_address_of_items_10() { return &___items_10; }
	inline void set_items_10(List_1_t1177534045 * value)
	{
		___items_10 = value;
		Il2CppCodeGenWriteBarrier(&___items_10, value);
	}

	inline static int32_t get_offset_of_machine_proxy_11() { return static_cast<int32_t>(offsetof(UIPrizeMain_t3650951181, ___machine_proxy_11)); }
	inline MachineInfoProxy_t2135355597 * get_machine_proxy_11() const { return ___machine_proxy_11; }
	inline MachineInfoProxy_t2135355597 ** get_address_of_machine_proxy_11() { return &___machine_proxy_11; }
	inline void set_machine_proxy_11(MachineInfoProxy_t2135355597 * value)
	{
		___machine_proxy_11 = value;
		Il2CppCodeGenWriteBarrier(&___machine_proxy_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

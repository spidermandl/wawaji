#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_BaseWindow1983497523.h"

// FairyGUI.GList
struct GList_t2527012171;
// MachineInfoProxy
struct MachineInfoProxy_t2135355597;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<MachinePrizeProxy/PrizeItem>>
struct Dictionary_2_t185359680;
// MachineInfoProxy/TypeAndItem
struct TypeAndItem_t923707302;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIPrize
struct  UIPrize_t4221698698  : public BaseWindow_t1983497523
{
public:
	// FairyGUI.GList UIPrize::_list
	GList_t2527012171 * ____list_104;
	// MachineInfoProxy UIPrize::machine_proxy
	MachineInfoProxy_t2135355597 * ___machine_proxy_105;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<MachinePrizeProxy/PrizeItem>> UIPrize::dic
	Dictionary_2_t185359680 * ___dic_106;
	// MachineInfoProxy/TypeAndItem UIPrize::item
	TypeAndItem_t923707302 * ___item_107;

public:
	inline static int32_t get_offset_of__list_104() { return static_cast<int32_t>(offsetof(UIPrize_t4221698698, ____list_104)); }
	inline GList_t2527012171 * get__list_104() const { return ____list_104; }
	inline GList_t2527012171 ** get_address_of__list_104() { return &____list_104; }
	inline void set__list_104(GList_t2527012171 * value)
	{
		____list_104 = value;
		Il2CppCodeGenWriteBarrier(&____list_104, value);
	}

	inline static int32_t get_offset_of_machine_proxy_105() { return static_cast<int32_t>(offsetof(UIPrize_t4221698698, ___machine_proxy_105)); }
	inline MachineInfoProxy_t2135355597 * get_machine_proxy_105() const { return ___machine_proxy_105; }
	inline MachineInfoProxy_t2135355597 ** get_address_of_machine_proxy_105() { return &___machine_proxy_105; }
	inline void set_machine_proxy_105(MachineInfoProxy_t2135355597 * value)
	{
		___machine_proxy_105 = value;
		Il2CppCodeGenWriteBarrier(&___machine_proxy_105, value);
	}

	inline static int32_t get_offset_of_dic_106() { return static_cast<int32_t>(offsetof(UIPrize_t4221698698, ___dic_106)); }
	inline Dictionary_2_t185359680 * get_dic_106() const { return ___dic_106; }
	inline Dictionary_2_t185359680 ** get_address_of_dic_106() { return &___dic_106; }
	inline void set_dic_106(Dictionary_2_t185359680 * value)
	{
		___dic_106 = value;
		Il2CppCodeGenWriteBarrier(&___dic_106, value);
	}

	inline static int32_t get_offset_of_item_107() { return static_cast<int32_t>(offsetof(UIPrize_t4221698698, ___item_107)); }
	inline TypeAndItem_t923707302 * get_item_107() const { return ___item_107; }
	inline TypeAndItem_t923707302 ** get_address_of_item_107() { return &___item_107; }
	inline void set_item_107(TypeAndItem_t923707302 * value)
	{
		___item_107 = value;
		Il2CppCodeGenWriteBarrier(&___item_107, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

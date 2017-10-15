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
// System.Collections.Generic.List`1<MachineInfoProxy/MachineType>
struct List_1_t1274340063;
// MachineInfoProxy/TypeAndItem
struct TypeAndItem_t923707302;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MachineInfoProxy
struct  MachineInfoProxy_t2135355597  : public BaseProxy_t1490705299
{
public:
	// System.Collections.Generic.List`1<MachineInfoProxy/MachineType> MachineInfoProxy::items
	List_1_t1274340063 * ___items_7;
	// MachineInfoProxy/TypeAndItem MachineInfoProxy::selection
	TypeAndItem_t923707302 * ___selection_8;

public:
	inline static int32_t get_offset_of_items_7() { return static_cast<int32_t>(offsetof(MachineInfoProxy_t2135355597, ___items_7)); }
	inline List_1_t1274340063 * get_items_7() const { return ___items_7; }
	inline List_1_t1274340063 ** get_address_of_items_7() { return &___items_7; }
	inline void set_items_7(List_1_t1274340063 * value)
	{
		___items_7 = value;
		Il2CppCodeGenWriteBarrier(&___items_7, value);
	}

	inline static int32_t get_offset_of_selection_8() { return static_cast<int32_t>(offsetof(MachineInfoProxy_t2135355597, ___selection_8)); }
	inline TypeAndItem_t923707302 * get_selection_8() const { return ___selection_8; }
	inline TypeAndItem_t923707302 ** get_address_of_selection_8() { return &___selection_8; }
	inline void set_selection_8(TypeAndItem_t923707302 * value)
	{
		___selection_8 = value;
		Il2CppCodeGenWriteBarrier(&___selection_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// FairyGUI.GObject
struct GObject_t2662234644;
// System.Collections.Generic.List`1<FairyGUI.RelationItem>
struct List_1_t2246402557;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.Relations
struct  Relations_t4252742299  : public Il2CppObject
{
public:
	// FairyGUI.GObject FairyGUI.Relations::_owner
	GObject_t2662234644 * ____owner_0;
	// System.Collections.Generic.List`1<FairyGUI.RelationItem> FairyGUI.Relations::_items
	List_1_t2246402557 * ____items_1;
	// FairyGUI.GObject FairyGUI.Relations::handling
	GObject_t2662234644 * ___handling_2;

public:
	inline static int32_t get_offset_of__owner_0() { return static_cast<int32_t>(offsetof(Relations_t4252742299, ____owner_0)); }
	inline GObject_t2662234644 * get__owner_0() const { return ____owner_0; }
	inline GObject_t2662234644 ** get_address_of__owner_0() { return &____owner_0; }
	inline void set__owner_0(GObject_t2662234644 * value)
	{
		____owner_0 = value;
		Il2CppCodeGenWriteBarrier(&____owner_0, value);
	}

	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(Relations_t4252742299, ____items_1)); }
	inline List_1_t2246402557 * get__items_1() const { return ____items_1; }
	inline List_1_t2246402557 ** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(List_1_t2246402557 * value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier(&____items_1, value);
	}

	inline static int32_t get_offset_of_handling_2() { return static_cast<int32_t>(offsetof(Relations_t4252742299, ___handling_2)); }
	inline GObject_t2662234644 * get_handling_2() const { return ___handling_2; }
	inline GObject_t2662234644 ** get_address_of_handling_2() { return &___handling_2; }
	inline void set_handling_2(GObject_t2662234644 * value)
	{
		___handling_2 = value;
		Il2CppCodeGenWriteBarrier(&___handling_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"

// FairyGUI.GObject
struct GObject_t2662234644;
// System.Collections.Generic.List`1<FairyGUI.RelationDef>
struct List_1_t3527926751;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.RelationItem
struct  RelationItem_t2877281425  : public Il2CppObject
{
public:
	// FairyGUI.GObject FairyGUI.RelationItem::_owner
	GObject_t2662234644 * ____owner_0;
	// FairyGUI.GObject FairyGUI.RelationItem::_target
	GObject_t2662234644 * ____target_1;
	// System.Collections.Generic.List`1<FairyGUI.RelationDef> FairyGUI.RelationItem::_defs
	List_1_t3527926751 * ____defs_2;
	// UnityEngine.Vector4 FairyGUI.RelationItem::_targetData
	Vector4_t2243707581  ____targetData_3;

public:
	inline static int32_t get_offset_of__owner_0() { return static_cast<int32_t>(offsetof(RelationItem_t2877281425, ____owner_0)); }
	inline GObject_t2662234644 * get__owner_0() const { return ____owner_0; }
	inline GObject_t2662234644 ** get_address_of__owner_0() { return &____owner_0; }
	inline void set__owner_0(GObject_t2662234644 * value)
	{
		____owner_0 = value;
		Il2CppCodeGenWriteBarrier(&____owner_0, value);
	}

	inline static int32_t get_offset_of__target_1() { return static_cast<int32_t>(offsetof(RelationItem_t2877281425, ____target_1)); }
	inline GObject_t2662234644 * get__target_1() const { return ____target_1; }
	inline GObject_t2662234644 ** get_address_of__target_1() { return &____target_1; }
	inline void set__target_1(GObject_t2662234644 * value)
	{
		____target_1 = value;
		Il2CppCodeGenWriteBarrier(&____target_1, value);
	}

	inline static int32_t get_offset_of__defs_2() { return static_cast<int32_t>(offsetof(RelationItem_t2877281425, ____defs_2)); }
	inline List_1_t3527926751 * get__defs_2() const { return ____defs_2; }
	inline List_1_t3527926751 ** get_address_of__defs_2() { return &____defs_2; }
	inline void set__defs_2(List_1_t3527926751 * value)
	{
		____defs_2 = value;
		Il2CppCodeGenWriteBarrier(&____defs_2, value);
	}

	inline static int32_t get_offset_of__targetData_3() { return static_cast<int32_t>(offsetof(RelationItem_t2877281425, ____targetData_3)); }
	inline Vector4_t2243707581  get__targetData_3() const { return ____targetData_3; }
	inline Vector4_t2243707581 * get_address_of__targetData_3() { return &____targetData_3; }
	inline void set__targetData_3(Vector4_t2243707581  value)
	{
		____targetData_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

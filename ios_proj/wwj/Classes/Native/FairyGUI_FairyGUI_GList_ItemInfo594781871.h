#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// FairyGUI.GObject
struct GObject_t2662234644;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.GList/ItemInfo
struct  ItemInfo_t594781871  : public Il2CppObject
{
public:
	// UnityEngine.Vector2 FairyGUI.GList/ItemInfo::size
	Vector2_t2243707579  ___size_0;
	// FairyGUI.GObject FairyGUI.GList/ItemInfo::obj
	GObject_t2662234644 * ___obj_1;
	// System.UInt32 FairyGUI.GList/ItemInfo::updateFlag
	uint32_t ___updateFlag_2;

public:
	inline static int32_t get_offset_of_size_0() { return static_cast<int32_t>(offsetof(ItemInfo_t594781871, ___size_0)); }
	inline Vector2_t2243707579  get_size_0() const { return ___size_0; }
	inline Vector2_t2243707579 * get_address_of_size_0() { return &___size_0; }
	inline void set_size_0(Vector2_t2243707579  value)
	{
		___size_0 = value;
	}

	inline static int32_t get_offset_of_obj_1() { return static_cast<int32_t>(offsetof(ItemInfo_t594781871, ___obj_1)); }
	inline GObject_t2662234644 * get_obj_1() const { return ___obj_1; }
	inline GObject_t2662234644 ** get_address_of_obj_1() { return &___obj_1; }
	inline void set_obj_1(GObject_t2662234644 * value)
	{
		___obj_1 = value;
		Il2CppCodeGenWriteBarrier(&___obj_1, value);
	}

	inline static int32_t get_offset_of_updateFlag_2() { return static_cast<int32_t>(offsetof(ItemInfo_t594781871, ___updateFlag_2)); }
	inline uint32_t get_updateFlag_2() const { return ___updateFlag_2; }
	inline uint32_t* get_address_of_updateFlag_2() { return &___updateFlag_2; }
	inline void set_updateFlag_2(uint32_t value)
	{
		___updateFlag_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

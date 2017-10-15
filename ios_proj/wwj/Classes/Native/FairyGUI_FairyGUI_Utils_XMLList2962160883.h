#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.List`1<FairyGUI.Utils.XML>
struct List_1_t195075711;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.Utils.XMLList
struct  XMLList_t2962160883  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<FairyGUI.Utils.XML> FairyGUI.Utils.XMLList::rawList
	List_1_t195075711 * ___rawList_0;

public:
	inline static int32_t get_offset_of_rawList_0() { return static_cast<int32_t>(offsetof(XMLList_t2962160883, ___rawList_0)); }
	inline List_1_t195075711 * get_rawList_0() const { return ___rawList_0; }
	inline List_1_t195075711 ** get_address_of_rawList_0() { return &___rawList_0; }
	inline void set_rawList_0(List_1_t195075711 * value)
	{
		___rawList_0 = value;
		Il2CppCodeGenWriteBarrier(&___rawList_0, value);
	}
};

struct XMLList_t2962160883_StaticFields
{
public:
	// System.Collections.Generic.List`1<FairyGUI.Utils.XML> FairyGUI.Utils.XMLList::_tmpList
	List_1_t195075711 * ____tmpList_1;

public:
	inline static int32_t get_offset_of__tmpList_1() { return static_cast<int32_t>(offsetof(XMLList_t2962160883_StaticFields, ____tmpList_1)); }
	inline List_1_t195075711 * get__tmpList_1() const { return ____tmpList_1; }
	inline List_1_t195075711 ** get_address_of__tmpList_1() { return &____tmpList_1; }
	inline void set__tmpList_1(List_1_t195075711 * value)
	{
		____tmpList_1 = value;
		Il2CppCodeGenWriteBarrier(&____tmpList_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// FairyGUI.PackageItem
struct PackageItem_t1874577185;
// System.String
struct String_t;
// FairyGUI.Utils.XML
struct XML_t825954579;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.DisplayListItem
struct  DisplayListItem_t527609731  : public Il2CppObject
{
public:
	// FairyGUI.PackageItem FairyGUI.DisplayListItem::packageItem
	PackageItem_t1874577185 * ___packageItem_0;
	// System.String FairyGUI.DisplayListItem::type
	String_t* ___type_1;
	// FairyGUI.Utils.XML FairyGUI.DisplayListItem::desc
	XML_t825954579 * ___desc_2;
	// System.Int32 FairyGUI.DisplayListItem::listItemCount
	int32_t ___listItemCount_3;

public:
	inline static int32_t get_offset_of_packageItem_0() { return static_cast<int32_t>(offsetof(DisplayListItem_t527609731, ___packageItem_0)); }
	inline PackageItem_t1874577185 * get_packageItem_0() const { return ___packageItem_0; }
	inline PackageItem_t1874577185 ** get_address_of_packageItem_0() { return &___packageItem_0; }
	inline void set_packageItem_0(PackageItem_t1874577185 * value)
	{
		___packageItem_0 = value;
		Il2CppCodeGenWriteBarrier(&___packageItem_0, value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(DisplayListItem_t527609731, ___type_1)); }
	inline String_t* get_type_1() const { return ___type_1; }
	inline String_t** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(String_t* value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier(&___type_1, value);
	}

	inline static int32_t get_offset_of_desc_2() { return static_cast<int32_t>(offsetof(DisplayListItem_t527609731, ___desc_2)); }
	inline XML_t825954579 * get_desc_2() const { return ___desc_2; }
	inline XML_t825954579 ** get_address_of_desc_2() { return &___desc_2; }
	inline void set_desc_2(XML_t825954579 * value)
	{
		___desc_2 = value;
		Il2CppCodeGenWriteBarrier(&___desc_2, value);
	}

	inline static int32_t get_offset_of_listItemCount_3() { return static_cast<int32_t>(offsetof(DisplayListItem_t527609731, ___listItemCount_3)); }
	inline int32_t get_listItemCount_3() const { return ___listItemCount_3; }
	inline int32_t* get_address_of_listItemCount_3() { return &___listItemCount_3; }
	inline void set_listItemCount_3(int32_t value)
	{
		___listItemCount_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

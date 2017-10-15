#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "FairyGUI_FairyGUI_GearBase3731708816.h"

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.GearText
struct  GearText_t2609056882  : public GearBase_t3731708816
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> FairyGUI.GearText::_storage
	Dictionary_2_t3943999495 * ____storage_8;
	// System.String FairyGUI.GearText::_default
	String_t* ____default_9;

public:
	inline static int32_t get_offset_of__storage_8() { return static_cast<int32_t>(offsetof(GearText_t2609056882, ____storage_8)); }
	inline Dictionary_2_t3943999495 * get__storage_8() const { return ____storage_8; }
	inline Dictionary_2_t3943999495 ** get_address_of__storage_8() { return &____storage_8; }
	inline void set__storage_8(Dictionary_2_t3943999495 * value)
	{
		____storage_8 = value;
		Il2CppCodeGenWriteBarrier(&____storage_8, value);
	}

	inline static int32_t get_offset_of__default_9() { return static_cast<int32_t>(offsetof(GearText_t2609056882, ____default_9)); }
	inline String_t* get__default_9() const { return ____default_9; }
	inline String_t** get_address_of__default_9() { return &____default_9; }
	inline void set__default_9(String_t* value)
	{
		____default_9 = value;
		Il2CppCodeGenWriteBarrier(&____default_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

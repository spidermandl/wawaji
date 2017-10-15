#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.Dictionary`2<System.String,FairyGUI.BaseFont>
struct Dictionary_2_t2792129060;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.FontManager
struct  FontManager_t3870967070  : public Il2CppObject
{
public:

public:
};

struct FontManager_t3870967070_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,FairyGUI.BaseFont> FairyGUI.FontManager::sFontFactory
	Dictionary_2_t2792129060 * ___sFontFactory_0;

public:
	inline static int32_t get_offset_of_sFontFactory_0() { return static_cast<int32_t>(offsetof(FontManager_t3870967070_StaticFields, ___sFontFactory_0)); }
	inline Dictionary_2_t2792129060 * get_sFontFactory_0() const { return ___sFontFactory_0; }
	inline Dictionary_2_t2792129060 ** get_address_of_sFontFactory_0() { return &___sFontFactory_0; }
	inline void set_sFontFactory_0(Dictionary_2_t2792129060 * value)
	{
		___sFontFactory_0 = value;
		Il2CppCodeGenWriteBarrier(&___sFontFactory_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

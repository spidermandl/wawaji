#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "FairyGUI_FairyGUI_RelationType3865160254.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.RelationDef
struct  RelationDef_t4158805619  : public Il2CppObject
{
public:
	// System.Boolean FairyGUI.RelationDef::percent
	bool ___percent_0;
	// FairyGUI.RelationType FairyGUI.RelationDef::type
	int32_t ___type_1;

public:
	inline static int32_t get_offset_of_percent_0() { return static_cast<int32_t>(offsetof(RelationDef_t4158805619, ___percent_0)); }
	inline bool get_percent_0() const { return ___percent_0; }
	inline bool* get_address_of_percent_0() { return &___percent_0; }
	inline void set_percent_0(bool value)
	{
		___percent_0 = value;
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(RelationDef_t4158805619, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

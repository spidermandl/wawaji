#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.Dictionary`2<System.String,DG.Tweening.Ease>
struct Dictionary_2_t122332262;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.FieldTypes
struct  FieldTypes_t910874675  : public Il2CppObject
{
public:

public:
};

struct FieldTypes_t910874675_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,DG.Tweening.Ease> FairyGUI.FieldTypes::EaseTypeMap
	Dictionary_2_t122332262 * ___EaseTypeMap_0;

public:
	inline static int32_t get_offset_of_EaseTypeMap_0() { return static_cast<int32_t>(offsetof(FieldTypes_t910874675_StaticFields, ___EaseTypeMap_0)); }
	inline Dictionary_2_t122332262 * get_EaseTypeMap_0() const { return ___EaseTypeMap_0; }
	inline Dictionary_2_t122332262 ** get_address_of_EaseTypeMap_0() { return &___EaseTypeMap_0; }
	inline void set_EaseTypeMap_0(Dictionary_2_t122332262 * value)
	{
		___EaseTypeMap_0 = value;
		Il2CppCodeGenWriteBarrier(&___EaseTypeMap_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

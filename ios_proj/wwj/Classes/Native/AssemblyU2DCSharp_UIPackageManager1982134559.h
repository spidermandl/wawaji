#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;
// UIPackageManager
struct UIPackageManager_t1982134559;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIPackageManager
struct  UIPackageManager_t1982134559  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> UIPackageManager::packageMap
	Dictionary_2_t3986656710 * ___packageMap_0;

public:
	inline static int32_t get_offset_of_packageMap_0() { return static_cast<int32_t>(offsetof(UIPackageManager_t1982134559, ___packageMap_0)); }
	inline Dictionary_2_t3986656710 * get_packageMap_0() const { return ___packageMap_0; }
	inline Dictionary_2_t3986656710 ** get_address_of_packageMap_0() { return &___packageMap_0; }
	inline void set_packageMap_0(Dictionary_2_t3986656710 * value)
	{
		___packageMap_0 = value;
		Il2CppCodeGenWriteBarrier(&___packageMap_0, value);
	}
};

struct UIPackageManager_t1982134559_StaticFields
{
public:
	// UIPackageManager UIPackageManager::instance
	UIPackageManager_t1982134559 * ___instance_1;

public:
	inline static int32_t get_offset_of_instance_1() { return static_cast<int32_t>(offsetof(UIPackageManager_t1982134559_StaticFields, ___instance_1)); }
	inline UIPackageManager_t1982134559 * get_instance_1() const { return ___instance_1; }
	inline UIPackageManager_t1982134559 ** get_address_of_instance_1() { return &___instance_1; }
	inline void set_instance_1(UIPackageManager_t1982134559 * value)
	{
		___instance_1 = value;
		Il2CppCodeGenWriteBarrier(&___instance_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.Dictionary`2<System.String,FairyGUI.UIObjectFactory/GComponentCreator>
struct Dictionary_2_t4279546974;
// FairyGUI.UIObjectFactory/GLoaderCreator
struct GLoaderCreator_t2137203678;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.UIObjectFactory
struct  UIObjectFactory_t1828660183  : public Il2CppObject
{
public:

public:
};

struct UIObjectFactory_t1828660183_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,FairyGUI.UIObjectFactory/GComponentCreator> FairyGUI.UIObjectFactory::packageItemExtensions
	Dictionary_2_t4279546974 * ___packageItemExtensions_0;
	// FairyGUI.UIObjectFactory/GLoaderCreator FairyGUI.UIObjectFactory::loaderCreator
	GLoaderCreator_t2137203678 * ___loaderCreator_1;

public:
	inline static int32_t get_offset_of_packageItemExtensions_0() { return static_cast<int32_t>(offsetof(UIObjectFactory_t1828660183_StaticFields, ___packageItemExtensions_0)); }
	inline Dictionary_2_t4279546974 * get_packageItemExtensions_0() const { return ___packageItemExtensions_0; }
	inline Dictionary_2_t4279546974 ** get_address_of_packageItemExtensions_0() { return &___packageItemExtensions_0; }
	inline void set_packageItemExtensions_0(Dictionary_2_t4279546974 * value)
	{
		___packageItemExtensions_0 = value;
		Il2CppCodeGenWriteBarrier(&___packageItemExtensions_0, value);
	}

	inline static int32_t get_offset_of_loaderCreator_1() { return static_cast<int32_t>(offsetof(UIObjectFactory_t1828660183_StaticFields, ___loaderCreator_1)); }
	inline GLoaderCreator_t2137203678 * get_loaderCreator_1() const { return ___loaderCreator_1; }
	inline GLoaderCreator_t2137203678 ** get_address_of_loaderCreator_1() { return &___loaderCreator_1; }
	inline void set_loaderCreator_1(GLoaderCreator_t2137203678 * value)
	{
		___loaderCreator_1 = value;
		Il2CppCodeGenWriteBarrier(&___loaderCreator_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

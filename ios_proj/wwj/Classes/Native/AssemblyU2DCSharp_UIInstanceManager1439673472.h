#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// UIInstanceManager
struct UIInstanceManager_t1439673472;
// System.Collections.Generic.Stack`1<UIMain>
struct Stack_1_t1746701959;
// System.Collections.Generic.Stack`1<System.String>
struct Stack_1_t3116948387;
// System.Collections.Generic.Dictionary`2<UIMain,System.Collections.Generic.List`1<BaseWindow>>
struct Dictionary_2_t2117524009;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIInstanceManager
struct  UIInstanceManager_t1439673472  : public Il2CppObject
{
public:
	// System.Collections.Generic.Stack`1<UIMain> UIInstanceManager::uiStack
	Stack_1_t1746701959 * ___uiStack_1;
	// System.Collections.Generic.Stack`1<System.String> UIInstanceManager::logStack
	Stack_1_t3116948387 * ___logStack_2;
	// System.Collections.Generic.Dictionary`2<UIMain,System.Collections.Generic.List`1<BaseWindow>> UIInstanceManager::uiWins
	Dictionary_2_t2117524009 * ___uiWins_3;

public:
	inline static int32_t get_offset_of_uiStack_1() { return static_cast<int32_t>(offsetof(UIInstanceManager_t1439673472, ___uiStack_1)); }
	inline Stack_1_t1746701959 * get_uiStack_1() const { return ___uiStack_1; }
	inline Stack_1_t1746701959 ** get_address_of_uiStack_1() { return &___uiStack_1; }
	inline void set_uiStack_1(Stack_1_t1746701959 * value)
	{
		___uiStack_1 = value;
		Il2CppCodeGenWriteBarrier(&___uiStack_1, value);
	}

	inline static int32_t get_offset_of_logStack_2() { return static_cast<int32_t>(offsetof(UIInstanceManager_t1439673472, ___logStack_2)); }
	inline Stack_1_t3116948387 * get_logStack_2() const { return ___logStack_2; }
	inline Stack_1_t3116948387 ** get_address_of_logStack_2() { return &___logStack_2; }
	inline void set_logStack_2(Stack_1_t3116948387 * value)
	{
		___logStack_2 = value;
		Il2CppCodeGenWriteBarrier(&___logStack_2, value);
	}

	inline static int32_t get_offset_of_uiWins_3() { return static_cast<int32_t>(offsetof(UIInstanceManager_t1439673472, ___uiWins_3)); }
	inline Dictionary_2_t2117524009 * get_uiWins_3() const { return ___uiWins_3; }
	inline Dictionary_2_t2117524009 ** get_address_of_uiWins_3() { return &___uiWins_3; }
	inline void set_uiWins_3(Dictionary_2_t2117524009 * value)
	{
		___uiWins_3 = value;
		Il2CppCodeGenWriteBarrier(&___uiWins_3, value);
	}
};

struct UIInstanceManager_t1439673472_StaticFields
{
public:
	// UIInstanceManager UIInstanceManager::instance
	UIInstanceManager_t1439673472 * ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(UIInstanceManager_t1439673472_StaticFields, ___instance_0)); }
	inline UIInstanceManager_t1439673472 * get_instance_0() const { return ___instance_0; }
	inline UIInstanceManager_t1439673472 ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(UIInstanceManager_t1439673472 * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier(&___instance_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

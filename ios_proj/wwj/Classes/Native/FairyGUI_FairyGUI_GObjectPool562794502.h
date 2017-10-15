#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// FairyGUI.GObjectPool/InitCallbackDelegate
struct InitCallbackDelegate_t701852275;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Queue`1<FairyGUI.GObject>>
struct Dictionary_2_t101703445;
// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.GObjectPool
struct  GObjectPool_t562794502  : public Il2CppObject
{
public:
	// FairyGUI.GObjectPool/InitCallbackDelegate FairyGUI.GObjectPool::initCallback
	InitCallbackDelegate_t701852275 * ___initCallback_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Queue`1<FairyGUI.GObject>> FairyGUI.GObjectPool::_pool
	Dictionary_2_t101703445 * ____pool_1;
	// UnityEngine.Transform FairyGUI.GObjectPool::_manager
	Transform_t3275118058 * ____manager_2;

public:
	inline static int32_t get_offset_of_initCallback_0() { return static_cast<int32_t>(offsetof(GObjectPool_t562794502, ___initCallback_0)); }
	inline InitCallbackDelegate_t701852275 * get_initCallback_0() const { return ___initCallback_0; }
	inline InitCallbackDelegate_t701852275 ** get_address_of_initCallback_0() { return &___initCallback_0; }
	inline void set_initCallback_0(InitCallbackDelegate_t701852275 * value)
	{
		___initCallback_0 = value;
		Il2CppCodeGenWriteBarrier(&___initCallback_0, value);
	}

	inline static int32_t get_offset_of__pool_1() { return static_cast<int32_t>(offsetof(GObjectPool_t562794502, ____pool_1)); }
	inline Dictionary_2_t101703445 * get__pool_1() const { return ____pool_1; }
	inline Dictionary_2_t101703445 ** get_address_of__pool_1() { return &____pool_1; }
	inline void set__pool_1(Dictionary_2_t101703445 * value)
	{
		____pool_1 = value;
		Il2CppCodeGenWriteBarrier(&____pool_1, value);
	}

	inline static int32_t get_offset_of__manager_2() { return static_cast<int32_t>(offsetof(GObjectPool_t562794502, ____manager_2)); }
	inline Transform_t3275118058 * get__manager_2() const { return ____manager_2; }
	inline Transform_t3275118058 ** get_address_of__manager_2() { return &____manager_2; }
	inline void set__manager_2(Transform_t3275118058 * value)
	{
		____manager_2 = value;
		Il2CppCodeGenWriteBarrier(&____manager_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

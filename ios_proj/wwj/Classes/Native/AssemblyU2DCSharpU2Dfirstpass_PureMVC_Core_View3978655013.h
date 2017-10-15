#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,PureMVC.Interfaces.IMediator>
struct Dictionary_2_t446493006;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IList`1<PureMVC.Interfaces.IObserver>>
struct Dictionary_2_t2163157894;
// System.Collections.Generic.Dictionary`2<System.String,PureMVC.Interfaces.IView>
struct Dictionary_2_t3346335334;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PureMVC.Core.View
struct  View_t3978655013  : public Il2CppObject
{
public:
	// System.String PureMVC.Core.View::multitonKey
	String_t* ___multitonKey_0;
	// System.Collections.Generic.Dictionary`2<System.String,PureMVC.Interfaces.IMediator> PureMVC.Core.View::mediatorMap
	Dictionary_2_t446493006 * ___mediatorMap_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IList`1<PureMVC.Interfaces.IObserver>> PureMVC.Core.View::observerMap
	Dictionary_2_t2163157894 * ___observerMap_2;

public:
	inline static int32_t get_offset_of_multitonKey_0() { return static_cast<int32_t>(offsetof(View_t3978655013, ___multitonKey_0)); }
	inline String_t* get_multitonKey_0() const { return ___multitonKey_0; }
	inline String_t** get_address_of_multitonKey_0() { return &___multitonKey_0; }
	inline void set_multitonKey_0(String_t* value)
	{
		___multitonKey_0 = value;
		Il2CppCodeGenWriteBarrier(&___multitonKey_0, value);
	}

	inline static int32_t get_offset_of_mediatorMap_1() { return static_cast<int32_t>(offsetof(View_t3978655013, ___mediatorMap_1)); }
	inline Dictionary_2_t446493006 * get_mediatorMap_1() const { return ___mediatorMap_1; }
	inline Dictionary_2_t446493006 ** get_address_of_mediatorMap_1() { return &___mediatorMap_1; }
	inline void set_mediatorMap_1(Dictionary_2_t446493006 * value)
	{
		___mediatorMap_1 = value;
		Il2CppCodeGenWriteBarrier(&___mediatorMap_1, value);
	}

	inline static int32_t get_offset_of_observerMap_2() { return static_cast<int32_t>(offsetof(View_t3978655013, ___observerMap_2)); }
	inline Dictionary_2_t2163157894 * get_observerMap_2() const { return ___observerMap_2; }
	inline Dictionary_2_t2163157894 ** get_address_of_observerMap_2() { return &___observerMap_2; }
	inline void set_observerMap_2(Dictionary_2_t2163157894 * value)
	{
		___observerMap_2 = value;
		Il2CppCodeGenWriteBarrier(&___observerMap_2, value);
	}
};

struct View_t3978655013_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,PureMVC.Interfaces.IView> PureMVC.Core.View::instanceMap
	Dictionary_2_t3346335334 * ___instanceMap_3;

public:
	inline static int32_t get_offset_of_instanceMap_3() { return static_cast<int32_t>(offsetof(View_t3978655013_StaticFields, ___instanceMap_3)); }
	inline Dictionary_2_t3346335334 * get_instanceMap_3() const { return ___instanceMap_3; }
	inline Dictionary_2_t3346335334 ** get_address_of_instanceMap_3() { return &___instanceMap_3; }
	inline void set_instanceMap_3(Dictionary_2_t3346335334 * value)
	{
		___instanceMap_3 = value;
		Il2CppCodeGenWriteBarrier(&___instanceMap_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

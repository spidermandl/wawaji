#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// PureMVC.Interfaces.IView
struct IView_t1431556072;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Func`1<PureMVC.Interfaces.ICommand>>
struct Dictionary_2_t543728894;
// System.Collections.Generic.Dictionary`2<System.String,PureMVC.Interfaces.IController>
struct Dictionary_2_t3697833885;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PureMVC.Core.Controller
struct  Controller_t3661849354  : public Il2CppObject
{
public:
	// PureMVC.Interfaces.IView PureMVC.Core.Controller::view
	Il2CppObject * ___view_0;
	// System.String PureMVC.Core.Controller::multitonKey
	String_t* ___multitonKey_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Func`1<PureMVC.Interfaces.ICommand>> PureMVC.Core.Controller::commandMap
	Dictionary_2_t543728894 * ___commandMap_2;

public:
	inline static int32_t get_offset_of_view_0() { return static_cast<int32_t>(offsetof(Controller_t3661849354, ___view_0)); }
	inline Il2CppObject * get_view_0() const { return ___view_0; }
	inline Il2CppObject ** get_address_of_view_0() { return &___view_0; }
	inline void set_view_0(Il2CppObject * value)
	{
		___view_0 = value;
		Il2CppCodeGenWriteBarrier(&___view_0, value);
	}

	inline static int32_t get_offset_of_multitonKey_1() { return static_cast<int32_t>(offsetof(Controller_t3661849354, ___multitonKey_1)); }
	inline String_t* get_multitonKey_1() const { return ___multitonKey_1; }
	inline String_t** get_address_of_multitonKey_1() { return &___multitonKey_1; }
	inline void set_multitonKey_1(String_t* value)
	{
		___multitonKey_1 = value;
		Il2CppCodeGenWriteBarrier(&___multitonKey_1, value);
	}

	inline static int32_t get_offset_of_commandMap_2() { return static_cast<int32_t>(offsetof(Controller_t3661849354, ___commandMap_2)); }
	inline Dictionary_2_t543728894 * get_commandMap_2() const { return ___commandMap_2; }
	inline Dictionary_2_t543728894 ** get_address_of_commandMap_2() { return &___commandMap_2; }
	inline void set_commandMap_2(Dictionary_2_t543728894 * value)
	{
		___commandMap_2 = value;
		Il2CppCodeGenWriteBarrier(&___commandMap_2, value);
	}
};

struct Controller_t3661849354_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,PureMVC.Interfaces.IController> PureMVC.Core.Controller::instanceMap
	Dictionary_2_t3697833885 * ___instanceMap_3;

public:
	inline static int32_t get_offset_of_instanceMap_3() { return static_cast<int32_t>(offsetof(Controller_t3661849354_StaticFields, ___instanceMap_3)); }
	inline Dictionary_2_t3697833885 * get_instanceMap_3() const { return ___instanceMap_3; }
	inline Dictionary_2_t3697833885 ** get_address_of_instanceMap_3() { return &___instanceMap_3; }
	inline void set_instanceMap_3(Dictionary_2_t3697833885 * value)
	{
		___instanceMap_3 = value;
		Il2CppCodeGenWriteBarrier(&___instanceMap_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

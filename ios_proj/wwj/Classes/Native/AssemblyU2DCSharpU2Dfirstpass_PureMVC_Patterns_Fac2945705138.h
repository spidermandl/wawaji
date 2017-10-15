#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// PureMVC.Interfaces.IController
struct IController_t1783054623;
// PureMVC.Interfaces.IModel
struct IModel_t3717001454;
// PureMVC.Interfaces.IView
struct IView_t1431556072;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,PureMVC.Interfaces.IFacade>
struct Dictionary_2_t583066717;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PureMVC.Patterns.Facade.Facade
struct  Facade_t2945705138  : public Il2CppObject
{
public:
	// PureMVC.Interfaces.IController PureMVC.Patterns.Facade.Facade::controller
	Il2CppObject * ___controller_0;
	// PureMVC.Interfaces.IModel PureMVC.Patterns.Facade.Facade::model
	Il2CppObject * ___model_1;
	// PureMVC.Interfaces.IView PureMVC.Patterns.Facade.Facade::view
	Il2CppObject * ___view_2;
	// System.String PureMVC.Patterns.Facade.Facade::multitonKey
	String_t* ___multitonKey_3;

public:
	inline static int32_t get_offset_of_controller_0() { return static_cast<int32_t>(offsetof(Facade_t2945705138, ___controller_0)); }
	inline Il2CppObject * get_controller_0() const { return ___controller_0; }
	inline Il2CppObject ** get_address_of_controller_0() { return &___controller_0; }
	inline void set_controller_0(Il2CppObject * value)
	{
		___controller_0 = value;
		Il2CppCodeGenWriteBarrier(&___controller_0, value);
	}

	inline static int32_t get_offset_of_model_1() { return static_cast<int32_t>(offsetof(Facade_t2945705138, ___model_1)); }
	inline Il2CppObject * get_model_1() const { return ___model_1; }
	inline Il2CppObject ** get_address_of_model_1() { return &___model_1; }
	inline void set_model_1(Il2CppObject * value)
	{
		___model_1 = value;
		Il2CppCodeGenWriteBarrier(&___model_1, value);
	}

	inline static int32_t get_offset_of_view_2() { return static_cast<int32_t>(offsetof(Facade_t2945705138, ___view_2)); }
	inline Il2CppObject * get_view_2() const { return ___view_2; }
	inline Il2CppObject ** get_address_of_view_2() { return &___view_2; }
	inline void set_view_2(Il2CppObject * value)
	{
		___view_2 = value;
		Il2CppCodeGenWriteBarrier(&___view_2, value);
	}

	inline static int32_t get_offset_of_multitonKey_3() { return static_cast<int32_t>(offsetof(Facade_t2945705138, ___multitonKey_3)); }
	inline String_t* get_multitonKey_3() const { return ___multitonKey_3; }
	inline String_t** get_address_of_multitonKey_3() { return &___multitonKey_3; }
	inline void set_multitonKey_3(String_t* value)
	{
		___multitonKey_3 = value;
		Il2CppCodeGenWriteBarrier(&___multitonKey_3, value);
	}
};

struct Facade_t2945705138_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,PureMVC.Interfaces.IFacade> PureMVC.Patterns.Facade.Facade::instanceMap
	Dictionary_2_t583066717 * ___instanceMap_4;

public:
	inline static int32_t get_offset_of_instanceMap_4() { return static_cast<int32_t>(offsetof(Facade_t2945705138_StaticFields, ___instanceMap_4)); }
	inline Dictionary_2_t583066717 * get_instanceMap_4() const { return ___instanceMap_4; }
	inline Dictionary_2_t583066717 ** get_address_of_instanceMap_4() { return &___instanceMap_4; }
	inline void set_instanceMap_4(Dictionary_2_t583066717 * value)
	{
		___instanceMap_4 = value;
		Il2CppCodeGenWriteBarrier(&___instanceMap_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

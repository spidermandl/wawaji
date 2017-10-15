#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_PureMVC_Patterns_Obs1254524638.h"

// System.String
struct String_t;
// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PureMVC.Patterns.Mediator.Mediator
struct  Mediator_t2789785455  : public Notifier_t1254524638
{
public:
	// System.String PureMVC.Patterns.Mediator.Mediator::<MediatorName>k__BackingField
	String_t* ___U3CMediatorNameU3Ek__BackingField_3;
	// System.Object PureMVC.Patterns.Mediator.Mediator::<ViewComponent>k__BackingField
	Il2CppObject * ___U3CViewComponentU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CMediatorNameU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Mediator_t2789785455, ___U3CMediatorNameU3Ek__BackingField_3)); }
	inline String_t* get_U3CMediatorNameU3Ek__BackingField_3() const { return ___U3CMediatorNameU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CMediatorNameU3Ek__BackingField_3() { return &___U3CMediatorNameU3Ek__BackingField_3; }
	inline void set_U3CMediatorNameU3Ek__BackingField_3(String_t* value)
	{
		___U3CMediatorNameU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CMediatorNameU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_U3CViewComponentU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Mediator_t2789785455, ___U3CViewComponentU3Ek__BackingField_4)); }
	inline Il2CppObject * get_U3CViewComponentU3Ek__BackingField_4() const { return ___U3CViewComponentU3Ek__BackingField_4; }
	inline Il2CppObject ** get_address_of_U3CViewComponentU3Ek__BackingField_4() { return &___U3CViewComponentU3Ek__BackingField_4; }
	inline void set_U3CViewComponentU3Ek__BackingField_4(Il2CppObject * value)
	{
		___U3CViewComponentU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CViewComponentU3Ek__BackingField_4, value);
	}
};

struct Mediator_t2789785455_StaticFields
{
public:
	// System.String PureMVC.Patterns.Mediator.Mediator::NAME
	String_t* ___NAME_2;

public:
	inline static int32_t get_offset_of_NAME_2() { return static_cast<int32_t>(offsetof(Mediator_t2789785455_StaticFields, ___NAME_2)); }
	inline String_t* get_NAME_2() const { return ___NAME_2; }
	inline String_t** get_address_of_NAME_2() { return &___NAME_2; }
	inline void set_NAME_2(String_t* value)
	{
		___NAME_2 = value;
		Il2CppCodeGenWriteBarrier(&___NAME_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

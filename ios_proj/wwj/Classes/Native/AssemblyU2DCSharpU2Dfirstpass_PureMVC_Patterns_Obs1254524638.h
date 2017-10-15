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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PureMVC.Patterns.Observer.Notifier
struct  Notifier_t1254524638  : public Il2CppObject
{
public:
	// System.String PureMVC.Patterns.Observer.Notifier::<MultitonKey>k__BackingField
	String_t* ___U3CMultitonKeyU3Ek__BackingField_0;
	// System.String PureMVC.Patterns.Observer.Notifier::MULTITON_MSG
	String_t* ___MULTITON_MSG_1;

public:
	inline static int32_t get_offset_of_U3CMultitonKeyU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Notifier_t1254524638, ___U3CMultitonKeyU3Ek__BackingField_0)); }
	inline String_t* get_U3CMultitonKeyU3Ek__BackingField_0() const { return ___U3CMultitonKeyU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CMultitonKeyU3Ek__BackingField_0() { return &___U3CMultitonKeyU3Ek__BackingField_0; }
	inline void set_U3CMultitonKeyU3Ek__BackingField_0(String_t* value)
	{
		___U3CMultitonKeyU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CMultitonKeyU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_MULTITON_MSG_1() { return static_cast<int32_t>(offsetof(Notifier_t1254524638, ___MULTITON_MSG_1)); }
	inline String_t* get_MULTITON_MSG_1() const { return ___MULTITON_MSG_1; }
	inline String_t** get_address_of_MULTITON_MSG_1() { return &___MULTITON_MSG_1; }
	inline void set_MULTITON_MSG_1(String_t* value)
	{
		___MULTITON_MSG_1 = value;
		Il2CppCodeGenWriteBarrier(&___MULTITON_MSG_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

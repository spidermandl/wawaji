#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Action`1<PureMVC.Interfaces.INotification>
struct Action_1_t418690292;
// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PureMVC.Patterns.Observer.Observer
struct  Observer_t2911766338  : public Il2CppObject
{
public:
	// System.Action`1<PureMVC.Interfaces.INotification> PureMVC.Patterns.Observer.Observer::<NotifyMethod>k__BackingField
	Action_1_t418690292 * ___U3CNotifyMethodU3Ek__BackingField_0;
	// System.Object PureMVC.Patterns.Observer.Observer::<NotifyContext>k__BackingField
	Il2CppObject * ___U3CNotifyContextU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CNotifyMethodU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Observer_t2911766338, ___U3CNotifyMethodU3Ek__BackingField_0)); }
	inline Action_1_t418690292 * get_U3CNotifyMethodU3Ek__BackingField_0() const { return ___U3CNotifyMethodU3Ek__BackingField_0; }
	inline Action_1_t418690292 ** get_address_of_U3CNotifyMethodU3Ek__BackingField_0() { return &___U3CNotifyMethodU3Ek__BackingField_0; }
	inline void set_U3CNotifyMethodU3Ek__BackingField_0(Action_1_t418690292 * value)
	{
		___U3CNotifyMethodU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CNotifyMethodU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CNotifyContextU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Observer_t2911766338, ___U3CNotifyContextU3Ek__BackingField_1)); }
	inline Il2CppObject * get_U3CNotifyContextU3Ek__BackingField_1() const { return ___U3CNotifyContextU3Ek__BackingField_1; }
	inline Il2CppObject ** get_address_of_U3CNotifyContextU3Ek__BackingField_1() { return &___U3CNotifyContextU3Ek__BackingField_1; }
	inline void set_U3CNotifyContextU3Ek__BackingField_1(Il2CppObject * value)
	{
		___U3CNotifyContextU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CNotifyContextU3Ek__BackingField_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// FairyGUI.EventDispatcher
struct EventDispatcher_t4068415185;
// FairyGUI.EventBridge
struct EventBridge_t670284321;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.EventListener
struct  EventListener_t2764096410  : public Il2CppObject
{
public:
	// FairyGUI.EventDispatcher FairyGUI.EventListener::<owner>k__BackingField
	EventDispatcher_t4068415185 * ___U3CownerU3Ek__BackingField_0;
	// FairyGUI.EventBridge FairyGUI.EventListener::_bridge
	EventBridge_t670284321 * ____bridge_1;
	// System.String FairyGUI.EventListener::_type
	String_t* ____type_2;

public:
	inline static int32_t get_offset_of_U3CownerU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(EventListener_t2764096410, ___U3CownerU3Ek__BackingField_0)); }
	inline EventDispatcher_t4068415185 * get_U3CownerU3Ek__BackingField_0() const { return ___U3CownerU3Ek__BackingField_0; }
	inline EventDispatcher_t4068415185 ** get_address_of_U3CownerU3Ek__BackingField_0() { return &___U3CownerU3Ek__BackingField_0; }
	inline void set_U3CownerU3Ek__BackingField_0(EventDispatcher_t4068415185 * value)
	{
		___U3CownerU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CownerU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of__bridge_1() { return static_cast<int32_t>(offsetof(EventListener_t2764096410, ____bridge_1)); }
	inline EventBridge_t670284321 * get__bridge_1() const { return ____bridge_1; }
	inline EventBridge_t670284321 ** get_address_of__bridge_1() { return &____bridge_1; }
	inline void set__bridge_1(EventBridge_t670284321 * value)
	{
		____bridge_1 = value;
		Il2CppCodeGenWriteBarrier(&____bridge_1, value);
	}

	inline static int32_t get_offset_of__type_2() { return static_cast<int32_t>(offsetof(EventListener_t2764096410, ____type_2)); }
	inline String_t* get__type_2() const { return ____type_2; }
	inline String_t** get_address_of__type_2() { return &____type_2; }
	inline void set__type_2(String_t* value)
	{
		____type_2 = value;
		Il2CppCodeGenWriteBarrier(&____type_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

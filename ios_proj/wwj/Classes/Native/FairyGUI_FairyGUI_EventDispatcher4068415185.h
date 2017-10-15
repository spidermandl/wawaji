#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.Dictionary`2<System.String,FairyGUI.EventBridge>
struct Dictionary_2_t2585063583;
// FairyGUI.InputEvent
struct InputEvent_t3297021522;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.EventDispatcher
struct  EventDispatcher_t4068415185  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,FairyGUI.EventBridge> FairyGUI.EventDispatcher::_dic
	Dictionary_2_t2585063583 * ____dic_0;

public:
	inline static int32_t get_offset_of__dic_0() { return static_cast<int32_t>(offsetof(EventDispatcher_t4068415185, ____dic_0)); }
	inline Dictionary_2_t2585063583 * get__dic_0() const { return ____dic_0; }
	inline Dictionary_2_t2585063583 ** get_address_of__dic_0() { return &____dic_0; }
	inline void set__dic_0(Dictionary_2_t2585063583 * value)
	{
		____dic_0 = value;
		Il2CppCodeGenWriteBarrier(&____dic_0, value);
	}
};

struct EventDispatcher_t4068415185_StaticFields
{
public:
	// FairyGUI.InputEvent FairyGUI.EventDispatcher::sCurrentInputEvent
	InputEvent_t3297021522 * ___sCurrentInputEvent_1;

public:
	inline static int32_t get_offset_of_sCurrentInputEvent_1() { return static_cast<int32_t>(offsetof(EventDispatcher_t4068415185_StaticFields, ___sCurrentInputEvent_1)); }
	inline InputEvent_t3297021522 * get_sCurrentInputEvent_1() const { return ___sCurrentInputEvent_1; }
	inline InputEvent_t3297021522 ** get_address_of_sCurrentInputEvent_1() { return &___sCurrentInputEvent_1; }
	inline void set_sCurrentInputEvent_1(InputEvent_t3297021522 * value)
	{
		___sCurrentInputEvent_1 = value;
		Il2CppCodeGenWriteBarrier(&___sCurrentInputEvent_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

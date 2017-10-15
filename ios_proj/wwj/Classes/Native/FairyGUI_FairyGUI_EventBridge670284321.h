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
// FairyGUI.EventCallback0
struct EventCallback0_t422277839;
// FairyGUI.EventCallback1
struct EventCallback1_t422277840;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.EventBridge
struct  EventBridge_t670284321  : public Il2CppObject
{
public:
	// FairyGUI.EventDispatcher FairyGUI.EventBridge::owner
	EventDispatcher_t4068415185 * ___owner_0;
	// FairyGUI.EventCallback0 FairyGUI.EventBridge::_callback0
	EventCallback0_t422277839 * ____callback0_1;
	// FairyGUI.EventCallback1 FairyGUI.EventBridge::_callback1
	EventCallback1_t422277840 * ____callback1_2;
	// FairyGUI.EventCallback1 FairyGUI.EventBridge::_captureCallback
	EventCallback1_t422277840 * ____captureCallback_3;
	// System.Boolean FairyGUI.EventBridge::_dispatching
	bool ____dispatching_4;

public:
	inline static int32_t get_offset_of_owner_0() { return static_cast<int32_t>(offsetof(EventBridge_t670284321, ___owner_0)); }
	inline EventDispatcher_t4068415185 * get_owner_0() const { return ___owner_0; }
	inline EventDispatcher_t4068415185 ** get_address_of_owner_0() { return &___owner_0; }
	inline void set_owner_0(EventDispatcher_t4068415185 * value)
	{
		___owner_0 = value;
		Il2CppCodeGenWriteBarrier(&___owner_0, value);
	}

	inline static int32_t get_offset_of__callback0_1() { return static_cast<int32_t>(offsetof(EventBridge_t670284321, ____callback0_1)); }
	inline EventCallback0_t422277839 * get__callback0_1() const { return ____callback0_1; }
	inline EventCallback0_t422277839 ** get_address_of__callback0_1() { return &____callback0_1; }
	inline void set__callback0_1(EventCallback0_t422277839 * value)
	{
		____callback0_1 = value;
		Il2CppCodeGenWriteBarrier(&____callback0_1, value);
	}

	inline static int32_t get_offset_of__callback1_2() { return static_cast<int32_t>(offsetof(EventBridge_t670284321, ____callback1_2)); }
	inline EventCallback1_t422277840 * get__callback1_2() const { return ____callback1_2; }
	inline EventCallback1_t422277840 ** get_address_of__callback1_2() { return &____callback1_2; }
	inline void set__callback1_2(EventCallback1_t422277840 * value)
	{
		____callback1_2 = value;
		Il2CppCodeGenWriteBarrier(&____callback1_2, value);
	}

	inline static int32_t get_offset_of__captureCallback_3() { return static_cast<int32_t>(offsetof(EventBridge_t670284321, ____captureCallback_3)); }
	inline EventCallback1_t422277840 * get__captureCallback_3() const { return ____captureCallback_3; }
	inline EventCallback1_t422277840 ** get_address_of__captureCallback_3() { return &____captureCallback_3; }
	inline void set__captureCallback_3(EventCallback1_t422277840 * value)
	{
		____captureCallback_3 = value;
		Il2CppCodeGenWriteBarrier(&____captureCallback_3, value);
	}

	inline static int32_t get_offset_of__dispatching_4() { return static_cast<int32_t>(offsetof(EventBridge_t670284321, ____dispatching_4)); }
	inline bool get__dispatching_4() const { return ____dispatching_4; }
	inline bool* get_address_of__dispatching_4() { return &____dispatching_4; }
	inline void set__dispatching_4(bool value)
	{
		____dispatching_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

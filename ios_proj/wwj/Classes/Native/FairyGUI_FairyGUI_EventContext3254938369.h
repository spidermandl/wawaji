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
// System.Object
struct Il2CppObject;
// FairyGUI.InputEvent
struct InputEvent_t3297021522;
// System.String
struct String_t;
// System.Collections.Generic.List`1<FairyGUI.EventBridge>
struct List_1_t39405453;
// System.Collections.Generic.Stack`1<FairyGUI.EventContext>
struct Stack_1_t47699227;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.EventContext
struct  EventContext_t3254938369  : public Il2CppObject
{
public:
	// FairyGUI.EventDispatcher FairyGUI.EventContext::<sender>k__BackingField
	EventDispatcher_t4068415185 * ___U3CsenderU3Ek__BackingField_0;
	// System.Object FairyGUI.EventContext::<initiator>k__BackingField
	Il2CppObject * ___U3CinitiatorU3Ek__BackingField_1;
	// FairyGUI.InputEvent FairyGUI.EventContext::<inputEvent>k__BackingField
	InputEvent_t3297021522 * ___U3CinputEventU3Ek__BackingField_2;
	// System.String FairyGUI.EventContext::type
	String_t* ___type_3;
	// System.Object FairyGUI.EventContext::data
	Il2CppObject * ___data_4;
	// System.Boolean FairyGUI.EventContext::_defaultPrevented
	bool ____defaultPrevented_5;
	// System.Boolean FairyGUI.EventContext::_stopsPropagation
	bool ____stopsPropagation_6;
	// System.Boolean FairyGUI.EventContext::_touchEndCapture
	bool ____touchEndCapture_7;
	// System.Collections.Generic.List`1<FairyGUI.EventBridge> FairyGUI.EventContext::callChain
	List_1_t39405453 * ___callChain_8;

public:
	inline static int32_t get_offset_of_U3CsenderU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(EventContext_t3254938369, ___U3CsenderU3Ek__BackingField_0)); }
	inline EventDispatcher_t4068415185 * get_U3CsenderU3Ek__BackingField_0() const { return ___U3CsenderU3Ek__BackingField_0; }
	inline EventDispatcher_t4068415185 ** get_address_of_U3CsenderU3Ek__BackingField_0() { return &___U3CsenderU3Ek__BackingField_0; }
	inline void set_U3CsenderU3Ek__BackingField_0(EventDispatcher_t4068415185 * value)
	{
		___U3CsenderU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CsenderU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CinitiatorU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(EventContext_t3254938369, ___U3CinitiatorU3Ek__BackingField_1)); }
	inline Il2CppObject * get_U3CinitiatorU3Ek__BackingField_1() const { return ___U3CinitiatorU3Ek__BackingField_1; }
	inline Il2CppObject ** get_address_of_U3CinitiatorU3Ek__BackingField_1() { return &___U3CinitiatorU3Ek__BackingField_1; }
	inline void set_U3CinitiatorU3Ek__BackingField_1(Il2CppObject * value)
	{
		___U3CinitiatorU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CinitiatorU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_U3CinputEventU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(EventContext_t3254938369, ___U3CinputEventU3Ek__BackingField_2)); }
	inline InputEvent_t3297021522 * get_U3CinputEventU3Ek__BackingField_2() const { return ___U3CinputEventU3Ek__BackingField_2; }
	inline InputEvent_t3297021522 ** get_address_of_U3CinputEventU3Ek__BackingField_2() { return &___U3CinputEventU3Ek__BackingField_2; }
	inline void set_U3CinputEventU3Ek__BackingField_2(InputEvent_t3297021522 * value)
	{
		___U3CinputEventU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CinputEventU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(EventContext_t3254938369, ___type_3)); }
	inline String_t* get_type_3() const { return ___type_3; }
	inline String_t** get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(String_t* value)
	{
		___type_3 = value;
		Il2CppCodeGenWriteBarrier(&___type_3, value);
	}

	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(EventContext_t3254938369, ___data_4)); }
	inline Il2CppObject * get_data_4() const { return ___data_4; }
	inline Il2CppObject ** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(Il2CppObject * value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier(&___data_4, value);
	}

	inline static int32_t get_offset_of__defaultPrevented_5() { return static_cast<int32_t>(offsetof(EventContext_t3254938369, ____defaultPrevented_5)); }
	inline bool get__defaultPrevented_5() const { return ____defaultPrevented_5; }
	inline bool* get_address_of__defaultPrevented_5() { return &____defaultPrevented_5; }
	inline void set__defaultPrevented_5(bool value)
	{
		____defaultPrevented_5 = value;
	}

	inline static int32_t get_offset_of__stopsPropagation_6() { return static_cast<int32_t>(offsetof(EventContext_t3254938369, ____stopsPropagation_6)); }
	inline bool get__stopsPropagation_6() const { return ____stopsPropagation_6; }
	inline bool* get_address_of__stopsPropagation_6() { return &____stopsPropagation_6; }
	inline void set__stopsPropagation_6(bool value)
	{
		____stopsPropagation_6 = value;
	}

	inline static int32_t get_offset_of__touchEndCapture_7() { return static_cast<int32_t>(offsetof(EventContext_t3254938369, ____touchEndCapture_7)); }
	inline bool get__touchEndCapture_7() const { return ____touchEndCapture_7; }
	inline bool* get_address_of__touchEndCapture_7() { return &____touchEndCapture_7; }
	inline void set__touchEndCapture_7(bool value)
	{
		____touchEndCapture_7 = value;
	}

	inline static int32_t get_offset_of_callChain_8() { return static_cast<int32_t>(offsetof(EventContext_t3254938369, ___callChain_8)); }
	inline List_1_t39405453 * get_callChain_8() const { return ___callChain_8; }
	inline List_1_t39405453 ** get_address_of_callChain_8() { return &___callChain_8; }
	inline void set_callChain_8(List_1_t39405453 * value)
	{
		___callChain_8 = value;
		Il2CppCodeGenWriteBarrier(&___callChain_8, value);
	}
};

struct EventContext_t3254938369_StaticFields
{
public:
	// System.Collections.Generic.Stack`1<FairyGUI.EventContext> FairyGUI.EventContext::pool
	Stack_1_t47699227 * ___pool_9;

public:
	inline static int32_t get_offset_of_pool_9() { return static_cast<int32_t>(offsetof(EventContext_t3254938369_StaticFields, ___pool_9)); }
	inline Stack_1_t47699227 * get_pool_9() const { return ___pool_9; }
	inline Stack_1_t47699227 ** get_address_of_pool_9() { return &___pool_9; }
	inline void set_pool_9(Stack_1_t47699227 * value)
	{
		___pool_9 = value;
		Il2CppCodeGenWriteBarrier(&___pool_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

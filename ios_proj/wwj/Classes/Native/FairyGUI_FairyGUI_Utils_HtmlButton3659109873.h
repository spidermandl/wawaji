#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// FairyGUI.GComponent
struct GComponent_t4106136290;
// System.String
struct String_t;
// FairyGUI.RichTextField
struct RichTextField_t4204199729;
// FairyGUI.Utils.HtmlElement
struct HtmlElement_t3135755401;
// FairyGUI.EventCallback1
struct EventCallback1_t422277840;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.Utils.HtmlButton
struct  HtmlButton_t3659109873  : public Il2CppObject
{
public:
	// FairyGUI.GComponent FairyGUI.Utils.HtmlButton::<button>k__BackingField
	GComponent_t4106136290 * ___U3CbuttonU3Ek__BackingField_0;
	// FairyGUI.RichTextField FairyGUI.Utils.HtmlButton::_owner
	RichTextField_t4204199729 * ____owner_3;
	// FairyGUI.Utils.HtmlElement FairyGUI.Utils.HtmlButton::_element
	HtmlElement_t3135755401 * ____element_4;
	// FairyGUI.EventCallback1 FairyGUI.Utils.HtmlButton::_clickHandler
	EventCallback1_t422277840 * ____clickHandler_5;

public:
	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(HtmlButton_t3659109873, ___U3CbuttonU3Ek__BackingField_0)); }
	inline GComponent_t4106136290 * get_U3CbuttonU3Ek__BackingField_0() const { return ___U3CbuttonU3Ek__BackingField_0; }
	inline GComponent_t4106136290 ** get_address_of_U3CbuttonU3Ek__BackingField_0() { return &___U3CbuttonU3Ek__BackingField_0; }
	inline void set_U3CbuttonU3Ek__BackingField_0(GComponent_t4106136290 * value)
	{
		___U3CbuttonU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CbuttonU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of__owner_3() { return static_cast<int32_t>(offsetof(HtmlButton_t3659109873, ____owner_3)); }
	inline RichTextField_t4204199729 * get__owner_3() const { return ____owner_3; }
	inline RichTextField_t4204199729 ** get_address_of__owner_3() { return &____owner_3; }
	inline void set__owner_3(RichTextField_t4204199729 * value)
	{
		____owner_3 = value;
		Il2CppCodeGenWriteBarrier(&____owner_3, value);
	}

	inline static int32_t get_offset_of__element_4() { return static_cast<int32_t>(offsetof(HtmlButton_t3659109873, ____element_4)); }
	inline HtmlElement_t3135755401 * get__element_4() const { return ____element_4; }
	inline HtmlElement_t3135755401 ** get_address_of__element_4() { return &____element_4; }
	inline void set__element_4(HtmlElement_t3135755401 * value)
	{
		____element_4 = value;
		Il2CppCodeGenWriteBarrier(&____element_4, value);
	}

	inline static int32_t get_offset_of__clickHandler_5() { return static_cast<int32_t>(offsetof(HtmlButton_t3659109873, ____clickHandler_5)); }
	inline EventCallback1_t422277840 * get__clickHandler_5() const { return ____clickHandler_5; }
	inline EventCallback1_t422277840 ** get_address_of__clickHandler_5() { return &____clickHandler_5; }
	inline void set__clickHandler_5(EventCallback1_t422277840 * value)
	{
		____clickHandler_5 = value;
		Il2CppCodeGenWriteBarrier(&____clickHandler_5, value);
	}
};

struct HtmlButton_t3659109873_StaticFields
{
public:
	// System.String FairyGUI.Utils.HtmlButton::resource
	String_t* ___resource_2;

public:
	inline static int32_t get_offset_of_resource_2() { return static_cast<int32_t>(offsetof(HtmlButton_t3659109873_StaticFields, ___resource_2)); }
	inline String_t* get_resource_2() const { return ___resource_2; }
	inline String_t** get_address_of_resource_2() { return &___resource_2; }
	inline void set_resource_2(String_t* value)
	{
		___resource_2 = value;
		Il2CppCodeGenWriteBarrier(&___resource_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

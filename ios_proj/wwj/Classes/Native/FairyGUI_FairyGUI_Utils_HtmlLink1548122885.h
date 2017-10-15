#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// FairyGUI.RichTextField
struct RichTextField_t4204199729;
// FairyGUI.Utils.HtmlElement
struct HtmlElement_t3135755401;
// FairyGUI.SelectionShape
struct SelectionShape_t1383229973;
// FairyGUI.EventCallback1
struct EventCallback1_t422277840;
// FairyGUI.EventCallback0
struct EventCallback0_t422277839;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.Utils.HtmlLink
struct  HtmlLink_t1548122885  : public Il2CppObject
{
public:
	// FairyGUI.RichTextField FairyGUI.Utils.HtmlLink::_owner
	RichTextField_t4204199729 * ____owner_0;
	// FairyGUI.Utils.HtmlElement FairyGUI.Utils.HtmlLink::_element
	HtmlElement_t3135755401 * ____element_1;
	// FairyGUI.SelectionShape FairyGUI.Utils.HtmlLink::_shape
	SelectionShape_t1383229973 * ____shape_2;
	// FairyGUI.EventCallback1 FairyGUI.Utils.HtmlLink::_clickHandler
	EventCallback1_t422277840 * ____clickHandler_3;
	// FairyGUI.EventCallback1 FairyGUI.Utils.HtmlLink::_rolloverHandler
	EventCallback1_t422277840 * ____rolloverHandler_4;
	// FairyGUI.EventCallback0 FairyGUI.Utils.HtmlLink::_rolloutHandler
	EventCallback0_t422277839 * ____rolloutHandler_5;

public:
	inline static int32_t get_offset_of__owner_0() { return static_cast<int32_t>(offsetof(HtmlLink_t1548122885, ____owner_0)); }
	inline RichTextField_t4204199729 * get__owner_0() const { return ____owner_0; }
	inline RichTextField_t4204199729 ** get_address_of__owner_0() { return &____owner_0; }
	inline void set__owner_0(RichTextField_t4204199729 * value)
	{
		____owner_0 = value;
		Il2CppCodeGenWriteBarrier(&____owner_0, value);
	}

	inline static int32_t get_offset_of__element_1() { return static_cast<int32_t>(offsetof(HtmlLink_t1548122885, ____element_1)); }
	inline HtmlElement_t3135755401 * get__element_1() const { return ____element_1; }
	inline HtmlElement_t3135755401 ** get_address_of__element_1() { return &____element_1; }
	inline void set__element_1(HtmlElement_t3135755401 * value)
	{
		____element_1 = value;
		Il2CppCodeGenWriteBarrier(&____element_1, value);
	}

	inline static int32_t get_offset_of__shape_2() { return static_cast<int32_t>(offsetof(HtmlLink_t1548122885, ____shape_2)); }
	inline SelectionShape_t1383229973 * get__shape_2() const { return ____shape_2; }
	inline SelectionShape_t1383229973 ** get_address_of__shape_2() { return &____shape_2; }
	inline void set__shape_2(SelectionShape_t1383229973 * value)
	{
		____shape_2 = value;
		Il2CppCodeGenWriteBarrier(&____shape_2, value);
	}

	inline static int32_t get_offset_of__clickHandler_3() { return static_cast<int32_t>(offsetof(HtmlLink_t1548122885, ____clickHandler_3)); }
	inline EventCallback1_t422277840 * get__clickHandler_3() const { return ____clickHandler_3; }
	inline EventCallback1_t422277840 ** get_address_of__clickHandler_3() { return &____clickHandler_3; }
	inline void set__clickHandler_3(EventCallback1_t422277840 * value)
	{
		____clickHandler_3 = value;
		Il2CppCodeGenWriteBarrier(&____clickHandler_3, value);
	}

	inline static int32_t get_offset_of__rolloverHandler_4() { return static_cast<int32_t>(offsetof(HtmlLink_t1548122885, ____rolloverHandler_4)); }
	inline EventCallback1_t422277840 * get__rolloverHandler_4() const { return ____rolloverHandler_4; }
	inline EventCallback1_t422277840 ** get_address_of__rolloverHandler_4() { return &____rolloverHandler_4; }
	inline void set__rolloverHandler_4(EventCallback1_t422277840 * value)
	{
		____rolloverHandler_4 = value;
		Il2CppCodeGenWriteBarrier(&____rolloverHandler_4, value);
	}

	inline static int32_t get_offset_of__rolloutHandler_5() { return static_cast<int32_t>(offsetof(HtmlLink_t1548122885, ____rolloutHandler_5)); }
	inline EventCallback0_t422277839 * get__rolloutHandler_5() const { return ____rolloutHandler_5; }
	inline EventCallback0_t422277839 ** get_address_of__rolloutHandler_5() { return &____rolloutHandler_5; }
	inline void set__rolloutHandler_5(EventCallback0_t422277839 * value)
	{
		____rolloutHandler_5 = value;
		Il2CppCodeGenWriteBarrier(&____rolloutHandler_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

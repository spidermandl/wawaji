#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// FairyGUI.GComboBox
struct GComboBox_t3375131064;
// System.String
struct String_t;
// FairyGUI.RichTextField
struct RichTextField_t4204199729;
// FairyGUI.Utils.HtmlElement
struct HtmlElement_t3135755401;
// FairyGUI.EventCallback0
struct EventCallback0_t422277839;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.Utils.HtmlSelect
struct  HtmlSelect_t345029961  : public Il2CppObject
{
public:
	// FairyGUI.GComboBox FairyGUI.Utils.HtmlSelect::<comboBox>k__BackingField
	GComboBox_t3375131064 * ___U3CcomboBoxU3Ek__BackingField_0;
	// FairyGUI.RichTextField FairyGUI.Utils.HtmlSelect::_owner
	RichTextField_t4204199729 * ____owner_3;
	// FairyGUI.Utils.HtmlElement FairyGUI.Utils.HtmlSelect::_element
	HtmlElement_t3135755401 * ____element_4;
	// FairyGUI.EventCallback0 FairyGUI.Utils.HtmlSelect::_changeHandler
	EventCallback0_t422277839 * ____changeHandler_5;

public:
	inline static int32_t get_offset_of_U3CcomboBoxU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(HtmlSelect_t345029961, ___U3CcomboBoxU3Ek__BackingField_0)); }
	inline GComboBox_t3375131064 * get_U3CcomboBoxU3Ek__BackingField_0() const { return ___U3CcomboBoxU3Ek__BackingField_0; }
	inline GComboBox_t3375131064 ** get_address_of_U3CcomboBoxU3Ek__BackingField_0() { return &___U3CcomboBoxU3Ek__BackingField_0; }
	inline void set_U3CcomboBoxU3Ek__BackingField_0(GComboBox_t3375131064 * value)
	{
		___U3CcomboBoxU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CcomboBoxU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of__owner_3() { return static_cast<int32_t>(offsetof(HtmlSelect_t345029961, ____owner_3)); }
	inline RichTextField_t4204199729 * get__owner_3() const { return ____owner_3; }
	inline RichTextField_t4204199729 ** get_address_of__owner_3() { return &____owner_3; }
	inline void set__owner_3(RichTextField_t4204199729 * value)
	{
		____owner_3 = value;
		Il2CppCodeGenWriteBarrier(&____owner_3, value);
	}

	inline static int32_t get_offset_of__element_4() { return static_cast<int32_t>(offsetof(HtmlSelect_t345029961, ____element_4)); }
	inline HtmlElement_t3135755401 * get__element_4() const { return ____element_4; }
	inline HtmlElement_t3135755401 ** get_address_of__element_4() { return &____element_4; }
	inline void set__element_4(HtmlElement_t3135755401 * value)
	{
		____element_4 = value;
		Il2CppCodeGenWriteBarrier(&____element_4, value);
	}

	inline static int32_t get_offset_of__changeHandler_5() { return static_cast<int32_t>(offsetof(HtmlSelect_t345029961, ____changeHandler_5)); }
	inline EventCallback0_t422277839 * get__changeHandler_5() const { return ____changeHandler_5; }
	inline EventCallback0_t422277839 ** get_address_of__changeHandler_5() { return &____changeHandler_5; }
	inline void set__changeHandler_5(EventCallback0_t422277839 * value)
	{
		____changeHandler_5 = value;
		Il2CppCodeGenWriteBarrier(&____changeHandler_5, value);
	}
};

struct HtmlSelect_t345029961_StaticFields
{
public:
	// System.String FairyGUI.Utils.HtmlSelect::resource
	String_t* ___resource_2;

public:
	inline static int32_t get_offset_of_resource_2() { return static_cast<int32_t>(offsetof(HtmlSelect_t345029961_StaticFields, ___resource_2)); }
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

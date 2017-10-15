#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// FairyGUI.GTextInput
struct GTextInput_t947892540;
// FairyGUI.RichTextField
struct RichTextField_t4204199729;
// FairyGUI.Utils.HtmlElement
struct HtmlElement_t3135755401;
// FairyGUI.Shape
struct Shape_t1180768453;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.Utils.HtmlInput
struct  HtmlInput_t3035646665  : public Il2CppObject
{
public:
	// FairyGUI.GTextInput FairyGUI.Utils.HtmlInput::<textInput>k__BackingField
	GTextInput_t947892540 * ___U3CtextInputU3Ek__BackingField_0;
	// FairyGUI.RichTextField FairyGUI.Utils.HtmlInput::_owner
	RichTextField_t4204199729 * ____owner_1;
	// FairyGUI.Utils.HtmlElement FairyGUI.Utils.HtmlInput::_element
	HtmlElement_t3135755401 * ____element_2;
	// System.Boolean FairyGUI.Utils.HtmlInput::_hidden
	bool ____hidden_3;
	// FairyGUI.Shape FairyGUI.Utils.HtmlInput::_border
	Shape_t1180768453 * ____border_4;
	// System.Int32 FairyGUI.Utils.HtmlInput::_borderSize
	int32_t ____borderSize_5;

public:
	inline static int32_t get_offset_of_U3CtextInputU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(HtmlInput_t3035646665, ___U3CtextInputU3Ek__BackingField_0)); }
	inline GTextInput_t947892540 * get_U3CtextInputU3Ek__BackingField_0() const { return ___U3CtextInputU3Ek__BackingField_0; }
	inline GTextInput_t947892540 ** get_address_of_U3CtextInputU3Ek__BackingField_0() { return &___U3CtextInputU3Ek__BackingField_0; }
	inline void set_U3CtextInputU3Ek__BackingField_0(GTextInput_t947892540 * value)
	{
		___U3CtextInputU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CtextInputU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of__owner_1() { return static_cast<int32_t>(offsetof(HtmlInput_t3035646665, ____owner_1)); }
	inline RichTextField_t4204199729 * get__owner_1() const { return ____owner_1; }
	inline RichTextField_t4204199729 ** get_address_of__owner_1() { return &____owner_1; }
	inline void set__owner_1(RichTextField_t4204199729 * value)
	{
		____owner_1 = value;
		Il2CppCodeGenWriteBarrier(&____owner_1, value);
	}

	inline static int32_t get_offset_of__element_2() { return static_cast<int32_t>(offsetof(HtmlInput_t3035646665, ____element_2)); }
	inline HtmlElement_t3135755401 * get__element_2() const { return ____element_2; }
	inline HtmlElement_t3135755401 ** get_address_of__element_2() { return &____element_2; }
	inline void set__element_2(HtmlElement_t3135755401 * value)
	{
		____element_2 = value;
		Il2CppCodeGenWriteBarrier(&____element_2, value);
	}

	inline static int32_t get_offset_of__hidden_3() { return static_cast<int32_t>(offsetof(HtmlInput_t3035646665, ____hidden_3)); }
	inline bool get__hidden_3() const { return ____hidden_3; }
	inline bool* get_address_of__hidden_3() { return &____hidden_3; }
	inline void set__hidden_3(bool value)
	{
		____hidden_3 = value;
	}

	inline static int32_t get_offset_of__border_4() { return static_cast<int32_t>(offsetof(HtmlInput_t3035646665, ____border_4)); }
	inline Shape_t1180768453 * get__border_4() const { return ____border_4; }
	inline Shape_t1180768453 ** get_address_of__border_4() { return &____border_4; }
	inline void set__border_4(Shape_t1180768453 * value)
	{
		____border_4 = value;
		Il2CppCodeGenWriteBarrier(&____border_4, value);
	}

	inline static int32_t get_offset_of__borderSize_5() { return static_cast<int32_t>(offsetof(HtmlInput_t3035646665, ____borderSize_5)); }
	inline int32_t get__borderSize_5() const { return ____borderSize_5; }
	inline int32_t* get_address_of__borderSize_5() { return &____borderSize_5; }
	inline void set__borderSize_5(int32_t value)
	{
		____borderSize_5 = value;
	}
};

struct HtmlInput_t3035646665_StaticFields
{
public:
	// System.Int32 FairyGUI.Utils.HtmlInput::defaultBorderSize
	int32_t ___defaultBorderSize_6;
	// UnityEngine.Color FairyGUI.Utils.HtmlInput::defaultBorderColor
	Color_t2020392075  ___defaultBorderColor_7;

public:
	inline static int32_t get_offset_of_defaultBorderSize_6() { return static_cast<int32_t>(offsetof(HtmlInput_t3035646665_StaticFields, ___defaultBorderSize_6)); }
	inline int32_t get_defaultBorderSize_6() const { return ___defaultBorderSize_6; }
	inline int32_t* get_address_of_defaultBorderSize_6() { return &___defaultBorderSize_6; }
	inline void set_defaultBorderSize_6(int32_t value)
	{
		___defaultBorderSize_6 = value;
	}

	inline static int32_t get_offset_of_defaultBorderColor_7() { return static_cast<int32_t>(offsetof(HtmlInput_t3035646665_StaticFields, ___defaultBorderColor_7)); }
	inline Color_t2020392075  get_defaultBorderColor_7() const { return ___defaultBorderColor_7; }
	inline Color_t2020392075 * get_address_of_defaultBorderColor_7() { return &___defaultBorderColor_7; }
	inline void set_defaultBorderColor_7(Color_t2020392075  value)
	{
		___defaultBorderColor_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

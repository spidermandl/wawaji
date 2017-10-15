#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "FairyGUI_FairyGUI_Utils_HtmlElementType2242385881.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.String
struct String_t;
// FairyGUI.TextFormat
struct TextFormat_t3801473854;
// FairyGUI.Utils.IHtmlObject
struct IHtmlObject_t3029967319;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.Collections.Generic.Stack`1<FairyGUI.Utils.HtmlElement>
struct Stack_1_t4223483555;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.Utils.HtmlElement
struct  HtmlElement_t3135755401  : public Il2CppObject
{
public:
	// FairyGUI.Utils.HtmlElementType FairyGUI.Utils.HtmlElement::type
	int32_t ___type_0;
	// System.String FairyGUI.Utils.HtmlElement::name
	String_t* ___name_1;
	// System.String FairyGUI.Utils.HtmlElement::text
	String_t* ___text_2;
	// FairyGUI.TextFormat FairyGUI.Utils.HtmlElement::format
	TextFormat_t3801473854 * ___format_3;
	// System.Int32 FairyGUI.Utils.HtmlElement::charIndex
	int32_t ___charIndex_4;
	// FairyGUI.Utils.IHtmlObject FairyGUI.Utils.HtmlElement::htmlObject
	Il2CppObject * ___htmlObject_5;
	// System.Int32 FairyGUI.Utils.HtmlElement::status
	int32_t ___status_6;
	// System.Int32 FairyGUI.Utils.HtmlElement::space
	int32_t ___space_7;
	// UnityEngine.Vector2 FairyGUI.Utils.HtmlElement::position
	Vector2_t2243707579  ___position_8;
	// System.Collections.Hashtable FairyGUI.Utils.HtmlElement::attributes
	Hashtable_t909839986 * ___attributes_9;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(HtmlElement_t3135755401, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(HtmlElement_t3135755401, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier(&___name_1, value);
	}

	inline static int32_t get_offset_of_text_2() { return static_cast<int32_t>(offsetof(HtmlElement_t3135755401, ___text_2)); }
	inline String_t* get_text_2() const { return ___text_2; }
	inline String_t** get_address_of_text_2() { return &___text_2; }
	inline void set_text_2(String_t* value)
	{
		___text_2 = value;
		Il2CppCodeGenWriteBarrier(&___text_2, value);
	}

	inline static int32_t get_offset_of_format_3() { return static_cast<int32_t>(offsetof(HtmlElement_t3135755401, ___format_3)); }
	inline TextFormat_t3801473854 * get_format_3() const { return ___format_3; }
	inline TextFormat_t3801473854 ** get_address_of_format_3() { return &___format_3; }
	inline void set_format_3(TextFormat_t3801473854 * value)
	{
		___format_3 = value;
		Il2CppCodeGenWriteBarrier(&___format_3, value);
	}

	inline static int32_t get_offset_of_charIndex_4() { return static_cast<int32_t>(offsetof(HtmlElement_t3135755401, ___charIndex_4)); }
	inline int32_t get_charIndex_4() const { return ___charIndex_4; }
	inline int32_t* get_address_of_charIndex_4() { return &___charIndex_4; }
	inline void set_charIndex_4(int32_t value)
	{
		___charIndex_4 = value;
	}

	inline static int32_t get_offset_of_htmlObject_5() { return static_cast<int32_t>(offsetof(HtmlElement_t3135755401, ___htmlObject_5)); }
	inline Il2CppObject * get_htmlObject_5() const { return ___htmlObject_5; }
	inline Il2CppObject ** get_address_of_htmlObject_5() { return &___htmlObject_5; }
	inline void set_htmlObject_5(Il2CppObject * value)
	{
		___htmlObject_5 = value;
		Il2CppCodeGenWriteBarrier(&___htmlObject_5, value);
	}

	inline static int32_t get_offset_of_status_6() { return static_cast<int32_t>(offsetof(HtmlElement_t3135755401, ___status_6)); }
	inline int32_t get_status_6() const { return ___status_6; }
	inline int32_t* get_address_of_status_6() { return &___status_6; }
	inline void set_status_6(int32_t value)
	{
		___status_6 = value;
	}

	inline static int32_t get_offset_of_space_7() { return static_cast<int32_t>(offsetof(HtmlElement_t3135755401, ___space_7)); }
	inline int32_t get_space_7() const { return ___space_7; }
	inline int32_t* get_address_of_space_7() { return &___space_7; }
	inline void set_space_7(int32_t value)
	{
		___space_7 = value;
	}

	inline static int32_t get_offset_of_position_8() { return static_cast<int32_t>(offsetof(HtmlElement_t3135755401, ___position_8)); }
	inline Vector2_t2243707579  get_position_8() const { return ___position_8; }
	inline Vector2_t2243707579 * get_address_of_position_8() { return &___position_8; }
	inline void set_position_8(Vector2_t2243707579  value)
	{
		___position_8 = value;
	}

	inline static int32_t get_offset_of_attributes_9() { return static_cast<int32_t>(offsetof(HtmlElement_t3135755401, ___attributes_9)); }
	inline Hashtable_t909839986 * get_attributes_9() const { return ___attributes_9; }
	inline Hashtable_t909839986 ** get_address_of_attributes_9() { return &___attributes_9; }
	inline void set_attributes_9(Hashtable_t909839986 * value)
	{
		___attributes_9 = value;
		Il2CppCodeGenWriteBarrier(&___attributes_9, value);
	}
};

struct HtmlElement_t3135755401_StaticFields
{
public:
	// System.Collections.Generic.Stack`1<FairyGUI.Utils.HtmlElement> FairyGUI.Utils.HtmlElement::elementPool
	Stack_1_t4223483555 * ___elementPool_10;

public:
	inline static int32_t get_offset_of_elementPool_10() { return static_cast<int32_t>(offsetof(HtmlElement_t3135755401_StaticFields, ___elementPool_10)); }
	inline Stack_1_t4223483555 * get_elementPool_10() const { return ___elementPool_10; }
	inline Stack_1_t4223483555 ** get_address_of_elementPool_10() { return &___elementPool_10; }
	inline void set_elementPool_10(Stack_1_t4223483555 * value)
	{
		___elementPool_10 = value;
		Il2CppCodeGenWriteBarrier(&___elementPool_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

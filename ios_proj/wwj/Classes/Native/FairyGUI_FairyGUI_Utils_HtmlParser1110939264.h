#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// FairyGUI.Utils.HtmlParser
struct HtmlParser_t1110939264;
// System.Collections.Generic.List`1<FairyGUI.Utils.HtmlParser/TextFormat2>
struct List_1_t193145460;
// FairyGUI.Utils.HtmlParser/TextFormat2
struct TextFormat2_t824024328;
// System.Collections.Generic.List`1<FairyGUI.Utils.HtmlElement>
struct List_1_t2504876533;
// FairyGUI.Utils.HtmlParseOptions
struct HtmlParseOptions_t2926988462;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.Utils.HtmlParser
struct  HtmlParser_t1110939264  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<FairyGUI.Utils.HtmlParser/TextFormat2> FairyGUI.Utils.HtmlParser::_textFormatStack
	List_1_t193145460 * ____textFormatStack_1;
	// System.Int32 FairyGUI.Utils.HtmlParser::_textFormatStackTop
	int32_t ____textFormatStackTop_2;
	// FairyGUI.Utils.HtmlParser/TextFormat2 FairyGUI.Utils.HtmlParser::_format
	TextFormat2_t824024328 * ____format_3;
	// System.Collections.Generic.List`1<FairyGUI.Utils.HtmlElement> FairyGUI.Utils.HtmlParser::_elements
	List_1_t2504876533 * ____elements_4;
	// System.Int32 FairyGUI.Utils.HtmlParser::_skipText
	int32_t ____skipText_5;
	// System.Boolean FairyGUI.Utils.HtmlParser::_ignoreWhiteSpace
	bool ____ignoreWhiteSpace_6;
	// FairyGUI.Utils.HtmlParseOptions FairyGUI.Utils.HtmlParser::_defaultOptions
	HtmlParseOptions_t2926988462 * ____defaultOptions_7;

public:
	inline static int32_t get_offset_of__textFormatStack_1() { return static_cast<int32_t>(offsetof(HtmlParser_t1110939264, ____textFormatStack_1)); }
	inline List_1_t193145460 * get__textFormatStack_1() const { return ____textFormatStack_1; }
	inline List_1_t193145460 ** get_address_of__textFormatStack_1() { return &____textFormatStack_1; }
	inline void set__textFormatStack_1(List_1_t193145460 * value)
	{
		____textFormatStack_1 = value;
		Il2CppCodeGenWriteBarrier(&____textFormatStack_1, value);
	}

	inline static int32_t get_offset_of__textFormatStackTop_2() { return static_cast<int32_t>(offsetof(HtmlParser_t1110939264, ____textFormatStackTop_2)); }
	inline int32_t get__textFormatStackTop_2() const { return ____textFormatStackTop_2; }
	inline int32_t* get_address_of__textFormatStackTop_2() { return &____textFormatStackTop_2; }
	inline void set__textFormatStackTop_2(int32_t value)
	{
		____textFormatStackTop_2 = value;
	}

	inline static int32_t get_offset_of__format_3() { return static_cast<int32_t>(offsetof(HtmlParser_t1110939264, ____format_3)); }
	inline TextFormat2_t824024328 * get__format_3() const { return ____format_3; }
	inline TextFormat2_t824024328 ** get_address_of__format_3() { return &____format_3; }
	inline void set__format_3(TextFormat2_t824024328 * value)
	{
		____format_3 = value;
		Il2CppCodeGenWriteBarrier(&____format_3, value);
	}

	inline static int32_t get_offset_of__elements_4() { return static_cast<int32_t>(offsetof(HtmlParser_t1110939264, ____elements_4)); }
	inline List_1_t2504876533 * get__elements_4() const { return ____elements_4; }
	inline List_1_t2504876533 ** get_address_of__elements_4() { return &____elements_4; }
	inline void set__elements_4(List_1_t2504876533 * value)
	{
		____elements_4 = value;
		Il2CppCodeGenWriteBarrier(&____elements_4, value);
	}

	inline static int32_t get_offset_of__skipText_5() { return static_cast<int32_t>(offsetof(HtmlParser_t1110939264, ____skipText_5)); }
	inline int32_t get__skipText_5() const { return ____skipText_5; }
	inline int32_t* get_address_of__skipText_5() { return &____skipText_5; }
	inline void set__skipText_5(int32_t value)
	{
		____skipText_5 = value;
	}

	inline static int32_t get_offset_of__ignoreWhiteSpace_6() { return static_cast<int32_t>(offsetof(HtmlParser_t1110939264, ____ignoreWhiteSpace_6)); }
	inline bool get__ignoreWhiteSpace_6() const { return ____ignoreWhiteSpace_6; }
	inline bool* get_address_of__ignoreWhiteSpace_6() { return &____ignoreWhiteSpace_6; }
	inline void set__ignoreWhiteSpace_6(bool value)
	{
		____ignoreWhiteSpace_6 = value;
	}

	inline static int32_t get_offset_of__defaultOptions_7() { return static_cast<int32_t>(offsetof(HtmlParser_t1110939264, ____defaultOptions_7)); }
	inline HtmlParseOptions_t2926988462 * get__defaultOptions_7() const { return ____defaultOptions_7; }
	inline HtmlParseOptions_t2926988462 ** get_address_of__defaultOptions_7() { return &____defaultOptions_7; }
	inline void set__defaultOptions_7(HtmlParseOptions_t2926988462 * value)
	{
		____defaultOptions_7 = value;
		Il2CppCodeGenWriteBarrier(&____defaultOptions_7, value);
	}
};

struct HtmlParser_t1110939264_StaticFields
{
public:
	// FairyGUI.Utils.HtmlParser FairyGUI.Utils.HtmlParser::inst
	HtmlParser_t1110939264 * ___inst_0;
	// System.Collections.Generic.List`1<System.String> FairyGUI.Utils.HtmlParser::sHelperList1
	List_1_t1398341365 * ___sHelperList1_8;
	// System.Collections.Generic.List`1<System.String> FairyGUI.Utils.HtmlParser::sHelperList2
	List_1_t1398341365 * ___sHelperList2_9;

public:
	inline static int32_t get_offset_of_inst_0() { return static_cast<int32_t>(offsetof(HtmlParser_t1110939264_StaticFields, ___inst_0)); }
	inline HtmlParser_t1110939264 * get_inst_0() const { return ___inst_0; }
	inline HtmlParser_t1110939264 ** get_address_of_inst_0() { return &___inst_0; }
	inline void set_inst_0(HtmlParser_t1110939264 * value)
	{
		___inst_0 = value;
		Il2CppCodeGenWriteBarrier(&___inst_0, value);
	}

	inline static int32_t get_offset_of_sHelperList1_8() { return static_cast<int32_t>(offsetof(HtmlParser_t1110939264_StaticFields, ___sHelperList1_8)); }
	inline List_1_t1398341365 * get_sHelperList1_8() const { return ___sHelperList1_8; }
	inline List_1_t1398341365 ** get_address_of_sHelperList1_8() { return &___sHelperList1_8; }
	inline void set_sHelperList1_8(List_1_t1398341365 * value)
	{
		___sHelperList1_8 = value;
		Il2CppCodeGenWriteBarrier(&___sHelperList1_8, value);
	}

	inline static int32_t get_offset_of_sHelperList2_9() { return static_cast<int32_t>(offsetof(HtmlParser_t1110939264_StaticFields, ___sHelperList2_9)); }
	inline List_1_t1398341365 * get_sHelperList2_9() const { return ___sHelperList2_9; }
	inline List_1_t1398341365 ** get_address_of_sHelperList2_9() { return &___sHelperList2_9; }
	inline void set_sHelperList2_9(List_1_t1398341365 * value)
	{
		___sHelperList2_9 = value;
		Il2CppCodeGenWriteBarrier(&___sHelperList2_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

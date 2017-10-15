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
#include "FairyGUI_FairyGUI_AlignType3064532699.h"
#include "FairyGUI_FairyGUI_TextFormat_SpecialStyle1416482029.h"

// System.String
struct String_t;
// UnityEngine.Color32[]
struct Color32U5BU5D_t30278651;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.TextFormat
struct  TextFormat_t3801473854  : public Il2CppObject
{
public:
	// System.Int32 FairyGUI.TextFormat::size
	int32_t ___size_0;
	// System.String FairyGUI.TextFormat::font
	String_t* ___font_1;
	// UnityEngine.Color FairyGUI.TextFormat::color
	Color_t2020392075  ___color_2;
	// System.Int32 FairyGUI.TextFormat::lineSpacing
	int32_t ___lineSpacing_3;
	// System.Int32 FairyGUI.TextFormat::letterSpacing
	int32_t ___letterSpacing_4;
	// System.Boolean FairyGUI.TextFormat::bold
	bool ___bold_5;
	// System.Boolean FairyGUI.TextFormat::underline
	bool ___underline_6;
	// System.Boolean FairyGUI.TextFormat::italic
	bool ___italic_7;
	// UnityEngine.Color32[] FairyGUI.TextFormat::gradientColor
	Color32U5BU5D_t30278651* ___gradientColor_8;
	// FairyGUI.AlignType FairyGUI.TextFormat::align
	int32_t ___align_9;
	// FairyGUI.TextFormat/SpecialStyle FairyGUI.TextFormat::specialStyle
	int32_t ___specialStyle_10;

public:
	inline static int32_t get_offset_of_size_0() { return static_cast<int32_t>(offsetof(TextFormat_t3801473854, ___size_0)); }
	inline int32_t get_size_0() const { return ___size_0; }
	inline int32_t* get_address_of_size_0() { return &___size_0; }
	inline void set_size_0(int32_t value)
	{
		___size_0 = value;
	}

	inline static int32_t get_offset_of_font_1() { return static_cast<int32_t>(offsetof(TextFormat_t3801473854, ___font_1)); }
	inline String_t* get_font_1() const { return ___font_1; }
	inline String_t** get_address_of_font_1() { return &___font_1; }
	inline void set_font_1(String_t* value)
	{
		___font_1 = value;
		Il2CppCodeGenWriteBarrier(&___font_1, value);
	}

	inline static int32_t get_offset_of_color_2() { return static_cast<int32_t>(offsetof(TextFormat_t3801473854, ___color_2)); }
	inline Color_t2020392075  get_color_2() const { return ___color_2; }
	inline Color_t2020392075 * get_address_of_color_2() { return &___color_2; }
	inline void set_color_2(Color_t2020392075  value)
	{
		___color_2 = value;
	}

	inline static int32_t get_offset_of_lineSpacing_3() { return static_cast<int32_t>(offsetof(TextFormat_t3801473854, ___lineSpacing_3)); }
	inline int32_t get_lineSpacing_3() const { return ___lineSpacing_3; }
	inline int32_t* get_address_of_lineSpacing_3() { return &___lineSpacing_3; }
	inline void set_lineSpacing_3(int32_t value)
	{
		___lineSpacing_3 = value;
	}

	inline static int32_t get_offset_of_letterSpacing_4() { return static_cast<int32_t>(offsetof(TextFormat_t3801473854, ___letterSpacing_4)); }
	inline int32_t get_letterSpacing_4() const { return ___letterSpacing_4; }
	inline int32_t* get_address_of_letterSpacing_4() { return &___letterSpacing_4; }
	inline void set_letterSpacing_4(int32_t value)
	{
		___letterSpacing_4 = value;
	}

	inline static int32_t get_offset_of_bold_5() { return static_cast<int32_t>(offsetof(TextFormat_t3801473854, ___bold_5)); }
	inline bool get_bold_5() const { return ___bold_5; }
	inline bool* get_address_of_bold_5() { return &___bold_5; }
	inline void set_bold_5(bool value)
	{
		___bold_5 = value;
	}

	inline static int32_t get_offset_of_underline_6() { return static_cast<int32_t>(offsetof(TextFormat_t3801473854, ___underline_6)); }
	inline bool get_underline_6() const { return ___underline_6; }
	inline bool* get_address_of_underline_6() { return &___underline_6; }
	inline void set_underline_6(bool value)
	{
		___underline_6 = value;
	}

	inline static int32_t get_offset_of_italic_7() { return static_cast<int32_t>(offsetof(TextFormat_t3801473854, ___italic_7)); }
	inline bool get_italic_7() const { return ___italic_7; }
	inline bool* get_address_of_italic_7() { return &___italic_7; }
	inline void set_italic_7(bool value)
	{
		___italic_7 = value;
	}

	inline static int32_t get_offset_of_gradientColor_8() { return static_cast<int32_t>(offsetof(TextFormat_t3801473854, ___gradientColor_8)); }
	inline Color32U5BU5D_t30278651* get_gradientColor_8() const { return ___gradientColor_8; }
	inline Color32U5BU5D_t30278651** get_address_of_gradientColor_8() { return &___gradientColor_8; }
	inline void set_gradientColor_8(Color32U5BU5D_t30278651* value)
	{
		___gradientColor_8 = value;
		Il2CppCodeGenWriteBarrier(&___gradientColor_8, value);
	}

	inline static int32_t get_offset_of_align_9() { return static_cast<int32_t>(offsetof(TextFormat_t3801473854, ___align_9)); }
	inline int32_t get_align_9() const { return ___align_9; }
	inline int32_t* get_address_of_align_9() { return &___align_9; }
	inline void set_align_9(int32_t value)
	{
		___align_9 = value;
	}

	inline static int32_t get_offset_of_specialStyle_10() { return static_cast<int32_t>(offsetof(TextFormat_t3801473854, ___specialStyle_10)); }
	inline int32_t get_specialStyle_10() const { return ___specialStyle_10; }
	inline int32_t* get_address_of_specialStyle_10() { return &___specialStyle_10; }
	inline void set_specialStyle_10(int32_t value)
	{
		___specialStyle_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

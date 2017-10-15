#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "FairyGUI_FairyGUI_BaseFont877349798.h"
#include "UnityEngine_UnityEngine_FontStyle2764949590.h"
#include "UnityEngine_UnityEngine_CharacterInfo3919092135.h"

// UnityEngine.Font
struct Font_t4239498691;
// System.Collections.Generic.Dictionary`2<System.Int32,FairyGUI.DynamicFont/RenderInfo>
struct Dictionary_2_t3622642990;
// FairyGUI.DynamicFont/RenderInfo
struct RenderInfo_t319850059;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.DynamicFont
struct  DynamicFont_t3900531582  : public BaseFont_t877349798
{
public:
	// UnityEngine.Font FairyGUI.DynamicFont::_font
	Font_t4239498691 * ____font_11;
	// System.Collections.Generic.Dictionary`2<System.Int32,FairyGUI.DynamicFont/RenderInfo> FairyGUI.DynamicFont::_renderInfo
	Dictionary_2_t3622642990 * ____renderInfo_12;
	// FairyGUI.DynamicFont/RenderInfo FairyGUI.DynamicFont::_lastRenderInfo
	RenderInfo_t319850059 * ____lastRenderInfo_13;
	// System.Int32 FairyGUI.DynamicFont::_lastFontSize
	int32_t ____lastFontSize_14;
	// System.Int32 FairyGUI.DynamicFont::_size
	int32_t ____size_15;
	// UnityEngine.FontStyle FairyGUI.DynamicFont::_style
	int32_t ____style_16;

public:
	inline static int32_t get_offset_of__font_11() { return static_cast<int32_t>(offsetof(DynamicFont_t3900531582, ____font_11)); }
	inline Font_t4239498691 * get__font_11() const { return ____font_11; }
	inline Font_t4239498691 ** get_address_of__font_11() { return &____font_11; }
	inline void set__font_11(Font_t4239498691 * value)
	{
		____font_11 = value;
		Il2CppCodeGenWriteBarrier(&____font_11, value);
	}

	inline static int32_t get_offset_of__renderInfo_12() { return static_cast<int32_t>(offsetof(DynamicFont_t3900531582, ____renderInfo_12)); }
	inline Dictionary_2_t3622642990 * get__renderInfo_12() const { return ____renderInfo_12; }
	inline Dictionary_2_t3622642990 ** get_address_of__renderInfo_12() { return &____renderInfo_12; }
	inline void set__renderInfo_12(Dictionary_2_t3622642990 * value)
	{
		____renderInfo_12 = value;
		Il2CppCodeGenWriteBarrier(&____renderInfo_12, value);
	}

	inline static int32_t get_offset_of__lastRenderInfo_13() { return static_cast<int32_t>(offsetof(DynamicFont_t3900531582, ____lastRenderInfo_13)); }
	inline RenderInfo_t319850059 * get__lastRenderInfo_13() const { return ____lastRenderInfo_13; }
	inline RenderInfo_t319850059 ** get_address_of__lastRenderInfo_13() { return &____lastRenderInfo_13; }
	inline void set__lastRenderInfo_13(RenderInfo_t319850059 * value)
	{
		____lastRenderInfo_13 = value;
		Il2CppCodeGenWriteBarrier(&____lastRenderInfo_13, value);
	}

	inline static int32_t get_offset_of__lastFontSize_14() { return static_cast<int32_t>(offsetof(DynamicFont_t3900531582, ____lastFontSize_14)); }
	inline int32_t get__lastFontSize_14() const { return ____lastFontSize_14; }
	inline int32_t* get_address_of__lastFontSize_14() { return &____lastFontSize_14; }
	inline void set__lastFontSize_14(int32_t value)
	{
		____lastFontSize_14 = value;
	}

	inline static int32_t get_offset_of__size_15() { return static_cast<int32_t>(offsetof(DynamicFont_t3900531582, ____size_15)); }
	inline int32_t get__size_15() const { return ____size_15; }
	inline int32_t* get_address_of__size_15() { return &____size_15; }
	inline void set__size_15(int32_t value)
	{
		____size_15 = value;
	}

	inline static int32_t get_offset_of__style_16() { return static_cast<int32_t>(offsetof(DynamicFont_t3900531582, ____style_16)); }
	inline int32_t get__style_16() const { return ____style_16; }
	inline int32_t* get_address_of__style_16() { return &____style_16; }
	inline void set__style_16(int32_t value)
	{
		____style_16 = value;
	}
};

struct DynamicFont_t3900531582_StaticFields
{
public:
	// UnityEngine.CharacterInfo FairyGUI.DynamicFont::sTempChar
	CharacterInfo_t3919092135  ___sTempChar_17;
	// System.Boolean FairyGUI.DynamicFont::textRebuildFlag
	bool ___textRebuildFlag_18;

public:
	inline static int32_t get_offset_of_sTempChar_17() { return static_cast<int32_t>(offsetof(DynamicFont_t3900531582_StaticFields, ___sTempChar_17)); }
	inline CharacterInfo_t3919092135  get_sTempChar_17() const { return ___sTempChar_17; }
	inline CharacterInfo_t3919092135 * get_address_of_sTempChar_17() { return &___sTempChar_17; }
	inline void set_sTempChar_17(CharacterInfo_t3919092135  value)
	{
		___sTempChar_17 = value;
	}

	inline static int32_t get_offset_of_textRebuildFlag_18() { return static_cast<int32_t>(offsetof(DynamicFont_t3900531582_StaticFields, ___textRebuildFlag_18)); }
	inline bool get_textRebuildFlag_18() const { return ___textRebuildFlag_18; }
	inline bool* get_address_of_textRebuildFlag_18() { return &___textRebuildFlag_18; }
	inline void set_textRebuildFlag_18(bool value)
	{
		___textRebuildFlag_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

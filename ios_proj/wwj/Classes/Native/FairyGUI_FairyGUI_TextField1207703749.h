#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "FairyGUI_FairyGUI_DisplayObject1069768653.h"
#include "FairyGUI_FairyGUI_VertAlignType2062725310.h"
#include "FairyGUI_FairyGUI_AutoSizeType990664428.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// FairyGUI.TextFormat
struct TextFormat_t3801473854;
// System.String
struct String_t;
// System.Collections.Generic.List`1<FairyGUI.Utils.HtmlElement>
struct List_1_t2504876533;
// System.Collections.Generic.List`1<FairyGUI.TextField/LineInfo>
struct List_1_t959063242;
// System.Collections.Generic.List`1<FairyGUI.TextField/CharPosition>
struct List_1_t1247802635;
// FairyGUI.BaseFont
struct BaseFont_t877349798;
// FairyGUI.RichTextField
struct RichTextField_t4204199729;
// System.Single[]
struct SingleU5BU5D_t577127397;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t1612828712;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t1612828711;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t243638650;
// FairyGUI.GlyphInfo
struct GlyphInfo_t58017296;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.TextField
struct  TextField_t1207703749  : public DisplayObject_t1069768653
{
public:
	// FairyGUI.VertAlignType FairyGUI.TextField::_verticalAlign
	int32_t ____verticalAlign_52;
	// FairyGUI.TextFormat FairyGUI.TextField::_textFormat
	TextFormat_t3801473854 * ____textFormat_53;
	// System.Boolean FairyGUI.TextField::_input
	bool ____input_54;
	// System.String FairyGUI.TextField::_text
	String_t* ____text_55;
	// FairyGUI.AutoSizeType FairyGUI.TextField::_autoSize
	int32_t ____autoSize_56;
	// System.Boolean FairyGUI.TextField::_wordWrap
	bool ____wordWrap_57;
	// System.Boolean FairyGUI.TextField::_singleLine
	bool ____singleLine_58;
	// System.Boolean FairyGUI.TextField::_html
	bool ____html_59;
	// System.Boolean FairyGUI.TextField::_rtl
	bool ____rtl_60;
	// System.Int32 FairyGUI.TextField::_stroke
	int32_t ____stroke_61;
	// UnityEngine.Color FairyGUI.TextField::_strokeColor
	Color_t2020392075  ____strokeColor_62;
	// UnityEngine.Vector2 FairyGUI.TextField::_shadowOffset
	Vector2_t2243707579  ____shadowOffset_63;
	// System.Collections.Generic.List`1<FairyGUI.Utils.HtmlElement> FairyGUI.TextField::_elements
	List_1_t2504876533 * ____elements_64;
	// System.Collections.Generic.List`1<FairyGUI.TextField/LineInfo> FairyGUI.TextField::_lines
	List_1_t959063242 * ____lines_65;
	// System.Collections.Generic.List`1<FairyGUI.TextField/CharPosition> FairyGUI.TextField::_charPositions
	List_1_t1247802635 * ____charPositions_66;
	// FairyGUI.BaseFont FairyGUI.TextField::_font
	BaseFont_t877349798 * ____font_67;
	// System.Single FairyGUI.TextField::_textWidth
	float ____textWidth_68;
	// System.Single FairyGUI.TextField::_textHeight
	float ____textHeight_69;
	// System.Single FairyGUI.TextField::_minHeight
	float ____minHeight_70;
	// System.Boolean FairyGUI.TextField::_textChanged
	bool ____textChanged_71;
	// System.Int32 FairyGUI.TextField::_yOffset
	int32_t ____yOffset_72;
	// System.String FairyGUI.TextField::_alternativeText
	String_t* ____alternativeText_73;
	// System.Boolean FairyGUI.TextField::_alternatvieHtml
	bool ____alternatvieHtml_74;
	// System.Single FairyGUI.TextField::_fontSizeScale
	float ____fontSizeScale_75;
	// System.Single FairyGUI.TextField::_renderScale
	float ____renderScale_76;
	// System.String FairyGUI.TextField::_parsedText
	String_t* ____parsedText_77;
	// FairyGUI.RichTextField FairyGUI.TextField::_richTextField
	RichTextField_t4204199729 * ____richTextField_78;
	// System.Boolean FairyGUI.TextField::_updatingSize
	bool ____updatingSize_83;

public:
	inline static int32_t get_offset_of__verticalAlign_52() { return static_cast<int32_t>(offsetof(TextField_t1207703749, ____verticalAlign_52)); }
	inline int32_t get__verticalAlign_52() const { return ____verticalAlign_52; }
	inline int32_t* get_address_of__verticalAlign_52() { return &____verticalAlign_52; }
	inline void set__verticalAlign_52(int32_t value)
	{
		____verticalAlign_52 = value;
	}

	inline static int32_t get_offset_of__textFormat_53() { return static_cast<int32_t>(offsetof(TextField_t1207703749, ____textFormat_53)); }
	inline TextFormat_t3801473854 * get__textFormat_53() const { return ____textFormat_53; }
	inline TextFormat_t3801473854 ** get_address_of__textFormat_53() { return &____textFormat_53; }
	inline void set__textFormat_53(TextFormat_t3801473854 * value)
	{
		____textFormat_53 = value;
		Il2CppCodeGenWriteBarrier(&____textFormat_53, value);
	}

	inline static int32_t get_offset_of__input_54() { return static_cast<int32_t>(offsetof(TextField_t1207703749, ____input_54)); }
	inline bool get__input_54() const { return ____input_54; }
	inline bool* get_address_of__input_54() { return &____input_54; }
	inline void set__input_54(bool value)
	{
		____input_54 = value;
	}

	inline static int32_t get_offset_of__text_55() { return static_cast<int32_t>(offsetof(TextField_t1207703749, ____text_55)); }
	inline String_t* get__text_55() const { return ____text_55; }
	inline String_t** get_address_of__text_55() { return &____text_55; }
	inline void set__text_55(String_t* value)
	{
		____text_55 = value;
		Il2CppCodeGenWriteBarrier(&____text_55, value);
	}

	inline static int32_t get_offset_of__autoSize_56() { return static_cast<int32_t>(offsetof(TextField_t1207703749, ____autoSize_56)); }
	inline int32_t get__autoSize_56() const { return ____autoSize_56; }
	inline int32_t* get_address_of__autoSize_56() { return &____autoSize_56; }
	inline void set__autoSize_56(int32_t value)
	{
		____autoSize_56 = value;
	}

	inline static int32_t get_offset_of__wordWrap_57() { return static_cast<int32_t>(offsetof(TextField_t1207703749, ____wordWrap_57)); }
	inline bool get__wordWrap_57() const { return ____wordWrap_57; }
	inline bool* get_address_of__wordWrap_57() { return &____wordWrap_57; }
	inline void set__wordWrap_57(bool value)
	{
		____wordWrap_57 = value;
	}

	inline static int32_t get_offset_of__singleLine_58() { return static_cast<int32_t>(offsetof(TextField_t1207703749, ____singleLine_58)); }
	inline bool get__singleLine_58() const { return ____singleLine_58; }
	inline bool* get_address_of__singleLine_58() { return &____singleLine_58; }
	inline void set__singleLine_58(bool value)
	{
		____singleLine_58 = value;
	}

	inline static int32_t get_offset_of__html_59() { return static_cast<int32_t>(offsetof(TextField_t1207703749, ____html_59)); }
	inline bool get__html_59() const { return ____html_59; }
	inline bool* get_address_of__html_59() { return &____html_59; }
	inline void set__html_59(bool value)
	{
		____html_59 = value;
	}

	inline static int32_t get_offset_of__rtl_60() { return static_cast<int32_t>(offsetof(TextField_t1207703749, ____rtl_60)); }
	inline bool get__rtl_60() const { return ____rtl_60; }
	inline bool* get_address_of__rtl_60() { return &____rtl_60; }
	inline void set__rtl_60(bool value)
	{
		____rtl_60 = value;
	}

	inline static int32_t get_offset_of__stroke_61() { return static_cast<int32_t>(offsetof(TextField_t1207703749, ____stroke_61)); }
	inline int32_t get__stroke_61() const { return ____stroke_61; }
	inline int32_t* get_address_of__stroke_61() { return &____stroke_61; }
	inline void set__stroke_61(int32_t value)
	{
		____stroke_61 = value;
	}

	inline static int32_t get_offset_of__strokeColor_62() { return static_cast<int32_t>(offsetof(TextField_t1207703749, ____strokeColor_62)); }
	inline Color_t2020392075  get__strokeColor_62() const { return ____strokeColor_62; }
	inline Color_t2020392075 * get_address_of__strokeColor_62() { return &____strokeColor_62; }
	inline void set__strokeColor_62(Color_t2020392075  value)
	{
		____strokeColor_62 = value;
	}

	inline static int32_t get_offset_of__shadowOffset_63() { return static_cast<int32_t>(offsetof(TextField_t1207703749, ____shadowOffset_63)); }
	inline Vector2_t2243707579  get__shadowOffset_63() const { return ____shadowOffset_63; }
	inline Vector2_t2243707579 * get_address_of__shadowOffset_63() { return &____shadowOffset_63; }
	inline void set__shadowOffset_63(Vector2_t2243707579  value)
	{
		____shadowOffset_63 = value;
	}

	inline static int32_t get_offset_of__elements_64() { return static_cast<int32_t>(offsetof(TextField_t1207703749, ____elements_64)); }
	inline List_1_t2504876533 * get__elements_64() const { return ____elements_64; }
	inline List_1_t2504876533 ** get_address_of__elements_64() { return &____elements_64; }
	inline void set__elements_64(List_1_t2504876533 * value)
	{
		____elements_64 = value;
		Il2CppCodeGenWriteBarrier(&____elements_64, value);
	}

	inline static int32_t get_offset_of__lines_65() { return static_cast<int32_t>(offsetof(TextField_t1207703749, ____lines_65)); }
	inline List_1_t959063242 * get__lines_65() const { return ____lines_65; }
	inline List_1_t959063242 ** get_address_of__lines_65() { return &____lines_65; }
	inline void set__lines_65(List_1_t959063242 * value)
	{
		____lines_65 = value;
		Il2CppCodeGenWriteBarrier(&____lines_65, value);
	}

	inline static int32_t get_offset_of__charPositions_66() { return static_cast<int32_t>(offsetof(TextField_t1207703749, ____charPositions_66)); }
	inline List_1_t1247802635 * get__charPositions_66() const { return ____charPositions_66; }
	inline List_1_t1247802635 ** get_address_of__charPositions_66() { return &____charPositions_66; }
	inline void set__charPositions_66(List_1_t1247802635 * value)
	{
		____charPositions_66 = value;
		Il2CppCodeGenWriteBarrier(&____charPositions_66, value);
	}

	inline static int32_t get_offset_of__font_67() { return static_cast<int32_t>(offsetof(TextField_t1207703749, ____font_67)); }
	inline BaseFont_t877349798 * get__font_67() const { return ____font_67; }
	inline BaseFont_t877349798 ** get_address_of__font_67() { return &____font_67; }
	inline void set__font_67(BaseFont_t877349798 * value)
	{
		____font_67 = value;
		Il2CppCodeGenWriteBarrier(&____font_67, value);
	}

	inline static int32_t get_offset_of__textWidth_68() { return static_cast<int32_t>(offsetof(TextField_t1207703749, ____textWidth_68)); }
	inline float get__textWidth_68() const { return ____textWidth_68; }
	inline float* get_address_of__textWidth_68() { return &____textWidth_68; }
	inline void set__textWidth_68(float value)
	{
		____textWidth_68 = value;
	}

	inline static int32_t get_offset_of__textHeight_69() { return static_cast<int32_t>(offsetof(TextField_t1207703749, ____textHeight_69)); }
	inline float get__textHeight_69() const { return ____textHeight_69; }
	inline float* get_address_of__textHeight_69() { return &____textHeight_69; }
	inline void set__textHeight_69(float value)
	{
		____textHeight_69 = value;
	}

	inline static int32_t get_offset_of__minHeight_70() { return static_cast<int32_t>(offsetof(TextField_t1207703749, ____minHeight_70)); }
	inline float get__minHeight_70() const { return ____minHeight_70; }
	inline float* get_address_of__minHeight_70() { return &____minHeight_70; }
	inline void set__minHeight_70(float value)
	{
		____minHeight_70 = value;
	}

	inline static int32_t get_offset_of__textChanged_71() { return static_cast<int32_t>(offsetof(TextField_t1207703749, ____textChanged_71)); }
	inline bool get__textChanged_71() const { return ____textChanged_71; }
	inline bool* get_address_of__textChanged_71() { return &____textChanged_71; }
	inline void set__textChanged_71(bool value)
	{
		____textChanged_71 = value;
	}

	inline static int32_t get_offset_of__yOffset_72() { return static_cast<int32_t>(offsetof(TextField_t1207703749, ____yOffset_72)); }
	inline int32_t get__yOffset_72() const { return ____yOffset_72; }
	inline int32_t* get_address_of__yOffset_72() { return &____yOffset_72; }
	inline void set__yOffset_72(int32_t value)
	{
		____yOffset_72 = value;
	}

	inline static int32_t get_offset_of__alternativeText_73() { return static_cast<int32_t>(offsetof(TextField_t1207703749, ____alternativeText_73)); }
	inline String_t* get__alternativeText_73() const { return ____alternativeText_73; }
	inline String_t** get_address_of__alternativeText_73() { return &____alternativeText_73; }
	inline void set__alternativeText_73(String_t* value)
	{
		____alternativeText_73 = value;
		Il2CppCodeGenWriteBarrier(&____alternativeText_73, value);
	}

	inline static int32_t get_offset_of__alternatvieHtml_74() { return static_cast<int32_t>(offsetof(TextField_t1207703749, ____alternatvieHtml_74)); }
	inline bool get__alternatvieHtml_74() const { return ____alternatvieHtml_74; }
	inline bool* get_address_of__alternatvieHtml_74() { return &____alternatvieHtml_74; }
	inline void set__alternatvieHtml_74(bool value)
	{
		____alternatvieHtml_74 = value;
	}

	inline static int32_t get_offset_of__fontSizeScale_75() { return static_cast<int32_t>(offsetof(TextField_t1207703749, ____fontSizeScale_75)); }
	inline float get__fontSizeScale_75() const { return ____fontSizeScale_75; }
	inline float* get_address_of__fontSizeScale_75() { return &____fontSizeScale_75; }
	inline void set__fontSizeScale_75(float value)
	{
		____fontSizeScale_75 = value;
	}

	inline static int32_t get_offset_of__renderScale_76() { return static_cast<int32_t>(offsetof(TextField_t1207703749, ____renderScale_76)); }
	inline float get__renderScale_76() const { return ____renderScale_76; }
	inline float* get_address_of__renderScale_76() { return &____renderScale_76; }
	inline void set__renderScale_76(float value)
	{
		____renderScale_76 = value;
	}

	inline static int32_t get_offset_of__parsedText_77() { return static_cast<int32_t>(offsetof(TextField_t1207703749, ____parsedText_77)); }
	inline String_t* get__parsedText_77() const { return ____parsedText_77; }
	inline String_t** get_address_of__parsedText_77() { return &____parsedText_77; }
	inline void set__parsedText_77(String_t* value)
	{
		____parsedText_77 = value;
		Il2CppCodeGenWriteBarrier(&____parsedText_77, value);
	}

	inline static int32_t get_offset_of__richTextField_78() { return static_cast<int32_t>(offsetof(TextField_t1207703749, ____richTextField_78)); }
	inline RichTextField_t4204199729 * get__richTextField_78() const { return ____richTextField_78; }
	inline RichTextField_t4204199729 ** get_address_of__richTextField_78() { return &____richTextField_78; }
	inline void set__richTextField_78(RichTextField_t4204199729 * value)
	{
		____richTextField_78 = value;
		Il2CppCodeGenWriteBarrier(&____richTextField_78, value);
	}

	inline static int32_t get_offset_of__updatingSize_83() { return static_cast<int32_t>(offsetof(TextField_t1207703749, ____updatingSize_83)); }
	inline bool get__updatingSize_83() const { return ____updatingSize_83; }
	inline bool* get_address_of__updatingSize_83() { return &____updatingSize_83; }
	inline void set__updatingSize_83(bool value)
	{
		____updatingSize_83 = value;
	}
};

struct TextField_t1207703749_StaticFields
{
public:
	// System.Single[] FairyGUI.TextField::STROKE_OFFSET
	SingleU5BU5D_t577127397* ___STROKE_OFFSET_81;
	// System.Single[] FairyGUI.TextField::BOLD_OFFSET
	SingleU5BU5D_t577127397* ___BOLD_OFFSET_82;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> FairyGUI.TextField::sCachedVerts
	List_1_t1612828712 * ___sCachedVerts_84;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> FairyGUI.TextField::sCachedUVs
	List_1_t1612828711 * ___sCachedUVs_85;
	// System.Collections.Generic.List`1<UnityEngine.Color32> FairyGUI.TextField::sCachedCols
	List_1_t243638650 * ___sCachedCols_86;
	// FairyGUI.GlyphInfo FairyGUI.TextField::glyph
	GlyphInfo_t58017296 * ___glyph_87;
	// FairyGUI.GlyphInfo FairyGUI.TextField::glyph2
	GlyphInfo_t58017296 * ___glyph2_88;

public:
	inline static int32_t get_offset_of_STROKE_OFFSET_81() { return static_cast<int32_t>(offsetof(TextField_t1207703749_StaticFields, ___STROKE_OFFSET_81)); }
	inline SingleU5BU5D_t577127397* get_STROKE_OFFSET_81() const { return ___STROKE_OFFSET_81; }
	inline SingleU5BU5D_t577127397** get_address_of_STROKE_OFFSET_81() { return &___STROKE_OFFSET_81; }
	inline void set_STROKE_OFFSET_81(SingleU5BU5D_t577127397* value)
	{
		___STROKE_OFFSET_81 = value;
		Il2CppCodeGenWriteBarrier(&___STROKE_OFFSET_81, value);
	}

	inline static int32_t get_offset_of_BOLD_OFFSET_82() { return static_cast<int32_t>(offsetof(TextField_t1207703749_StaticFields, ___BOLD_OFFSET_82)); }
	inline SingleU5BU5D_t577127397* get_BOLD_OFFSET_82() const { return ___BOLD_OFFSET_82; }
	inline SingleU5BU5D_t577127397** get_address_of_BOLD_OFFSET_82() { return &___BOLD_OFFSET_82; }
	inline void set_BOLD_OFFSET_82(SingleU5BU5D_t577127397* value)
	{
		___BOLD_OFFSET_82 = value;
		Il2CppCodeGenWriteBarrier(&___BOLD_OFFSET_82, value);
	}

	inline static int32_t get_offset_of_sCachedVerts_84() { return static_cast<int32_t>(offsetof(TextField_t1207703749_StaticFields, ___sCachedVerts_84)); }
	inline List_1_t1612828712 * get_sCachedVerts_84() const { return ___sCachedVerts_84; }
	inline List_1_t1612828712 ** get_address_of_sCachedVerts_84() { return &___sCachedVerts_84; }
	inline void set_sCachedVerts_84(List_1_t1612828712 * value)
	{
		___sCachedVerts_84 = value;
		Il2CppCodeGenWriteBarrier(&___sCachedVerts_84, value);
	}

	inline static int32_t get_offset_of_sCachedUVs_85() { return static_cast<int32_t>(offsetof(TextField_t1207703749_StaticFields, ___sCachedUVs_85)); }
	inline List_1_t1612828711 * get_sCachedUVs_85() const { return ___sCachedUVs_85; }
	inline List_1_t1612828711 ** get_address_of_sCachedUVs_85() { return &___sCachedUVs_85; }
	inline void set_sCachedUVs_85(List_1_t1612828711 * value)
	{
		___sCachedUVs_85 = value;
		Il2CppCodeGenWriteBarrier(&___sCachedUVs_85, value);
	}

	inline static int32_t get_offset_of_sCachedCols_86() { return static_cast<int32_t>(offsetof(TextField_t1207703749_StaticFields, ___sCachedCols_86)); }
	inline List_1_t243638650 * get_sCachedCols_86() const { return ___sCachedCols_86; }
	inline List_1_t243638650 ** get_address_of_sCachedCols_86() { return &___sCachedCols_86; }
	inline void set_sCachedCols_86(List_1_t243638650 * value)
	{
		___sCachedCols_86 = value;
		Il2CppCodeGenWriteBarrier(&___sCachedCols_86, value);
	}

	inline static int32_t get_offset_of_glyph_87() { return static_cast<int32_t>(offsetof(TextField_t1207703749_StaticFields, ___glyph_87)); }
	inline GlyphInfo_t58017296 * get_glyph_87() const { return ___glyph_87; }
	inline GlyphInfo_t58017296 ** get_address_of_glyph_87() { return &___glyph_87; }
	inline void set_glyph_87(GlyphInfo_t58017296 * value)
	{
		___glyph_87 = value;
		Il2CppCodeGenWriteBarrier(&___glyph_87, value);
	}

	inline static int32_t get_offset_of_glyph2_88() { return static_cast<int32_t>(offsetof(TextField_t1207703749_StaticFields, ___glyph2_88)); }
	inline GlyphInfo_t58017296 * get_glyph2_88() const { return ___glyph2_88; }
	inline GlyphInfo_t58017296 ** get_address_of_glyph2_88() { return &___glyph2_88; }
	inline void set_glyph2_88(GlyphInfo_t58017296 * value)
	{
		___glyph2_88 = value;
		Il2CppCodeGenWriteBarrier(&___glyph2_88, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

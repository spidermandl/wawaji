#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "FairyGUI_FairyGUI_GObject2662234644.h"
#include "FairyGUI_FairyGUI_AlignType3064532699.h"
#include "FairyGUI_FairyGUI_VertAlignType2062725310.h"
#include "FairyGUI_FairyGUI_FillType614530665.h"

// System.String
struct String_t;
// FairyGUI.PackageItem
struct PackageItem_t1874577185;
// FairyGUI.MovieClip
struct MovieClip_t2653703760;
// FairyGUI.GObject
struct GObject_t2662234644;
// FairyGUI.GObjectPool
struct GObjectPool_t562794502;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.GLoader
struct  GLoader_t3665669800  : public GObject_t2662234644
{
public:
	// System.Boolean FairyGUI.GLoader::showErrorSign
	bool ___showErrorSign_74;
	// System.String FairyGUI.GLoader::_url
	String_t* ____url_75;
	// FairyGUI.AlignType FairyGUI.GLoader::_align
	int32_t ____align_76;
	// FairyGUI.VertAlignType FairyGUI.GLoader::_verticalAlign
	int32_t ____verticalAlign_77;
	// System.Boolean FairyGUI.GLoader::_autoSize
	bool ____autoSize_78;
	// FairyGUI.FillType FairyGUI.GLoader::_fill
	int32_t ____fill_79;
	// System.Boolean FairyGUI.GLoader::_updatingLayout
	bool ____updatingLayout_80;
	// FairyGUI.PackageItem FairyGUI.GLoader::_contentItem
	PackageItem_t1874577185 * ____contentItem_81;
	// System.Single FairyGUI.GLoader::_contentWidth
	float ____contentWidth_82;
	// System.Single FairyGUI.GLoader::_contentHeight
	float ____contentHeight_83;
	// System.Single FairyGUI.GLoader::_contentSourceWidth
	float ____contentSourceWidth_84;
	// System.Single FairyGUI.GLoader::_contentSourceHeight
	float ____contentSourceHeight_85;
	// FairyGUI.MovieClip FairyGUI.GLoader::_content
	MovieClip_t2653703760 * ____content_86;
	// FairyGUI.GObject FairyGUI.GLoader::_errorSign
	GObject_t2662234644 * ____errorSign_87;

public:
	inline static int32_t get_offset_of_showErrorSign_74() { return static_cast<int32_t>(offsetof(GLoader_t3665669800, ___showErrorSign_74)); }
	inline bool get_showErrorSign_74() const { return ___showErrorSign_74; }
	inline bool* get_address_of_showErrorSign_74() { return &___showErrorSign_74; }
	inline void set_showErrorSign_74(bool value)
	{
		___showErrorSign_74 = value;
	}

	inline static int32_t get_offset_of__url_75() { return static_cast<int32_t>(offsetof(GLoader_t3665669800, ____url_75)); }
	inline String_t* get__url_75() const { return ____url_75; }
	inline String_t** get_address_of__url_75() { return &____url_75; }
	inline void set__url_75(String_t* value)
	{
		____url_75 = value;
		Il2CppCodeGenWriteBarrier(&____url_75, value);
	}

	inline static int32_t get_offset_of__align_76() { return static_cast<int32_t>(offsetof(GLoader_t3665669800, ____align_76)); }
	inline int32_t get__align_76() const { return ____align_76; }
	inline int32_t* get_address_of__align_76() { return &____align_76; }
	inline void set__align_76(int32_t value)
	{
		____align_76 = value;
	}

	inline static int32_t get_offset_of__verticalAlign_77() { return static_cast<int32_t>(offsetof(GLoader_t3665669800, ____verticalAlign_77)); }
	inline int32_t get__verticalAlign_77() const { return ____verticalAlign_77; }
	inline int32_t* get_address_of__verticalAlign_77() { return &____verticalAlign_77; }
	inline void set__verticalAlign_77(int32_t value)
	{
		____verticalAlign_77 = value;
	}

	inline static int32_t get_offset_of__autoSize_78() { return static_cast<int32_t>(offsetof(GLoader_t3665669800, ____autoSize_78)); }
	inline bool get__autoSize_78() const { return ____autoSize_78; }
	inline bool* get_address_of__autoSize_78() { return &____autoSize_78; }
	inline void set__autoSize_78(bool value)
	{
		____autoSize_78 = value;
	}

	inline static int32_t get_offset_of__fill_79() { return static_cast<int32_t>(offsetof(GLoader_t3665669800, ____fill_79)); }
	inline int32_t get__fill_79() const { return ____fill_79; }
	inline int32_t* get_address_of__fill_79() { return &____fill_79; }
	inline void set__fill_79(int32_t value)
	{
		____fill_79 = value;
	}

	inline static int32_t get_offset_of__updatingLayout_80() { return static_cast<int32_t>(offsetof(GLoader_t3665669800, ____updatingLayout_80)); }
	inline bool get__updatingLayout_80() const { return ____updatingLayout_80; }
	inline bool* get_address_of__updatingLayout_80() { return &____updatingLayout_80; }
	inline void set__updatingLayout_80(bool value)
	{
		____updatingLayout_80 = value;
	}

	inline static int32_t get_offset_of__contentItem_81() { return static_cast<int32_t>(offsetof(GLoader_t3665669800, ____contentItem_81)); }
	inline PackageItem_t1874577185 * get__contentItem_81() const { return ____contentItem_81; }
	inline PackageItem_t1874577185 ** get_address_of__contentItem_81() { return &____contentItem_81; }
	inline void set__contentItem_81(PackageItem_t1874577185 * value)
	{
		____contentItem_81 = value;
		Il2CppCodeGenWriteBarrier(&____contentItem_81, value);
	}

	inline static int32_t get_offset_of__contentWidth_82() { return static_cast<int32_t>(offsetof(GLoader_t3665669800, ____contentWidth_82)); }
	inline float get__contentWidth_82() const { return ____contentWidth_82; }
	inline float* get_address_of__contentWidth_82() { return &____contentWidth_82; }
	inline void set__contentWidth_82(float value)
	{
		____contentWidth_82 = value;
	}

	inline static int32_t get_offset_of__contentHeight_83() { return static_cast<int32_t>(offsetof(GLoader_t3665669800, ____contentHeight_83)); }
	inline float get__contentHeight_83() const { return ____contentHeight_83; }
	inline float* get_address_of__contentHeight_83() { return &____contentHeight_83; }
	inline void set__contentHeight_83(float value)
	{
		____contentHeight_83 = value;
	}

	inline static int32_t get_offset_of__contentSourceWidth_84() { return static_cast<int32_t>(offsetof(GLoader_t3665669800, ____contentSourceWidth_84)); }
	inline float get__contentSourceWidth_84() const { return ____contentSourceWidth_84; }
	inline float* get_address_of__contentSourceWidth_84() { return &____contentSourceWidth_84; }
	inline void set__contentSourceWidth_84(float value)
	{
		____contentSourceWidth_84 = value;
	}

	inline static int32_t get_offset_of__contentSourceHeight_85() { return static_cast<int32_t>(offsetof(GLoader_t3665669800, ____contentSourceHeight_85)); }
	inline float get__contentSourceHeight_85() const { return ____contentSourceHeight_85; }
	inline float* get_address_of__contentSourceHeight_85() { return &____contentSourceHeight_85; }
	inline void set__contentSourceHeight_85(float value)
	{
		____contentSourceHeight_85 = value;
	}

	inline static int32_t get_offset_of__content_86() { return static_cast<int32_t>(offsetof(GLoader_t3665669800, ____content_86)); }
	inline MovieClip_t2653703760 * get__content_86() const { return ____content_86; }
	inline MovieClip_t2653703760 ** get_address_of__content_86() { return &____content_86; }
	inline void set__content_86(MovieClip_t2653703760 * value)
	{
		____content_86 = value;
		Il2CppCodeGenWriteBarrier(&____content_86, value);
	}

	inline static int32_t get_offset_of__errorSign_87() { return static_cast<int32_t>(offsetof(GLoader_t3665669800, ____errorSign_87)); }
	inline GObject_t2662234644 * get__errorSign_87() const { return ____errorSign_87; }
	inline GObject_t2662234644 ** get_address_of__errorSign_87() { return &____errorSign_87; }
	inline void set__errorSign_87(GObject_t2662234644 * value)
	{
		____errorSign_87 = value;
		Il2CppCodeGenWriteBarrier(&____errorSign_87, value);
	}
};

struct GLoader_t3665669800_StaticFields
{
public:
	// FairyGUI.GObjectPool FairyGUI.GLoader::errorSignPool
	GObjectPool_t562794502 * ___errorSignPool_88;

public:
	inline static int32_t get_offset_of_errorSignPool_88() { return static_cast<int32_t>(offsetof(GLoader_t3665669800_StaticFields, ___errorSignPool_88)); }
	inline GObjectPool_t562794502 * get_errorSignPool_88() const { return ___errorSignPool_88; }
	inline GObjectPool_t562794502 ** get_address_of_errorSignPool_88() { return &___errorSignPool_88; }
	inline void set_errorSignPool_88(GObjectPool_t562794502 * value)
	{
		___errorSignPool_88 = value;
		Il2CppCodeGenWriteBarrier(&___errorSignPool_88, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

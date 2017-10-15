#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "FairyGUI_FairyGUI_ScrollBarDisplayType508237182.h"

// System.String
struct String_t;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// System.Collections.Generic.List`1<FairyGUI.UIConfig/ConfigValue>
struct List_1_t3784822262;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// FairyGUI.UIConfig/SoundLoader
struct SoundLoader_t4140433417;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.UIConfig
struct  UIConfig_t3001615142  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<FairyGUI.UIConfig/ConfigValue> FairyGUI.UIConfig::Items
	List_1_t3784822262 * ___Items_32;
	// System.Collections.Generic.List`1<System.String> FairyGUI.UIConfig::PreloadPackages
	List_1_t1398341365 * ___PreloadPackages_33;

public:
	inline static int32_t get_offset_of_Items_32() { return static_cast<int32_t>(offsetof(UIConfig_t3001615142, ___Items_32)); }
	inline List_1_t3784822262 * get_Items_32() const { return ___Items_32; }
	inline List_1_t3784822262 ** get_address_of_Items_32() { return &___Items_32; }
	inline void set_Items_32(List_1_t3784822262 * value)
	{
		___Items_32 = value;
		Il2CppCodeGenWriteBarrier(&___Items_32, value);
	}

	inline static int32_t get_offset_of_PreloadPackages_33() { return static_cast<int32_t>(offsetof(UIConfig_t3001615142, ___PreloadPackages_33)); }
	inline List_1_t1398341365 * get_PreloadPackages_33() const { return ___PreloadPackages_33; }
	inline List_1_t1398341365 ** get_address_of_PreloadPackages_33() { return &___PreloadPackages_33; }
	inline void set_PreloadPackages_33(List_1_t1398341365 * value)
	{
		___PreloadPackages_33 = value;
		Il2CppCodeGenWriteBarrier(&___PreloadPackages_33, value);
	}
};

struct UIConfig_t3001615142_StaticFields
{
public:
	// System.String FairyGUI.UIConfig::defaultFont
	String_t* ___defaultFont_2;
	// System.Boolean FairyGUI.UIConfig::renderingTextBrighterOnDesktop
	bool ___renderingTextBrighterOnDesktop_3;
	// System.String FairyGUI.UIConfig::windowModalWaiting
	String_t* ___windowModalWaiting_4;
	// System.String FairyGUI.UIConfig::globalModalWaiting
	String_t* ___globalModalWaiting_5;
	// UnityEngine.Color FairyGUI.UIConfig::modalLayerColor
	Color_t2020392075  ___modalLayerColor_6;
	// UnityEngine.AudioClip FairyGUI.UIConfig::buttonSound
	AudioClip_t1932558630 * ___buttonSound_7;
	// System.Single FairyGUI.UIConfig::buttonSoundVolumeScale
	float ___buttonSoundVolumeScale_8;
	// System.String FairyGUI.UIConfig::horizontalScrollBar
	String_t* ___horizontalScrollBar_9;
	// System.String FairyGUI.UIConfig::verticalScrollBar
	String_t* ___verticalScrollBar_10;
	// System.Single FairyGUI.UIConfig::defaultScrollStep
	float ___defaultScrollStep_11;
	// System.Single FairyGUI.UIConfig::defaultScrollSpeed
	float ___defaultScrollSpeed_12;
	// System.Single FairyGUI.UIConfig::defaultScrollDecelerationRate
	float ___defaultScrollDecelerationRate_13;
	// System.Single FairyGUI.UIConfig::defaultTouchScrollSpeedRatio
	float ___defaultTouchScrollSpeedRatio_14;
	// FairyGUI.ScrollBarDisplayType FairyGUI.UIConfig::defaultScrollBarDisplay
	int32_t ___defaultScrollBarDisplay_15;
	// System.Boolean FairyGUI.UIConfig::defaultScrollTouchEffect
	bool ___defaultScrollTouchEffect_16;
	// System.Boolean FairyGUI.UIConfig::defaultScrollBounceEffect
	bool ___defaultScrollBounceEffect_17;
	// System.String FairyGUI.UIConfig::popupMenu
	String_t* ___popupMenu_18;
	// System.String FairyGUI.UIConfig::popupMenu_seperator
	String_t* ___popupMenu_seperator_19;
	// System.String FairyGUI.UIConfig::loaderErrorSign
	String_t* ___loaderErrorSign_20;
	// System.String FairyGUI.UIConfig::tooltipsWin
	String_t* ___tooltipsWin_21;
	// System.Int32 FairyGUI.UIConfig::defaultComboBoxVisibleItemCount
	int32_t ___defaultComboBoxVisibleItemCount_22;
	// System.Int32 FairyGUI.UIConfig::touchScrollSensitivity
	int32_t ___touchScrollSensitivity_23;
	// System.Int32 FairyGUI.UIConfig::touchDragSensitivity
	int32_t ___touchDragSensitivity_24;
	// System.Int32 FairyGUI.UIConfig::clickDragSensitivity
	int32_t ___clickDragSensitivity_25;
	// System.Boolean FairyGUI.UIConfig::allowSoftnessOnTopOrLeftSide
	bool ___allowSoftnessOnTopOrLeftSide_26;
	// System.Boolean FairyGUI.UIConfig::bringWindowToFrontOnClick
	bool ___bringWindowToFrontOnClick_27;
	// System.Int32 FairyGUI.UIConfig::inputCaretSize
	int32_t ___inputCaretSize_28;
	// UnityEngine.Color FairyGUI.UIConfig::inputHighlightColor
	Color_t2020392075  ___inputHighlightColor_29;
	// System.Single FairyGUI.UIConfig::frameTimeForAsyncUIConstruction
	float ___frameTimeForAsyncUIConstruction_30;
	// System.Boolean FairyGUI.UIConfig::rightToLeftText
	bool ___rightToLeftText_31;
	// FairyGUI.UIConfig/SoundLoader FairyGUI.UIConfig::soundLoader
	SoundLoader_t4140433417 * ___soundLoader_34;

public:
	inline static int32_t get_offset_of_defaultFont_2() { return static_cast<int32_t>(offsetof(UIConfig_t3001615142_StaticFields, ___defaultFont_2)); }
	inline String_t* get_defaultFont_2() const { return ___defaultFont_2; }
	inline String_t** get_address_of_defaultFont_2() { return &___defaultFont_2; }
	inline void set_defaultFont_2(String_t* value)
	{
		___defaultFont_2 = value;
		Il2CppCodeGenWriteBarrier(&___defaultFont_2, value);
	}

	inline static int32_t get_offset_of_renderingTextBrighterOnDesktop_3() { return static_cast<int32_t>(offsetof(UIConfig_t3001615142_StaticFields, ___renderingTextBrighterOnDesktop_3)); }
	inline bool get_renderingTextBrighterOnDesktop_3() const { return ___renderingTextBrighterOnDesktop_3; }
	inline bool* get_address_of_renderingTextBrighterOnDesktop_3() { return &___renderingTextBrighterOnDesktop_3; }
	inline void set_renderingTextBrighterOnDesktop_3(bool value)
	{
		___renderingTextBrighterOnDesktop_3 = value;
	}

	inline static int32_t get_offset_of_windowModalWaiting_4() { return static_cast<int32_t>(offsetof(UIConfig_t3001615142_StaticFields, ___windowModalWaiting_4)); }
	inline String_t* get_windowModalWaiting_4() const { return ___windowModalWaiting_4; }
	inline String_t** get_address_of_windowModalWaiting_4() { return &___windowModalWaiting_4; }
	inline void set_windowModalWaiting_4(String_t* value)
	{
		___windowModalWaiting_4 = value;
		Il2CppCodeGenWriteBarrier(&___windowModalWaiting_4, value);
	}

	inline static int32_t get_offset_of_globalModalWaiting_5() { return static_cast<int32_t>(offsetof(UIConfig_t3001615142_StaticFields, ___globalModalWaiting_5)); }
	inline String_t* get_globalModalWaiting_5() const { return ___globalModalWaiting_5; }
	inline String_t** get_address_of_globalModalWaiting_5() { return &___globalModalWaiting_5; }
	inline void set_globalModalWaiting_5(String_t* value)
	{
		___globalModalWaiting_5 = value;
		Il2CppCodeGenWriteBarrier(&___globalModalWaiting_5, value);
	}

	inline static int32_t get_offset_of_modalLayerColor_6() { return static_cast<int32_t>(offsetof(UIConfig_t3001615142_StaticFields, ___modalLayerColor_6)); }
	inline Color_t2020392075  get_modalLayerColor_6() const { return ___modalLayerColor_6; }
	inline Color_t2020392075 * get_address_of_modalLayerColor_6() { return &___modalLayerColor_6; }
	inline void set_modalLayerColor_6(Color_t2020392075  value)
	{
		___modalLayerColor_6 = value;
	}

	inline static int32_t get_offset_of_buttonSound_7() { return static_cast<int32_t>(offsetof(UIConfig_t3001615142_StaticFields, ___buttonSound_7)); }
	inline AudioClip_t1932558630 * get_buttonSound_7() const { return ___buttonSound_7; }
	inline AudioClip_t1932558630 ** get_address_of_buttonSound_7() { return &___buttonSound_7; }
	inline void set_buttonSound_7(AudioClip_t1932558630 * value)
	{
		___buttonSound_7 = value;
		Il2CppCodeGenWriteBarrier(&___buttonSound_7, value);
	}

	inline static int32_t get_offset_of_buttonSoundVolumeScale_8() { return static_cast<int32_t>(offsetof(UIConfig_t3001615142_StaticFields, ___buttonSoundVolumeScale_8)); }
	inline float get_buttonSoundVolumeScale_8() const { return ___buttonSoundVolumeScale_8; }
	inline float* get_address_of_buttonSoundVolumeScale_8() { return &___buttonSoundVolumeScale_8; }
	inline void set_buttonSoundVolumeScale_8(float value)
	{
		___buttonSoundVolumeScale_8 = value;
	}

	inline static int32_t get_offset_of_horizontalScrollBar_9() { return static_cast<int32_t>(offsetof(UIConfig_t3001615142_StaticFields, ___horizontalScrollBar_9)); }
	inline String_t* get_horizontalScrollBar_9() const { return ___horizontalScrollBar_9; }
	inline String_t** get_address_of_horizontalScrollBar_9() { return &___horizontalScrollBar_9; }
	inline void set_horizontalScrollBar_9(String_t* value)
	{
		___horizontalScrollBar_9 = value;
		Il2CppCodeGenWriteBarrier(&___horizontalScrollBar_9, value);
	}

	inline static int32_t get_offset_of_verticalScrollBar_10() { return static_cast<int32_t>(offsetof(UIConfig_t3001615142_StaticFields, ___verticalScrollBar_10)); }
	inline String_t* get_verticalScrollBar_10() const { return ___verticalScrollBar_10; }
	inline String_t** get_address_of_verticalScrollBar_10() { return &___verticalScrollBar_10; }
	inline void set_verticalScrollBar_10(String_t* value)
	{
		___verticalScrollBar_10 = value;
		Il2CppCodeGenWriteBarrier(&___verticalScrollBar_10, value);
	}

	inline static int32_t get_offset_of_defaultScrollStep_11() { return static_cast<int32_t>(offsetof(UIConfig_t3001615142_StaticFields, ___defaultScrollStep_11)); }
	inline float get_defaultScrollStep_11() const { return ___defaultScrollStep_11; }
	inline float* get_address_of_defaultScrollStep_11() { return &___defaultScrollStep_11; }
	inline void set_defaultScrollStep_11(float value)
	{
		___defaultScrollStep_11 = value;
	}

	inline static int32_t get_offset_of_defaultScrollSpeed_12() { return static_cast<int32_t>(offsetof(UIConfig_t3001615142_StaticFields, ___defaultScrollSpeed_12)); }
	inline float get_defaultScrollSpeed_12() const { return ___defaultScrollSpeed_12; }
	inline float* get_address_of_defaultScrollSpeed_12() { return &___defaultScrollSpeed_12; }
	inline void set_defaultScrollSpeed_12(float value)
	{
		___defaultScrollSpeed_12 = value;
	}

	inline static int32_t get_offset_of_defaultScrollDecelerationRate_13() { return static_cast<int32_t>(offsetof(UIConfig_t3001615142_StaticFields, ___defaultScrollDecelerationRate_13)); }
	inline float get_defaultScrollDecelerationRate_13() const { return ___defaultScrollDecelerationRate_13; }
	inline float* get_address_of_defaultScrollDecelerationRate_13() { return &___defaultScrollDecelerationRate_13; }
	inline void set_defaultScrollDecelerationRate_13(float value)
	{
		___defaultScrollDecelerationRate_13 = value;
	}

	inline static int32_t get_offset_of_defaultTouchScrollSpeedRatio_14() { return static_cast<int32_t>(offsetof(UIConfig_t3001615142_StaticFields, ___defaultTouchScrollSpeedRatio_14)); }
	inline float get_defaultTouchScrollSpeedRatio_14() const { return ___defaultTouchScrollSpeedRatio_14; }
	inline float* get_address_of_defaultTouchScrollSpeedRatio_14() { return &___defaultTouchScrollSpeedRatio_14; }
	inline void set_defaultTouchScrollSpeedRatio_14(float value)
	{
		___defaultTouchScrollSpeedRatio_14 = value;
	}

	inline static int32_t get_offset_of_defaultScrollBarDisplay_15() { return static_cast<int32_t>(offsetof(UIConfig_t3001615142_StaticFields, ___defaultScrollBarDisplay_15)); }
	inline int32_t get_defaultScrollBarDisplay_15() const { return ___defaultScrollBarDisplay_15; }
	inline int32_t* get_address_of_defaultScrollBarDisplay_15() { return &___defaultScrollBarDisplay_15; }
	inline void set_defaultScrollBarDisplay_15(int32_t value)
	{
		___defaultScrollBarDisplay_15 = value;
	}

	inline static int32_t get_offset_of_defaultScrollTouchEffect_16() { return static_cast<int32_t>(offsetof(UIConfig_t3001615142_StaticFields, ___defaultScrollTouchEffect_16)); }
	inline bool get_defaultScrollTouchEffect_16() const { return ___defaultScrollTouchEffect_16; }
	inline bool* get_address_of_defaultScrollTouchEffect_16() { return &___defaultScrollTouchEffect_16; }
	inline void set_defaultScrollTouchEffect_16(bool value)
	{
		___defaultScrollTouchEffect_16 = value;
	}

	inline static int32_t get_offset_of_defaultScrollBounceEffect_17() { return static_cast<int32_t>(offsetof(UIConfig_t3001615142_StaticFields, ___defaultScrollBounceEffect_17)); }
	inline bool get_defaultScrollBounceEffect_17() const { return ___defaultScrollBounceEffect_17; }
	inline bool* get_address_of_defaultScrollBounceEffect_17() { return &___defaultScrollBounceEffect_17; }
	inline void set_defaultScrollBounceEffect_17(bool value)
	{
		___defaultScrollBounceEffect_17 = value;
	}

	inline static int32_t get_offset_of_popupMenu_18() { return static_cast<int32_t>(offsetof(UIConfig_t3001615142_StaticFields, ___popupMenu_18)); }
	inline String_t* get_popupMenu_18() const { return ___popupMenu_18; }
	inline String_t** get_address_of_popupMenu_18() { return &___popupMenu_18; }
	inline void set_popupMenu_18(String_t* value)
	{
		___popupMenu_18 = value;
		Il2CppCodeGenWriteBarrier(&___popupMenu_18, value);
	}

	inline static int32_t get_offset_of_popupMenu_seperator_19() { return static_cast<int32_t>(offsetof(UIConfig_t3001615142_StaticFields, ___popupMenu_seperator_19)); }
	inline String_t* get_popupMenu_seperator_19() const { return ___popupMenu_seperator_19; }
	inline String_t** get_address_of_popupMenu_seperator_19() { return &___popupMenu_seperator_19; }
	inline void set_popupMenu_seperator_19(String_t* value)
	{
		___popupMenu_seperator_19 = value;
		Il2CppCodeGenWriteBarrier(&___popupMenu_seperator_19, value);
	}

	inline static int32_t get_offset_of_loaderErrorSign_20() { return static_cast<int32_t>(offsetof(UIConfig_t3001615142_StaticFields, ___loaderErrorSign_20)); }
	inline String_t* get_loaderErrorSign_20() const { return ___loaderErrorSign_20; }
	inline String_t** get_address_of_loaderErrorSign_20() { return &___loaderErrorSign_20; }
	inline void set_loaderErrorSign_20(String_t* value)
	{
		___loaderErrorSign_20 = value;
		Il2CppCodeGenWriteBarrier(&___loaderErrorSign_20, value);
	}

	inline static int32_t get_offset_of_tooltipsWin_21() { return static_cast<int32_t>(offsetof(UIConfig_t3001615142_StaticFields, ___tooltipsWin_21)); }
	inline String_t* get_tooltipsWin_21() const { return ___tooltipsWin_21; }
	inline String_t** get_address_of_tooltipsWin_21() { return &___tooltipsWin_21; }
	inline void set_tooltipsWin_21(String_t* value)
	{
		___tooltipsWin_21 = value;
		Il2CppCodeGenWriteBarrier(&___tooltipsWin_21, value);
	}

	inline static int32_t get_offset_of_defaultComboBoxVisibleItemCount_22() { return static_cast<int32_t>(offsetof(UIConfig_t3001615142_StaticFields, ___defaultComboBoxVisibleItemCount_22)); }
	inline int32_t get_defaultComboBoxVisibleItemCount_22() const { return ___defaultComboBoxVisibleItemCount_22; }
	inline int32_t* get_address_of_defaultComboBoxVisibleItemCount_22() { return &___defaultComboBoxVisibleItemCount_22; }
	inline void set_defaultComboBoxVisibleItemCount_22(int32_t value)
	{
		___defaultComboBoxVisibleItemCount_22 = value;
	}

	inline static int32_t get_offset_of_touchScrollSensitivity_23() { return static_cast<int32_t>(offsetof(UIConfig_t3001615142_StaticFields, ___touchScrollSensitivity_23)); }
	inline int32_t get_touchScrollSensitivity_23() const { return ___touchScrollSensitivity_23; }
	inline int32_t* get_address_of_touchScrollSensitivity_23() { return &___touchScrollSensitivity_23; }
	inline void set_touchScrollSensitivity_23(int32_t value)
	{
		___touchScrollSensitivity_23 = value;
	}

	inline static int32_t get_offset_of_touchDragSensitivity_24() { return static_cast<int32_t>(offsetof(UIConfig_t3001615142_StaticFields, ___touchDragSensitivity_24)); }
	inline int32_t get_touchDragSensitivity_24() const { return ___touchDragSensitivity_24; }
	inline int32_t* get_address_of_touchDragSensitivity_24() { return &___touchDragSensitivity_24; }
	inline void set_touchDragSensitivity_24(int32_t value)
	{
		___touchDragSensitivity_24 = value;
	}

	inline static int32_t get_offset_of_clickDragSensitivity_25() { return static_cast<int32_t>(offsetof(UIConfig_t3001615142_StaticFields, ___clickDragSensitivity_25)); }
	inline int32_t get_clickDragSensitivity_25() const { return ___clickDragSensitivity_25; }
	inline int32_t* get_address_of_clickDragSensitivity_25() { return &___clickDragSensitivity_25; }
	inline void set_clickDragSensitivity_25(int32_t value)
	{
		___clickDragSensitivity_25 = value;
	}

	inline static int32_t get_offset_of_allowSoftnessOnTopOrLeftSide_26() { return static_cast<int32_t>(offsetof(UIConfig_t3001615142_StaticFields, ___allowSoftnessOnTopOrLeftSide_26)); }
	inline bool get_allowSoftnessOnTopOrLeftSide_26() const { return ___allowSoftnessOnTopOrLeftSide_26; }
	inline bool* get_address_of_allowSoftnessOnTopOrLeftSide_26() { return &___allowSoftnessOnTopOrLeftSide_26; }
	inline void set_allowSoftnessOnTopOrLeftSide_26(bool value)
	{
		___allowSoftnessOnTopOrLeftSide_26 = value;
	}

	inline static int32_t get_offset_of_bringWindowToFrontOnClick_27() { return static_cast<int32_t>(offsetof(UIConfig_t3001615142_StaticFields, ___bringWindowToFrontOnClick_27)); }
	inline bool get_bringWindowToFrontOnClick_27() const { return ___bringWindowToFrontOnClick_27; }
	inline bool* get_address_of_bringWindowToFrontOnClick_27() { return &___bringWindowToFrontOnClick_27; }
	inline void set_bringWindowToFrontOnClick_27(bool value)
	{
		___bringWindowToFrontOnClick_27 = value;
	}

	inline static int32_t get_offset_of_inputCaretSize_28() { return static_cast<int32_t>(offsetof(UIConfig_t3001615142_StaticFields, ___inputCaretSize_28)); }
	inline int32_t get_inputCaretSize_28() const { return ___inputCaretSize_28; }
	inline int32_t* get_address_of_inputCaretSize_28() { return &___inputCaretSize_28; }
	inline void set_inputCaretSize_28(int32_t value)
	{
		___inputCaretSize_28 = value;
	}

	inline static int32_t get_offset_of_inputHighlightColor_29() { return static_cast<int32_t>(offsetof(UIConfig_t3001615142_StaticFields, ___inputHighlightColor_29)); }
	inline Color_t2020392075  get_inputHighlightColor_29() const { return ___inputHighlightColor_29; }
	inline Color_t2020392075 * get_address_of_inputHighlightColor_29() { return &___inputHighlightColor_29; }
	inline void set_inputHighlightColor_29(Color_t2020392075  value)
	{
		___inputHighlightColor_29 = value;
	}

	inline static int32_t get_offset_of_frameTimeForAsyncUIConstruction_30() { return static_cast<int32_t>(offsetof(UIConfig_t3001615142_StaticFields, ___frameTimeForAsyncUIConstruction_30)); }
	inline float get_frameTimeForAsyncUIConstruction_30() const { return ___frameTimeForAsyncUIConstruction_30; }
	inline float* get_address_of_frameTimeForAsyncUIConstruction_30() { return &___frameTimeForAsyncUIConstruction_30; }
	inline void set_frameTimeForAsyncUIConstruction_30(float value)
	{
		___frameTimeForAsyncUIConstruction_30 = value;
	}

	inline static int32_t get_offset_of_rightToLeftText_31() { return static_cast<int32_t>(offsetof(UIConfig_t3001615142_StaticFields, ___rightToLeftText_31)); }
	inline bool get_rightToLeftText_31() const { return ___rightToLeftText_31; }
	inline bool* get_address_of_rightToLeftText_31() { return &___rightToLeftText_31; }
	inline void set_rightToLeftText_31(bool value)
	{
		___rightToLeftText_31 = value;
	}

	inline static int32_t get_offset_of_soundLoader_34() { return static_cast<int32_t>(offsetof(UIConfig_t3001615142_StaticFields, ___soundLoader_34)); }
	inline SoundLoader_t4140433417 * get_soundLoader_34() const { return ___soundLoader_34; }
	inline SoundLoader_t4140433417 ** get_address_of_soundLoader_34() { return &___soundLoader_34; }
	inline void set_soundLoader_34(SoundLoader_t4140433417 * value)
	{
		___soundLoader_34 = value;
		Il2CppCodeGenWriteBarrier(&___soundLoader_34, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

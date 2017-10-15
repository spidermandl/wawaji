#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "FairyGUI_FairyGUI_FitScreen1125289881.h"
#include "UnityEngine_UnityEngine_RenderMode4280533217.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "FairyGUI_FairyGUI_HitTestMode669342612.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

// FairyGUI.Container
struct Container_t2415729585;
// System.String
struct String_t;
// UnityEngine.Camera
struct Camera_t189460977;
// FairyGUI.GComponent
struct GComponent_t4106136290;
// System.Collections.Generic.List`1<UnityEngine.Renderer>
struct List_1_t3921398993;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.UIPanel
struct  UIPanel_t1943730538  : public MonoBehaviour_t1158329972
{
public:
	// FairyGUI.Container FairyGUI.UIPanel::<container>k__BackingField
	Container_t2415729585 * ___U3CcontainerU3Ek__BackingField_2;
	// System.String FairyGUI.UIPanel::packageName
	String_t* ___packageName_3;
	// System.String FairyGUI.UIPanel::componentName
	String_t* ___componentName_4;
	// FairyGUI.FitScreen FairyGUI.UIPanel::fitScreen
	int32_t ___fitScreen_5;
	// System.Int32 FairyGUI.UIPanel::sortingOrder
	int32_t ___sortingOrder_6;
	// System.String FairyGUI.UIPanel::packagePath
	String_t* ___packagePath_7;
	// UnityEngine.RenderMode FairyGUI.UIPanel::renderMode
	int32_t ___renderMode_8;
	// UnityEngine.Camera FairyGUI.UIPanel::renderCamera
	Camera_t189460977 * ___renderCamera_9;
	// UnityEngine.Vector3 FairyGUI.UIPanel::position
	Vector3_t2243707580  ___position_10;
	// UnityEngine.Vector3 FairyGUI.UIPanel::scale
	Vector3_t2243707580  ___scale_11;
	// UnityEngine.Vector3 FairyGUI.UIPanel::rotation
	Vector3_t2243707580  ___rotation_12;
	// System.Boolean FairyGUI.UIPanel::fairyBatching
	bool ___fairyBatching_13;
	// System.Boolean FairyGUI.UIPanel::touchDisabled
	bool ___touchDisabled_14;
	// UnityEngine.Vector2 FairyGUI.UIPanel::cachedUISize
	Vector2_t2243707579  ___cachedUISize_15;
	// FairyGUI.HitTestMode FairyGUI.UIPanel::hitTestMode
	int32_t ___hitTestMode_16;
	// System.Boolean FairyGUI.UIPanel::setNativeChildrenOrder
	bool ___setNativeChildrenOrder_17;
	// System.Int32 FairyGUI.UIPanel::screenSizeVer
	int32_t ___screenSizeVer_18;
	// UnityEngine.Rect FairyGUI.UIPanel::uiBounds
	Rect_t3681755626  ___uiBounds_19;
	// FairyGUI.GComponent FairyGUI.UIPanel::_ui
	GComponent_t4106136290 * ____ui_20;
	// System.Boolean FairyGUI.UIPanel::_created
	bool ____created_21;
	// System.Collections.Generic.List`1<UnityEngine.Renderer> FairyGUI.UIPanel::_renders
	List_1_t3921398993 * ____renders_22;

public:
	inline static int32_t get_offset_of_U3CcontainerU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UIPanel_t1943730538, ___U3CcontainerU3Ek__BackingField_2)); }
	inline Container_t2415729585 * get_U3CcontainerU3Ek__BackingField_2() const { return ___U3CcontainerU3Ek__BackingField_2; }
	inline Container_t2415729585 ** get_address_of_U3CcontainerU3Ek__BackingField_2() { return &___U3CcontainerU3Ek__BackingField_2; }
	inline void set_U3CcontainerU3Ek__BackingField_2(Container_t2415729585 * value)
	{
		___U3CcontainerU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CcontainerU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_packageName_3() { return static_cast<int32_t>(offsetof(UIPanel_t1943730538, ___packageName_3)); }
	inline String_t* get_packageName_3() const { return ___packageName_3; }
	inline String_t** get_address_of_packageName_3() { return &___packageName_3; }
	inline void set_packageName_3(String_t* value)
	{
		___packageName_3 = value;
		Il2CppCodeGenWriteBarrier(&___packageName_3, value);
	}

	inline static int32_t get_offset_of_componentName_4() { return static_cast<int32_t>(offsetof(UIPanel_t1943730538, ___componentName_4)); }
	inline String_t* get_componentName_4() const { return ___componentName_4; }
	inline String_t** get_address_of_componentName_4() { return &___componentName_4; }
	inline void set_componentName_4(String_t* value)
	{
		___componentName_4 = value;
		Il2CppCodeGenWriteBarrier(&___componentName_4, value);
	}

	inline static int32_t get_offset_of_fitScreen_5() { return static_cast<int32_t>(offsetof(UIPanel_t1943730538, ___fitScreen_5)); }
	inline int32_t get_fitScreen_5() const { return ___fitScreen_5; }
	inline int32_t* get_address_of_fitScreen_5() { return &___fitScreen_5; }
	inline void set_fitScreen_5(int32_t value)
	{
		___fitScreen_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(UIPanel_t1943730538, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_packagePath_7() { return static_cast<int32_t>(offsetof(UIPanel_t1943730538, ___packagePath_7)); }
	inline String_t* get_packagePath_7() const { return ___packagePath_7; }
	inline String_t** get_address_of_packagePath_7() { return &___packagePath_7; }
	inline void set_packagePath_7(String_t* value)
	{
		___packagePath_7 = value;
		Il2CppCodeGenWriteBarrier(&___packagePath_7, value);
	}

	inline static int32_t get_offset_of_renderMode_8() { return static_cast<int32_t>(offsetof(UIPanel_t1943730538, ___renderMode_8)); }
	inline int32_t get_renderMode_8() const { return ___renderMode_8; }
	inline int32_t* get_address_of_renderMode_8() { return &___renderMode_8; }
	inline void set_renderMode_8(int32_t value)
	{
		___renderMode_8 = value;
	}

	inline static int32_t get_offset_of_renderCamera_9() { return static_cast<int32_t>(offsetof(UIPanel_t1943730538, ___renderCamera_9)); }
	inline Camera_t189460977 * get_renderCamera_9() const { return ___renderCamera_9; }
	inline Camera_t189460977 ** get_address_of_renderCamera_9() { return &___renderCamera_9; }
	inline void set_renderCamera_9(Camera_t189460977 * value)
	{
		___renderCamera_9 = value;
		Il2CppCodeGenWriteBarrier(&___renderCamera_9, value);
	}

	inline static int32_t get_offset_of_position_10() { return static_cast<int32_t>(offsetof(UIPanel_t1943730538, ___position_10)); }
	inline Vector3_t2243707580  get_position_10() const { return ___position_10; }
	inline Vector3_t2243707580 * get_address_of_position_10() { return &___position_10; }
	inline void set_position_10(Vector3_t2243707580  value)
	{
		___position_10 = value;
	}

	inline static int32_t get_offset_of_scale_11() { return static_cast<int32_t>(offsetof(UIPanel_t1943730538, ___scale_11)); }
	inline Vector3_t2243707580  get_scale_11() const { return ___scale_11; }
	inline Vector3_t2243707580 * get_address_of_scale_11() { return &___scale_11; }
	inline void set_scale_11(Vector3_t2243707580  value)
	{
		___scale_11 = value;
	}

	inline static int32_t get_offset_of_rotation_12() { return static_cast<int32_t>(offsetof(UIPanel_t1943730538, ___rotation_12)); }
	inline Vector3_t2243707580  get_rotation_12() const { return ___rotation_12; }
	inline Vector3_t2243707580 * get_address_of_rotation_12() { return &___rotation_12; }
	inline void set_rotation_12(Vector3_t2243707580  value)
	{
		___rotation_12 = value;
	}

	inline static int32_t get_offset_of_fairyBatching_13() { return static_cast<int32_t>(offsetof(UIPanel_t1943730538, ___fairyBatching_13)); }
	inline bool get_fairyBatching_13() const { return ___fairyBatching_13; }
	inline bool* get_address_of_fairyBatching_13() { return &___fairyBatching_13; }
	inline void set_fairyBatching_13(bool value)
	{
		___fairyBatching_13 = value;
	}

	inline static int32_t get_offset_of_touchDisabled_14() { return static_cast<int32_t>(offsetof(UIPanel_t1943730538, ___touchDisabled_14)); }
	inline bool get_touchDisabled_14() const { return ___touchDisabled_14; }
	inline bool* get_address_of_touchDisabled_14() { return &___touchDisabled_14; }
	inline void set_touchDisabled_14(bool value)
	{
		___touchDisabled_14 = value;
	}

	inline static int32_t get_offset_of_cachedUISize_15() { return static_cast<int32_t>(offsetof(UIPanel_t1943730538, ___cachedUISize_15)); }
	inline Vector2_t2243707579  get_cachedUISize_15() const { return ___cachedUISize_15; }
	inline Vector2_t2243707579 * get_address_of_cachedUISize_15() { return &___cachedUISize_15; }
	inline void set_cachedUISize_15(Vector2_t2243707579  value)
	{
		___cachedUISize_15 = value;
	}

	inline static int32_t get_offset_of_hitTestMode_16() { return static_cast<int32_t>(offsetof(UIPanel_t1943730538, ___hitTestMode_16)); }
	inline int32_t get_hitTestMode_16() const { return ___hitTestMode_16; }
	inline int32_t* get_address_of_hitTestMode_16() { return &___hitTestMode_16; }
	inline void set_hitTestMode_16(int32_t value)
	{
		___hitTestMode_16 = value;
	}

	inline static int32_t get_offset_of_setNativeChildrenOrder_17() { return static_cast<int32_t>(offsetof(UIPanel_t1943730538, ___setNativeChildrenOrder_17)); }
	inline bool get_setNativeChildrenOrder_17() const { return ___setNativeChildrenOrder_17; }
	inline bool* get_address_of_setNativeChildrenOrder_17() { return &___setNativeChildrenOrder_17; }
	inline void set_setNativeChildrenOrder_17(bool value)
	{
		___setNativeChildrenOrder_17 = value;
	}

	inline static int32_t get_offset_of_screenSizeVer_18() { return static_cast<int32_t>(offsetof(UIPanel_t1943730538, ___screenSizeVer_18)); }
	inline int32_t get_screenSizeVer_18() const { return ___screenSizeVer_18; }
	inline int32_t* get_address_of_screenSizeVer_18() { return &___screenSizeVer_18; }
	inline void set_screenSizeVer_18(int32_t value)
	{
		___screenSizeVer_18 = value;
	}

	inline static int32_t get_offset_of_uiBounds_19() { return static_cast<int32_t>(offsetof(UIPanel_t1943730538, ___uiBounds_19)); }
	inline Rect_t3681755626  get_uiBounds_19() const { return ___uiBounds_19; }
	inline Rect_t3681755626 * get_address_of_uiBounds_19() { return &___uiBounds_19; }
	inline void set_uiBounds_19(Rect_t3681755626  value)
	{
		___uiBounds_19 = value;
	}

	inline static int32_t get_offset_of__ui_20() { return static_cast<int32_t>(offsetof(UIPanel_t1943730538, ____ui_20)); }
	inline GComponent_t4106136290 * get__ui_20() const { return ____ui_20; }
	inline GComponent_t4106136290 ** get_address_of__ui_20() { return &____ui_20; }
	inline void set__ui_20(GComponent_t4106136290 * value)
	{
		____ui_20 = value;
		Il2CppCodeGenWriteBarrier(&____ui_20, value);
	}

	inline static int32_t get_offset_of__created_21() { return static_cast<int32_t>(offsetof(UIPanel_t1943730538, ____created_21)); }
	inline bool get__created_21() const { return ____created_21; }
	inline bool* get_address_of__created_21() { return &____created_21; }
	inline void set__created_21(bool value)
	{
		____created_21 = value;
	}

	inline static int32_t get_offset_of__renders_22() { return static_cast<int32_t>(offsetof(UIPanel_t1943730538, ____renders_22)); }
	inline List_1_t3921398993 * get__renders_22() const { return ____renders_22; }
	inline List_1_t3921398993 ** get_address_of__renders_22() { return &____renders_22; }
	inline void set__renders_22(List_1_t3921398993 * value)
	{
		____renders_22 = value;
		Il2CppCodeGenWriteBarrier(&____renders_22, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

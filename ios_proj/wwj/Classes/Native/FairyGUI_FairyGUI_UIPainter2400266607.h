#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// FairyGUI.Container
struct Container_t2415729585;
// System.String
struct String_t;
// UnityEngine.Camera
struct Camera_t189460977;
// FairyGUI.GComponent
struct GComponent_t4106136290;
// UnityEngine.Renderer
struct Renderer_t257310565;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;
// FairyGUI.EventCallback0
struct EventCallback0_t422277839;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.UIPainter
struct  UIPainter_t2400266607  : public MonoBehaviour_t1158329972
{
public:
	// FairyGUI.Container FairyGUI.UIPainter::<container>k__BackingField
	Container_t2415729585 * ___U3CcontainerU3Ek__BackingField_2;
	// System.String FairyGUI.UIPainter::packageName
	String_t* ___packageName_3;
	// System.String FairyGUI.UIPainter::componentName
	String_t* ___componentName_4;
	// System.Int32 FairyGUI.UIPainter::sortingOrder
	int32_t ___sortingOrder_5;
	// System.String FairyGUI.UIPainter::packagePath
	String_t* ___packagePath_6;
	// UnityEngine.Camera FairyGUI.UIPainter::renderCamera
	Camera_t189460977 * ___renderCamera_7;
	// System.Boolean FairyGUI.UIPainter::fairyBatching
	bool ___fairyBatching_8;
	// System.Boolean FairyGUI.UIPainter::touchDisabled
	bool ___touchDisabled_9;
	// FairyGUI.GComponent FairyGUI.UIPainter::_ui
	GComponent_t4106136290 * ____ui_10;
	// System.Boolean FairyGUI.UIPainter::_created
	bool ____created_11;
	// System.Boolean FairyGUI.UIPainter::_captured
	bool ____captured_12;
	// UnityEngine.Renderer FairyGUI.UIPainter::_renderer
	Renderer_t257310565 * ____renderer_13;
	// UnityEngine.RenderTexture FairyGUI.UIPainter::_texture
	RenderTexture_t2666733923 * ____texture_14;
	// FairyGUI.EventCallback0 FairyGUI.UIPainter::_captureDelegate
	EventCallback0_t422277839 * ____captureDelegate_15;

public:
	inline static int32_t get_offset_of_U3CcontainerU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UIPainter_t2400266607, ___U3CcontainerU3Ek__BackingField_2)); }
	inline Container_t2415729585 * get_U3CcontainerU3Ek__BackingField_2() const { return ___U3CcontainerU3Ek__BackingField_2; }
	inline Container_t2415729585 ** get_address_of_U3CcontainerU3Ek__BackingField_2() { return &___U3CcontainerU3Ek__BackingField_2; }
	inline void set_U3CcontainerU3Ek__BackingField_2(Container_t2415729585 * value)
	{
		___U3CcontainerU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CcontainerU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_packageName_3() { return static_cast<int32_t>(offsetof(UIPainter_t2400266607, ___packageName_3)); }
	inline String_t* get_packageName_3() const { return ___packageName_3; }
	inline String_t** get_address_of_packageName_3() { return &___packageName_3; }
	inline void set_packageName_3(String_t* value)
	{
		___packageName_3 = value;
		Il2CppCodeGenWriteBarrier(&___packageName_3, value);
	}

	inline static int32_t get_offset_of_componentName_4() { return static_cast<int32_t>(offsetof(UIPainter_t2400266607, ___componentName_4)); }
	inline String_t* get_componentName_4() const { return ___componentName_4; }
	inline String_t** get_address_of_componentName_4() { return &___componentName_4; }
	inline void set_componentName_4(String_t* value)
	{
		___componentName_4 = value;
		Il2CppCodeGenWriteBarrier(&___componentName_4, value);
	}

	inline static int32_t get_offset_of_sortingOrder_5() { return static_cast<int32_t>(offsetof(UIPainter_t2400266607, ___sortingOrder_5)); }
	inline int32_t get_sortingOrder_5() const { return ___sortingOrder_5; }
	inline int32_t* get_address_of_sortingOrder_5() { return &___sortingOrder_5; }
	inline void set_sortingOrder_5(int32_t value)
	{
		___sortingOrder_5 = value;
	}

	inline static int32_t get_offset_of_packagePath_6() { return static_cast<int32_t>(offsetof(UIPainter_t2400266607, ___packagePath_6)); }
	inline String_t* get_packagePath_6() const { return ___packagePath_6; }
	inline String_t** get_address_of_packagePath_6() { return &___packagePath_6; }
	inline void set_packagePath_6(String_t* value)
	{
		___packagePath_6 = value;
		Il2CppCodeGenWriteBarrier(&___packagePath_6, value);
	}

	inline static int32_t get_offset_of_renderCamera_7() { return static_cast<int32_t>(offsetof(UIPainter_t2400266607, ___renderCamera_7)); }
	inline Camera_t189460977 * get_renderCamera_7() const { return ___renderCamera_7; }
	inline Camera_t189460977 ** get_address_of_renderCamera_7() { return &___renderCamera_7; }
	inline void set_renderCamera_7(Camera_t189460977 * value)
	{
		___renderCamera_7 = value;
		Il2CppCodeGenWriteBarrier(&___renderCamera_7, value);
	}

	inline static int32_t get_offset_of_fairyBatching_8() { return static_cast<int32_t>(offsetof(UIPainter_t2400266607, ___fairyBatching_8)); }
	inline bool get_fairyBatching_8() const { return ___fairyBatching_8; }
	inline bool* get_address_of_fairyBatching_8() { return &___fairyBatching_8; }
	inline void set_fairyBatching_8(bool value)
	{
		___fairyBatching_8 = value;
	}

	inline static int32_t get_offset_of_touchDisabled_9() { return static_cast<int32_t>(offsetof(UIPainter_t2400266607, ___touchDisabled_9)); }
	inline bool get_touchDisabled_9() const { return ___touchDisabled_9; }
	inline bool* get_address_of_touchDisabled_9() { return &___touchDisabled_9; }
	inline void set_touchDisabled_9(bool value)
	{
		___touchDisabled_9 = value;
	}

	inline static int32_t get_offset_of__ui_10() { return static_cast<int32_t>(offsetof(UIPainter_t2400266607, ____ui_10)); }
	inline GComponent_t4106136290 * get__ui_10() const { return ____ui_10; }
	inline GComponent_t4106136290 ** get_address_of__ui_10() { return &____ui_10; }
	inline void set__ui_10(GComponent_t4106136290 * value)
	{
		____ui_10 = value;
		Il2CppCodeGenWriteBarrier(&____ui_10, value);
	}

	inline static int32_t get_offset_of__created_11() { return static_cast<int32_t>(offsetof(UIPainter_t2400266607, ____created_11)); }
	inline bool get__created_11() const { return ____created_11; }
	inline bool* get_address_of__created_11() { return &____created_11; }
	inline void set__created_11(bool value)
	{
		____created_11 = value;
	}

	inline static int32_t get_offset_of__captured_12() { return static_cast<int32_t>(offsetof(UIPainter_t2400266607, ____captured_12)); }
	inline bool get__captured_12() const { return ____captured_12; }
	inline bool* get_address_of__captured_12() { return &____captured_12; }
	inline void set__captured_12(bool value)
	{
		____captured_12 = value;
	}

	inline static int32_t get_offset_of__renderer_13() { return static_cast<int32_t>(offsetof(UIPainter_t2400266607, ____renderer_13)); }
	inline Renderer_t257310565 * get__renderer_13() const { return ____renderer_13; }
	inline Renderer_t257310565 ** get_address_of__renderer_13() { return &____renderer_13; }
	inline void set__renderer_13(Renderer_t257310565 * value)
	{
		____renderer_13 = value;
		Il2CppCodeGenWriteBarrier(&____renderer_13, value);
	}

	inline static int32_t get_offset_of__texture_14() { return static_cast<int32_t>(offsetof(UIPainter_t2400266607, ____texture_14)); }
	inline RenderTexture_t2666733923 * get__texture_14() const { return ____texture_14; }
	inline RenderTexture_t2666733923 ** get_address_of__texture_14() { return &____texture_14; }
	inline void set__texture_14(RenderTexture_t2666733923 * value)
	{
		____texture_14 = value;
		Il2CppCodeGenWriteBarrier(&____texture_14, value);
	}

	inline static int32_t get_offset_of__captureDelegate_15() { return static_cast<int32_t>(offsetof(UIPainter_t2400266607, ____captureDelegate_15)); }
	inline EventCallback0_t422277839 * get__captureDelegate_15() const { return ____captureDelegate_15; }
	inline EventCallback0_t422277839 ** get_address_of__captureDelegate_15() { return &____captureDelegate_15; }
	inline void set__captureDelegate_15(EventCallback0_t422277839 * value)
	{
		____captureDelegate_15 = value;
		Il2CppCodeGenWriteBarrier(&____captureDelegate_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

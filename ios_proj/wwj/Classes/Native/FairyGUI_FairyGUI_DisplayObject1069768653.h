#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "FairyGUI_FairyGUI_EventDispatcher4068415185.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "FairyGUI_FairyGUI_BlendMode1553507618.h"
#include "FairyGUI_FairyGUI_Margin737097136.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "mscorlib_System_Nullable_1_gen1196300318.h"

// System.String
struct String_t;
// FairyGUI.Container
struct Container_t2415729585;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;
// FairyGUI.NGraphics
struct NGraphics_t88183701;
// FairyGUI.EventCallback0
struct EventCallback0_t422277839;
// FairyGUI.GObject
struct GObject_t2662234644;
// FairyGUI.EventListener
struct EventListener_t2764096410;
// FairyGUI.IFilter
struct IFilter_t2025739399;
// UnityEngine.Material
struct Material_t193706927;
// System.Single[]
struct SingleU5BU5D_t577127397;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.DisplayObject
struct  DisplayObject_t1069768653  : public EventDispatcher_t4068415185
{
public:
	// System.String FairyGUI.DisplayObject::name
	String_t* ___name_2;
	// FairyGUI.Container FairyGUI.DisplayObject::<parent>k__BackingField
	Container_t2415729585 * ___U3CparentU3Ek__BackingField_3;
	// UnityEngine.GameObject FairyGUI.DisplayObject::<gameObject>k__BackingField
	GameObject_t1756533147 * ___U3CgameObjectU3Ek__BackingField_4;
	// UnityEngine.Transform FairyGUI.DisplayObject::<cachedTransform>k__BackingField
	Transform_t3275118058 * ___U3CcachedTransformU3Ek__BackingField_5;
	// FairyGUI.NGraphics FairyGUI.DisplayObject::<graphics>k__BackingField
	NGraphics_t88183701 * ___U3CgraphicsU3Ek__BackingField_6;
	// FairyGUI.NGraphics FairyGUI.DisplayObject::<paintingGraphics>k__BackingField
	NGraphics_t88183701 * ___U3CpaintingGraphicsU3Ek__BackingField_7;
	// FairyGUI.EventCallback0 FairyGUI.DisplayObject::onPaint
	EventCallback0_t422277839 * ___onPaint_8;
	// FairyGUI.GObject FairyGUI.DisplayObject::gOwner
	GObject_t2662234644 * ___gOwner_9;
	// System.UInt32 FairyGUI.DisplayObject::id
	uint32_t ___id_10;
	// FairyGUI.EventListener FairyGUI.DisplayObject::<onClick>k__BackingField
	EventListener_t2764096410 * ___U3ConClickU3Ek__BackingField_11;
	// FairyGUI.EventListener FairyGUI.DisplayObject::<onRightClick>k__BackingField
	EventListener_t2764096410 * ___U3ConRightClickU3Ek__BackingField_12;
	// FairyGUI.EventListener FairyGUI.DisplayObject::<onTouchBegin>k__BackingField
	EventListener_t2764096410 * ___U3ConTouchBeginU3Ek__BackingField_13;
	// FairyGUI.EventListener FairyGUI.DisplayObject::<onTouchEnd>k__BackingField
	EventListener_t2764096410 * ___U3ConTouchEndU3Ek__BackingField_14;
	// FairyGUI.EventListener FairyGUI.DisplayObject::<onRollOver>k__BackingField
	EventListener_t2764096410 * ___U3ConRollOverU3Ek__BackingField_15;
	// FairyGUI.EventListener FairyGUI.DisplayObject::<onRollOut>k__BackingField
	EventListener_t2764096410 * ___U3ConRollOutU3Ek__BackingField_16;
	// FairyGUI.EventListener FairyGUI.DisplayObject::<onMouseWheel>k__BackingField
	EventListener_t2764096410 * ___U3ConMouseWheelU3Ek__BackingField_17;
	// FairyGUI.EventListener FairyGUI.DisplayObject::<onAddedToStage>k__BackingField
	EventListener_t2764096410 * ___U3ConAddedToStageU3Ek__BackingField_18;
	// FairyGUI.EventListener FairyGUI.DisplayObject::<onRemovedFromStage>k__BackingField
	EventListener_t2764096410 * ___U3ConRemovedFromStageU3Ek__BackingField_19;
	// FairyGUI.EventListener FairyGUI.DisplayObject::<onKeyDown>k__BackingField
	EventListener_t2764096410 * ___U3ConKeyDownU3Ek__BackingField_20;
	// FairyGUI.EventListener FairyGUI.DisplayObject::<onClickLink>k__BackingField
	EventListener_t2764096410 * ___U3ConClickLinkU3Ek__BackingField_21;
	// System.Boolean FairyGUI.DisplayObject::_visible
	bool ____visible_22;
	// System.Boolean FairyGUI.DisplayObject::_touchable
	bool ____touchable_23;
	// UnityEngine.Vector2 FairyGUI.DisplayObject::_pivot
	Vector2_t2243707579  ____pivot_24;
	// UnityEngine.Vector3 FairyGUI.DisplayObject::_pivotOffset
	Vector3_t2243707580  ____pivotOffset_25;
	// UnityEngine.Vector2 FairyGUI.DisplayObject::_skew
	Vector2_t2243707579  ____skew_26;
	// System.Int32 FairyGUI.DisplayObject::_renderingOrder
	int32_t ____renderingOrder_27;
	// System.Single FairyGUI.DisplayObject::_alpha
	float ____alpha_28;
	// System.Boolean FairyGUI.DisplayObject::_grayed
	bool ____grayed_29;
	// FairyGUI.BlendMode FairyGUI.DisplayObject::_blendMode
	int32_t ____blendMode_30;
	// FairyGUI.IFilter FairyGUI.DisplayObject::_filter
	Il2CppObject * ____filter_31;
	// UnityEngine.Transform FairyGUI.DisplayObject::_home
	Transform_t3275118058 * ____home_32;
	// System.Boolean FairyGUI.DisplayObject::_perspective
	bool ____perspective_33;
	// System.Int32 FairyGUI.DisplayObject::_focalLength
	int32_t ____focalLength_34;
	// UnityEngine.Vector3 FairyGUI.DisplayObject::_rotation
	Vector3_t2243707580  ____rotation_35;
	// FairyGUI.EventCallback0 FairyGUI.DisplayObject::_captureDelegate
	EventCallback0_t422277839 * ____captureDelegate_36;
	// System.Int32 FairyGUI.DisplayObject::_paintingMode
	int32_t ____paintingMode_37;
	// FairyGUI.Margin FairyGUI.DisplayObject::_paintingMargin
	Margin_t737097136  ____paintingMargin_38;
	// System.Int32 FairyGUI.DisplayObject::_paintingFlag
	int32_t ____paintingFlag_39;
	// UnityEngine.Material FairyGUI.DisplayObject::_paintingMaterial
	Material_t193706927 * ____paintingMaterial_40;
	// System.Boolean FairyGUI.DisplayObject::_cacheAsBitmap
	bool ____cacheAsBitmap_41;
	// UnityEngine.Rect FairyGUI.DisplayObject::_contentRect
	Rect_t3681755626  ____contentRect_42;
	// System.Boolean FairyGUI.DisplayObject::_requireUpdateMesh
	bool ____requireUpdateMesh_43;
	// System.Nullable`1<UnityEngine.Matrix4x4> FairyGUI.DisplayObject::_transformMatrix
	Nullable_1_t1196300318  ____transformMatrix_44;
	// System.Boolean FairyGUI.DisplayObject::_ownsGameObject
	bool ____ownsGameObject_45;
	// System.Boolean FairyGUI.DisplayObject::_disposed
	bool ____disposed_46;
	// System.Boolean FairyGUI.DisplayObject::_touchDisabled
	bool ____touchDisabled_47;
	// System.Single[] FairyGUI.DisplayObject::_internal_bounds
	SingleU5BU5D_t577127397* ____internal_bounds_48;
	// System.Boolean FairyGUI.DisplayObject::_skipInFairyBatching
	bool ____skipInFairyBatching_49;
	// System.Boolean FairyGUI.DisplayObject::_outlineChanged
	bool ____outlineChanged_50;

public:
	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(DisplayObject_t1069768653, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier(&___name_2, value);
	}

	inline static int32_t get_offset_of_U3CparentU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DisplayObject_t1069768653, ___U3CparentU3Ek__BackingField_3)); }
	inline Container_t2415729585 * get_U3CparentU3Ek__BackingField_3() const { return ___U3CparentU3Ek__BackingField_3; }
	inline Container_t2415729585 ** get_address_of_U3CparentU3Ek__BackingField_3() { return &___U3CparentU3Ek__BackingField_3; }
	inline void set_U3CparentU3Ek__BackingField_3(Container_t2415729585 * value)
	{
		___U3CparentU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CparentU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_U3CgameObjectU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(DisplayObject_t1069768653, ___U3CgameObjectU3Ek__BackingField_4)); }
	inline GameObject_t1756533147 * get_U3CgameObjectU3Ek__BackingField_4() const { return ___U3CgameObjectU3Ek__BackingField_4; }
	inline GameObject_t1756533147 ** get_address_of_U3CgameObjectU3Ek__BackingField_4() { return &___U3CgameObjectU3Ek__BackingField_4; }
	inline void set_U3CgameObjectU3Ek__BackingField_4(GameObject_t1756533147 * value)
	{
		___U3CgameObjectU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CgameObjectU3Ek__BackingField_4, value);
	}

	inline static int32_t get_offset_of_U3CcachedTransformU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(DisplayObject_t1069768653, ___U3CcachedTransformU3Ek__BackingField_5)); }
	inline Transform_t3275118058 * get_U3CcachedTransformU3Ek__BackingField_5() const { return ___U3CcachedTransformU3Ek__BackingField_5; }
	inline Transform_t3275118058 ** get_address_of_U3CcachedTransformU3Ek__BackingField_5() { return &___U3CcachedTransformU3Ek__BackingField_5; }
	inline void set_U3CcachedTransformU3Ek__BackingField_5(Transform_t3275118058 * value)
	{
		___U3CcachedTransformU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CcachedTransformU3Ek__BackingField_5, value);
	}

	inline static int32_t get_offset_of_U3CgraphicsU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(DisplayObject_t1069768653, ___U3CgraphicsU3Ek__BackingField_6)); }
	inline NGraphics_t88183701 * get_U3CgraphicsU3Ek__BackingField_6() const { return ___U3CgraphicsU3Ek__BackingField_6; }
	inline NGraphics_t88183701 ** get_address_of_U3CgraphicsU3Ek__BackingField_6() { return &___U3CgraphicsU3Ek__BackingField_6; }
	inline void set_U3CgraphicsU3Ek__BackingField_6(NGraphics_t88183701 * value)
	{
		___U3CgraphicsU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CgraphicsU3Ek__BackingField_6, value);
	}

	inline static int32_t get_offset_of_U3CpaintingGraphicsU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(DisplayObject_t1069768653, ___U3CpaintingGraphicsU3Ek__BackingField_7)); }
	inline NGraphics_t88183701 * get_U3CpaintingGraphicsU3Ek__BackingField_7() const { return ___U3CpaintingGraphicsU3Ek__BackingField_7; }
	inline NGraphics_t88183701 ** get_address_of_U3CpaintingGraphicsU3Ek__BackingField_7() { return &___U3CpaintingGraphicsU3Ek__BackingField_7; }
	inline void set_U3CpaintingGraphicsU3Ek__BackingField_7(NGraphics_t88183701 * value)
	{
		___U3CpaintingGraphicsU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CpaintingGraphicsU3Ek__BackingField_7, value);
	}

	inline static int32_t get_offset_of_onPaint_8() { return static_cast<int32_t>(offsetof(DisplayObject_t1069768653, ___onPaint_8)); }
	inline EventCallback0_t422277839 * get_onPaint_8() const { return ___onPaint_8; }
	inline EventCallback0_t422277839 ** get_address_of_onPaint_8() { return &___onPaint_8; }
	inline void set_onPaint_8(EventCallback0_t422277839 * value)
	{
		___onPaint_8 = value;
		Il2CppCodeGenWriteBarrier(&___onPaint_8, value);
	}

	inline static int32_t get_offset_of_gOwner_9() { return static_cast<int32_t>(offsetof(DisplayObject_t1069768653, ___gOwner_9)); }
	inline GObject_t2662234644 * get_gOwner_9() const { return ___gOwner_9; }
	inline GObject_t2662234644 ** get_address_of_gOwner_9() { return &___gOwner_9; }
	inline void set_gOwner_9(GObject_t2662234644 * value)
	{
		___gOwner_9 = value;
		Il2CppCodeGenWriteBarrier(&___gOwner_9, value);
	}

	inline static int32_t get_offset_of_id_10() { return static_cast<int32_t>(offsetof(DisplayObject_t1069768653, ___id_10)); }
	inline uint32_t get_id_10() const { return ___id_10; }
	inline uint32_t* get_address_of_id_10() { return &___id_10; }
	inline void set_id_10(uint32_t value)
	{
		___id_10 = value;
	}

	inline static int32_t get_offset_of_U3ConClickU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(DisplayObject_t1069768653, ___U3ConClickU3Ek__BackingField_11)); }
	inline EventListener_t2764096410 * get_U3ConClickU3Ek__BackingField_11() const { return ___U3ConClickU3Ek__BackingField_11; }
	inline EventListener_t2764096410 ** get_address_of_U3ConClickU3Ek__BackingField_11() { return &___U3ConClickU3Ek__BackingField_11; }
	inline void set_U3ConClickU3Ek__BackingField_11(EventListener_t2764096410 * value)
	{
		___U3ConClickU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConClickU3Ek__BackingField_11, value);
	}

	inline static int32_t get_offset_of_U3ConRightClickU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(DisplayObject_t1069768653, ___U3ConRightClickU3Ek__BackingField_12)); }
	inline EventListener_t2764096410 * get_U3ConRightClickU3Ek__BackingField_12() const { return ___U3ConRightClickU3Ek__BackingField_12; }
	inline EventListener_t2764096410 ** get_address_of_U3ConRightClickU3Ek__BackingField_12() { return &___U3ConRightClickU3Ek__BackingField_12; }
	inline void set_U3ConRightClickU3Ek__BackingField_12(EventListener_t2764096410 * value)
	{
		___U3ConRightClickU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConRightClickU3Ek__BackingField_12, value);
	}

	inline static int32_t get_offset_of_U3ConTouchBeginU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(DisplayObject_t1069768653, ___U3ConTouchBeginU3Ek__BackingField_13)); }
	inline EventListener_t2764096410 * get_U3ConTouchBeginU3Ek__BackingField_13() const { return ___U3ConTouchBeginU3Ek__BackingField_13; }
	inline EventListener_t2764096410 ** get_address_of_U3ConTouchBeginU3Ek__BackingField_13() { return &___U3ConTouchBeginU3Ek__BackingField_13; }
	inline void set_U3ConTouchBeginU3Ek__BackingField_13(EventListener_t2764096410 * value)
	{
		___U3ConTouchBeginU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConTouchBeginU3Ek__BackingField_13, value);
	}

	inline static int32_t get_offset_of_U3ConTouchEndU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(DisplayObject_t1069768653, ___U3ConTouchEndU3Ek__BackingField_14)); }
	inline EventListener_t2764096410 * get_U3ConTouchEndU3Ek__BackingField_14() const { return ___U3ConTouchEndU3Ek__BackingField_14; }
	inline EventListener_t2764096410 ** get_address_of_U3ConTouchEndU3Ek__BackingField_14() { return &___U3ConTouchEndU3Ek__BackingField_14; }
	inline void set_U3ConTouchEndU3Ek__BackingField_14(EventListener_t2764096410 * value)
	{
		___U3ConTouchEndU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConTouchEndU3Ek__BackingField_14, value);
	}

	inline static int32_t get_offset_of_U3ConRollOverU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(DisplayObject_t1069768653, ___U3ConRollOverU3Ek__BackingField_15)); }
	inline EventListener_t2764096410 * get_U3ConRollOverU3Ek__BackingField_15() const { return ___U3ConRollOverU3Ek__BackingField_15; }
	inline EventListener_t2764096410 ** get_address_of_U3ConRollOverU3Ek__BackingField_15() { return &___U3ConRollOverU3Ek__BackingField_15; }
	inline void set_U3ConRollOverU3Ek__BackingField_15(EventListener_t2764096410 * value)
	{
		___U3ConRollOverU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConRollOverU3Ek__BackingField_15, value);
	}

	inline static int32_t get_offset_of_U3ConRollOutU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(DisplayObject_t1069768653, ___U3ConRollOutU3Ek__BackingField_16)); }
	inline EventListener_t2764096410 * get_U3ConRollOutU3Ek__BackingField_16() const { return ___U3ConRollOutU3Ek__BackingField_16; }
	inline EventListener_t2764096410 ** get_address_of_U3ConRollOutU3Ek__BackingField_16() { return &___U3ConRollOutU3Ek__BackingField_16; }
	inline void set_U3ConRollOutU3Ek__BackingField_16(EventListener_t2764096410 * value)
	{
		___U3ConRollOutU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConRollOutU3Ek__BackingField_16, value);
	}

	inline static int32_t get_offset_of_U3ConMouseWheelU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(DisplayObject_t1069768653, ___U3ConMouseWheelU3Ek__BackingField_17)); }
	inline EventListener_t2764096410 * get_U3ConMouseWheelU3Ek__BackingField_17() const { return ___U3ConMouseWheelU3Ek__BackingField_17; }
	inline EventListener_t2764096410 ** get_address_of_U3ConMouseWheelU3Ek__BackingField_17() { return &___U3ConMouseWheelU3Ek__BackingField_17; }
	inline void set_U3ConMouseWheelU3Ek__BackingField_17(EventListener_t2764096410 * value)
	{
		___U3ConMouseWheelU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConMouseWheelU3Ek__BackingField_17, value);
	}

	inline static int32_t get_offset_of_U3ConAddedToStageU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(DisplayObject_t1069768653, ___U3ConAddedToStageU3Ek__BackingField_18)); }
	inline EventListener_t2764096410 * get_U3ConAddedToStageU3Ek__BackingField_18() const { return ___U3ConAddedToStageU3Ek__BackingField_18; }
	inline EventListener_t2764096410 ** get_address_of_U3ConAddedToStageU3Ek__BackingField_18() { return &___U3ConAddedToStageU3Ek__BackingField_18; }
	inline void set_U3ConAddedToStageU3Ek__BackingField_18(EventListener_t2764096410 * value)
	{
		___U3ConAddedToStageU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConAddedToStageU3Ek__BackingField_18, value);
	}

	inline static int32_t get_offset_of_U3ConRemovedFromStageU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(DisplayObject_t1069768653, ___U3ConRemovedFromStageU3Ek__BackingField_19)); }
	inline EventListener_t2764096410 * get_U3ConRemovedFromStageU3Ek__BackingField_19() const { return ___U3ConRemovedFromStageU3Ek__BackingField_19; }
	inline EventListener_t2764096410 ** get_address_of_U3ConRemovedFromStageU3Ek__BackingField_19() { return &___U3ConRemovedFromStageU3Ek__BackingField_19; }
	inline void set_U3ConRemovedFromStageU3Ek__BackingField_19(EventListener_t2764096410 * value)
	{
		___U3ConRemovedFromStageU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConRemovedFromStageU3Ek__BackingField_19, value);
	}

	inline static int32_t get_offset_of_U3ConKeyDownU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(DisplayObject_t1069768653, ___U3ConKeyDownU3Ek__BackingField_20)); }
	inline EventListener_t2764096410 * get_U3ConKeyDownU3Ek__BackingField_20() const { return ___U3ConKeyDownU3Ek__BackingField_20; }
	inline EventListener_t2764096410 ** get_address_of_U3ConKeyDownU3Ek__BackingField_20() { return &___U3ConKeyDownU3Ek__BackingField_20; }
	inline void set_U3ConKeyDownU3Ek__BackingField_20(EventListener_t2764096410 * value)
	{
		___U3ConKeyDownU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConKeyDownU3Ek__BackingField_20, value);
	}

	inline static int32_t get_offset_of_U3ConClickLinkU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(DisplayObject_t1069768653, ___U3ConClickLinkU3Ek__BackingField_21)); }
	inline EventListener_t2764096410 * get_U3ConClickLinkU3Ek__BackingField_21() const { return ___U3ConClickLinkU3Ek__BackingField_21; }
	inline EventListener_t2764096410 ** get_address_of_U3ConClickLinkU3Ek__BackingField_21() { return &___U3ConClickLinkU3Ek__BackingField_21; }
	inline void set_U3ConClickLinkU3Ek__BackingField_21(EventListener_t2764096410 * value)
	{
		___U3ConClickLinkU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConClickLinkU3Ek__BackingField_21, value);
	}

	inline static int32_t get_offset_of__visible_22() { return static_cast<int32_t>(offsetof(DisplayObject_t1069768653, ____visible_22)); }
	inline bool get__visible_22() const { return ____visible_22; }
	inline bool* get_address_of__visible_22() { return &____visible_22; }
	inline void set__visible_22(bool value)
	{
		____visible_22 = value;
	}

	inline static int32_t get_offset_of__touchable_23() { return static_cast<int32_t>(offsetof(DisplayObject_t1069768653, ____touchable_23)); }
	inline bool get__touchable_23() const { return ____touchable_23; }
	inline bool* get_address_of__touchable_23() { return &____touchable_23; }
	inline void set__touchable_23(bool value)
	{
		____touchable_23 = value;
	}

	inline static int32_t get_offset_of__pivot_24() { return static_cast<int32_t>(offsetof(DisplayObject_t1069768653, ____pivot_24)); }
	inline Vector2_t2243707579  get__pivot_24() const { return ____pivot_24; }
	inline Vector2_t2243707579 * get_address_of__pivot_24() { return &____pivot_24; }
	inline void set__pivot_24(Vector2_t2243707579  value)
	{
		____pivot_24 = value;
	}

	inline static int32_t get_offset_of__pivotOffset_25() { return static_cast<int32_t>(offsetof(DisplayObject_t1069768653, ____pivotOffset_25)); }
	inline Vector3_t2243707580  get__pivotOffset_25() const { return ____pivotOffset_25; }
	inline Vector3_t2243707580 * get_address_of__pivotOffset_25() { return &____pivotOffset_25; }
	inline void set__pivotOffset_25(Vector3_t2243707580  value)
	{
		____pivotOffset_25 = value;
	}

	inline static int32_t get_offset_of__skew_26() { return static_cast<int32_t>(offsetof(DisplayObject_t1069768653, ____skew_26)); }
	inline Vector2_t2243707579  get__skew_26() const { return ____skew_26; }
	inline Vector2_t2243707579 * get_address_of__skew_26() { return &____skew_26; }
	inline void set__skew_26(Vector2_t2243707579  value)
	{
		____skew_26 = value;
	}

	inline static int32_t get_offset_of__renderingOrder_27() { return static_cast<int32_t>(offsetof(DisplayObject_t1069768653, ____renderingOrder_27)); }
	inline int32_t get__renderingOrder_27() const { return ____renderingOrder_27; }
	inline int32_t* get_address_of__renderingOrder_27() { return &____renderingOrder_27; }
	inline void set__renderingOrder_27(int32_t value)
	{
		____renderingOrder_27 = value;
	}

	inline static int32_t get_offset_of__alpha_28() { return static_cast<int32_t>(offsetof(DisplayObject_t1069768653, ____alpha_28)); }
	inline float get__alpha_28() const { return ____alpha_28; }
	inline float* get_address_of__alpha_28() { return &____alpha_28; }
	inline void set__alpha_28(float value)
	{
		____alpha_28 = value;
	}

	inline static int32_t get_offset_of__grayed_29() { return static_cast<int32_t>(offsetof(DisplayObject_t1069768653, ____grayed_29)); }
	inline bool get__grayed_29() const { return ____grayed_29; }
	inline bool* get_address_of__grayed_29() { return &____grayed_29; }
	inline void set__grayed_29(bool value)
	{
		____grayed_29 = value;
	}

	inline static int32_t get_offset_of__blendMode_30() { return static_cast<int32_t>(offsetof(DisplayObject_t1069768653, ____blendMode_30)); }
	inline int32_t get__blendMode_30() const { return ____blendMode_30; }
	inline int32_t* get_address_of__blendMode_30() { return &____blendMode_30; }
	inline void set__blendMode_30(int32_t value)
	{
		____blendMode_30 = value;
	}

	inline static int32_t get_offset_of__filter_31() { return static_cast<int32_t>(offsetof(DisplayObject_t1069768653, ____filter_31)); }
	inline Il2CppObject * get__filter_31() const { return ____filter_31; }
	inline Il2CppObject ** get_address_of__filter_31() { return &____filter_31; }
	inline void set__filter_31(Il2CppObject * value)
	{
		____filter_31 = value;
		Il2CppCodeGenWriteBarrier(&____filter_31, value);
	}

	inline static int32_t get_offset_of__home_32() { return static_cast<int32_t>(offsetof(DisplayObject_t1069768653, ____home_32)); }
	inline Transform_t3275118058 * get__home_32() const { return ____home_32; }
	inline Transform_t3275118058 ** get_address_of__home_32() { return &____home_32; }
	inline void set__home_32(Transform_t3275118058 * value)
	{
		____home_32 = value;
		Il2CppCodeGenWriteBarrier(&____home_32, value);
	}

	inline static int32_t get_offset_of__perspective_33() { return static_cast<int32_t>(offsetof(DisplayObject_t1069768653, ____perspective_33)); }
	inline bool get__perspective_33() const { return ____perspective_33; }
	inline bool* get_address_of__perspective_33() { return &____perspective_33; }
	inline void set__perspective_33(bool value)
	{
		____perspective_33 = value;
	}

	inline static int32_t get_offset_of__focalLength_34() { return static_cast<int32_t>(offsetof(DisplayObject_t1069768653, ____focalLength_34)); }
	inline int32_t get__focalLength_34() const { return ____focalLength_34; }
	inline int32_t* get_address_of__focalLength_34() { return &____focalLength_34; }
	inline void set__focalLength_34(int32_t value)
	{
		____focalLength_34 = value;
	}

	inline static int32_t get_offset_of__rotation_35() { return static_cast<int32_t>(offsetof(DisplayObject_t1069768653, ____rotation_35)); }
	inline Vector3_t2243707580  get__rotation_35() const { return ____rotation_35; }
	inline Vector3_t2243707580 * get_address_of__rotation_35() { return &____rotation_35; }
	inline void set__rotation_35(Vector3_t2243707580  value)
	{
		____rotation_35 = value;
	}

	inline static int32_t get_offset_of__captureDelegate_36() { return static_cast<int32_t>(offsetof(DisplayObject_t1069768653, ____captureDelegate_36)); }
	inline EventCallback0_t422277839 * get__captureDelegate_36() const { return ____captureDelegate_36; }
	inline EventCallback0_t422277839 ** get_address_of__captureDelegate_36() { return &____captureDelegate_36; }
	inline void set__captureDelegate_36(EventCallback0_t422277839 * value)
	{
		____captureDelegate_36 = value;
		Il2CppCodeGenWriteBarrier(&____captureDelegate_36, value);
	}

	inline static int32_t get_offset_of__paintingMode_37() { return static_cast<int32_t>(offsetof(DisplayObject_t1069768653, ____paintingMode_37)); }
	inline int32_t get__paintingMode_37() const { return ____paintingMode_37; }
	inline int32_t* get_address_of__paintingMode_37() { return &____paintingMode_37; }
	inline void set__paintingMode_37(int32_t value)
	{
		____paintingMode_37 = value;
	}

	inline static int32_t get_offset_of__paintingMargin_38() { return static_cast<int32_t>(offsetof(DisplayObject_t1069768653, ____paintingMargin_38)); }
	inline Margin_t737097136  get__paintingMargin_38() const { return ____paintingMargin_38; }
	inline Margin_t737097136 * get_address_of__paintingMargin_38() { return &____paintingMargin_38; }
	inline void set__paintingMargin_38(Margin_t737097136  value)
	{
		____paintingMargin_38 = value;
	}

	inline static int32_t get_offset_of__paintingFlag_39() { return static_cast<int32_t>(offsetof(DisplayObject_t1069768653, ____paintingFlag_39)); }
	inline int32_t get__paintingFlag_39() const { return ____paintingFlag_39; }
	inline int32_t* get_address_of__paintingFlag_39() { return &____paintingFlag_39; }
	inline void set__paintingFlag_39(int32_t value)
	{
		____paintingFlag_39 = value;
	}

	inline static int32_t get_offset_of__paintingMaterial_40() { return static_cast<int32_t>(offsetof(DisplayObject_t1069768653, ____paintingMaterial_40)); }
	inline Material_t193706927 * get__paintingMaterial_40() const { return ____paintingMaterial_40; }
	inline Material_t193706927 ** get_address_of__paintingMaterial_40() { return &____paintingMaterial_40; }
	inline void set__paintingMaterial_40(Material_t193706927 * value)
	{
		____paintingMaterial_40 = value;
		Il2CppCodeGenWriteBarrier(&____paintingMaterial_40, value);
	}

	inline static int32_t get_offset_of__cacheAsBitmap_41() { return static_cast<int32_t>(offsetof(DisplayObject_t1069768653, ____cacheAsBitmap_41)); }
	inline bool get__cacheAsBitmap_41() const { return ____cacheAsBitmap_41; }
	inline bool* get_address_of__cacheAsBitmap_41() { return &____cacheAsBitmap_41; }
	inline void set__cacheAsBitmap_41(bool value)
	{
		____cacheAsBitmap_41 = value;
	}

	inline static int32_t get_offset_of__contentRect_42() { return static_cast<int32_t>(offsetof(DisplayObject_t1069768653, ____contentRect_42)); }
	inline Rect_t3681755626  get__contentRect_42() const { return ____contentRect_42; }
	inline Rect_t3681755626 * get_address_of__contentRect_42() { return &____contentRect_42; }
	inline void set__contentRect_42(Rect_t3681755626  value)
	{
		____contentRect_42 = value;
	}

	inline static int32_t get_offset_of__requireUpdateMesh_43() { return static_cast<int32_t>(offsetof(DisplayObject_t1069768653, ____requireUpdateMesh_43)); }
	inline bool get__requireUpdateMesh_43() const { return ____requireUpdateMesh_43; }
	inline bool* get_address_of__requireUpdateMesh_43() { return &____requireUpdateMesh_43; }
	inline void set__requireUpdateMesh_43(bool value)
	{
		____requireUpdateMesh_43 = value;
	}

	inline static int32_t get_offset_of__transformMatrix_44() { return static_cast<int32_t>(offsetof(DisplayObject_t1069768653, ____transformMatrix_44)); }
	inline Nullable_1_t1196300318  get__transformMatrix_44() const { return ____transformMatrix_44; }
	inline Nullable_1_t1196300318 * get_address_of__transformMatrix_44() { return &____transformMatrix_44; }
	inline void set__transformMatrix_44(Nullable_1_t1196300318  value)
	{
		____transformMatrix_44 = value;
	}

	inline static int32_t get_offset_of__ownsGameObject_45() { return static_cast<int32_t>(offsetof(DisplayObject_t1069768653, ____ownsGameObject_45)); }
	inline bool get__ownsGameObject_45() const { return ____ownsGameObject_45; }
	inline bool* get_address_of__ownsGameObject_45() { return &____ownsGameObject_45; }
	inline void set__ownsGameObject_45(bool value)
	{
		____ownsGameObject_45 = value;
	}

	inline static int32_t get_offset_of__disposed_46() { return static_cast<int32_t>(offsetof(DisplayObject_t1069768653, ____disposed_46)); }
	inline bool get__disposed_46() const { return ____disposed_46; }
	inline bool* get_address_of__disposed_46() { return &____disposed_46; }
	inline void set__disposed_46(bool value)
	{
		____disposed_46 = value;
	}

	inline static int32_t get_offset_of__touchDisabled_47() { return static_cast<int32_t>(offsetof(DisplayObject_t1069768653, ____touchDisabled_47)); }
	inline bool get__touchDisabled_47() const { return ____touchDisabled_47; }
	inline bool* get_address_of__touchDisabled_47() { return &____touchDisabled_47; }
	inline void set__touchDisabled_47(bool value)
	{
		____touchDisabled_47 = value;
	}

	inline static int32_t get_offset_of__internal_bounds_48() { return static_cast<int32_t>(offsetof(DisplayObject_t1069768653, ____internal_bounds_48)); }
	inline SingleU5BU5D_t577127397* get__internal_bounds_48() const { return ____internal_bounds_48; }
	inline SingleU5BU5D_t577127397** get_address_of__internal_bounds_48() { return &____internal_bounds_48; }
	inline void set__internal_bounds_48(SingleU5BU5D_t577127397* value)
	{
		____internal_bounds_48 = value;
		Il2CppCodeGenWriteBarrier(&____internal_bounds_48, value);
	}

	inline static int32_t get_offset_of__skipInFairyBatching_49() { return static_cast<int32_t>(offsetof(DisplayObject_t1069768653, ____skipInFairyBatching_49)); }
	inline bool get__skipInFairyBatching_49() const { return ____skipInFairyBatching_49; }
	inline bool* get_address_of__skipInFairyBatching_49() { return &____skipInFairyBatching_49; }
	inline void set__skipInFairyBatching_49(bool value)
	{
		____skipInFairyBatching_49 = value;
	}

	inline static int32_t get_offset_of__outlineChanged_50() { return static_cast<int32_t>(offsetof(DisplayObject_t1069768653, ____outlineChanged_50)); }
	inline bool get__outlineChanged_50() const { return ____outlineChanged_50; }
	inline bool* get_address_of__outlineChanged_50() { return &____outlineChanged_50; }
	inline void set__outlineChanged_50(bool value)
	{
		____outlineChanged_50 = value;
	}
};

struct DisplayObject_t1069768653_StaticFields
{
public:
	// System.UInt32 FairyGUI.DisplayObject::_gInstanceCounter
	uint32_t ____gInstanceCounter_51;

public:
	inline static int32_t get_offset_of__gInstanceCounter_51() { return static_cast<int32_t>(offsetof(DisplayObject_t1069768653_StaticFields, ____gInstanceCounter_51)); }
	inline uint32_t get__gInstanceCounter_51() const { return ____gInstanceCounter_51; }
	inline uint32_t* get_address_of__gInstanceCounter_51() { return &____gInstanceCounter_51; }
	inline void set__gInstanceCounter_51(uint32_t value)
	{
		____gInstanceCounter_51 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

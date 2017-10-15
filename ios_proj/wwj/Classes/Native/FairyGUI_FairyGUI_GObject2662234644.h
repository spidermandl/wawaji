#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "FairyGUI_FairyGUI_EventDispatcher4068415185.h"
#include "mscorlib_System_Nullable_1_gen1944821941.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// FairyGUI.Relations
struct Relations_t4252742299;
// FairyGUI.GComponent
struct GComponent_t4106136290;
// FairyGUI.DisplayObject
struct DisplayObject_t1069768653;
// FairyGUI.EventListener
struct EventListener_t2764096410;
// FairyGUI.GObject
struct GObject_t2662234644;
// FairyGUI.GGroup
struct GGroup_t2369700754;
// FairyGUI.GearBase[]
struct GearBaseU5BU5D_t2787013681;
// FairyGUI.PackageItem
struct PackageItem_t1874577185;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.GObject
struct  GObject_t2662234644  : public EventDispatcher_t4068415185
{
public:
	// System.String FairyGUI.GObject::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_2;
	// System.String FairyGUI.GObject::name
	String_t* ___name_3;
	// System.Object FairyGUI.GObject::data
	Il2CppObject * ___data_4;
	// System.Int32 FairyGUI.GObject::sourceWidth
	int32_t ___sourceWidth_5;
	// System.Int32 FairyGUI.GObject::sourceHeight
	int32_t ___sourceHeight_6;
	// System.Int32 FairyGUI.GObject::initWidth
	int32_t ___initWidth_7;
	// System.Int32 FairyGUI.GObject::initHeight
	int32_t ___initHeight_8;
	// System.Int32 FairyGUI.GObject::minWidth
	int32_t ___minWidth_9;
	// System.Int32 FairyGUI.GObject::maxWidth
	int32_t ___maxWidth_10;
	// System.Int32 FairyGUI.GObject::minHeight
	int32_t ___minHeight_11;
	// System.Int32 FairyGUI.GObject::maxHeight
	int32_t ___maxHeight_12;
	// FairyGUI.Relations FairyGUI.GObject::<relations>k__BackingField
	Relations_t4252742299 * ___U3CrelationsU3Ek__BackingField_13;
	// System.Nullable`1<UnityEngine.Rect> FairyGUI.GObject::dragBounds
	Nullable_1_t1944821941  ___dragBounds_14;
	// FairyGUI.GComponent FairyGUI.GObject::<parent>k__BackingField
	GComponent_t4106136290 * ___U3CparentU3Ek__BackingField_15;
	// FairyGUI.DisplayObject FairyGUI.GObject::<displayObject>k__BackingField
	DisplayObject_t1069768653 * ___U3CdisplayObjectU3Ek__BackingField_16;
	// FairyGUI.EventListener FairyGUI.GObject::<onClick>k__BackingField
	EventListener_t2764096410 * ___U3ConClickU3Ek__BackingField_17;
	// FairyGUI.EventListener FairyGUI.GObject::<onRightClick>k__BackingField
	EventListener_t2764096410 * ___U3ConRightClickU3Ek__BackingField_18;
	// FairyGUI.EventListener FairyGUI.GObject::<onTouchBegin>k__BackingField
	EventListener_t2764096410 * ___U3ConTouchBeginU3Ek__BackingField_19;
	// FairyGUI.EventListener FairyGUI.GObject::<onTouchEnd>k__BackingField
	EventListener_t2764096410 * ___U3ConTouchEndU3Ek__BackingField_20;
	// FairyGUI.EventListener FairyGUI.GObject::<onRollOver>k__BackingField
	EventListener_t2764096410 * ___U3ConRollOverU3Ek__BackingField_21;
	// FairyGUI.EventListener FairyGUI.GObject::<onRollOut>k__BackingField
	EventListener_t2764096410 * ___U3ConRollOutU3Ek__BackingField_22;
	// FairyGUI.EventListener FairyGUI.GObject::<onAddedToStage>k__BackingField
	EventListener_t2764096410 * ___U3ConAddedToStageU3Ek__BackingField_23;
	// FairyGUI.EventListener FairyGUI.GObject::<onRemovedFromStage>k__BackingField
	EventListener_t2764096410 * ___U3ConRemovedFromStageU3Ek__BackingField_24;
	// FairyGUI.EventListener FairyGUI.GObject::<onKeyDown>k__BackingField
	EventListener_t2764096410 * ___U3ConKeyDownU3Ek__BackingField_25;
	// FairyGUI.EventListener FairyGUI.GObject::<onClickLink>k__BackingField
	EventListener_t2764096410 * ___U3ConClickLinkU3Ek__BackingField_26;
	// FairyGUI.EventListener FairyGUI.GObject::<onPositionChanged>k__BackingField
	EventListener_t2764096410 * ___U3ConPositionChangedU3Ek__BackingField_27;
	// FairyGUI.EventListener FairyGUI.GObject::<onSizeChanged>k__BackingField
	EventListener_t2764096410 * ___U3ConSizeChangedU3Ek__BackingField_28;
	// FairyGUI.EventListener FairyGUI.GObject::<onDragStart>k__BackingField
	EventListener_t2764096410 * ___U3ConDragStartU3Ek__BackingField_29;
	// FairyGUI.EventListener FairyGUI.GObject::<onDragMove>k__BackingField
	EventListener_t2764096410 * ___U3ConDragMoveU3Ek__BackingField_30;
	// FairyGUI.EventListener FairyGUI.GObject::<onDragEnd>k__BackingField
	EventListener_t2764096410 * ___U3ConDragEndU3Ek__BackingField_31;
	// FairyGUI.EventListener FairyGUI.GObject::<OnGearStop>k__BackingField
	EventListener_t2764096410 * ___U3COnGearStopU3Ek__BackingField_32;
	// System.Single FairyGUI.GObject::_x
	float ____x_34;
	// System.Single FairyGUI.GObject::_y
	float ____y_35;
	// System.Single FairyGUI.GObject::_z
	float ____z_36;
	// System.Single FairyGUI.GObject::_pivotX
	float ____pivotX_37;
	// System.Single FairyGUI.GObject::_pivotY
	float ____pivotY_38;
	// System.Boolean FairyGUI.GObject::_pivotAsAnchor
	bool ____pivotAsAnchor_39;
	// System.Single FairyGUI.GObject::_alpha
	float ____alpha_40;
	// System.Single FairyGUI.GObject::_rotation
	float ____rotation_41;
	// System.Single FairyGUI.GObject::_rotationX
	float ____rotationX_42;
	// System.Single FairyGUI.GObject::_rotationY
	float ____rotationY_43;
	// System.Boolean FairyGUI.GObject::_visible
	bool ____visible_44;
	// System.Boolean FairyGUI.GObject::_internalVisible
	bool ____internalVisible_45;
	// System.Boolean FairyGUI.GObject::_handlingController
	bool ____handlingController_46;
	// System.Boolean FairyGUI.GObject::_touchable
	bool ____touchable_47;
	// System.Boolean FairyGUI.GObject::_grayed
	bool ____grayed_48;
	// System.Boolean FairyGUI.GObject::_draggable
	bool ____draggable_49;
	// System.Single FairyGUI.GObject::_scaleX
	float ____scaleX_50;
	// System.Single FairyGUI.GObject::_scaleY
	float ____scaleY_51;
	// System.Int32 FairyGUI.GObject::_sortingOrder
	int32_t ____sortingOrder_52;
	// System.Boolean FairyGUI.GObject::_focusable
	bool ____focusable_53;
	// System.String FairyGUI.GObject::_tooltips
	String_t* ____tooltips_54;
	// System.Boolean FairyGUI.GObject::_pixelSnapping
	bool ____pixelSnapping_55;
	// FairyGUI.GGroup FairyGUI.GObject::_group
	GGroup_t2369700754 * ____group_56;
	// FairyGUI.GearBase[] FairyGUI.GObject::_gears
	GearBaseU5BU5D_t2787013681* ____gears_57;
	// System.Int32 FairyGUI.GObject::_sizeImplType
	int32_t ____sizeImplType_58;
	// FairyGUI.PackageItem FairyGUI.GObject::packageItem
	PackageItem_t1874577185 * ___packageItem_59;
	// System.Boolean FairyGUI.GObject::underConstruct
	bool ___underConstruct_60;
	// System.Single FairyGUI.GObject::_width
	float ____width_61;
	// System.Single FairyGUI.GObject::_height
	float ____height_62;
	// System.Single FairyGUI.GObject::_rawWidth
	float ____rawWidth_63;
	// System.Single FairyGUI.GObject::_rawHeight
	float ____rawHeight_64;
	// System.Boolean FairyGUI.GObject::_gearLocked
	bool ____gearLocked_65;
	// System.Single FairyGUI.GObject::_sizePercentInGroup
	float ____sizePercentInGroup_66;
	// System.Int32 FairyGUI.GObject::_dragTouchId
	int32_t ____dragTouchId_69;
	// UnityEngine.Vector2 FairyGUI.GObject::_dragTouchStartPos
	Vector2_t2243707579  ____dragTouchStartPos_70;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ___U3CidU3Ek__BackingField_2)); }
	inline String_t* get_U3CidU3Ek__BackingField_2() const { return ___U3CidU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_2() { return &___U3CidU3Ek__BackingField_2; }
	inline void set_U3CidU3Ek__BackingField_2(String_t* value)
	{
		___U3CidU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CidU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier(&___name_3, value);
	}

	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ___data_4)); }
	inline Il2CppObject * get_data_4() const { return ___data_4; }
	inline Il2CppObject ** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(Il2CppObject * value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier(&___data_4, value);
	}

	inline static int32_t get_offset_of_sourceWidth_5() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ___sourceWidth_5)); }
	inline int32_t get_sourceWidth_5() const { return ___sourceWidth_5; }
	inline int32_t* get_address_of_sourceWidth_5() { return &___sourceWidth_5; }
	inline void set_sourceWidth_5(int32_t value)
	{
		___sourceWidth_5 = value;
	}

	inline static int32_t get_offset_of_sourceHeight_6() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ___sourceHeight_6)); }
	inline int32_t get_sourceHeight_6() const { return ___sourceHeight_6; }
	inline int32_t* get_address_of_sourceHeight_6() { return &___sourceHeight_6; }
	inline void set_sourceHeight_6(int32_t value)
	{
		___sourceHeight_6 = value;
	}

	inline static int32_t get_offset_of_initWidth_7() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ___initWidth_7)); }
	inline int32_t get_initWidth_7() const { return ___initWidth_7; }
	inline int32_t* get_address_of_initWidth_7() { return &___initWidth_7; }
	inline void set_initWidth_7(int32_t value)
	{
		___initWidth_7 = value;
	}

	inline static int32_t get_offset_of_initHeight_8() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ___initHeight_8)); }
	inline int32_t get_initHeight_8() const { return ___initHeight_8; }
	inline int32_t* get_address_of_initHeight_8() { return &___initHeight_8; }
	inline void set_initHeight_8(int32_t value)
	{
		___initHeight_8 = value;
	}

	inline static int32_t get_offset_of_minWidth_9() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ___minWidth_9)); }
	inline int32_t get_minWidth_9() const { return ___minWidth_9; }
	inline int32_t* get_address_of_minWidth_9() { return &___minWidth_9; }
	inline void set_minWidth_9(int32_t value)
	{
		___minWidth_9 = value;
	}

	inline static int32_t get_offset_of_maxWidth_10() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ___maxWidth_10)); }
	inline int32_t get_maxWidth_10() const { return ___maxWidth_10; }
	inline int32_t* get_address_of_maxWidth_10() { return &___maxWidth_10; }
	inline void set_maxWidth_10(int32_t value)
	{
		___maxWidth_10 = value;
	}

	inline static int32_t get_offset_of_minHeight_11() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ___minHeight_11)); }
	inline int32_t get_minHeight_11() const { return ___minHeight_11; }
	inline int32_t* get_address_of_minHeight_11() { return &___minHeight_11; }
	inline void set_minHeight_11(int32_t value)
	{
		___minHeight_11 = value;
	}

	inline static int32_t get_offset_of_maxHeight_12() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ___maxHeight_12)); }
	inline int32_t get_maxHeight_12() const { return ___maxHeight_12; }
	inline int32_t* get_address_of_maxHeight_12() { return &___maxHeight_12; }
	inline void set_maxHeight_12(int32_t value)
	{
		___maxHeight_12 = value;
	}

	inline static int32_t get_offset_of_U3CrelationsU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ___U3CrelationsU3Ek__BackingField_13)); }
	inline Relations_t4252742299 * get_U3CrelationsU3Ek__BackingField_13() const { return ___U3CrelationsU3Ek__BackingField_13; }
	inline Relations_t4252742299 ** get_address_of_U3CrelationsU3Ek__BackingField_13() { return &___U3CrelationsU3Ek__BackingField_13; }
	inline void set_U3CrelationsU3Ek__BackingField_13(Relations_t4252742299 * value)
	{
		___U3CrelationsU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CrelationsU3Ek__BackingField_13, value);
	}

	inline static int32_t get_offset_of_dragBounds_14() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ___dragBounds_14)); }
	inline Nullable_1_t1944821941  get_dragBounds_14() const { return ___dragBounds_14; }
	inline Nullable_1_t1944821941 * get_address_of_dragBounds_14() { return &___dragBounds_14; }
	inline void set_dragBounds_14(Nullable_1_t1944821941  value)
	{
		___dragBounds_14 = value;
	}

	inline static int32_t get_offset_of_U3CparentU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ___U3CparentU3Ek__BackingField_15)); }
	inline GComponent_t4106136290 * get_U3CparentU3Ek__BackingField_15() const { return ___U3CparentU3Ek__BackingField_15; }
	inline GComponent_t4106136290 ** get_address_of_U3CparentU3Ek__BackingField_15() { return &___U3CparentU3Ek__BackingField_15; }
	inline void set_U3CparentU3Ek__BackingField_15(GComponent_t4106136290 * value)
	{
		___U3CparentU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3CparentU3Ek__BackingField_15, value);
	}

	inline static int32_t get_offset_of_U3CdisplayObjectU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ___U3CdisplayObjectU3Ek__BackingField_16)); }
	inline DisplayObject_t1069768653 * get_U3CdisplayObjectU3Ek__BackingField_16() const { return ___U3CdisplayObjectU3Ek__BackingField_16; }
	inline DisplayObject_t1069768653 ** get_address_of_U3CdisplayObjectU3Ek__BackingField_16() { return &___U3CdisplayObjectU3Ek__BackingField_16; }
	inline void set_U3CdisplayObjectU3Ek__BackingField_16(DisplayObject_t1069768653 * value)
	{
		___U3CdisplayObjectU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CdisplayObjectU3Ek__BackingField_16, value);
	}

	inline static int32_t get_offset_of_U3ConClickU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ___U3ConClickU3Ek__BackingField_17)); }
	inline EventListener_t2764096410 * get_U3ConClickU3Ek__BackingField_17() const { return ___U3ConClickU3Ek__BackingField_17; }
	inline EventListener_t2764096410 ** get_address_of_U3ConClickU3Ek__BackingField_17() { return &___U3ConClickU3Ek__BackingField_17; }
	inline void set_U3ConClickU3Ek__BackingField_17(EventListener_t2764096410 * value)
	{
		___U3ConClickU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConClickU3Ek__BackingField_17, value);
	}

	inline static int32_t get_offset_of_U3ConRightClickU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ___U3ConRightClickU3Ek__BackingField_18)); }
	inline EventListener_t2764096410 * get_U3ConRightClickU3Ek__BackingField_18() const { return ___U3ConRightClickU3Ek__BackingField_18; }
	inline EventListener_t2764096410 ** get_address_of_U3ConRightClickU3Ek__BackingField_18() { return &___U3ConRightClickU3Ek__BackingField_18; }
	inline void set_U3ConRightClickU3Ek__BackingField_18(EventListener_t2764096410 * value)
	{
		___U3ConRightClickU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConRightClickU3Ek__BackingField_18, value);
	}

	inline static int32_t get_offset_of_U3ConTouchBeginU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ___U3ConTouchBeginU3Ek__BackingField_19)); }
	inline EventListener_t2764096410 * get_U3ConTouchBeginU3Ek__BackingField_19() const { return ___U3ConTouchBeginU3Ek__BackingField_19; }
	inline EventListener_t2764096410 ** get_address_of_U3ConTouchBeginU3Ek__BackingField_19() { return &___U3ConTouchBeginU3Ek__BackingField_19; }
	inline void set_U3ConTouchBeginU3Ek__BackingField_19(EventListener_t2764096410 * value)
	{
		___U3ConTouchBeginU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConTouchBeginU3Ek__BackingField_19, value);
	}

	inline static int32_t get_offset_of_U3ConTouchEndU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ___U3ConTouchEndU3Ek__BackingField_20)); }
	inline EventListener_t2764096410 * get_U3ConTouchEndU3Ek__BackingField_20() const { return ___U3ConTouchEndU3Ek__BackingField_20; }
	inline EventListener_t2764096410 ** get_address_of_U3ConTouchEndU3Ek__BackingField_20() { return &___U3ConTouchEndU3Ek__BackingField_20; }
	inline void set_U3ConTouchEndU3Ek__BackingField_20(EventListener_t2764096410 * value)
	{
		___U3ConTouchEndU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConTouchEndU3Ek__BackingField_20, value);
	}

	inline static int32_t get_offset_of_U3ConRollOverU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ___U3ConRollOverU3Ek__BackingField_21)); }
	inline EventListener_t2764096410 * get_U3ConRollOverU3Ek__BackingField_21() const { return ___U3ConRollOverU3Ek__BackingField_21; }
	inline EventListener_t2764096410 ** get_address_of_U3ConRollOverU3Ek__BackingField_21() { return &___U3ConRollOverU3Ek__BackingField_21; }
	inline void set_U3ConRollOverU3Ek__BackingField_21(EventListener_t2764096410 * value)
	{
		___U3ConRollOverU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConRollOverU3Ek__BackingField_21, value);
	}

	inline static int32_t get_offset_of_U3ConRollOutU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ___U3ConRollOutU3Ek__BackingField_22)); }
	inline EventListener_t2764096410 * get_U3ConRollOutU3Ek__BackingField_22() const { return ___U3ConRollOutU3Ek__BackingField_22; }
	inline EventListener_t2764096410 ** get_address_of_U3ConRollOutU3Ek__BackingField_22() { return &___U3ConRollOutU3Ek__BackingField_22; }
	inline void set_U3ConRollOutU3Ek__BackingField_22(EventListener_t2764096410 * value)
	{
		___U3ConRollOutU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConRollOutU3Ek__BackingField_22, value);
	}

	inline static int32_t get_offset_of_U3ConAddedToStageU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ___U3ConAddedToStageU3Ek__BackingField_23)); }
	inline EventListener_t2764096410 * get_U3ConAddedToStageU3Ek__BackingField_23() const { return ___U3ConAddedToStageU3Ek__BackingField_23; }
	inline EventListener_t2764096410 ** get_address_of_U3ConAddedToStageU3Ek__BackingField_23() { return &___U3ConAddedToStageU3Ek__BackingField_23; }
	inline void set_U3ConAddedToStageU3Ek__BackingField_23(EventListener_t2764096410 * value)
	{
		___U3ConAddedToStageU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConAddedToStageU3Ek__BackingField_23, value);
	}

	inline static int32_t get_offset_of_U3ConRemovedFromStageU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ___U3ConRemovedFromStageU3Ek__BackingField_24)); }
	inline EventListener_t2764096410 * get_U3ConRemovedFromStageU3Ek__BackingField_24() const { return ___U3ConRemovedFromStageU3Ek__BackingField_24; }
	inline EventListener_t2764096410 ** get_address_of_U3ConRemovedFromStageU3Ek__BackingField_24() { return &___U3ConRemovedFromStageU3Ek__BackingField_24; }
	inline void set_U3ConRemovedFromStageU3Ek__BackingField_24(EventListener_t2764096410 * value)
	{
		___U3ConRemovedFromStageU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConRemovedFromStageU3Ek__BackingField_24, value);
	}

	inline static int32_t get_offset_of_U3ConKeyDownU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ___U3ConKeyDownU3Ek__BackingField_25)); }
	inline EventListener_t2764096410 * get_U3ConKeyDownU3Ek__BackingField_25() const { return ___U3ConKeyDownU3Ek__BackingField_25; }
	inline EventListener_t2764096410 ** get_address_of_U3ConKeyDownU3Ek__BackingField_25() { return &___U3ConKeyDownU3Ek__BackingField_25; }
	inline void set_U3ConKeyDownU3Ek__BackingField_25(EventListener_t2764096410 * value)
	{
		___U3ConKeyDownU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConKeyDownU3Ek__BackingField_25, value);
	}

	inline static int32_t get_offset_of_U3ConClickLinkU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ___U3ConClickLinkU3Ek__BackingField_26)); }
	inline EventListener_t2764096410 * get_U3ConClickLinkU3Ek__BackingField_26() const { return ___U3ConClickLinkU3Ek__BackingField_26; }
	inline EventListener_t2764096410 ** get_address_of_U3ConClickLinkU3Ek__BackingField_26() { return &___U3ConClickLinkU3Ek__BackingField_26; }
	inline void set_U3ConClickLinkU3Ek__BackingField_26(EventListener_t2764096410 * value)
	{
		___U3ConClickLinkU3Ek__BackingField_26 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConClickLinkU3Ek__BackingField_26, value);
	}

	inline static int32_t get_offset_of_U3ConPositionChangedU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ___U3ConPositionChangedU3Ek__BackingField_27)); }
	inline EventListener_t2764096410 * get_U3ConPositionChangedU3Ek__BackingField_27() const { return ___U3ConPositionChangedU3Ek__BackingField_27; }
	inline EventListener_t2764096410 ** get_address_of_U3ConPositionChangedU3Ek__BackingField_27() { return &___U3ConPositionChangedU3Ek__BackingField_27; }
	inline void set_U3ConPositionChangedU3Ek__BackingField_27(EventListener_t2764096410 * value)
	{
		___U3ConPositionChangedU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConPositionChangedU3Ek__BackingField_27, value);
	}

	inline static int32_t get_offset_of_U3ConSizeChangedU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ___U3ConSizeChangedU3Ek__BackingField_28)); }
	inline EventListener_t2764096410 * get_U3ConSizeChangedU3Ek__BackingField_28() const { return ___U3ConSizeChangedU3Ek__BackingField_28; }
	inline EventListener_t2764096410 ** get_address_of_U3ConSizeChangedU3Ek__BackingField_28() { return &___U3ConSizeChangedU3Ek__BackingField_28; }
	inline void set_U3ConSizeChangedU3Ek__BackingField_28(EventListener_t2764096410 * value)
	{
		___U3ConSizeChangedU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConSizeChangedU3Ek__BackingField_28, value);
	}

	inline static int32_t get_offset_of_U3ConDragStartU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ___U3ConDragStartU3Ek__BackingField_29)); }
	inline EventListener_t2764096410 * get_U3ConDragStartU3Ek__BackingField_29() const { return ___U3ConDragStartU3Ek__BackingField_29; }
	inline EventListener_t2764096410 ** get_address_of_U3ConDragStartU3Ek__BackingField_29() { return &___U3ConDragStartU3Ek__BackingField_29; }
	inline void set_U3ConDragStartU3Ek__BackingField_29(EventListener_t2764096410 * value)
	{
		___U3ConDragStartU3Ek__BackingField_29 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConDragStartU3Ek__BackingField_29, value);
	}

	inline static int32_t get_offset_of_U3ConDragMoveU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ___U3ConDragMoveU3Ek__BackingField_30)); }
	inline EventListener_t2764096410 * get_U3ConDragMoveU3Ek__BackingField_30() const { return ___U3ConDragMoveU3Ek__BackingField_30; }
	inline EventListener_t2764096410 ** get_address_of_U3ConDragMoveU3Ek__BackingField_30() { return &___U3ConDragMoveU3Ek__BackingField_30; }
	inline void set_U3ConDragMoveU3Ek__BackingField_30(EventListener_t2764096410 * value)
	{
		___U3ConDragMoveU3Ek__BackingField_30 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConDragMoveU3Ek__BackingField_30, value);
	}

	inline static int32_t get_offset_of_U3ConDragEndU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ___U3ConDragEndU3Ek__BackingField_31)); }
	inline EventListener_t2764096410 * get_U3ConDragEndU3Ek__BackingField_31() const { return ___U3ConDragEndU3Ek__BackingField_31; }
	inline EventListener_t2764096410 ** get_address_of_U3ConDragEndU3Ek__BackingField_31() { return &___U3ConDragEndU3Ek__BackingField_31; }
	inline void set_U3ConDragEndU3Ek__BackingField_31(EventListener_t2764096410 * value)
	{
		___U3ConDragEndU3Ek__BackingField_31 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConDragEndU3Ek__BackingField_31, value);
	}

	inline static int32_t get_offset_of_U3COnGearStopU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ___U3COnGearStopU3Ek__BackingField_32)); }
	inline EventListener_t2764096410 * get_U3COnGearStopU3Ek__BackingField_32() const { return ___U3COnGearStopU3Ek__BackingField_32; }
	inline EventListener_t2764096410 ** get_address_of_U3COnGearStopU3Ek__BackingField_32() { return &___U3COnGearStopU3Ek__BackingField_32; }
	inline void set_U3COnGearStopU3Ek__BackingField_32(EventListener_t2764096410 * value)
	{
		___U3COnGearStopU3Ek__BackingField_32 = value;
		Il2CppCodeGenWriteBarrier(&___U3COnGearStopU3Ek__BackingField_32, value);
	}

	inline static int32_t get_offset_of__x_34() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ____x_34)); }
	inline float get__x_34() const { return ____x_34; }
	inline float* get_address_of__x_34() { return &____x_34; }
	inline void set__x_34(float value)
	{
		____x_34 = value;
	}

	inline static int32_t get_offset_of__y_35() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ____y_35)); }
	inline float get__y_35() const { return ____y_35; }
	inline float* get_address_of__y_35() { return &____y_35; }
	inline void set__y_35(float value)
	{
		____y_35 = value;
	}

	inline static int32_t get_offset_of__z_36() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ____z_36)); }
	inline float get__z_36() const { return ____z_36; }
	inline float* get_address_of__z_36() { return &____z_36; }
	inline void set__z_36(float value)
	{
		____z_36 = value;
	}

	inline static int32_t get_offset_of__pivotX_37() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ____pivotX_37)); }
	inline float get__pivotX_37() const { return ____pivotX_37; }
	inline float* get_address_of__pivotX_37() { return &____pivotX_37; }
	inline void set__pivotX_37(float value)
	{
		____pivotX_37 = value;
	}

	inline static int32_t get_offset_of__pivotY_38() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ____pivotY_38)); }
	inline float get__pivotY_38() const { return ____pivotY_38; }
	inline float* get_address_of__pivotY_38() { return &____pivotY_38; }
	inline void set__pivotY_38(float value)
	{
		____pivotY_38 = value;
	}

	inline static int32_t get_offset_of__pivotAsAnchor_39() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ____pivotAsAnchor_39)); }
	inline bool get__pivotAsAnchor_39() const { return ____pivotAsAnchor_39; }
	inline bool* get_address_of__pivotAsAnchor_39() { return &____pivotAsAnchor_39; }
	inline void set__pivotAsAnchor_39(bool value)
	{
		____pivotAsAnchor_39 = value;
	}

	inline static int32_t get_offset_of__alpha_40() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ____alpha_40)); }
	inline float get__alpha_40() const { return ____alpha_40; }
	inline float* get_address_of__alpha_40() { return &____alpha_40; }
	inline void set__alpha_40(float value)
	{
		____alpha_40 = value;
	}

	inline static int32_t get_offset_of__rotation_41() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ____rotation_41)); }
	inline float get__rotation_41() const { return ____rotation_41; }
	inline float* get_address_of__rotation_41() { return &____rotation_41; }
	inline void set__rotation_41(float value)
	{
		____rotation_41 = value;
	}

	inline static int32_t get_offset_of__rotationX_42() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ____rotationX_42)); }
	inline float get__rotationX_42() const { return ____rotationX_42; }
	inline float* get_address_of__rotationX_42() { return &____rotationX_42; }
	inline void set__rotationX_42(float value)
	{
		____rotationX_42 = value;
	}

	inline static int32_t get_offset_of__rotationY_43() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ____rotationY_43)); }
	inline float get__rotationY_43() const { return ____rotationY_43; }
	inline float* get_address_of__rotationY_43() { return &____rotationY_43; }
	inline void set__rotationY_43(float value)
	{
		____rotationY_43 = value;
	}

	inline static int32_t get_offset_of__visible_44() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ____visible_44)); }
	inline bool get__visible_44() const { return ____visible_44; }
	inline bool* get_address_of__visible_44() { return &____visible_44; }
	inline void set__visible_44(bool value)
	{
		____visible_44 = value;
	}

	inline static int32_t get_offset_of__internalVisible_45() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ____internalVisible_45)); }
	inline bool get__internalVisible_45() const { return ____internalVisible_45; }
	inline bool* get_address_of__internalVisible_45() { return &____internalVisible_45; }
	inline void set__internalVisible_45(bool value)
	{
		____internalVisible_45 = value;
	}

	inline static int32_t get_offset_of__handlingController_46() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ____handlingController_46)); }
	inline bool get__handlingController_46() const { return ____handlingController_46; }
	inline bool* get_address_of__handlingController_46() { return &____handlingController_46; }
	inline void set__handlingController_46(bool value)
	{
		____handlingController_46 = value;
	}

	inline static int32_t get_offset_of__touchable_47() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ____touchable_47)); }
	inline bool get__touchable_47() const { return ____touchable_47; }
	inline bool* get_address_of__touchable_47() { return &____touchable_47; }
	inline void set__touchable_47(bool value)
	{
		____touchable_47 = value;
	}

	inline static int32_t get_offset_of__grayed_48() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ____grayed_48)); }
	inline bool get__grayed_48() const { return ____grayed_48; }
	inline bool* get_address_of__grayed_48() { return &____grayed_48; }
	inline void set__grayed_48(bool value)
	{
		____grayed_48 = value;
	}

	inline static int32_t get_offset_of__draggable_49() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ____draggable_49)); }
	inline bool get__draggable_49() const { return ____draggable_49; }
	inline bool* get_address_of__draggable_49() { return &____draggable_49; }
	inline void set__draggable_49(bool value)
	{
		____draggable_49 = value;
	}

	inline static int32_t get_offset_of__scaleX_50() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ____scaleX_50)); }
	inline float get__scaleX_50() const { return ____scaleX_50; }
	inline float* get_address_of__scaleX_50() { return &____scaleX_50; }
	inline void set__scaleX_50(float value)
	{
		____scaleX_50 = value;
	}

	inline static int32_t get_offset_of__scaleY_51() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ____scaleY_51)); }
	inline float get__scaleY_51() const { return ____scaleY_51; }
	inline float* get_address_of__scaleY_51() { return &____scaleY_51; }
	inline void set__scaleY_51(float value)
	{
		____scaleY_51 = value;
	}

	inline static int32_t get_offset_of__sortingOrder_52() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ____sortingOrder_52)); }
	inline int32_t get__sortingOrder_52() const { return ____sortingOrder_52; }
	inline int32_t* get_address_of__sortingOrder_52() { return &____sortingOrder_52; }
	inline void set__sortingOrder_52(int32_t value)
	{
		____sortingOrder_52 = value;
	}

	inline static int32_t get_offset_of__focusable_53() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ____focusable_53)); }
	inline bool get__focusable_53() const { return ____focusable_53; }
	inline bool* get_address_of__focusable_53() { return &____focusable_53; }
	inline void set__focusable_53(bool value)
	{
		____focusable_53 = value;
	}

	inline static int32_t get_offset_of__tooltips_54() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ____tooltips_54)); }
	inline String_t* get__tooltips_54() const { return ____tooltips_54; }
	inline String_t** get_address_of__tooltips_54() { return &____tooltips_54; }
	inline void set__tooltips_54(String_t* value)
	{
		____tooltips_54 = value;
		Il2CppCodeGenWriteBarrier(&____tooltips_54, value);
	}

	inline static int32_t get_offset_of__pixelSnapping_55() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ____pixelSnapping_55)); }
	inline bool get__pixelSnapping_55() const { return ____pixelSnapping_55; }
	inline bool* get_address_of__pixelSnapping_55() { return &____pixelSnapping_55; }
	inline void set__pixelSnapping_55(bool value)
	{
		____pixelSnapping_55 = value;
	}

	inline static int32_t get_offset_of__group_56() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ____group_56)); }
	inline GGroup_t2369700754 * get__group_56() const { return ____group_56; }
	inline GGroup_t2369700754 ** get_address_of__group_56() { return &____group_56; }
	inline void set__group_56(GGroup_t2369700754 * value)
	{
		____group_56 = value;
		Il2CppCodeGenWriteBarrier(&____group_56, value);
	}

	inline static int32_t get_offset_of__gears_57() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ____gears_57)); }
	inline GearBaseU5BU5D_t2787013681* get__gears_57() const { return ____gears_57; }
	inline GearBaseU5BU5D_t2787013681** get_address_of__gears_57() { return &____gears_57; }
	inline void set__gears_57(GearBaseU5BU5D_t2787013681* value)
	{
		____gears_57 = value;
		Il2CppCodeGenWriteBarrier(&____gears_57, value);
	}

	inline static int32_t get_offset_of__sizeImplType_58() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ____sizeImplType_58)); }
	inline int32_t get__sizeImplType_58() const { return ____sizeImplType_58; }
	inline int32_t* get_address_of__sizeImplType_58() { return &____sizeImplType_58; }
	inline void set__sizeImplType_58(int32_t value)
	{
		____sizeImplType_58 = value;
	}

	inline static int32_t get_offset_of_packageItem_59() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ___packageItem_59)); }
	inline PackageItem_t1874577185 * get_packageItem_59() const { return ___packageItem_59; }
	inline PackageItem_t1874577185 ** get_address_of_packageItem_59() { return &___packageItem_59; }
	inline void set_packageItem_59(PackageItem_t1874577185 * value)
	{
		___packageItem_59 = value;
		Il2CppCodeGenWriteBarrier(&___packageItem_59, value);
	}

	inline static int32_t get_offset_of_underConstruct_60() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ___underConstruct_60)); }
	inline bool get_underConstruct_60() const { return ___underConstruct_60; }
	inline bool* get_address_of_underConstruct_60() { return &___underConstruct_60; }
	inline void set_underConstruct_60(bool value)
	{
		___underConstruct_60 = value;
	}

	inline static int32_t get_offset_of__width_61() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ____width_61)); }
	inline float get__width_61() const { return ____width_61; }
	inline float* get_address_of__width_61() { return &____width_61; }
	inline void set__width_61(float value)
	{
		____width_61 = value;
	}

	inline static int32_t get_offset_of__height_62() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ____height_62)); }
	inline float get__height_62() const { return ____height_62; }
	inline float* get_address_of__height_62() { return &____height_62; }
	inline void set__height_62(float value)
	{
		____height_62 = value;
	}

	inline static int32_t get_offset_of__rawWidth_63() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ____rawWidth_63)); }
	inline float get__rawWidth_63() const { return ____rawWidth_63; }
	inline float* get_address_of__rawWidth_63() { return &____rawWidth_63; }
	inline void set__rawWidth_63(float value)
	{
		____rawWidth_63 = value;
	}

	inline static int32_t get_offset_of__rawHeight_64() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ____rawHeight_64)); }
	inline float get__rawHeight_64() const { return ____rawHeight_64; }
	inline float* get_address_of__rawHeight_64() { return &____rawHeight_64; }
	inline void set__rawHeight_64(float value)
	{
		____rawHeight_64 = value;
	}

	inline static int32_t get_offset_of__gearLocked_65() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ____gearLocked_65)); }
	inline bool get__gearLocked_65() const { return ____gearLocked_65; }
	inline bool* get_address_of__gearLocked_65() { return &____gearLocked_65; }
	inline void set__gearLocked_65(bool value)
	{
		____gearLocked_65 = value;
	}

	inline static int32_t get_offset_of__sizePercentInGroup_66() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ____sizePercentInGroup_66)); }
	inline float get__sizePercentInGroup_66() const { return ____sizePercentInGroup_66; }
	inline float* get_address_of__sizePercentInGroup_66() { return &____sizePercentInGroup_66; }
	inline void set__sizePercentInGroup_66(float value)
	{
		____sizePercentInGroup_66 = value;
	}

	inline static int32_t get_offset_of__dragTouchId_69() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ____dragTouchId_69)); }
	inline int32_t get__dragTouchId_69() const { return ____dragTouchId_69; }
	inline int32_t* get_address_of__dragTouchId_69() { return &____dragTouchId_69; }
	inline void set__dragTouchId_69(int32_t value)
	{
		____dragTouchId_69 = value;
	}

	inline static int32_t get_offset_of__dragTouchStartPos_70() { return static_cast<int32_t>(offsetof(GObject_t2662234644, ____dragTouchStartPos_70)); }
	inline Vector2_t2243707579  get__dragTouchStartPos_70() const { return ____dragTouchStartPos_70; }
	inline Vector2_t2243707579 * get_address_of__dragTouchStartPos_70() { return &____dragTouchStartPos_70; }
	inline void set__dragTouchStartPos_70(Vector2_t2243707579  value)
	{
		____dragTouchStartPos_70 = value;
	}
};

struct GObject_t2662234644_StaticFields
{
public:
	// FairyGUI.GObject FairyGUI.GObject::<draggingObject>k__BackingField
	GObject_t2662234644 * ___U3CdraggingObjectU3Ek__BackingField_33;
	// System.UInt32 FairyGUI.GObject::_gInstanceCounter
	uint32_t ____gInstanceCounter_67;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> FairyGUI.GObject::GearXMLKeys
	Dictionary_2_t3986656710 * ___GearXMLKeys_68;
	// UnityEngine.Vector2 FairyGUI.GObject::sGlobalDragStart
	Vector2_t2243707579  ___sGlobalDragStart_71;
	// UnityEngine.Rect FairyGUI.GObject::sGlobalRect
	Rect_t3681755626  ___sGlobalRect_72;
	// System.Boolean FairyGUI.GObject::sUpdateInDragging
	bool ___sUpdateInDragging_73;

public:
	inline static int32_t get_offset_of_U3CdraggingObjectU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(GObject_t2662234644_StaticFields, ___U3CdraggingObjectU3Ek__BackingField_33)); }
	inline GObject_t2662234644 * get_U3CdraggingObjectU3Ek__BackingField_33() const { return ___U3CdraggingObjectU3Ek__BackingField_33; }
	inline GObject_t2662234644 ** get_address_of_U3CdraggingObjectU3Ek__BackingField_33() { return &___U3CdraggingObjectU3Ek__BackingField_33; }
	inline void set_U3CdraggingObjectU3Ek__BackingField_33(GObject_t2662234644 * value)
	{
		___U3CdraggingObjectU3Ek__BackingField_33 = value;
		Il2CppCodeGenWriteBarrier(&___U3CdraggingObjectU3Ek__BackingField_33, value);
	}

	inline static int32_t get_offset_of__gInstanceCounter_67() { return static_cast<int32_t>(offsetof(GObject_t2662234644_StaticFields, ____gInstanceCounter_67)); }
	inline uint32_t get__gInstanceCounter_67() const { return ____gInstanceCounter_67; }
	inline uint32_t* get_address_of__gInstanceCounter_67() { return &____gInstanceCounter_67; }
	inline void set__gInstanceCounter_67(uint32_t value)
	{
		____gInstanceCounter_67 = value;
	}

	inline static int32_t get_offset_of_GearXMLKeys_68() { return static_cast<int32_t>(offsetof(GObject_t2662234644_StaticFields, ___GearXMLKeys_68)); }
	inline Dictionary_2_t3986656710 * get_GearXMLKeys_68() const { return ___GearXMLKeys_68; }
	inline Dictionary_2_t3986656710 ** get_address_of_GearXMLKeys_68() { return &___GearXMLKeys_68; }
	inline void set_GearXMLKeys_68(Dictionary_2_t3986656710 * value)
	{
		___GearXMLKeys_68 = value;
		Il2CppCodeGenWriteBarrier(&___GearXMLKeys_68, value);
	}

	inline static int32_t get_offset_of_sGlobalDragStart_71() { return static_cast<int32_t>(offsetof(GObject_t2662234644_StaticFields, ___sGlobalDragStart_71)); }
	inline Vector2_t2243707579  get_sGlobalDragStart_71() const { return ___sGlobalDragStart_71; }
	inline Vector2_t2243707579 * get_address_of_sGlobalDragStart_71() { return &___sGlobalDragStart_71; }
	inline void set_sGlobalDragStart_71(Vector2_t2243707579  value)
	{
		___sGlobalDragStart_71 = value;
	}

	inline static int32_t get_offset_of_sGlobalRect_72() { return static_cast<int32_t>(offsetof(GObject_t2662234644_StaticFields, ___sGlobalRect_72)); }
	inline Rect_t3681755626  get_sGlobalRect_72() const { return ___sGlobalRect_72; }
	inline Rect_t3681755626 * get_address_of_sGlobalRect_72() { return &___sGlobalRect_72; }
	inline void set_sGlobalRect_72(Rect_t3681755626  value)
	{
		___sGlobalRect_72 = value;
	}

	inline static int32_t get_offset_of_sUpdateInDragging_73() { return static_cast<int32_t>(offsetof(GObject_t2662234644_StaticFields, ___sUpdateInDragging_73)); }
	inline bool get_sUpdateInDragging_73() const { return ___sUpdateInDragging_73; }
	inline bool* get_address_of_sUpdateInDragging_73() { return &___sUpdateInDragging_73; }
	inline void set_sUpdateInDragging_73(bool value)
	{
		___sUpdateInDragging_73 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

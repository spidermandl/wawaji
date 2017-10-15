#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "FairyGUI_FairyGUI_EventDispatcher4068415185.h"
#include "FairyGUI_FairyGUI_ScrollType2643074995.h"
#include "FairyGUI_FairyGUI_Margin737097136.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// FairyGUI.EventListener
struct EventListener_t2764096410;
// FairyGUI.ScrollPane
struct ScrollPane_t431787213;
// FairyGUI.EventCallback0
struct EventCallback0_t422277839;
// FairyGUI.EventCallback1
struct EventCallback1_t422277840;
// FairyGUI.TimerCallback
struct TimerCallback_t3558405784;
// FairyGUI.GComponent
struct GComponent_t4106136290;
// FairyGUI.Container
struct Container_t2415729585;
// FairyGUI.GScrollBar
struct GScrollBar_t700243733;
// FairyGUI.Controller
struct Controller_t4051336914;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.ScrollPane
struct  ScrollPane_t431787213  : public EventDispatcher_t4068415185
{
public:
	// FairyGUI.EventListener FairyGUI.ScrollPane::<onScroll>k__BackingField
	EventListener_t2764096410 * ___U3ConScrollU3Ek__BackingField_2;
	// FairyGUI.EventListener FairyGUI.ScrollPane::<onScrollEnd>k__BackingField
	EventListener_t2764096410 * ___U3ConScrollEndU3Ek__BackingField_3;
	// FairyGUI.EventListener FairyGUI.ScrollPane::<onPullDownRelease>k__BackingField
	EventListener_t2764096410 * ___U3ConPullDownReleaseU3Ek__BackingField_4;
	// FairyGUI.EventListener FairyGUI.ScrollPane::<onPullUpRelease>k__BackingField
	EventListener_t2764096410 * ___U3ConPullUpReleaseU3Ek__BackingField_5;
	// FairyGUI.ScrollType FairyGUI.ScrollPane::_scrollType
	int32_t ____scrollType_7;
	// System.Single FairyGUI.ScrollPane::_scrollStep
	float ____scrollStep_8;
	// System.Single FairyGUI.ScrollPane::_mouseWheelStep
	float ____mouseWheelStep_9;
	// FairyGUI.Margin FairyGUI.ScrollPane::_scrollBarMargin
	Margin_t737097136  ____scrollBarMargin_10;
	// System.Boolean FairyGUI.ScrollPane::_bouncebackEffect
	bool ____bouncebackEffect_11;
	// System.Boolean FairyGUI.ScrollPane::_touchEffect
	bool ____touchEffect_12;
	// System.Boolean FairyGUI.ScrollPane::_scrollBarDisplayAuto
	bool ____scrollBarDisplayAuto_13;
	// System.Boolean FairyGUI.ScrollPane::_vScrollNone
	bool ____vScrollNone_14;
	// System.Boolean FairyGUI.ScrollPane::_hScrollNone
	bool ____hScrollNone_15;
	// System.Boolean FairyGUI.ScrollPane::_needRefresh
	bool ____needRefresh_16;
	// System.Int32 FairyGUI.ScrollPane::_refreshBarAxis
	int32_t ____refreshBarAxis_17;
	// System.Boolean FairyGUI.ScrollPane::_displayOnLeft
	bool ____displayOnLeft_18;
	// System.Boolean FairyGUI.ScrollPane::_snapToItem
	bool ____snapToItem_19;
	// System.Boolean FairyGUI.ScrollPane::_displayInDemand
	bool ____displayInDemand_20;
	// System.Boolean FairyGUI.ScrollPane::_mouseWheelEnabled
	bool ____mouseWheelEnabled_21;
	// System.Boolean FairyGUI.ScrollPane::_softnessOnTopOrLeftSide
	bool ____softnessOnTopOrLeftSide_22;
	// System.Boolean FairyGUI.ScrollPane::_pageMode
	bool ____pageMode_23;
	// UnityEngine.Vector2 FairyGUI.ScrollPane::_pageSize
	Vector2_t2243707579  ____pageSize_24;
	// System.Boolean FairyGUI.ScrollPane::_inertiaDisabled
	bool ____inertiaDisabled_25;
	// System.Boolean FairyGUI.ScrollPane::_maskDisabled
	bool ____maskDisabled_26;
	// System.Single FairyGUI.ScrollPane::_decelerationRate
	float ____decelerationRate_27;
	// System.Single FairyGUI.ScrollPane::_xPos
	float ____xPos_28;
	// System.Single FairyGUI.ScrollPane::_yPos
	float ____yPos_29;
	// UnityEngine.Vector2 FairyGUI.ScrollPane::_viewSize
	Vector2_t2243707579  ____viewSize_30;
	// UnityEngine.Vector2 FairyGUI.ScrollPane::_contentSize
	Vector2_t2243707579  ____contentSize_31;
	// UnityEngine.Vector2 FairyGUI.ScrollPane::_overlapSize
	Vector2_t2243707579  ____overlapSize_32;
	// UnityEngine.Vector2 FairyGUI.ScrollPane::_containerPos
	Vector2_t2243707579  ____containerPos_33;
	// UnityEngine.Vector2 FairyGUI.ScrollPane::_beginTouchPos
	Vector2_t2243707579  ____beginTouchPos_34;
	// UnityEngine.Vector2 FairyGUI.ScrollPane::_lastTouchPos
	Vector2_t2243707579  ____lastTouchPos_35;
	// UnityEngine.Vector2 FairyGUI.ScrollPane::_lastTouchGlobalPos
	Vector2_t2243707579  ____lastTouchGlobalPos_36;
	// UnityEngine.Vector2 FairyGUI.ScrollPane::_velocity
	Vector2_t2243707579  ____velocity_37;
	// System.Single FairyGUI.ScrollPane::_velocityScale
	float ____velocityScale_38;
	// System.Single FairyGUI.ScrollPane::_lastMoveTime
	float ____lastMoveTime_39;
	// System.Boolean FairyGUI.ScrollPane::_isMouseMoved
	bool ____isMouseMoved_40;
	// System.Boolean FairyGUI.ScrollPane::_isHoldAreaDone
	bool ____isHoldAreaDone_41;
	// System.Int32 FairyGUI.ScrollPane::_aniFlag
	int32_t ____aniFlag_42;
	// System.Boolean FairyGUI.ScrollPane::_scrollBarVisible
	bool ____scrollBarVisible_43;
	// System.Int32 FairyGUI.ScrollPane::_touchId
	int32_t ____touchId_44;
	// System.Int32 FairyGUI.ScrollPane::_loop
	int32_t ____loop_45;
	// System.Int32 FairyGUI.ScrollPane::_headerLockedSize
	int32_t ____headerLockedSize_46;
	// System.Int32 FairyGUI.ScrollPane::_footerLockedSize
	int32_t ____footerLockedSize_47;
	// System.Int32 FairyGUI.ScrollPane::_tweening
	int32_t ____tweening_48;
	// UnityEngine.Vector2 FairyGUI.ScrollPane::_tweenStart
	Vector2_t2243707579  ____tweenStart_49;
	// UnityEngine.Vector2 FairyGUI.ScrollPane::_tweenChange
	Vector2_t2243707579  ____tweenChange_50;
	// UnityEngine.Vector2 FairyGUI.ScrollPane::_tweenTime
	Vector2_t2243707579  ____tweenTime_51;
	// UnityEngine.Vector2 FairyGUI.ScrollPane::_tweenDuration
	Vector2_t2243707579  ____tweenDuration_52;
	// FairyGUI.EventCallback0 FairyGUI.ScrollPane::_refreshDelegate
	EventCallback0_t422277839 * ____refreshDelegate_53;
	// FairyGUI.EventCallback1 FairyGUI.ScrollPane::_touchEndDelegate
	EventCallback1_t422277840 * ____touchEndDelegate_54;
	// FairyGUI.EventCallback1 FairyGUI.ScrollPane::_touchMoveDelegate
	EventCallback1_t422277840 * ____touchMoveDelegate_55;
	// FairyGUI.TimerCallback FairyGUI.ScrollPane::_tweenUpdateDelegate
	TimerCallback_t3558405784 * ____tweenUpdateDelegate_56;
	// FairyGUI.TimerCallback FairyGUI.ScrollPane::_showScrollBarDelegate
	TimerCallback_t3558405784 * ____showScrollBarDelegate_57;
	// FairyGUI.GComponent FairyGUI.ScrollPane::_owner
	GComponent_t4106136290 * ____owner_58;
	// FairyGUI.Container FairyGUI.ScrollPane::_maskContainer
	Container_t2415729585 * ____maskContainer_59;
	// FairyGUI.Container FairyGUI.ScrollPane::_container
	Container_t2415729585 * ____container_60;
	// FairyGUI.GScrollBar FairyGUI.ScrollPane::_hzScrollBar
	GScrollBar_t700243733 * ____hzScrollBar_61;
	// FairyGUI.GScrollBar FairyGUI.ScrollPane::_vtScrollBar
	GScrollBar_t700243733 * ____vtScrollBar_62;
	// FairyGUI.GComponent FairyGUI.ScrollPane::_header
	GComponent_t4106136290 * ____header_63;
	// FairyGUI.GComponent FairyGUI.ScrollPane::_footer
	GComponent_t4106136290 * ____footer_64;
	// FairyGUI.Controller FairyGUI.ScrollPane::_pageController
	Controller_t4051336914 * ____pageController_65;

public:
	inline static int32_t get_offset_of_U3ConScrollU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ___U3ConScrollU3Ek__BackingField_2)); }
	inline EventListener_t2764096410 * get_U3ConScrollU3Ek__BackingField_2() const { return ___U3ConScrollU3Ek__BackingField_2; }
	inline EventListener_t2764096410 ** get_address_of_U3ConScrollU3Ek__BackingField_2() { return &___U3ConScrollU3Ek__BackingField_2; }
	inline void set_U3ConScrollU3Ek__BackingField_2(EventListener_t2764096410 * value)
	{
		___U3ConScrollU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConScrollU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_U3ConScrollEndU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ___U3ConScrollEndU3Ek__BackingField_3)); }
	inline EventListener_t2764096410 * get_U3ConScrollEndU3Ek__BackingField_3() const { return ___U3ConScrollEndU3Ek__BackingField_3; }
	inline EventListener_t2764096410 ** get_address_of_U3ConScrollEndU3Ek__BackingField_3() { return &___U3ConScrollEndU3Ek__BackingField_3; }
	inline void set_U3ConScrollEndU3Ek__BackingField_3(EventListener_t2764096410 * value)
	{
		___U3ConScrollEndU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConScrollEndU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_U3ConPullDownReleaseU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ___U3ConPullDownReleaseU3Ek__BackingField_4)); }
	inline EventListener_t2764096410 * get_U3ConPullDownReleaseU3Ek__BackingField_4() const { return ___U3ConPullDownReleaseU3Ek__BackingField_4; }
	inline EventListener_t2764096410 ** get_address_of_U3ConPullDownReleaseU3Ek__BackingField_4() { return &___U3ConPullDownReleaseU3Ek__BackingField_4; }
	inline void set_U3ConPullDownReleaseU3Ek__BackingField_4(EventListener_t2764096410 * value)
	{
		___U3ConPullDownReleaseU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConPullDownReleaseU3Ek__BackingField_4, value);
	}

	inline static int32_t get_offset_of_U3ConPullUpReleaseU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ___U3ConPullUpReleaseU3Ek__BackingField_5)); }
	inline EventListener_t2764096410 * get_U3ConPullUpReleaseU3Ek__BackingField_5() const { return ___U3ConPullUpReleaseU3Ek__BackingField_5; }
	inline EventListener_t2764096410 ** get_address_of_U3ConPullUpReleaseU3Ek__BackingField_5() { return &___U3ConPullUpReleaseU3Ek__BackingField_5; }
	inline void set_U3ConPullUpReleaseU3Ek__BackingField_5(EventListener_t2764096410 * value)
	{
		___U3ConPullUpReleaseU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConPullUpReleaseU3Ek__BackingField_5, value);
	}

	inline static int32_t get_offset_of__scrollType_7() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ____scrollType_7)); }
	inline int32_t get__scrollType_7() const { return ____scrollType_7; }
	inline int32_t* get_address_of__scrollType_7() { return &____scrollType_7; }
	inline void set__scrollType_7(int32_t value)
	{
		____scrollType_7 = value;
	}

	inline static int32_t get_offset_of__scrollStep_8() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ____scrollStep_8)); }
	inline float get__scrollStep_8() const { return ____scrollStep_8; }
	inline float* get_address_of__scrollStep_8() { return &____scrollStep_8; }
	inline void set__scrollStep_8(float value)
	{
		____scrollStep_8 = value;
	}

	inline static int32_t get_offset_of__mouseWheelStep_9() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ____mouseWheelStep_9)); }
	inline float get__mouseWheelStep_9() const { return ____mouseWheelStep_9; }
	inline float* get_address_of__mouseWheelStep_9() { return &____mouseWheelStep_9; }
	inline void set__mouseWheelStep_9(float value)
	{
		____mouseWheelStep_9 = value;
	}

	inline static int32_t get_offset_of__scrollBarMargin_10() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ____scrollBarMargin_10)); }
	inline Margin_t737097136  get__scrollBarMargin_10() const { return ____scrollBarMargin_10; }
	inline Margin_t737097136 * get_address_of__scrollBarMargin_10() { return &____scrollBarMargin_10; }
	inline void set__scrollBarMargin_10(Margin_t737097136  value)
	{
		____scrollBarMargin_10 = value;
	}

	inline static int32_t get_offset_of__bouncebackEffect_11() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ____bouncebackEffect_11)); }
	inline bool get__bouncebackEffect_11() const { return ____bouncebackEffect_11; }
	inline bool* get_address_of__bouncebackEffect_11() { return &____bouncebackEffect_11; }
	inline void set__bouncebackEffect_11(bool value)
	{
		____bouncebackEffect_11 = value;
	}

	inline static int32_t get_offset_of__touchEffect_12() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ____touchEffect_12)); }
	inline bool get__touchEffect_12() const { return ____touchEffect_12; }
	inline bool* get_address_of__touchEffect_12() { return &____touchEffect_12; }
	inline void set__touchEffect_12(bool value)
	{
		____touchEffect_12 = value;
	}

	inline static int32_t get_offset_of__scrollBarDisplayAuto_13() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ____scrollBarDisplayAuto_13)); }
	inline bool get__scrollBarDisplayAuto_13() const { return ____scrollBarDisplayAuto_13; }
	inline bool* get_address_of__scrollBarDisplayAuto_13() { return &____scrollBarDisplayAuto_13; }
	inline void set__scrollBarDisplayAuto_13(bool value)
	{
		____scrollBarDisplayAuto_13 = value;
	}

	inline static int32_t get_offset_of__vScrollNone_14() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ____vScrollNone_14)); }
	inline bool get__vScrollNone_14() const { return ____vScrollNone_14; }
	inline bool* get_address_of__vScrollNone_14() { return &____vScrollNone_14; }
	inline void set__vScrollNone_14(bool value)
	{
		____vScrollNone_14 = value;
	}

	inline static int32_t get_offset_of__hScrollNone_15() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ____hScrollNone_15)); }
	inline bool get__hScrollNone_15() const { return ____hScrollNone_15; }
	inline bool* get_address_of__hScrollNone_15() { return &____hScrollNone_15; }
	inline void set__hScrollNone_15(bool value)
	{
		____hScrollNone_15 = value;
	}

	inline static int32_t get_offset_of__needRefresh_16() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ____needRefresh_16)); }
	inline bool get__needRefresh_16() const { return ____needRefresh_16; }
	inline bool* get_address_of__needRefresh_16() { return &____needRefresh_16; }
	inline void set__needRefresh_16(bool value)
	{
		____needRefresh_16 = value;
	}

	inline static int32_t get_offset_of__refreshBarAxis_17() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ____refreshBarAxis_17)); }
	inline int32_t get__refreshBarAxis_17() const { return ____refreshBarAxis_17; }
	inline int32_t* get_address_of__refreshBarAxis_17() { return &____refreshBarAxis_17; }
	inline void set__refreshBarAxis_17(int32_t value)
	{
		____refreshBarAxis_17 = value;
	}

	inline static int32_t get_offset_of__displayOnLeft_18() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ____displayOnLeft_18)); }
	inline bool get__displayOnLeft_18() const { return ____displayOnLeft_18; }
	inline bool* get_address_of__displayOnLeft_18() { return &____displayOnLeft_18; }
	inline void set__displayOnLeft_18(bool value)
	{
		____displayOnLeft_18 = value;
	}

	inline static int32_t get_offset_of__snapToItem_19() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ____snapToItem_19)); }
	inline bool get__snapToItem_19() const { return ____snapToItem_19; }
	inline bool* get_address_of__snapToItem_19() { return &____snapToItem_19; }
	inline void set__snapToItem_19(bool value)
	{
		____snapToItem_19 = value;
	}

	inline static int32_t get_offset_of__displayInDemand_20() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ____displayInDemand_20)); }
	inline bool get__displayInDemand_20() const { return ____displayInDemand_20; }
	inline bool* get_address_of__displayInDemand_20() { return &____displayInDemand_20; }
	inline void set__displayInDemand_20(bool value)
	{
		____displayInDemand_20 = value;
	}

	inline static int32_t get_offset_of__mouseWheelEnabled_21() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ____mouseWheelEnabled_21)); }
	inline bool get__mouseWheelEnabled_21() const { return ____mouseWheelEnabled_21; }
	inline bool* get_address_of__mouseWheelEnabled_21() { return &____mouseWheelEnabled_21; }
	inline void set__mouseWheelEnabled_21(bool value)
	{
		____mouseWheelEnabled_21 = value;
	}

	inline static int32_t get_offset_of__softnessOnTopOrLeftSide_22() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ____softnessOnTopOrLeftSide_22)); }
	inline bool get__softnessOnTopOrLeftSide_22() const { return ____softnessOnTopOrLeftSide_22; }
	inline bool* get_address_of__softnessOnTopOrLeftSide_22() { return &____softnessOnTopOrLeftSide_22; }
	inline void set__softnessOnTopOrLeftSide_22(bool value)
	{
		____softnessOnTopOrLeftSide_22 = value;
	}

	inline static int32_t get_offset_of__pageMode_23() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ____pageMode_23)); }
	inline bool get__pageMode_23() const { return ____pageMode_23; }
	inline bool* get_address_of__pageMode_23() { return &____pageMode_23; }
	inline void set__pageMode_23(bool value)
	{
		____pageMode_23 = value;
	}

	inline static int32_t get_offset_of__pageSize_24() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ____pageSize_24)); }
	inline Vector2_t2243707579  get__pageSize_24() const { return ____pageSize_24; }
	inline Vector2_t2243707579 * get_address_of__pageSize_24() { return &____pageSize_24; }
	inline void set__pageSize_24(Vector2_t2243707579  value)
	{
		____pageSize_24 = value;
	}

	inline static int32_t get_offset_of__inertiaDisabled_25() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ____inertiaDisabled_25)); }
	inline bool get__inertiaDisabled_25() const { return ____inertiaDisabled_25; }
	inline bool* get_address_of__inertiaDisabled_25() { return &____inertiaDisabled_25; }
	inline void set__inertiaDisabled_25(bool value)
	{
		____inertiaDisabled_25 = value;
	}

	inline static int32_t get_offset_of__maskDisabled_26() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ____maskDisabled_26)); }
	inline bool get__maskDisabled_26() const { return ____maskDisabled_26; }
	inline bool* get_address_of__maskDisabled_26() { return &____maskDisabled_26; }
	inline void set__maskDisabled_26(bool value)
	{
		____maskDisabled_26 = value;
	}

	inline static int32_t get_offset_of__decelerationRate_27() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ____decelerationRate_27)); }
	inline float get__decelerationRate_27() const { return ____decelerationRate_27; }
	inline float* get_address_of__decelerationRate_27() { return &____decelerationRate_27; }
	inline void set__decelerationRate_27(float value)
	{
		____decelerationRate_27 = value;
	}

	inline static int32_t get_offset_of__xPos_28() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ____xPos_28)); }
	inline float get__xPos_28() const { return ____xPos_28; }
	inline float* get_address_of__xPos_28() { return &____xPos_28; }
	inline void set__xPos_28(float value)
	{
		____xPos_28 = value;
	}

	inline static int32_t get_offset_of__yPos_29() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ____yPos_29)); }
	inline float get__yPos_29() const { return ____yPos_29; }
	inline float* get_address_of__yPos_29() { return &____yPos_29; }
	inline void set__yPos_29(float value)
	{
		____yPos_29 = value;
	}

	inline static int32_t get_offset_of__viewSize_30() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ____viewSize_30)); }
	inline Vector2_t2243707579  get__viewSize_30() const { return ____viewSize_30; }
	inline Vector2_t2243707579 * get_address_of__viewSize_30() { return &____viewSize_30; }
	inline void set__viewSize_30(Vector2_t2243707579  value)
	{
		____viewSize_30 = value;
	}

	inline static int32_t get_offset_of__contentSize_31() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ____contentSize_31)); }
	inline Vector2_t2243707579  get__contentSize_31() const { return ____contentSize_31; }
	inline Vector2_t2243707579 * get_address_of__contentSize_31() { return &____contentSize_31; }
	inline void set__contentSize_31(Vector2_t2243707579  value)
	{
		____contentSize_31 = value;
	}

	inline static int32_t get_offset_of__overlapSize_32() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ____overlapSize_32)); }
	inline Vector2_t2243707579  get__overlapSize_32() const { return ____overlapSize_32; }
	inline Vector2_t2243707579 * get_address_of__overlapSize_32() { return &____overlapSize_32; }
	inline void set__overlapSize_32(Vector2_t2243707579  value)
	{
		____overlapSize_32 = value;
	}

	inline static int32_t get_offset_of__containerPos_33() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ____containerPos_33)); }
	inline Vector2_t2243707579  get__containerPos_33() const { return ____containerPos_33; }
	inline Vector2_t2243707579 * get_address_of__containerPos_33() { return &____containerPos_33; }
	inline void set__containerPos_33(Vector2_t2243707579  value)
	{
		____containerPos_33 = value;
	}

	inline static int32_t get_offset_of__beginTouchPos_34() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ____beginTouchPos_34)); }
	inline Vector2_t2243707579  get__beginTouchPos_34() const { return ____beginTouchPos_34; }
	inline Vector2_t2243707579 * get_address_of__beginTouchPos_34() { return &____beginTouchPos_34; }
	inline void set__beginTouchPos_34(Vector2_t2243707579  value)
	{
		____beginTouchPos_34 = value;
	}

	inline static int32_t get_offset_of__lastTouchPos_35() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ____lastTouchPos_35)); }
	inline Vector2_t2243707579  get__lastTouchPos_35() const { return ____lastTouchPos_35; }
	inline Vector2_t2243707579 * get_address_of__lastTouchPos_35() { return &____lastTouchPos_35; }
	inline void set__lastTouchPos_35(Vector2_t2243707579  value)
	{
		____lastTouchPos_35 = value;
	}

	inline static int32_t get_offset_of__lastTouchGlobalPos_36() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ____lastTouchGlobalPos_36)); }
	inline Vector2_t2243707579  get__lastTouchGlobalPos_36() const { return ____lastTouchGlobalPos_36; }
	inline Vector2_t2243707579 * get_address_of__lastTouchGlobalPos_36() { return &____lastTouchGlobalPos_36; }
	inline void set__lastTouchGlobalPos_36(Vector2_t2243707579  value)
	{
		____lastTouchGlobalPos_36 = value;
	}

	inline static int32_t get_offset_of__velocity_37() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ____velocity_37)); }
	inline Vector2_t2243707579  get__velocity_37() const { return ____velocity_37; }
	inline Vector2_t2243707579 * get_address_of__velocity_37() { return &____velocity_37; }
	inline void set__velocity_37(Vector2_t2243707579  value)
	{
		____velocity_37 = value;
	}

	inline static int32_t get_offset_of__velocityScale_38() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ____velocityScale_38)); }
	inline float get__velocityScale_38() const { return ____velocityScale_38; }
	inline float* get_address_of__velocityScale_38() { return &____velocityScale_38; }
	inline void set__velocityScale_38(float value)
	{
		____velocityScale_38 = value;
	}

	inline static int32_t get_offset_of__lastMoveTime_39() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ____lastMoveTime_39)); }
	inline float get__lastMoveTime_39() const { return ____lastMoveTime_39; }
	inline float* get_address_of__lastMoveTime_39() { return &____lastMoveTime_39; }
	inline void set__lastMoveTime_39(float value)
	{
		____lastMoveTime_39 = value;
	}

	inline static int32_t get_offset_of__isMouseMoved_40() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ____isMouseMoved_40)); }
	inline bool get__isMouseMoved_40() const { return ____isMouseMoved_40; }
	inline bool* get_address_of__isMouseMoved_40() { return &____isMouseMoved_40; }
	inline void set__isMouseMoved_40(bool value)
	{
		____isMouseMoved_40 = value;
	}

	inline static int32_t get_offset_of__isHoldAreaDone_41() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ____isHoldAreaDone_41)); }
	inline bool get__isHoldAreaDone_41() const { return ____isHoldAreaDone_41; }
	inline bool* get_address_of__isHoldAreaDone_41() { return &____isHoldAreaDone_41; }
	inline void set__isHoldAreaDone_41(bool value)
	{
		____isHoldAreaDone_41 = value;
	}

	inline static int32_t get_offset_of__aniFlag_42() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ____aniFlag_42)); }
	inline int32_t get__aniFlag_42() const { return ____aniFlag_42; }
	inline int32_t* get_address_of__aniFlag_42() { return &____aniFlag_42; }
	inline void set__aniFlag_42(int32_t value)
	{
		____aniFlag_42 = value;
	}

	inline static int32_t get_offset_of__scrollBarVisible_43() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ____scrollBarVisible_43)); }
	inline bool get__scrollBarVisible_43() const { return ____scrollBarVisible_43; }
	inline bool* get_address_of__scrollBarVisible_43() { return &____scrollBarVisible_43; }
	inline void set__scrollBarVisible_43(bool value)
	{
		____scrollBarVisible_43 = value;
	}

	inline static int32_t get_offset_of__touchId_44() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ____touchId_44)); }
	inline int32_t get__touchId_44() const { return ____touchId_44; }
	inline int32_t* get_address_of__touchId_44() { return &____touchId_44; }
	inline void set__touchId_44(int32_t value)
	{
		____touchId_44 = value;
	}

	inline static int32_t get_offset_of__loop_45() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ____loop_45)); }
	inline int32_t get__loop_45() const { return ____loop_45; }
	inline int32_t* get_address_of__loop_45() { return &____loop_45; }
	inline void set__loop_45(int32_t value)
	{
		____loop_45 = value;
	}

	inline static int32_t get_offset_of__headerLockedSize_46() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ____headerLockedSize_46)); }
	inline int32_t get__headerLockedSize_46() const { return ____headerLockedSize_46; }
	inline int32_t* get_address_of__headerLockedSize_46() { return &____headerLockedSize_46; }
	inline void set__headerLockedSize_46(int32_t value)
	{
		____headerLockedSize_46 = value;
	}

	inline static int32_t get_offset_of__footerLockedSize_47() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ____footerLockedSize_47)); }
	inline int32_t get__footerLockedSize_47() const { return ____footerLockedSize_47; }
	inline int32_t* get_address_of__footerLockedSize_47() { return &____footerLockedSize_47; }
	inline void set__footerLockedSize_47(int32_t value)
	{
		____footerLockedSize_47 = value;
	}

	inline static int32_t get_offset_of__tweening_48() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ____tweening_48)); }
	inline int32_t get__tweening_48() const { return ____tweening_48; }
	inline int32_t* get_address_of__tweening_48() { return &____tweening_48; }
	inline void set__tweening_48(int32_t value)
	{
		____tweening_48 = value;
	}

	inline static int32_t get_offset_of__tweenStart_49() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ____tweenStart_49)); }
	inline Vector2_t2243707579  get__tweenStart_49() const { return ____tweenStart_49; }
	inline Vector2_t2243707579 * get_address_of__tweenStart_49() { return &____tweenStart_49; }
	inline void set__tweenStart_49(Vector2_t2243707579  value)
	{
		____tweenStart_49 = value;
	}

	inline static int32_t get_offset_of__tweenChange_50() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ____tweenChange_50)); }
	inline Vector2_t2243707579  get__tweenChange_50() const { return ____tweenChange_50; }
	inline Vector2_t2243707579 * get_address_of__tweenChange_50() { return &____tweenChange_50; }
	inline void set__tweenChange_50(Vector2_t2243707579  value)
	{
		____tweenChange_50 = value;
	}

	inline static int32_t get_offset_of__tweenTime_51() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ____tweenTime_51)); }
	inline Vector2_t2243707579  get__tweenTime_51() const { return ____tweenTime_51; }
	inline Vector2_t2243707579 * get_address_of__tweenTime_51() { return &____tweenTime_51; }
	inline void set__tweenTime_51(Vector2_t2243707579  value)
	{
		____tweenTime_51 = value;
	}

	inline static int32_t get_offset_of__tweenDuration_52() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ____tweenDuration_52)); }
	inline Vector2_t2243707579  get__tweenDuration_52() const { return ____tweenDuration_52; }
	inline Vector2_t2243707579 * get_address_of__tweenDuration_52() { return &____tweenDuration_52; }
	inline void set__tweenDuration_52(Vector2_t2243707579  value)
	{
		____tweenDuration_52 = value;
	}

	inline static int32_t get_offset_of__refreshDelegate_53() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ____refreshDelegate_53)); }
	inline EventCallback0_t422277839 * get__refreshDelegate_53() const { return ____refreshDelegate_53; }
	inline EventCallback0_t422277839 ** get_address_of__refreshDelegate_53() { return &____refreshDelegate_53; }
	inline void set__refreshDelegate_53(EventCallback0_t422277839 * value)
	{
		____refreshDelegate_53 = value;
		Il2CppCodeGenWriteBarrier(&____refreshDelegate_53, value);
	}

	inline static int32_t get_offset_of__touchEndDelegate_54() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ____touchEndDelegate_54)); }
	inline EventCallback1_t422277840 * get__touchEndDelegate_54() const { return ____touchEndDelegate_54; }
	inline EventCallback1_t422277840 ** get_address_of__touchEndDelegate_54() { return &____touchEndDelegate_54; }
	inline void set__touchEndDelegate_54(EventCallback1_t422277840 * value)
	{
		____touchEndDelegate_54 = value;
		Il2CppCodeGenWriteBarrier(&____touchEndDelegate_54, value);
	}

	inline static int32_t get_offset_of__touchMoveDelegate_55() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ____touchMoveDelegate_55)); }
	inline EventCallback1_t422277840 * get__touchMoveDelegate_55() const { return ____touchMoveDelegate_55; }
	inline EventCallback1_t422277840 ** get_address_of__touchMoveDelegate_55() { return &____touchMoveDelegate_55; }
	inline void set__touchMoveDelegate_55(EventCallback1_t422277840 * value)
	{
		____touchMoveDelegate_55 = value;
		Il2CppCodeGenWriteBarrier(&____touchMoveDelegate_55, value);
	}

	inline static int32_t get_offset_of__tweenUpdateDelegate_56() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ____tweenUpdateDelegate_56)); }
	inline TimerCallback_t3558405784 * get__tweenUpdateDelegate_56() const { return ____tweenUpdateDelegate_56; }
	inline TimerCallback_t3558405784 ** get_address_of__tweenUpdateDelegate_56() { return &____tweenUpdateDelegate_56; }
	inline void set__tweenUpdateDelegate_56(TimerCallback_t3558405784 * value)
	{
		____tweenUpdateDelegate_56 = value;
		Il2CppCodeGenWriteBarrier(&____tweenUpdateDelegate_56, value);
	}

	inline static int32_t get_offset_of__showScrollBarDelegate_57() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ____showScrollBarDelegate_57)); }
	inline TimerCallback_t3558405784 * get__showScrollBarDelegate_57() const { return ____showScrollBarDelegate_57; }
	inline TimerCallback_t3558405784 ** get_address_of__showScrollBarDelegate_57() { return &____showScrollBarDelegate_57; }
	inline void set__showScrollBarDelegate_57(TimerCallback_t3558405784 * value)
	{
		____showScrollBarDelegate_57 = value;
		Il2CppCodeGenWriteBarrier(&____showScrollBarDelegate_57, value);
	}

	inline static int32_t get_offset_of__owner_58() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ____owner_58)); }
	inline GComponent_t4106136290 * get__owner_58() const { return ____owner_58; }
	inline GComponent_t4106136290 ** get_address_of__owner_58() { return &____owner_58; }
	inline void set__owner_58(GComponent_t4106136290 * value)
	{
		____owner_58 = value;
		Il2CppCodeGenWriteBarrier(&____owner_58, value);
	}

	inline static int32_t get_offset_of__maskContainer_59() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ____maskContainer_59)); }
	inline Container_t2415729585 * get__maskContainer_59() const { return ____maskContainer_59; }
	inline Container_t2415729585 ** get_address_of__maskContainer_59() { return &____maskContainer_59; }
	inline void set__maskContainer_59(Container_t2415729585 * value)
	{
		____maskContainer_59 = value;
		Il2CppCodeGenWriteBarrier(&____maskContainer_59, value);
	}

	inline static int32_t get_offset_of__container_60() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ____container_60)); }
	inline Container_t2415729585 * get__container_60() const { return ____container_60; }
	inline Container_t2415729585 ** get_address_of__container_60() { return &____container_60; }
	inline void set__container_60(Container_t2415729585 * value)
	{
		____container_60 = value;
		Il2CppCodeGenWriteBarrier(&____container_60, value);
	}

	inline static int32_t get_offset_of__hzScrollBar_61() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ____hzScrollBar_61)); }
	inline GScrollBar_t700243733 * get__hzScrollBar_61() const { return ____hzScrollBar_61; }
	inline GScrollBar_t700243733 ** get_address_of__hzScrollBar_61() { return &____hzScrollBar_61; }
	inline void set__hzScrollBar_61(GScrollBar_t700243733 * value)
	{
		____hzScrollBar_61 = value;
		Il2CppCodeGenWriteBarrier(&____hzScrollBar_61, value);
	}

	inline static int32_t get_offset_of__vtScrollBar_62() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ____vtScrollBar_62)); }
	inline GScrollBar_t700243733 * get__vtScrollBar_62() const { return ____vtScrollBar_62; }
	inline GScrollBar_t700243733 ** get_address_of__vtScrollBar_62() { return &____vtScrollBar_62; }
	inline void set__vtScrollBar_62(GScrollBar_t700243733 * value)
	{
		____vtScrollBar_62 = value;
		Il2CppCodeGenWriteBarrier(&____vtScrollBar_62, value);
	}

	inline static int32_t get_offset_of__header_63() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ____header_63)); }
	inline GComponent_t4106136290 * get__header_63() const { return ____header_63; }
	inline GComponent_t4106136290 ** get_address_of__header_63() { return &____header_63; }
	inline void set__header_63(GComponent_t4106136290 * value)
	{
		____header_63 = value;
		Il2CppCodeGenWriteBarrier(&____header_63, value);
	}

	inline static int32_t get_offset_of__footer_64() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ____footer_64)); }
	inline GComponent_t4106136290 * get__footer_64() const { return ____footer_64; }
	inline GComponent_t4106136290 ** get_address_of__footer_64() { return &____footer_64; }
	inline void set__footer_64(GComponent_t4106136290 * value)
	{
		____footer_64 = value;
		Il2CppCodeGenWriteBarrier(&____footer_64, value);
	}

	inline static int32_t get_offset_of__pageController_65() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213, ____pageController_65)); }
	inline Controller_t4051336914 * get__pageController_65() const { return ____pageController_65; }
	inline Controller_t4051336914 ** get_address_of__pageController_65() { return &____pageController_65; }
	inline void set__pageController_65(Controller_t4051336914 * value)
	{
		____pageController_65 = value;
		Il2CppCodeGenWriteBarrier(&____pageController_65, value);
	}
};

struct ScrollPane_t431787213_StaticFields
{
public:
	// FairyGUI.ScrollPane FairyGUI.ScrollPane::<draggingPane>k__BackingField
	ScrollPane_t431787213 * ___U3CdraggingPaneU3Ek__BackingField_6;
	// System.Int32 FairyGUI.ScrollPane::_gestureFlag
	int32_t ____gestureFlag_66;

public:
	inline static int32_t get_offset_of_U3CdraggingPaneU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213_StaticFields, ___U3CdraggingPaneU3Ek__BackingField_6)); }
	inline ScrollPane_t431787213 * get_U3CdraggingPaneU3Ek__BackingField_6() const { return ___U3CdraggingPaneU3Ek__BackingField_6; }
	inline ScrollPane_t431787213 ** get_address_of_U3CdraggingPaneU3Ek__BackingField_6() { return &___U3CdraggingPaneU3Ek__BackingField_6; }
	inline void set_U3CdraggingPaneU3Ek__BackingField_6(ScrollPane_t431787213 * value)
	{
		___U3CdraggingPaneU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CdraggingPaneU3Ek__BackingField_6, value);
	}

	inline static int32_t get_offset_of__gestureFlag_66() { return static_cast<int32_t>(offsetof(ScrollPane_t431787213_StaticFields, ____gestureFlag_66)); }
	inline int32_t get__gestureFlag_66() const { return ____gestureFlag_66; }
	inline int32_t* get_address_of__gestureFlag_66() { return &____gestureFlag_66; }
	inline void set__gestureFlag_66(int32_t value)
	{
		____gestureFlag_66 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

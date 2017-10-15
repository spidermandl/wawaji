#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_KeyCode2283395152.h"
#include "UnityEngine_UnityEngine_EventModifiers2690251474.h"

// FairyGUI.DisplayObject
struct DisplayObject_t1069768653;
// System.Collections.Generic.List`1<FairyGUI.DisplayObject>
struct List_1_t438889785;
// System.Collections.Generic.List`1<FairyGUI.EventDispatcher>
struct List_1_t3437536317;
// FairyGUI.InputEvent
struct InputEvent_t3297021522;
// System.Collections.Generic.List`1<FairyGUI.EventBridge>
struct List_1_t39405453;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.TouchInfo
struct  TouchInfo_t555774085  : public Il2CppObject
{
public:
	// System.Single FairyGUI.TouchInfo::x
	float ___x_0;
	// System.Single FairyGUI.TouchInfo::y
	float ___y_1;
	// System.Int32 FairyGUI.TouchInfo::touchId
	int32_t ___touchId_2;
	// System.Int32 FairyGUI.TouchInfo::clickCount
	int32_t ___clickCount_3;
	// UnityEngine.KeyCode FairyGUI.TouchInfo::keyCode
	int32_t ___keyCode_4;
	// UnityEngine.EventModifiers FairyGUI.TouchInfo::modifiers
	int32_t ___modifiers_5;
	// System.Int32 FairyGUI.TouchInfo::mouseWheelDelta
	int32_t ___mouseWheelDelta_6;
	// System.Int32 FairyGUI.TouchInfo::button
	int32_t ___button_7;
	// System.Single FairyGUI.TouchInfo::downX
	float ___downX_8;
	// System.Single FairyGUI.TouchInfo::downY
	float ___downY_9;
	// System.Boolean FairyGUI.TouchInfo::began
	bool ___began_10;
	// System.Boolean FairyGUI.TouchInfo::clickCancelled
	bool ___clickCancelled_11;
	// System.Single FairyGUI.TouchInfo::lastClickTime
	float ___lastClickTime_12;
	// FairyGUI.DisplayObject FairyGUI.TouchInfo::target
	DisplayObject_t1069768653 * ___target_13;
	// System.Collections.Generic.List`1<FairyGUI.DisplayObject> FairyGUI.TouchInfo::downTargets
	List_1_t438889785 * ___downTargets_14;
	// FairyGUI.DisplayObject FairyGUI.TouchInfo::lastRollOver
	DisplayObject_t1069768653 * ___lastRollOver_15;
	// System.Collections.Generic.List`1<FairyGUI.EventDispatcher> FairyGUI.TouchInfo::touchEndMonitors
	List_1_t3437536317 * ___touchEndMonitors_16;
	// FairyGUI.InputEvent FairyGUI.TouchInfo::evt
	InputEvent_t3297021522 * ___evt_17;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(TouchInfo_t555774085, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(TouchInfo_t555774085, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_touchId_2() { return static_cast<int32_t>(offsetof(TouchInfo_t555774085, ___touchId_2)); }
	inline int32_t get_touchId_2() const { return ___touchId_2; }
	inline int32_t* get_address_of_touchId_2() { return &___touchId_2; }
	inline void set_touchId_2(int32_t value)
	{
		___touchId_2 = value;
	}

	inline static int32_t get_offset_of_clickCount_3() { return static_cast<int32_t>(offsetof(TouchInfo_t555774085, ___clickCount_3)); }
	inline int32_t get_clickCount_3() const { return ___clickCount_3; }
	inline int32_t* get_address_of_clickCount_3() { return &___clickCount_3; }
	inline void set_clickCount_3(int32_t value)
	{
		___clickCount_3 = value;
	}

	inline static int32_t get_offset_of_keyCode_4() { return static_cast<int32_t>(offsetof(TouchInfo_t555774085, ___keyCode_4)); }
	inline int32_t get_keyCode_4() const { return ___keyCode_4; }
	inline int32_t* get_address_of_keyCode_4() { return &___keyCode_4; }
	inline void set_keyCode_4(int32_t value)
	{
		___keyCode_4 = value;
	}

	inline static int32_t get_offset_of_modifiers_5() { return static_cast<int32_t>(offsetof(TouchInfo_t555774085, ___modifiers_5)); }
	inline int32_t get_modifiers_5() const { return ___modifiers_5; }
	inline int32_t* get_address_of_modifiers_5() { return &___modifiers_5; }
	inline void set_modifiers_5(int32_t value)
	{
		___modifiers_5 = value;
	}

	inline static int32_t get_offset_of_mouseWheelDelta_6() { return static_cast<int32_t>(offsetof(TouchInfo_t555774085, ___mouseWheelDelta_6)); }
	inline int32_t get_mouseWheelDelta_6() const { return ___mouseWheelDelta_6; }
	inline int32_t* get_address_of_mouseWheelDelta_6() { return &___mouseWheelDelta_6; }
	inline void set_mouseWheelDelta_6(int32_t value)
	{
		___mouseWheelDelta_6 = value;
	}

	inline static int32_t get_offset_of_button_7() { return static_cast<int32_t>(offsetof(TouchInfo_t555774085, ___button_7)); }
	inline int32_t get_button_7() const { return ___button_7; }
	inline int32_t* get_address_of_button_7() { return &___button_7; }
	inline void set_button_7(int32_t value)
	{
		___button_7 = value;
	}

	inline static int32_t get_offset_of_downX_8() { return static_cast<int32_t>(offsetof(TouchInfo_t555774085, ___downX_8)); }
	inline float get_downX_8() const { return ___downX_8; }
	inline float* get_address_of_downX_8() { return &___downX_8; }
	inline void set_downX_8(float value)
	{
		___downX_8 = value;
	}

	inline static int32_t get_offset_of_downY_9() { return static_cast<int32_t>(offsetof(TouchInfo_t555774085, ___downY_9)); }
	inline float get_downY_9() const { return ___downY_9; }
	inline float* get_address_of_downY_9() { return &___downY_9; }
	inline void set_downY_9(float value)
	{
		___downY_9 = value;
	}

	inline static int32_t get_offset_of_began_10() { return static_cast<int32_t>(offsetof(TouchInfo_t555774085, ___began_10)); }
	inline bool get_began_10() const { return ___began_10; }
	inline bool* get_address_of_began_10() { return &___began_10; }
	inline void set_began_10(bool value)
	{
		___began_10 = value;
	}

	inline static int32_t get_offset_of_clickCancelled_11() { return static_cast<int32_t>(offsetof(TouchInfo_t555774085, ___clickCancelled_11)); }
	inline bool get_clickCancelled_11() const { return ___clickCancelled_11; }
	inline bool* get_address_of_clickCancelled_11() { return &___clickCancelled_11; }
	inline void set_clickCancelled_11(bool value)
	{
		___clickCancelled_11 = value;
	}

	inline static int32_t get_offset_of_lastClickTime_12() { return static_cast<int32_t>(offsetof(TouchInfo_t555774085, ___lastClickTime_12)); }
	inline float get_lastClickTime_12() const { return ___lastClickTime_12; }
	inline float* get_address_of_lastClickTime_12() { return &___lastClickTime_12; }
	inline void set_lastClickTime_12(float value)
	{
		___lastClickTime_12 = value;
	}

	inline static int32_t get_offset_of_target_13() { return static_cast<int32_t>(offsetof(TouchInfo_t555774085, ___target_13)); }
	inline DisplayObject_t1069768653 * get_target_13() const { return ___target_13; }
	inline DisplayObject_t1069768653 ** get_address_of_target_13() { return &___target_13; }
	inline void set_target_13(DisplayObject_t1069768653 * value)
	{
		___target_13 = value;
		Il2CppCodeGenWriteBarrier(&___target_13, value);
	}

	inline static int32_t get_offset_of_downTargets_14() { return static_cast<int32_t>(offsetof(TouchInfo_t555774085, ___downTargets_14)); }
	inline List_1_t438889785 * get_downTargets_14() const { return ___downTargets_14; }
	inline List_1_t438889785 ** get_address_of_downTargets_14() { return &___downTargets_14; }
	inline void set_downTargets_14(List_1_t438889785 * value)
	{
		___downTargets_14 = value;
		Il2CppCodeGenWriteBarrier(&___downTargets_14, value);
	}

	inline static int32_t get_offset_of_lastRollOver_15() { return static_cast<int32_t>(offsetof(TouchInfo_t555774085, ___lastRollOver_15)); }
	inline DisplayObject_t1069768653 * get_lastRollOver_15() const { return ___lastRollOver_15; }
	inline DisplayObject_t1069768653 ** get_address_of_lastRollOver_15() { return &___lastRollOver_15; }
	inline void set_lastRollOver_15(DisplayObject_t1069768653 * value)
	{
		___lastRollOver_15 = value;
		Il2CppCodeGenWriteBarrier(&___lastRollOver_15, value);
	}

	inline static int32_t get_offset_of_touchEndMonitors_16() { return static_cast<int32_t>(offsetof(TouchInfo_t555774085, ___touchEndMonitors_16)); }
	inline List_1_t3437536317 * get_touchEndMonitors_16() const { return ___touchEndMonitors_16; }
	inline List_1_t3437536317 ** get_address_of_touchEndMonitors_16() { return &___touchEndMonitors_16; }
	inline void set_touchEndMonitors_16(List_1_t3437536317 * value)
	{
		___touchEndMonitors_16 = value;
		Il2CppCodeGenWriteBarrier(&___touchEndMonitors_16, value);
	}

	inline static int32_t get_offset_of_evt_17() { return static_cast<int32_t>(offsetof(TouchInfo_t555774085, ___evt_17)); }
	inline InputEvent_t3297021522 * get_evt_17() const { return ___evt_17; }
	inline InputEvent_t3297021522 ** get_address_of_evt_17() { return &___evt_17; }
	inline void set_evt_17(InputEvent_t3297021522 * value)
	{
		___evt_17 = value;
		Il2CppCodeGenWriteBarrier(&___evt_17, value);
	}
};

struct TouchInfo_t555774085_StaticFields
{
public:
	// System.Collections.Generic.List`1<FairyGUI.EventBridge> FairyGUI.TouchInfo::sHelperChain
	List_1_t39405453 * ___sHelperChain_18;

public:
	inline static int32_t get_offset_of_sHelperChain_18() { return static_cast<int32_t>(offsetof(TouchInfo_t555774085_StaticFields, ___sHelperChain_18)); }
	inline List_1_t39405453 * get_sHelperChain_18() const { return ___sHelperChain_18; }
	inline List_1_t39405453 ** get_address_of_sHelperChain_18() { return &___sHelperChain_18; }
	inline void set_sHelperChain_18(List_1_t39405453 * value)
	{
		___sHelperChain_18 = value;
		Il2CppCodeGenWriteBarrier(&___sHelperChain_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

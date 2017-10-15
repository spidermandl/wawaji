#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;
// FairyGUI.GComponent
struct GComponent_t4106136290;
// System.Collections.Generic.List`1<FairyGUI.TransitionItem>
struct List_1_t2666021510;
// FairyGUI.PlayCompleteCallback
struct PlayCompleteCallback_t2531407428;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.Transition
struct  Transition_t1579694045  : public Il2CppObject
{
public:
	// System.String FairyGUI.Transition::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// System.Int32 FairyGUI.Transition::autoPlayRepeat
	int32_t ___autoPlayRepeat_1;
	// System.Single FairyGUI.Transition::autoPlayDelay
	float ___autoPlayDelay_2;
	// System.Boolean FairyGUI.Transition::invalidateBatchingEveryFrame
	bool ___invalidateBatchingEveryFrame_3;
	// FairyGUI.GComponent FairyGUI.Transition::_owner
	GComponent_t4106136290 * ____owner_4;
	// System.Collections.Generic.List`1<FairyGUI.TransitionItem> FairyGUI.Transition::_items
	List_1_t2666021510 * ____items_5;
	// System.Int32 FairyGUI.Transition::_totalTimes
	int32_t ____totalTimes_6;
	// System.Int32 FairyGUI.Transition::_totalTasks
	int32_t ____totalTasks_7;
	// System.Boolean FairyGUI.Transition::_playing
	bool ____playing_8;
	// System.Single FairyGUI.Transition::_ownerBaseX
	float ____ownerBaseX_9;
	// System.Single FairyGUI.Transition::_ownerBaseY
	float ____ownerBaseY_10;
	// FairyGUI.PlayCompleteCallback FairyGUI.Transition::_onComplete
	PlayCompleteCallback_t2531407428 * ____onComplete_11;
	// System.Int32 FairyGUI.Transition::_options
	int32_t ____options_12;
	// System.Boolean FairyGUI.Transition::_reversed
	bool ____reversed_13;
	// System.Single FairyGUI.Transition::_maxTime
	float ____maxTime_14;
	// System.Boolean FairyGUI.Transition::_autoPlay
	bool ____autoPlay_15;
	// System.Single FairyGUI.Transition::_timeScale
	float ____timeScale_16;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Transition_t1579694045, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CnameU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_autoPlayRepeat_1() { return static_cast<int32_t>(offsetof(Transition_t1579694045, ___autoPlayRepeat_1)); }
	inline int32_t get_autoPlayRepeat_1() const { return ___autoPlayRepeat_1; }
	inline int32_t* get_address_of_autoPlayRepeat_1() { return &___autoPlayRepeat_1; }
	inline void set_autoPlayRepeat_1(int32_t value)
	{
		___autoPlayRepeat_1 = value;
	}

	inline static int32_t get_offset_of_autoPlayDelay_2() { return static_cast<int32_t>(offsetof(Transition_t1579694045, ___autoPlayDelay_2)); }
	inline float get_autoPlayDelay_2() const { return ___autoPlayDelay_2; }
	inline float* get_address_of_autoPlayDelay_2() { return &___autoPlayDelay_2; }
	inline void set_autoPlayDelay_2(float value)
	{
		___autoPlayDelay_2 = value;
	}

	inline static int32_t get_offset_of_invalidateBatchingEveryFrame_3() { return static_cast<int32_t>(offsetof(Transition_t1579694045, ___invalidateBatchingEveryFrame_3)); }
	inline bool get_invalidateBatchingEveryFrame_3() const { return ___invalidateBatchingEveryFrame_3; }
	inline bool* get_address_of_invalidateBatchingEveryFrame_3() { return &___invalidateBatchingEveryFrame_3; }
	inline void set_invalidateBatchingEveryFrame_3(bool value)
	{
		___invalidateBatchingEveryFrame_3 = value;
	}

	inline static int32_t get_offset_of__owner_4() { return static_cast<int32_t>(offsetof(Transition_t1579694045, ____owner_4)); }
	inline GComponent_t4106136290 * get__owner_4() const { return ____owner_4; }
	inline GComponent_t4106136290 ** get_address_of__owner_4() { return &____owner_4; }
	inline void set__owner_4(GComponent_t4106136290 * value)
	{
		____owner_4 = value;
		Il2CppCodeGenWriteBarrier(&____owner_4, value);
	}

	inline static int32_t get_offset_of__items_5() { return static_cast<int32_t>(offsetof(Transition_t1579694045, ____items_5)); }
	inline List_1_t2666021510 * get__items_5() const { return ____items_5; }
	inline List_1_t2666021510 ** get_address_of__items_5() { return &____items_5; }
	inline void set__items_5(List_1_t2666021510 * value)
	{
		____items_5 = value;
		Il2CppCodeGenWriteBarrier(&____items_5, value);
	}

	inline static int32_t get_offset_of__totalTimes_6() { return static_cast<int32_t>(offsetof(Transition_t1579694045, ____totalTimes_6)); }
	inline int32_t get__totalTimes_6() const { return ____totalTimes_6; }
	inline int32_t* get_address_of__totalTimes_6() { return &____totalTimes_6; }
	inline void set__totalTimes_6(int32_t value)
	{
		____totalTimes_6 = value;
	}

	inline static int32_t get_offset_of__totalTasks_7() { return static_cast<int32_t>(offsetof(Transition_t1579694045, ____totalTasks_7)); }
	inline int32_t get__totalTasks_7() const { return ____totalTasks_7; }
	inline int32_t* get_address_of__totalTasks_7() { return &____totalTasks_7; }
	inline void set__totalTasks_7(int32_t value)
	{
		____totalTasks_7 = value;
	}

	inline static int32_t get_offset_of__playing_8() { return static_cast<int32_t>(offsetof(Transition_t1579694045, ____playing_8)); }
	inline bool get__playing_8() const { return ____playing_8; }
	inline bool* get_address_of__playing_8() { return &____playing_8; }
	inline void set__playing_8(bool value)
	{
		____playing_8 = value;
	}

	inline static int32_t get_offset_of__ownerBaseX_9() { return static_cast<int32_t>(offsetof(Transition_t1579694045, ____ownerBaseX_9)); }
	inline float get__ownerBaseX_9() const { return ____ownerBaseX_9; }
	inline float* get_address_of__ownerBaseX_9() { return &____ownerBaseX_9; }
	inline void set__ownerBaseX_9(float value)
	{
		____ownerBaseX_9 = value;
	}

	inline static int32_t get_offset_of__ownerBaseY_10() { return static_cast<int32_t>(offsetof(Transition_t1579694045, ____ownerBaseY_10)); }
	inline float get__ownerBaseY_10() const { return ____ownerBaseY_10; }
	inline float* get_address_of__ownerBaseY_10() { return &____ownerBaseY_10; }
	inline void set__ownerBaseY_10(float value)
	{
		____ownerBaseY_10 = value;
	}

	inline static int32_t get_offset_of__onComplete_11() { return static_cast<int32_t>(offsetof(Transition_t1579694045, ____onComplete_11)); }
	inline PlayCompleteCallback_t2531407428 * get__onComplete_11() const { return ____onComplete_11; }
	inline PlayCompleteCallback_t2531407428 ** get_address_of__onComplete_11() { return &____onComplete_11; }
	inline void set__onComplete_11(PlayCompleteCallback_t2531407428 * value)
	{
		____onComplete_11 = value;
		Il2CppCodeGenWriteBarrier(&____onComplete_11, value);
	}

	inline static int32_t get_offset_of__options_12() { return static_cast<int32_t>(offsetof(Transition_t1579694045, ____options_12)); }
	inline int32_t get__options_12() const { return ____options_12; }
	inline int32_t* get_address_of__options_12() { return &____options_12; }
	inline void set__options_12(int32_t value)
	{
		____options_12 = value;
	}

	inline static int32_t get_offset_of__reversed_13() { return static_cast<int32_t>(offsetof(Transition_t1579694045, ____reversed_13)); }
	inline bool get__reversed_13() const { return ____reversed_13; }
	inline bool* get_address_of__reversed_13() { return &____reversed_13; }
	inline void set__reversed_13(bool value)
	{
		____reversed_13 = value;
	}

	inline static int32_t get_offset_of__maxTime_14() { return static_cast<int32_t>(offsetof(Transition_t1579694045, ____maxTime_14)); }
	inline float get__maxTime_14() const { return ____maxTime_14; }
	inline float* get_address_of__maxTime_14() { return &____maxTime_14; }
	inline void set__maxTime_14(float value)
	{
		____maxTime_14 = value;
	}

	inline static int32_t get_offset_of__autoPlay_15() { return static_cast<int32_t>(offsetof(Transition_t1579694045, ____autoPlay_15)); }
	inline bool get__autoPlay_15() const { return ____autoPlay_15; }
	inline bool* get_address_of__autoPlay_15() { return &____autoPlay_15; }
	inline void set__autoPlay_15(bool value)
	{
		____autoPlay_15 = value;
	}

	inline static int32_t get_offset_of__timeScale_16() { return static_cast<int32_t>(offsetof(Transition_t1579694045, ____timeScale_16)); }
	inline float get__timeScale_16() const { return ____timeScale_16; }
	inline float* get_address_of__timeScale_16() { return &____timeScale_16; }
	inline void set__timeScale_16(float value)
	{
		____timeScale_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

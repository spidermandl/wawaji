#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "FairyGUI_FairyGUI_ControllerAction280735284.h"

// System.String
struct String_t;
// FairyGUI.Transition
struct Transition_t1579694045;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.PlayTransitionAction
struct  PlayTransitionAction_t41096027  : public ControllerAction_t280735284
{
public:
	// System.String FairyGUI.PlayTransitionAction::transitionName
	String_t* ___transitionName_2;
	// System.Int32 FairyGUI.PlayTransitionAction::repeat
	int32_t ___repeat_3;
	// System.Single FairyGUI.PlayTransitionAction::delay
	float ___delay_4;
	// System.Boolean FairyGUI.PlayTransitionAction::stopOnExit
	bool ___stopOnExit_5;
	// FairyGUI.Transition FairyGUI.PlayTransitionAction::_currentTransition
	Transition_t1579694045 * ____currentTransition_6;

public:
	inline static int32_t get_offset_of_transitionName_2() { return static_cast<int32_t>(offsetof(PlayTransitionAction_t41096027, ___transitionName_2)); }
	inline String_t* get_transitionName_2() const { return ___transitionName_2; }
	inline String_t** get_address_of_transitionName_2() { return &___transitionName_2; }
	inline void set_transitionName_2(String_t* value)
	{
		___transitionName_2 = value;
		Il2CppCodeGenWriteBarrier(&___transitionName_2, value);
	}

	inline static int32_t get_offset_of_repeat_3() { return static_cast<int32_t>(offsetof(PlayTransitionAction_t41096027, ___repeat_3)); }
	inline int32_t get_repeat_3() const { return ___repeat_3; }
	inline int32_t* get_address_of_repeat_3() { return &___repeat_3; }
	inline void set_repeat_3(int32_t value)
	{
		___repeat_3 = value;
	}

	inline static int32_t get_offset_of_delay_4() { return static_cast<int32_t>(offsetof(PlayTransitionAction_t41096027, ___delay_4)); }
	inline float get_delay_4() const { return ___delay_4; }
	inline float* get_address_of_delay_4() { return &___delay_4; }
	inline void set_delay_4(float value)
	{
		___delay_4 = value;
	}

	inline static int32_t get_offset_of_stopOnExit_5() { return static_cast<int32_t>(offsetof(PlayTransitionAction_t41096027, ___stopOnExit_5)); }
	inline bool get_stopOnExit_5() const { return ___stopOnExit_5; }
	inline bool* get_address_of_stopOnExit_5() { return &___stopOnExit_5; }
	inline void set_stopOnExit_5(bool value)
	{
		___stopOnExit_5 = value;
	}

	inline static int32_t get_offset_of__currentTransition_6() { return static_cast<int32_t>(offsetof(PlayTransitionAction_t41096027, ____currentTransition_6)); }
	inline Transition_t1579694045 * get__currentTransition_6() const { return ____currentTransition_6; }
	inline Transition_t1579694045 ** get_address_of__currentTransition_6() { return &____currentTransition_6; }
	inline void set__currentTransition_6(Transition_t1579694045 * value)
	{
		____currentTransition_6 = value;
		Il2CppCodeGenWriteBarrier(&____currentTransition_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

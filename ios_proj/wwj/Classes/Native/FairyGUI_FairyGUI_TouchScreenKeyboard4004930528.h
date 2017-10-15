#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t601950206;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.TouchScreenKeyboard
struct  TouchScreenKeyboard_t4004930528  : public Il2CppObject
{
public:
	// UnityEngine.TouchScreenKeyboard FairyGUI.TouchScreenKeyboard::_keyboard
	TouchScreenKeyboard_t601950206 * ____keyboard_0;

public:
	inline static int32_t get_offset_of__keyboard_0() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_t4004930528, ____keyboard_0)); }
	inline TouchScreenKeyboard_t601950206 * get__keyboard_0() const { return ____keyboard_0; }
	inline TouchScreenKeyboard_t601950206 ** get_address_of__keyboard_0() { return &____keyboard_0; }
	inline void set__keyboard_0(TouchScreenKeyboard_t601950206 * value)
	{
		____keyboard_0 = value;
		Il2CppCodeGenWriteBarrier(&____keyboard_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

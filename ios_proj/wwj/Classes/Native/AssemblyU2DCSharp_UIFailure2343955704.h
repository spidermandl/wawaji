#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "FairyGUI_FairyGUI_Window252217058.h"

// FairyGUI.EventCallback0
struct EventCallback0_t422277839;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIFailure
struct  UIFailure_t2343955704  : public Window_t252217058
{
public:
	// FairyGUI.EventCallback0 UIFailure::_onConfirm
	EventCallback0_t422277839 * ____onConfirm_104;

public:
	inline static int32_t get_offset_of__onConfirm_104() { return static_cast<int32_t>(offsetof(UIFailure_t2343955704, ____onConfirm_104)); }
	inline EventCallback0_t422277839 * get__onConfirm_104() const { return ____onConfirm_104; }
	inline EventCallback0_t422277839 ** get_address_of__onConfirm_104() { return &____onConfirm_104; }
	inline void set__onConfirm_104(EventCallback0_t422277839 * value)
	{
		____onConfirm_104 = value;
		Il2CppCodeGenWriteBarrier(&____onConfirm_104, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

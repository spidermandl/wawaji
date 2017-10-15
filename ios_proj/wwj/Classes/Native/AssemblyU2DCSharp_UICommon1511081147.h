#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_BaseWindow1983497523.h"

// FairyGUI.EventCallback0
struct EventCallback0_t422277839;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UICommon
struct  UICommon_t1511081147  : public BaseWindow_t1983497523
{
public:
	// FairyGUI.EventCallback0 UICommon::_confirm
	EventCallback0_t422277839 * ____confirm_104;

public:
	inline static int32_t get_offset_of__confirm_104() { return static_cast<int32_t>(offsetof(UICommon_t1511081147, ____confirm_104)); }
	inline EventCallback0_t422277839 * get__confirm_104() const { return ____confirm_104; }
	inline EventCallback0_t422277839 ** get_address_of__confirm_104() { return &____confirm_104; }
	inline void set__confirm_104(EventCallback0_t422277839 * value)
	{
		____confirm_104 = value;
		Il2CppCodeGenWriteBarrier(&____confirm_104, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

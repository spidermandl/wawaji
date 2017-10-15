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

// UIConfirm
struct  UIConfirm_t2687705270  : public Window_t252217058
{
public:
	// FairyGUI.EventCallback0 UIConfirm::_onConfirm
	EventCallback0_t422277839 * ____onConfirm_104;
	// FairyGUI.EventCallback0 UIConfirm::_onCancel
	EventCallback0_t422277839 * ____onCancel_105;

public:
	inline static int32_t get_offset_of__onConfirm_104() { return static_cast<int32_t>(offsetof(UIConfirm_t2687705270, ____onConfirm_104)); }
	inline EventCallback0_t422277839 * get__onConfirm_104() const { return ____onConfirm_104; }
	inline EventCallback0_t422277839 ** get_address_of__onConfirm_104() { return &____onConfirm_104; }
	inline void set__onConfirm_104(EventCallback0_t422277839 * value)
	{
		____onConfirm_104 = value;
		Il2CppCodeGenWriteBarrier(&____onConfirm_104, value);
	}

	inline static int32_t get_offset_of__onCancel_105() { return static_cast<int32_t>(offsetof(UIConfirm_t2687705270, ____onCancel_105)); }
	inline EventCallback0_t422277839 * get__onCancel_105() const { return ____onCancel_105; }
	inline EventCallback0_t422277839 ** get_address_of__onCancel_105() { return &____onCancel_105; }
	inline void set__onCancel_105(EventCallback0_t422277839 * value)
	{
		____onCancel_105 = value;
		Il2CppCodeGenWriteBarrier(&____onCancel_105, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

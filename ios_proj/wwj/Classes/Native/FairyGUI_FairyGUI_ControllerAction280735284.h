#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String[]
struct StringU5BU5D_t1642385972;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.ControllerAction
struct  ControllerAction_t280735284  : public Il2CppObject
{
public:
	// System.String[] FairyGUI.ControllerAction::fromPage
	StringU5BU5D_t1642385972* ___fromPage_0;
	// System.String[] FairyGUI.ControllerAction::toPage
	StringU5BU5D_t1642385972* ___toPage_1;

public:
	inline static int32_t get_offset_of_fromPage_0() { return static_cast<int32_t>(offsetof(ControllerAction_t280735284, ___fromPage_0)); }
	inline StringU5BU5D_t1642385972* get_fromPage_0() const { return ___fromPage_0; }
	inline StringU5BU5D_t1642385972** get_address_of_fromPage_0() { return &___fromPage_0; }
	inline void set_fromPage_0(StringU5BU5D_t1642385972* value)
	{
		___fromPage_0 = value;
		Il2CppCodeGenWriteBarrier(&___fromPage_0, value);
	}

	inline static int32_t get_offset_of_toPage_1() { return static_cast<int32_t>(offsetof(ControllerAction_t280735284, ___toPage_1)); }
	inline StringU5BU5D_t1642385972* get_toPage_1() const { return ___toPage_1; }
	inline StringU5BU5D_t1642385972** get_address_of_toPage_1() { return &___toPage_1; }
	inline void set_toPage_1(StringU5BU5D_t1642385972* value)
	{
		___toPage_1 = value;
		Il2CppCodeGenWriteBarrier(&___toPage_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

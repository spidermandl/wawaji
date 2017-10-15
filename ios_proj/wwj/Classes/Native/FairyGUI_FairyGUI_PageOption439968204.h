#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// FairyGUI.Controller
struct Controller_t4051336914;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.PageOption
struct  PageOption_t439968204  : public Il2CppObject
{
public:
	// FairyGUI.Controller FairyGUI.PageOption::_controller
	Controller_t4051336914 * ____controller_0;
	// System.String FairyGUI.PageOption::_id
	String_t* ____id_1;

public:
	inline static int32_t get_offset_of__controller_0() { return static_cast<int32_t>(offsetof(PageOption_t439968204, ____controller_0)); }
	inline Controller_t4051336914 * get__controller_0() const { return ____controller_0; }
	inline Controller_t4051336914 ** get_address_of__controller_0() { return &____controller_0; }
	inline void set__controller_0(Controller_t4051336914 * value)
	{
		____controller_0 = value;
		Il2CppCodeGenWriteBarrier(&____controller_0, value);
	}

	inline static int32_t get_offset_of__id_1() { return static_cast<int32_t>(offsetof(PageOption_t439968204, ____id_1)); }
	inline String_t* get__id_1() const { return ____id_1; }
	inline String_t** get_address_of__id_1() { return &____id_1; }
	inline void set__id_1(String_t* value)
	{
		____id_1 = value;
		Il2CppCodeGenWriteBarrier(&____id_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// FairyGUI.TimerCallback
struct TimerCallback_t3558405784;
// FairyGUI.Anymous_T
struct Anymous_T_t1729777971;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<FairyGUI.TimerCallback,FairyGUI.Anymous_T>
struct  KeyValuePair_2_t2676074316 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	TimerCallback_t3558405784 * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Anymous_T_t1729777971 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2676074316, ___key_0)); }
	inline TimerCallback_t3558405784 * get_key_0() const { return ___key_0; }
	inline TimerCallback_t3558405784 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(TimerCallback_t3558405784 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2676074316, ___value_1)); }
	inline Anymous_T_t1729777971 * get_value_1() const { return ___value_1; }
	inline Anymous_T_t1729777971 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Anymous_T_t1729777971 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

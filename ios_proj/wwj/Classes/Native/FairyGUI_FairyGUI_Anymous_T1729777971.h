#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// FairyGUI.TimerCallback
struct TimerCallback_t3558405784;
// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.Anymous_T
struct  Anymous_T_t1729777971  : public Il2CppObject
{
public:
	// System.Single FairyGUI.Anymous_T::interval
	float ___interval_0;
	// System.Int32 FairyGUI.Anymous_T::repeat
	int32_t ___repeat_1;
	// FairyGUI.TimerCallback FairyGUI.Anymous_T::callback
	TimerCallback_t3558405784 * ___callback_2;
	// System.Object FairyGUI.Anymous_T::param
	Il2CppObject * ___param_3;
	// System.Single FairyGUI.Anymous_T::elapsed
	float ___elapsed_4;
	// System.Boolean FairyGUI.Anymous_T::deleted
	bool ___deleted_5;

public:
	inline static int32_t get_offset_of_interval_0() { return static_cast<int32_t>(offsetof(Anymous_T_t1729777971, ___interval_0)); }
	inline float get_interval_0() const { return ___interval_0; }
	inline float* get_address_of_interval_0() { return &___interval_0; }
	inline void set_interval_0(float value)
	{
		___interval_0 = value;
	}

	inline static int32_t get_offset_of_repeat_1() { return static_cast<int32_t>(offsetof(Anymous_T_t1729777971, ___repeat_1)); }
	inline int32_t get_repeat_1() const { return ___repeat_1; }
	inline int32_t* get_address_of_repeat_1() { return &___repeat_1; }
	inline void set_repeat_1(int32_t value)
	{
		___repeat_1 = value;
	}

	inline static int32_t get_offset_of_callback_2() { return static_cast<int32_t>(offsetof(Anymous_T_t1729777971, ___callback_2)); }
	inline TimerCallback_t3558405784 * get_callback_2() const { return ___callback_2; }
	inline TimerCallback_t3558405784 ** get_address_of_callback_2() { return &___callback_2; }
	inline void set_callback_2(TimerCallback_t3558405784 * value)
	{
		___callback_2 = value;
		Il2CppCodeGenWriteBarrier(&___callback_2, value);
	}

	inline static int32_t get_offset_of_param_3() { return static_cast<int32_t>(offsetof(Anymous_T_t1729777971, ___param_3)); }
	inline Il2CppObject * get_param_3() const { return ___param_3; }
	inline Il2CppObject ** get_address_of_param_3() { return &___param_3; }
	inline void set_param_3(Il2CppObject * value)
	{
		___param_3 = value;
		Il2CppCodeGenWriteBarrier(&___param_3, value);
	}

	inline static int32_t get_offset_of_elapsed_4() { return static_cast<int32_t>(offsetof(Anymous_T_t1729777971, ___elapsed_4)); }
	inline float get_elapsed_4() const { return ___elapsed_4; }
	inline float* get_address_of_elapsed_4() { return &___elapsed_4; }
	inline void set_elapsed_4(float value)
	{
		___elapsed_4 = value;
	}

	inline static int32_t get_offset_of_deleted_5() { return static_cast<int32_t>(offsetof(Anymous_T_t1729777971, ___deleted_5)); }
	inline bool get_deleted_5() const { return ___deleted_5; }
	inline bool* get_address_of_deleted_5() { return &___deleted_5; }
	inline void set_deleted_5(bool value)
	{
		___deleted_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.Generic.Dictionary`2<FairyGUI.TimerCallback,FairyGUI.Anymous_T>
struct Dictionary_2_t623761798;
// System.Collections.Generic.List`1<FairyGUI.Anymous_T>
struct List_1_t1098899103;
// FairyGUI.TimersEngine
struct TimersEngine_t2765131834;
// FairyGUI.Timers
struct Timers_t4121630240;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.Timers
struct  Timers_t4121630240  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<FairyGUI.TimerCallback,FairyGUI.Anymous_T> FairyGUI.Timers::_items
	Dictionary_2_t623761798 * ____items_3;
	// System.Collections.Generic.Dictionary`2<FairyGUI.TimerCallback,FairyGUI.Anymous_T> FairyGUI.Timers::_toAdd
	Dictionary_2_t623761798 * ____toAdd_4;
	// System.Collections.Generic.List`1<FairyGUI.Anymous_T> FairyGUI.Timers::_toRemove
	List_1_t1098899103 * ____toRemove_5;
	// System.Collections.Generic.List`1<FairyGUI.Anymous_T> FairyGUI.Timers::_pool
	List_1_t1098899103 * ____pool_6;
	// System.Single FairyGUI.Timers::_lastTime
	float ____lastTime_7;
	// FairyGUI.TimersEngine FairyGUI.Timers::_engine
	TimersEngine_t2765131834 * ____engine_8;

public:
	inline static int32_t get_offset_of__items_3() { return static_cast<int32_t>(offsetof(Timers_t4121630240, ____items_3)); }
	inline Dictionary_2_t623761798 * get__items_3() const { return ____items_3; }
	inline Dictionary_2_t623761798 ** get_address_of__items_3() { return &____items_3; }
	inline void set__items_3(Dictionary_2_t623761798 * value)
	{
		____items_3 = value;
		Il2CppCodeGenWriteBarrier(&____items_3, value);
	}

	inline static int32_t get_offset_of__toAdd_4() { return static_cast<int32_t>(offsetof(Timers_t4121630240, ____toAdd_4)); }
	inline Dictionary_2_t623761798 * get__toAdd_4() const { return ____toAdd_4; }
	inline Dictionary_2_t623761798 ** get_address_of__toAdd_4() { return &____toAdd_4; }
	inline void set__toAdd_4(Dictionary_2_t623761798 * value)
	{
		____toAdd_4 = value;
		Il2CppCodeGenWriteBarrier(&____toAdd_4, value);
	}

	inline static int32_t get_offset_of__toRemove_5() { return static_cast<int32_t>(offsetof(Timers_t4121630240, ____toRemove_5)); }
	inline List_1_t1098899103 * get__toRemove_5() const { return ____toRemove_5; }
	inline List_1_t1098899103 ** get_address_of__toRemove_5() { return &____toRemove_5; }
	inline void set__toRemove_5(List_1_t1098899103 * value)
	{
		____toRemove_5 = value;
		Il2CppCodeGenWriteBarrier(&____toRemove_5, value);
	}

	inline static int32_t get_offset_of__pool_6() { return static_cast<int32_t>(offsetof(Timers_t4121630240, ____pool_6)); }
	inline List_1_t1098899103 * get__pool_6() const { return ____pool_6; }
	inline List_1_t1098899103 ** get_address_of__pool_6() { return &____pool_6; }
	inline void set__pool_6(List_1_t1098899103 * value)
	{
		____pool_6 = value;
		Il2CppCodeGenWriteBarrier(&____pool_6, value);
	}

	inline static int32_t get_offset_of__lastTime_7() { return static_cast<int32_t>(offsetof(Timers_t4121630240, ____lastTime_7)); }
	inline float get__lastTime_7() const { return ____lastTime_7; }
	inline float* get_address_of__lastTime_7() { return &____lastTime_7; }
	inline void set__lastTime_7(float value)
	{
		____lastTime_7 = value;
	}

	inline static int32_t get_offset_of__engine_8() { return static_cast<int32_t>(offsetof(Timers_t4121630240, ____engine_8)); }
	inline TimersEngine_t2765131834 * get__engine_8() const { return ____engine_8; }
	inline TimersEngine_t2765131834 ** get_address_of__engine_8() { return &____engine_8; }
	inline void set__engine_8(TimersEngine_t2765131834 * value)
	{
		____engine_8 = value;
		Il2CppCodeGenWriteBarrier(&____engine_8, value);
	}
};

struct Timers_t4121630240_StaticFields
{
public:
	// System.Int32 FairyGUI.Timers::repeat
	int32_t ___repeat_0;
	// System.Single FairyGUI.Timers::time
	float ___time_1;
	// UnityEngine.GameObject FairyGUI.Timers::gameObject
	GameObject_t1756533147 * ___gameObject_2;
	// FairyGUI.Timers FairyGUI.Timers::_inst
	Timers_t4121630240 * ____inst_9;

public:
	inline static int32_t get_offset_of_repeat_0() { return static_cast<int32_t>(offsetof(Timers_t4121630240_StaticFields, ___repeat_0)); }
	inline int32_t get_repeat_0() const { return ___repeat_0; }
	inline int32_t* get_address_of_repeat_0() { return &___repeat_0; }
	inline void set_repeat_0(int32_t value)
	{
		___repeat_0 = value;
	}

	inline static int32_t get_offset_of_time_1() { return static_cast<int32_t>(offsetof(Timers_t4121630240_StaticFields, ___time_1)); }
	inline float get_time_1() const { return ___time_1; }
	inline float* get_address_of_time_1() { return &___time_1; }
	inline void set_time_1(float value)
	{
		___time_1 = value;
	}

	inline static int32_t get_offset_of_gameObject_2() { return static_cast<int32_t>(offsetof(Timers_t4121630240_StaticFields, ___gameObject_2)); }
	inline GameObject_t1756533147 * get_gameObject_2() const { return ___gameObject_2; }
	inline GameObject_t1756533147 ** get_address_of_gameObject_2() { return &___gameObject_2; }
	inline void set_gameObject_2(GameObject_t1756533147 * value)
	{
		___gameObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_2, value);
	}

	inline static int32_t get_offset_of__inst_9() { return static_cast<int32_t>(offsetof(Timers_t4121630240_StaticFields, ____inst_9)); }
	inline Timers_t4121630240 * get__inst_9() const { return ____inst_9; }
	inline Timers_t4121630240 ** get_address_of__inst_9() { return &____inst_9; }
	inline void set__inst_9(Timers_t4121630240 * value)
	{
		____inst_9 = value;
		Il2CppCodeGenWriteBarrier(&____inst_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

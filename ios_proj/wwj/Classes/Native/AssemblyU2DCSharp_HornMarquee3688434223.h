#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_HornMarquee_MarqueeState1897317493.h"

// FairyGUI.GList
struct GList_t2527012171;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HornMarquee
struct  HornMarquee_t3688434223  : public Il2CppObject
{
public:
	// FairyGUI.GList HornMarquee::_list
	GList_t2527012171 * ____list_0;
	// System.Collections.Generic.List`1<System.String> HornMarquee::data
	List_1_t1398341365 * ___data_1;
	// System.Int32 HornMarquee::current_index
	int32_t ___current_index_2;
	// HornMarquee/MarqueeState HornMarquee::state
	int32_t ___state_3;

public:
	inline static int32_t get_offset_of__list_0() { return static_cast<int32_t>(offsetof(HornMarquee_t3688434223, ____list_0)); }
	inline GList_t2527012171 * get__list_0() const { return ____list_0; }
	inline GList_t2527012171 ** get_address_of__list_0() { return &____list_0; }
	inline void set__list_0(GList_t2527012171 * value)
	{
		____list_0 = value;
		Il2CppCodeGenWriteBarrier(&____list_0, value);
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(HornMarquee_t3688434223, ___data_1)); }
	inline List_1_t1398341365 * get_data_1() const { return ___data_1; }
	inline List_1_t1398341365 ** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(List_1_t1398341365 * value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier(&___data_1, value);
	}

	inline static int32_t get_offset_of_current_index_2() { return static_cast<int32_t>(offsetof(HornMarquee_t3688434223, ___current_index_2)); }
	inline int32_t get_current_index_2() const { return ___current_index_2; }
	inline int32_t* get_address_of_current_index_2() { return &___current_index_2; }
	inline void set_current_index_2(int32_t value)
	{
		___current_index_2 = value;
	}

	inline static int32_t get_offset_of_state_3() { return static_cast<int32_t>(offsetof(HornMarquee_t3688434223, ___state_3)); }
	inline int32_t get_state_3() const { return ___state_3; }
	inline int32_t* get_address_of_state_3() { return &___state_3; }
	inline void set_state_3(int32_t value)
	{
		___state_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

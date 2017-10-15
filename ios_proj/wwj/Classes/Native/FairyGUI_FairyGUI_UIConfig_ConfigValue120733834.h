#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.UIConfig/ConfigValue
struct  ConfigValue_t120733834  : public Il2CppObject
{
public:
	// System.Boolean FairyGUI.UIConfig/ConfigValue::valid
	bool ___valid_0;
	// System.String FairyGUI.UIConfig/ConfigValue::s
	String_t* ___s_1;
	// System.Int32 FairyGUI.UIConfig/ConfigValue::i
	int32_t ___i_2;
	// System.Single FairyGUI.UIConfig/ConfigValue::f
	float ___f_3;
	// System.Boolean FairyGUI.UIConfig/ConfigValue::b
	bool ___b_4;
	// UnityEngine.Color FairyGUI.UIConfig/ConfigValue::c
	Color_t2020392075  ___c_5;

public:
	inline static int32_t get_offset_of_valid_0() { return static_cast<int32_t>(offsetof(ConfigValue_t120733834, ___valid_0)); }
	inline bool get_valid_0() const { return ___valid_0; }
	inline bool* get_address_of_valid_0() { return &___valid_0; }
	inline void set_valid_0(bool value)
	{
		___valid_0 = value;
	}

	inline static int32_t get_offset_of_s_1() { return static_cast<int32_t>(offsetof(ConfigValue_t120733834, ___s_1)); }
	inline String_t* get_s_1() const { return ___s_1; }
	inline String_t** get_address_of_s_1() { return &___s_1; }
	inline void set_s_1(String_t* value)
	{
		___s_1 = value;
		Il2CppCodeGenWriteBarrier(&___s_1, value);
	}

	inline static int32_t get_offset_of_i_2() { return static_cast<int32_t>(offsetof(ConfigValue_t120733834, ___i_2)); }
	inline int32_t get_i_2() const { return ___i_2; }
	inline int32_t* get_address_of_i_2() { return &___i_2; }
	inline void set_i_2(int32_t value)
	{
		___i_2 = value;
	}

	inline static int32_t get_offset_of_f_3() { return static_cast<int32_t>(offsetof(ConfigValue_t120733834, ___f_3)); }
	inline float get_f_3() const { return ___f_3; }
	inline float* get_address_of_f_3() { return &___f_3; }
	inline void set_f_3(float value)
	{
		___f_3 = value;
	}

	inline static int32_t get_offset_of_b_4() { return static_cast<int32_t>(offsetof(ConfigValue_t120733834, ___b_4)); }
	inline bool get_b_4() const { return ___b_4; }
	inline bool* get_address_of_b_4() { return &___b_4; }
	inline void set_b_4(bool value)
	{
		___b_4 = value;
	}

	inline static int32_t get_offset_of_c_5() { return static_cast<int32_t>(offsetof(ConfigValue_t120733834, ___c_5)); }
	inline Color_t2020392075  get_c_5() const { return ___c_5; }
	inline Color_t2020392075 * get_address_of_c_5() { return &___c_5; }
	inline void set_c_5(Color_t2020392075  value)
	{
		___c_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

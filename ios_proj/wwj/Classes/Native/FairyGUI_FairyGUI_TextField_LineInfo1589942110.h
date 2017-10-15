#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.Stack`1<FairyGUI.TextField/LineInfo>
struct Stack_1_t2677670264;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.TextField/LineInfo
struct  LineInfo_t1589942110  : public Il2CppObject
{
public:
	// System.Single FairyGUI.TextField/LineInfo::width
	float ___width_0;
	// System.Single FairyGUI.TextField/LineInfo::height
	float ___height_1;
	// System.Single FairyGUI.TextField/LineInfo::textHeight
	float ___textHeight_2;
	// System.Int16 FairyGUI.TextField/LineInfo::charIndex
	int16_t ___charIndex_3;
	// System.Int16 FairyGUI.TextField/LineInfo::charCount
	int16_t ___charCount_4;
	// System.Single FairyGUI.TextField/LineInfo::y
	float ___y_5;
	// System.Single FairyGUI.TextField/LineInfo::y2
	float ___y2_6;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(LineInfo_t1589942110, ___width_0)); }
	inline float get_width_0() const { return ___width_0; }
	inline float* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(float value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(LineInfo_t1589942110, ___height_1)); }
	inline float get_height_1() const { return ___height_1; }
	inline float* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(float value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_textHeight_2() { return static_cast<int32_t>(offsetof(LineInfo_t1589942110, ___textHeight_2)); }
	inline float get_textHeight_2() const { return ___textHeight_2; }
	inline float* get_address_of_textHeight_2() { return &___textHeight_2; }
	inline void set_textHeight_2(float value)
	{
		___textHeight_2 = value;
	}

	inline static int32_t get_offset_of_charIndex_3() { return static_cast<int32_t>(offsetof(LineInfo_t1589942110, ___charIndex_3)); }
	inline int16_t get_charIndex_3() const { return ___charIndex_3; }
	inline int16_t* get_address_of_charIndex_3() { return &___charIndex_3; }
	inline void set_charIndex_3(int16_t value)
	{
		___charIndex_3 = value;
	}

	inline static int32_t get_offset_of_charCount_4() { return static_cast<int32_t>(offsetof(LineInfo_t1589942110, ___charCount_4)); }
	inline int16_t get_charCount_4() const { return ___charCount_4; }
	inline int16_t* get_address_of_charCount_4() { return &___charCount_4; }
	inline void set_charCount_4(int16_t value)
	{
		___charCount_4 = value;
	}

	inline static int32_t get_offset_of_y_5() { return static_cast<int32_t>(offsetof(LineInfo_t1589942110, ___y_5)); }
	inline float get_y_5() const { return ___y_5; }
	inline float* get_address_of_y_5() { return &___y_5; }
	inline void set_y_5(float value)
	{
		___y_5 = value;
	}

	inline static int32_t get_offset_of_y2_6() { return static_cast<int32_t>(offsetof(LineInfo_t1589942110, ___y2_6)); }
	inline float get_y2_6() const { return ___y2_6; }
	inline float* get_address_of_y2_6() { return &___y2_6; }
	inline void set_y2_6(float value)
	{
		___y2_6 = value;
	}
};

struct LineInfo_t1589942110_StaticFields
{
public:
	// System.Collections.Generic.Stack`1<FairyGUI.TextField/LineInfo> FairyGUI.TextField/LineInfo::pool
	Stack_1_t2677670264 * ___pool_7;

public:
	inline static int32_t get_offset_of_pool_7() { return static_cast<int32_t>(offsetof(LineInfo_t1589942110_StaticFields, ___pool_7)); }
	inline Stack_1_t2677670264 * get_pool_7() const { return ___pool_7; }
	inline Stack_1_t2677670264 ** get_address_of_pool_7() { return &___pool_7; }
	inline void set_pool_7(Stack_1_t2677670264 * value)
	{
		___pool_7 = value;
		Il2CppCodeGenWriteBarrier(&___pool_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// FairyGUI.PixelHitTestData
struct PixelHitTestData_t1839285597;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.PixelHitTest
struct  PixelHitTest_t3550689645  : public Il2CppObject
{
public:
	// System.Int32 FairyGUI.PixelHitTest::offsetX
	int32_t ___offsetX_0;
	// System.Int32 FairyGUI.PixelHitTest::offsetY
	int32_t ___offsetY_1;
	// System.Single FairyGUI.PixelHitTest::scaleX
	float ___scaleX_2;
	// System.Single FairyGUI.PixelHitTest::scaleY
	float ___scaleY_3;
	// FairyGUI.PixelHitTestData FairyGUI.PixelHitTest::_data
	PixelHitTestData_t1839285597 * ____data_4;

public:
	inline static int32_t get_offset_of_offsetX_0() { return static_cast<int32_t>(offsetof(PixelHitTest_t3550689645, ___offsetX_0)); }
	inline int32_t get_offsetX_0() const { return ___offsetX_0; }
	inline int32_t* get_address_of_offsetX_0() { return &___offsetX_0; }
	inline void set_offsetX_0(int32_t value)
	{
		___offsetX_0 = value;
	}

	inline static int32_t get_offset_of_offsetY_1() { return static_cast<int32_t>(offsetof(PixelHitTest_t3550689645, ___offsetY_1)); }
	inline int32_t get_offsetY_1() const { return ___offsetY_1; }
	inline int32_t* get_address_of_offsetY_1() { return &___offsetY_1; }
	inline void set_offsetY_1(int32_t value)
	{
		___offsetY_1 = value;
	}

	inline static int32_t get_offset_of_scaleX_2() { return static_cast<int32_t>(offsetof(PixelHitTest_t3550689645, ___scaleX_2)); }
	inline float get_scaleX_2() const { return ___scaleX_2; }
	inline float* get_address_of_scaleX_2() { return &___scaleX_2; }
	inline void set_scaleX_2(float value)
	{
		___scaleX_2 = value;
	}

	inline static int32_t get_offset_of_scaleY_3() { return static_cast<int32_t>(offsetof(PixelHitTest_t3550689645, ___scaleY_3)); }
	inline float get_scaleY_3() const { return ___scaleY_3; }
	inline float* get_address_of_scaleY_3() { return &___scaleY_3; }
	inline void set_scaleY_3(float value)
	{
		___scaleY_3 = value;
	}

	inline static int32_t get_offset_of__data_4() { return static_cast<int32_t>(offsetof(PixelHitTest_t3550689645, ____data_4)); }
	inline PixelHitTestData_t1839285597 * get__data_4() const { return ____data_4; }
	inline PixelHitTestData_t1839285597 ** get_address_of__data_4() { return &____data_4; }
	inline void set__data_4(PixelHitTestData_t1839285597 * value)
	{
		____data_4 = value;
		Il2CppCodeGenWriteBarrier(&____data_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

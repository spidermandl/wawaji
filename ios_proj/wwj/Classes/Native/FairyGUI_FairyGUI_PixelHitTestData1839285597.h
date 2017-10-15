#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.PixelHitTestData
struct  PixelHitTestData_t1839285597  : public Il2CppObject
{
public:
	// System.Int32 FairyGUI.PixelHitTestData::pixelWidth
	int32_t ___pixelWidth_0;
	// System.Single FairyGUI.PixelHitTestData::scale
	float ___scale_1;
	// System.Byte[] FairyGUI.PixelHitTestData::pixels
	ByteU5BU5D_t3397334013* ___pixels_2;

public:
	inline static int32_t get_offset_of_pixelWidth_0() { return static_cast<int32_t>(offsetof(PixelHitTestData_t1839285597, ___pixelWidth_0)); }
	inline int32_t get_pixelWidth_0() const { return ___pixelWidth_0; }
	inline int32_t* get_address_of_pixelWidth_0() { return &___pixelWidth_0; }
	inline void set_pixelWidth_0(int32_t value)
	{
		___pixelWidth_0 = value;
	}

	inline static int32_t get_offset_of_scale_1() { return static_cast<int32_t>(offsetof(PixelHitTestData_t1839285597, ___scale_1)); }
	inline float get_scale_1() const { return ___scale_1; }
	inline float* get_address_of_scale_1() { return &___scale_1; }
	inline void set_scale_1(float value)
	{
		___scale_1 = value;
	}

	inline static int32_t get_offset_of_pixels_2() { return static_cast<int32_t>(offsetof(PixelHitTestData_t1839285597, ___pixels_2)); }
	inline ByteU5BU5D_t3397334013* get_pixels_2() const { return ___pixels_2; }
	inline ByteU5BU5D_t3397334013** get_address_of_pixels_2() { return &___pixels_2; }
	inline void set_pixels_2(ByteU5BU5D_t3397334013* value)
	{
		___pixels_2 = value;
		Il2CppCodeGenWriteBarrier(&___pixels_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

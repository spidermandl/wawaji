#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

// UnityEngine.Vector2[]
struct Vector2U5BU5D_t686124026;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.GlyphInfo
struct  GlyphInfo_t58017296  : public Il2CppObject
{
public:
	// UnityEngine.Rect FairyGUI.GlyphInfo::vert
	Rect_t3681755626  ___vert_0;
	// UnityEngine.Vector2[] FairyGUI.GlyphInfo::uv
	Vector2U5BU5D_t686124026* ___uv_1;
	// System.Single FairyGUI.GlyphInfo::width
	float ___width_2;
	// System.Single FairyGUI.GlyphInfo::height
	float ___height_3;
	// System.Int32 FairyGUI.GlyphInfo::channel
	int32_t ___channel_4;

public:
	inline static int32_t get_offset_of_vert_0() { return static_cast<int32_t>(offsetof(GlyphInfo_t58017296, ___vert_0)); }
	inline Rect_t3681755626  get_vert_0() const { return ___vert_0; }
	inline Rect_t3681755626 * get_address_of_vert_0() { return &___vert_0; }
	inline void set_vert_0(Rect_t3681755626  value)
	{
		___vert_0 = value;
	}

	inline static int32_t get_offset_of_uv_1() { return static_cast<int32_t>(offsetof(GlyphInfo_t58017296, ___uv_1)); }
	inline Vector2U5BU5D_t686124026* get_uv_1() const { return ___uv_1; }
	inline Vector2U5BU5D_t686124026** get_address_of_uv_1() { return &___uv_1; }
	inline void set_uv_1(Vector2U5BU5D_t686124026* value)
	{
		___uv_1 = value;
		Il2CppCodeGenWriteBarrier(&___uv_1, value);
	}

	inline static int32_t get_offset_of_width_2() { return static_cast<int32_t>(offsetof(GlyphInfo_t58017296, ___width_2)); }
	inline float get_width_2() const { return ___width_2; }
	inline float* get_address_of_width_2() { return &___width_2; }
	inline void set_width_2(float value)
	{
		___width_2 = value;
	}

	inline static int32_t get_offset_of_height_3() { return static_cast<int32_t>(offsetof(GlyphInfo_t58017296, ___height_3)); }
	inline float get_height_3() const { return ___height_3; }
	inline float* get_address_of_height_3() { return &___height_3; }
	inline void set_height_3(float value)
	{
		___height_3 = value;
	}

	inline static int32_t get_offset_of_channel_4() { return static_cast<int32_t>(offsetof(GlyphInfo_t58017296, ___channel_4)); }
	inline int32_t get_channel_4() const { return ___channel_4; }
	inline int32_t* get_address_of_channel_4() { return &___channel_4; }
	inline void set_channel_4(int32_t value)
	{
		___channel_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

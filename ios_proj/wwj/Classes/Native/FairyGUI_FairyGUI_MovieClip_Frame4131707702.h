#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.MovieClip/Frame
struct  Frame_t4131707702 
{
public:
	// UnityEngine.Rect FairyGUI.MovieClip/Frame::rect
	Rect_t3681755626  ___rect_0;
	// System.Single FairyGUI.MovieClip/Frame::addDelay
	float ___addDelay_1;
	// UnityEngine.Rect FairyGUI.MovieClip/Frame::uvRect
	Rect_t3681755626  ___uvRect_2;
	// System.Boolean FairyGUI.MovieClip/Frame::rotated
	bool ___rotated_3;

public:
	inline static int32_t get_offset_of_rect_0() { return static_cast<int32_t>(offsetof(Frame_t4131707702, ___rect_0)); }
	inline Rect_t3681755626  get_rect_0() const { return ___rect_0; }
	inline Rect_t3681755626 * get_address_of_rect_0() { return &___rect_0; }
	inline void set_rect_0(Rect_t3681755626  value)
	{
		___rect_0 = value;
	}

	inline static int32_t get_offset_of_addDelay_1() { return static_cast<int32_t>(offsetof(Frame_t4131707702, ___addDelay_1)); }
	inline float get_addDelay_1() const { return ___addDelay_1; }
	inline float* get_address_of_addDelay_1() { return &___addDelay_1; }
	inline void set_addDelay_1(float value)
	{
		___addDelay_1 = value;
	}

	inline static int32_t get_offset_of_uvRect_2() { return static_cast<int32_t>(offsetof(Frame_t4131707702, ___uvRect_2)); }
	inline Rect_t3681755626  get_uvRect_2() const { return ___uvRect_2; }
	inline Rect_t3681755626 * get_address_of_uvRect_2() { return &___uvRect_2; }
	inline void set_uvRect_2(Rect_t3681755626  value)
	{
		___uvRect_2 = value;
	}

	inline static int32_t get_offset_of_rotated_3() { return static_cast<int32_t>(offsetof(Frame_t4131707702, ___rotated_3)); }
	inline bool get_rotated_3() const { return ___rotated_3; }
	inline bool* get_address_of_rotated_3() { return &___rotated_3; }
	inline void set_rotated_3(bool value)
	{
		___rotated_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of FairyGUI.MovieClip/Frame
struct Frame_t4131707702_marshaled_pinvoke
{
	Rect_t3681755626  ___rect_0;
	float ___addDelay_1;
	Rect_t3681755626  ___uvRect_2;
	int32_t ___rotated_3;
};
// Native definition for COM marshalling of FairyGUI.MovieClip/Frame
struct Frame_t4131707702_marshaled_com
{
	Rect_t3681755626  ___rect_0;
	float ___addDelay_1;
	Rect_t3681755626  ___uvRect_2;
	int32_t ___rotated_3;
};

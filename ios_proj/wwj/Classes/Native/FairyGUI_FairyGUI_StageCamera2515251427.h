#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Camera
struct Camera_t189460977;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.StageCamera
struct  StageCamera_t2515251427  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean FairyGUI.StageCamera::constantSize
	bool ___constantSize_2;
	// UnityEngine.Transform FairyGUI.StageCamera::cachedTransform
	Transform_t3275118058 * ___cachedTransform_3;
	// UnityEngine.Camera FairyGUI.StageCamera::cachedCamera
	Camera_t189460977 * ___cachedCamera_4;
	// System.Int32 FairyGUI.StageCamera::screenWidth
	int32_t ___screenWidth_5;
	// System.Int32 FairyGUI.StageCamera::screenHeight
	int32_t ___screenHeight_6;
	// System.Boolean FairyGUI.StageCamera::isMain
	bool ___isMain_7;

public:
	inline static int32_t get_offset_of_constantSize_2() { return static_cast<int32_t>(offsetof(StageCamera_t2515251427, ___constantSize_2)); }
	inline bool get_constantSize_2() const { return ___constantSize_2; }
	inline bool* get_address_of_constantSize_2() { return &___constantSize_2; }
	inline void set_constantSize_2(bool value)
	{
		___constantSize_2 = value;
	}

	inline static int32_t get_offset_of_cachedTransform_3() { return static_cast<int32_t>(offsetof(StageCamera_t2515251427, ___cachedTransform_3)); }
	inline Transform_t3275118058 * get_cachedTransform_3() const { return ___cachedTransform_3; }
	inline Transform_t3275118058 ** get_address_of_cachedTransform_3() { return &___cachedTransform_3; }
	inline void set_cachedTransform_3(Transform_t3275118058 * value)
	{
		___cachedTransform_3 = value;
		Il2CppCodeGenWriteBarrier(&___cachedTransform_3, value);
	}

	inline static int32_t get_offset_of_cachedCamera_4() { return static_cast<int32_t>(offsetof(StageCamera_t2515251427, ___cachedCamera_4)); }
	inline Camera_t189460977 * get_cachedCamera_4() const { return ___cachedCamera_4; }
	inline Camera_t189460977 ** get_address_of_cachedCamera_4() { return &___cachedCamera_4; }
	inline void set_cachedCamera_4(Camera_t189460977 * value)
	{
		___cachedCamera_4 = value;
		Il2CppCodeGenWriteBarrier(&___cachedCamera_4, value);
	}

	inline static int32_t get_offset_of_screenWidth_5() { return static_cast<int32_t>(offsetof(StageCamera_t2515251427, ___screenWidth_5)); }
	inline int32_t get_screenWidth_5() const { return ___screenWidth_5; }
	inline int32_t* get_address_of_screenWidth_5() { return &___screenWidth_5; }
	inline void set_screenWidth_5(int32_t value)
	{
		___screenWidth_5 = value;
	}

	inline static int32_t get_offset_of_screenHeight_6() { return static_cast<int32_t>(offsetof(StageCamera_t2515251427, ___screenHeight_6)); }
	inline int32_t get_screenHeight_6() const { return ___screenHeight_6; }
	inline int32_t* get_address_of_screenHeight_6() { return &___screenHeight_6; }
	inline void set_screenHeight_6(int32_t value)
	{
		___screenHeight_6 = value;
	}

	inline static int32_t get_offset_of_isMain_7() { return static_cast<int32_t>(offsetof(StageCamera_t2515251427, ___isMain_7)); }
	inline bool get_isMain_7() const { return ___isMain_7; }
	inline bool* get_address_of_isMain_7() { return &___isMain_7; }
	inline void set_isMain_7(bool value)
	{
		___isMain_7 = value;
	}
};

struct StageCamera_t2515251427_StaticFields
{
public:
	// UnityEngine.Camera FairyGUI.StageCamera::main
	Camera_t189460977 * ___main_8;
	// System.Int32 FairyGUI.StageCamera::screenSizeVer
	int32_t ___screenSizeVer_9;
	// System.Single FairyGUI.StageCamera::DefaultCameraSize
	float ___DefaultCameraSize_12;
	// System.Single FairyGUI.StageCamera::UnitsPerPixel
	float ___UnitsPerPixel_13;

public:
	inline static int32_t get_offset_of_main_8() { return static_cast<int32_t>(offsetof(StageCamera_t2515251427_StaticFields, ___main_8)); }
	inline Camera_t189460977 * get_main_8() const { return ___main_8; }
	inline Camera_t189460977 ** get_address_of_main_8() { return &___main_8; }
	inline void set_main_8(Camera_t189460977 * value)
	{
		___main_8 = value;
		Il2CppCodeGenWriteBarrier(&___main_8, value);
	}

	inline static int32_t get_offset_of_screenSizeVer_9() { return static_cast<int32_t>(offsetof(StageCamera_t2515251427_StaticFields, ___screenSizeVer_9)); }
	inline int32_t get_screenSizeVer_9() const { return ___screenSizeVer_9; }
	inline int32_t* get_address_of_screenSizeVer_9() { return &___screenSizeVer_9; }
	inline void set_screenSizeVer_9(int32_t value)
	{
		___screenSizeVer_9 = value;
	}

	inline static int32_t get_offset_of_DefaultCameraSize_12() { return static_cast<int32_t>(offsetof(StageCamera_t2515251427_StaticFields, ___DefaultCameraSize_12)); }
	inline float get_DefaultCameraSize_12() const { return ___DefaultCameraSize_12; }
	inline float* get_address_of_DefaultCameraSize_12() { return &___DefaultCameraSize_12; }
	inline void set_DefaultCameraSize_12(float value)
	{
		___DefaultCameraSize_12 = value;
	}

	inline static int32_t get_offset_of_UnitsPerPixel_13() { return static_cast<int32_t>(offsetof(StageCamera_t2515251427_StaticFields, ___UnitsPerPixel_13)); }
	inline float get_UnitsPerPixel_13() const { return ___UnitsPerPixel_13; }
	inline float* get_address_of_UnitsPerPixel_13() { return &___UnitsPerPixel_13; }
	inline void set_UnitsPerPixel_13(float value)
	{
		___UnitsPerPixel_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

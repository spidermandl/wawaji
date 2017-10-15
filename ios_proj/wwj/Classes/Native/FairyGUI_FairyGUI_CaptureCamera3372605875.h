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
// FairyGUI.CaptureCamera
struct CaptureCamera_t3372605875;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.CaptureCamera
struct  CaptureCamera_t3372605875  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform FairyGUI.CaptureCamera::cachedTransform
	Transform_t3275118058 * ___cachedTransform_2;
	// UnityEngine.Camera FairyGUI.CaptureCamera::cachedCamera
	Camera_t189460977 * ___cachedCamera_3;

public:
	inline static int32_t get_offset_of_cachedTransform_2() { return static_cast<int32_t>(offsetof(CaptureCamera_t3372605875, ___cachedTransform_2)); }
	inline Transform_t3275118058 * get_cachedTransform_2() const { return ___cachedTransform_2; }
	inline Transform_t3275118058 ** get_address_of_cachedTransform_2() { return &___cachedTransform_2; }
	inline void set_cachedTransform_2(Transform_t3275118058 * value)
	{
		___cachedTransform_2 = value;
		Il2CppCodeGenWriteBarrier(&___cachedTransform_2, value);
	}

	inline static int32_t get_offset_of_cachedCamera_3() { return static_cast<int32_t>(offsetof(CaptureCamera_t3372605875, ___cachedCamera_3)); }
	inline Camera_t189460977 * get_cachedCamera_3() const { return ___cachedCamera_3; }
	inline Camera_t189460977 ** get_address_of_cachedCamera_3() { return &___cachedCamera_3; }
	inline void set_cachedCamera_3(Camera_t189460977 * value)
	{
		___cachedCamera_3 = value;
		Il2CppCodeGenWriteBarrier(&___cachedCamera_3, value);
	}
};

struct CaptureCamera_t3372605875_StaticFields
{
public:
	// FairyGUI.CaptureCamera FairyGUI.CaptureCamera::_main
	CaptureCamera_t3372605875 * ____main_4;
	// System.Int32 FairyGUI.CaptureCamera::_layer
	int32_t ____layer_5;
	// System.Int32 FairyGUI.CaptureCamera::_hiddenLayer
	int32_t ____hiddenLayer_6;

public:
	inline static int32_t get_offset_of__main_4() { return static_cast<int32_t>(offsetof(CaptureCamera_t3372605875_StaticFields, ____main_4)); }
	inline CaptureCamera_t3372605875 * get__main_4() const { return ____main_4; }
	inline CaptureCamera_t3372605875 ** get_address_of__main_4() { return &____main_4; }
	inline void set__main_4(CaptureCamera_t3372605875 * value)
	{
		____main_4 = value;
		Il2CppCodeGenWriteBarrier(&____main_4, value);
	}

	inline static int32_t get_offset_of__layer_5() { return static_cast<int32_t>(offsetof(CaptureCamera_t3372605875_StaticFields, ____layer_5)); }
	inline int32_t get__layer_5() const { return ____layer_5; }
	inline int32_t* get_address_of__layer_5() { return &____layer_5; }
	inline void set__layer_5(int32_t value)
	{
		____layer_5 = value;
	}

	inline static int32_t get_offset_of__hiddenLayer_6() { return static_cast<int32_t>(offsetof(CaptureCamera_t3372605875_StaticFields, ____hiddenLayer_6)); }
	inline int32_t get__hiddenLayer_6() const { return ____hiddenLayer_6; }
	inline int32_t* get_address_of__hiddenLayer_6() { return &____hiddenLayer_6; }
	inline void set__hiddenLayer_6(int32_t value)
	{
		____hiddenLayer_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

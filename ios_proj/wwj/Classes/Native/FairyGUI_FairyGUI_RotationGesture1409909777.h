#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "FairyGUI_FairyGUI_EventDispatcher4068415185.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// FairyGUI.GObject
struct GObject_t2662234644;
// FairyGUI.EventListener
struct EventListener_t2764096410;
// System.Int32[]
struct Int32U5BU5D_t3030399641;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.RotationGesture
struct  RotationGesture_t1409909777  : public EventDispatcher_t4068415185
{
public:
	// FairyGUI.GObject FairyGUI.RotationGesture::<host>k__BackingField
	GObject_t2662234644 * ___U3ChostU3Ek__BackingField_2;
	// FairyGUI.EventListener FairyGUI.RotationGesture::<onBegin>k__BackingField
	EventListener_t2764096410 * ___U3ConBeginU3Ek__BackingField_3;
	// FairyGUI.EventListener FairyGUI.RotationGesture::<onEnd>k__BackingField
	EventListener_t2764096410 * ___U3ConEndU3Ek__BackingField_4;
	// FairyGUI.EventListener FairyGUI.RotationGesture::<onAction>k__BackingField
	EventListener_t2764096410 * ___U3ConActionU3Ek__BackingField_5;
	// System.Single FairyGUI.RotationGesture::rotation
	float ___rotation_6;
	// System.Single FairyGUI.RotationGesture::delta
	float ___delta_7;
	// System.Boolean FairyGUI.RotationGesture::snapping
	bool ___snapping_8;
	// UnityEngine.Vector2 FairyGUI.RotationGesture::_startVector
	Vector2_t2243707579  ____startVector_9;
	// System.Single FairyGUI.RotationGesture::_lastRotation
	float ____lastRotation_10;
	// System.Int32[] FairyGUI.RotationGesture::_touches
	Int32U5BU5D_t3030399641* ____touches_11;
	// System.Boolean FairyGUI.RotationGesture::_started
	bool ____started_12;

public:
	inline static int32_t get_offset_of_U3ChostU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RotationGesture_t1409909777, ___U3ChostU3Ek__BackingField_2)); }
	inline GObject_t2662234644 * get_U3ChostU3Ek__BackingField_2() const { return ___U3ChostU3Ek__BackingField_2; }
	inline GObject_t2662234644 ** get_address_of_U3ChostU3Ek__BackingField_2() { return &___U3ChostU3Ek__BackingField_2; }
	inline void set_U3ChostU3Ek__BackingField_2(GObject_t2662234644 * value)
	{
		___U3ChostU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3ChostU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_U3ConBeginU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RotationGesture_t1409909777, ___U3ConBeginU3Ek__BackingField_3)); }
	inline EventListener_t2764096410 * get_U3ConBeginU3Ek__BackingField_3() const { return ___U3ConBeginU3Ek__BackingField_3; }
	inline EventListener_t2764096410 ** get_address_of_U3ConBeginU3Ek__BackingField_3() { return &___U3ConBeginU3Ek__BackingField_3; }
	inline void set_U3ConBeginU3Ek__BackingField_3(EventListener_t2764096410 * value)
	{
		___U3ConBeginU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConBeginU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_U3ConEndU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(RotationGesture_t1409909777, ___U3ConEndU3Ek__BackingField_4)); }
	inline EventListener_t2764096410 * get_U3ConEndU3Ek__BackingField_4() const { return ___U3ConEndU3Ek__BackingField_4; }
	inline EventListener_t2764096410 ** get_address_of_U3ConEndU3Ek__BackingField_4() { return &___U3ConEndU3Ek__BackingField_4; }
	inline void set_U3ConEndU3Ek__BackingField_4(EventListener_t2764096410 * value)
	{
		___U3ConEndU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConEndU3Ek__BackingField_4, value);
	}

	inline static int32_t get_offset_of_U3ConActionU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(RotationGesture_t1409909777, ___U3ConActionU3Ek__BackingField_5)); }
	inline EventListener_t2764096410 * get_U3ConActionU3Ek__BackingField_5() const { return ___U3ConActionU3Ek__BackingField_5; }
	inline EventListener_t2764096410 ** get_address_of_U3ConActionU3Ek__BackingField_5() { return &___U3ConActionU3Ek__BackingField_5; }
	inline void set_U3ConActionU3Ek__BackingField_5(EventListener_t2764096410 * value)
	{
		___U3ConActionU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConActionU3Ek__BackingField_5, value);
	}

	inline static int32_t get_offset_of_rotation_6() { return static_cast<int32_t>(offsetof(RotationGesture_t1409909777, ___rotation_6)); }
	inline float get_rotation_6() const { return ___rotation_6; }
	inline float* get_address_of_rotation_6() { return &___rotation_6; }
	inline void set_rotation_6(float value)
	{
		___rotation_6 = value;
	}

	inline static int32_t get_offset_of_delta_7() { return static_cast<int32_t>(offsetof(RotationGesture_t1409909777, ___delta_7)); }
	inline float get_delta_7() const { return ___delta_7; }
	inline float* get_address_of_delta_7() { return &___delta_7; }
	inline void set_delta_7(float value)
	{
		___delta_7 = value;
	}

	inline static int32_t get_offset_of_snapping_8() { return static_cast<int32_t>(offsetof(RotationGesture_t1409909777, ___snapping_8)); }
	inline bool get_snapping_8() const { return ___snapping_8; }
	inline bool* get_address_of_snapping_8() { return &___snapping_8; }
	inline void set_snapping_8(bool value)
	{
		___snapping_8 = value;
	}

	inline static int32_t get_offset_of__startVector_9() { return static_cast<int32_t>(offsetof(RotationGesture_t1409909777, ____startVector_9)); }
	inline Vector2_t2243707579  get__startVector_9() const { return ____startVector_9; }
	inline Vector2_t2243707579 * get_address_of__startVector_9() { return &____startVector_9; }
	inline void set__startVector_9(Vector2_t2243707579  value)
	{
		____startVector_9 = value;
	}

	inline static int32_t get_offset_of__lastRotation_10() { return static_cast<int32_t>(offsetof(RotationGesture_t1409909777, ____lastRotation_10)); }
	inline float get__lastRotation_10() const { return ____lastRotation_10; }
	inline float* get_address_of__lastRotation_10() { return &____lastRotation_10; }
	inline void set__lastRotation_10(float value)
	{
		____lastRotation_10 = value;
	}

	inline static int32_t get_offset_of__touches_11() { return static_cast<int32_t>(offsetof(RotationGesture_t1409909777, ____touches_11)); }
	inline Int32U5BU5D_t3030399641* get__touches_11() const { return ____touches_11; }
	inline Int32U5BU5D_t3030399641** get_address_of__touches_11() { return &____touches_11; }
	inline void set__touches_11(Int32U5BU5D_t3030399641* value)
	{
		____touches_11 = value;
		Il2CppCodeGenWriteBarrier(&____touches_11, value);
	}

	inline static int32_t get_offset_of__started_12() { return static_cast<int32_t>(offsetof(RotationGesture_t1409909777, ____started_12)); }
	inline bool get__started_12() const { return ____started_12; }
	inline bool* get_address_of__started_12() { return &____started_12; }
	inline void set__started_12(bool value)
	{
		____started_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

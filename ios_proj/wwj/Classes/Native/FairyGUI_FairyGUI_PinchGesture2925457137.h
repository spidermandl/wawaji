#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "FairyGUI_FairyGUI_EventDispatcher4068415185.h"

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

// FairyGUI.PinchGesture
struct  PinchGesture_t2925457137  : public EventDispatcher_t4068415185
{
public:
	// FairyGUI.GObject FairyGUI.PinchGesture::<host>k__BackingField
	GObject_t2662234644 * ___U3ChostU3Ek__BackingField_2;
	// FairyGUI.EventListener FairyGUI.PinchGesture::<onBegin>k__BackingField
	EventListener_t2764096410 * ___U3ConBeginU3Ek__BackingField_3;
	// FairyGUI.EventListener FairyGUI.PinchGesture::<onEnd>k__BackingField
	EventListener_t2764096410 * ___U3ConEndU3Ek__BackingField_4;
	// FairyGUI.EventListener FairyGUI.PinchGesture::<onAction>k__BackingField
	EventListener_t2764096410 * ___U3ConActionU3Ek__BackingField_5;
	// System.Single FairyGUI.PinchGesture::scale
	float ___scale_6;
	// System.Single FairyGUI.PinchGesture::delta
	float ___delta_7;
	// System.Single FairyGUI.PinchGesture::_startDistance
	float ____startDistance_8;
	// System.Single FairyGUI.PinchGesture::_lastScale
	float ____lastScale_9;
	// System.Int32[] FairyGUI.PinchGesture::_touches
	Int32U5BU5D_t3030399641* ____touches_10;
	// System.Boolean FairyGUI.PinchGesture::_started
	bool ____started_11;

public:
	inline static int32_t get_offset_of_U3ChostU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PinchGesture_t2925457137, ___U3ChostU3Ek__BackingField_2)); }
	inline GObject_t2662234644 * get_U3ChostU3Ek__BackingField_2() const { return ___U3ChostU3Ek__BackingField_2; }
	inline GObject_t2662234644 ** get_address_of_U3ChostU3Ek__BackingField_2() { return &___U3ChostU3Ek__BackingField_2; }
	inline void set_U3ChostU3Ek__BackingField_2(GObject_t2662234644 * value)
	{
		___U3ChostU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3ChostU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_U3ConBeginU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PinchGesture_t2925457137, ___U3ConBeginU3Ek__BackingField_3)); }
	inline EventListener_t2764096410 * get_U3ConBeginU3Ek__BackingField_3() const { return ___U3ConBeginU3Ek__BackingField_3; }
	inline EventListener_t2764096410 ** get_address_of_U3ConBeginU3Ek__BackingField_3() { return &___U3ConBeginU3Ek__BackingField_3; }
	inline void set_U3ConBeginU3Ek__BackingField_3(EventListener_t2764096410 * value)
	{
		___U3ConBeginU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConBeginU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_U3ConEndU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PinchGesture_t2925457137, ___U3ConEndU3Ek__BackingField_4)); }
	inline EventListener_t2764096410 * get_U3ConEndU3Ek__BackingField_4() const { return ___U3ConEndU3Ek__BackingField_4; }
	inline EventListener_t2764096410 ** get_address_of_U3ConEndU3Ek__BackingField_4() { return &___U3ConEndU3Ek__BackingField_4; }
	inline void set_U3ConEndU3Ek__BackingField_4(EventListener_t2764096410 * value)
	{
		___U3ConEndU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConEndU3Ek__BackingField_4, value);
	}

	inline static int32_t get_offset_of_U3ConActionU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PinchGesture_t2925457137, ___U3ConActionU3Ek__BackingField_5)); }
	inline EventListener_t2764096410 * get_U3ConActionU3Ek__BackingField_5() const { return ___U3ConActionU3Ek__BackingField_5; }
	inline EventListener_t2764096410 ** get_address_of_U3ConActionU3Ek__BackingField_5() { return &___U3ConActionU3Ek__BackingField_5; }
	inline void set_U3ConActionU3Ek__BackingField_5(EventListener_t2764096410 * value)
	{
		___U3ConActionU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConActionU3Ek__BackingField_5, value);
	}

	inline static int32_t get_offset_of_scale_6() { return static_cast<int32_t>(offsetof(PinchGesture_t2925457137, ___scale_6)); }
	inline float get_scale_6() const { return ___scale_6; }
	inline float* get_address_of_scale_6() { return &___scale_6; }
	inline void set_scale_6(float value)
	{
		___scale_6 = value;
	}

	inline static int32_t get_offset_of_delta_7() { return static_cast<int32_t>(offsetof(PinchGesture_t2925457137, ___delta_7)); }
	inline float get_delta_7() const { return ___delta_7; }
	inline float* get_address_of_delta_7() { return &___delta_7; }
	inline void set_delta_7(float value)
	{
		___delta_7 = value;
	}

	inline static int32_t get_offset_of__startDistance_8() { return static_cast<int32_t>(offsetof(PinchGesture_t2925457137, ____startDistance_8)); }
	inline float get__startDistance_8() const { return ____startDistance_8; }
	inline float* get_address_of__startDistance_8() { return &____startDistance_8; }
	inline void set__startDistance_8(float value)
	{
		____startDistance_8 = value;
	}

	inline static int32_t get_offset_of__lastScale_9() { return static_cast<int32_t>(offsetof(PinchGesture_t2925457137, ____lastScale_9)); }
	inline float get__lastScale_9() const { return ____lastScale_9; }
	inline float* get_address_of__lastScale_9() { return &____lastScale_9; }
	inline void set__lastScale_9(float value)
	{
		____lastScale_9 = value;
	}

	inline static int32_t get_offset_of__touches_10() { return static_cast<int32_t>(offsetof(PinchGesture_t2925457137, ____touches_10)); }
	inline Int32U5BU5D_t3030399641* get__touches_10() const { return ____touches_10; }
	inline Int32U5BU5D_t3030399641** get_address_of__touches_10() { return &____touches_10; }
	inline void set__touches_10(Int32U5BU5D_t3030399641* value)
	{
		____touches_10 = value;
		Il2CppCodeGenWriteBarrier(&____touches_10, value);
	}

	inline static int32_t get_offset_of__started_11() { return static_cast<int32_t>(offsetof(PinchGesture_t2925457137, ____started_11)); }
	inline bool get__started_11() const { return ____started_11; }
	inline bool* get_address_of__started_11() { return &____started_11; }
	inline void set__started_11(bool value)
	{
		____started_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

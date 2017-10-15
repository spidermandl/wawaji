#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "DOTween_DG_Tweening_Ease2502520296.h"

// FairyGUI.GObject
struct GObject_t2662234644;
// FairyGUI.Controller
struct Controller_t4051336914;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.GearBase
struct  GearBase_t3731708816  : public Il2CppObject
{
public:
	// System.Boolean FairyGUI.GearBase::tween
	bool ___tween_1;
	// DG.Tweening.Ease FairyGUI.GearBase::easeType
	int32_t ___easeType_2;
	// System.Single FairyGUI.GearBase::tweenTime
	float ___tweenTime_3;
	// System.Single FairyGUI.GearBase::delay
	float ___delay_4;
	// FairyGUI.GObject FairyGUI.GearBase::_owner
	GObject_t2662234644 * ____owner_5;
	// FairyGUI.Controller FairyGUI.GearBase::_controller
	Controller_t4051336914 * ____controller_6;
	// System.UInt32 FairyGUI.GearBase::_displayLockToken
	uint32_t ____displayLockToken_7;

public:
	inline static int32_t get_offset_of_tween_1() { return static_cast<int32_t>(offsetof(GearBase_t3731708816, ___tween_1)); }
	inline bool get_tween_1() const { return ___tween_1; }
	inline bool* get_address_of_tween_1() { return &___tween_1; }
	inline void set_tween_1(bool value)
	{
		___tween_1 = value;
	}

	inline static int32_t get_offset_of_easeType_2() { return static_cast<int32_t>(offsetof(GearBase_t3731708816, ___easeType_2)); }
	inline int32_t get_easeType_2() const { return ___easeType_2; }
	inline int32_t* get_address_of_easeType_2() { return &___easeType_2; }
	inline void set_easeType_2(int32_t value)
	{
		___easeType_2 = value;
	}

	inline static int32_t get_offset_of_tweenTime_3() { return static_cast<int32_t>(offsetof(GearBase_t3731708816, ___tweenTime_3)); }
	inline float get_tweenTime_3() const { return ___tweenTime_3; }
	inline float* get_address_of_tweenTime_3() { return &___tweenTime_3; }
	inline void set_tweenTime_3(float value)
	{
		___tweenTime_3 = value;
	}

	inline static int32_t get_offset_of_delay_4() { return static_cast<int32_t>(offsetof(GearBase_t3731708816, ___delay_4)); }
	inline float get_delay_4() const { return ___delay_4; }
	inline float* get_address_of_delay_4() { return &___delay_4; }
	inline void set_delay_4(float value)
	{
		___delay_4 = value;
	}

	inline static int32_t get_offset_of__owner_5() { return static_cast<int32_t>(offsetof(GearBase_t3731708816, ____owner_5)); }
	inline GObject_t2662234644 * get__owner_5() const { return ____owner_5; }
	inline GObject_t2662234644 ** get_address_of__owner_5() { return &____owner_5; }
	inline void set__owner_5(GObject_t2662234644 * value)
	{
		____owner_5 = value;
		Il2CppCodeGenWriteBarrier(&____owner_5, value);
	}

	inline static int32_t get_offset_of__controller_6() { return static_cast<int32_t>(offsetof(GearBase_t3731708816, ____controller_6)); }
	inline Controller_t4051336914 * get__controller_6() const { return ____controller_6; }
	inline Controller_t4051336914 ** get_address_of__controller_6() { return &____controller_6; }
	inline void set__controller_6(Controller_t4051336914 * value)
	{
		____controller_6 = value;
		Il2CppCodeGenWriteBarrier(&____controller_6, value);
	}

	inline static int32_t get_offset_of__displayLockToken_7() { return static_cast<int32_t>(offsetof(GearBase_t3731708816, ____displayLockToken_7)); }
	inline uint32_t get__displayLockToken_7() const { return ____displayLockToken_7; }
	inline uint32_t* get_address_of__displayLockToken_7() { return &____displayLockToken_7; }
	inline void set__displayLockToken_7(uint32_t value)
	{
		____displayLockToken_7 = value;
	}
};

struct GearBase_t3731708816_StaticFields
{
public:
	// System.Boolean FairyGUI.GearBase::disableAllTweenEffect
	bool ___disableAllTweenEffect_0;

public:
	inline static int32_t get_offset_of_disableAllTweenEffect_0() { return static_cast<int32_t>(offsetof(GearBase_t3731708816_StaticFields, ___disableAllTweenEffect_0)); }
	inline bool get_disableAllTweenEffect_0() const { return ___disableAllTweenEffect_0; }
	inline bool* get_address_of_disableAllTweenEffect_0() { return &___disableAllTweenEffect_0; }
	inline void set_disableAllTweenEffect_0(bool value)
	{
		___disableAllTweenEffect_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

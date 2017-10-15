#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "FairyGUI_FairyGUI_GearBase3731708816.h"

// DG.Tweening.Tweener
struct Tweener_t760404022;
// System.Collections.Generic.Dictionary`2<System.String,FairyGUI.GearXYValue>
struct Dictionary_2_t2435473783;
// FairyGUI.GearXYValue
struct GearXYValue_t520694521;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.GearXY
struct  GearXY_t2961496078  : public GearBase_t3731708816
{
public:
	// DG.Tweening.Tweener FairyGUI.GearXY::<tweener>k__BackingField
	Tweener_t760404022 * ___U3CtweenerU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<System.String,FairyGUI.GearXYValue> FairyGUI.GearXY::_storage
	Dictionary_2_t2435473783 * ____storage_9;
	// FairyGUI.GearXYValue FairyGUI.GearXY::_default
	GearXYValue_t520694521 * ____default_10;
	// FairyGUI.GearXYValue FairyGUI.GearXY::_tweenTarget
	GearXYValue_t520694521 * ____tweenTarget_11;

public:
	inline static int32_t get_offset_of_U3CtweenerU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(GearXY_t2961496078, ___U3CtweenerU3Ek__BackingField_8)); }
	inline Tweener_t760404022 * get_U3CtweenerU3Ek__BackingField_8() const { return ___U3CtweenerU3Ek__BackingField_8; }
	inline Tweener_t760404022 ** get_address_of_U3CtweenerU3Ek__BackingField_8() { return &___U3CtweenerU3Ek__BackingField_8; }
	inline void set_U3CtweenerU3Ek__BackingField_8(Tweener_t760404022 * value)
	{
		___U3CtweenerU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CtweenerU3Ek__BackingField_8, value);
	}

	inline static int32_t get_offset_of__storage_9() { return static_cast<int32_t>(offsetof(GearXY_t2961496078, ____storage_9)); }
	inline Dictionary_2_t2435473783 * get__storage_9() const { return ____storage_9; }
	inline Dictionary_2_t2435473783 ** get_address_of__storage_9() { return &____storage_9; }
	inline void set__storage_9(Dictionary_2_t2435473783 * value)
	{
		____storage_9 = value;
		Il2CppCodeGenWriteBarrier(&____storage_9, value);
	}

	inline static int32_t get_offset_of__default_10() { return static_cast<int32_t>(offsetof(GearXY_t2961496078, ____default_10)); }
	inline GearXYValue_t520694521 * get__default_10() const { return ____default_10; }
	inline GearXYValue_t520694521 ** get_address_of__default_10() { return &____default_10; }
	inline void set__default_10(GearXYValue_t520694521 * value)
	{
		____default_10 = value;
		Il2CppCodeGenWriteBarrier(&____default_10, value);
	}

	inline static int32_t get_offset_of__tweenTarget_11() { return static_cast<int32_t>(offsetof(GearXY_t2961496078, ____tweenTarget_11)); }
	inline GearXYValue_t520694521 * get__tweenTarget_11() const { return ____tweenTarget_11; }
	inline GearXYValue_t520694521 ** get_address_of__tweenTarget_11() { return &____tweenTarget_11; }
	inline void set__tweenTarget_11(GearXYValue_t520694521 * value)
	{
		____tweenTarget_11 = value;
		Il2CppCodeGenWriteBarrier(&____tweenTarget_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

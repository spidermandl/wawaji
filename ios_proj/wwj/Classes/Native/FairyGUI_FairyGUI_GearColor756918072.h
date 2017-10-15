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
// System.Collections.Generic.Dictionary`2<System.String,FairyGUI.GearColorValue>
struct Dictionary_2_t823672891;
// FairyGUI.GearColorValue
struct GearColorValue_t3203860925;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.GearColor
struct  GearColor_t756918072  : public GearBase_t3731708816
{
public:
	// DG.Tweening.Tweener FairyGUI.GearColor::<tweener>k__BackingField
	Tweener_t760404022 * ___U3CtweenerU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<System.String,FairyGUI.GearColorValue> FairyGUI.GearColor::_storage
	Dictionary_2_t823672891 * ____storage_9;
	// FairyGUI.GearColorValue FairyGUI.GearColor::_default
	GearColorValue_t3203860925 * ____default_10;
	// FairyGUI.GearColorValue FairyGUI.GearColor::_tweenTarget
	GearColorValue_t3203860925 * ____tweenTarget_11;

public:
	inline static int32_t get_offset_of_U3CtweenerU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(GearColor_t756918072, ___U3CtweenerU3Ek__BackingField_8)); }
	inline Tweener_t760404022 * get_U3CtweenerU3Ek__BackingField_8() const { return ___U3CtweenerU3Ek__BackingField_8; }
	inline Tweener_t760404022 ** get_address_of_U3CtweenerU3Ek__BackingField_8() { return &___U3CtweenerU3Ek__BackingField_8; }
	inline void set_U3CtweenerU3Ek__BackingField_8(Tweener_t760404022 * value)
	{
		___U3CtweenerU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CtweenerU3Ek__BackingField_8, value);
	}

	inline static int32_t get_offset_of__storage_9() { return static_cast<int32_t>(offsetof(GearColor_t756918072, ____storage_9)); }
	inline Dictionary_2_t823672891 * get__storage_9() const { return ____storage_9; }
	inline Dictionary_2_t823672891 ** get_address_of__storage_9() { return &____storage_9; }
	inline void set__storage_9(Dictionary_2_t823672891 * value)
	{
		____storage_9 = value;
		Il2CppCodeGenWriteBarrier(&____storage_9, value);
	}

	inline static int32_t get_offset_of__default_10() { return static_cast<int32_t>(offsetof(GearColor_t756918072, ____default_10)); }
	inline GearColorValue_t3203860925 * get__default_10() const { return ____default_10; }
	inline GearColorValue_t3203860925 ** get_address_of__default_10() { return &____default_10; }
	inline void set__default_10(GearColorValue_t3203860925 * value)
	{
		____default_10 = value;
		Il2CppCodeGenWriteBarrier(&____default_10, value);
	}

	inline static int32_t get_offset_of__tweenTarget_11() { return static_cast<int32_t>(offsetof(GearColor_t756918072, ____tweenTarget_11)); }
	inline GearColorValue_t3203860925 * get__tweenTarget_11() const { return ____tweenTarget_11; }
	inline GearColorValue_t3203860925 ** get_address_of__tweenTarget_11() { return &____tweenTarget_11; }
	inline void set__tweenTarget_11(GearColorValue_t3203860925 * value)
	{
		____tweenTarget_11 = value;
		Il2CppCodeGenWriteBarrier(&____tweenTarget_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

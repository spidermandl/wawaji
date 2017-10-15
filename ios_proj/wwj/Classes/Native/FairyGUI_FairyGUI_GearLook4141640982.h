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
// System.Collections.Generic.Dictionary`2<System.String,FairyGUI.GearLookValue>
struct Dictionary_2_t1977710049;
// FairyGUI.GearLookValue
struct GearLookValue_t62930787;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.GearLook
struct  GearLook_t4141640982  : public GearBase_t3731708816
{
public:
	// DG.Tweening.Tweener FairyGUI.GearLook::<tweener>k__BackingField
	Tweener_t760404022 * ___U3CtweenerU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<System.String,FairyGUI.GearLookValue> FairyGUI.GearLook::_storage
	Dictionary_2_t1977710049 * ____storage_9;
	// FairyGUI.GearLookValue FairyGUI.GearLook::_default
	GearLookValue_t62930787 * ____default_10;
	// FairyGUI.GearLookValue FairyGUI.GearLook::_tweenTarget
	GearLookValue_t62930787 * ____tweenTarget_11;

public:
	inline static int32_t get_offset_of_U3CtweenerU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(GearLook_t4141640982, ___U3CtweenerU3Ek__BackingField_8)); }
	inline Tweener_t760404022 * get_U3CtweenerU3Ek__BackingField_8() const { return ___U3CtweenerU3Ek__BackingField_8; }
	inline Tweener_t760404022 ** get_address_of_U3CtweenerU3Ek__BackingField_8() { return &___U3CtweenerU3Ek__BackingField_8; }
	inline void set_U3CtweenerU3Ek__BackingField_8(Tweener_t760404022 * value)
	{
		___U3CtweenerU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CtweenerU3Ek__BackingField_8, value);
	}

	inline static int32_t get_offset_of__storage_9() { return static_cast<int32_t>(offsetof(GearLook_t4141640982, ____storage_9)); }
	inline Dictionary_2_t1977710049 * get__storage_9() const { return ____storage_9; }
	inline Dictionary_2_t1977710049 ** get_address_of__storage_9() { return &____storage_9; }
	inline void set__storage_9(Dictionary_2_t1977710049 * value)
	{
		____storage_9 = value;
		Il2CppCodeGenWriteBarrier(&____storage_9, value);
	}

	inline static int32_t get_offset_of__default_10() { return static_cast<int32_t>(offsetof(GearLook_t4141640982, ____default_10)); }
	inline GearLookValue_t62930787 * get__default_10() const { return ____default_10; }
	inline GearLookValue_t62930787 ** get_address_of__default_10() { return &____default_10; }
	inline void set__default_10(GearLookValue_t62930787 * value)
	{
		____default_10 = value;
		Il2CppCodeGenWriteBarrier(&____default_10, value);
	}

	inline static int32_t get_offset_of__tweenTarget_11() { return static_cast<int32_t>(offsetof(GearLook_t4141640982, ____tweenTarget_11)); }
	inline GearLookValue_t62930787 * get__tweenTarget_11() const { return ____tweenTarget_11; }
	inline GearLookValue_t62930787 ** get_address_of__tweenTarget_11() { return &____tweenTarget_11; }
	inline void set__tweenTarget_11(GearLookValue_t62930787 * value)
	{
		____tweenTarget_11 = value;
		Il2CppCodeGenWriteBarrier(&____tweenTarget_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

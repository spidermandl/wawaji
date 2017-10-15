#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "FairyGUI_FairyGUI_GearBase3731708816.h"

// System.Collections.Generic.Dictionary`2<System.String,FairyGUI.GearAnimationValue>
struct Dictionary_2_t3194299316;
// FairyGUI.GearAnimationValue
struct GearAnimationValue_t1279520054;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.GearAnimation
struct  GearAnimation_t3920917345  : public GearBase_t3731708816
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,FairyGUI.GearAnimationValue> FairyGUI.GearAnimation::_storage
	Dictionary_2_t3194299316 * ____storage_8;
	// FairyGUI.GearAnimationValue FairyGUI.GearAnimation::_default
	GearAnimationValue_t1279520054 * ____default_9;

public:
	inline static int32_t get_offset_of__storage_8() { return static_cast<int32_t>(offsetof(GearAnimation_t3920917345, ____storage_8)); }
	inline Dictionary_2_t3194299316 * get__storage_8() const { return ____storage_8; }
	inline Dictionary_2_t3194299316 ** get_address_of__storage_8() { return &____storage_8; }
	inline void set__storage_8(Dictionary_2_t3194299316 * value)
	{
		____storage_8 = value;
		Il2CppCodeGenWriteBarrier(&____storage_8, value);
	}

	inline static int32_t get_offset_of__default_9() { return static_cast<int32_t>(offsetof(GearAnimation_t3920917345, ____default_9)); }
	inline GearAnimationValue_t1279520054 * get__default_9() const { return ____default_9; }
	inline GearAnimationValue_t1279520054 ** get_address_of__default_9() { return &____default_9; }
	inline void set__default_9(GearAnimationValue_t1279520054 * value)
	{
		____default_9 = value;
		Il2CppCodeGenWriteBarrier(&____default_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

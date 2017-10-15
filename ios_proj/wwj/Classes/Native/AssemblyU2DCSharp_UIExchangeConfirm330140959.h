#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_BaseWindow1983497523.h"

// PrizeSetProxy/PrizeItem
struct PrizeItem_t1113795488;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIExchangeConfirm
struct  UIExchangeConfirm_t330140959  : public BaseWindow_t1983497523
{
public:
	// PrizeSetProxy/PrizeItem UIExchangeConfirm::prize_item
	PrizeItem_t1113795488 * ___prize_item_104;

public:
	inline static int32_t get_offset_of_prize_item_104() { return static_cast<int32_t>(offsetof(UIExchangeConfirm_t330140959, ___prize_item_104)); }
	inline PrizeItem_t1113795488 * get_prize_item_104() const { return ___prize_item_104; }
	inline PrizeItem_t1113795488 ** get_address_of_prize_item_104() { return &___prize_item_104; }
	inline void set_prize_item_104(PrizeItem_t1113795488 * value)
	{
		___prize_item_104 = value;
		Il2CppCodeGenWriteBarrier(&___prize_item_104, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

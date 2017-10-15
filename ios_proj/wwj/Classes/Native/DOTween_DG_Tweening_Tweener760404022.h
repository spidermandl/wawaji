#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "DOTween_DG_Tweening_Tween278478013.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Tweener
struct  Tweener_t760404022  : public Tween_t278478013
{
public:
	// System.Boolean DG.Tweening.Tweener::hasManuallySetStartValue
	bool ___hasManuallySetStartValue_51;
	// System.Boolean DG.Tweening.Tweener::isFromAllowed
	bool ___isFromAllowed_52;

public:
	inline static int32_t get_offset_of_hasManuallySetStartValue_51() { return static_cast<int32_t>(offsetof(Tweener_t760404022, ___hasManuallySetStartValue_51)); }
	inline bool get_hasManuallySetStartValue_51() const { return ___hasManuallySetStartValue_51; }
	inline bool* get_address_of_hasManuallySetStartValue_51() { return &___hasManuallySetStartValue_51; }
	inline void set_hasManuallySetStartValue_51(bool value)
	{
		___hasManuallySetStartValue_51 = value;
	}

	inline static int32_t get_offset_of_isFromAllowed_52() { return static_cast<int32_t>(offsetof(Tweener_t760404022, ___isFromAllowed_52)); }
	inline bool get_isFromAllowed_52() const { return ___isFromAllowed_52; }
	inline bool* get_address_of_isFromAllowed_52() { return &___isFromAllowed_52; }
	inline void set_isFromAllowed_52(bool value)
	{
		___isFromAllowed_52 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

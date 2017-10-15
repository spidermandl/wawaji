#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "DOTween_DG_Tweening_Tween278478013.h"

// System.Collections.Generic.List`1<DG.Tweening.Tween>
struct List_1_t3942566441;
// System.Collections.Generic.List`1<DG.Tweening.Core.ABSSequentiable>
struct List_1_t1653261852;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Sequence
struct  Sequence_t110643099  : public Tween_t278478013
{
public:
	// System.Collections.Generic.List`1<DG.Tweening.Tween> DG.Tweening.Sequence::sequencedTweens
	List_1_t3942566441 * ___sequencedTweens_51;
	// System.Collections.Generic.List`1<DG.Tweening.Core.ABSSequentiable> DG.Tweening.Sequence::_sequencedObjs
	List_1_t1653261852 * ____sequencedObjs_52;
	// System.Single DG.Tweening.Sequence::lastTweenInsertTime
	float ___lastTweenInsertTime_53;

public:
	inline static int32_t get_offset_of_sequencedTweens_51() { return static_cast<int32_t>(offsetof(Sequence_t110643099, ___sequencedTweens_51)); }
	inline List_1_t3942566441 * get_sequencedTweens_51() const { return ___sequencedTweens_51; }
	inline List_1_t3942566441 ** get_address_of_sequencedTweens_51() { return &___sequencedTweens_51; }
	inline void set_sequencedTweens_51(List_1_t3942566441 * value)
	{
		___sequencedTweens_51 = value;
		Il2CppCodeGenWriteBarrier(&___sequencedTweens_51, value);
	}

	inline static int32_t get_offset_of__sequencedObjs_52() { return static_cast<int32_t>(offsetof(Sequence_t110643099, ____sequencedObjs_52)); }
	inline List_1_t1653261852 * get__sequencedObjs_52() const { return ____sequencedObjs_52; }
	inline List_1_t1653261852 ** get_address_of__sequencedObjs_52() { return &____sequencedObjs_52; }
	inline void set__sequencedObjs_52(List_1_t1653261852 * value)
	{
		____sequencedObjs_52 = value;
		Il2CppCodeGenWriteBarrier(&____sequencedObjs_52, value);
	}

	inline static int32_t get_offset_of_lastTweenInsertTime_53() { return static_cast<int32_t>(offsetof(Sequence_t110643099, ___lastTweenInsertTime_53)); }
	inline float get_lastTweenInsertTime_53() const { return ___lastTweenInsertTime_53; }
	inline float* get_address_of_lastTweenInsertTime_53() { return &___lastTweenInsertTime_53; }
	inline void set_lastTweenInsertTime_53(float value)
	{
		___lastTweenInsertTime_53 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

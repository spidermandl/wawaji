#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "DOTween_DG_Tweening_AxisConstraint1244566668.h"

// System.Single[]
struct SingleU5BU5D_t577127397;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Plugins.Options.Vector3ArrayOptions
struct  Vector3ArrayOptions_t2672570171 
{
public:
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.Vector3ArrayOptions::axisConstraint
	int32_t ___axisConstraint_0;
	// System.Boolean DG.Tweening.Plugins.Options.Vector3ArrayOptions::snapping
	bool ___snapping_1;
	// System.Single[] DG.Tweening.Plugins.Options.Vector3ArrayOptions::durations
	SingleU5BU5D_t577127397* ___durations_2;

public:
	inline static int32_t get_offset_of_axisConstraint_0() { return static_cast<int32_t>(offsetof(Vector3ArrayOptions_t2672570171, ___axisConstraint_0)); }
	inline int32_t get_axisConstraint_0() const { return ___axisConstraint_0; }
	inline int32_t* get_address_of_axisConstraint_0() { return &___axisConstraint_0; }
	inline void set_axisConstraint_0(int32_t value)
	{
		___axisConstraint_0 = value;
	}

	inline static int32_t get_offset_of_snapping_1() { return static_cast<int32_t>(offsetof(Vector3ArrayOptions_t2672570171, ___snapping_1)); }
	inline bool get_snapping_1() const { return ___snapping_1; }
	inline bool* get_address_of_snapping_1() { return &___snapping_1; }
	inline void set_snapping_1(bool value)
	{
		___snapping_1 = value;
	}

	inline static int32_t get_offset_of_durations_2() { return static_cast<int32_t>(offsetof(Vector3ArrayOptions_t2672570171, ___durations_2)); }
	inline SingleU5BU5D_t577127397* get_durations_2() const { return ___durations_2; }
	inline SingleU5BU5D_t577127397** get_address_of_durations_2() { return &___durations_2; }
	inline void set_durations_2(SingleU5BU5D_t577127397* value)
	{
		___durations_2 = value;
		Il2CppCodeGenWriteBarrier(&___durations_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.Vector3ArrayOptions
struct Vector3ArrayOptions_t2672570171_marshaled_pinvoke
{
	int32_t ___axisConstraint_0;
	int32_t ___snapping_1;
	float* ___durations_2;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.Vector3ArrayOptions
struct Vector3ArrayOptions_t2672570171_marshaled_com
{
	int32_t ___axisConstraint_0;
	int32_t ___snapping_1;
	float* ___durations_2;
};

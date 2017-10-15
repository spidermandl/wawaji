#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.Transform[]
struct TransformU5BU5D_t3764228911;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Footer
struct  Footer_t1265171471  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Footer::radius
	float ___radius_2;
	// System.Single Footer::angle
	float ___angle_3;
	// System.Int32 Footer::divide
	int32_t ___divide_4;
	// UnityEngine.Vector3 Footer::initRotate
	Vector3_t2243707580  ___initRotate_5;
	// System.Single Footer::footFactor
	float ___footFactor_6;
	// UnityEngine.Transform[] Footer::quads
	TransformU5BU5D_t3764228911* ___quads_8;

public:
	inline static int32_t get_offset_of_radius_2() { return static_cast<int32_t>(offsetof(Footer_t1265171471, ___radius_2)); }
	inline float get_radius_2() const { return ___radius_2; }
	inline float* get_address_of_radius_2() { return &___radius_2; }
	inline void set_radius_2(float value)
	{
		___radius_2 = value;
	}

	inline static int32_t get_offset_of_angle_3() { return static_cast<int32_t>(offsetof(Footer_t1265171471, ___angle_3)); }
	inline float get_angle_3() const { return ___angle_3; }
	inline float* get_address_of_angle_3() { return &___angle_3; }
	inline void set_angle_3(float value)
	{
		___angle_3 = value;
	}

	inline static int32_t get_offset_of_divide_4() { return static_cast<int32_t>(offsetof(Footer_t1265171471, ___divide_4)); }
	inline int32_t get_divide_4() const { return ___divide_4; }
	inline int32_t* get_address_of_divide_4() { return &___divide_4; }
	inline void set_divide_4(int32_t value)
	{
		___divide_4 = value;
	}

	inline static int32_t get_offset_of_initRotate_5() { return static_cast<int32_t>(offsetof(Footer_t1265171471, ___initRotate_5)); }
	inline Vector3_t2243707580  get_initRotate_5() const { return ___initRotate_5; }
	inline Vector3_t2243707580 * get_address_of_initRotate_5() { return &___initRotate_5; }
	inline void set_initRotate_5(Vector3_t2243707580  value)
	{
		___initRotate_5 = value;
	}

	inline static int32_t get_offset_of_footFactor_6() { return static_cast<int32_t>(offsetof(Footer_t1265171471, ___footFactor_6)); }
	inline float get_footFactor_6() const { return ___footFactor_6; }
	inline float* get_address_of_footFactor_6() { return &___footFactor_6; }
	inline void set_footFactor_6(float value)
	{
		___footFactor_6 = value;
	}

	inline static int32_t get_offset_of_quads_8() { return static_cast<int32_t>(offsetof(Footer_t1265171471, ___quads_8)); }
	inline TransformU5BU5D_t3764228911* get_quads_8() const { return ___quads_8; }
	inline TransformU5BU5D_t3764228911** get_address_of_quads_8() { return &___quads_8; }
	inline void set_quads_8(TransformU5BU5D_t3764228911* value)
	{
		___quads_8 = value;
		Il2CppCodeGenWriteBarrier(&___quads_8, value);
	}
};

struct Footer_t1265171471_StaticFields
{
public:
	// UnityEngine.Vector3 Footer::initFootPos
	Vector3_t2243707580  ___initFootPos_7;

public:
	inline static int32_t get_offset_of_initFootPos_7() { return static_cast<int32_t>(offsetof(Footer_t1265171471_StaticFields, ___initFootPos_7)); }
	inline Vector3_t2243707580  get_initFootPos_7() const { return ___initFootPos_7; }
	inline Vector3_t2243707580 * get_address_of_initFootPos_7() { return &___initFootPos_7; }
	inline void set_initFootPos_7(Vector3_t2243707580  value)
	{
		___initFootPos_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

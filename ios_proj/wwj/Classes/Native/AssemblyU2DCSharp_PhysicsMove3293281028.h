#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_PhysicsMove_ForceType3609499072.h"
#include "UnityEngine_UnityEngine_ForceMode1856518252.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PhysicsMove
struct  PhysicsMove_t3293281028  : public MonoBehaviour_t1158329972
{
public:
	// PhysicsMove/ForceType PhysicsMove::forceType
	int32_t ___forceType_2;
	// UnityEngine.ForceMode PhysicsMove::forceMode
	int32_t ___forceMode_3;
	// System.Single PhysicsMove::speed
	float ___speed_4;
	// UnityEngine.Rigidbody PhysicsMove::rigid
	Rigidbody_t4233889191 * ___rigid_5;
	// UnityEngine.Vector3 PhysicsMove::inputMove
	Vector3_t2243707580  ___inputMove_6;

public:
	inline static int32_t get_offset_of_forceType_2() { return static_cast<int32_t>(offsetof(PhysicsMove_t3293281028, ___forceType_2)); }
	inline int32_t get_forceType_2() const { return ___forceType_2; }
	inline int32_t* get_address_of_forceType_2() { return &___forceType_2; }
	inline void set_forceType_2(int32_t value)
	{
		___forceType_2 = value;
	}

	inline static int32_t get_offset_of_forceMode_3() { return static_cast<int32_t>(offsetof(PhysicsMove_t3293281028, ___forceMode_3)); }
	inline int32_t get_forceMode_3() const { return ___forceMode_3; }
	inline int32_t* get_address_of_forceMode_3() { return &___forceMode_3; }
	inline void set_forceMode_3(int32_t value)
	{
		___forceMode_3 = value;
	}

	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(PhysicsMove_t3293281028, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_rigid_5() { return static_cast<int32_t>(offsetof(PhysicsMove_t3293281028, ___rigid_5)); }
	inline Rigidbody_t4233889191 * get_rigid_5() const { return ___rigid_5; }
	inline Rigidbody_t4233889191 ** get_address_of_rigid_5() { return &___rigid_5; }
	inline void set_rigid_5(Rigidbody_t4233889191 * value)
	{
		___rigid_5 = value;
		Il2CppCodeGenWriteBarrier(&___rigid_5, value);
	}

	inline static int32_t get_offset_of_inputMove_6() { return static_cast<int32_t>(offsetof(PhysicsMove_t3293281028, ___inputMove_6)); }
	inline Vector3_t2243707580  get_inputMove_6() const { return ___inputMove_6; }
	inline Vector3_t2243707580 * get_address_of_inputMove_6() { return &___inputMove_6; }
	inline void set_inputMove_6(Vector3_t2243707580  value)
	{
		___inputMove_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

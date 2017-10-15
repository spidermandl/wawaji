#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Nullable`1<UnityEngine.RaycastHit>>
struct Dictionary_2_t1702404705;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.HitTestContext
struct  HitTestContext_t605786066  : public Il2CppObject
{
public:

public:
};

struct HitTestContext_t605786066_StaticFields
{
public:
	// UnityEngine.Vector2 FairyGUI.HitTestContext::screenPoint
	Vector2_t2243707579  ___screenPoint_0;
	// UnityEngine.Vector3 FairyGUI.HitTestContext::worldPoint
	Vector3_t2243707580  ___worldPoint_1;
	// UnityEngine.Vector3 FairyGUI.HitTestContext::direction
	Vector3_t2243707580  ___direction_2;
	// System.Boolean FairyGUI.HitTestContext::forTouch
	bool ___forTouch_3;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Nullable`1<UnityEngine.RaycastHit>> FairyGUI.HitTestContext::raycastHits
	Dictionary_2_t1702404705 * ___raycastHits_4;

public:
	inline static int32_t get_offset_of_screenPoint_0() { return static_cast<int32_t>(offsetof(HitTestContext_t605786066_StaticFields, ___screenPoint_0)); }
	inline Vector2_t2243707579  get_screenPoint_0() const { return ___screenPoint_0; }
	inline Vector2_t2243707579 * get_address_of_screenPoint_0() { return &___screenPoint_0; }
	inline void set_screenPoint_0(Vector2_t2243707579  value)
	{
		___screenPoint_0 = value;
	}

	inline static int32_t get_offset_of_worldPoint_1() { return static_cast<int32_t>(offsetof(HitTestContext_t605786066_StaticFields, ___worldPoint_1)); }
	inline Vector3_t2243707580  get_worldPoint_1() const { return ___worldPoint_1; }
	inline Vector3_t2243707580 * get_address_of_worldPoint_1() { return &___worldPoint_1; }
	inline void set_worldPoint_1(Vector3_t2243707580  value)
	{
		___worldPoint_1 = value;
	}

	inline static int32_t get_offset_of_direction_2() { return static_cast<int32_t>(offsetof(HitTestContext_t605786066_StaticFields, ___direction_2)); }
	inline Vector3_t2243707580  get_direction_2() const { return ___direction_2; }
	inline Vector3_t2243707580 * get_address_of_direction_2() { return &___direction_2; }
	inline void set_direction_2(Vector3_t2243707580  value)
	{
		___direction_2 = value;
	}

	inline static int32_t get_offset_of_forTouch_3() { return static_cast<int32_t>(offsetof(HitTestContext_t605786066_StaticFields, ___forTouch_3)); }
	inline bool get_forTouch_3() const { return ___forTouch_3; }
	inline bool* get_address_of_forTouch_3() { return &___forTouch_3; }
	inline void set_forTouch_3(bool value)
	{
		___forTouch_3 = value;
	}

	inline static int32_t get_offset_of_raycastHits_4() { return static_cast<int32_t>(offsetof(HitTestContext_t605786066_StaticFields, ___raycastHits_4)); }
	inline Dictionary_2_t1702404705 * get_raycastHits_4() const { return ___raycastHits_4; }
	inline Dictionary_2_t1702404705 ** get_address_of_raycastHits_4() { return &___raycastHits_4; }
	inline void set_raycastHits_4(Dictionary_2_t1702404705 * value)
	{
		___raycastHits_4 = value;
		Il2CppCodeGenWriteBarrier(&___raycastHits_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

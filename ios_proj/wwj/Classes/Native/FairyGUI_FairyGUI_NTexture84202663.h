#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "mscorlib_System_Nullable_1_gen1944821941.h"

// UnityEngine.Texture
struct Texture_t2243626319;
// FairyGUI.NTexture
struct NTexture_t84202663;
// System.Collections.Generic.Dictionary`2<System.String,FairyGUI.MaterialManager>
struct Dictionary_2_t1525055368;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.NTexture
struct  NTexture_t84202663  : public Il2CppObject
{
public:
	// UnityEngine.Texture FairyGUI.NTexture::nativeTexture
	Texture_t2243626319 * ___nativeTexture_0;
	// FairyGUI.NTexture FairyGUI.NTexture::alphaTexture
	NTexture_t84202663 * ___alphaTexture_1;
	// FairyGUI.NTexture FairyGUI.NTexture::root
	NTexture_t84202663 * ___root_2;
	// UnityEngine.Rect FairyGUI.NTexture::uvRect
	Rect_t3681755626  ___uvRect_3;
	// System.Boolean FairyGUI.NTexture::rotated
	bool ___rotated_4;
	// System.Collections.Generic.Dictionary`2<System.String,FairyGUI.MaterialManager> FairyGUI.NTexture::materialManagers
	Dictionary_2_t1525055368 * ___materialManagers_5;
	// System.Int32 FairyGUI.NTexture::refCount
	int32_t ___refCount_6;
	// System.Boolean FairyGUI.NTexture::disposed
	bool ___disposed_7;
	// System.Single FairyGUI.NTexture::lastActive
	float ___lastActive_8;
	// System.Boolean FairyGUI.NTexture::storedODisk
	bool ___storedODisk_9;
	// System.Nullable`1<UnityEngine.Rect> FairyGUI.NTexture::_region
	Nullable_1_t1944821941  ____region_10;

public:
	inline static int32_t get_offset_of_nativeTexture_0() { return static_cast<int32_t>(offsetof(NTexture_t84202663, ___nativeTexture_0)); }
	inline Texture_t2243626319 * get_nativeTexture_0() const { return ___nativeTexture_0; }
	inline Texture_t2243626319 ** get_address_of_nativeTexture_0() { return &___nativeTexture_0; }
	inline void set_nativeTexture_0(Texture_t2243626319 * value)
	{
		___nativeTexture_0 = value;
		Il2CppCodeGenWriteBarrier(&___nativeTexture_0, value);
	}

	inline static int32_t get_offset_of_alphaTexture_1() { return static_cast<int32_t>(offsetof(NTexture_t84202663, ___alphaTexture_1)); }
	inline NTexture_t84202663 * get_alphaTexture_1() const { return ___alphaTexture_1; }
	inline NTexture_t84202663 ** get_address_of_alphaTexture_1() { return &___alphaTexture_1; }
	inline void set_alphaTexture_1(NTexture_t84202663 * value)
	{
		___alphaTexture_1 = value;
		Il2CppCodeGenWriteBarrier(&___alphaTexture_1, value);
	}

	inline static int32_t get_offset_of_root_2() { return static_cast<int32_t>(offsetof(NTexture_t84202663, ___root_2)); }
	inline NTexture_t84202663 * get_root_2() const { return ___root_2; }
	inline NTexture_t84202663 ** get_address_of_root_2() { return &___root_2; }
	inline void set_root_2(NTexture_t84202663 * value)
	{
		___root_2 = value;
		Il2CppCodeGenWriteBarrier(&___root_2, value);
	}

	inline static int32_t get_offset_of_uvRect_3() { return static_cast<int32_t>(offsetof(NTexture_t84202663, ___uvRect_3)); }
	inline Rect_t3681755626  get_uvRect_3() const { return ___uvRect_3; }
	inline Rect_t3681755626 * get_address_of_uvRect_3() { return &___uvRect_3; }
	inline void set_uvRect_3(Rect_t3681755626  value)
	{
		___uvRect_3 = value;
	}

	inline static int32_t get_offset_of_rotated_4() { return static_cast<int32_t>(offsetof(NTexture_t84202663, ___rotated_4)); }
	inline bool get_rotated_4() const { return ___rotated_4; }
	inline bool* get_address_of_rotated_4() { return &___rotated_4; }
	inline void set_rotated_4(bool value)
	{
		___rotated_4 = value;
	}

	inline static int32_t get_offset_of_materialManagers_5() { return static_cast<int32_t>(offsetof(NTexture_t84202663, ___materialManagers_5)); }
	inline Dictionary_2_t1525055368 * get_materialManagers_5() const { return ___materialManagers_5; }
	inline Dictionary_2_t1525055368 ** get_address_of_materialManagers_5() { return &___materialManagers_5; }
	inline void set_materialManagers_5(Dictionary_2_t1525055368 * value)
	{
		___materialManagers_5 = value;
		Il2CppCodeGenWriteBarrier(&___materialManagers_5, value);
	}

	inline static int32_t get_offset_of_refCount_6() { return static_cast<int32_t>(offsetof(NTexture_t84202663, ___refCount_6)); }
	inline int32_t get_refCount_6() const { return ___refCount_6; }
	inline int32_t* get_address_of_refCount_6() { return &___refCount_6; }
	inline void set_refCount_6(int32_t value)
	{
		___refCount_6 = value;
	}

	inline static int32_t get_offset_of_disposed_7() { return static_cast<int32_t>(offsetof(NTexture_t84202663, ___disposed_7)); }
	inline bool get_disposed_7() const { return ___disposed_7; }
	inline bool* get_address_of_disposed_7() { return &___disposed_7; }
	inline void set_disposed_7(bool value)
	{
		___disposed_7 = value;
	}

	inline static int32_t get_offset_of_lastActive_8() { return static_cast<int32_t>(offsetof(NTexture_t84202663, ___lastActive_8)); }
	inline float get_lastActive_8() const { return ___lastActive_8; }
	inline float* get_address_of_lastActive_8() { return &___lastActive_8; }
	inline void set_lastActive_8(float value)
	{
		___lastActive_8 = value;
	}

	inline static int32_t get_offset_of_storedODisk_9() { return static_cast<int32_t>(offsetof(NTexture_t84202663, ___storedODisk_9)); }
	inline bool get_storedODisk_9() const { return ___storedODisk_9; }
	inline bool* get_address_of_storedODisk_9() { return &___storedODisk_9; }
	inline void set_storedODisk_9(bool value)
	{
		___storedODisk_9 = value;
	}

	inline static int32_t get_offset_of__region_10() { return static_cast<int32_t>(offsetof(NTexture_t84202663, ____region_10)); }
	inline Nullable_1_t1944821941  get__region_10() const { return ____region_10; }
	inline Nullable_1_t1944821941 * get_address_of__region_10() { return &____region_10; }
	inline void set__region_10(Nullable_1_t1944821941  value)
	{
		____region_10 = value;
	}
};

struct NTexture_t84202663_StaticFields
{
public:
	// FairyGUI.NTexture FairyGUI.NTexture::_empty
	NTexture_t84202663 * ____empty_11;

public:
	inline static int32_t get_offset_of__empty_11() { return static_cast<int32_t>(offsetof(NTexture_t84202663_StaticFields, ____empty_11)); }
	inline NTexture_t84202663 * get__empty_11() const { return ____empty_11; }
	inline NTexture_t84202663 ** get_address_of__empty_11() { return &____empty_11; }
	inline void set__empty_11(NTexture_t84202663 * value)
	{
		____empty_11 = value;
		Il2CppCodeGenWriteBarrier(&____empty_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

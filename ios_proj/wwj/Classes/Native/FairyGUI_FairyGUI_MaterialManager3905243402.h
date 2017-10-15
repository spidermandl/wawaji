#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "FairyGUI_FairyGUI_BlendMode1553507618.h"

// FairyGUI.NTexture
struct NTexture_t84202663;
// System.String
struct String_t;
// FairyGUI.MaterialPool[]
struct MaterialPoolU5BU5D_t325388280;
// System.String[]
struct StringU5BU5D_t1642385972;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.MaterialManager
struct  MaterialManager_t3905243402  : public Il2CppObject
{
public:
	// FairyGUI.NTexture FairyGUI.MaterialManager::<texture>k__BackingField
	NTexture_t84202663 * ___U3CtextureU3Ek__BackingField_0;
	// System.String FairyGUI.MaterialManager::<shaderName>k__BackingField
	String_t* ___U3CshaderNameU3Ek__BackingField_1;
	// FairyGUI.MaterialPool[] FairyGUI.MaterialManager::_pools
	MaterialPoolU5BU5D_t325388280* ____pools_2;
	// System.String[] FairyGUI.MaterialManager::_keywords
	StringU5BU5D_t1642385972* ____keywords_3;
	// System.UInt32 FairyGUI.MaterialManager::frameId
	uint32_t ___frameId_4;
	// System.UInt32 FairyGUI.MaterialManager::clipId
	uint32_t ___clipId_5;
	// FairyGUI.BlendMode FairyGUI.MaterialManager::blendMode
	int32_t ___blendMode_6;

public:
	inline static int32_t get_offset_of_U3CtextureU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MaterialManager_t3905243402, ___U3CtextureU3Ek__BackingField_0)); }
	inline NTexture_t84202663 * get_U3CtextureU3Ek__BackingField_0() const { return ___U3CtextureU3Ek__BackingField_0; }
	inline NTexture_t84202663 ** get_address_of_U3CtextureU3Ek__BackingField_0() { return &___U3CtextureU3Ek__BackingField_0; }
	inline void set_U3CtextureU3Ek__BackingField_0(NTexture_t84202663 * value)
	{
		___U3CtextureU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CtextureU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CshaderNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MaterialManager_t3905243402, ___U3CshaderNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CshaderNameU3Ek__BackingField_1() const { return ___U3CshaderNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CshaderNameU3Ek__BackingField_1() { return &___U3CshaderNameU3Ek__BackingField_1; }
	inline void set_U3CshaderNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CshaderNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CshaderNameU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of__pools_2() { return static_cast<int32_t>(offsetof(MaterialManager_t3905243402, ____pools_2)); }
	inline MaterialPoolU5BU5D_t325388280* get__pools_2() const { return ____pools_2; }
	inline MaterialPoolU5BU5D_t325388280** get_address_of__pools_2() { return &____pools_2; }
	inline void set__pools_2(MaterialPoolU5BU5D_t325388280* value)
	{
		____pools_2 = value;
		Il2CppCodeGenWriteBarrier(&____pools_2, value);
	}

	inline static int32_t get_offset_of__keywords_3() { return static_cast<int32_t>(offsetof(MaterialManager_t3905243402, ____keywords_3)); }
	inline StringU5BU5D_t1642385972* get__keywords_3() const { return ____keywords_3; }
	inline StringU5BU5D_t1642385972** get_address_of__keywords_3() { return &____keywords_3; }
	inline void set__keywords_3(StringU5BU5D_t1642385972* value)
	{
		____keywords_3 = value;
		Il2CppCodeGenWriteBarrier(&____keywords_3, value);
	}

	inline static int32_t get_offset_of_frameId_4() { return static_cast<int32_t>(offsetof(MaterialManager_t3905243402, ___frameId_4)); }
	inline uint32_t get_frameId_4() const { return ___frameId_4; }
	inline uint32_t* get_address_of_frameId_4() { return &___frameId_4; }
	inline void set_frameId_4(uint32_t value)
	{
		___frameId_4 = value;
	}

	inline static int32_t get_offset_of_clipId_5() { return static_cast<int32_t>(offsetof(MaterialManager_t3905243402, ___clipId_5)); }
	inline uint32_t get_clipId_5() const { return ___clipId_5; }
	inline uint32_t* get_address_of_clipId_5() { return &___clipId_5; }
	inline void set_clipId_5(uint32_t value)
	{
		___clipId_5 = value;
	}

	inline static int32_t get_offset_of_blendMode_6() { return static_cast<int32_t>(offsetof(MaterialManager_t3905243402, ___blendMode_6)); }
	inline int32_t get_blendMode_6() const { return ___blendMode_6; }
	inline int32_t* get_address_of_blendMode_6() { return &___blendMode_6; }
	inline void set_blendMode_6(int32_t value)
	{
		___blendMode_6 = value;
	}
};

struct MaterialManager_t3905243402_StaticFields
{
public:
	// System.UInt32 FairyGUI.MaterialManager::_gCounter
	uint32_t ____gCounter_7;
	// System.String[] FairyGUI.MaterialManager::GRAYED
	StringU5BU5D_t1642385972* ___GRAYED_8;
	// System.String[] FairyGUI.MaterialManager::CLIPPED
	StringU5BU5D_t1642385972* ___CLIPPED_9;
	// System.String[] FairyGUI.MaterialManager::CLIPPED_GRAYED
	StringU5BU5D_t1642385972* ___CLIPPED_GRAYED_10;
	// System.String[] FairyGUI.MaterialManager::SOFT_CLIPPED
	StringU5BU5D_t1642385972* ___SOFT_CLIPPED_11;
	// System.String[] FairyGUI.MaterialManager::SOFT_CLIPPED_GRAYED
	StringU5BU5D_t1642385972* ___SOFT_CLIPPED_GRAYED_12;
	// System.String[] FairyGUI.MaterialManager::ALPHA_MASK
	StringU5BU5D_t1642385972* ___ALPHA_MASK_13;

public:
	inline static int32_t get_offset_of__gCounter_7() { return static_cast<int32_t>(offsetof(MaterialManager_t3905243402_StaticFields, ____gCounter_7)); }
	inline uint32_t get__gCounter_7() const { return ____gCounter_7; }
	inline uint32_t* get_address_of__gCounter_7() { return &____gCounter_7; }
	inline void set__gCounter_7(uint32_t value)
	{
		____gCounter_7 = value;
	}

	inline static int32_t get_offset_of_GRAYED_8() { return static_cast<int32_t>(offsetof(MaterialManager_t3905243402_StaticFields, ___GRAYED_8)); }
	inline StringU5BU5D_t1642385972* get_GRAYED_8() const { return ___GRAYED_8; }
	inline StringU5BU5D_t1642385972** get_address_of_GRAYED_8() { return &___GRAYED_8; }
	inline void set_GRAYED_8(StringU5BU5D_t1642385972* value)
	{
		___GRAYED_8 = value;
		Il2CppCodeGenWriteBarrier(&___GRAYED_8, value);
	}

	inline static int32_t get_offset_of_CLIPPED_9() { return static_cast<int32_t>(offsetof(MaterialManager_t3905243402_StaticFields, ___CLIPPED_9)); }
	inline StringU5BU5D_t1642385972* get_CLIPPED_9() const { return ___CLIPPED_9; }
	inline StringU5BU5D_t1642385972** get_address_of_CLIPPED_9() { return &___CLIPPED_9; }
	inline void set_CLIPPED_9(StringU5BU5D_t1642385972* value)
	{
		___CLIPPED_9 = value;
		Il2CppCodeGenWriteBarrier(&___CLIPPED_9, value);
	}

	inline static int32_t get_offset_of_CLIPPED_GRAYED_10() { return static_cast<int32_t>(offsetof(MaterialManager_t3905243402_StaticFields, ___CLIPPED_GRAYED_10)); }
	inline StringU5BU5D_t1642385972* get_CLIPPED_GRAYED_10() const { return ___CLIPPED_GRAYED_10; }
	inline StringU5BU5D_t1642385972** get_address_of_CLIPPED_GRAYED_10() { return &___CLIPPED_GRAYED_10; }
	inline void set_CLIPPED_GRAYED_10(StringU5BU5D_t1642385972* value)
	{
		___CLIPPED_GRAYED_10 = value;
		Il2CppCodeGenWriteBarrier(&___CLIPPED_GRAYED_10, value);
	}

	inline static int32_t get_offset_of_SOFT_CLIPPED_11() { return static_cast<int32_t>(offsetof(MaterialManager_t3905243402_StaticFields, ___SOFT_CLIPPED_11)); }
	inline StringU5BU5D_t1642385972* get_SOFT_CLIPPED_11() const { return ___SOFT_CLIPPED_11; }
	inline StringU5BU5D_t1642385972** get_address_of_SOFT_CLIPPED_11() { return &___SOFT_CLIPPED_11; }
	inline void set_SOFT_CLIPPED_11(StringU5BU5D_t1642385972* value)
	{
		___SOFT_CLIPPED_11 = value;
		Il2CppCodeGenWriteBarrier(&___SOFT_CLIPPED_11, value);
	}

	inline static int32_t get_offset_of_SOFT_CLIPPED_GRAYED_12() { return static_cast<int32_t>(offsetof(MaterialManager_t3905243402_StaticFields, ___SOFT_CLIPPED_GRAYED_12)); }
	inline StringU5BU5D_t1642385972* get_SOFT_CLIPPED_GRAYED_12() const { return ___SOFT_CLIPPED_GRAYED_12; }
	inline StringU5BU5D_t1642385972** get_address_of_SOFT_CLIPPED_GRAYED_12() { return &___SOFT_CLIPPED_GRAYED_12; }
	inline void set_SOFT_CLIPPED_GRAYED_12(StringU5BU5D_t1642385972* value)
	{
		___SOFT_CLIPPED_GRAYED_12 = value;
		Il2CppCodeGenWriteBarrier(&___SOFT_CLIPPED_GRAYED_12, value);
	}

	inline static int32_t get_offset_of_ALPHA_MASK_13() { return static_cast<int32_t>(offsetof(MaterialManager_t3905243402_StaticFields, ___ALPHA_MASK_13)); }
	inline StringU5BU5D_t1642385972* get_ALPHA_MASK_13() const { return ___ALPHA_MASK_13; }
	inline StringU5BU5D_t1642385972** get_address_of_ALPHA_MASK_13() { return &___ALPHA_MASK_13; }
	inline void set_ALPHA_MASK_13(StringU5BU5D_t1642385972* value)
	{
		___ALPHA_MASK_13 = value;
		Il2CppCodeGenWriteBarrier(&___ALPHA_MASK_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

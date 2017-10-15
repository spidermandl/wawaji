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

// UnityEngine.Material
struct Material_t193706927;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.NMaterial
struct  NMaterial_t1717867583  : public Il2CppObject
{
public:
	// System.UInt32 FairyGUI.NMaterial::frameId
	uint32_t ___frameId_0;
	// System.UInt32 FairyGUI.NMaterial::clipId
	uint32_t ___clipId_1;
	// System.Boolean FairyGUI.NMaterial::stencilSet
	bool ___stencilSet_2;
	// FairyGUI.BlendMode FairyGUI.NMaterial::blendMode
	int32_t ___blendMode_3;
	// System.Boolean FairyGUI.NMaterial::combined
	bool ___combined_4;
	// UnityEngine.Material FairyGUI.NMaterial::material
	Material_t193706927 * ___material_5;

public:
	inline static int32_t get_offset_of_frameId_0() { return static_cast<int32_t>(offsetof(NMaterial_t1717867583, ___frameId_0)); }
	inline uint32_t get_frameId_0() const { return ___frameId_0; }
	inline uint32_t* get_address_of_frameId_0() { return &___frameId_0; }
	inline void set_frameId_0(uint32_t value)
	{
		___frameId_0 = value;
	}

	inline static int32_t get_offset_of_clipId_1() { return static_cast<int32_t>(offsetof(NMaterial_t1717867583, ___clipId_1)); }
	inline uint32_t get_clipId_1() const { return ___clipId_1; }
	inline uint32_t* get_address_of_clipId_1() { return &___clipId_1; }
	inline void set_clipId_1(uint32_t value)
	{
		___clipId_1 = value;
	}

	inline static int32_t get_offset_of_stencilSet_2() { return static_cast<int32_t>(offsetof(NMaterial_t1717867583, ___stencilSet_2)); }
	inline bool get_stencilSet_2() const { return ___stencilSet_2; }
	inline bool* get_address_of_stencilSet_2() { return &___stencilSet_2; }
	inline void set_stencilSet_2(bool value)
	{
		___stencilSet_2 = value;
	}

	inline static int32_t get_offset_of_blendMode_3() { return static_cast<int32_t>(offsetof(NMaterial_t1717867583, ___blendMode_3)); }
	inline int32_t get_blendMode_3() const { return ___blendMode_3; }
	inline int32_t* get_address_of_blendMode_3() { return &___blendMode_3; }
	inline void set_blendMode_3(int32_t value)
	{
		___blendMode_3 = value;
	}

	inline static int32_t get_offset_of_combined_4() { return static_cast<int32_t>(offsetof(NMaterial_t1717867583, ___combined_4)); }
	inline bool get_combined_4() const { return ___combined_4; }
	inline bool* get_address_of_combined_4() { return &___combined_4; }
	inline void set_combined_4(bool value)
	{
		___combined_4 = value;
	}

	inline static int32_t get_offset_of_material_5() { return static_cast<int32_t>(offsetof(NMaterial_t1717867583, ___material_5)); }
	inline Material_t193706927 * get_material_5() const { return ___material_5; }
	inline Material_t193706927 ** get_address_of_material_5() { return &___material_5; }
	inline void set_material_5(Material_t193706927 * value)
	{
		___material_5 = value;
		Il2CppCodeGenWriteBarrier(&___material_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

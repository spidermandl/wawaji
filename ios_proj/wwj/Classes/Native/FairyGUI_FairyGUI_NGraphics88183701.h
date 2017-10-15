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
#include "mscorlib_System_Nullable_1_gen1196300318.h"
#include "mscorlib_System_Nullable_1_gen506773895.h"

// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t686124026;
// UnityEngine.Color32[]
struct Color32U5BU5D_t30278651;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// UnityEngine.MeshFilter
struct MeshFilter_t3026937449;
// UnityEngine.MeshRenderer
struct MeshRenderer_t1268241104;
// UnityEngine.Mesh
struct Mesh_t1356156583;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// FairyGUI.NGraphics/MeshModifier
struct MeshModifier_t2262098598;
// FairyGUI.NTexture
struct NTexture_t84202663;
// System.String
struct String_t;
// UnityEngine.Material
struct Material_t193706927;
// FairyGUI.MaterialManager
struct MaterialManager_t3905243402;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// FairyGUI.StencilEraser
struct StencilEraser_t775723774;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.NGraphics
struct  NGraphics_t88183701  : public Il2CppObject
{
public:
	// UnityEngine.Vector3[] FairyGUI.NGraphics::<vertices>k__BackingField
	Vector3U5BU5D_t1172311765* ___U3CverticesU3Ek__BackingField_0;
	// UnityEngine.Vector2[] FairyGUI.NGraphics::<uv>k__BackingField
	Vector2U5BU5D_t686124026* ___U3CuvU3Ek__BackingField_1;
	// UnityEngine.Color32[] FairyGUI.NGraphics::<colors>k__BackingField
	Color32U5BU5D_t30278651* ___U3CcolorsU3Ek__BackingField_2;
	// System.Int32[] FairyGUI.NGraphics::<triangles>k__BackingField
	Int32U5BU5D_t3030399641* ___U3CtrianglesU3Ek__BackingField_3;
	// System.Int32 FairyGUI.NGraphics::<vertCount>k__BackingField
	int32_t ___U3CvertCountU3Ek__BackingField_4;
	// UnityEngine.MeshFilter FairyGUI.NGraphics::<meshFilter>k__BackingField
	MeshFilter_t3026937449 * ___U3CmeshFilterU3Ek__BackingField_5;
	// UnityEngine.MeshRenderer FairyGUI.NGraphics::<meshRenderer>k__BackingField
	MeshRenderer_t1268241104 * ___U3CmeshRendererU3Ek__BackingField_6;
	// UnityEngine.Mesh FairyGUI.NGraphics::<mesh>k__BackingField
	Mesh_t1356156583 * ___U3CmeshU3Ek__BackingField_7;
	// UnityEngine.GameObject FairyGUI.NGraphics::<gameObject>k__BackingField
	GameObject_t1756533147 * ___U3CgameObjectU3Ek__BackingField_8;
	// System.Boolean FairyGUI.NGraphics::grayed
	bool ___grayed_9;
	// FairyGUI.BlendMode FairyGUI.NGraphics::blendMode
	int32_t ___blendMode_10;
	// System.Boolean FairyGUI.NGraphics::dontClip
	bool ___dontClip_11;
	// System.UInt32 FairyGUI.NGraphics::maskFrameId
	uint32_t ___maskFrameId_12;
	// System.Nullable`1<UnityEngine.Matrix4x4> FairyGUI.NGraphics::vertexMatrix
	Nullable_1_t1196300318  ___vertexMatrix_13;
	// System.Nullable`1<UnityEngine.Vector3> FairyGUI.NGraphics::cameraPosition
	Nullable_1_t506773895  ___cameraPosition_14;
	// FairyGUI.NGraphics/MeshModifier FairyGUI.NGraphics::meshModifier
	MeshModifier_t2262098598 * ___meshModifier_15;
	// FairyGUI.NTexture FairyGUI.NGraphics::_texture
	NTexture_t84202663 * ____texture_16;
	// System.String FairyGUI.NGraphics::_shader
	String_t* ____shader_17;
	// UnityEngine.Material FairyGUI.NGraphics::_material
	Material_t193706927 * ____material_18;
	// System.Boolean FairyGUI.NGraphics::_customMatarial
	bool ____customMatarial_19;
	// FairyGUI.MaterialManager FairyGUI.NGraphics::_manager
	MaterialManager_t3905243402 * ____manager_20;
	// System.String[] FairyGUI.NGraphics::_materialKeywords
	StringU5BU5D_t1642385972* ____materialKeywords_21;
	// System.Single FairyGUI.NGraphics::_alpha
	float ____alpha_22;
	// System.Byte[] FairyGUI.NGraphics::_alphaBackup
	ByteU5BU5D_t3397334013* ____alphaBackup_23;
	// FairyGUI.StencilEraser FairyGUI.NGraphics::_stencilEraser
	StencilEraser_t775723774 * ____stencilEraser_24;

public:
	inline static int32_t get_offset_of_U3CverticesU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(NGraphics_t88183701, ___U3CverticesU3Ek__BackingField_0)); }
	inline Vector3U5BU5D_t1172311765* get_U3CverticesU3Ek__BackingField_0() const { return ___U3CverticesU3Ek__BackingField_0; }
	inline Vector3U5BU5D_t1172311765** get_address_of_U3CverticesU3Ek__BackingField_0() { return &___U3CverticesU3Ek__BackingField_0; }
	inline void set_U3CverticesU3Ek__BackingField_0(Vector3U5BU5D_t1172311765* value)
	{
		___U3CverticesU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CverticesU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CuvU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(NGraphics_t88183701, ___U3CuvU3Ek__BackingField_1)); }
	inline Vector2U5BU5D_t686124026* get_U3CuvU3Ek__BackingField_1() const { return ___U3CuvU3Ek__BackingField_1; }
	inline Vector2U5BU5D_t686124026** get_address_of_U3CuvU3Ek__BackingField_1() { return &___U3CuvU3Ek__BackingField_1; }
	inline void set_U3CuvU3Ek__BackingField_1(Vector2U5BU5D_t686124026* value)
	{
		___U3CuvU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CuvU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_U3CcolorsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(NGraphics_t88183701, ___U3CcolorsU3Ek__BackingField_2)); }
	inline Color32U5BU5D_t30278651* get_U3CcolorsU3Ek__BackingField_2() const { return ___U3CcolorsU3Ek__BackingField_2; }
	inline Color32U5BU5D_t30278651** get_address_of_U3CcolorsU3Ek__BackingField_2() { return &___U3CcolorsU3Ek__BackingField_2; }
	inline void set_U3CcolorsU3Ek__BackingField_2(Color32U5BU5D_t30278651* value)
	{
		___U3CcolorsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CcolorsU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_U3CtrianglesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(NGraphics_t88183701, ___U3CtrianglesU3Ek__BackingField_3)); }
	inline Int32U5BU5D_t3030399641* get_U3CtrianglesU3Ek__BackingField_3() const { return ___U3CtrianglesU3Ek__BackingField_3; }
	inline Int32U5BU5D_t3030399641** get_address_of_U3CtrianglesU3Ek__BackingField_3() { return &___U3CtrianglesU3Ek__BackingField_3; }
	inline void set_U3CtrianglesU3Ek__BackingField_3(Int32U5BU5D_t3030399641* value)
	{
		___U3CtrianglesU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CtrianglesU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_U3CvertCountU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(NGraphics_t88183701, ___U3CvertCountU3Ek__BackingField_4)); }
	inline int32_t get_U3CvertCountU3Ek__BackingField_4() const { return ___U3CvertCountU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CvertCountU3Ek__BackingField_4() { return &___U3CvertCountU3Ek__BackingField_4; }
	inline void set_U3CvertCountU3Ek__BackingField_4(int32_t value)
	{
		___U3CvertCountU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CmeshFilterU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(NGraphics_t88183701, ___U3CmeshFilterU3Ek__BackingField_5)); }
	inline MeshFilter_t3026937449 * get_U3CmeshFilterU3Ek__BackingField_5() const { return ___U3CmeshFilterU3Ek__BackingField_5; }
	inline MeshFilter_t3026937449 ** get_address_of_U3CmeshFilterU3Ek__BackingField_5() { return &___U3CmeshFilterU3Ek__BackingField_5; }
	inline void set_U3CmeshFilterU3Ek__BackingField_5(MeshFilter_t3026937449 * value)
	{
		___U3CmeshFilterU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CmeshFilterU3Ek__BackingField_5, value);
	}

	inline static int32_t get_offset_of_U3CmeshRendererU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(NGraphics_t88183701, ___U3CmeshRendererU3Ek__BackingField_6)); }
	inline MeshRenderer_t1268241104 * get_U3CmeshRendererU3Ek__BackingField_6() const { return ___U3CmeshRendererU3Ek__BackingField_6; }
	inline MeshRenderer_t1268241104 ** get_address_of_U3CmeshRendererU3Ek__BackingField_6() { return &___U3CmeshRendererU3Ek__BackingField_6; }
	inline void set_U3CmeshRendererU3Ek__BackingField_6(MeshRenderer_t1268241104 * value)
	{
		___U3CmeshRendererU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CmeshRendererU3Ek__BackingField_6, value);
	}

	inline static int32_t get_offset_of_U3CmeshU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(NGraphics_t88183701, ___U3CmeshU3Ek__BackingField_7)); }
	inline Mesh_t1356156583 * get_U3CmeshU3Ek__BackingField_7() const { return ___U3CmeshU3Ek__BackingField_7; }
	inline Mesh_t1356156583 ** get_address_of_U3CmeshU3Ek__BackingField_7() { return &___U3CmeshU3Ek__BackingField_7; }
	inline void set_U3CmeshU3Ek__BackingField_7(Mesh_t1356156583 * value)
	{
		___U3CmeshU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CmeshU3Ek__BackingField_7, value);
	}

	inline static int32_t get_offset_of_U3CgameObjectU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(NGraphics_t88183701, ___U3CgameObjectU3Ek__BackingField_8)); }
	inline GameObject_t1756533147 * get_U3CgameObjectU3Ek__BackingField_8() const { return ___U3CgameObjectU3Ek__BackingField_8; }
	inline GameObject_t1756533147 ** get_address_of_U3CgameObjectU3Ek__BackingField_8() { return &___U3CgameObjectU3Ek__BackingField_8; }
	inline void set_U3CgameObjectU3Ek__BackingField_8(GameObject_t1756533147 * value)
	{
		___U3CgameObjectU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CgameObjectU3Ek__BackingField_8, value);
	}

	inline static int32_t get_offset_of_grayed_9() { return static_cast<int32_t>(offsetof(NGraphics_t88183701, ___grayed_9)); }
	inline bool get_grayed_9() const { return ___grayed_9; }
	inline bool* get_address_of_grayed_9() { return &___grayed_9; }
	inline void set_grayed_9(bool value)
	{
		___grayed_9 = value;
	}

	inline static int32_t get_offset_of_blendMode_10() { return static_cast<int32_t>(offsetof(NGraphics_t88183701, ___blendMode_10)); }
	inline int32_t get_blendMode_10() const { return ___blendMode_10; }
	inline int32_t* get_address_of_blendMode_10() { return &___blendMode_10; }
	inline void set_blendMode_10(int32_t value)
	{
		___blendMode_10 = value;
	}

	inline static int32_t get_offset_of_dontClip_11() { return static_cast<int32_t>(offsetof(NGraphics_t88183701, ___dontClip_11)); }
	inline bool get_dontClip_11() const { return ___dontClip_11; }
	inline bool* get_address_of_dontClip_11() { return &___dontClip_11; }
	inline void set_dontClip_11(bool value)
	{
		___dontClip_11 = value;
	}

	inline static int32_t get_offset_of_maskFrameId_12() { return static_cast<int32_t>(offsetof(NGraphics_t88183701, ___maskFrameId_12)); }
	inline uint32_t get_maskFrameId_12() const { return ___maskFrameId_12; }
	inline uint32_t* get_address_of_maskFrameId_12() { return &___maskFrameId_12; }
	inline void set_maskFrameId_12(uint32_t value)
	{
		___maskFrameId_12 = value;
	}

	inline static int32_t get_offset_of_vertexMatrix_13() { return static_cast<int32_t>(offsetof(NGraphics_t88183701, ___vertexMatrix_13)); }
	inline Nullable_1_t1196300318  get_vertexMatrix_13() const { return ___vertexMatrix_13; }
	inline Nullable_1_t1196300318 * get_address_of_vertexMatrix_13() { return &___vertexMatrix_13; }
	inline void set_vertexMatrix_13(Nullable_1_t1196300318  value)
	{
		___vertexMatrix_13 = value;
	}

	inline static int32_t get_offset_of_cameraPosition_14() { return static_cast<int32_t>(offsetof(NGraphics_t88183701, ___cameraPosition_14)); }
	inline Nullable_1_t506773895  get_cameraPosition_14() const { return ___cameraPosition_14; }
	inline Nullable_1_t506773895 * get_address_of_cameraPosition_14() { return &___cameraPosition_14; }
	inline void set_cameraPosition_14(Nullable_1_t506773895  value)
	{
		___cameraPosition_14 = value;
	}

	inline static int32_t get_offset_of_meshModifier_15() { return static_cast<int32_t>(offsetof(NGraphics_t88183701, ___meshModifier_15)); }
	inline MeshModifier_t2262098598 * get_meshModifier_15() const { return ___meshModifier_15; }
	inline MeshModifier_t2262098598 ** get_address_of_meshModifier_15() { return &___meshModifier_15; }
	inline void set_meshModifier_15(MeshModifier_t2262098598 * value)
	{
		___meshModifier_15 = value;
		Il2CppCodeGenWriteBarrier(&___meshModifier_15, value);
	}

	inline static int32_t get_offset_of__texture_16() { return static_cast<int32_t>(offsetof(NGraphics_t88183701, ____texture_16)); }
	inline NTexture_t84202663 * get__texture_16() const { return ____texture_16; }
	inline NTexture_t84202663 ** get_address_of__texture_16() { return &____texture_16; }
	inline void set__texture_16(NTexture_t84202663 * value)
	{
		____texture_16 = value;
		Il2CppCodeGenWriteBarrier(&____texture_16, value);
	}

	inline static int32_t get_offset_of__shader_17() { return static_cast<int32_t>(offsetof(NGraphics_t88183701, ____shader_17)); }
	inline String_t* get__shader_17() const { return ____shader_17; }
	inline String_t** get_address_of__shader_17() { return &____shader_17; }
	inline void set__shader_17(String_t* value)
	{
		____shader_17 = value;
		Il2CppCodeGenWriteBarrier(&____shader_17, value);
	}

	inline static int32_t get_offset_of__material_18() { return static_cast<int32_t>(offsetof(NGraphics_t88183701, ____material_18)); }
	inline Material_t193706927 * get__material_18() const { return ____material_18; }
	inline Material_t193706927 ** get_address_of__material_18() { return &____material_18; }
	inline void set__material_18(Material_t193706927 * value)
	{
		____material_18 = value;
		Il2CppCodeGenWriteBarrier(&____material_18, value);
	}

	inline static int32_t get_offset_of__customMatarial_19() { return static_cast<int32_t>(offsetof(NGraphics_t88183701, ____customMatarial_19)); }
	inline bool get__customMatarial_19() const { return ____customMatarial_19; }
	inline bool* get_address_of__customMatarial_19() { return &____customMatarial_19; }
	inline void set__customMatarial_19(bool value)
	{
		____customMatarial_19 = value;
	}

	inline static int32_t get_offset_of__manager_20() { return static_cast<int32_t>(offsetof(NGraphics_t88183701, ____manager_20)); }
	inline MaterialManager_t3905243402 * get__manager_20() const { return ____manager_20; }
	inline MaterialManager_t3905243402 ** get_address_of__manager_20() { return &____manager_20; }
	inline void set__manager_20(MaterialManager_t3905243402 * value)
	{
		____manager_20 = value;
		Il2CppCodeGenWriteBarrier(&____manager_20, value);
	}

	inline static int32_t get_offset_of__materialKeywords_21() { return static_cast<int32_t>(offsetof(NGraphics_t88183701, ____materialKeywords_21)); }
	inline StringU5BU5D_t1642385972* get__materialKeywords_21() const { return ____materialKeywords_21; }
	inline StringU5BU5D_t1642385972** get_address_of__materialKeywords_21() { return &____materialKeywords_21; }
	inline void set__materialKeywords_21(StringU5BU5D_t1642385972* value)
	{
		____materialKeywords_21 = value;
		Il2CppCodeGenWriteBarrier(&____materialKeywords_21, value);
	}

	inline static int32_t get_offset_of__alpha_22() { return static_cast<int32_t>(offsetof(NGraphics_t88183701, ____alpha_22)); }
	inline float get__alpha_22() const { return ____alpha_22; }
	inline float* get_address_of__alpha_22() { return &____alpha_22; }
	inline void set__alpha_22(float value)
	{
		____alpha_22 = value;
	}

	inline static int32_t get_offset_of__alphaBackup_23() { return static_cast<int32_t>(offsetof(NGraphics_t88183701, ____alphaBackup_23)); }
	inline ByteU5BU5D_t3397334013* get__alphaBackup_23() const { return ____alphaBackup_23; }
	inline ByteU5BU5D_t3397334013** get_address_of__alphaBackup_23() { return &____alphaBackup_23; }
	inline void set__alphaBackup_23(ByteU5BU5D_t3397334013* value)
	{
		____alphaBackup_23 = value;
		Il2CppCodeGenWriteBarrier(&____alphaBackup_23, value);
	}

	inline static int32_t get_offset_of__stencilEraser_24() { return static_cast<int32_t>(offsetof(NGraphics_t88183701, ____stencilEraser_24)); }
	inline StencilEraser_t775723774 * get__stencilEraser_24() const { return ____stencilEraser_24; }
	inline StencilEraser_t775723774 ** get_address_of__stencilEraser_24() { return &____stencilEraser_24; }
	inline void set__stencilEraser_24(StencilEraser_t775723774 * value)
	{
		____stencilEraser_24 = value;
		Il2CppCodeGenWriteBarrier(&____stencilEraser_24, value);
	}
};

struct NGraphics_t88183701_StaticFields
{
public:
	// System.Int32[] FairyGUI.NGraphics::TRIANGLES
	Int32U5BU5D_t3030399641* ___TRIANGLES_25;
	// System.Int32[] FairyGUI.NGraphics::TRIANGLES_9_GRID
	Int32U5BU5D_t3030399641* ___TRIANGLES_9_GRID_26;
	// System.Int32[] FairyGUI.NGraphics::TRIANGLES_4_GRID
	Int32U5BU5D_t3030399641* ___TRIANGLES_4_GRID_27;
	// System.Collections.Generic.List`1<System.Int32> FairyGUI.NGraphics::sRestIndices
	List_1_t1440998580 * ___sRestIndices_28;

public:
	inline static int32_t get_offset_of_TRIANGLES_25() { return static_cast<int32_t>(offsetof(NGraphics_t88183701_StaticFields, ___TRIANGLES_25)); }
	inline Int32U5BU5D_t3030399641* get_TRIANGLES_25() const { return ___TRIANGLES_25; }
	inline Int32U5BU5D_t3030399641** get_address_of_TRIANGLES_25() { return &___TRIANGLES_25; }
	inline void set_TRIANGLES_25(Int32U5BU5D_t3030399641* value)
	{
		___TRIANGLES_25 = value;
		Il2CppCodeGenWriteBarrier(&___TRIANGLES_25, value);
	}

	inline static int32_t get_offset_of_TRIANGLES_9_GRID_26() { return static_cast<int32_t>(offsetof(NGraphics_t88183701_StaticFields, ___TRIANGLES_9_GRID_26)); }
	inline Int32U5BU5D_t3030399641* get_TRIANGLES_9_GRID_26() const { return ___TRIANGLES_9_GRID_26; }
	inline Int32U5BU5D_t3030399641** get_address_of_TRIANGLES_9_GRID_26() { return &___TRIANGLES_9_GRID_26; }
	inline void set_TRIANGLES_9_GRID_26(Int32U5BU5D_t3030399641* value)
	{
		___TRIANGLES_9_GRID_26 = value;
		Il2CppCodeGenWriteBarrier(&___TRIANGLES_9_GRID_26, value);
	}

	inline static int32_t get_offset_of_TRIANGLES_4_GRID_27() { return static_cast<int32_t>(offsetof(NGraphics_t88183701_StaticFields, ___TRIANGLES_4_GRID_27)); }
	inline Int32U5BU5D_t3030399641* get_TRIANGLES_4_GRID_27() const { return ___TRIANGLES_4_GRID_27; }
	inline Int32U5BU5D_t3030399641** get_address_of_TRIANGLES_4_GRID_27() { return &___TRIANGLES_4_GRID_27; }
	inline void set_TRIANGLES_4_GRID_27(Int32U5BU5D_t3030399641* value)
	{
		___TRIANGLES_4_GRID_27 = value;
		Il2CppCodeGenWriteBarrier(&___TRIANGLES_4_GRID_27, value);
	}

	inline static int32_t get_offset_of_sRestIndices_28() { return static_cast<int32_t>(offsetof(NGraphics_t88183701_StaticFields, ___sRestIndices_28)); }
	inline List_1_t1440998580 * get_sRestIndices_28() const { return ___sRestIndices_28; }
	inline List_1_t1440998580 ** get_address_of_sRestIndices_28() { return &___sRestIndices_28; }
	inline void set_sRestIndices_28(List_1_t1440998580 * value)
	{
		___sRestIndices_28 = value;
		Il2CppCodeGenWriteBarrier(&___sRestIndices_28, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

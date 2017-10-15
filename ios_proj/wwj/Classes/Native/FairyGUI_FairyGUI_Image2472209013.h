#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "FairyGUI_FairyGUI_DisplayObject1069768653.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "FairyGUI_FairyGUI_FlipType1818175697.h"
#include "mscorlib_System_Nullable_1_gen1944821941.h"
#include "FairyGUI_FairyGUI_FillMethod3446087362.h"

// FairyGUI.NTexture
struct NTexture_t84202663;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Single[]
struct SingleU5BU5D_t577127397;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.Image
struct  Image_t2472209013  : public DisplayObject_t1069768653
{
public:
	// FairyGUI.NTexture FairyGUI.Image::_texture
	NTexture_t84202663 * ____texture_52;
	// UnityEngine.Color FairyGUI.Image::_color
	Color_t2020392075  ____color_53;
	// FairyGUI.FlipType FairyGUI.Image::_flip
	int32_t ____flip_54;
	// System.Nullable`1<UnityEngine.Rect> FairyGUI.Image::_scale9Grid
	Nullable_1_t1944821941  ____scale9Grid_55;
	// System.Boolean FairyGUI.Image::_scaleByTile
	bool ____scaleByTile_56;
	// System.Int32 FairyGUI.Image::_tileGridIndice
	int32_t ____tileGridIndice_57;
	// FairyGUI.FillMethod FairyGUI.Image::_fillMethod
	int32_t ____fillMethod_58;
	// System.Int32 FairyGUI.Image::_fillOrigin
	int32_t ____fillOrigin_59;
	// System.Single FairyGUI.Image::_fillAmount
	float ____fillAmount_60;
	// System.Boolean FairyGUI.Image::_fillClockwise
	bool ____fillClockwise_61;

public:
	inline static int32_t get_offset_of__texture_52() { return static_cast<int32_t>(offsetof(Image_t2472209013, ____texture_52)); }
	inline NTexture_t84202663 * get__texture_52() const { return ____texture_52; }
	inline NTexture_t84202663 ** get_address_of__texture_52() { return &____texture_52; }
	inline void set__texture_52(NTexture_t84202663 * value)
	{
		____texture_52 = value;
		Il2CppCodeGenWriteBarrier(&____texture_52, value);
	}

	inline static int32_t get_offset_of__color_53() { return static_cast<int32_t>(offsetof(Image_t2472209013, ____color_53)); }
	inline Color_t2020392075  get__color_53() const { return ____color_53; }
	inline Color_t2020392075 * get_address_of__color_53() { return &____color_53; }
	inline void set__color_53(Color_t2020392075  value)
	{
		____color_53 = value;
	}

	inline static int32_t get_offset_of__flip_54() { return static_cast<int32_t>(offsetof(Image_t2472209013, ____flip_54)); }
	inline int32_t get__flip_54() const { return ____flip_54; }
	inline int32_t* get_address_of__flip_54() { return &____flip_54; }
	inline void set__flip_54(int32_t value)
	{
		____flip_54 = value;
	}

	inline static int32_t get_offset_of__scale9Grid_55() { return static_cast<int32_t>(offsetof(Image_t2472209013, ____scale9Grid_55)); }
	inline Nullable_1_t1944821941  get__scale9Grid_55() const { return ____scale9Grid_55; }
	inline Nullable_1_t1944821941 * get_address_of__scale9Grid_55() { return &____scale9Grid_55; }
	inline void set__scale9Grid_55(Nullable_1_t1944821941  value)
	{
		____scale9Grid_55 = value;
	}

	inline static int32_t get_offset_of__scaleByTile_56() { return static_cast<int32_t>(offsetof(Image_t2472209013, ____scaleByTile_56)); }
	inline bool get__scaleByTile_56() const { return ____scaleByTile_56; }
	inline bool* get_address_of__scaleByTile_56() { return &____scaleByTile_56; }
	inline void set__scaleByTile_56(bool value)
	{
		____scaleByTile_56 = value;
	}

	inline static int32_t get_offset_of__tileGridIndice_57() { return static_cast<int32_t>(offsetof(Image_t2472209013, ____tileGridIndice_57)); }
	inline int32_t get__tileGridIndice_57() const { return ____tileGridIndice_57; }
	inline int32_t* get_address_of__tileGridIndice_57() { return &____tileGridIndice_57; }
	inline void set__tileGridIndice_57(int32_t value)
	{
		____tileGridIndice_57 = value;
	}

	inline static int32_t get_offset_of__fillMethod_58() { return static_cast<int32_t>(offsetof(Image_t2472209013, ____fillMethod_58)); }
	inline int32_t get__fillMethod_58() const { return ____fillMethod_58; }
	inline int32_t* get_address_of__fillMethod_58() { return &____fillMethod_58; }
	inline void set__fillMethod_58(int32_t value)
	{
		____fillMethod_58 = value;
	}

	inline static int32_t get_offset_of__fillOrigin_59() { return static_cast<int32_t>(offsetof(Image_t2472209013, ____fillOrigin_59)); }
	inline int32_t get__fillOrigin_59() const { return ____fillOrigin_59; }
	inline int32_t* get_address_of__fillOrigin_59() { return &____fillOrigin_59; }
	inline void set__fillOrigin_59(int32_t value)
	{
		____fillOrigin_59 = value;
	}

	inline static int32_t get_offset_of__fillAmount_60() { return static_cast<int32_t>(offsetof(Image_t2472209013, ____fillAmount_60)); }
	inline float get__fillAmount_60() const { return ____fillAmount_60; }
	inline float* get_address_of__fillAmount_60() { return &____fillAmount_60; }
	inline void set__fillAmount_60(float value)
	{
		____fillAmount_60 = value;
	}

	inline static int32_t get_offset_of__fillClockwise_61() { return static_cast<int32_t>(offsetof(Image_t2472209013, ____fillClockwise_61)); }
	inline bool get__fillClockwise_61() const { return ____fillClockwise_61; }
	inline bool* get_address_of__fillClockwise_61() { return &____fillClockwise_61; }
	inline void set__fillClockwise_61(bool value)
	{
		____fillClockwise_61 = value;
	}
};

struct Image_t2472209013_StaticFields
{
public:
	// System.Int32[] FairyGUI.Image::gridTileIndice
	Int32U5BU5D_t3030399641* ___gridTileIndice_62;
	// System.Single[] FairyGUI.Image::gridX
	SingleU5BU5D_t577127397* ___gridX_63;
	// System.Single[] FairyGUI.Image::gridY
	SingleU5BU5D_t577127397* ___gridY_64;
	// System.Single[] FairyGUI.Image::gridTexX
	SingleU5BU5D_t577127397* ___gridTexX_65;
	// System.Single[] FairyGUI.Image::gridTexY
	SingleU5BU5D_t577127397* ___gridTexY_66;

public:
	inline static int32_t get_offset_of_gridTileIndice_62() { return static_cast<int32_t>(offsetof(Image_t2472209013_StaticFields, ___gridTileIndice_62)); }
	inline Int32U5BU5D_t3030399641* get_gridTileIndice_62() const { return ___gridTileIndice_62; }
	inline Int32U5BU5D_t3030399641** get_address_of_gridTileIndice_62() { return &___gridTileIndice_62; }
	inline void set_gridTileIndice_62(Int32U5BU5D_t3030399641* value)
	{
		___gridTileIndice_62 = value;
		Il2CppCodeGenWriteBarrier(&___gridTileIndice_62, value);
	}

	inline static int32_t get_offset_of_gridX_63() { return static_cast<int32_t>(offsetof(Image_t2472209013_StaticFields, ___gridX_63)); }
	inline SingleU5BU5D_t577127397* get_gridX_63() const { return ___gridX_63; }
	inline SingleU5BU5D_t577127397** get_address_of_gridX_63() { return &___gridX_63; }
	inline void set_gridX_63(SingleU5BU5D_t577127397* value)
	{
		___gridX_63 = value;
		Il2CppCodeGenWriteBarrier(&___gridX_63, value);
	}

	inline static int32_t get_offset_of_gridY_64() { return static_cast<int32_t>(offsetof(Image_t2472209013_StaticFields, ___gridY_64)); }
	inline SingleU5BU5D_t577127397* get_gridY_64() const { return ___gridY_64; }
	inline SingleU5BU5D_t577127397** get_address_of_gridY_64() { return &___gridY_64; }
	inline void set_gridY_64(SingleU5BU5D_t577127397* value)
	{
		___gridY_64 = value;
		Il2CppCodeGenWriteBarrier(&___gridY_64, value);
	}

	inline static int32_t get_offset_of_gridTexX_65() { return static_cast<int32_t>(offsetof(Image_t2472209013_StaticFields, ___gridTexX_65)); }
	inline SingleU5BU5D_t577127397* get_gridTexX_65() const { return ___gridTexX_65; }
	inline SingleU5BU5D_t577127397** get_address_of_gridTexX_65() { return &___gridTexX_65; }
	inline void set_gridTexX_65(SingleU5BU5D_t577127397* value)
	{
		___gridTexX_65 = value;
		Il2CppCodeGenWriteBarrier(&___gridTexX_65, value);
	}

	inline static int32_t get_offset_of_gridTexY_66() { return static_cast<int32_t>(offsetof(Image_t2472209013_StaticFields, ___gridTexY_66)); }
	inline SingleU5BU5D_t577127397* get_gridTexY_66() const { return ___gridTexY_66; }
	inline SingleU5BU5D_t577127397** get_address_of_gridTexY_66() { return &___gridTexY_66; }
	inline void set_gridTexY_66(SingleU5BU5D_t577127397* value)
	{
		___gridTexY_66 = value;
		Il2CppCodeGenWriteBarrier(&___gridTexY_66, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

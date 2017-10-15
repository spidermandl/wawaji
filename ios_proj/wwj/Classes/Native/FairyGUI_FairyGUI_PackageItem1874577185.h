#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "FairyGUI_FairyGUI_PackageItemType4004503593.h"
#include "mscorlib_System_Nullable_1_gen1944821941.h"

// FairyGUI.UIPackage
struct UIPackage_t709416664;
// System.String
struct String_t;
// FairyGUI.NTexture
struct NTexture_t84202663;
// FairyGUI.MovieClip/Frame[]
struct FrameU5BU5D_t979088179;
// FairyGUI.Utils.XML
struct XML_t825954579;
// FairyGUI.DisplayListItem[]
struct DisplayListItemU5BU5D_t874187538;
// FairyGUI.UIObjectFactory/GComponentCreator
struct GComponentCreator_t2364767712;
// FairyGUI.BitmapFont
struct BitmapFont_t4118391604;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.PackageItem
struct  PackageItem_t1874577185  : public Il2CppObject
{
public:
	// FairyGUI.UIPackage FairyGUI.PackageItem::owner
	UIPackage_t709416664 * ___owner_0;
	// FairyGUI.PackageItemType FairyGUI.PackageItem::type
	int32_t ___type_1;
	// System.String FairyGUI.PackageItem::id
	String_t* ___id_2;
	// System.String FairyGUI.PackageItem::name
	String_t* ___name_3;
	// System.Int32 FairyGUI.PackageItem::width
	int32_t ___width_4;
	// System.Int32 FairyGUI.PackageItem::height
	int32_t ___height_5;
	// System.String FairyGUI.PackageItem::file
	String_t* ___file_6;
	// System.Boolean FairyGUI.PackageItem::decoded
	bool ___decoded_7;
	// System.Boolean FairyGUI.PackageItem::exported
	bool ___exported_8;
	// System.Nullable`1<UnityEngine.Rect> FairyGUI.PackageItem::scale9Grid
	Nullable_1_t1944821941  ___scale9Grid_9;
	// System.Boolean FairyGUI.PackageItem::scaleByTile
	bool ___scaleByTile_10;
	// System.Int32 FairyGUI.PackageItem::tileGridIndice
	int32_t ___tileGridIndice_11;
	// FairyGUI.NTexture FairyGUI.PackageItem::texture
	NTexture_t84202663 * ___texture_12;
	// System.Single FairyGUI.PackageItem::interval
	float ___interval_13;
	// System.Single FairyGUI.PackageItem::repeatDelay
	float ___repeatDelay_14;
	// System.Boolean FairyGUI.PackageItem::swing
	bool ___swing_15;
	// FairyGUI.MovieClip/Frame[] FairyGUI.PackageItem::frames
	FrameU5BU5D_t979088179* ___frames_16;
	// FairyGUI.Utils.XML FairyGUI.PackageItem::componentData
	XML_t825954579 * ___componentData_17;
	// FairyGUI.DisplayListItem[] FairyGUI.PackageItem::displayList
	DisplayListItemU5BU5D_t874187538* ___displayList_18;
	// FairyGUI.UIObjectFactory/GComponentCreator FairyGUI.PackageItem::extensionCreator
	GComponentCreator_t2364767712 * ___extensionCreator_19;
	// FairyGUI.BitmapFont FairyGUI.PackageItem::bitmapFont
	BitmapFont_t4118391604 * ___bitmapFont_20;
	// UnityEngine.AudioClip FairyGUI.PackageItem::audioClip
	AudioClip_t1932558630 * ___audioClip_21;
	// System.Byte[] FairyGUI.PackageItem::binary
	ByteU5BU5D_t3397334013* ___binary_22;

public:
	inline static int32_t get_offset_of_owner_0() { return static_cast<int32_t>(offsetof(PackageItem_t1874577185, ___owner_0)); }
	inline UIPackage_t709416664 * get_owner_0() const { return ___owner_0; }
	inline UIPackage_t709416664 ** get_address_of_owner_0() { return &___owner_0; }
	inline void set_owner_0(UIPackage_t709416664 * value)
	{
		___owner_0 = value;
		Il2CppCodeGenWriteBarrier(&___owner_0, value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(PackageItem_t1874577185, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_id_2() { return static_cast<int32_t>(offsetof(PackageItem_t1874577185, ___id_2)); }
	inline String_t* get_id_2() const { return ___id_2; }
	inline String_t** get_address_of_id_2() { return &___id_2; }
	inline void set_id_2(String_t* value)
	{
		___id_2 = value;
		Il2CppCodeGenWriteBarrier(&___id_2, value);
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(PackageItem_t1874577185, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier(&___name_3, value);
	}

	inline static int32_t get_offset_of_width_4() { return static_cast<int32_t>(offsetof(PackageItem_t1874577185, ___width_4)); }
	inline int32_t get_width_4() const { return ___width_4; }
	inline int32_t* get_address_of_width_4() { return &___width_4; }
	inline void set_width_4(int32_t value)
	{
		___width_4 = value;
	}

	inline static int32_t get_offset_of_height_5() { return static_cast<int32_t>(offsetof(PackageItem_t1874577185, ___height_5)); }
	inline int32_t get_height_5() const { return ___height_5; }
	inline int32_t* get_address_of_height_5() { return &___height_5; }
	inline void set_height_5(int32_t value)
	{
		___height_5 = value;
	}

	inline static int32_t get_offset_of_file_6() { return static_cast<int32_t>(offsetof(PackageItem_t1874577185, ___file_6)); }
	inline String_t* get_file_6() const { return ___file_6; }
	inline String_t** get_address_of_file_6() { return &___file_6; }
	inline void set_file_6(String_t* value)
	{
		___file_6 = value;
		Il2CppCodeGenWriteBarrier(&___file_6, value);
	}

	inline static int32_t get_offset_of_decoded_7() { return static_cast<int32_t>(offsetof(PackageItem_t1874577185, ___decoded_7)); }
	inline bool get_decoded_7() const { return ___decoded_7; }
	inline bool* get_address_of_decoded_7() { return &___decoded_7; }
	inline void set_decoded_7(bool value)
	{
		___decoded_7 = value;
	}

	inline static int32_t get_offset_of_exported_8() { return static_cast<int32_t>(offsetof(PackageItem_t1874577185, ___exported_8)); }
	inline bool get_exported_8() const { return ___exported_8; }
	inline bool* get_address_of_exported_8() { return &___exported_8; }
	inline void set_exported_8(bool value)
	{
		___exported_8 = value;
	}

	inline static int32_t get_offset_of_scale9Grid_9() { return static_cast<int32_t>(offsetof(PackageItem_t1874577185, ___scale9Grid_9)); }
	inline Nullable_1_t1944821941  get_scale9Grid_9() const { return ___scale9Grid_9; }
	inline Nullable_1_t1944821941 * get_address_of_scale9Grid_9() { return &___scale9Grid_9; }
	inline void set_scale9Grid_9(Nullable_1_t1944821941  value)
	{
		___scale9Grid_9 = value;
	}

	inline static int32_t get_offset_of_scaleByTile_10() { return static_cast<int32_t>(offsetof(PackageItem_t1874577185, ___scaleByTile_10)); }
	inline bool get_scaleByTile_10() const { return ___scaleByTile_10; }
	inline bool* get_address_of_scaleByTile_10() { return &___scaleByTile_10; }
	inline void set_scaleByTile_10(bool value)
	{
		___scaleByTile_10 = value;
	}

	inline static int32_t get_offset_of_tileGridIndice_11() { return static_cast<int32_t>(offsetof(PackageItem_t1874577185, ___tileGridIndice_11)); }
	inline int32_t get_tileGridIndice_11() const { return ___tileGridIndice_11; }
	inline int32_t* get_address_of_tileGridIndice_11() { return &___tileGridIndice_11; }
	inline void set_tileGridIndice_11(int32_t value)
	{
		___tileGridIndice_11 = value;
	}

	inline static int32_t get_offset_of_texture_12() { return static_cast<int32_t>(offsetof(PackageItem_t1874577185, ___texture_12)); }
	inline NTexture_t84202663 * get_texture_12() const { return ___texture_12; }
	inline NTexture_t84202663 ** get_address_of_texture_12() { return &___texture_12; }
	inline void set_texture_12(NTexture_t84202663 * value)
	{
		___texture_12 = value;
		Il2CppCodeGenWriteBarrier(&___texture_12, value);
	}

	inline static int32_t get_offset_of_interval_13() { return static_cast<int32_t>(offsetof(PackageItem_t1874577185, ___interval_13)); }
	inline float get_interval_13() const { return ___interval_13; }
	inline float* get_address_of_interval_13() { return &___interval_13; }
	inline void set_interval_13(float value)
	{
		___interval_13 = value;
	}

	inline static int32_t get_offset_of_repeatDelay_14() { return static_cast<int32_t>(offsetof(PackageItem_t1874577185, ___repeatDelay_14)); }
	inline float get_repeatDelay_14() const { return ___repeatDelay_14; }
	inline float* get_address_of_repeatDelay_14() { return &___repeatDelay_14; }
	inline void set_repeatDelay_14(float value)
	{
		___repeatDelay_14 = value;
	}

	inline static int32_t get_offset_of_swing_15() { return static_cast<int32_t>(offsetof(PackageItem_t1874577185, ___swing_15)); }
	inline bool get_swing_15() const { return ___swing_15; }
	inline bool* get_address_of_swing_15() { return &___swing_15; }
	inline void set_swing_15(bool value)
	{
		___swing_15 = value;
	}

	inline static int32_t get_offset_of_frames_16() { return static_cast<int32_t>(offsetof(PackageItem_t1874577185, ___frames_16)); }
	inline FrameU5BU5D_t979088179* get_frames_16() const { return ___frames_16; }
	inline FrameU5BU5D_t979088179** get_address_of_frames_16() { return &___frames_16; }
	inline void set_frames_16(FrameU5BU5D_t979088179* value)
	{
		___frames_16 = value;
		Il2CppCodeGenWriteBarrier(&___frames_16, value);
	}

	inline static int32_t get_offset_of_componentData_17() { return static_cast<int32_t>(offsetof(PackageItem_t1874577185, ___componentData_17)); }
	inline XML_t825954579 * get_componentData_17() const { return ___componentData_17; }
	inline XML_t825954579 ** get_address_of_componentData_17() { return &___componentData_17; }
	inline void set_componentData_17(XML_t825954579 * value)
	{
		___componentData_17 = value;
		Il2CppCodeGenWriteBarrier(&___componentData_17, value);
	}

	inline static int32_t get_offset_of_displayList_18() { return static_cast<int32_t>(offsetof(PackageItem_t1874577185, ___displayList_18)); }
	inline DisplayListItemU5BU5D_t874187538* get_displayList_18() const { return ___displayList_18; }
	inline DisplayListItemU5BU5D_t874187538** get_address_of_displayList_18() { return &___displayList_18; }
	inline void set_displayList_18(DisplayListItemU5BU5D_t874187538* value)
	{
		___displayList_18 = value;
		Il2CppCodeGenWriteBarrier(&___displayList_18, value);
	}

	inline static int32_t get_offset_of_extensionCreator_19() { return static_cast<int32_t>(offsetof(PackageItem_t1874577185, ___extensionCreator_19)); }
	inline GComponentCreator_t2364767712 * get_extensionCreator_19() const { return ___extensionCreator_19; }
	inline GComponentCreator_t2364767712 ** get_address_of_extensionCreator_19() { return &___extensionCreator_19; }
	inline void set_extensionCreator_19(GComponentCreator_t2364767712 * value)
	{
		___extensionCreator_19 = value;
		Il2CppCodeGenWriteBarrier(&___extensionCreator_19, value);
	}

	inline static int32_t get_offset_of_bitmapFont_20() { return static_cast<int32_t>(offsetof(PackageItem_t1874577185, ___bitmapFont_20)); }
	inline BitmapFont_t4118391604 * get_bitmapFont_20() const { return ___bitmapFont_20; }
	inline BitmapFont_t4118391604 ** get_address_of_bitmapFont_20() { return &___bitmapFont_20; }
	inline void set_bitmapFont_20(BitmapFont_t4118391604 * value)
	{
		___bitmapFont_20 = value;
		Il2CppCodeGenWriteBarrier(&___bitmapFont_20, value);
	}

	inline static int32_t get_offset_of_audioClip_21() { return static_cast<int32_t>(offsetof(PackageItem_t1874577185, ___audioClip_21)); }
	inline AudioClip_t1932558630 * get_audioClip_21() const { return ___audioClip_21; }
	inline AudioClip_t1932558630 ** get_address_of_audioClip_21() { return &___audioClip_21; }
	inline void set_audioClip_21(AudioClip_t1932558630 * value)
	{
		___audioClip_21 = value;
		Il2CppCodeGenWriteBarrier(&___audioClip_21, value);
	}

	inline static int32_t get_offset_of_binary_22() { return static_cast<int32_t>(offsetof(PackageItem_t1874577185, ___binary_22)); }
	inline ByteU5BU5D_t3397334013* get_binary_22() const { return ___binary_22; }
	inline ByteU5BU5D_t3397334013** get_address_of_binary_22() { return &___binary_22; }
	inline void set_binary_22(ByteU5BU5D_t3397334013* value)
	{
		___binary_22 = value;
		Il2CppCodeGenWriteBarrier(&___binary_22, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

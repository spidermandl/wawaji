#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;
// System.Collections.Generic.List`1<FairyGUI.PackageItem>
struct List_1_t1243698317;
// System.Collections.Generic.Dictionary`2<System.String,FairyGUI.PackageItem>
struct Dictionary_2_t3789356447;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// System.Collections.Generic.Dictionary`2<System.String,FairyGUI.PixelHitTestData>
struct Dictionary_2_t3754064859;
// UnityEngine.AssetBundle
struct AssetBundle_t2054978754;
// System.Collections.Generic.Dictionary`2<System.String,FairyGUI.UIPackage/AtlasSprite>
struct Dictionary_2_t1131981315;
// FairyGUI.UIPackage/LoadResource
struct LoadResource_t349909247;
// System.Collections.Generic.Dictionary`2<System.String,FairyGUI.UIPackage>
struct Dictionary_2_t2624195926;
// System.Collections.Generic.List`1<FairyGUI.UIPackage>
struct List_1_t78537796;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Dictionary_2_t1563811461;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.UIPackage
struct  UIPackage_t709416664  : public Il2CppObject
{
public:
	// System.String FairyGUI.UIPackage::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.String FairyGUI.UIPackage::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_1;
	// System.String FairyGUI.UIPackage::<assetPath>k__BackingField
	String_t* ___U3CassetPathU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<FairyGUI.PackageItem> FairyGUI.UIPackage::_items
	List_1_t1243698317 * ____items_3;
	// System.Collections.Generic.Dictionary`2<System.String,FairyGUI.PackageItem> FairyGUI.UIPackage::_itemsById
	Dictionary_2_t3789356447 * ____itemsById_4;
	// System.Collections.Generic.Dictionary`2<System.String,FairyGUI.PackageItem> FairyGUI.UIPackage::_itemsByName
	Dictionary_2_t3789356447 * ____itemsByName_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> FairyGUI.UIPackage::_descPack
	Dictionary_2_t3943999495 * ____descPack_6;
	// System.Collections.Generic.Dictionary`2<System.String,FairyGUI.PixelHitTestData> FairyGUI.UIPackage::_hitTestDatas
	Dictionary_2_t3754064859 * ____hitTestDatas_7;
	// UnityEngine.AssetBundle FairyGUI.UIPackage::_resBundle
	AssetBundle_t2054978754 * ____resBundle_8;
	// System.String FairyGUI.UIPackage::_assetNamePrefix
	String_t* ____assetNamePrefix_9;
	// System.String FairyGUI.UIPackage::_customId
	String_t* ____customId_10;
	// System.Boolean FairyGUI.UIPackage::_fromBundle
	bool ____fromBundle_11;
	// System.Boolean FairyGUI.UIPackage::_loadingPackage
	bool ____loadingPackage_12;
	// System.Collections.Generic.Dictionary`2<System.String,FairyGUI.UIPackage/AtlasSprite> FairyGUI.UIPackage::_sprites
	Dictionary_2_t1131981315 * ____sprites_13;
	// FairyGUI.UIPackage/LoadResource FairyGUI.UIPackage::_loadFunc
	LoadResource_t349909247 * ____loadFunc_14;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(UIPackage_t709416664, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CidU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(UIPackage_t709416664, ___U3CnameU3Ek__BackingField_1)); }
	inline String_t* get_U3CnameU3Ek__BackingField_1() const { return ___U3CnameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_1() { return &___U3CnameU3Ek__BackingField_1; }
	inline void set_U3CnameU3Ek__BackingField_1(String_t* value)
	{
		___U3CnameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CnameU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_U3CassetPathU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UIPackage_t709416664, ___U3CassetPathU3Ek__BackingField_2)); }
	inline String_t* get_U3CassetPathU3Ek__BackingField_2() const { return ___U3CassetPathU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CassetPathU3Ek__BackingField_2() { return &___U3CassetPathU3Ek__BackingField_2; }
	inline void set_U3CassetPathU3Ek__BackingField_2(String_t* value)
	{
		___U3CassetPathU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CassetPathU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of__items_3() { return static_cast<int32_t>(offsetof(UIPackage_t709416664, ____items_3)); }
	inline List_1_t1243698317 * get__items_3() const { return ____items_3; }
	inline List_1_t1243698317 ** get_address_of__items_3() { return &____items_3; }
	inline void set__items_3(List_1_t1243698317 * value)
	{
		____items_3 = value;
		Il2CppCodeGenWriteBarrier(&____items_3, value);
	}

	inline static int32_t get_offset_of__itemsById_4() { return static_cast<int32_t>(offsetof(UIPackage_t709416664, ____itemsById_4)); }
	inline Dictionary_2_t3789356447 * get__itemsById_4() const { return ____itemsById_4; }
	inline Dictionary_2_t3789356447 ** get_address_of__itemsById_4() { return &____itemsById_4; }
	inline void set__itemsById_4(Dictionary_2_t3789356447 * value)
	{
		____itemsById_4 = value;
		Il2CppCodeGenWriteBarrier(&____itemsById_4, value);
	}

	inline static int32_t get_offset_of__itemsByName_5() { return static_cast<int32_t>(offsetof(UIPackage_t709416664, ____itemsByName_5)); }
	inline Dictionary_2_t3789356447 * get__itemsByName_5() const { return ____itemsByName_5; }
	inline Dictionary_2_t3789356447 ** get_address_of__itemsByName_5() { return &____itemsByName_5; }
	inline void set__itemsByName_5(Dictionary_2_t3789356447 * value)
	{
		____itemsByName_5 = value;
		Il2CppCodeGenWriteBarrier(&____itemsByName_5, value);
	}

	inline static int32_t get_offset_of__descPack_6() { return static_cast<int32_t>(offsetof(UIPackage_t709416664, ____descPack_6)); }
	inline Dictionary_2_t3943999495 * get__descPack_6() const { return ____descPack_6; }
	inline Dictionary_2_t3943999495 ** get_address_of__descPack_6() { return &____descPack_6; }
	inline void set__descPack_6(Dictionary_2_t3943999495 * value)
	{
		____descPack_6 = value;
		Il2CppCodeGenWriteBarrier(&____descPack_6, value);
	}

	inline static int32_t get_offset_of__hitTestDatas_7() { return static_cast<int32_t>(offsetof(UIPackage_t709416664, ____hitTestDatas_7)); }
	inline Dictionary_2_t3754064859 * get__hitTestDatas_7() const { return ____hitTestDatas_7; }
	inline Dictionary_2_t3754064859 ** get_address_of__hitTestDatas_7() { return &____hitTestDatas_7; }
	inline void set__hitTestDatas_7(Dictionary_2_t3754064859 * value)
	{
		____hitTestDatas_7 = value;
		Il2CppCodeGenWriteBarrier(&____hitTestDatas_7, value);
	}

	inline static int32_t get_offset_of__resBundle_8() { return static_cast<int32_t>(offsetof(UIPackage_t709416664, ____resBundle_8)); }
	inline AssetBundle_t2054978754 * get__resBundle_8() const { return ____resBundle_8; }
	inline AssetBundle_t2054978754 ** get_address_of__resBundle_8() { return &____resBundle_8; }
	inline void set__resBundle_8(AssetBundle_t2054978754 * value)
	{
		____resBundle_8 = value;
		Il2CppCodeGenWriteBarrier(&____resBundle_8, value);
	}

	inline static int32_t get_offset_of__assetNamePrefix_9() { return static_cast<int32_t>(offsetof(UIPackage_t709416664, ____assetNamePrefix_9)); }
	inline String_t* get__assetNamePrefix_9() const { return ____assetNamePrefix_9; }
	inline String_t** get_address_of__assetNamePrefix_9() { return &____assetNamePrefix_9; }
	inline void set__assetNamePrefix_9(String_t* value)
	{
		____assetNamePrefix_9 = value;
		Il2CppCodeGenWriteBarrier(&____assetNamePrefix_9, value);
	}

	inline static int32_t get_offset_of__customId_10() { return static_cast<int32_t>(offsetof(UIPackage_t709416664, ____customId_10)); }
	inline String_t* get__customId_10() const { return ____customId_10; }
	inline String_t** get_address_of__customId_10() { return &____customId_10; }
	inline void set__customId_10(String_t* value)
	{
		____customId_10 = value;
		Il2CppCodeGenWriteBarrier(&____customId_10, value);
	}

	inline static int32_t get_offset_of__fromBundle_11() { return static_cast<int32_t>(offsetof(UIPackage_t709416664, ____fromBundle_11)); }
	inline bool get__fromBundle_11() const { return ____fromBundle_11; }
	inline bool* get_address_of__fromBundle_11() { return &____fromBundle_11; }
	inline void set__fromBundle_11(bool value)
	{
		____fromBundle_11 = value;
	}

	inline static int32_t get_offset_of__loadingPackage_12() { return static_cast<int32_t>(offsetof(UIPackage_t709416664, ____loadingPackage_12)); }
	inline bool get__loadingPackage_12() const { return ____loadingPackage_12; }
	inline bool* get_address_of__loadingPackage_12() { return &____loadingPackage_12; }
	inline void set__loadingPackage_12(bool value)
	{
		____loadingPackage_12 = value;
	}

	inline static int32_t get_offset_of__sprites_13() { return static_cast<int32_t>(offsetof(UIPackage_t709416664, ____sprites_13)); }
	inline Dictionary_2_t1131981315 * get__sprites_13() const { return ____sprites_13; }
	inline Dictionary_2_t1131981315 ** get_address_of__sprites_13() { return &____sprites_13; }
	inline void set__sprites_13(Dictionary_2_t1131981315 * value)
	{
		____sprites_13 = value;
		Il2CppCodeGenWriteBarrier(&____sprites_13, value);
	}

	inline static int32_t get_offset_of__loadFunc_14() { return static_cast<int32_t>(offsetof(UIPackage_t709416664, ____loadFunc_14)); }
	inline LoadResource_t349909247 * get__loadFunc_14() const { return ____loadFunc_14; }
	inline LoadResource_t349909247 ** get_address_of__loadFunc_14() { return &____loadFunc_14; }
	inline void set__loadFunc_14(LoadResource_t349909247 * value)
	{
		____loadFunc_14 = value;
		Il2CppCodeGenWriteBarrier(&____loadFunc_14, value);
	}
};

struct UIPackage_t709416664_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,FairyGUI.UIPackage> FairyGUI.UIPackage::_packageInstById
	Dictionary_2_t2624195926 * ____packageInstById_15;
	// System.Collections.Generic.Dictionary`2<System.String,FairyGUI.UIPackage> FairyGUI.UIPackage::_packageInstByName
	Dictionary_2_t2624195926 * ____packageInstByName_16;
	// System.Collections.Generic.List`1<FairyGUI.UIPackage> FairyGUI.UIPackage::_packageList
	List_1_t78537796 * ____packageList_17;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>> FairyGUI.UIPackage::_stringsSource
	Dictionary_2_t1563811461 * ____stringsSource_18;
	// System.Int32 FairyGUI.UIPackage::_constructing
	int32_t ____constructing_19;
	// System.String FairyGUI.UIPackage::URL_PREFIX
	String_t* ___URL_PREFIX_20;

public:
	inline static int32_t get_offset_of__packageInstById_15() { return static_cast<int32_t>(offsetof(UIPackage_t709416664_StaticFields, ____packageInstById_15)); }
	inline Dictionary_2_t2624195926 * get__packageInstById_15() const { return ____packageInstById_15; }
	inline Dictionary_2_t2624195926 ** get_address_of__packageInstById_15() { return &____packageInstById_15; }
	inline void set__packageInstById_15(Dictionary_2_t2624195926 * value)
	{
		____packageInstById_15 = value;
		Il2CppCodeGenWriteBarrier(&____packageInstById_15, value);
	}

	inline static int32_t get_offset_of__packageInstByName_16() { return static_cast<int32_t>(offsetof(UIPackage_t709416664_StaticFields, ____packageInstByName_16)); }
	inline Dictionary_2_t2624195926 * get__packageInstByName_16() const { return ____packageInstByName_16; }
	inline Dictionary_2_t2624195926 ** get_address_of__packageInstByName_16() { return &____packageInstByName_16; }
	inline void set__packageInstByName_16(Dictionary_2_t2624195926 * value)
	{
		____packageInstByName_16 = value;
		Il2CppCodeGenWriteBarrier(&____packageInstByName_16, value);
	}

	inline static int32_t get_offset_of__packageList_17() { return static_cast<int32_t>(offsetof(UIPackage_t709416664_StaticFields, ____packageList_17)); }
	inline List_1_t78537796 * get__packageList_17() const { return ____packageList_17; }
	inline List_1_t78537796 ** get_address_of__packageList_17() { return &____packageList_17; }
	inline void set__packageList_17(List_1_t78537796 * value)
	{
		____packageList_17 = value;
		Il2CppCodeGenWriteBarrier(&____packageList_17, value);
	}

	inline static int32_t get_offset_of__stringsSource_18() { return static_cast<int32_t>(offsetof(UIPackage_t709416664_StaticFields, ____stringsSource_18)); }
	inline Dictionary_2_t1563811461 * get__stringsSource_18() const { return ____stringsSource_18; }
	inline Dictionary_2_t1563811461 ** get_address_of__stringsSource_18() { return &____stringsSource_18; }
	inline void set__stringsSource_18(Dictionary_2_t1563811461 * value)
	{
		____stringsSource_18 = value;
		Il2CppCodeGenWriteBarrier(&____stringsSource_18, value);
	}

	inline static int32_t get_offset_of__constructing_19() { return static_cast<int32_t>(offsetof(UIPackage_t709416664_StaticFields, ____constructing_19)); }
	inline int32_t get__constructing_19() const { return ____constructing_19; }
	inline int32_t* get_address_of__constructing_19() { return &____constructing_19; }
	inline void set__constructing_19(int32_t value)
	{
		____constructing_19 = value;
	}

	inline static int32_t get_offset_of_URL_PREFIX_20() { return static_cast<int32_t>(offsetof(UIPackage_t709416664_StaticFields, ___URL_PREFIX_20)); }
	inline String_t* get_URL_PREFIX_20() const { return ___URL_PREFIX_20; }
	inline String_t** get_address_of_URL_PREFIX_20() { return &___URL_PREFIX_20; }
	inline void set_URL_PREFIX_20(String_t* value)
	{
		___URL_PREFIX_20 = value;
		Il2CppCodeGenWriteBarrier(&___URL_PREFIX_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

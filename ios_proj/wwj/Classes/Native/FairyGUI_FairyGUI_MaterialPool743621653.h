#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.List`1<FairyGUI.NMaterial>
struct List_1_t1086988715;
// FairyGUI.MaterialManager
struct MaterialManager_t3905243402;
// System.String[]
struct StringU5BU5D_t1642385972;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.MaterialPool
struct  MaterialPool_t743621653  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<FairyGUI.NMaterial> FairyGUI.MaterialPool::_items
	List_1_t1086988715 * ____items_0;
	// System.Collections.Generic.List`1<FairyGUI.NMaterial> FairyGUI.MaterialPool::_blendItems
	List_1_t1086988715 * ____blendItems_1;
	// FairyGUI.MaterialManager FairyGUI.MaterialPool::_manager
	MaterialManager_t3905243402 * ____manager_2;
	// System.String[] FairyGUI.MaterialPool::_variants
	StringU5BU5D_t1642385972* ____variants_3;
	// System.Boolean FairyGUI.MaterialPool::_notShared
	bool ____notShared_4;

public:
	inline static int32_t get_offset_of__items_0() { return static_cast<int32_t>(offsetof(MaterialPool_t743621653, ____items_0)); }
	inline List_1_t1086988715 * get__items_0() const { return ____items_0; }
	inline List_1_t1086988715 ** get_address_of__items_0() { return &____items_0; }
	inline void set__items_0(List_1_t1086988715 * value)
	{
		____items_0 = value;
		Il2CppCodeGenWriteBarrier(&____items_0, value);
	}

	inline static int32_t get_offset_of__blendItems_1() { return static_cast<int32_t>(offsetof(MaterialPool_t743621653, ____blendItems_1)); }
	inline List_1_t1086988715 * get__blendItems_1() const { return ____blendItems_1; }
	inline List_1_t1086988715 ** get_address_of__blendItems_1() { return &____blendItems_1; }
	inline void set__blendItems_1(List_1_t1086988715 * value)
	{
		____blendItems_1 = value;
		Il2CppCodeGenWriteBarrier(&____blendItems_1, value);
	}

	inline static int32_t get_offset_of__manager_2() { return static_cast<int32_t>(offsetof(MaterialPool_t743621653, ____manager_2)); }
	inline MaterialManager_t3905243402 * get__manager_2() const { return ____manager_2; }
	inline MaterialManager_t3905243402 ** get_address_of__manager_2() { return &____manager_2; }
	inline void set__manager_2(MaterialManager_t3905243402 * value)
	{
		____manager_2 = value;
		Il2CppCodeGenWriteBarrier(&____manager_2, value);
	}

	inline static int32_t get_offset_of__variants_3() { return static_cast<int32_t>(offsetof(MaterialPool_t743621653, ____variants_3)); }
	inline StringU5BU5D_t1642385972* get__variants_3() const { return ____variants_3; }
	inline StringU5BU5D_t1642385972** get_address_of__variants_3() { return &____variants_3; }
	inline void set__variants_3(StringU5BU5D_t1642385972* value)
	{
		____variants_3 = value;
		Il2CppCodeGenWriteBarrier(&____variants_3, value);
	}

	inline static int32_t get_offset_of__notShared_4() { return static_cast<int32_t>(offsetof(MaterialPool_t743621653, ____notShared_4)); }
	inline bool get__notShared_4() const { return ____notShared_4; }
	inline bool* get_address_of__notShared_4() { return &____notShared_4; }
	inline void set__notShared_4(bool value)
	{
		____notShared_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

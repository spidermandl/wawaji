#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// ResourceManager
struct ResourceManager_t4136494783;
// System.Collections.Generic.List`1<ResourceManager/LoadItem>
struct List_1_t3290435963;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ResourceManager
struct  ResourceManager_t4136494783  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<ResourceManager/LoadItem> ResourceManager::_items
	List_1_t3290435963 * ____items_5;
	// System.Boolean ResourceManager::_started
	bool ____started_6;
	// System.Collections.Hashtable ResourceManager::_pool
	Hashtable_t909839986 * ____pool_7;
	// System.String ResourceManager::_basePath
	String_t* ____basePath_8;

public:
	inline static int32_t get_offset_of__items_5() { return static_cast<int32_t>(offsetof(ResourceManager_t4136494783, ____items_5)); }
	inline List_1_t3290435963 * get__items_5() const { return ____items_5; }
	inline List_1_t3290435963 ** get_address_of__items_5() { return &____items_5; }
	inline void set__items_5(List_1_t3290435963 * value)
	{
		____items_5 = value;
		Il2CppCodeGenWriteBarrier(&____items_5, value);
	}

	inline static int32_t get_offset_of__started_6() { return static_cast<int32_t>(offsetof(ResourceManager_t4136494783, ____started_6)); }
	inline bool get__started_6() const { return ____started_6; }
	inline bool* get_address_of__started_6() { return &____started_6; }
	inline void set__started_6(bool value)
	{
		____started_6 = value;
	}

	inline static int32_t get_offset_of__pool_7() { return static_cast<int32_t>(offsetof(ResourceManager_t4136494783, ____pool_7)); }
	inline Hashtable_t909839986 * get__pool_7() const { return ____pool_7; }
	inline Hashtable_t909839986 ** get_address_of__pool_7() { return &____pool_7; }
	inline void set__pool_7(Hashtable_t909839986 * value)
	{
		____pool_7 = value;
		Il2CppCodeGenWriteBarrier(&____pool_7, value);
	}

	inline static int32_t get_offset_of__basePath_8() { return static_cast<int32_t>(offsetof(ResourceManager_t4136494783, ____basePath_8)); }
	inline String_t* get__basePath_8() const { return ____basePath_8; }
	inline String_t** get_address_of__basePath_8() { return &____basePath_8; }
	inline void set__basePath_8(String_t* value)
	{
		____basePath_8 = value;
		Il2CppCodeGenWriteBarrier(&____basePath_8, value);
	}
};

struct ResourceManager_t4136494783_StaticFields
{
public:
	// ResourceManager ResourceManager::_instance
	ResourceManager_t4136494783 * ____instance_2;

public:
	inline static int32_t get_offset_of__instance_2() { return static_cast<int32_t>(offsetof(ResourceManager_t4136494783_StaticFields, ____instance_2)); }
	inline ResourceManager_t4136494783 * get__instance_2() const { return ____instance_2; }
	inline ResourceManager_t4136494783 ** get_address_of__instance_2() { return &____instance_2; }
	inline void set__instance_2(ResourceManager_t4136494783 * value)
	{
		____instance_2 = value;
		Il2CppCodeGenWriteBarrier(&____instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

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
// System.Collections.Generic.Dictionary`2<System.String,PureMVC.Interfaces.IProxy>
struct Dictionary_2_t2680945389;
// System.Collections.Generic.Dictionary`2<System.String,PureMVC.Interfaces.IModel>
struct Dictionary_2_t1336813420;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PureMVC.Core.Model
struct  Model_t3879015327  : public Il2CppObject
{
public:
	// System.String PureMVC.Core.Model::multitonKey
	String_t* ___multitonKey_0;
	// System.Collections.Generic.Dictionary`2<System.String,PureMVC.Interfaces.IProxy> PureMVC.Core.Model::proxyMap
	Dictionary_2_t2680945389 * ___proxyMap_1;

public:
	inline static int32_t get_offset_of_multitonKey_0() { return static_cast<int32_t>(offsetof(Model_t3879015327, ___multitonKey_0)); }
	inline String_t* get_multitonKey_0() const { return ___multitonKey_0; }
	inline String_t** get_address_of_multitonKey_0() { return &___multitonKey_0; }
	inline void set_multitonKey_0(String_t* value)
	{
		___multitonKey_0 = value;
		Il2CppCodeGenWriteBarrier(&___multitonKey_0, value);
	}

	inline static int32_t get_offset_of_proxyMap_1() { return static_cast<int32_t>(offsetof(Model_t3879015327, ___proxyMap_1)); }
	inline Dictionary_2_t2680945389 * get_proxyMap_1() const { return ___proxyMap_1; }
	inline Dictionary_2_t2680945389 ** get_address_of_proxyMap_1() { return &___proxyMap_1; }
	inline void set_proxyMap_1(Dictionary_2_t2680945389 * value)
	{
		___proxyMap_1 = value;
		Il2CppCodeGenWriteBarrier(&___proxyMap_1, value);
	}
};

struct Model_t3879015327_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,PureMVC.Interfaces.IModel> PureMVC.Core.Model::instanceMap
	Dictionary_2_t1336813420 * ___instanceMap_2;

public:
	inline static int32_t get_offset_of_instanceMap_2() { return static_cast<int32_t>(offsetof(Model_t3879015327_StaticFields, ___instanceMap_2)); }
	inline Dictionary_2_t1336813420 * get_instanceMap_2() const { return ___instanceMap_2; }
	inline Dictionary_2_t1336813420 ** get_address_of_instanceMap_2() { return &___instanceMap_2; }
	inline void set_instanceMap_2(Dictionary_2_t1336813420 * value)
	{
		___instanceMap_2 = value;
		Il2CppCodeGenWriteBarrier(&___instanceMap_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

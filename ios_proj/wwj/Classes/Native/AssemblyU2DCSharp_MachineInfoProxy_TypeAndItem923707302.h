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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MachineInfoProxy/TypeAndItem
struct  TypeAndItem_t923707302  : public Il2CppObject
{
public:
	// System.String MachineInfoProxy/TypeAndItem::name
	String_t* ___name_0;
	// System.Int32 MachineInfoProxy/TypeAndItem::machine_type_id
	int32_t ___machine_type_id_1;
	// System.Int32 MachineInfoProxy/TypeAndItem::coin
	int32_t ___coin_2;
	// System.Int32 MachineInfoProxy/TypeAndItem::machine_id
	int32_t ___machine_id_3;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(TypeAndItem_t923707302, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_machine_type_id_1() { return static_cast<int32_t>(offsetof(TypeAndItem_t923707302, ___machine_type_id_1)); }
	inline int32_t get_machine_type_id_1() const { return ___machine_type_id_1; }
	inline int32_t* get_address_of_machine_type_id_1() { return &___machine_type_id_1; }
	inline void set_machine_type_id_1(int32_t value)
	{
		___machine_type_id_1 = value;
	}

	inline static int32_t get_offset_of_coin_2() { return static_cast<int32_t>(offsetof(TypeAndItem_t923707302, ___coin_2)); }
	inline int32_t get_coin_2() const { return ___coin_2; }
	inline int32_t* get_address_of_coin_2() { return &___coin_2; }
	inline void set_coin_2(int32_t value)
	{
		___coin_2 = value;
	}

	inline static int32_t get_offset_of_machine_id_3() { return static_cast<int32_t>(offsetof(TypeAndItem_t923707302, ___machine_id_3)); }
	inline int32_t get_machine_id_3() const { return ___machine_id_3; }
	inline int32_t* get_address_of_machine_id_3() { return &___machine_id_3; }
	inline void set_machine_id_3(int32_t value)
	{
		___machine_id_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

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

// Req_GetMachineInfo/Response/Machine
struct  Machine_t1990010804  : public Il2CppObject
{
public:
	// System.String Req_GetMachineInfo/Response/Machine::coin
	String_t* ___coin_0;
	// System.String Req_GetMachineInfo/Response/Machine::machine_id
	String_t* ___machine_id_1;

public:
	inline static int32_t get_offset_of_coin_0() { return static_cast<int32_t>(offsetof(Machine_t1990010804, ___coin_0)); }
	inline String_t* get_coin_0() const { return ___coin_0; }
	inline String_t** get_address_of_coin_0() { return &___coin_0; }
	inline void set_coin_0(String_t* value)
	{
		___coin_0 = value;
		Il2CppCodeGenWriteBarrier(&___coin_0, value);
	}

	inline static int32_t get_offset_of_machine_id_1() { return static_cast<int32_t>(offsetof(Machine_t1990010804, ___machine_id_1)); }
	inline String_t* get_machine_id_1() const { return ___machine_id_1; }
	inline String_t** get_address_of_machine_id_1() { return &___machine_id_1; }
	inline void set_machine_id_1(String_t* value)
	{
		___machine_id_1 = value;
		Il2CppCodeGenWriteBarrier(&___machine_id_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

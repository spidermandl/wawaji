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
// Req_GetMachineInfo/Response/Machine[]
struct MachineU5BU5D_t1633214205;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Req_GetMachineInfo/Response/Info
struct  Info_t2975596095  : public Il2CppObject
{
public:
	// System.String Req_GetMachineInfo/Response/Info::name
	String_t* ___name_0;
	// System.String Req_GetMachineInfo/Response/Info::machine_type_id
	String_t* ___machine_type_id_1;
	// Req_GetMachineInfo/Response/Machine[] Req_GetMachineInfo/Response/Info::machine
	MachineU5BU5D_t1633214205* ___machine_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(Info_t2975596095, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_machine_type_id_1() { return static_cast<int32_t>(offsetof(Info_t2975596095, ___machine_type_id_1)); }
	inline String_t* get_machine_type_id_1() const { return ___machine_type_id_1; }
	inline String_t** get_address_of_machine_type_id_1() { return &___machine_type_id_1; }
	inline void set_machine_type_id_1(String_t* value)
	{
		___machine_type_id_1 = value;
		Il2CppCodeGenWriteBarrier(&___machine_type_id_1, value);
	}

	inline static int32_t get_offset_of_machine_2() { return static_cast<int32_t>(offsetof(Info_t2975596095, ___machine_2)); }
	inline MachineU5BU5D_t1633214205* get_machine_2() const { return ___machine_2; }
	inline MachineU5BU5D_t1633214205** get_address_of_machine_2() { return &___machine_2; }
	inline void set_machine_2(MachineU5BU5D_t1633214205* value)
	{
		___machine_2 = value;
		Il2CppCodeGenWriteBarrier(&___machine_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

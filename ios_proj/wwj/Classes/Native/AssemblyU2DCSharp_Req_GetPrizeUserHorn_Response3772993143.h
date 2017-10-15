#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Request_Response998287943.h"

// Req_GetPrizeUserHorn/Response/Data
struct Data_t2185002244;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Req_GetPrizeUserHorn/Response
struct  Response_t3772993143  : public Response_t998287943
{
public:
	// Req_GetPrizeUserHorn/Response/Data Req_GetPrizeUserHorn/Response::data
	Data_t2185002244 * ___data_3;

public:
	inline static int32_t get_offset_of_data_3() { return static_cast<int32_t>(offsetof(Response_t3772993143, ___data_3)); }
	inline Data_t2185002244 * get_data_3() const { return ___data_3; }
	inline Data_t2185002244 ** get_address_of_data_3() { return &___data_3; }
	inline void set_data_3(Data_t2185002244 * value)
	{
		___data_3 = value;
		Il2CppCodeGenWriteBarrier(&___data_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

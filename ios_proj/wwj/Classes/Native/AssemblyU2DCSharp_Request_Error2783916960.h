#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Request_Exception2103181915.h"

// Request/Error/Data
struct Data_t862910835;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Request/Error
struct  Error_t2783916960  : public Exception_t2103181915
{
public:
	// Request/Error/Data Request/Error::data
	Data_t862910835 * ___data_3;

public:
	inline static int32_t get_offset_of_data_3() { return static_cast<int32_t>(offsetof(Error_t2783916960, ___data_3)); }
	inline Data_t862910835 * get_data_3() const { return ___data_3; }
	inline Data_t862910835 ** get_address_of_data_3() { return &___data_3; }
	inline void set_data_3(Data_t862910835 * value)
	{
		___data_3 = value;
		Il2CppCodeGenWriteBarrier(&___data_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

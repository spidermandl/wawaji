#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// UpdatesProxy/ResVersion/Data
struct Data_t2615592746;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UpdatesProxy/ResVersion
struct  ResVersion_t4240498085  : public Il2CppObject
{
public:
	// System.Int32 UpdatesProxy/ResVersion::version
	int32_t ___version_0;
	// UpdatesProxy/ResVersion/Data UpdatesProxy/ResVersion::data
	Data_t2615592746 * ___data_1;

public:
	inline static int32_t get_offset_of_version_0() { return static_cast<int32_t>(offsetof(ResVersion_t4240498085, ___version_0)); }
	inline int32_t get_version_0() const { return ___version_0; }
	inline int32_t* get_address_of_version_0() { return &___version_0; }
	inline void set_version_0(int32_t value)
	{
		___version_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(ResVersion_t4240498085, ___data_1)); }
	inline Data_t2615592746 * get_data_1() const { return ___data_1; }
	inline Data_t2615592746 ** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(Data_t2615592746 * value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier(&___data_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

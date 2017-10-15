#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_BaseProxy1490705299.h"

// System.String
struct String_t;
// UpdatesProxy/ResVersion
struct ResVersion_t4240498085;
// UpdatesProxy/MemoryVersion
struct MemoryVersion_t663582980;
// Req_GetUpdatePics
struct Req_GetUpdatePics_t1118469089;
// ResourceManager/LoadErrorCallback
struct LoadErrorCallback_t1969330919;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UpdatesProxy
struct  UpdatesProxy_t1779614422  : public BaseProxy_t1490705299
{
public:
	// UpdatesProxy/ResVersion UpdatesProxy::localVersion
	ResVersion_t4240498085 * ___localVersion_8;
	// UpdatesProxy/MemoryVersion UpdatesProxy::memVersion
	MemoryVersion_t663582980 * ___memVersion_9;
	// Req_GetUpdatePics UpdatesProxy::serverVersion
	Req_GetUpdatePics_t1118469089 * ___serverVersion_10;

public:
	inline static int32_t get_offset_of_localVersion_8() { return static_cast<int32_t>(offsetof(UpdatesProxy_t1779614422, ___localVersion_8)); }
	inline ResVersion_t4240498085 * get_localVersion_8() const { return ___localVersion_8; }
	inline ResVersion_t4240498085 ** get_address_of_localVersion_8() { return &___localVersion_8; }
	inline void set_localVersion_8(ResVersion_t4240498085 * value)
	{
		___localVersion_8 = value;
		Il2CppCodeGenWriteBarrier(&___localVersion_8, value);
	}

	inline static int32_t get_offset_of_memVersion_9() { return static_cast<int32_t>(offsetof(UpdatesProxy_t1779614422, ___memVersion_9)); }
	inline MemoryVersion_t663582980 * get_memVersion_9() const { return ___memVersion_9; }
	inline MemoryVersion_t663582980 ** get_address_of_memVersion_9() { return &___memVersion_9; }
	inline void set_memVersion_9(MemoryVersion_t663582980 * value)
	{
		___memVersion_9 = value;
		Il2CppCodeGenWriteBarrier(&___memVersion_9, value);
	}

	inline static int32_t get_offset_of_serverVersion_10() { return static_cast<int32_t>(offsetof(UpdatesProxy_t1779614422, ___serverVersion_10)); }
	inline Req_GetUpdatePics_t1118469089 * get_serverVersion_10() const { return ___serverVersion_10; }
	inline Req_GetUpdatePics_t1118469089 ** get_address_of_serverVersion_10() { return &___serverVersion_10; }
	inline void set_serverVersion_10(Req_GetUpdatePics_t1118469089 * value)
	{
		___serverVersion_10 = value;
		Il2CppCodeGenWriteBarrier(&___serverVersion_10, value);
	}
};

struct UpdatesProxy_t1779614422_StaticFields
{
public:
	// ResourceManager/LoadErrorCallback UpdatesProxy::<>f__am$cache0
	LoadErrorCallback_t1969330919 * ___U3CU3Ef__amU24cache0_11;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_11() { return static_cast<int32_t>(offsetof(UpdatesProxy_t1779614422_StaticFields, ___U3CU3Ef__amU24cache0_11)); }
	inline LoadErrorCallback_t1969330919 * get_U3CU3Ef__amU24cache0_11() const { return ___U3CU3Ef__amU24cache0_11; }
	inline LoadErrorCallback_t1969330919 ** get_address_of_U3CU3Ef__amU24cache0_11() { return &___U3CU3Ef__amU24cache0_11; }
	inline void set_U3CU3Ef__amU24cache0_11(LoadErrorCallback_t1969330919 * value)
	{
		___U3CU3Ef__amU24cache0_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

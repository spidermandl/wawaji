#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Request
struct Request_t2032498015;
// UnityEngine.WWW
struct WWW_t2919945039;
// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HttpClient/<post>c__Iterator1
struct  U3CpostU3Ec__Iterator1_t2112091184  : public Il2CppObject
{
public:
	// Request HttpClient/<post>c__Iterator1::req
	Request_t2032498015 * ___req_0;
	// UnityEngine.WWW HttpClient/<post>c__Iterator1::<www>__0
	WWW_t2919945039 * ___U3CwwwU3E__0_1;
	// System.Object HttpClient/<post>c__Iterator1::$current
	Il2CppObject * ___U24current_2;
	// System.Boolean HttpClient/<post>c__Iterator1::$disposing
	bool ___U24disposing_3;
	// System.Int32 HttpClient/<post>c__Iterator1::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_req_0() { return static_cast<int32_t>(offsetof(U3CpostU3Ec__Iterator1_t2112091184, ___req_0)); }
	inline Request_t2032498015 * get_req_0() const { return ___req_0; }
	inline Request_t2032498015 ** get_address_of_req_0() { return &___req_0; }
	inline void set_req_0(Request_t2032498015 * value)
	{
		___req_0 = value;
		Il2CppCodeGenWriteBarrier(&___req_0, value);
	}

	inline static int32_t get_offset_of_U3CwwwU3E__0_1() { return static_cast<int32_t>(offsetof(U3CpostU3Ec__Iterator1_t2112091184, ___U3CwwwU3E__0_1)); }
	inline WWW_t2919945039 * get_U3CwwwU3E__0_1() const { return ___U3CwwwU3E__0_1; }
	inline WWW_t2919945039 ** get_address_of_U3CwwwU3E__0_1() { return &___U3CwwwU3E__0_1; }
	inline void set_U3CwwwU3E__0_1(WWW_t2919945039 * value)
	{
		___U3CwwwU3E__0_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CwwwU3E__0_1, value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CpostU3Ec__Iterator1_t2112091184, ___U24current_2)); }
	inline Il2CppObject * get_U24current_2() const { return ___U24current_2; }
	inline Il2CppObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(Il2CppObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_2, value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CpostU3Ec__Iterator1_t2112091184, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CpostU3Ec__Iterator1_t2112091184, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

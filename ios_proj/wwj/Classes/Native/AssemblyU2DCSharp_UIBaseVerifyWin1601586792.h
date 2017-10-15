#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_BaseWindow1983497523.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIBaseVerifyWin
struct  UIBaseVerifyWin_t1601586792  : public BaseWindow_t1983497523
{
public:
	// System.String UIBaseVerifyWin::code
	String_t* ___code_104;
	// System.Boolean UIBaseVerifyWin::isProcessing
	bool ___isProcessing_105;
	// System.Boolean UIBaseVerifyWin::isVerifying
	bool ___isVerifying_106;

public:
	inline static int32_t get_offset_of_code_104() { return static_cast<int32_t>(offsetof(UIBaseVerifyWin_t1601586792, ___code_104)); }
	inline String_t* get_code_104() const { return ___code_104; }
	inline String_t** get_address_of_code_104() { return &___code_104; }
	inline void set_code_104(String_t* value)
	{
		___code_104 = value;
		Il2CppCodeGenWriteBarrier(&___code_104, value);
	}

	inline static int32_t get_offset_of_isProcessing_105() { return static_cast<int32_t>(offsetof(UIBaseVerifyWin_t1601586792, ___isProcessing_105)); }
	inline bool get_isProcessing_105() const { return ___isProcessing_105; }
	inline bool* get_address_of_isProcessing_105() { return &___isProcessing_105; }
	inline void set_isProcessing_105(bool value)
	{
		___isProcessing_105 = value;
	}

	inline static int32_t get_offset_of_isVerifying_106() { return static_cast<int32_t>(offsetof(UIBaseVerifyWin_t1601586792, ___isVerifying_106)); }
	inline bool get_isVerifying_106() const { return ___isVerifying_106; }
	inline bool* get_address_of_isVerifying_106() { return &___isVerifying_106; }
	inline void set_isVerifying_106(bool value)
	{
		___isVerifying_106 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

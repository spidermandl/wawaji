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

// FairyGUI.Utils.ZipReader/ZipEntry
struct  ZipEntry_t2238596529  : public Il2CppObject
{
public:
	// System.String FairyGUI.Utils.ZipReader/ZipEntry::name
	String_t* ___name_0;
	// System.Int32 FairyGUI.Utils.ZipReader/ZipEntry::compress
	int32_t ___compress_1;
	// System.UInt32 FairyGUI.Utils.ZipReader/ZipEntry::crc
	uint32_t ___crc_2;
	// System.Int32 FairyGUI.Utils.ZipReader/ZipEntry::size
	int32_t ___size_3;
	// System.Int32 FairyGUI.Utils.ZipReader/ZipEntry::sourceSize
	int32_t ___sourceSize_4;
	// System.Int32 FairyGUI.Utils.ZipReader/ZipEntry::offset
	int32_t ___offset_5;
	// System.Boolean FairyGUI.Utils.ZipReader/ZipEntry::isDirectory
	bool ___isDirectory_6;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(ZipEntry_t2238596529, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_compress_1() { return static_cast<int32_t>(offsetof(ZipEntry_t2238596529, ___compress_1)); }
	inline int32_t get_compress_1() const { return ___compress_1; }
	inline int32_t* get_address_of_compress_1() { return &___compress_1; }
	inline void set_compress_1(int32_t value)
	{
		___compress_1 = value;
	}

	inline static int32_t get_offset_of_crc_2() { return static_cast<int32_t>(offsetof(ZipEntry_t2238596529, ___crc_2)); }
	inline uint32_t get_crc_2() const { return ___crc_2; }
	inline uint32_t* get_address_of_crc_2() { return &___crc_2; }
	inline void set_crc_2(uint32_t value)
	{
		___crc_2 = value;
	}

	inline static int32_t get_offset_of_size_3() { return static_cast<int32_t>(offsetof(ZipEntry_t2238596529, ___size_3)); }
	inline int32_t get_size_3() const { return ___size_3; }
	inline int32_t* get_address_of_size_3() { return &___size_3; }
	inline void set_size_3(int32_t value)
	{
		___size_3 = value;
	}

	inline static int32_t get_offset_of_sourceSize_4() { return static_cast<int32_t>(offsetof(ZipEntry_t2238596529, ___sourceSize_4)); }
	inline int32_t get_sourceSize_4() const { return ___sourceSize_4; }
	inline int32_t* get_address_of_sourceSize_4() { return &___sourceSize_4; }
	inline void set_sourceSize_4(int32_t value)
	{
		___sourceSize_4 = value;
	}

	inline static int32_t get_offset_of_offset_5() { return static_cast<int32_t>(offsetof(ZipEntry_t2238596529, ___offset_5)); }
	inline int32_t get_offset_5() const { return ___offset_5; }
	inline int32_t* get_address_of_offset_5() { return &___offset_5; }
	inline void set_offset_5(int32_t value)
	{
		___offset_5 = value;
	}

	inline static int32_t get_offset_of_isDirectory_6() { return static_cast<int32_t>(offsetof(ZipEntry_t2238596529, ___isDirectory_6)); }
	inline bool get_isDirectory_6() const { return ___isDirectory_6; }
	inline bool* get_address_of_isDirectory_6() { return &___isDirectory_6; }
	inline void set_isDirectory_6(bool value)
	{
		___isDirectory_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

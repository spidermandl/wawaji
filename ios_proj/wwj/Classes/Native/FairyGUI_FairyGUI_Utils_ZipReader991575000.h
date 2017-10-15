#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// FairyGUI.Utils.ByteBuffer
struct ByteBuffer_t3139400404;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.Utils.ZipReader
struct  ZipReader_t991575000  : public Il2CppObject
{
public:
	// FairyGUI.Utils.ByteBuffer FairyGUI.Utils.ZipReader::_stream
	ByteBuffer_t3139400404 * ____stream_0;
	// System.Int32 FairyGUI.Utils.ZipReader::_entryCount
	int32_t ____entryCount_1;
	// System.Int32 FairyGUI.Utils.ZipReader::_pos
	int32_t ____pos_2;
	// System.Int32 FairyGUI.Utils.ZipReader::_index
	int32_t ____index_3;

public:
	inline static int32_t get_offset_of__stream_0() { return static_cast<int32_t>(offsetof(ZipReader_t991575000, ____stream_0)); }
	inline ByteBuffer_t3139400404 * get__stream_0() const { return ____stream_0; }
	inline ByteBuffer_t3139400404 ** get_address_of__stream_0() { return &____stream_0; }
	inline void set__stream_0(ByteBuffer_t3139400404 * value)
	{
		____stream_0 = value;
		Il2CppCodeGenWriteBarrier(&____stream_0, value);
	}

	inline static int32_t get_offset_of__entryCount_1() { return static_cast<int32_t>(offsetof(ZipReader_t991575000, ____entryCount_1)); }
	inline int32_t get__entryCount_1() const { return ____entryCount_1; }
	inline int32_t* get_address_of__entryCount_1() { return &____entryCount_1; }
	inline void set__entryCount_1(int32_t value)
	{
		____entryCount_1 = value;
	}

	inline static int32_t get_offset_of__pos_2() { return static_cast<int32_t>(offsetof(ZipReader_t991575000, ____pos_2)); }
	inline int32_t get__pos_2() const { return ____pos_2; }
	inline int32_t* get_address_of__pos_2() { return &____pos_2; }
	inline void set__pos_2(int32_t value)
	{
		____pos_2 = value;
	}

	inline static int32_t get_offset_of__index_3() { return static_cast<int32_t>(offsetof(ZipReader_t991575000, ____index_3)); }
	inline int32_t get__index_3() const { return ____index_3; }
	inline int32_t* get_address_of__index_3() { return &____index_3; }
	inline void set__index_3(int32_t value)
	{
		____index_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.IO.MemoryStream
struct MemoryStream_t743994179;
// System.IO.BinaryWriter
struct BinaryWriter_t3179371318;
// System.IO.BinaryReader
struct BinaryReader_t2491843768;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ByteBuffer
struct  ByteBuffer_t1012950836  : public Il2CppObject
{
public:
	// System.IO.MemoryStream ByteBuffer::stream
	MemoryStream_t743994179 * ___stream_0;
	// System.IO.BinaryWriter ByteBuffer::writer
	BinaryWriter_t3179371318 * ___writer_1;
	// System.IO.BinaryReader ByteBuffer::reader
	BinaryReader_t2491843768 * ___reader_2;

public:
	inline static int32_t get_offset_of_stream_0() { return static_cast<int32_t>(offsetof(ByteBuffer_t1012950836, ___stream_0)); }
	inline MemoryStream_t743994179 * get_stream_0() const { return ___stream_0; }
	inline MemoryStream_t743994179 ** get_address_of_stream_0() { return &___stream_0; }
	inline void set_stream_0(MemoryStream_t743994179 * value)
	{
		___stream_0 = value;
		Il2CppCodeGenWriteBarrier(&___stream_0, value);
	}

	inline static int32_t get_offset_of_writer_1() { return static_cast<int32_t>(offsetof(ByteBuffer_t1012950836, ___writer_1)); }
	inline BinaryWriter_t3179371318 * get_writer_1() const { return ___writer_1; }
	inline BinaryWriter_t3179371318 ** get_address_of_writer_1() { return &___writer_1; }
	inline void set_writer_1(BinaryWriter_t3179371318 * value)
	{
		___writer_1 = value;
		Il2CppCodeGenWriteBarrier(&___writer_1, value);
	}

	inline static int32_t get_offset_of_reader_2() { return static_cast<int32_t>(offsetof(ByteBuffer_t1012950836, ___reader_2)); }
	inline BinaryReader_t2491843768 * get_reader_2() const { return ___reader_2; }
	inline BinaryReader_t2491843768 ** get_address_of_reader_2() { return &___reader_2; }
	inline void set_reader_2(BinaryReader_t2491843768 * value)
	{
		___reader_2 = value;
		Il2CppCodeGenWriteBarrier(&___reader_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

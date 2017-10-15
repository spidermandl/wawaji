#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.IO.Stream
struct Stream_t3255436806;
// System.Text.Encoding
struct Encoding_t663144255;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Text.Decoder
struct Decoder_t3792697818;
// System.Char[]
struct CharU5BU5D_t1328083999;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.BinaryReader
struct  BinaryReader_t2491843768  : public Il2CppObject
{
public:
	// System.IO.Stream System.IO.BinaryReader::m_stream
	Stream_t3255436806 * ___m_stream_1;
	// System.Text.Encoding System.IO.BinaryReader::m_encoding
	Encoding_t663144255 * ___m_encoding_2;
	// System.Byte[] System.IO.BinaryReader::m_buffer
	ByteU5BU5D_t3397334013* ___m_buffer_3;
	// System.Text.Decoder System.IO.BinaryReader::decoder
	Decoder_t3792697818 * ___decoder_4;
	// System.Char[] System.IO.BinaryReader::charBuffer
	CharU5BU5D_t1328083999* ___charBuffer_5;
	// System.Boolean System.IO.BinaryReader::m_disposed
	bool ___m_disposed_6;

public:
	inline static int32_t get_offset_of_m_stream_1() { return static_cast<int32_t>(offsetof(BinaryReader_t2491843768, ___m_stream_1)); }
	inline Stream_t3255436806 * get_m_stream_1() const { return ___m_stream_1; }
	inline Stream_t3255436806 ** get_address_of_m_stream_1() { return &___m_stream_1; }
	inline void set_m_stream_1(Stream_t3255436806 * value)
	{
		___m_stream_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_stream_1, value);
	}

	inline static int32_t get_offset_of_m_encoding_2() { return static_cast<int32_t>(offsetof(BinaryReader_t2491843768, ___m_encoding_2)); }
	inline Encoding_t663144255 * get_m_encoding_2() const { return ___m_encoding_2; }
	inline Encoding_t663144255 ** get_address_of_m_encoding_2() { return &___m_encoding_2; }
	inline void set_m_encoding_2(Encoding_t663144255 * value)
	{
		___m_encoding_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_encoding_2, value);
	}

	inline static int32_t get_offset_of_m_buffer_3() { return static_cast<int32_t>(offsetof(BinaryReader_t2491843768, ___m_buffer_3)); }
	inline ByteU5BU5D_t3397334013* get_m_buffer_3() const { return ___m_buffer_3; }
	inline ByteU5BU5D_t3397334013** get_address_of_m_buffer_3() { return &___m_buffer_3; }
	inline void set_m_buffer_3(ByteU5BU5D_t3397334013* value)
	{
		___m_buffer_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_buffer_3, value);
	}

	inline static int32_t get_offset_of_decoder_4() { return static_cast<int32_t>(offsetof(BinaryReader_t2491843768, ___decoder_4)); }
	inline Decoder_t3792697818 * get_decoder_4() const { return ___decoder_4; }
	inline Decoder_t3792697818 ** get_address_of_decoder_4() { return &___decoder_4; }
	inline void set_decoder_4(Decoder_t3792697818 * value)
	{
		___decoder_4 = value;
		Il2CppCodeGenWriteBarrier(&___decoder_4, value);
	}

	inline static int32_t get_offset_of_charBuffer_5() { return static_cast<int32_t>(offsetof(BinaryReader_t2491843768, ___charBuffer_5)); }
	inline CharU5BU5D_t1328083999* get_charBuffer_5() const { return ___charBuffer_5; }
	inline CharU5BU5D_t1328083999** get_address_of_charBuffer_5() { return &___charBuffer_5; }
	inline void set_charBuffer_5(CharU5BU5D_t1328083999* value)
	{
		___charBuffer_5 = value;
		Il2CppCodeGenWriteBarrier(&___charBuffer_5, value);
	}

	inline static int32_t get_offset_of_m_disposed_6() { return static_cast<int32_t>(offsetof(BinaryReader_t2491843768, ___m_disposed_6)); }
	inline bool get_m_disposed_6() const { return ___m_disposed_6; }
	inline bool* get_address_of_m_disposed_6() { return &___m_disposed_6; }
	inline void set_m_disposed_6(bool value)
	{
		___m_disposed_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

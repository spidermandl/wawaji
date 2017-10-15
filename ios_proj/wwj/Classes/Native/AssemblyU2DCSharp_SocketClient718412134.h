#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Net.Sockets.TcpClient
struct TcpClient_t408947970;
// System.Net.Sockets.NetworkStream
struct NetworkStream_t581172200;
// System.IO.MemoryStream
struct MemoryStream_t743994179;
// System.IO.BinaryReader
struct BinaryReader_t2491843768;
// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SocketClient
struct  SocketClient_t718412134  : public Il2CppObject
{
public:
	// System.Net.Sockets.TcpClient SocketClient::client
	TcpClient_t408947970 * ___client_0;
	// System.Net.Sockets.NetworkStream SocketClient::outStream
	NetworkStream_t581172200 * ___outStream_1;
	// System.IO.MemoryStream SocketClient::memStream
	MemoryStream_t743994179 * ___memStream_2;
	// System.IO.BinaryReader SocketClient::reader
	BinaryReader_t2491843768 * ___reader_3;
	// System.Byte[] SocketClient::byteBuffer
	ByteU5BU5D_t3397334013* ___byteBuffer_5;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(SocketClient_t718412134, ___client_0)); }
	inline TcpClient_t408947970 * get_client_0() const { return ___client_0; }
	inline TcpClient_t408947970 ** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(TcpClient_t408947970 * value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier(&___client_0, value);
	}

	inline static int32_t get_offset_of_outStream_1() { return static_cast<int32_t>(offsetof(SocketClient_t718412134, ___outStream_1)); }
	inline NetworkStream_t581172200 * get_outStream_1() const { return ___outStream_1; }
	inline NetworkStream_t581172200 ** get_address_of_outStream_1() { return &___outStream_1; }
	inline void set_outStream_1(NetworkStream_t581172200 * value)
	{
		___outStream_1 = value;
		Il2CppCodeGenWriteBarrier(&___outStream_1, value);
	}

	inline static int32_t get_offset_of_memStream_2() { return static_cast<int32_t>(offsetof(SocketClient_t718412134, ___memStream_2)); }
	inline MemoryStream_t743994179 * get_memStream_2() const { return ___memStream_2; }
	inline MemoryStream_t743994179 ** get_address_of_memStream_2() { return &___memStream_2; }
	inline void set_memStream_2(MemoryStream_t743994179 * value)
	{
		___memStream_2 = value;
		Il2CppCodeGenWriteBarrier(&___memStream_2, value);
	}

	inline static int32_t get_offset_of_reader_3() { return static_cast<int32_t>(offsetof(SocketClient_t718412134, ___reader_3)); }
	inline BinaryReader_t2491843768 * get_reader_3() const { return ___reader_3; }
	inline BinaryReader_t2491843768 ** get_address_of_reader_3() { return &___reader_3; }
	inline void set_reader_3(BinaryReader_t2491843768 * value)
	{
		___reader_3 = value;
		Il2CppCodeGenWriteBarrier(&___reader_3, value);
	}

	inline static int32_t get_offset_of_byteBuffer_5() { return static_cast<int32_t>(offsetof(SocketClient_t718412134, ___byteBuffer_5)); }
	inline ByteU5BU5D_t3397334013* get_byteBuffer_5() const { return ___byteBuffer_5; }
	inline ByteU5BU5D_t3397334013** get_address_of_byteBuffer_5() { return &___byteBuffer_5; }
	inline void set_byteBuffer_5(ByteU5BU5D_t3397334013* value)
	{
		___byteBuffer_5 = value;
		Il2CppCodeGenWriteBarrier(&___byteBuffer_5, value);
	}
};

struct SocketClient_t718412134_StaticFields
{
public:
	// System.Boolean SocketClient::loggedIn
	bool ___loggedIn_6;

public:
	inline static int32_t get_offset_of_loggedIn_6() { return static_cast<int32_t>(offsetof(SocketClient_t718412134_StaticFields, ___loggedIn_6)); }
	inline bool get_loggedIn_6() const { return ___loggedIn_6; }
	inline bool* get_address_of_loggedIn_6() { return &___loggedIn_6; }
	inline void set_loggedIn_6(bool value)
	{
		___loggedIn_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "FairyGUI_FairyGUI_Utils_ByteBuffer_Endian1029059019.h"

// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.Utils.ByteBuffer
struct  ByteBuffer_t3139400404  : public Il2CppObject
{
public:
	// FairyGUI.Utils.ByteBuffer/Endian FairyGUI.Utils.ByteBuffer::endian
	int32_t ___endian_0;
	// System.Int32 FairyGUI.Utils.ByteBuffer::<length>k__BackingField
	int32_t ___U3ClengthU3Ek__BackingField_1;
	// System.Int32 FairyGUI.Utils.ByteBuffer::_pointer
	int32_t ____pointer_2;
	// System.Byte[] FairyGUI.Utils.ByteBuffer::_tmp
	ByteU5BU5D_t3397334013* ____tmp_3;
	// System.Byte[] FairyGUI.Utils.ByteBuffer::_data
	ByteU5BU5D_t3397334013* ____data_4;

public:
	inline static int32_t get_offset_of_endian_0() { return static_cast<int32_t>(offsetof(ByteBuffer_t3139400404, ___endian_0)); }
	inline int32_t get_endian_0() const { return ___endian_0; }
	inline int32_t* get_address_of_endian_0() { return &___endian_0; }
	inline void set_endian_0(int32_t value)
	{
		___endian_0 = value;
	}

	inline static int32_t get_offset_of_U3ClengthU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ByteBuffer_t3139400404, ___U3ClengthU3Ek__BackingField_1)); }
	inline int32_t get_U3ClengthU3Ek__BackingField_1() const { return ___U3ClengthU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3ClengthU3Ek__BackingField_1() { return &___U3ClengthU3Ek__BackingField_1; }
	inline void set_U3ClengthU3Ek__BackingField_1(int32_t value)
	{
		___U3ClengthU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of__pointer_2() { return static_cast<int32_t>(offsetof(ByteBuffer_t3139400404, ____pointer_2)); }
	inline int32_t get__pointer_2() const { return ____pointer_2; }
	inline int32_t* get_address_of__pointer_2() { return &____pointer_2; }
	inline void set__pointer_2(int32_t value)
	{
		____pointer_2 = value;
	}

	inline static int32_t get_offset_of__tmp_3() { return static_cast<int32_t>(offsetof(ByteBuffer_t3139400404, ____tmp_3)); }
	inline ByteU5BU5D_t3397334013* get__tmp_3() const { return ____tmp_3; }
	inline ByteU5BU5D_t3397334013** get_address_of__tmp_3() { return &____tmp_3; }
	inline void set__tmp_3(ByteU5BU5D_t3397334013* value)
	{
		____tmp_3 = value;
		Il2CppCodeGenWriteBarrier(&____tmp_3, value);
	}

	inline static int32_t get_offset_of__data_4() { return static_cast<int32_t>(offsetof(ByteBuffer_t3139400404, ____data_4)); }
	inline ByteU5BU5D_t3397334013* get__data_4() const { return ____data_4; }
	inline ByteU5BU5D_t3397334013** get_address_of__data_4() { return &____data_4; }
	inline void set__data_4(ByteU5BU5D_t3397334013* value)
	{
		____data_4 = value;
		Il2CppCodeGenWriteBarrier(&____data_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

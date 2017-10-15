#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "DOTween_DG_Tweening_ScrambleMode385206138.h"

// System.Char[]
struct CharU5BU5D_t1328083999;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Plugins.Options.StringOptions
struct  StringOptions_t2885323933 
{
public:
	// System.Boolean DG.Tweening.Plugins.Options.StringOptions::richTextEnabled
	bool ___richTextEnabled_0;
	// DG.Tweening.ScrambleMode DG.Tweening.Plugins.Options.StringOptions::scrambleMode
	int32_t ___scrambleMode_1;
	// System.Char[] DG.Tweening.Plugins.Options.StringOptions::scrambledChars
	CharU5BU5D_t1328083999* ___scrambledChars_2;
	// System.Int32 DG.Tweening.Plugins.Options.StringOptions::startValueStrippedLength
	int32_t ___startValueStrippedLength_3;
	// System.Int32 DG.Tweening.Plugins.Options.StringOptions::changeValueStrippedLength
	int32_t ___changeValueStrippedLength_4;

public:
	inline static int32_t get_offset_of_richTextEnabled_0() { return static_cast<int32_t>(offsetof(StringOptions_t2885323933, ___richTextEnabled_0)); }
	inline bool get_richTextEnabled_0() const { return ___richTextEnabled_0; }
	inline bool* get_address_of_richTextEnabled_0() { return &___richTextEnabled_0; }
	inline void set_richTextEnabled_0(bool value)
	{
		___richTextEnabled_0 = value;
	}

	inline static int32_t get_offset_of_scrambleMode_1() { return static_cast<int32_t>(offsetof(StringOptions_t2885323933, ___scrambleMode_1)); }
	inline int32_t get_scrambleMode_1() const { return ___scrambleMode_1; }
	inline int32_t* get_address_of_scrambleMode_1() { return &___scrambleMode_1; }
	inline void set_scrambleMode_1(int32_t value)
	{
		___scrambleMode_1 = value;
	}

	inline static int32_t get_offset_of_scrambledChars_2() { return static_cast<int32_t>(offsetof(StringOptions_t2885323933, ___scrambledChars_2)); }
	inline CharU5BU5D_t1328083999* get_scrambledChars_2() const { return ___scrambledChars_2; }
	inline CharU5BU5D_t1328083999** get_address_of_scrambledChars_2() { return &___scrambledChars_2; }
	inline void set_scrambledChars_2(CharU5BU5D_t1328083999* value)
	{
		___scrambledChars_2 = value;
		Il2CppCodeGenWriteBarrier(&___scrambledChars_2, value);
	}

	inline static int32_t get_offset_of_startValueStrippedLength_3() { return static_cast<int32_t>(offsetof(StringOptions_t2885323933, ___startValueStrippedLength_3)); }
	inline int32_t get_startValueStrippedLength_3() const { return ___startValueStrippedLength_3; }
	inline int32_t* get_address_of_startValueStrippedLength_3() { return &___startValueStrippedLength_3; }
	inline void set_startValueStrippedLength_3(int32_t value)
	{
		___startValueStrippedLength_3 = value;
	}

	inline static int32_t get_offset_of_changeValueStrippedLength_4() { return static_cast<int32_t>(offsetof(StringOptions_t2885323933, ___changeValueStrippedLength_4)); }
	inline int32_t get_changeValueStrippedLength_4() const { return ___changeValueStrippedLength_4; }
	inline int32_t* get_address_of_changeValueStrippedLength_4() { return &___changeValueStrippedLength_4; }
	inline void set_changeValueStrippedLength_4(int32_t value)
	{
		___changeValueStrippedLength_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.StringOptions
struct StringOptions_t2885323933_marshaled_pinvoke
{
	int32_t ___richTextEnabled_0;
	int32_t ___scrambleMode_1;
	uint8_t* ___scrambledChars_2;
	int32_t ___startValueStrippedLength_3;
	int32_t ___changeValueStrippedLength_4;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.StringOptions
struct StringOptions_t2885323933_marshaled_com
{
	int32_t ___richTextEnabled_0;
	int32_t ___scrambleMode_1;
	uint8_t* ___scrambledChars_2;
	int32_t ___startValueStrippedLength_3;
	int32_t ___changeValueStrippedLength_4;
};

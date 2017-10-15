#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "FairyGUI_FairyGUI_GComponent4106136290.h"

// FairyGUI.GObject
struct GObject_t2662234644;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.GLabel
struct  GLabel_t64558075  : public GComponent_t4106136290
{
public:
	// FairyGUI.GObject FairyGUI.GLabel::_titleObject
	GObject_t2662234644 * ____titleObject_92;
	// FairyGUI.GObject FairyGUI.GLabel::_iconObject
	GObject_t2662234644 * ____iconObject_93;

public:
	inline static int32_t get_offset_of__titleObject_92() { return static_cast<int32_t>(offsetof(GLabel_t64558075, ____titleObject_92)); }
	inline GObject_t2662234644 * get__titleObject_92() const { return ____titleObject_92; }
	inline GObject_t2662234644 ** get_address_of__titleObject_92() { return &____titleObject_92; }
	inline void set__titleObject_92(GObject_t2662234644 * value)
	{
		____titleObject_92 = value;
		Il2CppCodeGenWriteBarrier(&____titleObject_92, value);
	}

	inline static int32_t get_offset_of__iconObject_93() { return static_cast<int32_t>(offsetof(GLabel_t64558075, ____iconObject_93)); }
	inline GObject_t2662234644 * get__iconObject_93() const { return ____iconObject_93; }
	inline GObject_t2662234644 ** get_address_of__iconObject_93() { return &____iconObject_93; }
	inline void set__iconObject_93(GObject_t2662234644 * value)
	{
		____iconObject_93 = value;
		Il2CppCodeGenWriteBarrier(&____iconObject_93, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

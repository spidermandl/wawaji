#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "FairyGUI_FairyGUI_GObject2662234644.h"

// FairyGUI.Shape
struct Shape_t1180768453;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.GGraph
struct  GGraph_t1610186177  : public GObject_t2662234644
{
public:
	// FairyGUI.Shape FairyGUI.GGraph::_shape
	Shape_t1180768453 * ____shape_74;

public:
	inline static int32_t get_offset_of__shape_74() { return static_cast<int32_t>(offsetof(GGraph_t1610186177, ____shape_74)); }
	inline Shape_t1180768453 * get__shape_74() const { return ____shape_74; }
	inline Shape_t1180768453 ** get_address_of__shape_74() { return &____shape_74; }
	inline void set__shape_74(Shape_t1180768453 * value)
	{
		____shape_74 = value;
		Il2CppCodeGenWriteBarrier(&____shape_74, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

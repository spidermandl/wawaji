#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "FairyGUI_FairyGUI_DisplayObject1069768653.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// UnityEngine.Color[]
struct ColorU5BU5D_t672350442;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t686124026;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.Shape
struct  Shape_t1180768453  : public DisplayObject_t1069768653
{
public:
	// System.Int32 FairyGUI.Shape::_type
	int32_t ____type_52;
	// System.Int32 FairyGUI.Shape::_lineSize
	int32_t ____lineSize_53;
	// UnityEngine.Color FairyGUI.Shape::_lineColor
	Color_t2020392075  ____lineColor_54;
	// UnityEngine.Color FairyGUI.Shape::_fillColor
	Color_t2020392075  ____fillColor_55;
	// UnityEngine.Color[] FairyGUI.Shape::_colors
	ColorU5BU5D_t672350442* ____colors_56;
	// UnityEngine.Vector2[] FairyGUI.Shape::_polygonPoints
	Vector2U5BU5D_t686124026* ____polygonPoints_57;

public:
	inline static int32_t get_offset_of__type_52() { return static_cast<int32_t>(offsetof(Shape_t1180768453, ____type_52)); }
	inline int32_t get__type_52() const { return ____type_52; }
	inline int32_t* get_address_of__type_52() { return &____type_52; }
	inline void set__type_52(int32_t value)
	{
		____type_52 = value;
	}

	inline static int32_t get_offset_of__lineSize_53() { return static_cast<int32_t>(offsetof(Shape_t1180768453, ____lineSize_53)); }
	inline int32_t get__lineSize_53() const { return ____lineSize_53; }
	inline int32_t* get_address_of__lineSize_53() { return &____lineSize_53; }
	inline void set__lineSize_53(int32_t value)
	{
		____lineSize_53 = value;
	}

	inline static int32_t get_offset_of__lineColor_54() { return static_cast<int32_t>(offsetof(Shape_t1180768453, ____lineColor_54)); }
	inline Color_t2020392075  get__lineColor_54() const { return ____lineColor_54; }
	inline Color_t2020392075 * get_address_of__lineColor_54() { return &____lineColor_54; }
	inline void set__lineColor_54(Color_t2020392075  value)
	{
		____lineColor_54 = value;
	}

	inline static int32_t get_offset_of__fillColor_55() { return static_cast<int32_t>(offsetof(Shape_t1180768453, ____fillColor_55)); }
	inline Color_t2020392075  get__fillColor_55() const { return ____fillColor_55; }
	inline Color_t2020392075 * get_address_of__fillColor_55() { return &____fillColor_55; }
	inline void set__fillColor_55(Color_t2020392075  value)
	{
		____fillColor_55 = value;
	}

	inline static int32_t get_offset_of__colors_56() { return static_cast<int32_t>(offsetof(Shape_t1180768453, ____colors_56)); }
	inline ColorU5BU5D_t672350442* get__colors_56() const { return ____colors_56; }
	inline ColorU5BU5D_t672350442** get_address_of__colors_56() { return &____colors_56; }
	inline void set__colors_56(ColorU5BU5D_t672350442* value)
	{
		____colors_56 = value;
		Il2CppCodeGenWriteBarrier(&____colors_56, value);
	}

	inline static int32_t get_offset_of__polygonPoints_57() { return static_cast<int32_t>(offsetof(Shape_t1180768453, ____polygonPoints_57)); }
	inline Vector2U5BU5D_t686124026* get__polygonPoints_57() const { return ____polygonPoints_57; }
	inline Vector2U5BU5D_t686124026** get_address_of__polygonPoints_57() { return &____polygonPoints_57; }
	inline void set__polygonPoints_57(Vector2U5BU5D_t686124026* value)
	{
		____polygonPoints_57 = value;
		Il2CppCodeGenWriteBarrier(&____polygonPoints_57, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

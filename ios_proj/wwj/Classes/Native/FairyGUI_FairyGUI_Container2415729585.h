#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "FairyGUI_FairyGUI_DisplayObject1069768653.h"
#include "UnityEngine_UnityEngine_RenderMode4280533217.h"
#include "mscorlib_System_Nullable_1_gen506773896.h"
#include "mscorlib_System_Nullable_1_gen1944821941.h"

// UnityEngine.Camera
struct Camera_t189460977;
// FairyGUI.IHitTest
struct IHitTest_t4146017226;
// FairyGUI.EventCallback0
struct EventCallback0_t422277839;
// System.Collections.Generic.List`1<FairyGUI.DisplayObject>
struct List_1_t438889785;
// FairyGUI.DisplayObject
struct DisplayObject_t1069768653;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.Container
struct  Container_t2415729585  : public DisplayObject_t1069768653
{
public:
	// UnityEngine.RenderMode FairyGUI.Container::renderMode
	int32_t ___renderMode_52;
	// UnityEngine.Camera FairyGUI.Container::renderCamera
	Camera_t189460977 * ___renderCamera_53;
	// System.Boolean FairyGUI.Container::opaque
	bool ___opaque_54;
	// System.Nullable`1<UnityEngine.Vector4> FairyGUI.Container::clipSoftness
	Nullable_1_t506773896  ___clipSoftness_55;
	// FairyGUI.IHitTest FairyGUI.Container::hitArea
	Il2CppObject * ___hitArea_56;
	// System.Boolean FairyGUI.Container::touchChildren
	bool ___touchChildren_57;
	// FairyGUI.EventCallback0 FairyGUI.Container::onUpdate
	EventCallback0_t422277839 * ___onUpdate_58;
	// System.Boolean FairyGUI.Container::reversedMask
	bool ___reversedMask_59;
	// System.Collections.Generic.List`1<FairyGUI.DisplayObject> FairyGUI.Container::_children
	List_1_t438889785 * ____children_60;
	// FairyGUI.DisplayObject FairyGUI.Container::_mask
	DisplayObject_t1069768653 * ____mask_61;
	// System.Nullable`1<UnityEngine.Rect> FairyGUI.Container::_clipRect
	Nullable_1_t1944821941  ____clipRect_62;
	// System.Boolean FairyGUI.Container::_fBatchingRequested
	bool ____fBatchingRequested_63;
	// System.Boolean FairyGUI.Container::_fBatchingRoot
	bool ____fBatchingRoot_64;
	// System.Boolean FairyGUI.Container::_fBatching
	bool ____fBatching_65;
	// System.Collections.Generic.List`1<FairyGUI.DisplayObject> FairyGUI.Container::_descendants
	List_1_t438889785 * ____descendants_66;
	// System.Boolean FairyGUI.Container::_disabled
	bool ____disabled_67;
	// System.Int32 FairyGUI.Container::_panelOrder
	int32_t ____panelOrder_68;

public:
	inline static int32_t get_offset_of_renderMode_52() { return static_cast<int32_t>(offsetof(Container_t2415729585, ___renderMode_52)); }
	inline int32_t get_renderMode_52() const { return ___renderMode_52; }
	inline int32_t* get_address_of_renderMode_52() { return &___renderMode_52; }
	inline void set_renderMode_52(int32_t value)
	{
		___renderMode_52 = value;
	}

	inline static int32_t get_offset_of_renderCamera_53() { return static_cast<int32_t>(offsetof(Container_t2415729585, ___renderCamera_53)); }
	inline Camera_t189460977 * get_renderCamera_53() const { return ___renderCamera_53; }
	inline Camera_t189460977 ** get_address_of_renderCamera_53() { return &___renderCamera_53; }
	inline void set_renderCamera_53(Camera_t189460977 * value)
	{
		___renderCamera_53 = value;
		Il2CppCodeGenWriteBarrier(&___renderCamera_53, value);
	}

	inline static int32_t get_offset_of_opaque_54() { return static_cast<int32_t>(offsetof(Container_t2415729585, ___opaque_54)); }
	inline bool get_opaque_54() const { return ___opaque_54; }
	inline bool* get_address_of_opaque_54() { return &___opaque_54; }
	inline void set_opaque_54(bool value)
	{
		___opaque_54 = value;
	}

	inline static int32_t get_offset_of_clipSoftness_55() { return static_cast<int32_t>(offsetof(Container_t2415729585, ___clipSoftness_55)); }
	inline Nullable_1_t506773896  get_clipSoftness_55() const { return ___clipSoftness_55; }
	inline Nullable_1_t506773896 * get_address_of_clipSoftness_55() { return &___clipSoftness_55; }
	inline void set_clipSoftness_55(Nullable_1_t506773896  value)
	{
		___clipSoftness_55 = value;
	}

	inline static int32_t get_offset_of_hitArea_56() { return static_cast<int32_t>(offsetof(Container_t2415729585, ___hitArea_56)); }
	inline Il2CppObject * get_hitArea_56() const { return ___hitArea_56; }
	inline Il2CppObject ** get_address_of_hitArea_56() { return &___hitArea_56; }
	inline void set_hitArea_56(Il2CppObject * value)
	{
		___hitArea_56 = value;
		Il2CppCodeGenWriteBarrier(&___hitArea_56, value);
	}

	inline static int32_t get_offset_of_touchChildren_57() { return static_cast<int32_t>(offsetof(Container_t2415729585, ___touchChildren_57)); }
	inline bool get_touchChildren_57() const { return ___touchChildren_57; }
	inline bool* get_address_of_touchChildren_57() { return &___touchChildren_57; }
	inline void set_touchChildren_57(bool value)
	{
		___touchChildren_57 = value;
	}

	inline static int32_t get_offset_of_onUpdate_58() { return static_cast<int32_t>(offsetof(Container_t2415729585, ___onUpdate_58)); }
	inline EventCallback0_t422277839 * get_onUpdate_58() const { return ___onUpdate_58; }
	inline EventCallback0_t422277839 ** get_address_of_onUpdate_58() { return &___onUpdate_58; }
	inline void set_onUpdate_58(EventCallback0_t422277839 * value)
	{
		___onUpdate_58 = value;
		Il2CppCodeGenWriteBarrier(&___onUpdate_58, value);
	}

	inline static int32_t get_offset_of_reversedMask_59() { return static_cast<int32_t>(offsetof(Container_t2415729585, ___reversedMask_59)); }
	inline bool get_reversedMask_59() const { return ___reversedMask_59; }
	inline bool* get_address_of_reversedMask_59() { return &___reversedMask_59; }
	inline void set_reversedMask_59(bool value)
	{
		___reversedMask_59 = value;
	}

	inline static int32_t get_offset_of__children_60() { return static_cast<int32_t>(offsetof(Container_t2415729585, ____children_60)); }
	inline List_1_t438889785 * get__children_60() const { return ____children_60; }
	inline List_1_t438889785 ** get_address_of__children_60() { return &____children_60; }
	inline void set__children_60(List_1_t438889785 * value)
	{
		____children_60 = value;
		Il2CppCodeGenWriteBarrier(&____children_60, value);
	}

	inline static int32_t get_offset_of__mask_61() { return static_cast<int32_t>(offsetof(Container_t2415729585, ____mask_61)); }
	inline DisplayObject_t1069768653 * get__mask_61() const { return ____mask_61; }
	inline DisplayObject_t1069768653 ** get_address_of__mask_61() { return &____mask_61; }
	inline void set__mask_61(DisplayObject_t1069768653 * value)
	{
		____mask_61 = value;
		Il2CppCodeGenWriteBarrier(&____mask_61, value);
	}

	inline static int32_t get_offset_of__clipRect_62() { return static_cast<int32_t>(offsetof(Container_t2415729585, ____clipRect_62)); }
	inline Nullable_1_t1944821941  get__clipRect_62() const { return ____clipRect_62; }
	inline Nullable_1_t1944821941 * get_address_of__clipRect_62() { return &____clipRect_62; }
	inline void set__clipRect_62(Nullable_1_t1944821941  value)
	{
		____clipRect_62 = value;
	}

	inline static int32_t get_offset_of__fBatchingRequested_63() { return static_cast<int32_t>(offsetof(Container_t2415729585, ____fBatchingRequested_63)); }
	inline bool get__fBatchingRequested_63() const { return ____fBatchingRequested_63; }
	inline bool* get_address_of__fBatchingRequested_63() { return &____fBatchingRequested_63; }
	inline void set__fBatchingRequested_63(bool value)
	{
		____fBatchingRequested_63 = value;
	}

	inline static int32_t get_offset_of__fBatchingRoot_64() { return static_cast<int32_t>(offsetof(Container_t2415729585, ____fBatchingRoot_64)); }
	inline bool get__fBatchingRoot_64() const { return ____fBatchingRoot_64; }
	inline bool* get_address_of__fBatchingRoot_64() { return &____fBatchingRoot_64; }
	inline void set__fBatchingRoot_64(bool value)
	{
		____fBatchingRoot_64 = value;
	}

	inline static int32_t get_offset_of__fBatching_65() { return static_cast<int32_t>(offsetof(Container_t2415729585, ____fBatching_65)); }
	inline bool get__fBatching_65() const { return ____fBatching_65; }
	inline bool* get_address_of__fBatching_65() { return &____fBatching_65; }
	inline void set__fBatching_65(bool value)
	{
		____fBatching_65 = value;
	}

	inline static int32_t get_offset_of__descendants_66() { return static_cast<int32_t>(offsetof(Container_t2415729585, ____descendants_66)); }
	inline List_1_t438889785 * get__descendants_66() const { return ____descendants_66; }
	inline List_1_t438889785 ** get_address_of__descendants_66() { return &____descendants_66; }
	inline void set__descendants_66(List_1_t438889785 * value)
	{
		____descendants_66 = value;
		Il2CppCodeGenWriteBarrier(&____descendants_66, value);
	}

	inline static int32_t get_offset_of__disabled_67() { return static_cast<int32_t>(offsetof(Container_t2415729585, ____disabled_67)); }
	inline bool get__disabled_67() const { return ____disabled_67; }
	inline bool* get_address_of__disabled_67() { return &____disabled_67; }
	inline void set__disabled_67(bool value)
	{
		____disabled_67 = value;
	}

	inline static int32_t get_offset_of__panelOrder_68() { return static_cast<int32_t>(offsetof(Container_t2415729585, ____panelOrder_68)); }
	inline int32_t get__panelOrder_68() const { return ____panelOrder_68; }
	inline int32_t* get_address_of__panelOrder_68() { return &____panelOrder_68; }
	inline void set__panelOrder_68(int32_t value)
	{
		____panelOrder_68 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

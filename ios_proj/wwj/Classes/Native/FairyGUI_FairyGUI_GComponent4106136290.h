#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "FairyGUI_FairyGUI_GObject2662234644.h"
#include "FairyGUI_FairyGUI_Margin737097136.h"
#include "FairyGUI_FairyGUI_ChildrenRenderOrder3383768701.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// FairyGUI.Container
struct Container_t2415729585;
// FairyGUI.ScrollPane
struct ScrollPane_t431787213;
// FairyGUI.EventListener
struct EventListener_t2764096410;
// System.Collections.Generic.List`1<FairyGUI.GObject>
struct List_1_t2031355776;
// System.Collections.Generic.List`1<FairyGUI.Controller>
struct List_1_t3420458046;
// System.Collections.Generic.List`1<FairyGUI.Transition>
struct List_1_t948815177;
// FairyGUI.EventCallback0
struct EventCallback0_t422277839;
// FairyGUI.Controller
struct Controller_t4051336914;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.GComponent
struct  GComponent_t4106136290  : public GObject_t2662234644
{
public:
	// FairyGUI.Container FairyGUI.GComponent::<rootContainer>k__BackingField
	Container_t2415729585 * ___U3CrootContainerU3Ek__BackingField_74;
	// FairyGUI.Container FairyGUI.GComponent::<container>k__BackingField
	Container_t2415729585 * ___U3CcontainerU3Ek__BackingField_75;
	// FairyGUI.ScrollPane FairyGUI.GComponent::<scrollPane>k__BackingField
	ScrollPane_t431787213 * ___U3CscrollPaneU3Ek__BackingField_76;
	// FairyGUI.EventListener FairyGUI.GComponent::<onDrop>k__BackingField
	EventListener_t2764096410 * ___U3ConDropU3Ek__BackingField_77;
	// System.Collections.Generic.List`1<FairyGUI.GObject> FairyGUI.GComponent::_children
	List_1_t2031355776 * ____children_78;
	// System.Collections.Generic.List`1<FairyGUI.Controller> FairyGUI.GComponent::_controllers
	List_1_t3420458046 * ____controllers_79;
	// System.Collections.Generic.List`1<FairyGUI.Transition> FairyGUI.GComponent::_transitions
	List_1_t948815177 * ____transitions_80;
	// System.Boolean FairyGUI.GComponent::_buildingDisplayList
	bool ____buildingDisplayList_81;
	// FairyGUI.Margin FairyGUI.GComponent::_margin
	Margin_t737097136  ____margin_82;
	// System.Boolean FairyGUI.GComponent::_trackBounds
	bool ____trackBounds_83;
	// System.Boolean FairyGUI.GComponent::_boundsChanged
	bool ____boundsChanged_84;
	// FairyGUI.ChildrenRenderOrder FairyGUI.GComponent::_childrenRenderOrder
	int32_t ____childrenRenderOrder_85;
	// System.Int32 FairyGUI.GComponent::_apexIndex
	int32_t ____apexIndex_86;
	// UnityEngine.Vector2 FairyGUI.GComponent::_alignOffset
	Vector2_t2243707579  ____alignOffset_87;
	// UnityEngine.Vector2 FairyGUI.GComponent::_clipSoftness
	Vector2_t2243707579  ____clipSoftness_88;
	// System.Int32 FairyGUI.GComponent::_sortingChildCount
	int32_t ____sortingChildCount_89;
	// FairyGUI.EventCallback0 FairyGUI.GComponent::_buildDelegate
	EventCallback0_t422277839 * ____buildDelegate_90;
	// FairyGUI.Controller FairyGUI.GComponent::_applyingController
	Controller_t4051336914 * ____applyingController_91;

public:
	inline static int32_t get_offset_of_U3CrootContainerU3Ek__BackingField_74() { return static_cast<int32_t>(offsetof(GComponent_t4106136290, ___U3CrootContainerU3Ek__BackingField_74)); }
	inline Container_t2415729585 * get_U3CrootContainerU3Ek__BackingField_74() const { return ___U3CrootContainerU3Ek__BackingField_74; }
	inline Container_t2415729585 ** get_address_of_U3CrootContainerU3Ek__BackingField_74() { return &___U3CrootContainerU3Ek__BackingField_74; }
	inline void set_U3CrootContainerU3Ek__BackingField_74(Container_t2415729585 * value)
	{
		___U3CrootContainerU3Ek__BackingField_74 = value;
		Il2CppCodeGenWriteBarrier(&___U3CrootContainerU3Ek__BackingField_74, value);
	}

	inline static int32_t get_offset_of_U3CcontainerU3Ek__BackingField_75() { return static_cast<int32_t>(offsetof(GComponent_t4106136290, ___U3CcontainerU3Ek__BackingField_75)); }
	inline Container_t2415729585 * get_U3CcontainerU3Ek__BackingField_75() const { return ___U3CcontainerU3Ek__BackingField_75; }
	inline Container_t2415729585 ** get_address_of_U3CcontainerU3Ek__BackingField_75() { return &___U3CcontainerU3Ek__BackingField_75; }
	inline void set_U3CcontainerU3Ek__BackingField_75(Container_t2415729585 * value)
	{
		___U3CcontainerU3Ek__BackingField_75 = value;
		Il2CppCodeGenWriteBarrier(&___U3CcontainerU3Ek__BackingField_75, value);
	}

	inline static int32_t get_offset_of_U3CscrollPaneU3Ek__BackingField_76() { return static_cast<int32_t>(offsetof(GComponent_t4106136290, ___U3CscrollPaneU3Ek__BackingField_76)); }
	inline ScrollPane_t431787213 * get_U3CscrollPaneU3Ek__BackingField_76() const { return ___U3CscrollPaneU3Ek__BackingField_76; }
	inline ScrollPane_t431787213 ** get_address_of_U3CscrollPaneU3Ek__BackingField_76() { return &___U3CscrollPaneU3Ek__BackingField_76; }
	inline void set_U3CscrollPaneU3Ek__BackingField_76(ScrollPane_t431787213 * value)
	{
		___U3CscrollPaneU3Ek__BackingField_76 = value;
		Il2CppCodeGenWriteBarrier(&___U3CscrollPaneU3Ek__BackingField_76, value);
	}

	inline static int32_t get_offset_of_U3ConDropU3Ek__BackingField_77() { return static_cast<int32_t>(offsetof(GComponent_t4106136290, ___U3ConDropU3Ek__BackingField_77)); }
	inline EventListener_t2764096410 * get_U3ConDropU3Ek__BackingField_77() const { return ___U3ConDropU3Ek__BackingField_77; }
	inline EventListener_t2764096410 ** get_address_of_U3ConDropU3Ek__BackingField_77() { return &___U3ConDropU3Ek__BackingField_77; }
	inline void set_U3ConDropU3Ek__BackingField_77(EventListener_t2764096410 * value)
	{
		___U3ConDropU3Ek__BackingField_77 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConDropU3Ek__BackingField_77, value);
	}

	inline static int32_t get_offset_of__children_78() { return static_cast<int32_t>(offsetof(GComponent_t4106136290, ____children_78)); }
	inline List_1_t2031355776 * get__children_78() const { return ____children_78; }
	inline List_1_t2031355776 ** get_address_of__children_78() { return &____children_78; }
	inline void set__children_78(List_1_t2031355776 * value)
	{
		____children_78 = value;
		Il2CppCodeGenWriteBarrier(&____children_78, value);
	}

	inline static int32_t get_offset_of__controllers_79() { return static_cast<int32_t>(offsetof(GComponent_t4106136290, ____controllers_79)); }
	inline List_1_t3420458046 * get__controllers_79() const { return ____controllers_79; }
	inline List_1_t3420458046 ** get_address_of__controllers_79() { return &____controllers_79; }
	inline void set__controllers_79(List_1_t3420458046 * value)
	{
		____controllers_79 = value;
		Il2CppCodeGenWriteBarrier(&____controllers_79, value);
	}

	inline static int32_t get_offset_of__transitions_80() { return static_cast<int32_t>(offsetof(GComponent_t4106136290, ____transitions_80)); }
	inline List_1_t948815177 * get__transitions_80() const { return ____transitions_80; }
	inline List_1_t948815177 ** get_address_of__transitions_80() { return &____transitions_80; }
	inline void set__transitions_80(List_1_t948815177 * value)
	{
		____transitions_80 = value;
		Il2CppCodeGenWriteBarrier(&____transitions_80, value);
	}

	inline static int32_t get_offset_of__buildingDisplayList_81() { return static_cast<int32_t>(offsetof(GComponent_t4106136290, ____buildingDisplayList_81)); }
	inline bool get__buildingDisplayList_81() const { return ____buildingDisplayList_81; }
	inline bool* get_address_of__buildingDisplayList_81() { return &____buildingDisplayList_81; }
	inline void set__buildingDisplayList_81(bool value)
	{
		____buildingDisplayList_81 = value;
	}

	inline static int32_t get_offset_of__margin_82() { return static_cast<int32_t>(offsetof(GComponent_t4106136290, ____margin_82)); }
	inline Margin_t737097136  get__margin_82() const { return ____margin_82; }
	inline Margin_t737097136 * get_address_of__margin_82() { return &____margin_82; }
	inline void set__margin_82(Margin_t737097136  value)
	{
		____margin_82 = value;
	}

	inline static int32_t get_offset_of__trackBounds_83() { return static_cast<int32_t>(offsetof(GComponent_t4106136290, ____trackBounds_83)); }
	inline bool get__trackBounds_83() const { return ____trackBounds_83; }
	inline bool* get_address_of__trackBounds_83() { return &____trackBounds_83; }
	inline void set__trackBounds_83(bool value)
	{
		____trackBounds_83 = value;
	}

	inline static int32_t get_offset_of__boundsChanged_84() { return static_cast<int32_t>(offsetof(GComponent_t4106136290, ____boundsChanged_84)); }
	inline bool get__boundsChanged_84() const { return ____boundsChanged_84; }
	inline bool* get_address_of__boundsChanged_84() { return &____boundsChanged_84; }
	inline void set__boundsChanged_84(bool value)
	{
		____boundsChanged_84 = value;
	}

	inline static int32_t get_offset_of__childrenRenderOrder_85() { return static_cast<int32_t>(offsetof(GComponent_t4106136290, ____childrenRenderOrder_85)); }
	inline int32_t get__childrenRenderOrder_85() const { return ____childrenRenderOrder_85; }
	inline int32_t* get_address_of__childrenRenderOrder_85() { return &____childrenRenderOrder_85; }
	inline void set__childrenRenderOrder_85(int32_t value)
	{
		____childrenRenderOrder_85 = value;
	}

	inline static int32_t get_offset_of__apexIndex_86() { return static_cast<int32_t>(offsetof(GComponent_t4106136290, ____apexIndex_86)); }
	inline int32_t get__apexIndex_86() const { return ____apexIndex_86; }
	inline int32_t* get_address_of__apexIndex_86() { return &____apexIndex_86; }
	inline void set__apexIndex_86(int32_t value)
	{
		____apexIndex_86 = value;
	}

	inline static int32_t get_offset_of__alignOffset_87() { return static_cast<int32_t>(offsetof(GComponent_t4106136290, ____alignOffset_87)); }
	inline Vector2_t2243707579  get__alignOffset_87() const { return ____alignOffset_87; }
	inline Vector2_t2243707579 * get_address_of__alignOffset_87() { return &____alignOffset_87; }
	inline void set__alignOffset_87(Vector2_t2243707579  value)
	{
		____alignOffset_87 = value;
	}

	inline static int32_t get_offset_of__clipSoftness_88() { return static_cast<int32_t>(offsetof(GComponent_t4106136290, ____clipSoftness_88)); }
	inline Vector2_t2243707579  get__clipSoftness_88() const { return ____clipSoftness_88; }
	inline Vector2_t2243707579 * get_address_of__clipSoftness_88() { return &____clipSoftness_88; }
	inline void set__clipSoftness_88(Vector2_t2243707579  value)
	{
		____clipSoftness_88 = value;
	}

	inline static int32_t get_offset_of__sortingChildCount_89() { return static_cast<int32_t>(offsetof(GComponent_t4106136290, ____sortingChildCount_89)); }
	inline int32_t get__sortingChildCount_89() const { return ____sortingChildCount_89; }
	inline int32_t* get_address_of__sortingChildCount_89() { return &____sortingChildCount_89; }
	inline void set__sortingChildCount_89(int32_t value)
	{
		____sortingChildCount_89 = value;
	}

	inline static int32_t get_offset_of__buildDelegate_90() { return static_cast<int32_t>(offsetof(GComponent_t4106136290, ____buildDelegate_90)); }
	inline EventCallback0_t422277839 * get__buildDelegate_90() const { return ____buildDelegate_90; }
	inline EventCallback0_t422277839 ** get_address_of__buildDelegate_90() { return &____buildDelegate_90; }
	inline void set__buildDelegate_90(EventCallback0_t422277839 * value)
	{
		____buildDelegate_90 = value;
		Il2CppCodeGenWriteBarrier(&____buildDelegate_90, value);
	}

	inline static int32_t get_offset_of__applyingController_91() { return static_cast<int32_t>(offsetof(GComponent_t4106136290, ____applyingController_91)); }
	inline Controller_t4051336914 * get__applyingController_91() const { return ____applyingController_91; }
	inline Controller_t4051336914 ** get_address_of__applyingController_91() { return &____applyingController_91; }
	inline void set__applyingController_91(Controller_t4051336914 * value)
	{
		____applyingController_91 = value;
		Il2CppCodeGenWriteBarrier(&____applyingController_91, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

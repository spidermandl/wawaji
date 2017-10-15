#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "FairyGUI_FairyGUI_Container2415729585.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// FairyGUI.EventListener
struct EventListener_t2764096410;
// FairyGUI.DisplayObject
struct DisplayObject_t1069768653;
// FairyGUI.InputTextField
struct InputTextField_t1181403655;
// FairyGUI.UpdateContext
struct UpdateContext_t3866408942;
// System.Collections.Generic.List`1<FairyGUI.DisplayObject>
struct List_1_t438889785;
// FairyGUI.TouchInfo[]
struct TouchInfoU5BU5D_t1272343496;
// FairyGUI.EventCallback1
struct EventCallback1_t422277840;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// FairyGUI.IKeyboard
struct IKeyboard_t1023688848;
// System.Collections.Generic.List`1<FairyGUI.NTexture>
struct List_1_t3748291091;
// FairyGUI.Stage
struct Stage_t1180769360;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.Stage
struct  Stage_t1180769360  : public Container_t2415729585
{
public:
	// System.Int32 FairyGUI.Stage::<stageHeight>k__BackingField
	int32_t ___U3CstageHeightU3Ek__BackingField_71;
	// System.Int32 FairyGUI.Stage::<stageWidth>k__BackingField
	int32_t ___U3CstageWidthU3Ek__BackingField_72;
	// System.Single FairyGUI.Stage::<soundVolume>k__BackingField
	float ___U3CsoundVolumeU3Ek__BackingField_73;
	// FairyGUI.EventListener FairyGUI.Stage::<onStageResized>k__BackingField
	EventListener_t2764096410 * ___U3ConStageResizedU3Ek__BackingField_74;
	// FairyGUI.EventListener FairyGUI.Stage::<onTouchMove>k__BackingField
	EventListener_t2764096410 * ___U3ConTouchMoveU3Ek__BackingField_75;
	// FairyGUI.DisplayObject FairyGUI.Stage::_touchTarget
	DisplayObject_t1069768653 * ____touchTarget_76;
	// FairyGUI.DisplayObject FairyGUI.Stage::_focused
	DisplayObject_t1069768653 * ____focused_77;
	// FairyGUI.InputTextField FairyGUI.Stage::_lastInput
	InputTextField_t1181403655 * ____lastInput_78;
	// FairyGUI.UpdateContext FairyGUI.Stage::_updateContext
	UpdateContext_t3866408942 * ____updateContext_79;
	// System.Collections.Generic.List`1<FairyGUI.DisplayObject> FairyGUI.Stage::_rollOutChain
	List_1_t438889785 * ____rollOutChain_80;
	// System.Collections.Generic.List`1<FairyGUI.DisplayObject> FairyGUI.Stage::_rollOverChain
	List_1_t438889785 * ____rollOverChain_81;
	// FairyGUI.TouchInfo[] FairyGUI.Stage::_touches
	TouchInfoU5BU5D_t1272343496* ____touches_82;
	// System.Int32 FairyGUI.Stage::_touchCount
	int32_t ____touchCount_83;
	// UnityEngine.Vector2 FairyGUI.Stage::_touchPosition
	Vector2_t2243707579  ____touchPosition_84;
	// System.Int32 FairyGUI.Stage::_frameGotHitTarget
	int32_t ____frameGotHitTarget_85;
	// System.Int32 FairyGUI.Stage::_frameGotTouchPosition
	int32_t ____frameGotTouchPosition_86;
	// System.Boolean FairyGUI.Stage::_customInput
	bool ____customInput_87;
	// UnityEngine.Vector2 FairyGUI.Stage::_customInputPos
	Vector2_t2243707579  ____customInputPos_88;
	// System.Boolean FairyGUI.Stage::_customInputButtonDown
	bool ____customInputButtonDown_89;
	// FairyGUI.EventCallback1 FairyGUI.Stage::_focusRemovedDelegate
	EventCallback1_t422277840 * ____focusRemovedDelegate_90;
	// UnityEngine.AudioSource FairyGUI.Stage::_audio
	AudioSource_t1135106623 * ____audio_91;
	// FairyGUI.IKeyboard FairyGUI.Stage::_keyboard
	Il2CppObject * ____keyboard_92;
	// System.Collections.Generic.List`1<FairyGUI.NTexture> FairyGUI.Stage::_toCollectTextures
	List_1_t3748291091 * ____toCollectTextures_93;

public:
	inline static int32_t get_offset_of_U3CstageHeightU3Ek__BackingField_71() { return static_cast<int32_t>(offsetof(Stage_t1180769360, ___U3CstageHeightU3Ek__BackingField_71)); }
	inline int32_t get_U3CstageHeightU3Ek__BackingField_71() const { return ___U3CstageHeightU3Ek__BackingField_71; }
	inline int32_t* get_address_of_U3CstageHeightU3Ek__BackingField_71() { return &___U3CstageHeightU3Ek__BackingField_71; }
	inline void set_U3CstageHeightU3Ek__BackingField_71(int32_t value)
	{
		___U3CstageHeightU3Ek__BackingField_71 = value;
	}

	inline static int32_t get_offset_of_U3CstageWidthU3Ek__BackingField_72() { return static_cast<int32_t>(offsetof(Stage_t1180769360, ___U3CstageWidthU3Ek__BackingField_72)); }
	inline int32_t get_U3CstageWidthU3Ek__BackingField_72() const { return ___U3CstageWidthU3Ek__BackingField_72; }
	inline int32_t* get_address_of_U3CstageWidthU3Ek__BackingField_72() { return &___U3CstageWidthU3Ek__BackingField_72; }
	inline void set_U3CstageWidthU3Ek__BackingField_72(int32_t value)
	{
		___U3CstageWidthU3Ek__BackingField_72 = value;
	}

	inline static int32_t get_offset_of_U3CsoundVolumeU3Ek__BackingField_73() { return static_cast<int32_t>(offsetof(Stage_t1180769360, ___U3CsoundVolumeU3Ek__BackingField_73)); }
	inline float get_U3CsoundVolumeU3Ek__BackingField_73() const { return ___U3CsoundVolumeU3Ek__BackingField_73; }
	inline float* get_address_of_U3CsoundVolumeU3Ek__BackingField_73() { return &___U3CsoundVolumeU3Ek__BackingField_73; }
	inline void set_U3CsoundVolumeU3Ek__BackingField_73(float value)
	{
		___U3CsoundVolumeU3Ek__BackingField_73 = value;
	}

	inline static int32_t get_offset_of_U3ConStageResizedU3Ek__BackingField_74() { return static_cast<int32_t>(offsetof(Stage_t1180769360, ___U3ConStageResizedU3Ek__BackingField_74)); }
	inline EventListener_t2764096410 * get_U3ConStageResizedU3Ek__BackingField_74() const { return ___U3ConStageResizedU3Ek__BackingField_74; }
	inline EventListener_t2764096410 ** get_address_of_U3ConStageResizedU3Ek__BackingField_74() { return &___U3ConStageResizedU3Ek__BackingField_74; }
	inline void set_U3ConStageResizedU3Ek__BackingField_74(EventListener_t2764096410 * value)
	{
		___U3ConStageResizedU3Ek__BackingField_74 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConStageResizedU3Ek__BackingField_74, value);
	}

	inline static int32_t get_offset_of_U3ConTouchMoveU3Ek__BackingField_75() { return static_cast<int32_t>(offsetof(Stage_t1180769360, ___U3ConTouchMoveU3Ek__BackingField_75)); }
	inline EventListener_t2764096410 * get_U3ConTouchMoveU3Ek__BackingField_75() const { return ___U3ConTouchMoveU3Ek__BackingField_75; }
	inline EventListener_t2764096410 ** get_address_of_U3ConTouchMoveU3Ek__BackingField_75() { return &___U3ConTouchMoveU3Ek__BackingField_75; }
	inline void set_U3ConTouchMoveU3Ek__BackingField_75(EventListener_t2764096410 * value)
	{
		___U3ConTouchMoveU3Ek__BackingField_75 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConTouchMoveU3Ek__BackingField_75, value);
	}

	inline static int32_t get_offset_of__touchTarget_76() { return static_cast<int32_t>(offsetof(Stage_t1180769360, ____touchTarget_76)); }
	inline DisplayObject_t1069768653 * get__touchTarget_76() const { return ____touchTarget_76; }
	inline DisplayObject_t1069768653 ** get_address_of__touchTarget_76() { return &____touchTarget_76; }
	inline void set__touchTarget_76(DisplayObject_t1069768653 * value)
	{
		____touchTarget_76 = value;
		Il2CppCodeGenWriteBarrier(&____touchTarget_76, value);
	}

	inline static int32_t get_offset_of__focused_77() { return static_cast<int32_t>(offsetof(Stage_t1180769360, ____focused_77)); }
	inline DisplayObject_t1069768653 * get__focused_77() const { return ____focused_77; }
	inline DisplayObject_t1069768653 ** get_address_of__focused_77() { return &____focused_77; }
	inline void set__focused_77(DisplayObject_t1069768653 * value)
	{
		____focused_77 = value;
		Il2CppCodeGenWriteBarrier(&____focused_77, value);
	}

	inline static int32_t get_offset_of__lastInput_78() { return static_cast<int32_t>(offsetof(Stage_t1180769360, ____lastInput_78)); }
	inline InputTextField_t1181403655 * get__lastInput_78() const { return ____lastInput_78; }
	inline InputTextField_t1181403655 ** get_address_of__lastInput_78() { return &____lastInput_78; }
	inline void set__lastInput_78(InputTextField_t1181403655 * value)
	{
		____lastInput_78 = value;
		Il2CppCodeGenWriteBarrier(&____lastInput_78, value);
	}

	inline static int32_t get_offset_of__updateContext_79() { return static_cast<int32_t>(offsetof(Stage_t1180769360, ____updateContext_79)); }
	inline UpdateContext_t3866408942 * get__updateContext_79() const { return ____updateContext_79; }
	inline UpdateContext_t3866408942 ** get_address_of__updateContext_79() { return &____updateContext_79; }
	inline void set__updateContext_79(UpdateContext_t3866408942 * value)
	{
		____updateContext_79 = value;
		Il2CppCodeGenWriteBarrier(&____updateContext_79, value);
	}

	inline static int32_t get_offset_of__rollOutChain_80() { return static_cast<int32_t>(offsetof(Stage_t1180769360, ____rollOutChain_80)); }
	inline List_1_t438889785 * get__rollOutChain_80() const { return ____rollOutChain_80; }
	inline List_1_t438889785 ** get_address_of__rollOutChain_80() { return &____rollOutChain_80; }
	inline void set__rollOutChain_80(List_1_t438889785 * value)
	{
		____rollOutChain_80 = value;
		Il2CppCodeGenWriteBarrier(&____rollOutChain_80, value);
	}

	inline static int32_t get_offset_of__rollOverChain_81() { return static_cast<int32_t>(offsetof(Stage_t1180769360, ____rollOverChain_81)); }
	inline List_1_t438889785 * get__rollOverChain_81() const { return ____rollOverChain_81; }
	inline List_1_t438889785 ** get_address_of__rollOverChain_81() { return &____rollOverChain_81; }
	inline void set__rollOverChain_81(List_1_t438889785 * value)
	{
		____rollOverChain_81 = value;
		Il2CppCodeGenWriteBarrier(&____rollOverChain_81, value);
	}

	inline static int32_t get_offset_of__touches_82() { return static_cast<int32_t>(offsetof(Stage_t1180769360, ____touches_82)); }
	inline TouchInfoU5BU5D_t1272343496* get__touches_82() const { return ____touches_82; }
	inline TouchInfoU5BU5D_t1272343496** get_address_of__touches_82() { return &____touches_82; }
	inline void set__touches_82(TouchInfoU5BU5D_t1272343496* value)
	{
		____touches_82 = value;
		Il2CppCodeGenWriteBarrier(&____touches_82, value);
	}

	inline static int32_t get_offset_of__touchCount_83() { return static_cast<int32_t>(offsetof(Stage_t1180769360, ____touchCount_83)); }
	inline int32_t get__touchCount_83() const { return ____touchCount_83; }
	inline int32_t* get_address_of__touchCount_83() { return &____touchCount_83; }
	inline void set__touchCount_83(int32_t value)
	{
		____touchCount_83 = value;
	}

	inline static int32_t get_offset_of__touchPosition_84() { return static_cast<int32_t>(offsetof(Stage_t1180769360, ____touchPosition_84)); }
	inline Vector2_t2243707579  get__touchPosition_84() const { return ____touchPosition_84; }
	inline Vector2_t2243707579 * get_address_of__touchPosition_84() { return &____touchPosition_84; }
	inline void set__touchPosition_84(Vector2_t2243707579  value)
	{
		____touchPosition_84 = value;
	}

	inline static int32_t get_offset_of__frameGotHitTarget_85() { return static_cast<int32_t>(offsetof(Stage_t1180769360, ____frameGotHitTarget_85)); }
	inline int32_t get__frameGotHitTarget_85() const { return ____frameGotHitTarget_85; }
	inline int32_t* get_address_of__frameGotHitTarget_85() { return &____frameGotHitTarget_85; }
	inline void set__frameGotHitTarget_85(int32_t value)
	{
		____frameGotHitTarget_85 = value;
	}

	inline static int32_t get_offset_of__frameGotTouchPosition_86() { return static_cast<int32_t>(offsetof(Stage_t1180769360, ____frameGotTouchPosition_86)); }
	inline int32_t get__frameGotTouchPosition_86() const { return ____frameGotTouchPosition_86; }
	inline int32_t* get_address_of__frameGotTouchPosition_86() { return &____frameGotTouchPosition_86; }
	inline void set__frameGotTouchPosition_86(int32_t value)
	{
		____frameGotTouchPosition_86 = value;
	}

	inline static int32_t get_offset_of__customInput_87() { return static_cast<int32_t>(offsetof(Stage_t1180769360, ____customInput_87)); }
	inline bool get__customInput_87() const { return ____customInput_87; }
	inline bool* get_address_of__customInput_87() { return &____customInput_87; }
	inline void set__customInput_87(bool value)
	{
		____customInput_87 = value;
	}

	inline static int32_t get_offset_of__customInputPos_88() { return static_cast<int32_t>(offsetof(Stage_t1180769360, ____customInputPos_88)); }
	inline Vector2_t2243707579  get__customInputPos_88() const { return ____customInputPos_88; }
	inline Vector2_t2243707579 * get_address_of__customInputPos_88() { return &____customInputPos_88; }
	inline void set__customInputPos_88(Vector2_t2243707579  value)
	{
		____customInputPos_88 = value;
	}

	inline static int32_t get_offset_of__customInputButtonDown_89() { return static_cast<int32_t>(offsetof(Stage_t1180769360, ____customInputButtonDown_89)); }
	inline bool get__customInputButtonDown_89() const { return ____customInputButtonDown_89; }
	inline bool* get_address_of__customInputButtonDown_89() { return &____customInputButtonDown_89; }
	inline void set__customInputButtonDown_89(bool value)
	{
		____customInputButtonDown_89 = value;
	}

	inline static int32_t get_offset_of__focusRemovedDelegate_90() { return static_cast<int32_t>(offsetof(Stage_t1180769360, ____focusRemovedDelegate_90)); }
	inline EventCallback1_t422277840 * get__focusRemovedDelegate_90() const { return ____focusRemovedDelegate_90; }
	inline EventCallback1_t422277840 ** get_address_of__focusRemovedDelegate_90() { return &____focusRemovedDelegate_90; }
	inline void set__focusRemovedDelegate_90(EventCallback1_t422277840 * value)
	{
		____focusRemovedDelegate_90 = value;
		Il2CppCodeGenWriteBarrier(&____focusRemovedDelegate_90, value);
	}

	inline static int32_t get_offset_of__audio_91() { return static_cast<int32_t>(offsetof(Stage_t1180769360, ____audio_91)); }
	inline AudioSource_t1135106623 * get__audio_91() const { return ____audio_91; }
	inline AudioSource_t1135106623 ** get_address_of__audio_91() { return &____audio_91; }
	inline void set__audio_91(AudioSource_t1135106623 * value)
	{
		____audio_91 = value;
		Il2CppCodeGenWriteBarrier(&____audio_91, value);
	}

	inline static int32_t get_offset_of__keyboard_92() { return static_cast<int32_t>(offsetof(Stage_t1180769360, ____keyboard_92)); }
	inline Il2CppObject * get__keyboard_92() const { return ____keyboard_92; }
	inline Il2CppObject ** get_address_of__keyboard_92() { return &____keyboard_92; }
	inline void set__keyboard_92(Il2CppObject * value)
	{
		____keyboard_92 = value;
		Il2CppCodeGenWriteBarrier(&____keyboard_92, value);
	}

	inline static int32_t get_offset_of__toCollectTextures_93() { return static_cast<int32_t>(offsetof(Stage_t1180769360, ____toCollectTextures_93)); }
	inline List_1_t3748291091 * get__toCollectTextures_93() const { return ____toCollectTextures_93; }
	inline List_1_t3748291091 ** get_address_of__toCollectTextures_93() { return &____toCollectTextures_93; }
	inline void set__toCollectTextures_93(List_1_t3748291091 * value)
	{
		____toCollectTextures_93 = value;
		Il2CppCodeGenWriteBarrier(&____toCollectTextures_93, value);
	}
};

struct Stage_t1180769360_StaticFields
{
public:
	// System.Boolean FairyGUI.Stage::<touchScreen>k__BackingField
	bool ___U3CtouchScreenU3Ek__BackingField_69;
	// System.Boolean FairyGUI.Stage::<keyboardInput>k__BackingField
	bool ___U3CkeyboardInputU3Ek__BackingField_70;
	// FairyGUI.Stage FairyGUI.Stage::_inst
	Stage_t1180769360 * ____inst_94;
	// System.Collections.Generic.List`1<FairyGUI.DisplayObject> FairyGUI.Stage::sTempList1
	List_1_t438889785 * ___sTempList1_95;
	// System.Collections.Generic.List`1<System.Int32> FairyGUI.Stage::sTempList2
	List_1_t1440998580 * ___sTempList2_96;

public:
	inline static int32_t get_offset_of_U3CtouchScreenU3Ek__BackingField_69() { return static_cast<int32_t>(offsetof(Stage_t1180769360_StaticFields, ___U3CtouchScreenU3Ek__BackingField_69)); }
	inline bool get_U3CtouchScreenU3Ek__BackingField_69() const { return ___U3CtouchScreenU3Ek__BackingField_69; }
	inline bool* get_address_of_U3CtouchScreenU3Ek__BackingField_69() { return &___U3CtouchScreenU3Ek__BackingField_69; }
	inline void set_U3CtouchScreenU3Ek__BackingField_69(bool value)
	{
		___U3CtouchScreenU3Ek__BackingField_69 = value;
	}

	inline static int32_t get_offset_of_U3CkeyboardInputU3Ek__BackingField_70() { return static_cast<int32_t>(offsetof(Stage_t1180769360_StaticFields, ___U3CkeyboardInputU3Ek__BackingField_70)); }
	inline bool get_U3CkeyboardInputU3Ek__BackingField_70() const { return ___U3CkeyboardInputU3Ek__BackingField_70; }
	inline bool* get_address_of_U3CkeyboardInputU3Ek__BackingField_70() { return &___U3CkeyboardInputU3Ek__BackingField_70; }
	inline void set_U3CkeyboardInputU3Ek__BackingField_70(bool value)
	{
		___U3CkeyboardInputU3Ek__BackingField_70 = value;
	}

	inline static int32_t get_offset_of__inst_94() { return static_cast<int32_t>(offsetof(Stage_t1180769360_StaticFields, ____inst_94)); }
	inline Stage_t1180769360 * get__inst_94() const { return ____inst_94; }
	inline Stage_t1180769360 ** get_address_of__inst_94() { return &____inst_94; }
	inline void set__inst_94(Stage_t1180769360 * value)
	{
		____inst_94 = value;
		Il2CppCodeGenWriteBarrier(&____inst_94, value);
	}

	inline static int32_t get_offset_of_sTempList1_95() { return static_cast<int32_t>(offsetof(Stage_t1180769360_StaticFields, ___sTempList1_95)); }
	inline List_1_t438889785 * get_sTempList1_95() const { return ___sTempList1_95; }
	inline List_1_t438889785 ** get_address_of_sTempList1_95() { return &___sTempList1_95; }
	inline void set_sTempList1_95(List_1_t438889785 * value)
	{
		___sTempList1_95 = value;
		Il2CppCodeGenWriteBarrier(&___sTempList1_95, value);
	}

	inline static int32_t get_offset_of_sTempList2_96() { return static_cast<int32_t>(offsetof(Stage_t1180769360_StaticFields, ___sTempList2_96)); }
	inline List_1_t1440998580 * get_sTempList2_96() const { return ___sTempList2_96; }
	inline List_1_t1440998580 ** get_address_of_sTempList2_96() { return &___sTempList2_96; }
	inline void set_sTempList2_96(List_1_t1440998580 * value)
	{
		___sTempList2_96 = value;
		Il2CppCodeGenWriteBarrier(&___sTempList2_96, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

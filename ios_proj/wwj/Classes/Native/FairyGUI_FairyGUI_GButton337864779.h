#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "FairyGUI_FairyGUI_GComponent4106136290.h"
#include "FairyGUI_FairyGUI_ButtonMode291371679.h"

// FairyGUI.PageOption
struct PageOption_t439968204;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// FairyGUI.GObject
struct GObject_t2662234644;
// FairyGUI.EventListener
struct EventListener_t2764096410;
// FairyGUI.Controller
struct Controller_t4051336914;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.GButton
struct  GButton_t337864779  : public GComponent_t4106136290
{
public:
	// FairyGUI.PageOption FairyGUI.GButton::<pageOption>k__BackingField
	PageOption_t439968204 * ___U3CpageOptionU3Ek__BackingField_92;
	// UnityEngine.AudioClip FairyGUI.GButton::sound
	AudioClip_t1932558630 * ___sound_93;
	// System.Single FairyGUI.GButton::soundVolumeScale
	float ___soundVolumeScale_94;
	// System.Boolean FairyGUI.GButton::changeStateOnClick
	bool ___changeStateOnClick_95;
	// FairyGUI.GObject FairyGUI.GButton::linkedPopup
	GObject_t2662234644 * ___linkedPopup_96;
	// FairyGUI.EventListener FairyGUI.GButton::<onChanged>k__BackingField
	EventListener_t2764096410 * ___U3ConChangedU3Ek__BackingField_97;
	// FairyGUI.GObject FairyGUI.GButton::_titleObject
	GObject_t2662234644 * ____titleObject_98;
	// FairyGUI.GObject FairyGUI.GButton::_iconObject
	GObject_t2662234644 * ____iconObject_99;
	// FairyGUI.Controller FairyGUI.GButton::_relatedController
	Controller_t4051336914 * ____relatedController_100;
	// FairyGUI.ButtonMode FairyGUI.GButton::_mode
	int32_t ____mode_101;
	// System.Boolean FairyGUI.GButton::_selected
	bool ____selected_102;
	// System.String FairyGUI.GButton::_title
	String_t* ____title_103;
	// System.String FairyGUI.GButton::_icon
	String_t* ____icon_104;
	// System.String FairyGUI.GButton::_selectedTitle
	String_t* ____selectedTitle_105;
	// System.String FairyGUI.GButton::_selectedIcon
	String_t* ____selectedIcon_106;
	// FairyGUI.Controller FairyGUI.GButton::_buttonController
	Controller_t4051336914 * ____buttonController_107;
	// System.Int32 FairyGUI.GButton::_downEffect
	int32_t ____downEffect_108;
	// System.Single FairyGUI.GButton::_downEffectValue
	float ____downEffectValue_109;
	// System.Boolean FairyGUI.GButton::_downScaled
	bool ____downScaled_110;
	// System.Boolean FairyGUI.GButton::_down
	bool ____down_111;
	// System.Boolean FairyGUI.GButton::_over
	bool ____over_112;

public:
	inline static int32_t get_offset_of_U3CpageOptionU3Ek__BackingField_92() { return static_cast<int32_t>(offsetof(GButton_t337864779, ___U3CpageOptionU3Ek__BackingField_92)); }
	inline PageOption_t439968204 * get_U3CpageOptionU3Ek__BackingField_92() const { return ___U3CpageOptionU3Ek__BackingField_92; }
	inline PageOption_t439968204 ** get_address_of_U3CpageOptionU3Ek__BackingField_92() { return &___U3CpageOptionU3Ek__BackingField_92; }
	inline void set_U3CpageOptionU3Ek__BackingField_92(PageOption_t439968204 * value)
	{
		___U3CpageOptionU3Ek__BackingField_92 = value;
		Il2CppCodeGenWriteBarrier(&___U3CpageOptionU3Ek__BackingField_92, value);
	}

	inline static int32_t get_offset_of_sound_93() { return static_cast<int32_t>(offsetof(GButton_t337864779, ___sound_93)); }
	inline AudioClip_t1932558630 * get_sound_93() const { return ___sound_93; }
	inline AudioClip_t1932558630 ** get_address_of_sound_93() { return &___sound_93; }
	inline void set_sound_93(AudioClip_t1932558630 * value)
	{
		___sound_93 = value;
		Il2CppCodeGenWriteBarrier(&___sound_93, value);
	}

	inline static int32_t get_offset_of_soundVolumeScale_94() { return static_cast<int32_t>(offsetof(GButton_t337864779, ___soundVolumeScale_94)); }
	inline float get_soundVolumeScale_94() const { return ___soundVolumeScale_94; }
	inline float* get_address_of_soundVolumeScale_94() { return &___soundVolumeScale_94; }
	inline void set_soundVolumeScale_94(float value)
	{
		___soundVolumeScale_94 = value;
	}

	inline static int32_t get_offset_of_changeStateOnClick_95() { return static_cast<int32_t>(offsetof(GButton_t337864779, ___changeStateOnClick_95)); }
	inline bool get_changeStateOnClick_95() const { return ___changeStateOnClick_95; }
	inline bool* get_address_of_changeStateOnClick_95() { return &___changeStateOnClick_95; }
	inline void set_changeStateOnClick_95(bool value)
	{
		___changeStateOnClick_95 = value;
	}

	inline static int32_t get_offset_of_linkedPopup_96() { return static_cast<int32_t>(offsetof(GButton_t337864779, ___linkedPopup_96)); }
	inline GObject_t2662234644 * get_linkedPopup_96() const { return ___linkedPopup_96; }
	inline GObject_t2662234644 ** get_address_of_linkedPopup_96() { return &___linkedPopup_96; }
	inline void set_linkedPopup_96(GObject_t2662234644 * value)
	{
		___linkedPopup_96 = value;
		Il2CppCodeGenWriteBarrier(&___linkedPopup_96, value);
	}

	inline static int32_t get_offset_of_U3ConChangedU3Ek__BackingField_97() { return static_cast<int32_t>(offsetof(GButton_t337864779, ___U3ConChangedU3Ek__BackingField_97)); }
	inline EventListener_t2764096410 * get_U3ConChangedU3Ek__BackingField_97() const { return ___U3ConChangedU3Ek__BackingField_97; }
	inline EventListener_t2764096410 ** get_address_of_U3ConChangedU3Ek__BackingField_97() { return &___U3ConChangedU3Ek__BackingField_97; }
	inline void set_U3ConChangedU3Ek__BackingField_97(EventListener_t2764096410 * value)
	{
		___U3ConChangedU3Ek__BackingField_97 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConChangedU3Ek__BackingField_97, value);
	}

	inline static int32_t get_offset_of__titleObject_98() { return static_cast<int32_t>(offsetof(GButton_t337864779, ____titleObject_98)); }
	inline GObject_t2662234644 * get__titleObject_98() const { return ____titleObject_98; }
	inline GObject_t2662234644 ** get_address_of__titleObject_98() { return &____titleObject_98; }
	inline void set__titleObject_98(GObject_t2662234644 * value)
	{
		____titleObject_98 = value;
		Il2CppCodeGenWriteBarrier(&____titleObject_98, value);
	}

	inline static int32_t get_offset_of__iconObject_99() { return static_cast<int32_t>(offsetof(GButton_t337864779, ____iconObject_99)); }
	inline GObject_t2662234644 * get__iconObject_99() const { return ____iconObject_99; }
	inline GObject_t2662234644 ** get_address_of__iconObject_99() { return &____iconObject_99; }
	inline void set__iconObject_99(GObject_t2662234644 * value)
	{
		____iconObject_99 = value;
		Il2CppCodeGenWriteBarrier(&____iconObject_99, value);
	}

	inline static int32_t get_offset_of__relatedController_100() { return static_cast<int32_t>(offsetof(GButton_t337864779, ____relatedController_100)); }
	inline Controller_t4051336914 * get__relatedController_100() const { return ____relatedController_100; }
	inline Controller_t4051336914 ** get_address_of__relatedController_100() { return &____relatedController_100; }
	inline void set__relatedController_100(Controller_t4051336914 * value)
	{
		____relatedController_100 = value;
		Il2CppCodeGenWriteBarrier(&____relatedController_100, value);
	}

	inline static int32_t get_offset_of__mode_101() { return static_cast<int32_t>(offsetof(GButton_t337864779, ____mode_101)); }
	inline int32_t get__mode_101() const { return ____mode_101; }
	inline int32_t* get_address_of__mode_101() { return &____mode_101; }
	inline void set__mode_101(int32_t value)
	{
		____mode_101 = value;
	}

	inline static int32_t get_offset_of__selected_102() { return static_cast<int32_t>(offsetof(GButton_t337864779, ____selected_102)); }
	inline bool get__selected_102() const { return ____selected_102; }
	inline bool* get_address_of__selected_102() { return &____selected_102; }
	inline void set__selected_102(bool value)
	{
		____selected_102 = value;
	}

	inline static int32_t get_offset_of__title_103() { return static_cast<int32_t>(offsetof(GButton_t337864779, ____title_103)); }
	inline String_t* get__title_103() const { return ____title_103; }
	inline String_t** get_address_of__title_103() { return &____title_103; }
	inline void set__title_103(String_t* value)
	{
		____title_103 = value;
		Il2CppCodeGenWriteBarrier(&____title_103, value);
	}

	inline static int32_t get_offset_of__icon_104() { return static_cast<int32_t>(offsetof(GButton_t337864779, ____icon_104)); }
	inline String_t* get__icon_104() const { return ____icon_104; }
	inline String_t** get_address_of__icon_104() { return &____icon_104; }
	inline void set__icon_104(String_t* value)
	{
		____icon_104 = value;
		Il2CppCodeGenWriteBarrier(&____icon_104, value);
	}

	inline static int32_t get_offset_of__selectedTitle_105() { return static_cast<int32_t>(offsetof(GButton_t337864779, ____selectedTitle_105)); }
	inline String_t* get__selectedTitle_105() const { return ____selectedTitle_105; }
	inline String_t** get_address_of__selectedTitle_105() { return &____selectedTitle_105; }
	inline void set__selectedTitle_105(String_t* value)
	{
		____selectedTitle_105 = value;
		Il2CppCodeGenWriteBarrier(&____selectedTitle_105, value);
	}

	inline static int32_t get_offset_of__selectedIcon_106() { return static_cast<int32_t>(offsetof(GButton_t337864779, ____selectedIcon_106)); }
	inline String_t* get__selectedIcon_106() const { return ____selectedIcon_106; }
	inline String_t** get_address_of__selectedIcon_106() { return &____selectedIcon_106; }
	inline void set__selectedIcon_106(String_t* value)
	{
		____selectedIcon_106 = value;
		Il2CppCodeGenWriteBarrier(&____selectedIcon_106, value);
	}

	inline static int32_t get_offset_of__buttonController_107() { return static_cast<int32_t>(offsetof(GButton_t337864779, ____buttonController_107)); }
	inline Controller_t4051336914 * get__buttonController_107() const { return ____buttonController_107; }
	inline Controller_t4051336914 ** get_address_of__buttonController_107() { return &____buttonController_107; }
	inline void set__buttonController_107(Controller_t4051336914 * value)
	{
		____buttonController_107 = value;
		Il2CppCodeGenWriteBarrier(&____buttonController_107, value);
	}

	inline static int32_t get_offset_of__downEffect_108() { return static_cast<int32_t>(offsetof(GButton_t337864779, ____downEffect_108)); }
	inline int32_t get__downEffect_108() const { return ____downEffect_108; }
	inline int32_t* get_address_of__downEffect_108() { return &____downEffect_108; }
	inline void set__downEffect_108(int32_t value)
	{
		____downEffect_108 = value;
	}

	inline static int32_t get_offset_of__downEffectValue_109() { return static_cast<int32_t>(offsetof(GButton_t337864779, ____downEffectValue_109)); }
	inline float get__downEffectValue_109() const { return ____downEffectValue_109; }
	inline float* get_address_of__downEffectValue_109() { return &____downEffectValue_109; }
	inline void set__downEffectValue_109(float value)
	{
		____downEffectValue_109 = value;
	}

	inline static int32_t get_offset_of__downScaled_110() { return static_cast<int32_t>(offsetof(GButton_t337864779, ____downScaled_110)); }
	inline bool get__downScaled_110() const { return ____downScaled_110; }
	inline bool* get_address_of__downScaled_110() { return &____downScaled_110; }
	inline void set__downScaled_110(bool value)
	{
		____downScaled_110 = value;
	}

	inline static int32_t get_offset_of__down_111() { return static_cast<int32_t>(offsetof(GButton_t337864779, ____down_111)); }
	inline bool get__down_111() const { return ____down_111; }
	inline bool* get_address_of__down_111() { return &____down_111; }
	inline void set__down_111(bool value)
	{
		____down_111 = value;
	}

	inline static int32_t get_offset_of__over_112() { return static_cast<int32_t>(offsetof(GButton_t337864779, ____over_112)); }
	inline bool get__over_112() const { return ____over_112; }
	inline bool* get_address_of__over_112() { return &____over_112; }
	inline void set__over_112(bool value)
	{
		____over_112 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

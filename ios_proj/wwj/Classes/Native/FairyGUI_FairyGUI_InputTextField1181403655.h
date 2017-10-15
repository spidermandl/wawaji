#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "FairyGUI_FairyGUI_RichTextField4204199729.h"

// FairyGUI.EventListener
struct EventListener_t2764096410;
// FairyGUI.InputTextField/CopyHandler
struct CopyHandler_t669138325;
// FairyGUI.InputTextField/PasteHandler
struct PasteHandler_t3508649207;
// System.String
struct String_t;
// System.Text.RegularExpressions.Regex
struct Regex_t1803876613;
// FairyGUI.EventCallback1
struct EventCallback1_t422277840;
// FairyGUI.Shape
struct Shape_t1180768453;
// FairyGUI.SelectionShape
struct SelectionShape_t1383229973;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.InputTextField
struct  InputTextField_t1181403655  : public RichTextField_t4204199729
{
public:
	// FairyGUI.EventListener FairyGUI.InputTextField::<onFocusIn>k__BackingField
	EventListener_t2764096410 * ___U3ConFocusInU3Ek__BackingField_74;
	// FairyGUI.EventListener FairyGUI.InputTextField::<onFocusOut>k__BackingField
	EventListener_t2764096410 * ___U3ConFocusOutU3Ek__BackingField_75;
	// FairyGUI.EventListener FairyGUI.InputTextField::<onChanged>k__BackingField
	EventListener_t2764096410 * ___U3ConChangedU3Ek__BackingField_76;
	// System.Int32 FairyGUI.InputTextField::<maxLength>k__BackingField
	int32_t ___U3CmaxLengthU3Ek__BackingField_77;
	// System.Boolean FairyGUI.InputTextField::<keyboardInput>k__BackingField
	bool ___U3CkeyboardInputU3Ek__BackingField_78;
	// System.Int32 FairyGUI.InputTextField::<keyboardType>k__BackingField
	int32_t ___U3CkeyboardTypeU3Ek__BackingField_79;
	// System.Boolean FairyGUI.InputTextField::<editable>k__BackingField
	bool ___U3CeditableU3Ek__BackingField_80;
	// System.Boolean FairyGUI.InputTextField::<hideInput>k__BackingField
	bool ___U3ChideInputU3Ek__BackingField_81;
	// System.String FairyGUI.InputTextField::_restrict
	String_t* ____restrict_84;
	// System.Text.RegularExpressions.Regex FairyGUI.InputTextField::_restrictPattern
	Regex_t1803876613 * ____restrictPattern_85;
	// System.Boolean FairyGUI.InputTextField::_displayAsPassword
	bool ____displayAsPassword_86;
	// System.String FairyGUI.InputTextField::_promptText
	String_t* ____promptText_87;
	// System.String FairyGUI.InputTextField::_decodedPromptText
	String_t* ____decodedPromptText_88;
	// System.Boolean FairyGUI.InputTextField::_editing
	bool ____editing_89;
	// System.Int32 FairyGUI.InputTextField::_caretPosition
	int32_t ____caretPosition_90;
	// System.Int32 FairyGUI.InputTextField::_selectionStart
	int32_t ____selectionStart_91;
	// FairyGUI.EventCallback1 FairyGUI.InputTextField::_touchMoveDelegate
	EventCallback1_t422277840 * ____touchMoveDelegate_92;

public:
	inline static int32_t get_offset_of_U3ConFocusInU3Ek__BackingField_74() { return static_cast<int32_t>(offsetof(InputTextField_t1181403655, ___U3ConFocusInU3Ek__BackingField_74)); }
	inline EventListener_t2764096410 * get_U3ConFocusInU3Ek__BackingField_74() const { return ___U3ConFocusInU3Ek__BackingField_74; }
	inline EventListener_t2764096410 ** get_address_of_U3ConFocusInU3Ek__BackingField_74() { return &___U3ConFocusInU3Ek__BackingField_74; }
	inline void set_U3ConFocusInU3Ek__BackingField_74(EventListener_t2764096410 * value)
	{
		___U3ConFocusInU3Ek__BackingField_74 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConFocusInU3Ek__BackingField_74, value);
	}

	inline static int32_t get_offset_of_U3ConFocusOutU3Ek__BackingField_75() { return static_cast<int32_t>(offsetof(InputTextField_t1181403655, ___U3ConFocusOutU3Ek__BackingField_75)); }
	inline EventListener_t2764096410 * get_U3ConFocusOutU3Ek__BackingField_75() const { return ___U3ConFocusOutU3Ek__BackingField_75; }
	inline EventListener_t2764096410 ** get_address_of_U3ConFocusOutU3Ek__BackingField_75() { return &___U3ConFocusOutU3Ek__BackingField_75; }
	inline void set_U3ConFocusOutU3Ek__BackingField_75(EventListener_t2764096410 * value)
	{
		___U3ConFocusOutU3Ek__BackingField_75 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConFocusOutU3Ek__BackingField_75, value);
	}

	inline static int32_t get_offset_of_U3ConChangedU3Ek__BackingField_76() { return static_cast<int32_t>(offsetof(InputTextField_t1181403655, ___U3ConChangedU3Ek__BackingField_76)); }
	inline EventListener_t2764096410 * get_U3ConChangedU3Ek__BackingField_76() const { return ___U3ConChangedU3Ek__BackingField_76; }
	inline EventListener_t2764096410 ** get_address_of_U3ConChangedU3Ek__BackingField_76() { return &___U3ConChangedU3Ek__BackingField_76; }
	inline void set_U3ConChangedU3Ek__BackingField_76(EventListener_t2764096410 * value)
	{
		___U3ConChangedU3Ek__BackingField_76 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConChangedU3Ek__BackingField_76, value);
	}

	inline static int32_t get_offset_of_U3CmaxLengthU3Ek__BackingField_77() { return static_cast<int32_t>(offsetof(InputTextField_t1181403655, ___U3CmaxLengthU3Ek__BackingField_77)); }
	inline int32_t get_U3CmaxLengthU3Ek__BackingField_77() const { return ___U3CmaxLengthU3Ek__BackingField_77; }
	inline int32_t* get_address_of_U3CmaxLengthU3Ek__BackingField_77() { return &___U3CmaxLengthU3Ek__BackingField_77; }
	inline void set_U3CmaxLengthU3Ek__BackingField_77(int32_t value)
	{
		___U3CmaxLengthU3Ek__BackingField_77 = value;
	}

	inline static int32_t get_offset_of_U3CkeyboardInputU3Ek__BackingField_78() { return static_cast<int32_t>(offsetof(InputTextField_t1181403655, ___U3CkeyboardInputU3Ek__BackingField_78)); }
	inline bool get_U3CkeyboardInputU3Ek__BackingField_78() const { return ___U3CkeyboardInputU3Ek__BackingField_78; }
	inline bool* get_address_of_U3CkeyboardInputU3Ek__BackingField_78() { return &___U3CkeyboardInputU3Ek__BackingField_78; }
	inline void set_U3CkeyboardInputU3Ek__BackingField_78(bool value)
	{
		___U3CkeyboardInputU3Ek__BackingField_78 = value;
	}

	inline static int32_t get_offset_of_U3CkeyboardTypeU3Ek__BackingField_79() { return static_cast<int32_t>(offsetof(InputTextField_t1181403655, ___U3CkeyboardTypeU3Ek__BackingField_79)); }
	inline int32_t get_U3CkeyboardTypeU3Ek__BackingField_79() const { return ___U3CkeyboardTypeU3Ek__BackingField_79; }
	inline int32_t* get_address_of_U3CkeyboardTypeU3Ek__BackingField_79() { return &___U3CkeyboardTypeU3Ek__BackingField_79; }
	inline void set_U3CkeyboardTypeU3Ek__BackingField_79(int32_t value)
	{
		___U3CkeyboardTypeU3Ek__BackingField_79 = value;
	}

	inline static int32_t get_offset_of_U3CeditableU3Ek__BackingField_80() { return static_cast<int32_t>(offsetof(InputTextField_t1181403655, ___U3CeditableU3Ek__BackingField_80)); }
	inline bool get_U3CeditableU3Ek__BackingField_80() const { return ___U3CeditableU3Ek__BackingField_80; }
	inline bool* get_address_of_U3CeditableU3Ek__BackingField_80() { return &___U3CeditableU3Ek__BackingField_80; }
	inline void set_U3CeditableU3Ek__BackingField_80(bool value)
	{
		___U3CeditableU3Ek__BackingField_80 = value;
	}

	inline static int32_t get_offset_of_U3ChideInputU3Ek__BackingField_81() { return static_cast<int32_t>(offsetof(InputTextField_t1181403655, ___U3ChideInputU3Ek__BackingField_81)); }
	inline bool get_U3ChideInputU3Ek__BackingField_81() const { return ___U3ChideInputU3Ek__BackingField_81; }
	inline bool* get_address_of_U3ChideInputU3Ek__BackingField_81() { return &___U3ChideInputU3Ek__BackingField_81; }
	inline void set_U3ChideInputU3Ek__BackingField_81(bool value)
	{
		___U3ChideInputU3Ek__BackingField_81 = value;
	}

	inline static int32_t get_offset_of__restrict_84() { return static_cast<int32_t>(offsetof(InputTextField_t1181403655, ____restrict_84)); }
	inline String_t* get__restrict_84() const { return ____restrict_84; }
	inline String_t** get_address_of__restrict_84() { return &____restrict_84; }
	inline void set__restrict_84(String_t* value)
	{
		____restrict_84 = value;
		Il2CppCodeGenWriteBarrier(&____restrict_84, value);
	}

	inline static int32_t get_offset_of__restrictPattern_85() { return static_cast<int32_t>(offsetof(InputTextField_t1181403655, ____restrictPattern_85)); }
	inline Regex_t1803876613 * get__restrictPattern_85() const { return ____restrictPattern_85; }
	inline Regex_t1803876613 ** get_address_of__restrictPattern_85() { return &____restrictPattern_85; }
	inline void set__restrictPattern_85(Regex_t1803876613 * value)
	{
		____restrictPattern_85 = value;
		Il2CppCodeGenWriteBarrier(&____restrictPattern_85, value);
	}

	inline static int32_t get_offset_of__displayAsPassword_86() { return static_cast<int32_t>(offsetof(InputTextField_t1181403655, ____displayAsPassword_86)); }
	inline bool get__displayAsPassword_86() const { return ____displayAsPassword_86; }
	inline bool* get_address_of__displayAsPassword_86() { return &____displayAsPassword_86; }
	inline void set__displayAsPassword_86(bool value)
	{
		____displayAsPassword_86 = value;
	}

	inline static int32_t get_offset_of__promptText_87() { return static_cast<int32_t>(offsetof(InputTextField_t1181403655, ____promptText_87)); }
	inline String_t* get__promptText_87() const { return ____promptText_87; }
	inline String_t** get_address_of__promptText_87() { return &____promptText_87; }
	inline void set__promptText_87(String_t* value)
	{
		____promptText_87 = value;
		Il2CppCodeGenWriteBarrier(&____promptText_87, value);
	}

	inline static int32_t get_offset_of__decodedPromptText_88() { return static_cast<int32_t>(offsetof(InputTextField_t1181403655, ____decodedPromptText_88)); }
	inline String_t* get__decodedPromptText_88() const { return ____decodedPromptText_88; }
	inline String_t** get_address_of__decodedPromptText_88() { return &____decodedPromptText_88; }
	inline void set__decodedPromptText_88(String_t* value)
	{
		____decodedPromptText_88 = value;
		Il2CppCodeGenWriteBarrier(&____decodedPromptText_88, value);
	}

	inline static int32_t get_offset_of__editing_89() { return static_cast<int32_t>(offsetof(InputTextField_t1181403655, ____editing_89)); }
	inline bool get__editing_89() const { return ____editing_89; }
	inline bool* get_address_of__editing_89() { return &____editing_89; }
	inline void set__editing_89(bool value)
	{
		____editing_89 = value;
	}

	inline static int32_t get_offset_of__caretPosition_90() { return static_cast<int32_t>(offsetof(InputTextField_t1181403655, ____caretPosition_90)); }
	inline int32_t get__caretPosition_90() const { return ____caretPosition_90; }
	inline int32_t* get_address_of__caretPosition_90() { return &____caretPosition_90; }
	inline void set__caretPosition_90(int32_t value)
	{
		____caretPosition_90 = value;
	}

	inline static int32_t get_offset_of__selectionStart_91() { return static_cast<int32_t>(offsetof(InputTextField_t1181403655, ____selectionStart_91)); }
	inline int32_t get__selectionStart_91() const { return ____selectionStart_91; }
	inline int32_t* get_address_of__selectionStart_91() { return &____selectionStart_91; }
	inline void set__selectionStart_91(int32_t value)
	{
		____selectionStart_91 = value;
	}

	inline static int32_t get_offset_of__touchMoveDelegate_92() { return static_cast<int32_t>(offsetof(InputTextField_t1181403655, ____touchMoveDelegate_92)); }
	inline EventCallback1_t422277840 * get__touchMoveDelegate_92() const { return ____touchMoveDelegate_92; }
	inline EventCallback1_t422277840 ** get_address_of__touchMoveDelegate_92() { return &____touchMoveDelegate_92; }
	inline void set__touchMoveDelegate_92(EventCallback1_t422277840 * value)
	{
		____touchMoveDelegate_92 = value;
		Il2CppCodeGenWriteBarrier(&____touchMoveDelegate_92, value);
	}
};

struct InputTextField_t1181403655_StaticFields
{
public:
	// FairyGUI.InputTextField/CopyHandler FairyGUI.InputTextField::onCopy
	CopyHandler_t669138325 * ___onCopy_82;
	// FairyGUI.InputTextField/PasteHandler FairyGUI.InputTextField::onPaste
	PasteHandler_t3508649207 * ___onPaste_83;
	// FairyGUI.Shape FairyGUI.InputTextField::_caret
	Shape_t1180768453 * ____caret_93;
	// FairyGUI.SelectionShape FairyGUI.InputTextField::_selectionShape
	SelectionShape_t1383229973 * ____selectionShape_94;
	// System.Single FairyGUI.InputTextField::_nextBlink
	float ____nextBlink_95;

public:
	inline static int32_t get_offset_of_onCopy_82() { return static_cast<int32_t>(offsetof(InputTextField_t1181403655_StaticFields, ___onCopy_82)); }
	inline CopyHandler_t669138325 * get_onCopy_82() const { return ___onCopy_82; }
	inline CopyHandler_t669138325 ** get_address_of_onCopy_82() { return &___onCopy_82; }
	inline void set_onCopy_82(CopyHandler_t669138325 * value)
	{
		___onCopy_82 = value;
		Il2CppCodeGenWriteBarrier(&___onCopy_82, value);
	}

	inline static int32_t get_offset_of_onPaste_83() { return static_cast<int32_t>(offsetof(InputTextField_t1181403655_StaticFields, ___onPaste_83)); }
	inline PasteHandler_t3508649207 * get_onPaste_83() const { return ___onPaste_83; }
	inline PasteHandler_t3508649207 ** get_address_of_onPaste_83() { return &___onPaste_83; }
	inline void set_onPaste_83(PasteHandler_t3508649207 * value)
	{
		___onPaste_83 = value;
		Il2CppCodeGenWriteBarrier(&___onPaste_83, value);
	}

	inline static int32_t get_offset_of__caret_93() { return static_cast<int32_t>(offsetof(InputTextField_t1181403655_StaticFields, ____caret_93)); }
	inline Shape_t1180768453 * get__caret_93() const { return ____caret_93; }
	inline Shape_t1180768453 ** get_address_of__caret_93() { return &____caret_93; }
	inline void set__caret_93(Shape_t1180768453 * value)
	{
		____caret_93 = value;
		Il2CppCodeGenWriteBarrier(&____caret_93, value);
	}

	inline static int32_t get_offset_of__selectionShape_94() { return static_cast<int32_t>(offsetof(InputTextField_t1181403655_StaticFields, ____selectionShape_94)); }
	inline SelectionShape_t1383229973 * get__selectionShape_94() const { return ____selectionShape_94; }
	inline SelectionShape_t1383229973 ** get_address_of__selectionShape_94() { return &____selectionShape_94; }
	inline void set__selectionShape_94(SelectionShape_t1383229973 * value)
	{
		____selectionShape_94 = value;
		Il2CppCodeGenWriteBarrier(&____selectionShape_94, value);
	}

	inline static int32_t get_offset_of__nextBlink_95() { return static_cast<int32_t>(offsetof(InputTextField_t1181403655_StaticFields, ____nextBlink_95)); }
	inline float get__nextBlink_95() const { return ____nextBlink_95; }
	inline float* get_address_of__nextBlink_95() { return &____nextBlink_95; }
	inline void set__nextBlink_95(float value)
	{
		____nextBlink_95 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

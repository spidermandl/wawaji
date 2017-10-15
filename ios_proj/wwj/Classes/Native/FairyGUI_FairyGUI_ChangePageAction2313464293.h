#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "FairyGUI_FairyGUI_ControllerAction280735284.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.ChangePageAction
struct  ChangePageAction_t2313464293  : public ControllerAction_t280735284
{
public:
	// System.String FairyGUI.ChangePageAction::objectId
	String_t* ___objectId_2;
	// System.String FairyGUI.ChangePageAction::controllerName
	String_t* ___controllerName_3;
	// System.String FairyGUI.ChangePageAction::targetPage
	String_t* ___targetPage_4;

public:
	inline static int32_t get_offset_of_objectId_2() { return static_cast<int32_t>(offsetof(ChangePageAction_t2313464293, ___objectId_2)); }
	inline String_t* get_objectId_2() const { return ___objectId_2; }
	inline String_t** get_address_of_objectId_2() { return &___objectId_2; }
	inline void set_objectId_2(String_t* value)
	{
		___objectId_2 = value;
		Il2CppCodeGenWriteBarrier(&___objectId_2, value);
	}

	inline static int32_t get_offset_of_controllerName_3() { return static_cast<int32_t>(offsetof(ChangePageAction_t2313464293, ___controllerName_3)); }
	inline String_t* get_controllerName_3() const { return ___controllerName_3; }
	inline String_t** get_address_of_controllerName_3() { return &___controllerName_3; }
	inline void set_controllerName_3(String_t* value)
	{
		___controllerName_3 = value;
		Il2CppCodeGenWriteBarrier(&___controllerName_3, value);
	}

	inline static int32_t get_offset_of_targetPage_4() { return static_cast<int32_t>(offsetof(ChangePageAction_t2313464293, ___targetPage_4)); }
	inline String_t* get_targetPage_4() const { return ___targetPage_4; }
	inline String_t** get_address_of_targetPage_4() { return &___targetPage_4; }
	inline void set_targetPage_4(String_t* value)
	{
		___targetPage_4 = value;
		Il2CppCodeGenWriteBarrier(&___targetPage_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

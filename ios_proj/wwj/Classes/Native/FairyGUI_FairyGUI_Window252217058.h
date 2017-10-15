#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "FairyGUI_FairyGUI_GComponent4106136290.h"

// FairyGUI.GComponent
struct GComponent_t4106136290;
// FairyGUI.GObject
struct GObject_t2662234644;
// System.Collections.Generic.List`1<FairyGUI.IUISource>
struct List_1_t1189561838;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.Window
struct  Window_t252217058  : public GComponent_t4106136290
{
public:
	// System.Boolean FairyGUI.Window::<bringToFontOnClick>k__BackingField
	bool ___U3CbringToFontOnClickU3Ek__BackingField_92;
	// FairyGUI.GComponent FairyGUI.Window::_frame
	GComponent_t4106136290 * ____frame_93;
	// FairyGUI.GComponent FairyGUI.Window::_contentPane
	GComponent_t4106136290 * ____contentPane_94;
	// FairyGUI.GObject FairyGUI.Window::_modalWaitPane
	GObject_t2662234644 * ____modalWaitPane_95;
	// FairyGUI.GObject FairyGUI.Window::_closeButton
	GObject_t2662234644 * ____closeButton_96;
	// FairyGUI.GObject FairyGUI.Window::_dragArea
	GObject_t2662234644 * ____dragArea_97;
	// FairyGUI.GObject FairyGUI.Window::_contentArea
	GObject_t2662234644 * ____contentArea_98;
	// System.Boolean FairyGUI.Window::_modal
	bool ____modal_99;
	// System.Collections.Generic.List`1<FairyGUI.IUISource> FairyGUI.Window::_uiSources
	List_1_t1189561838 * ____uiSources_100;
	// System.Boolean FairyGUI.Window::_inited
	bool ____inited_101;
	// System.Boolean FairyGUI.Window::_loading
	bool ____loading_102;
	// System.Int32 FairyGUI.Window::_requestingCmd
	int32_t ____requestingCmd_103;

public:
	inline static int32_t get_offset_of_U3CbringToFontOnClickU3Ek__BackingField_92() { return static_cast<int32_t>(offsetof(Window_t252217058, ___U3CbringToFontOnClickU3Ek__BackingField_92)); }
	inline bool get_U3CbringToFontOnClickU3Ek__BackingField_92() const { return ___U3CbringToFontOnClickU3Ek__BackingField_92; }
	inline bool* get_address_of_U3CbringToFontOnClickU3Ek__BackingField_92() { return &___U3CbringToFontOnClickU3Ek__BackingField_92; }
	inline void set_U3CbringToFontOnClickU3Ek__BackingField_92(bool value)
	{
		___U3CbringToFontOnClickU3Ek__BackingField_92 = value;
	}

	inline static int32_t get_offset_of__frame_93() { return static_cast<int32_t>(offsetof(Window_t252217058, ____frame_93)); }
	inline GComponent_t4106136290 * get__frame_93() const { return ____frame_93; }
	inline GComponent_t4106136290 ** get_address_of__frame_93() { return &____frame_93; }
	inline void set__frame_93(GComponent_t4106136290 * value)
	{
		____frame_93 = value;
		Il2CppCodeGenWriteBarrier(&____frame_93, value);
	}

	inline static int32_t get_offset_of__contentPane_94() { return static_cast<int32_t>(offsetof(Window_t252217058, ____contentPane_94)); }
	inline GComponent_t4106136290 * get__contentPane_94() const { return ____contentPane_94; }
	inline GComponent_t4106136290 ** get_address_of__contentPane_94() { return &____contentPane_94; }
	inline void set__contentPane_94(GComponent_t4106136290 * value)
	{
		____contentPane_94 = value;
		Il2CppCodeGenWriteBarrier(&____contentPane_94, value);
	}

	inline static int32_t get_offset_of__modalWaitPane_95() { return static_cast<int32_t>(offsetof(Window_t252217058, ____modalWaitPane_95)); }
	inline GObject_t2662234644 * get__modalWaitPane_95() const { return ____modalWaitPane_95; }
	inline GObject_t2662234644 ** get_address_of__modalWaitPane_95() { return &____modalWaitPane_95; }
	inline void set__modalWaitPane_95(GObject_t2662234644 * value)
	{
		____modalWaitPane_95 = value;
		Il2CppCodeGenWriteBarrier(&____modalWaitPane_95, value);
	}

	inline static int32_t get_offset_of__closeButton_96() { return static_cast<int32_t>(offsetof(Window_t252217058, ____closeButton_96)); }
	inline GObject_t2662234644 * get__closeButton_96() const { return ____closeButton_96; }
	inline GObject_t2662234644 ** get_address_of__closeButton_96() { return &____closeButton_96; }
	inline void set__closeButton_96(GObject_t2662234644 * value)
	{
		____closeButton_96 = value;
		Il2CppCodeGenWriteBarrier(&____closeButton_96, value);
	}

	inline static int32_t get_offset_of__dragArea_97() { return static_cast<int32_t>(offsetof(Window_t252217058, ____dragArea_97)); }
	inline GObject_t2662234644 * get__dragArea_97() const { return ____dragArea_97; }
	inline GObject_t2662234644 ** get_address_of__dragArea_97() { return &____dragArea_97; }
	inline void set__dragArea_97(GObject_t2662234644 * value)
	{
		____dragArea_97 = value;
		Il2CppCodeGenWriteBarrier(&____dragArea_97, value);
	}

	inline static int32_t get_offset_of__contentArea_98() { return static_cast<int32_t>(offsetof(Window_t252217058, ____contentArea_98)); }
	inline GObject_t2662234644 * get__contentArea_98() const { return ____contentArea_98; }
	inline GObject_t2662234644 ** get_address_of__contentArea_98() { return &____contentArea_98; }
	inline void set__contentArea_98(GObject_t2662234644 * value)
	{
		____contentArea_98 = value;
		Il2CppCodeGenWriteBarrier(&____contentArea_98, value);
	}

	inline static int32_t get_offset_of__modal_99() { return static_cast<int32_t>(offsetof(Window_t252217058, ____modal_99)); }
	inline bool get__modal_99() const { return ____modal_99; }
	inline bool* get_address_of__modal_99() { return &____modal_99; }
	inline void set__modal_99(bool value)
	{
		____modal_99 = value;
	}

	inline static int32_t get_offset_of__uiSources_100() { return static_cast<int32_t>(offsetof(Window_t252217058, ____uiSources_100)); }
	inline List_1_t1189561838 * get__uiSources_100() const { return ____uiSources_100; }
	inline List_1_t1189561838 ** get_address_of__uiSources_100() { return &____uiSources_100; }
	inline void set__uiSources_100(List_1_t1189561838 * value)
	{
		____uiSources_100 = value;
		Il2CppCodeGenWriteBarrier(&____uiSources_100, value);
	}

	inline static int32_t get_offset_of__inited_101() { return static_cast<int32_t>(offsetof(Window_t252217058, ____inited_101)); }
	inline bool get__inited_101() const { return ____inited_101; }
	inline bool* get_address_of__inited_101() { return &____inited_101; }
	inline void set__inited_101(bool value)
	{
		____inited_101 = value;
	}

	inline static int32_t get_offset_of__loading_102() { return static_cast<int32_t>(offsetof(Window_t252217058, ____loading_102)); }
	inline bool get__loading_102() const { return ____loading_102; }
	inline bool* get_address_of__loading_102() { return &____loading_102; }
	inline void set__loading_102(bool value)
	{
		____loading_102 = value;
	}

	inline static int32_t get_offset_of__requestingCmd_103() { return static_cast<int32_t>(offsetof(Window_t252217058, ____requestingCmd_103)); }
	inline int32_t get__requestingCmd_103() const { return ____requestingCmd_103; }
	inline int32_t* get_address_of__requestingCmd_103() { return &____requestingCmd_103; }
	inline void set__requestingCmd_103(int32_t value)
	{
		____requestingCmd_103 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

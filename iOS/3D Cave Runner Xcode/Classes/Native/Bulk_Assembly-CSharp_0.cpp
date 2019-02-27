#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// PauseMenu
struct PauseMenu_t3916167947;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.GUIContent
struct GUIContent_t3050628031;
// System.String
struct String_t;
// UnityEngine.GUIStyle
struct GUIStyle_t3956901511;
// UnityEngine.GUIStyleState
struct GUIStyleState_t1397964415;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.RectOffset
struct RectOffset_t1369453676;
// UnityEngine.Font
struct Font_t1956802104;
// SkillzUnityVersion
struct SkillzUnityVersion_t461133871;
// UnityEngine.Texture
struct Texture_t3661962703;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;
// System.Action`1<UnityEngine.Font>
struct Action_1_t2129269699;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_t2467502454;

extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* GUIContent_t3050628031_il2cpp_TypeInfo_var;
extern RuntimeClass* GUI_t1624858472_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral4290507994;
extern String_t* _stringLiteral3964750823;
extern String_t* _stringLiteral2743466127;
extern const uint32_t PauseMenu_OnGUI_m2253402119_MetadataUsageId;
extern RuntimeClass* GUIStyle_t3956901511_il2cpp_TypeInfo_var;
extern const uint32_t PauseMenu_InitStyle_m399915634_MetadataUsageId;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1221810433;
extern const uint32_t PauseMenu_UpdateMusicVol_m3876094862_MetadataUsageId;
extern String_t* _stringLiteral1726877112;
extern const uint32_t PauseMenu_UpdateSFXVol_m3744279240_MetadataUsageId;
extern String_t* _stringLiteral232286738;
extern const uint32_t SkillzUnityVersion_VersionString_m4163719883_MetadataUsageId;
struct GUIStyle_t3956901511_marshaled_pinvoke;
struct GUIStyle_t3956901511_marshaled_com;
struct GUIStyleState_t1397964415_marshaled_pinvoke;
struct GUIStyleState_t1397964415_marshaled_com;
struct RectOffset_t1369453676_marshaled_com;



#ifndef U3CMODULEU3E_T692745544_H
#define U3CMODULEU3E_T692745544_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745544 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745544_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef GUICONTENT_T3050628031_H
#define GUICONTENT_T3050628031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIContent
struct  GUIContent_t3050628031  : public RuntimeObject
{
public:
	// System.String UnityEngine.GUIContent::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Texture UnityEngine.GUIContent::m_Image
	Texture_t3661962703 * ___m_Image_1;
	// System.String UnityEngine.GUIContent::m_Tooltip
	String_t* ___m_Tooltip_2;

public:
	inline static int32_t get_offset_of_m_Text_0() { return static_cast<int32_t>(offsetof(GUIContent_t3050628031, ___m_Text_0)); }
	inline String_t* get_m_Text_0() const { return ___m_Text_0; }
	inline String_t** get_address_of_m_Text_0() { return &___m_Text_0; }
	inline void set_m_Text_0(String_t* value)
	{
		___m_Text_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_0), value);
	}

	inline static int32_t get_offset_of_m_Image_1() { return static_cast<int32_t>(offsetof(GUIContent_t3050628031, ___m_Image_1)); }
	inline Texture_t3661962703 * get_m_Image_1() const { return ___m_Image_1; }
	inline Texture_t3661962703 ** get_address_of_m_Image_1() { return &___m_Image_1; }
	inline void set_m_Image_1(Texture_t3661962703 * value)
	{
		___m_Image_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Image_1), value);
	}

	inline static int32_t get_offset_of_m_Tooltip_2() { return static_cast<int32_t>(offsetof(GUIContent_t3050628031, ___m_Tooltip_2)); }
	inline String_t* get_m_Tooltip_2() const { return ___m_Tooltip_2; }
	inline String_t** get_address_of_m_Tooltip_2() { return &___m_Tooltip_2; }
	inline void set_m_Tooltip_2(String_t* value)
	{
		___m_Tooltip_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Tooltip_2), value);
	}
};

struct GUIContent_t3050628031_StaticFields
{
public:
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Text
	GUIContent_t3050628031 * ___s_Text_3;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Image
	GUIContent_t3050628031 * ___s_Image_4;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_TextImage
	GUIContent_t3050628031 * ___s_TextImage_5;
	// UnityEngine.GUIContent UnityEngine.GUIContent::none
	GUIContent_t3050628031 * ___none_6;

public:
	inline static int32_t get_offset_of_s_Text_3() { return static_cast<int32_t>(offsetof(GUIContent_t3050628031_StaticFields, ___s_Text_3)); }
	inline GUIContent_t3050628031 * get_s_Text_3() const { return ___s_Text_3; }
	inline GUIContent_t3050628031 ** get_address_of_s_Text_3() { return &___s_Text_3; }
	inline void set_s_Text_3(GUIContent_t3050628031 * value)
	{
		___s_Text_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_Text_3), value);
	}

	inline static int32_t get_offset_of_s_Image_4() { return static_cast<int32_t>(offsetof(GUIContent_t3050628031_StaticFields, ___s_Image_4)); }
	inline GUIContent_t3050628031 * get_s_Image_4() const { return ___s_Image_4; }
	inline GUIContent_t3050628031 ** get_address_of_s_Image_4() { return &___s_Image_4; }
	inline void set_s_Image_4(GUIContent_t3050628031 * value)
	{
		___s_Image_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_Image_4), value);
	}

	inline static int32_t get_offset_of_s_TextImage_5() { return static_cast<int32_t>(offsetof(GUIContent_t3050628031_StaticFields, ___s_TextImage_5)); }
	inline GUIContent_t3050628031 * get_s_TextImage_5() const { return ___s_TextImage_5; }
	inline GUIContent_t3050628031 ** get_address_of_s_TextImage_5() { return &___s_TextImage_5; }
	inline void set_s_TextImage_5(GUIContent_t3050628031 * value)
	{
		___s_TextImage_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_TextImage_5), value);
	}

	inline static int32_t get_offset_of_none_6() { return static_cast<int32_t>(offsetof(GUIContent_t3050628031_StaticFields, ___none_6)); }
	inline GUIContent_t3050628031 * get_none_6() const { return ___none_6; }
	inline GUIContent_t3050628031 ** get_address_of_none_6() { return &___none_6; }
	inline void set_none_6(GUIContent_t3050628031 * value)
	{
		___none_6 = value;
		Il2CppCodeGenWriteBarrier((&___none_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.GUIContent
struct GUIContent_t3050628031_marshaled_pinvoke
{
	char* ___m_Text_0;
	Texture_t3661962703 * ___m_Image_1;
	char* ___m_Tooltip_2;
};
// Native definition for COM marshalling of UnityEngine.GUIContent
struct GUIContent_t3050628031_marshaled_com
{
	Il2CppChar* ___m_Text_0;
	Texture_t3661962703 * ___m_Image_1;
	Il2CppChar* ___m_Tooltip_2;
};
#endif // GUICONTENT_T3050628031_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef SKILLZUNITYVERSION_T461133871_H
#define SKILLZUNITYVERSION_T461133871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SkillzUnityVersion
struct  SkillzUnityVersion_t461133871  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SKILLZUNITYVERSION_T461133871_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef RECT_T2360479859_H
#define RECT_T2360479859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2360479859 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2360479859_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef RECTOFFSET_T1369453676_H
#define RECTOFFSET_T1369453676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectOffset
struct  RectOffset_t1369453676  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_t1369453676, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_t1369453676, ___m_SourceStyle_1)); }
	inline RuntimeObject * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline RuntimeObject ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(RuntimeObject * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceStyle_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_t1369453676_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_t1369453676_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
#endif // RECTOFFSET_T1369453676_H
#ifndef GUISTYLESTATE_T1397964415_H
#define GUISTYLESTATE_T1397964415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIStyleState
struct  GUIStyleState_t1397964415  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyleState::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyle UnityEngine.GUIStyleState::m_SourceStyle
	GUIStyle_t3956901511 * ___m_SourceStyle_1;
	// UnityEngine.Texture2D UnityEngine.GUIStyleState::m_Background
	Texture2D_t3840446185 * ___m_Background_2;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyleState_t1397964415, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(GUIStyleState_t1397964415, ___m_SourceStyle_1)); }
	inline GUIStyle_t3956901511 * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline GUIStyle_t3956901511 ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(GUIStyle_t3956901511 * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceStyle_1), value);
	}

	inline static int32_t get_offset_of_m_Background_2() { return static_cast<int32_t>(offsetof(GUIStyleState_t1397964415, ___m_Background_2)); }
	inline Texture2D_t3840446185 * get_m_Background_2() const { return ___m_Background_2; }
	inline Texture2D_t3840446185 ** get_address_of_m_Background_2() { return &___m_Background_2; }
	inline void set_m_Background_2(Texture2D_t3840446185 * value)
	{
		___m_Background_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Background_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t1397964415_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t3956901511_marshaled_pinvoke* ___m_SourceStyle_1;
	Texture2D_t3840446185 * ___m_Background_2;
};
// Native definition for COM marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t1397964415_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t3956901511_marshaled_com* ___m_SourceStyle_1;
	Texture2D_t3840446185 * ___m_Background_2;
};
#endif // GUISTYLESTATE_T1397964415_H
#ifndef TEXTANCHOR_T2035777396_H
#define TEXTANCHOR_T2035777396_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextAnchor
struct  TextAnchor_t2035777396 
{
public:
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextAnchor_t2035777396, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTANCHOR_T2035777396_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef TEXTURE_T3661962703_H
#define TEXTURE_T3661962703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t3661962703  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T3661962703_H
#ifndef GUISTYLE_T3956901511_H
#define GUISTYLE_T3956901511_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIStyle
struct  GUIStyle_t3956901511  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_t1397964415 * ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_t1397964415 * ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_t1397964415 * ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_t1397964415 * ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_t1397964415 * ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_t1397964415 * ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_t1397964415 * ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_t1397964415 * ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_t1369453676 * ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_t1369453676 * ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_t1369453676 * ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_t1369453676 * ___m_Overflow_12;
	// UnityEngine.Font UnityEngine.GUIStyle::m_FontInternal
	Font_t1956802104 * ___m_FontInternal_13;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Normal_1)); }
	inline GUIStyleState_t1397964415 * get_m_Normal_1() const { return ___m_Normal_1; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(GUIStyleState_t1397964415 * value)
	{
		___m_Normal_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Normal_1), value);
	}

	inline static int32_t get_offset_of_m_Hover_2() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Hover_2)); }
	inline GUIStyleState_t1397964415 * get_m_Hover_2() const { return ___m_Hover_2; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Hover_2() { return &___m_Hover_2; }
	inline void set_m_Hover_2(GUIStyleState_t1397964415 * value)
	{
		___m_Hover_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Hover_2), value);
	}

	inline static int32_t get_offset_of_m_Active_3() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Active_3)); }
	inline GUIStyleState_t1397964415 * get_m_Active_3() const { return ___m_Active_3; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Active_3() { return &___m_Active_3; }
	inline void set_m_Active_3(GUIStyleState_t1397964415 * value)
	{
		___m_Active_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Active_3), value);
	}

	inline static int32_t get_offset_of_m_Focused_4() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Focused_4)); }
	inline GUIStyleState_t1397964415 * get_m_Focused_4() const { return ___m_Focused_4; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Focused_4() { return &___m_Focused_4; }
	inline void set_m_Focused_4(GUIStyleState_t1397964415 * value)
	{
		___m_Focused_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Focused_4), value);
	}

	inline static int32_t get_offset_of_m_OnNormal_5() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnNormal_5)); }
	inline GUIStyleState_t1397964415 * get_m_OnNormal_5() const { return ___m_OnNormal_5; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnNormal_5() { return &___m_OnNormal_5; }
	inline void set_m_OnNormal_5(GUIStyleState_t1397964415 * value)
	{
		___m_OnNormal_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnNormal_5), value);
	}

	inline static int32_t get_offset_of_m_OnHover_6() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnHover_6)); }
	inline GUIStyleState_t1397964415 * get_m_OnHover_6() const { return ___m_OnHover_6; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnHover_6() { return &___m_OnHover_6; }
	inline void set_m_OnHover_6(GUIStyleState_t1397964415 * value)
	{
		___m_OnHover_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnHover_6), value);
	}

	inline static int32_t get_offset_of_m_OnActive_7() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnActive_7)); }
	inline GUIStyleState_t1397964415 * get_m_OnActive_7() const { return ___m_OnActive_7; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnActive_7() { return &___m_OnActive_7; }
	inline void set_m_OnActive_7(GUIStyleState_t1397964415 * value)
	{
		___m_OnActive_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnActive_7), value);
	}

	inline static int32_t get_offset_of_m_OnFocused_8() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnFocused_8)); }
	inline GUIStyleState_t1397964415 * get_m_OnFocused_8() const { return ___m_OnFocused_8; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnFocused_8() { return &___m_OnFocused_8; }
	inline void set_m_OnFocused_8(GUIStyleState_t1397964415 * value)
	{
		___m_OnFocused_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnFocused_8), value);
	}

	inline static int32_t get_offset_of_m_Border_9() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Border_9)); }
	inline RectOffset_t1369453676 * get_m_Border_9() const { return ___m_Border_9; }
	inline RectOffset_t1369453676 ** get_address_of_m_Border_9() { return &___m_Border_9; }
	inline void set_m_Border_9(RectOffset_t1369453676 * value)
	{
		___m_Border_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Border_9), value);
	}

	inline static int32_t get_offset_of_m_Padding_10() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Padding_10)); }
	inline RectOffset_t1369453676 * get_m_Padding_10() const { return ___m_Padding_10; }
	inline RectOffset_t1369453676 ** get_address_of_m_Padding_10() { return &___m_Padding_10; }
	inline void set_m_Padding_10(RectOffset_t1369453676 * value)
	{
		___m_Padding_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_Padding_10), value);
	}

	inline static int32_t get_offset_of_m_Margin_11() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Margin_11)); }
	inline RectOffset_t1369453676 * get_m_Margin_11() const { return ___m_Margin_11; }
	inline RectOffset_t1369453676 ** get_address_of_m_Margin_11() { return &___m_Margin_11; }
	inline void set_m_Margin_11(RectOffset_t1369453676 * value)
	{
		___m_Margin_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Margin_11), value);
	}

	inline static int32_t get_offset_of_m_Overflow_12() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Overflow_12)); }
	inline RectOffset_t1369453676 * get_m_Overflow_12() const { return ___m_Overflow_12; }
	inline RectOffset_t1369453676 ** get_address_of_m_Overflow_12() { return &___m_Overflow_12; }
	inline void set_m_Overflow_12(RectOffset_t1369453676 * value)
	{
		___m_Overflow_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_Overflow_12), value);
	}

	inline static int32_t get_offset_of_m_FontInternal_13() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_FontInternal_13)); }
	inline Font_t1956802104 * get_m_FontInternal_13() const { return ___m_FontInternal_13; }
	inline Font_t1956802104 ** get_address_of_m_FontInternal_13() { return &___m_FontInternal_13; }
	inline void set_m_FontInternal_13(Font_t1956802104 * value)
	{
		___m_FontInternal_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontInternal_13), value);
	}
};

struct GUIStyle_t3956901511_StaticFields
{
public:
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t3956901511 * ___s_None_15;

public:
	inline static int32_t get_offset_of_showKeyboardFocus_14() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511_StaticFields, ___showKeyboardFocus_14)); }
	inline bool get_showKeyboardFocus_14() const { return ___showKeyboardFocus_14; }
	inline bool* get_address_of_showKeyboardFocus_14() { return &___showKeyboardFocus_14; }
	inline void set_showKeyboardFocus_14(bool value)
	{
		___showKeyboardFocus_14 = value;
	}

	inline static int32_t get_offset_of_s_None_15() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511_StaticFields, ___s_None_15)); }
	inline GUIStyle_t3956901511 * get_s_None_15() const { return ___s_None_15; }
	inline GUIStyle_t3956901511 ** get_address_of_s_None_15() { return &___s_None_15; }
	inline void set_s_None_15(GUIStyle_t3956901511 * value)
	{
		___s_None_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_None_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t3956901511_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Border_9;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Padding_10;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Margin_11;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Overflow_12;
	Font_t1956802104 * ___m_FontInternal_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t3956901511_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t1397964415_marshaled_com* ___m_Normal_1;
	GUIStyleState_t1397964415_marshaled_com* ___m_Hover_2;
	GUIStyleState_t1397964415_marshaled_com* ___m_Active_3;
	GUIStyleState_t1397964415_marshaled_com* ___m_Focused_4;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnHover_6;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnActive_7;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnFocused_8;
	RectOffset_t1369453676_marshaled_com* ___m_Border_9;
	RectOffset_t1369453676_marshaled_com* ___m_Padding_10;
	RectOffset_t1369453676_marshaled_com* ___m_Margin_11;
	RectOffset_t1369453676_marshaled_com* ___m_Overflow_12;
	Font_t1956802104 * ___m_FontInternal_13;
};
#endif // GUISTYLE_T3956901511_H
#ifndef FONT_T1956802104_H
#define FONT_T1956802104_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Font
struct  Font_t1956802104  : public Object_t631007953
{
public:
	// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::m_FontTextureRebuildCallback
	FontTextureRebuildCallback_t2467502454 * ___m_FontTextureRebuildCallback_3;

public:
	inline static int32_t get_offset_of_m_FontTextureRebuildCallback_3() { return static_cast<int32_t>(offsetof(Font_t1956802104, ___m_FontTextureRebuildCallback_3)); }
	inline FontTextureRebuildCallback_t2467502454 * get_m_FontTextureRebuildCallback_3() const { return ___m_FontTextureRebuildCallback_3; }
	inline FontTextureRebuildCallback_t2467502454 ** get_address_of_m_FontTextureRebuildCallback_3() { return &___m_FontTextureRebuildCallback_3; }
	inline void set_m_FontTextureRebuildCallback_3(FontTextureRebuildCallback_t2467502454 * value)
	{
		___m_FontTextureRebuildCallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontTextureRebuildCallback_3), value);
	}
};

struct Font_t1956802104_StaticFields
{
public:
	// System.Action`1<UnityEngine.Font> UnityEngine.Font::textureRebuilt
	Action_1_t2129269699 * ___textureRebuilt_2;

public:
	inline static int32_t get_offset_of_textureRebuilt_2() { return static_cast<int32_t>(offsetof(Font_t1956802104_StaticFields, ___textureRebuilt_2)); }
	inline Action_1_t2129269699 * get_textureRebuilt_2() const { return ___textureRebuilt_2; }
	inline Action_1_t2129269699 ** get_address_of_textureRebuilt_2() { return &___textureRebuilt_2; }
	inline void set_textureRebuilt_2(Action_1_t2129269699 * value)
	{
		___textureRebuilt_2 = value;
		Il2CppCodeGenWriteBarrier((&___textureRebuilt_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FONT_T1956802104_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef TEXTURE2D_T3840446185_H
#define TEXTURE2D_T3840446185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture2D
struct  Texture2D_t3840446185  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE2D_T3840446185_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef PAUSEMENU_T3916167947_H
#define PAUSEMENU_T3916167947_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PauseMenu
struct  PauseMenu_t3916167947  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GUIStyle PauseMenu::sliderStylethumb
	GUIStyle_t3956901511 * ___sliderStylethumb_2;
	// UnityEngine.GUIStyle PauseMenu::sliderStyle
	GUIStyle_t3956901511 * ___sliderStyle_3;
	// UnityEngine.GUIStyle PauseMenu::menuStyle
	GUIStyle_t3956901511 * ___menuStyle_4;
	// UnityEngine.GUIStyle PauseMenu::subtitleStyle
	GUIStyle_t3956901511 * ___subtitleStyle_5;
	// UnityEngine.GUIStyle PauseMenu::titleStyle
	GUIStyle_t3956901511 * ___titleStyle_6;
	// UnityEngine.Texture2D PauseMenu::menuTexture
	Texture2D_t3840446185 * ___menuTexture_7;
	// UnityEngine.Texture2D PauseMenu::thumbTexture
	Texture2D_t3840446185 * ___thumbTexture_8;
	// UnityEngine.Texture2D PauseMenu::sliderTexture
	Texture2D_t3840446185 * ___sliderTexture_9;
	// UnityEngine.Font PauseMenu::font
	Font_t1956802104 * ___font_10;
	// UnityEngine.Font PauseMenu::smallFont
	Font_t1956802104 * ___smallFont_11;
	// System.Single PauseMenu::borderDistance
	float ___borderDistance_12;
	// System.Single PauseMenu::menuXStart
	float ___menuXStart_13;
	// System.Single PauseMenu::menuYStart
	float ___menuYStart_14;
	// System.Single PauseMenu::menuWidth
	float ___menuWidth_15;
	// System.Single PauseMenu::menuHeight
	float ___menuHeight_16;
	// System.Single PauseMenu::menuItemHeight
	float ___menuItemHeight_17;
	// System.Single PauseMenu::sliderWidthPercent
	float ___sliderWidthPercent_18;
	// System.Single PauseMenu::sliderXStart
	float ___sliderXStart_19;
	// System.Single PauseMenu::sliderYStart
	float ___sliderYStart_20;
	// System.Single PauseMenu::elementOffset
	float ___elementOffset_21;
	// System.Single PauseMenu::sliderWidth
	float ___sliderWidth_22;
	// System.Single PauseMenu::musicSliderValue
	float ___musicSliderValue_23;
	// System.Single PauseMenu::SFXSliderValue
	float ___SFXSliderValue_24;

public:
	inline static int32_t get_offset_of_sliderStylethumb_2() { return static_cast<int32_t>(offsetof(PauseMenu_t3916167947, ___sliderStylethumb_2)); }
	inline GUIStyle_t3956901511 * get_sliderStylethumb_2() const { return ___sliderStylethumb_2; }
	inline GUIStyle_t3956901511 ** get_address_of_sliderStylethumb_2() { return &___sliderStylethumb_2; }
	inline void set_sliderStylethumb_2(GUIStyle_t3956901511 * value)
	{
		___sliderStylethumb_2 = value;
		Il2CppCodeGenWriteBarrier((&___sliderStylethumb_2), value);
	}

	inline static int32_t get_offset_of_sliderStyle_3() { return static_cast<int32_t>(offsetof(PauseMenu_t3916167947, ___sliderStyle_3)); }
	inline GUIStyle_t3956901511 * get_sliderStyle_3() const { return ___sliderStyle_3; }
	inline GUIStyle_t3956901511 ** get_address_of_sliderStyle_3() { return &___sliderStyle_3; }
	inline void set_sliderStyle_3(GUIStyle_t3956901511 * value)
	{
		___sliderStyle_3 = value;
		Il2CppCodeGenWriteBarrier((&___sliderStyle_3), value);
	}

	inline static int32_t get_offset_of_menuStyle_4() { return static_cast<int32_t>(offsetof(PauseMenu_t3916167947, ___menuStyle_4)); }
	inline GUIStyle_t3956901511 * get_menuStyle_4() const { return ___menuStyle_4; }
	inline GUIStyle_t3956901511 ** get_address_of_menuStyle_4() { return &___menuStyle_4; }
	inline void set_menuStyle_4(GUIStyle_t3956901511 * value)
	{
		___menuStyle_4 = value;
		Il2CppCodeGenWriteBarrier((&___menuStyle_4), value);
	}

	inline static int32_t get_offset_of_subtitleStyle_5() { return static_cast<int32_t>(offsetof(PauseMenu_t3916167947, ___subtitleStyle_5)); }
	inline GUIStyle_t3956901511 * get_subtitleStyle_5() const { return ___subtitleStyle_5; }
	inline GUIStyle_t3956901511 ** get_address_of_subtitleStyle_5() { return &___subtitleStyle_5; }
	inline void set_subtitleStyle_5(GUIStyle_t3956901511 * value)
	{
		___subtitleStyle_5 = value;
		Il2CppCodeGenWriteBarrier((&___subtitleStyle_5), value);
	}

	inline static int32_t get_offset_of_titleStyle_6() { return static_cast<int32_t>(offsetof(PauseMenu_t3916167947, ___titleStyle_6)); }
	inline GUIStyle_t3956901511 * get_titleStyle_6() const { return ___titleStyle_6; }
	inline GUIStyle_t3956901511 ** get_address_of_titleStyle_6() { return &___titleStyle_6; }
	inline void set_titleStyle_6(GUIStyle_t3956901511 * value)
	{
		___titleStyle_6 = value;
		Il2CppCodeGenWriteBarrier((&___titleStyle_6), value);
	}

	inline static int32_t get_offset_of_menuTexture_7() { return static_cast<int32_t>(offsetof(PauseMenu_t3916167947, ___menuTexture_7)); }
	inline Texture2D_t3840446185 * get_menuTexture_7() const { return ___menuTexture_7; }
	inline Texture2D_t3840446185 ** get_address_of_menuTexture_7() { return &___menuTexture_7; }
	inline void set_menuTexture_7(Texture2D_t3840446185 * value)
	{
		___menuTexture_7 = value;
		Il2CppCodeGenWriteBarrier((&___menuTexture_7), value);
	}

	inline static int32_t get_offset_of_thumbTexture_8() { return static_cast<int32_t>(offsetof(PauseMenu_t3916167947, ___thumbTexture_8)); }
	inline Texture2D_t3840446185 * get_thumbTexture_8() const { return ___thumbTexture_8; }
	inline Texture2D_t3840446185 ** get_address_of_thumbTexture_8() { return &___thumbTexture_8; }
	inline void set_thumbTexture_8(Texture2D_t3840446185 * value)
	{
		___thumbTexture_8 = value;
		Il2CppCodeGenWriteBarrier((&___thumbTexture_8), value);
	}

	inline static int32_t get_offset_of_sliderTexture_9() { return static_cast<int32_t>(offsetof(PauseMenu_t3916167947, ___sliderTexture_9)); }
	inline Texture2D_t3840446185 * get_sliderTexture_9() const { return ___sliderTexture_9; }
	inline Texture2D_t3840446185 ** get_address_of_sliderTexture_9() { return &___sliderTexture_9; }
	inline void set_sliderTexture_9(Texture2D_t3840446185 * value)
	{
		___sliderTexture_9 = value;
		Il2CppCodeGenWriteBarrier((&___sliderTexture_9), value);
	}

	inline static int32_t get_offset_of_font_10() { return static_cast<int32_t>(offsetof(PauseMenu_t3916167947, ___font_10)); }
	inline Font_t1956802104 * get_font_10() const { return ___font_10; }
	inline Font_t1956802104 ** get_address_of_font_10() { return &___font_10; }
	inline void set_font_10(Font_t1956802104 * value)
	{
		___font_10 = value;
		Il2CppCodeGenWriteBarrier((&___font_10), value);
	}

	inline static int32_t get_offset_of_smallFont_11() { return static_cast<int32_t>(offsetof(PauseMenu_t3916167947, ___smallFont_11)); }
	inline Font_t1956802104 * get_smallFont_11() const { return ___smallFont_11; }
	inline Font_t1956802104 ** get_address_of_smallFont_11() { return &___smallFont_11; }
	inline void set_smallFont_11(Font_t1956802104 * value)
	{
		___smallFont_11 = value;
		Il2CppCodeGenWriteBarrier((&___smallFont_11), value);
	}

	inline static int32_t get_offset_of_borderDistance_12() { return static_cast<int32_t>(offsetof(PauseMenu_t3916167947, ___borderDistance_12)); }
	inline float get_borderDistance_12() const { return ___borderDistance_12; }
	inline float* get_address_of_borderDistance_12() { return &___borderDistance_12; }
	inline void set_borderDistance_12(float value)
	{
		___borderDistance_12 = value;
	}

	inline static int32_t get_offset_of_menuXStart_13() { return static_cast<int32_t>(offsetof(PauseMenu_t3916167947, ___menuXStart_13)); }
	inline float get_menuXStart_13() const { return ___menuXStart_13; }
	inline float* get_address_of_menuXStart_13() { return &___menuXStart_13; }
	inline void set_menuXStart_13(float value)
	{
		___menuXStart_13 = value;
	}

	inline static int32_t get_offset_of_menuYStart_14() { return static_cast<int32_t>(offsetof(PauseMenu_t3916167947, ___menuYStart_14)); }
	inline float get_menuYStart_14() const { return ___menuYStart_14; }
	inline float* get_address_of_menuYStart_14() { return &___menuYStart_14; }
	inline void set_menuYStart_14(float value)
	{
		___menuYStart_14 = value;
	}

	inline static int32_t get_offset_of_menuWidth_15() { return static_cast<int32_t>(offsetof(PauseMenu_t3916167947, ___menuWidth_15)); }
	inline float get_menuWidth_15() const { return ___menuWidth_15; }
	inline float* get_address_of_menuWidth_15() { return &___menuWidth_15; }
	inline void set_menuWidth_15(float value)
	{
		___menuWidth_15 = value;
	}

	inline static int32_t get_offset_of_menuHeight_16() { return static_cast<int32_t>(offsetof(PauseMenu_t3916167947, ___menuHeight_16)); }
	inline float get_menuHeight_16() const { return ___menuHeight_16; }
	inline float* get_address_of_menuHeight_16() { return &___menuHeight_16; }
	inline void set_menuHeight_16(float value)
	{
		___menuHeight_16 = value;
	}

	inline static int32_t get_offset_of_menuItemHeight_17() { return static_cast<int32_t>(offsetof(PauseMenu_t3916167947, ___menuItemHeight_17)); }
	inline float get_menuItemHeight_17() const { return ___menuItemHeight_17; }
	inline float* get_address_of_menuItemHeight_17() { return &___menuItemHeight_17; }
	inline void set_menuItemHeight_17(float value)
	{
		___menuItemHeight_17 = value;
	}

	inline static int32_t get_offset_of_sliderWidthPercent_18() { return static_cast<int32_t>(offsetof(PauseMenu_t3916167947, ___sliderWidthPercent_18)); }
	inline float get_sliderWidthPercent_18() const { return ___sliderWidthPercent_18; }
	inline float* get_address_of_sliderWidthPercent_18() { return &___sliderWidthPercent_18; }
	inline void set_sliderWidthPercent_18(float value)
	{
		___sliderWidthPercent_18 = value;
	}

	inline static int32_t get_offset_of_sliderXStart_19() { return static_cast<int32_t>(offsetof(PauseMenu_t3916167947, ___sliderXStart_19)); }
	inline float get_sliderXStart_19() const { return ___sliderXStart_19; }
	inline float* get_address_of_sliderXStart_19() { return &___sliderXStart_19; }
	inline void set_sliderXStart_19(float value)
	{
		___sliderXStart_19 = value;
	}

	inline static int32_t get_offset_of_sliderYStart_20() { return static_cast<int32_t>(offsetof(PauseMenu_t3916167947, ___sliderYStart_20)); }
	inline float get_sliderYStart_20() const { return ___sliderYStart_20; }
	inline float* get_address_of_sliderYStart_20() { return &___sliderYStart_20; }
	inline void set_sliderYStart_20(float value)
	{
		___sliderYStart_20 = value;
	}

	inline static int32_t get_offset_of_elementOffset_21() { return static_cast<int32_t>(offsetof(PauseMenu_t3916167947, ___elementOffset_21)); }
	inline float get_elementOffset_21() const { return ___elementOffset_21; }
	inline float* get_address_of_elementOffset_21() { return &___elementOffset_21; }
	inline void set_elementOffset_21(float value)
	{
		___elementOffset_21 = value;
	}

	inline static int32_t get_offset_of_sliderWidth_22() { return static_cast<int32_t>(offsetof(PauseMenu_t3916167947, ___sliderWidth_22)); }
	inline float get_sliderWidth_22() const { return ___sliderWidth_22; }
	inline float* get_address_of_sliderWidth_22() { return &___sliderWidth_22; }
	inline void set_sliderWidth_22(float value)
	{
		___sliderWidth_22 = value;
	}

	inline static int32_t get_offset_of_musicSliderValue_23() { return static_cast<int32_t>(offsetof(PauseMenu_t3916167947, ___musicSliderValue_23)); }
	inline float get_musicSliderValue_23() const { return ___musicSliderValue_23; }
	inline float* get_address_of_musicSliderValue_23() { return &___musicSliderValue_23; }
	inline void set_musicSliderValue_23(float value)
	{
		___musicSliderValue_23 = value;
	}

	inline static int32_t get_offset_of_SFXSliderValue_24() { return static_cast<int32_t>(offsetof(PauseMenu_t3916167947, ___SFXSliderValue_24)); }
	inline float get_SFXSliderValue_24() const { return ___SFXSliderValue_24; }
	inline float* get_address_of_SFXSliderValue_24() { return &___SFXSliderValue_24; }
	inline void set_SFXSliderValue_24(float value)
	{
		___SFXSliderValue_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PAUSEMENU_T3916167947_H



// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_width_m345039817 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void PauseMenu::InitStyle()
extern "C" IL2CPP_METHOD_ATTR void PauseMenu_InitStyle_m399915634 (PauseMenu_t3916167947 * __this, const RuntimeMethod* method);
// System.Void PauseMenu::InitUIDimensions()
extern "C" IL2CPP_METHOD_ATTR void PauseMenu_InitUIDimensions_m4192155831 (PauseMenu_t3916167947 * __this, const RuntimeMethod* method);
// System.Void PauseMenu::InitSliderValues()
extern "C" IL2CPP_METHOD_ATTR void PauseMenu_InitSliderValues_m1375718182 (PauseMenu_t3916167947 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rect__ctor_m2614021312 (Rect_t2360479859 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method);
// System.Void UnityEngine.GUIContent::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void GUIContent__ctor_m890195579 (GUIContent_t3050628031 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR void GUI_Box_m1178071121 (RuntimeObject * __this /* static, unused */, Rect_t2360479859  p0, GUIContent_t3050628031 * p1, GUIStyle_t3956901511 * p2, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR void GUI_Label_m2420537077 (RuntimeObject * __this /* static, unused */, Rect_t2360479859  p0, String_t* p1, GUIStyle_t3956901511 * p2, const RuntimeMethod* method);
// System.Single UnityEngine.GUI::HorizontalSlider(UnityEngine.Rect,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR float GUI_HorizontalSlider_m1520230840 (RuntimeObject * __this /* static, unused */, Rect_t2360479859  p0, float p1, float p2, float p3, GUIStyle_t3956901511 * p4, GUIStyle_t3956901511 * p5, const RuntimeMethod* method);
// System.Void PauseMenu::UpdateMusicVol(System.Single)
extern "C" IL2CPP_METHOD_ATTR void PauseMenu_UpdateMusicVol_m3876094862 (PauseMenu_t3916167947 * __this, float ___newMusicVol0, const RuntimeMethod* method);
// System.Void PauseMenu::UpdateSFXVol(System.Single)
extern "C" IL2CPP_METHOD_ATTR void PauseMenu_UpdateSFXVol_m3744279240 (PauseMenu_t3916167947 * __this, float ___newSFXVol0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GUIStyle__ctor_m4038363858 (GUIStyle_t3956901511 * __this, const RuntimeMethod* method);
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
extern "C" IL2CPP_METHOD_ATTR GUIStyleState_t1397964415 * GUIStyle_get_normal_m729441812 (GUIStyle_t3956901511 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyleState::set_background(UnityEngine.Texture2D)
extern "C" IL2CPP_METHOD_ATTR void GUIStyleState_set_background_m369476077 (GUIStyleState_t1397964415 * __this, Texture2D_t3840446185 * p0, const RuntimeMethod* method);
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_padding()
extern "C" IL2CPP_METHOD_ATTR RectOffset_t1369453676 * GUIStyle_get_padding_m3526264743 (GUIStyle_t3956901511 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RectOffset::set_top(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void RectOffset_set_top_m713260669 (RectOffset_t1369453676 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.RectOffset::set_left(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void RectOffset_set_left_m432301222 (RectOffset_t1369453676 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.RectOffset::set_bottom(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void RectOffset_set_bottom_m2747419780 (RectOffset_t1369453676 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.RectOffset::set_right(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void RectOffset_set_right_m807318764 (RectOffset_t1369453676 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Color__ctor_m2943235014 (Color_t2555686324 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyleState::set_textColor(UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void GUIStyleState_set_textColor_m1105876047 (GUIStyleState_t1397964415 * __this, Color_t2555686324  p0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_font(UnityEngine.Font)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_set_font_m2490449107 (GUIStyle_t3956901511 * __this, Font_t1956802104 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_alignment(UnityEngine.TextAnchor)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_set_alignment_m3944619660 (GUIStyle_t3956901511 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::.ctor(UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle__ctor_m2912682974 (GUIStyle_t3956901511 * __this, GUIStyle_t3956901511 * p0, const RuntimeMethod* method);
// System.Single SkillzCrossPlatform::getSkillzMusicVolume()
extern "C" IL2CPP_METHOD_ATTR float SkillzCrossPlatform_getSkillzMusicVolume_m3386035777 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Single SkillzCrossPlatform::getSFXVolume()
extern "C" IL2CPP_METHOD_ATTR float SkillzCrossPlatform_getSFXVolume_m3166619612 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void SkillzCrossPlatform::setSkillzMusicVolume(System.Single)
extern "C" IL2CPP_METHOD_ATTR void SkillzCrossPlatform_setSkillzMusicVolume_m2937436182 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method);
// System.Void SkillzCrossPlatform::setSFXVolume(System.Single)
extern "C" IL2CPP_METHOD_ATTR void SkillzCrossPlatform_setSFXVolume_m3149349838 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PauseMenu::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PauseMenu__ctor_m3854158124 (PauseMenu_t3916167947 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PauseMenu::Start()
extern "C" IL2CPP_METHOD_ATTR void PauseMenu_Start_m517218302 (PauseMenu_t3916167947 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_borderDistance_12(((float)il2cpp_codegen_multiply((float)(((float)((float)L_0))), (float)(0.09f))));
		PauseMenu_InitStyle_m399915634(__this, /*hidden argument*/NULL);
		PauseMenu_InitUIDimensions_m4192155831(__this, /*hidden argument*/NULL);
		PauseMenu_InitSliderValues_m1375718182(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PauseMenu::Update()
extern "C" IL2CPP_METHOD_ATTR void PauseMenu_Update_m1844139191 (PauseMenu_t3916167947 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void PauseMenu::OnGUI()
extern "C" IL2CPP_METHOD_ATTR void PauseMenu_OnGUI_m2253402119 (PauseMenu_t3916167947 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PauseMenu_OnGUI_m2253402119_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		float L_0 = __this->get_musicSliderValue_23();
		V_0 = L_0;
		float L_1 = __this->get_SFXSliderValue_24();
		V_1 = L_1;
		float L_2 = __this->get_menuXStart_13();
		float L_3 = __this->get_menuYStart_14();
		float L_4 = __this->get_menuWidth_15();
		float L_5 = __this->get_menuHeight_16();
		Rect_t2360479859  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Rect__ctor_m2614021312((&L_6), L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		GUIContent_t3050628031 * L_8 = (GUIContent_t3050628031 *)il2cpp_codegen_object_new(GUIContent_t3050628031_il2cpp_TypeInfo_var);
		GUIContent__ctor_m890195579(L_8, L_7, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_9 = __this->get_menuStyle_4();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		GUI_Box_m1178071121(NULL /*static, unused*/, L_6, L_8, L_9, /*hidden argument*/NULL);
		float L_10 = __this->get_menuXStart_13();
		float L_11 = __this->get_borderDistance_12();
		float L_12 = __this->get_menuHeight_16();
		float L_13 = __this->get_menuWidth_15();
		float L_14 = __this->get_menuItemHeight_17();
		Rect_t2360479859  L_15;
		memset(&L_15, 0, sizeof(L_15));
		Rect__ctor_m2614021312((&L_15), L_10, ((float)il2cpp_codegen_add((float)L_11, (float)((float)il2cpp_codegen_multiply((float)L_12, (float)(0.15f))))), L_13, L_14, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_16 = __this->get_titleStyle_6();
		GUI_Label_m2420537077(NULL /*static, unused*/, L_15, _stringLiteral4290507994, L_16, /*hidden argument*/NULL);
		float L_17 = __this->get_menuXStart_13();
		float L_18 = __this->get_borderDistance_12();
		float L_19 = __this->get_menuHeight_16();
		float L_20 = __this->get_menuWidth_15();
		float L_21 = __this->get_menuItemHeight_17();
		Rect_t2360479859  L_22;
		memset(&L_22, 0, sizeof(L_22));
		Rect__ctor_m2614021312((&L_22), L_17, ((float)il2cpp_codegen_add((float)L_18, (float)((float)il2cpp_codegen_multiply((float)L_19, (float)(0.35f))))), L_20, L_21, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_23 = __this->get_subtitleStyle_5();
		GUI_Label_m2420537077(NULL /*static, unused*/, L_22, _stringLiteral3964750823, L_23, /*hidden argument*/NULL);
		float L_24 = __this->get_sliderXStart_19();
		float L_25 = __this->get_borderDistance_12();
		float L_26 = __this->get_menuHeight_16();
		float L_27 = __this->get_sliderWidth_22();
		float L_28 = __this->get_menuItemHeight_17();
		Rect_t2360479859  L_29;
		memset(&L_29, 0, sizeof(L_29));
		Rect__ctor_m2614021312((&L_29), L_24, ((float)il2cpp_codegen_add((float)L_25, (float)((float)il2cpp_codegen_multiply((float)L_26, (float)(0.42f))))), L_27, L_28, /*hidden argument*/NULL);
		float L_30 = V_0;
		GUIStyle_t3956901511 * L_31 = __this->get_sliderStyle_3();
		GUIStyle_t3956901511 * L_32 = __this->get_sliderStylethumb_2();
		float L_33 = GUI_HorizontalSlider_m1520230840(NULL /*static, unused*/, L_29, L_30, (0.0f), (1.0f), L_31, L_32, /*hidden argument*/NULL);
		__this->set_musicSliderValue_23(L_33);
		float L_34 = __this->get_menuXStart_13();
		float L_35 = __this->get_borderDistance_12();
		float L_36 = __this->get_menuHeight_16();
		float L_37 = __this->get_menuWidth_15();
		float L_38 = __this->get_menuItemHeight_17();
		Rect_t2360479859  L_39;
		memset(&L_39, 0, sizeof(L_39));
		Rect__ctor_m2614021312((&L_39), L_34, ((float)il2cpp_codegen_add((float)L_35, (float)((float)il2cpp_codegen_multiply((float)L_36, (float)(0.55f))))), L_37, L_38, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_40 = __this->get_subtitleStyle_5();
		GUI_Label_m2420537077(NULL /*static, unused*/, L_39, _stringLiteral2743466127, L_40, /*hidden argument*/NULL);
		float L_41 = __this->get_sliderXStart_19();
		float L_42 = __this->get_borderDistance_12();
		float L_43 = __this->get_menuHeight_16();
		float L_44 = __this->get_sliderWidth_22();
		float L_45 = __this->get_menuItemHeight_17();
		Rect_t2360479859  L_46;
		memset(&L_46, 0, sizeof(L_46));
		Rect__ctor_m2614021312((&L_46), L_41, ((float)il2cpp_codegen_add((float)L_42, (float)((float)il2cpp_codegen_multiply((float)L_43, (float)(0.62f))))), L_44, L_45, /*hidden argument*/NULL);
		float L_47 = V_1;
		GUIStyle_t3956901511 * L_48 = __this->get_sliderStyle_3();
		GUIStyle_t3956901511 * L_49 = __this->get_sliderStylethumb_2();
		float L_50 = GUI_HorizontalSlider_m1520230840(NULL /*static, unused*/, L_46, L_47, (0.0f), (1.0f), L_48, L_49, /*hidden argument*/NULL);
		__this->set_SFXSliderValue_24(L_50);
		float L_51 = V_0;
		float L_52 = __this->get_musicSliderValue_23();
		if ((((float)L_51) == ((float)L_52)))
		{
			goto IL_019e;
		}
	}
	{
		float L_53 = __this->get_musicSliderValue_23();
		PauseMenu_UpdateMusicVol_m3876094862(__this, L_53, /*hidden argument*/NULL);
	}

IL_019e:
	{
		float L_54 = V_1;
		float L_55 = __this->get_SFXSliderValue_24();
		if ((((float)L_54) == ((float)L_55)))
		{
			goto IL_01b6;
		}
	}
	{
		float L_56 = __this->get_SFXSliderValue_24();
		PauseMenu_UpdateSFXVol_m3744279240(__this, L_56, /*hidden argument*/NULL);
	}

IL_01b6:
	{
		return;
	}
}
// System.Void PauseMenu::InitStyle()
extern "C" IL2CPP_METHOD_ATTR void PauseMenu_InitStyle_m399915634 (PauseMenu_t3916167947 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PauseMenu_InitStyle_m399915634_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GUIStyle_t3956901511 * L_0 = (GUIStyle_t3956901511 *)il2cpp_codegen_object_new(GUIStyle_t3956901511_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m4038363858(L_0, /*hidden argument*/NULL);
		__this->set_menuStyle_4(L_0);
		GUIStyle_t3956901511 * L_1 = __this->get_menuStyle_4();
		NullCheck(L_1);
		GUIStyleState_t1397964415 * L_2 = GUIStyle_get_normal_m729441812(L_1, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_3 = __this->get_menuTexture_7();
		NullCheck(L_2);
		GUIStyleState_set_background_m369476077(L_2, L_3, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_4 = (GUIStyle_t3956901511 *)il2cpp_codegen_object_new(GUIStyle_t3956901511_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m4038363858(L_4, /*hidden argument*/NULL);
		__this->set_sliderStyle_3(L_4);
		GUIStyle_t3956901511 * L_5 = (GUIStyle_t3956901511 *)il2cpp_codegen_object_new(GUIStyle_t3956901511_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m4038363858(L_5, /*hidden argument*/NULL);
		__this->set_sliderStylethumb_2(L_5);
		GUIStyle_t3956901511 * L_6 = __this->get_sliderStyle_3();
		NullCheck(L_6);
		GUIStyleState_t1397964415 * L_7 = GUIStyle_get_normal_m729441812(L_6, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_8 = __this->get_sliderTexture_9();
		NullCheck(L_7);
		GUIStyleState_set_background_m369476077(L_7, L_8, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_9 = __this->get_sliderStylethumb_2();
		NullCheck(L_9);
		GUIStyleState_t1397964415 * L_10 = GUIStyle_get_normal_m729441812(L_9, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_11 = __this->get_thumbTexture_8();
		NullCheck(L_10);
		GUIStyleState_set_background_m369476077(L_10, L_11, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_12 = __this->get_sliderStylethumb_2();
		NullCheck(L_12);
		RectOffset_t1369453676 * L_13 = GUIStyle_get_padding_m3526264743(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		RectOffset_set_top_m713260669(L_13, 5, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_14 = __this->get_sliderStylethumb_2();
		NullCheck(L_14);
		RectOffset_t1369453676 * L_15 = GUIStyle_get_padding_m3526264743(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		RectOffset_set_left_m432301222(L_15, ((int32_t)20), /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_16 = __this->get_sliderStylethumb_2();
		NullCheck(L_16);
		RectOffset_t1369453676 * L_17 = GUIStyle_get_padding_m3526264743(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		RectOffset_set_bottom_m2747419780(L_17, 5, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_18 = __this->get_sliderStylethumb_2();
		NullCheck(L_18);
		RectOffset_t1369453676 * L_19 = GUIStyle_get_padding_m3526264743(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		RectOffset_set_right_m807318764(L_19, ((int32_t)20), /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_20 = (GUIStyle_t3956901511 *)il2cpp_codegen_object_new(GUIStyle_t3956901511_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m4038363858(L_20, /*hidden argument*/NULL);
		__this->set_titleStyle_6(L_20);
		GUIStyle_t3956901511 * L_21 = __this->get_titleStyle_6();
		NullCheck(L_21);
		GUIStyleState_t1397964415 * L_22 = GUIStyle_get_normal_m729441812(L_21, /*hidden argument*/NULL);
		Color_t2555686324  L_23;
		memset(&L_23, 0, sizeof(L_23));
		Color__ctor_m2943235014((&L_23), (1.0f), (0.384f), (0.0f), (0.702f), /*hidden argument*/NULL);
		NullCheck(L_22);
		GUIStyleState_set_textColor_m1105876047(L_22, L_23, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_24 = __this->get_titleStyle_6();
		Font_t1956802104 * L_25 = __this->get_font_10();
		NullCheck(L_24);
		GUIStyle_set_font_m2490449107(L_24, L_25, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_26 = __this->get_titleStyle_6();
		NullCheck(L_26);
		GUIStyle_set_alignment_m3944619660(L_26, 1, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_27 = __this->get_titleStyle_6();
		GUIStyle_t3956901511 * L_28 = (GUIStyle_t3956901511 *)il2cpp_codegen_object_new(GUIStyle_t3956901511_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m2912682974(L_28, L_27, /*hidden argument*/NULL);
		__this->set_subtitleStyle_5(L_28);
		GUIStyle_t3956901511 * L_29 = __this->get_subtitleStyle_5();
		Font_t1956802104 * L_30 = __this->get_smallFont_11();
		NullCheck(L_29);
		GUIStyle_set_font_m2490449107(L_29, L_30, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PauseMenu::InitUIDimensions()
extern "C" IL2CPP_METHOD_ATTR void PauseMenu_InitUIDimensions_m4192155831 (PauseMenu_t3916167947 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_borderDistance_12();
		__this->set_menuXStart_13(L_0);
		float L_1 = __this->get_borderDistance_12();
		__this->set_menuYStart_14(L_1);
		int32_t L_2 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_3 = __this->get_borderDistance_12();
		__this->set_menuWidth_15(((float)il2cpp_codegen_subtract((float)(((float)((float)L_2))), (float)((float)il2cpp_codegen_multiply((float)L_3, (float)(2.0f))))));
		float L_4 = __this->get_menuWidth_15();
		__this->set_menuHeight_16(L_4);
		__this->set_sliderWidthPercent_18((0.75f));
		float L_5 = __this->get_borderDistance_12();
		__this->set_menuItemHeight_17(((float)il2cpp_codegen_multiply((float)L_5, (float)(0.5f))));
		float L_6 = __this->get_menuXStart_13();
		float L_7 = __this->get_menuWidth_15();
		float L_8 = __this->get_sliderWidthPercent_18();
		__this->set_sliderXStart_19(((float)il2cpp_codegen_add((float)L_6, (float)((float)((float)((float)il2cpp_codegen_multiply((float)L_7, (float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_8))))/(float)(2.0f))))));
		float L_9 = __this->get_menuWidth_15();
		float L_10 = __this->get_sliderWidthPercent_18();
		__this->set_sliderWidth_22(((float)il2cpp_codegen_multiply((float)L_9, (float)L_10)));
		return;
	}
}
// System.Void PauseMenu::InitSliderValues()
extern "C" IL2CPP_METHOD_ATTR void PauseMenu_InitSliderValues_m1375718182 (PauseMenu_t3916167947 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = SkillzCrossPlatform_getSkillzMusicVolume_m3386035777(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_musicSliderValue_23(L_0);
		float L_1 = SkillzCrossPlatform_getSFXVolume_m3166619612(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_SFXSliderValue_24(L_1);
		return;
	}
}
// System.Void PauseMenu::UpdateMusicVol(System.Single)
extern "C" IL2CPP_METHOD_ATTR void PauseMenu_UpdateMusicVol_m3876094862 (PauseMenu_t3916167947 * __this, float ___newMusicVol0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PauseMenu_UpdateMusicVol_m3876094862_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___newMusicVol0;
		float L_1 = L_0;
		RuntimeObject * L_2 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral1221810433, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		float L_4 = ___newMusicVol0;
		SkillzCrossPlatform_setSkillzMusicVolume_m2937436182(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PauseMenu::UpdateSFXVol(System.Single)
extern "C" IL2CPP_METHOD_ATTR void PauseMenu_UpdateSFXVol_m3744279240 (PauseMenu_t3916167947 * __this, float ___newSFXVol0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PauseMenu_UpdateSFXVol_m3744279240_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___newSFXVol0;
		float L_1 = L_0;
		RuntimeObject * L_2 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral1726877112, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		float L_4 = ___newSFXVol0;
		SkillzCrossPlatform_setSFXVolume_m3149349838(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SkillzUnityVersion::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SkillzUnityVersion__ctor_m1551488304 (SkillzUnityVersion_t461133871 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String SkillzUnityVersion::VersionString()
extern "C" IL2CPP_METHOD_ATTR String_t* SkillzUnityVersion_VersionString_m4163719883 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkillzUnityVersion_VersionString_m4163719883_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral232286738;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

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

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t3167005734;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t3585182446;
// System.InvalidOperationException
struct InvalidOperationException_t1236416966;
// System.Type
struct Type_t;
// System.ObjectDisposedException
struct ObjectDisposedException_t3447794223;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3601918343;
// System.Collections.Generic.List`1<System.Reflection.CustomAttributeNamedArgument>
struct List_1_t540596783;
// System.Char[]
struct CharU5BU5D_t1050148242;
// System.Reflection.CustomAttributeNamedArgument[]
struct CustomAttributeNamedArgumentU5BU5D_t3717413444;
// System.Object[]
struct ObjectU5BU5D_t2347633292;
// System.IntPtr[]
struct IntPtrU5BU5D_t1191928545;
// System.Collections.IDictionary
struct IDictionary_t2354081665;
// System.Int32[]
struct Int32U5BU5D_t4197534633;
// System.Void
struct Void_t967611506;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Type[]
struct TypeU5BU5D_t3584076656;
// System.Reflection.MemberFilter
struct MemberFilter_t3040116056;

extern RuntimeClass* StringU5BU5D_t3167005734_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4173083846;
extern Il2CppCodeGenString* _stringLiteral383949385;
extern Il2CppCodeGenString* _stringLiteral1835712221;
extern const uint32_t KeyValuePair_2_ToString_m3290504820_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m3455846573_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m701566334_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m1336537285_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m3448316403_MetadataUsageId;
extern RuntimeClass* InvalidOperationException_t1236416966_il2cpp_TypeInfo_var;
extern const uint32_t Enumerator_System_Collections_IEnumerator_get_Current_m2458678745_MetadataUsageId;
extern RuntimeClass* ObjectDisposedException_t3447794223_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4156302984;
extern const uint32_t Enumerator_VerifyState_m775571963_MetadataUsageId;
extern const uint32_t Enumerator_System_Collections_IEnumerator_get_Current_m1071044116_MetadataUsageId;
extern const uint32_t Enumerator_VerifyState_m3345335743_MetadataUsageId;
extern const uint32_t Enumerator_System_Collections_IEnumerator_get_Current_m3239662190_MetadataUsageId;
extern const uint32_t Enumerator_VerifyState_m3458408358_MetadataUsageId;

struct StringU5BU5D_t3167005734;
struct Int32U5BU5D_t4197534633;
struct ObjectU5BU5D_t2347633292;
struct CustomAttributeNamedArgumentU5BU5D_t3717413444;


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
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
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
	CharU5BU5D_t1050148242* ___WhiteChars_3;

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
	inline CharU5BU5D_t1050148242* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t1050148242** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t1050148242* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T2588987224_H
#define VALUETYPE_T2588987224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t2588987224  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t2588987224_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t2588987224_marshaled_com
{
};
#endif // VALUETYPE_T2588987224_H
#ifndef LIST_1_T540596783_H
#define LIST_1_T540596783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Reflection.CustomAttributeNamedArgument>
struct  List_1_t540596783  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	CustomAttributeNamedArgumentU5BU5D_t3717413444* ____items_0;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_2;

public:
	inline static int32_t get_offset_of__items_0() { return static_cast<int32_t>(offsetof(List_1_t540596783, ____items_0)); }
	inline CustomAttributeNamedArgumentU5BU5D_t3717413444* get__items_0() const { return ____items_0; }
	inline CustomAttributeNamedArgumentU5BU5D_t3717413444** get_address_of__items_0() { return &____items_0; }
	inline void set__items_0(CustomAttributeNamedArgumentU5BU5D_t3717413444* value)
	{
		____items_0 = value;
		Il2CppCodeGenWriteBarrier((&____items_0), value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(List_1_t540596783, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(List_1_t540596783, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}
};

struct List_1_t540596783_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	CustomAttributeNamedArgumentU5BU5D_t3717413444* ___EmptyArray_3;

public:
	inline static int32_t get_offset_of_EmptyArray_3() { return static_cast<int32_t>(offsetof(List_1_t540596783_StaticFields, ___EmptyArray_3)); }
	inline CustomAttributeNamedArgumentU5BU5D_t3717413444* get_EmptyArray_3() const { return ___EmptyArray_3; }
	inline CustomAttributeNamedArgumentU5BU5D_t3717413444** get_address_of_EmptyArray_3() { return &___EmptyArray_3; }
	inline void set_EmptyArray_3(CustomAttributeNamedArgumentU5BU5D_t3717413444* value)
	{
		___EmptyArray_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T540596783_H
#ifndef LIST_1_T3601918343_H
#define LIST_1_T3601918343_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Object>
struct  List_1_t3601918343  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t2347633292* ____items_0;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_2;

public:
	inline static int32_t get_offset_of__items_0() { return static_cast<int32_t>(offsetof(List_1_t3601918343, ____items_0)); }
	inline ObjectU5BU5D_t2347633292* get__items_0() const { return ____items_0; }
	inline ObjectU5BU5D_t2347633292** get_address_of__items_0() { return &____items_0; }
	inline void set__items_0(ObjectU5BU5D_t2347633292* value)
	{
		____items_0 = value;
		Il2CppCodeGenWriteBarrier((&____items_0), value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(List_1_t3601918343, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(List_1_t3601918343, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}
};

struct List_1_t3601918343_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ObjectU5BU5D_t2347633292* ___EmptyArray_3;

public:
	inline static int32_t get_offset_of_EmptyArray_3() { return static_cast<int32_t>(offsetof(List_1_t3601918343_StaticFields, ___EmptyArray_3)); }
	inline ObjectU5BU5D_t2347633292* get_EmptyArray_3() const { return ___EmptyArray_3; }
	inline ObjectU5BU5D_t2347633292** get_address_of_EmptyArray_3() { return &___EmptyArray_3; }
	inline void set_EmptyArray_3(ObjectU5BU5D_t2347633292* value)
	{
		___EmptyArray_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3601918343_H
#ifndef EXCEPTION_T3645711461_H
#define EXCEPTION_T3645711461_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t3645711461  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t1191928545* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t3645711461 * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t3645711461, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t1191928545* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t1191928545** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t1191928545* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t3645711461, ___inner_exception_1)); }
	inline Exception_t3645711461 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t3645711461 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t3645711461 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t3645711461, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t3645711461, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t3645711461, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t3645711461, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t3645711461, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t3645711461, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t3645711461, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t3645711461, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t3645711461, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T3645711461_H
#ifndef LIST_1_T3585182446_H
#define LIST_1_T3585182446_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Int32>
struct  List_1_t3585182446  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t4197534633* ____items_0;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_2;

public:
	inline static int32_t get_offset_of__items_0() { return static_cast<int32_t>(offsetof(List_1_t3585182446, ____items_0)); }
	inline Int32U5BU5D_t4197534633* get__items_0() const { return ____items_0; }
	inline Int32U5BU5D_t4197534633** get_address_of__items_0() { return &____items_0; }
	inline void set__items_0(Int32U5BU5D_t4197534633* value)
	{
		____items_0 = value;
		Il2CppCodeGenWriteBarrier((&____items_0), value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(List_1_t3585182446, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(List_1_t3585182446, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}
};

struct List_1_t3585182446_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Int32U5BU5D_t4197534633* ___EmptyArray_3;

public:
	inline static int32_t get_offset_of_EmptyArray_3() { return static_cast<int32_t>(offsetof(List_1_t3585182446_StaticFields, ___EmptyArray_3)); }
	inline Int32U5BU5D_t4197534633* get_EmptyArray_3() const { return ___EmptyArray_3; }
	inline Int32U5BU5D_t4197534633** get_address_of_EmptyArray_3() { return &___EmptyArray_3; }
	inline void set_EmptyArray_3(Int32U5BU5D_t4197534633* value)
	{
		___EmptyArray_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3585182446_H
#ifndef CUSTOMATTRIBUTETYPEDARGUMENT_T3774253372_H
#define CUSTOMATTRIBUTETYPEDARGUMENT_T3774253372_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeTypedArgument
struct  CustomAttributeTypedArgument_t3774253372 
{
public:
	// System.Type System.Reflection.CustomAttributeTypedArgument::argumentType
	Type_t * ___argumentType_0;
	// System.Object System.Reflection.CustomAttributeTypedArgument::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_argumentType_0() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t3774253372, ___argumentType_0)); }
	inline Type_t * get_argumentType_0() const { return ___argumentType_0; }
	inline Type_t ** get_address_of_argumentType_0() { return &___argumentType_0; }
	inline void set_argumentType_0(Type_t * value)
	{
		___argumentType_0 = value;
		Il2CppCodeGenWriteBarrier((&___argumentType_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t3774253372, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t3774253372_marshaled_pinvoke
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t3774253372_marshaled_com
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};
#endif // CUSTOMATTRIBUTETYPEDARGUMENT_T3774253372_H
#ifndef SYSTEMEXCEPTION_T3448793453_H
#define SYSTEMEXCEPTION_T3448793453_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t3448793453  : public Exception_t3645711461
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T3448793453_H
#ifndef ENUMERATOR_T2532305113_H
#define ENUMERATOR_T2532305113_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t2532305113 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t3601918343 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2532305113, ___l_0)); }
	inline List_1_t3601918343 * get_l_0() const { return ___l_0; }
	inline List_1_t3601918343 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t3601918343 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2532305113, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2532305113, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2532305113, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2532305113_H
#ifndef ENUM_T804399838_H
#define ENUM_T804399838_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t804399838  : public ValueType_t2588987224
{
public:

public:
};

struct Enum_t804399838_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t1050148242* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t804399838_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t1050148242* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t1050148242** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t1050148242* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t804399838_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t804399838_marshaled_com
{
};
#endif // ENUM_T804399838_H
#ifndef KEYVALUEPAIR_2_T3956671926_H
#define KEYVALUEPAIR_2_T3956671926_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t3956671926 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3956671926, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3956671926, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3956671926_H
#ifndef KEYVALUEPAIR_2_T3939936029_H
#define KEYVALUEPAIR_2_T3939936029_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
struct  KeyValuePair_2_t3939936029 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3939936029, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3939936029, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3939936029_H
#ifndef KEYVALUEPAIR_2_T1511605971_H
#define KEYVALUEPAIR_2_T1511605971_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct  KeyValuePair_2_t1511605971 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1511605971, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1511605971, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T1511605971_H
#ifndef BOOLEAN_T391092588_H
#define BOOLEAN_T391092588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t391092588 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t391092588, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t391092588_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t391092588_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t391092588_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T391092588_H
#ifndef KEYVALUEPAIR_2_T2052968721_H
#define KEYVALUEPAIR_2_T2052968721_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
struct  KeyValuePair_2_t2052968721 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	bool ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2052968721, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2052968721, ___value_1)); }
	inline bool get_value_1() const { return ___value_1; }
	inline bool* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(bool value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2052968721_H
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
	IntPtr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline IntPtr_t get_Zero_1() const { return ___Zero_1; }
	inline IntPtr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(IntPtr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef ENUMERATOR_T2515569216_H
#define ENUMERATOR_T2515569216_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Int32>
struct  Enumerator_t2515569216 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t3585182446 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	int32_t ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2515569216, ___l_0)); }
	inline List_1_t3585182446 * get_l_0() const { return ___l_0; }
	inline List_1_t3585182446 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t3585182446 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2515569216, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2515569216, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2515569216, ___current_3)); }
	inline int32_t get_current_3() const { return ___current_3; }
	inline int32_t* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(int32_t value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2515569216_H
#ifndef VOID_T967611506_H
#define VOID_T967611506_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t967611506 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T967611506_H
#ifndef INT32_T2278059896_H
#define INT32_T2278059896_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2278059896 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2278059896, ___m_value_2)); }
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
#endif // INT32_T2278059896_H
#ifndef RUNTIMETYPEHANDLE_T2036522715_H
#define RUNTIMETYPEHANDLE_T2036522715_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t2036522715 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	IntPtr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t2036522715, ___value_0)); }
	inline IntPtr_t get_value_0() const { return ___value_0; }
	inline IntPtr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(IntPtr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T2036522715_H
#ifndef BINDINGFLAGS_T699171869_H
#define BINDINGFLAGS_T699171869_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t699171869 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t699171869, ___value___1)); }
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
#endif // BINDINGFLAGS_T699171869_H
#ifndef CUSTOMATTRIBUTENAMEDARGUMENT_T3528441529_H
#define CUSTOMATTRIBUTENAMEDARGUMENT_T3528441529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeNamedArgument
struct  CustomAttributeNamedArgument_t3528441529 
{
public:
	// System.Reflection.CustomAttributeTypedArgument System.Reflection.CustomAttributeNamedArgument::typedArgument
	CustomAttributeTypedArgument_t3774253372  ___typedArgument_0;
	// System.Reflection.MemberInfo System.Reflection.CustomAttributeNamedArgument::memberInfo
	MemberInfo_t * ___memberInfo_1;

public:
	inline static int32_t get_offset_of_typedArgument_0() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t3528441529, ___typedArgument_0)); }
	inline CustomAttributeTypedArgument_t3774253372  get_typedArgument_0() const { return ___typedArgument_0; }
	inline CustomAttributeTypedArgument_t3774253372 * get_address_of_typedArgument_0() { return &___typedArgument_0; }
	inline void set_typedArgument_0(CustomAttributeTypedArgument_t3774253372  value)
	{
		___typedArgument_0 = value;
	}

	inline static int32_t get_offset_of_memberInfo_1() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t3528441529, ___memberInfo_1)); }
	inline MemberInfo_t * get_memberInfo_1() const { return ___memberInfo_1; }
	inline MemberInfo_t ** get_address_of_memberInfo_1() { return &___memberInfo_1; }
	inline void set_memberInfo_1(MemberInfo_t * value)
	{
		___memberInfo_1 = value;
		Il2CppCodeGenWriteBarrier((&___memberInfo_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t3528441529_marshaled_pinvoke
{
	CustomAttributeTypedArgument_t3774253372_marshaled_pinvoke ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t3528441529_marshaled_com
{
	CustomAttributeTypedArgument_t3774253372_marshaled_com ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};
#endif // CUSTOMATTRIBUTENAMEDARGUMENT_T3528441529_H
#ifndef KEYVALUEPAIR_2_T2800967179_H
#define KEYVALUEPAIR_2_T2800967179_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>
struct  KeyValuePair_2_t2800967179 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	IntPtr_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2800967179, ___key_0)); }
	inline IntPtr_t get_key_0() const { return ___key_0; }
	inline IntPtr_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(IntPtr_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2800967179, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2800967179_H
#ifndef INVALIDOPERATIONEXCEPTION_T1236416966_H
#define INVALIDOPERATIONEXCEPTION_T1236416966_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t1236416966  : public SystemException_t3448793453
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T1236416966_H
#ifndef ENUMERATOR_T3765950849_H
#define ENUMERATOR_T3765950849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Reflection.CustomAttributeNamedArgument>
struct  Enumerator_t3765950849 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t540596783 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	CustomAttributeNamedArgument_t3528441529  ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t3765950849, ___l_0)); }
	inline List_1_t540596783 * get_l_0() const { return ___l_0; }
	inline List_1_t540596783 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t540596783 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t3765950849, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t3765950849, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3765950849, ___current_3)); }
	inline CustomAttributeNamedArgument_t3528441529  get_current_3() const { return ___current_3; }
	inline CustomAttributeNamedArgument_t3528441529 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(CustomAttributeNamedArgument_t3528441529  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3765950849_H
#ifndef OBJECTDISPOSEDEXCEPTION_T3447794223_H
#define OBJECTDISPOSEDEXCEPTION_T3447794223_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ObjectDisposedException
struct  ObjectDisposedException_t3447794223  : public InvalidOperationException_t1236416966
{
public:
	// System.String System.ObjectDisposedException::obj_name
	String_t* ___obj_name_12;
	// System.String System.ObjectDisposedException::msg
	String_t* ___msg_13;

public:
	inline static int32_t get_offset_of_obj_name_12() { return static_cast<int32_t>(offsetof(ObjectDisposedException_t3447794223, ___obj_name_12)); }
	inline String_t* get_obj_name_12() const { return ___obj_name_12; }
	inline String_t** get_address_of_obj_name_12() { return &___obj_name_12; }
	inline void set_obj_name_12(String_t* value)
	{
		___obj_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___obj_name_12), value);
	}

	inline static int32_t get_offset_of_msg_13() { return static_cast<int32_t>(offsetof(ObjectDisposedException_t3447794223, ___msg_13)); }
	inline String_t* get_msg_13() const { return ___msg_13; }
	inline String_t** get_address_of_msg_13() { return &___msg_13; }
	inline void set_msg_13(String_t* value)
	{
		___msg_13 = value;
		Il2CppCodeGenWriteBarrier((&___msg_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTDISPOSEDEXCEPTION_T3447794223_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t2036522715  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t2036522715  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t2036522715 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t2036522715  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3584076656* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t3040116056 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t3040116056 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t3040116056 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3584076656* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3584076656** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3584076656* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t3040116056 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t3040116056 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t3040116056 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t3040116056 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t3040116056 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t3040116056 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t3040116056 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t3040116056 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t3040116056 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
// System.String[]
struct StringU5BU5D_t3167005734  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t4197534633  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t2347633292  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Reflection.CustomAttributeNamedArgument[]
struct CustomAttributeNamedArgumentU5BU5D_t3717413444  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CustomAttributeNamedArgument_t3528441529  m_Items[1];

public:
	inline CustomAttributeNamedArgument_t3528441529  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CustomAttributeNamedArgument_t3528441529 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CustomAttributeNamedArgument_t3528441529  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline CustomAttributeNamedArgument_t3528441529  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CustomAttributeNamedArgument_t3528441529 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CustomAttributeNamedArgument_t3528441529  value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m3133097289_gshared (KeyValuePair_2_t1511605971 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m3572734064_gshared (KeyValuePair_2_t1511605971 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m4240913382_gshared (KeyValuePair_2_t1511605971 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m1933187229_gshared (KeyValuePair_2_t1511605971 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m1938677560_gshared (KeyValuePair_2_t1511605971 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3290504820_gshared (KeyValuePair_2_t1511605971 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m3934813899_gshared (KeyValuePair_2_t2800967179 * __this, IntPtr_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m1540641026_gshared (KeyValuePair_2_t2800967179 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2322175209_gshared (KeyValuePair_2_t2800967179 * __this, IntPtr_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Key()
extern "C"  IntPtr_t KeyValuePair_2_get_Key_m2558604912_gshared (KeyValuePair_2_t2800967179 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m2128417613_gshared (KeyValuePair_2_t2800967179 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3455846573_gshared (KeyValuePair_2_t2800967179 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m959697339_gshared (KeyValuePair_2_t2052968721 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m585382558_gshared (KeyValuePair_2_t2052968721 * __this, bool p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2586077035_gshared (KeyValuePair_2_t2052968721 * __this, RuntimeObject * ___key0, bool ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m3910377895_gshared (KeyValuePair_2_t2052968721 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Value()
extern "C"  bool KeyValuePair_2_get_Value_m732383173_gshared (KeyValuePair_2_t2052968721 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m701566334_gshared (KeyValuePair_2_t2052968721 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2331228333_gshared (KeyValuePair_2_t3939936029 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m4288188061_gshared (KeyValuePair_2_t3939936029 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3323650323_gshared (KeyValuePair_2_t3939936029 * __this, RuntimeObject * ___key0, int32_t ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m2985114563_gshared (KeyValuePair_2_t3939936029 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m1030922731_gshared (KeyValuePair_2_t3939936029 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1336537285_gshared (KeyValuePair_2_t3939936029 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m3348231287_gshared (KeyValuePair_2_t3956671926 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m169716909_gshared (KeyValuePair_2_t3956671926 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m938288638_gshared (KeyValuePair_2_t3956671926 * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m2368441583_gshared (KeyValuePair_2_t3956671926 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m1659292132_gshared (KeyValuePair_2_t3956671926 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3448316403_gshared (KeyValuePair_2_t3956671926 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::.ctor(System.Collections.Generic.List`1<T>)
extern "C"  void Enumerator__ctor_m2672779588_gshared (Enumerator_t2515569216 * __this, List_1_t3585182446 * ___l0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::VerifyState()
extern "C"  void Enumerator_VerifyState_m775571963_gshared (Enumerator_t2515569216 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::System.Collections.IEnumerator.Reset()
extern "C"  void Enumerator_System_Collections_IEnumerator_Reset_m2015339241_gshared (Enumerator_t2515569216 * __this, const RuntimeMethod* method);
// System.Object System.Collections.Generic.List`1/Enumerator<System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * Enumerator_System_Collections_IEnumerator_get_Current_m2458678745_gshared (Enumerator_t2515569216 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::Dispose()
extern "C"  void Enumerator_Dispose_m4135603717_gshared (Enumerator_t2515569216 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m1873374072_gshared (Enumerator_t2515569216 * __this, const RuntimeMethod* method);
// T System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
extern "C"  int32_t Enumerator_get_Current_m2605989203_gshared (Enumerator_t2515569216 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::.ctor(System.Collections.Generic.List`1<T>)
extern "C"  void Enumerator__ctor_m170247130_gshared (Enumerator_t2532305113 * __this, List_1_t3601918343 * ___l0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::VerifyState()
extern "C"  void Enumerator_VerifyState_m3345335743_gshared (Enumerator_t2532305113 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::System.Collections.IEnumerator.Reset()
extern "C"  void Enumerator_System_Collections_IEnumerator_Reset_m3701053827_gshared (Enumerator_t2532305113 * __this, const RuntimeMethod* method);
// System.Object System.Collections.Generic.List`1/Enumerator<System.Object>::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * Enumerator_System_Collections_IEnumerator_get_Current_m1071044116_gshared (Enumerator_t2532305113 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m1912687985_gshared (Enumerator_t2532305113 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m3992666936_gshared (Enumerator_t2532305113 * __this, const RuntimeMethod* method);
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C"  RuntimeObject * Enumerator_get_Current_m3083854290_gshared (Enumerator_t2532305113 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Reflection.CustomAttributeNamedArgument>::.ctor(System.Collections.Generic.List`1<T>)
extern "C"  void Enumerator__ctor_m2889899032_gshared (Enumerator_t3765950849 * __this, List_1_t540596783 * ___l0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Reflection.CustomAttributeNamedArgument>::VerifyState()
extern "C"  void Enumerator_VerifyState_m3458408358_gshared (Enumerator_t3765950849 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Reflection.CustomAttributeNamedArgument>::System.Collections.IEnumerator.Reset()
extern "C"  void Enumerator_System_Collections_IEnumerator_Reset_m46981596_gshared (Enumerator_t3765950849 * __this, const RuntimeMethod* method);
// System.Object System.Collections.Generic.List`1/Enumerator<System.Reflection.CustomAttributeNamedArgument>::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * Enumerator_System_Collections_IEnumerator_get_Current_m3239662190_gshared (Enumerator_t3765950849 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Reflection.CustomAttributeNamedArgument>::Dispose()
extern "C"  void Enumerator_Dispose_m28271419_gshared (Enumerator_t3765950849 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Reflection.CustomAttributeNamedArgument>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m2988345354_gshared (Enumerator_t3765950849 * __this, const RuntimeMethod* method);
// T System.Collections.Generic.List`1/Enumerator<System.Reflection.CustomAttributeNamedArgument>::get_Current()
extern "C"  CustomAttributeNamedArgument_t3528441529  Enumerator_get_Current_m3647706358_gshared (Enumerator_t3765950849 * __this, const RuntimeMethod* method);

// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m3133097289(__this, p0, method) ((  void (*) (KeyValuePair_2_t1511605971 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m3133097289_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m3572734064(__this, p0, method) ((  void (*) (KeyValuePair_2_t1511605971 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Value_m3572734064_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m4240913382(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t1511605971 *, int32_t, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m4240913382_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m1933187229(__this, method) ((  int32_t (*) (KeyValuePair_2_t1511605971 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1933187229_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m1938677560(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t1511605971 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m1938677560_gshared)(__this, method)
// System.String System.Int32::ToString()
extern "C"  String_t* Int32_ToString_m388392771 (int32_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String[])
extern "C"  String_t* String_Concat_m704289438 (RuntimeObject * __this /* static, unused */, StringU5BU5D_t3167005734* ___values0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::ToString()
#define KeyValuePair_2_ToString_m3290504820(__this, method) ((  String_t* (*) (KeyValuePair_2_t1511605971 *, const RuntimeMethod*))KeyValuePair_2_ToString_m3290504820_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m3934813899(__this, p0, method) ((  void (*) (KeyValuePair_2_t2800967179 *, IntPtr_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m3934813899_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m1540641026(__this, p0, method) ((  void (*) (KeyValuePair_2_t2800967179 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Value_m1540641026_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m2322175209(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t2800967179 *, IntPtr_t, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m2322175209_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m2558604912(__this, method) ((  IntPtr_t (*) (KeyValuePair_2_t2800967179 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m2558604912_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m2128417613(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t2800967179 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m2128417613_gshared)(__this, method)
// System.String System.IntPtr::ToString()
extern "C"  String_t* IntPtr_ToString_m862074768 (IntPtr_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::ToString()
#define KeyValuePair_2_ToString_m3455846573(__this, method) ((  String_t* (*) (KeyValuePair_2_t2800967179 *, const RuntimeMethod*))KeyValuePair_2_ToString_m3455846573_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m959697339(__this, p0, method) ((  void (*) (KeyValuePair_2_t2052968721 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Key_m959697339_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m585382558(__this, p0, method) ((  void (*) (KeyValuePair_2_t2052968721 *, bool, const RuntimeMethod*))KeyValuePair_2_set_Value_m585382558_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m2586077035(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t2052968721 *, RuntimeObject *, bool, const RuntimeMethod*))KeyValuePair_2__ctor_m2586077035_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Key()
#define KeyValuePair_2_get_Key_m3910377895(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t2052968721 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m3910377895_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Value()
#define KeyValuePair_2_get_Value_m732383173(__this, method) ((  bool (*) (KeyValuePair_2_t2052968721 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m732383173_gshared)(__this, method)
// System.String System.Boolean::ToString()
extern "C"  String_t* Boolean_ToString_m669530698 (bool* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::ToString()
#define KeyValuePair_2_ToString_m701566334(__this, method) ((  String_t* (*) (KeyValuePair_2_t2052968721 *, const RuntimeMethod*))KeyValuePair_2_ToString_m701566334_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m2331228333(__this, p0, method) ((  void (*) (KeyValuePair_2_t3939936029 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Key_m2331228333_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m4288188061(__this, p0, method) ((  void (*) (KeyValuePair_2_t3939936029 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Value_m4288188061_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m3323650323(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t3939936029 *, RuntimeObject *, int32_t, const RuntimeMethod*))KeyValuePair_2__ctor_m3323650323_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Key()
#define KeyValuePair_2_get_Key_m2985114563(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t3939936029 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m2985114563_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Value()
#define KeyValuePair_2_get_Value_m1030922731(__this, method) ((  int32_t (*) (KeyValuePair_2_t3939936029 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m1030922731_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::ToString()
#define KeyValuePair_2_ToString_m1336537285(__this, method) ((  String_t* (*) (KeyValuePair_2_t3939936029 *, const RuntimeMethod*))KeyValuePair_2_ToString_m1336537285_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m3348231287(__this, p0, method) ((  void (*) (KeyValuePair_2_t3956671926 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Key_m3348231287_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m169716909(__this, p0, method) ((  void (*) (KeyValuePair_2_t3956671926 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Value_m169716909_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m938288638(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t3956671926 *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m938288638_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m2368441583(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t3956671926 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m2368441583_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m1659292132(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t3956671926 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m1659292132_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::ToString()
#define KeyValuePair_2_ToString_m3448316403(__this, method) ((  String_t* (*) (KeyValuePair_2_t3956671926 *, const RuntimeMethod*))KeyValuePair_2_ToString_m3448316403_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::.ctor(System.Collections.Generic.List`1<T>)
#define Enumerator__ctor_m2672779588(__this, ___l0, method) ((  void (*) (Enumerator_t2515569216 *, List_1_t3585182446 *, const RuntimeMethod*))Enumerator__ctor_m2672779588_gshared)(__this, ___l0, method)
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::VerifyState()
#define Enumerator_VerifyState_m775571963(__this, method) ((  void (*) (Enumerator_t2515569216 *, const RuntimeMethod*))Enumerator_VerifyState_m775571963_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::System.Collections.IEnumerator.Reset()
#define Enumerator_System_Collections_IEnumerator_Reset_m2015339241(__this, method) ((  void (*) (Enumerator_t2515569216 *, const RuntimeMethod*))Enumerator_System_Collections_IEnumerator_Reset_m2015339241_gshared)(__this, method)
// System.Void System.InvalidOperationException::.ctor()
extern "C"  void InvalidOperationException__ctor_m3530364982 (InvalidOperationException_t1236416966 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.List`1/Enumerator<System.Int32>::System.Collections.IEnumerator.get_Current()
#define Enumerator_System_Collections_IEnumerator_get_Current_m2458678745(__this, method) ((  RuntimeObject * (*) (Enumerator_t2515569216 *, const RuntimeMethod*))Enumerator_System_Collections_IEnumerator_get_Current_m2458678745_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::Dispose()
#define Enumerator_Dispose_m4135603717(__this, method) ((  void (*) (Enumerator_t2515569216 *, const RuntimeMethod*))Enumerator_Dispose_m4135603717_gshared)(__this, method)
// System.Type System.Object::GetType()
extern "C"  Type_t * Object_GetType_m1911167021 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ObjectDisposedException::.ctor(System.String)
extern "C"  void ObjectDisposedException__ctor_m2978407393 (ObjectDisposedException_t3447794223 * __this, String_t* ___objectName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C"  void InvalidOperationException__ctor_m257069250 (InvalidOperationException_t1236416966 * __this, String_t* ___message0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
#define Enumerator_MoveNext_m1873374072(__this, method) ((  bool (*) (Enumerator_t2515569216 *, const RuntimeMethod*))Enumerator_MoveNext_m1873374072_gshared)(__this, method)
// T System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
#define Enumerator_get_Current_m2605989203(__this, method) ((  int32_t (*) (Enumerator_t2515569216 *, const RuntimeMethod*))Enumerator_get_Current_m2605989203_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::.ctor(System.Collections.Generic.List`1<T>)
#define Enumerator__ctor_m170247130(__this, ___l0, method) ((  void (*) (Enumerator_t2532305113 *, List_1_t3601918343 *, const RuntimeMethod*))Enumerator__ctor_m170247130_gshared)(__this, ___l0, method)
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::VerifyState()
#define Enumerator_VerifyState_m3345335743(__this, method) ((  void (*) (Enumerator_t2532305113 *, const RuntimeMethod*))Enumerator_VerifyState_m3345335743_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::System.Collections.IEnumerator.Reset()
#define Enumerator_System_Collections_IEnumerator_Reset_m3701053827(__this, method) ((  void (*) (Enumerator_t2532305113 *, const RuntimeMethod*))Enumerator_System_Collections_IEnumerator_Reset_m3701053827_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1/Enumerator<System.Object>::System.Collections.IEnumerator.get_Current()
#define Enumerator_System_Collections_IEnumerator_get_Current_m1071044116(__this, method) ((  RuntimeObject * (*) (Enumerator_t2532305113 *, const RuntimeMethod*))Enumerator_System_Collections_IEnumerator_get_Current_m1071044116_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
#define Enumerator_Dispose_m1912687985(__this, method) ((  void (*) (Enumerator_t2532305113 *, const RuntimeMethod*))Enumerator_Dispose_m1912687985_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
#define Enumerator_MoveNext_m3992666936(__this, method) ((  bool (*) (Enumerator_t2532305113 *, const RuntimeMethod*))Enumerator_MoveNext_m3992666936_gshared)(__this, method)
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
#define Enumerator_get_Current_m3083854290(__this, method) ((  RuntimeObject * (*) (Enumerator_t2532305113 *, const RuntimeMethod*))Enumerator_get_Current_m3083854290_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<System.Reflection.CustomAttributeNamedArgument>::.ctor(System.Collections.Generic.List`1<T>)
#define Enumerator__ctor_m2889899032(__this, ___l0, method) ((  void (*) (Enumerator_t3765950849 *, List_1_t540596783 *, const RuntimeMethod*))Enumerator__ctor_m2889899032_gshared)(__this, ___l0, method)
// System.Void System.Collections.Generic.List`1/Enumerator<System.Reflection.CustomAttributeNamedArgument>::VerifyState()
#define Enumerator_VerifyState_m3458408358(__this, method) ((  void (*) (Enumerator_t3765950849 *, const RuntimeMethod*))Enumerator_VerifyState_m3458408358_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<System.Reflection.CustomAttributeNamedArgument>::System.Collections.IEnumerator.Reset()
#define Enumerator_System_Collections_IEnumerator_Reset_m46981596(__this, method) ((  void (*) (Enumerator_t3765950849 *, const RuntimeMethod*))Enumerator_System_Collections_IEnumerator_Reset_m46981596_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1/Enumerator<System.Reflection.CustomAttributeNamedArgument>::System.Collections.IEnumerator.get_Current()
#define Enumerator_System_Collections_IEnumerator_get_Current_m3239662190(__this, method) ((  RuntimeObject * (*) (Enumerator_t3765950849 *, const RuntimeMethod*))Enumerator_System_Collections_IEnumerator_get_Current_m3239662190_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<System.Reflection.CustomAttributeNamedArgument>::Dispose()
#define Enumerator_Dispose_m28271419(__this, method) ((  void (*) (Enumerator_t3765950849 *, const RuntimeMethod*))Enumerator_Dispose_m28271419_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Reflection.CustomAttributeNamedArgument>::MoveNext()
#define Enumerator_MoveNext_m2988345354(__this, method) ((  bool (*) (Enumerator_t3765950849 *, const RuntimeMethod*))Enumerator_MoveNext_m2988345354_gshared)(__this, method)
// T System.Collections.Generic.List`1/Enumerator<System.Reflection.CustomAttributeNamedArgument>::get_Current()
#define Enumerator_get_Current_m3647706358(__this, method) ((  CustomAttributeNamedArgument_t3528441529  (*) (Enumerator_t3765950849 *, const RuntimeMethod*))Enumerator_get_Current_m3647706358_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m4240913382_gshared (KeyValuePair_2_t1511605971 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m3133097289((KeyValuePair_2_t1511605971 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RuntimeObject * L_1 = ___value1;
		KeyValuePair_2_set_Value_m3572734064((KeyValuePair_2_t1511605971 *)__this, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m4240913382_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t1511605971 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1511605971 *>(__this + 1);
	KeyValuePair_2__ctor_m4240913382(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m1933187229_gshared (KeyValuePair_2_t1511605971 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m1933187229_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1511605971 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1511605971 *>(__this + 1);
	return KeyValuePair_2_get_Key_m1933187229(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m3133097289_gshared (KeyValuePair_2_t1511605971 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m3133097289_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1511605971 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1511605971 *>(__this + 1);
	KeyValuePair_2_set_Key_m3133097289(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m1938677560_gshared (KeyValuePair_2_t1511605971 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m1938677560_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1511605971 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1511605971 *>(__this + 1);
	return KeyValuePair_2_get_Value_m1938677560(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m3572734064_gshared (KeyValuePair_2_t1511605971 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m3572734064_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1511605971 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1511605971 *>(__this + 1);
	KeyValuePair_2_set_Value_m3572734064(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3290504820_gshared (KeyValuePair_2_t1511605971 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m3290504820_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t3167005734* G_B2_1 = NULL;
	StringU5BU5D_t3167005734* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t3167005734* G_B1_1 = NULL;
	StringU5BU5D_t3167005734* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t3167005734* G_B3_2 = NULL;
	StringU5BU5D_t3167005734* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t3167005734* G_B5_1 = NULL;
	StringU5BU5D_t3167005734* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t3167005734* G_B4_1 = NULL;
	StringU5BU5D_t3167005734* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t3167005734* G_B6_2 = NULL;
	StringU5BU5D_t3167005734* G_B6_3 = NULL;
	{
		StringU5BU5D_t3167005734* L_0 = (StringU5BU5D_t3167005734*)((StringU5BU5D_t3167005734*)SZArrayNew(StringU5BU5D_t3167005734_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral4173083846);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4173083846);
		StringU5BU5D_t3167005734* L_1 = (StringU5BU5D_t3167005734*)L_0;
		int32_t L_2 = KeyValuePair_2_get_Key_m1933187229((KeyValuePair_2_t1511605971 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		int32_t L_3 = KeyValuePair_2_get_Key_m1933187229((KeyValuePair_2_t1511605971 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (int32_t)L_3;
		String_t* L_4 = Int32_ToString_m388392771((int32_t*)(&V_0), /*hidden argument*/NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t3167005734* L_6 = (StringU5BU5D_t3167005734*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral383949385);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral383949385);
		StringU5BU5D_t3167005734* L_7 = (StringU5BU5D_t3167005734*)L_6;
		RuntimeObject * L_8 = KeyValuePair_2_get_Value_m1938677560((KeyValuePair_2_t1511605971 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
		if (!L_8)
		{
			G_B5_0 = 3;
			G_B5_1 = L_7;
			G_B5_2 = L_7;
			goto IL_0072;
		}
	}
	{
		RuntimeObject * L_9 = KeyValuePair_2_get_Value_m1938677560((KeyValuePair_2_t1511605971 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (RuntimeObject *)L_9;
		NullCheck((RuntimeObject *)(*(&V_1)));
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_1)));
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t3167005734* L_12 = (StringU5BU5D_t3167005734*)G_B6_3;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral1835712221);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1835712221);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m704289438(NULL /*static, unused*/, (StringU5BU5D_t3167005734*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m3290504820_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1511605971 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1511605971 *>(__this + 1);
	return KeyValuePair_2_ToString_m3290504820(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2322175209_gshared (KeyValuePair_2_t2800967179 * __this, IntPtr_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m3934813899((KeyValuePair_2_t2800967179 *)__this, (IntPtr_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RuntimeObject * L_1 = ___value1;
		KeyValuePair_2_set_Value_m1540641026((KeyValuePair_2_t2800967179 *)__this, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m2322175209_AdjustorThunk (RuntimeObject * __this, IntPtr_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t2800967179 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2800967179 *>(__this + 1);
	KeyValuePair_2__ctor_m2322175209(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Key()
extern "C"  IntPtr_t KeyValuePair_2_get_Key_m2558604912_gshared (KeyValuePair_2_t2800967179 * __this, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = (IntPtr_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  IntPtr_t KeyValuePair_2_get_Key_m2558604912_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2800967179 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2800967179 *>(__this + 1);
	return KeyValuePair_2_get_Key_m2558604912(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m3934813899_gshared (KeyValuePair_2_t2800967179 * __this, IntPtr_t ___value0, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m3934813899_AdjustorThunk (RuntimeObject * __this, IntPtr_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2800967179 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2800967179 *>(__this + 1);
	KeyValuePair_2_set_Key_m3934813899(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m2128417613_gshared (KeyValuePair_2_t2800967179 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m2128417613_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2800967179 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2800967179 *>(__this + 1);
	return KeyValuePair_2_get_Value_m2128417613(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m1540641026_gshared (KeyValuePair_2_t2800967179 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m1540641026_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2800967179 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2800967179 *>(__this + 1);
	KeyValuePair_2_set_Value_m1540641026(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3455846573_gshared (KeyValuePair_2_t2800967179 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m3455846573_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IntPtr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	RuntimeObject * V_1 = NULL;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t3167005734* G_B2_1 = NULL;
	StringU5BU5D_t3167005734* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t3167005734* G_B1_1 = NULL;
	StringU5BU5D_t3167005734* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t3167005734* G_B3_2 = NULL;
	StringU5BU5D_t3167005734* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t3167005734* G_B5_1 = NULL;
	StringU5BU5D_t3167005734* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t3167005734* G_B4_1 = NULL;
	StringU5BU5D_t3167005734* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t3167005734* G_B6_2 = NULL;
	StringU5BU5D_t3167005734* G_B6_3 = NULL;
	{
		StringU5BU5D_t3167005734* L_0 = (StringU5BU5D_t3167005734*)((StringU5BU5D_t3167005734*)SZArrayNew(StringU5BU5D_t3167005734_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral4173083846);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4173083846);
		StringU5BU5D_t3167005734* L_1 = (StringU5BU5D_t3167005734*)L_0;
		IntPtr_t L_2 = KeyValuePair_2_get_Key_m2558604912((KeyValuePair_2_t2800967179 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		IntPtr_t L_3 = KeyValuePair_2_get_Key_m2558604912((KeyValuePair_2_t2800967179 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (IntPtr_t)L_3;
		String_t* L_4 = IntPtr_ToString_m862074768((IntPtr_t*)(&V_0), /*hidden argument*/NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t3167005734* L_6 = (StringU5BU5D_t3167005734*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral383949385);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral383949385);
		StringU5BU5D_t3167005734* L_7 = (StringU5BU5D_t3167005734*)L_6;
		RuntimeObject * L_8 = KeyValuePair_2_get_Value_m2128417613((KeyValuePair_2_t2800967179 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
		if (!L_8)
		{
			G_B5_0 = 3;
			G_B5_1 = L_7;
			G_B5_2 = L_7;
			goto IL_0072;
		}
	}
	{
		RuntimeObject * L_9 = KeyValuePair_2_get_Value_m2128417613((KeyValuePair_2_t2800967179 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (RuntimeObject *)L_9;
		NullCheck((RuntimeObject *)(*(&V_1)));
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_1)));
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t3167005734* L_12 = (StringU5BU5D_t3167005734*)G_B6_3;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral1835712221);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1835712221);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m704289438(NULL /*static, unused*/, (StringU5BU5D_t3167005734*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m3455846573_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2800967179 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2800967179 *>(__this + 1);
	return KeyValuePair_2_ToString_m3455846573(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2586077035_gshared (KeyValuePair_2_t2052968721 * __this, RuntimeObject * ___key0, bool ___value1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___key0;
		KeyValuePair_2_set_Key_m959697339((KeyValuePair_2_t2052968721 *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		bool L_1 = ___value1;
		KeyValuePair_2_set_Value_m585382558((KeyValuePair_2_t2052968721 *)__this, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m2586077035_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___key0, bool ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t2052968721 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2052968721 *>(__this + 1);
	KeyValuePair_2__ctor_m2586077035(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m3910377895_gshared (KeyValuePair_2_t2052968721 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m3910377895_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2052968721 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2052968721 *>(__this + 1);
	return KeyValuePair_2_get_Key_m3910377895(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m959697339_gshared (KeyValuePair_2_t2052968721 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m959697339_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2052968721 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2052968721 *>(__this + 1);
	KeyValuePair_2_set_Key_m959697339(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Value()
extern "C"  bool KeyValuePair_2_get_Value_m732383173_gshared (KeyValuePair_2_t2052968721 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_value_1();
		return L_0;
	}
}
extern "C"  bool KeyValuePair_2_get_Value_m732383173_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2052968721 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2052968721 *>(__this + 1);
	return KeyValuePair_2_get_Value_m732383173(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m585382558_gshared (KeyValuePair_2_t2052968721 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m585382558_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2052968721 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2052968721 *>(__this + 1);
	KeyValuePair_2_set_Value_m585382558(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m701566334_gshared (KeyValuePair_2_t2052968721 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m701566334_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t3167005734* G_B2_1 = NULL;
	StringU5BU5D_t3167005734* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t3167005734* G_B1_1 = NULL;
	StringU5BU5D_t3167005734* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t3167005734* G_B3_2 = NULL;
	StringU5BU5D_t3167005734* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t3167005734* G_B5_1 = NULL;
	StringU5BU5D_t3167005734* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t3167005734* G_B4_1 = NULL;
	StringU5BU5D_t3167005734* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t3167005734* G_B6_2 = NULL;
	StringU5BU5D_t3167005734* G_B6_3 = NULL;
	{
		StringU5BU5D_t3167005734* L_0 = (StringU5BU5D_t3167005734*)((StringU5BU5D_t3167005734*)SZArrayNew(StringU5BU5D_t3167005734_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral4173083846);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4173083846);
		StringU5BU5D_t3167005734* L_1 = (StringU5BU5D_t3167005734*)L_0;
		RuntimeObject * L_2 = KeyValuePair_2_get_Key_m3910377895((KeyValuePair_2_t2052968721 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_2)
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0039;
		}
	}
	{
		RuntimeObject * L_3 = KeyValuePair_2_get_Key_m3910377895((KeyValuePair_2_t2052968721 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (RuntimeObject *)L_3;
		NullCheck((RuntimeObject *)(*(&V_0)));
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_0)));
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t3167005734* L_6 = (StringU5BU5D_t3167005734*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral383949385);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral383949385);
		StringU5BU5D_t3167005734* L_7 = (StringU5BU5D_t3167005734*)L_6;
		bool L_8 = KeyValuePair_2_get_Value_m732383173((KeyValuePair_2_t2052968721 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		bool L_9 = KeyValuePair_2_get_Value_m732383173((KeyValuePair_2_t2052968721 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (bool)L_9;
		String_t* L_10 = Boolean_ToString_m669530698((bool*)(&V_1), /*hidden argument*/NULL);
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t3167005734* L_12 = (StringU5BU5D_t3167005734*)G_B6_3;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral1835712221);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1835712221);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m704289438(NULL /*static, unused*/, (StringU5BU5D_t3167005734*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m701566334_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2052968721 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2052968721 *>(__this + 1);
	return KeyValuePair_2_ToString_m701566334(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3323650323_gshared (KeyValuePair_2_t3939936029 * __this, RuntimeObject * ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___key0;
		KeyValuePair_2_set_Key_m2331228333((KeyValuePair_2_t3939936029 *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_1 = ___value1;
		KeyValuePair_2_set_Value_m4288188061((KeyValuePair_2_t3939936029 *)__this, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m3323650323_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t3939936029 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3939936029 *>(__this + 1);
	KeyValuePair_2__ctor_m3323650323(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m2985114563_gshared (KeyValuePair_2_t3939936029 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m2985114563_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3939936029 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3939936029 *>(__this + 1);
	return KeyValuePair_2_get_Key_m2985114563(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2331228333_gshared (KeyValuePair_2_t3939936029 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m2331228333_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t3939936029 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3939936029 *>(__this + 1);
	KeyValuePair_2_set_Key_m2331228333(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m1030922731_gshared (KeyValuePair_2_t3939936029 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_1();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Value_m1030922731_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3939936029 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3939936029 *>(__this + 1);
	return KeyValuePair_2_get_Value_m1030922731(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m4288188061_gshared (KeyValuePair_2_t3939936029 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m4288188061_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t3939936029 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3939936029 *>(__this + 1);
	KeyValuePair_2_set_Value_m4288188061(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1336537285_gshared (KeyValuePair_2_t3939936029 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m1336537285_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t3167005734* G_B2_1 = NULL;
	StringU5BU5D_t3167005734* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t3167005734* G_B1_1 = NULL;
	StringU5BU5D_t3167005734* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t3167005734* G_B3_2 = NULL;
	StringU5BU5D_t3167005734* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t3167005734* G_B5_1 = NULL;
	StringU5BU5D_t3167005734* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t3167005734* G_B4_1 = NULL;
	StringU5BU5D_t3167005734* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t3167005734* G_B6_2 = NULL;
	StringU5BU5D_t3167005734* G_B6_3 = NULL;
	{
		StringU5BU5D_t3167005734* L_0 = (StringU5BU5D_t3167005734*)((StringU5BU5D_t3167005734*)SZArrayNew(StringU5BU5D_t3167005734_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral4173083846);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4173083846);
		StringU5BU5D_t3167005734* L_1 = (StringU5BU5D_t3167005734*)L_0;
		RuntimeObject * L_2 = KeyValuePair_2_get_Key_m2985114563((KeyValuePair_2_t3939936029 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_2)
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0039;
		}
	}
	{
		RuntimeObject * L_3 = KeyValuePair_2_get_Key_m2985114563((KeyValuePair_2_t3939936029 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (RuntimeObject *)L_3;
		NullCheck((RuntimeObject *)(*(&V_0)));
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_0)));
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t3167005734* L_6 = (StringU5BU5D_t3167005734*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral383949385);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral383949385);
		StringU5BU5D_t3167005734* L_7 = (StringU5BU5D_t3167005734*)L_6;
		int32_t L_8 = KeyValuePair_2_get_Value_m1030922731((KeyValuePair_2_t3939936029 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		int32_t L_9 = KeyValuePair_2_get_Value_m1030922731((KeyValuePair_2_t3939936029 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (int32_t)L_9;
		String_t* L_10 = Int32_ToString_m388392771((int32_t*)(&V_1), /*hidden argument*/NULL);
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t3167005734* L_12 = (StringU5BU5D_t3167005734*)G_B6_3;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral1835712221);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1835712221);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m704289438(NULL /*static, unused*/, (StringU5BU5D_t3167005734*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m1336537285_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3939936029 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3939936029 *>(__this + 1);
	return KeyValuePair_2_ToString_m1336537285(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m938288638_gshared (KeyValuePair_2_t3956671926 * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___key0;
		KeyValuePair_2_set_Key_m3348231287((KeyValuePair_2_t3956671926 *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RuntimeObject * L_1 = ___value1;
		KeyValuePair_2_set_Value_m169716909((KeyValuePair_2_t3956671926 *)__this, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m938288638_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t3956671926 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3956671926 *>(__this + 1);
	KeyValuePair_2__ctor_m938288638(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m2368441583_gshared (KeyValuePair_2_t3956671926 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m2368441583_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3956671926 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3956671926 *>(__this + 1);
	return KeyValuePair_2_get_Key_m2368441583(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m3348231287_gshared (KeyValuePair_2_t3956671926 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m3348231287_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t3956671926 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3956671926 *>(__this + 1);
	KeyValuePair_2_set_Key_m3348231287(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m1659292132_gshared (KeyValuePair_2_t3956671926 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m1659292132_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3956671926 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3956671926 *>(__this + 1);
	return KeyValuePair_2_get_Value_m1659292132(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m169716909_gshared (KeyValuePair_2_t3956671926 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m169716909_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t3956671926 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3956671926 *>(__this + 1);
	KeyValuePair_2_set_Value_m169716909(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3448316403_gshared (KeyValuePair_2_t3956671926 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m3448316403_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t3167005734* G_B2_1 = NULL;
	StringU5BU5D_t3167005734* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t3167005734* G_B1_1 = NULL;
	StringU5BU5D_t3167005734* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t3167005734* G_B3_2 = NULL;
	StringU5BU5D_t3167005734* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t3167005734* G_B5_1 = NULL;
	StringU5BU5D_t3167005734* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t3167005734* G_B4_1 = NULL;
	StringU5BU5D_t3167005734* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t3167005734* G_B6_2 = NULL;
	StringU5BU5D_t3167005734* G_B6_3 = NULL;
	{
		StringU5BU5D_t3167005734* L_0 = (StringU5BU5D_t3167005734*)((StringU5BU5D_t3167005734*)SZArrayNew(StringU5BU5D_t3167005734_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral4173083846);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4173083846);
		StringU5BU5D_t3167005734* L_1 = (StringU5BU5D_t3167005734*)L_0;
		RuntimeObject * L_2 = KeyValuePair_2_get_Key_m2368441583((KeyValuePair_2_t3956671926 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_2)
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0039;
		}
	}
	{
		RuntimeObject * L_3 = KeyValuePair_2_get_Key_m2368441583((KeyValuePair_2_t3956671926 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (RuntimeObject *)L_3;
		NullCheck((RuntimeObject *)(*(&V_0)));
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_0)));
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t3167005734* L_6 = (StringU5BU5D_t3167005734*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral383949385);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral383949385);
		StringU5BU5D_t3167005734* L_7 = (StringU5BU5D_t3167005734*)L_6;
		RuntimeObject * L_8 = KeyValuePair_2_get_Value_m1659292132((KeyValuePair_2_t3956671926 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
		if (!L_8)
		{
			G_B5_0 = 3;
			G_B5_1 = L_7;
			G_B5_2 = L_7;
			goto IL_0072;
		}
	}
	{
		RuntimeObject * L_9 = KeyValuePair_2_get_Value_m1659292132((KeyValuePair_2_t3956671926 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (RuntimeObject *)L_9;
		NullCheck((RuntimeObject *)(*(&V_1)));
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_1)));
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t3167005734* L_12 = (StringU5BU5D_t3167005734*)G_B6_3;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral1835712221);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1835712221);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m704289438(NULL /*static, unused*/, (StringU5BU5D_t3167005734*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m3448316403_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3956671926 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3956671926 *>(__this + 1);
	return KeyValuePair_2_ToString_m3448316403(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::.ctor(System.Collections.Generic.List`1<T>)
extern "C"  void Enumerator__ctor_m2672779588_gshared (Enumerator_t2515569216 * __this, List_1_t3585182446 * ___l0, const RuntimeMethod* method)
{
	{
		List_1_t3585182446 * L_0 = ___l0;
		__this->set_l_0(L_0);
		List_1_t3585182446 * L_1 = ___l0;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)L_1->get__version_2();
		__this->set_ver_2(L_2);
		return;
	}
}
extern "C"  void Enumerator__ctor_m2672779588_AdjustorThunk (RuntimeObject * __this, List_1_t3585182446 * ___l0, const RuntimeMethod* method)
{
	Enumerator_t2515569216 * _thisAdjusted = reinterpret_cast<Enumerator_t2515569216 *>(__this + 1);
	Enumerator__ctor_m2672779588(_thisAdjusted, ___l0, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::System.Collections.IEnumerator.Reset()
extern "C"  void Enumerator_System_Collections_IEnumerator_Reset_m2015339241_gshared (Enumerator_t2515569216 * __this, const RuntimeMethod* method)
{
	{
		Enumerator_VerifyState_m775571963((Enumerator_t2515569216 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->set_next_1(0);
		return;
	}
}
extern "C"  void Enumerator_System_Collections_IEnumerator_Reset_m2015339241_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Enumerator_t2515569216 * _thisAdjusted = reinterpret_cast<Enumerator_t2515569216 *>(__this + 1);
	Enumerator_System_Collections_IEnumerator_Reset_m2015339241(_thisAdjusted, method);
}
// System.Object System.Collections.Generic.List`1/Enumerator<System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * Enumerator_System_Collections_IEnumerator_get_Current_m2458678745_gshared (Enumerator_t2515569216 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerator_System_Collections_IEnumerator_get_Current_m2458678745_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Enumerator_VerifyState_m775571963((Enumerator_t2515569216 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (int32_t)__this->get_next_1();
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t1236416966 * L_1 = (InvalidOperationException_t1236416966 *)il2cpp_codegen_object_new(InvalidOperationException_t1236416966_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m3530364982(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0018:
	{
		int32_t L_2 = (int32_t)__this->get_current_3();
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_3);
		return L_4;
	}
}
extern "C"  RuntimeObject * Enumerator_System_Collections_IEnumerator_get_Current_m2458678745_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Enumerator_t2515569216 * _thisAdjusted = reinterpret_cast<Enumerator_t2515569216 *>(__this + 1);
	return Enumerator_System_Collections_IEnumerator_get_Current_m2458678745(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::Dispose()
extern "C"  void Enumerator_Dispose_m4135603717_gshared (Enumerator_t2515569216 * __this, const RuntimeMethod* method)
{
	{
		__this->set_l_0((List_1_t3585182446 *)NULL);
		return;
	}
}
extern "C"  void Enumerator_Dispose_m4135603717_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Enumerator_t2515569216 * _thisAdjusted = reinterpret_cast<Enumerator_t2515569216 *>(__this + 1);
	Enumerator_Dispose_m4135603717(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::VerifyState()
extern "C"  void Enumerator_VerifyState_m775571963_gshared (Enumerator_t2515569216 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerator_VerifyState_m775571963_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t3585182446 * L_0 = (List_1_t3585182446 *)__this->get_l_0();
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		Enumerator_t2515569216  L_1 = (*(Enumerator_t2515569216 *)__this);
		RuntimeObject * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck((RuntimeObject *)L_2);
		Type_t * L_3 = Object_GetType_m1911167021((RuntimeObject *)L_2, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, (Type_t *)L_3);
		ObjectDisposedException_t3447794223 * L_5 = (ObjectDisposedException_t3447794223 *)il2cpp_codegen_object_new(ObjectDisposedException_t3447794223_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m2978407393(L_5, (String_t*)L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5);
	}

IL_0026:
	{
		int32_t L_6 = (int32_t)__this->get_ver_2();
		List_1_t3585182446 * L_7 = (List_1_t3585182446 *)__this->get_l_0();
		NullCheck(L_7);
		int32_t L_8 = (int32_t)L_7->get__version_2();
		if ((((int32_t)L_6) == ((int32_t)L_8)))
		{
			goto IL_0047;
		}
	}
	{
		InvalidOperationException_t1236416966 * L_9 = (InvalidOperationException_t1236416966 *)il2cpp_codegen_object_new(InvalidOperationException_t1236416966_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m257069250(L_9, (String_t*)_stringLiteral4156302984, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9);
	}

IL_0047:
	{
		return;
	}
}
extern "C"  void Enumerator_VerifyState_m775571963_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Enumerator_t2515569216 * _thisAdjusted = reinterpret_cast<Enumerator_t2515569216 *>(__this + 1);
	Enumerator_VerifyState_m775571963(_thisAdjusted, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m1873374072_gshared (Enumerator_t2515569216 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		Enumerator_VerifyState_m775571963((Enumerator_t2515569216 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (int32_t)__this->get_next_1();
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		int32_t L_1 = (int32_t)__this->get_next_1();
		List_1_t3585182446 * L_2 = (List_1_t3585182446 *)__this->get_l_0();
		NullCheck(L_2);
		int32_t L_3 = (int32_t)L_2->get__size_1();
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_0053;
		}
	}
	{
		List_1_t3585182446 * L_4 = (List_1_t3585182446 *)__this->get_l_0();
		NullCheck(L_4);
		Int32U5BU5D_t4197534633* L_5 = (Int32U5BU5D_t4197534633*)L_4->get__items_0();
		int32_t L_6 = (int32_t)__this->get_next_1();
		int32_t L_7 = (int32_t)L_6;
		V_0 = (int32_t)L_7;
		__this->set_next_1(((int32_t)((int32_t)L_7+(int32_t)1)));
		int32_t L_8 = V_0;
		NullCheck(L_5);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		__this->set_current_3(L_10);
		return (bool)1;
	}

IL_0053:
	{
		__this->set_next_1((-1));
		return (bool)0;
	}
}
extern "C"  bool Enumerator_MoveNext_m1873374072_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Enumerator_t2515569216 * _thisAdjusted = reinterpret_cast<Enumerator_t2515569216 *>(__this + 1);
	return Enumerator_MoveNext_m1873374072(_thisAdjusted, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
extern "C"  int32_t Enumerator_get_Current_m2605989203_gshared (Enumerator_t2515569216 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_current_3();
		return L_0;
	}
}
extern "C"  int32_t Enumerator_get_Current_m2605989203_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Enumerator_t2515569216 * _thisAdjusted = reinterpret_cast<Enumerator_t2515569216 *>(__this + 1);
	return Enumerator_get_Current_m2605989203(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::.ctor(System.Collections.Generic.List`1<T>)
extern "C"  void Enumerator__ctor_m170247130_gshared (Enumerator_t2532305113 * __this, List_1_t3601918343 * ___l0, const RuntimeMethod* method)
{
	{
		List_1_t3601918343 * L_0 = ___l0;
		__this->set_l_0(L_0);
		List_1_t3601918343 * L_1 = ___l0;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)L_1->get__version_2();
		__this->set_ver_2(L_2);
		return;
	}
}
extern "C"  void Enumerator__ctor_m170247130_AdjustorThunk (RuntimeObject * __this, List_1_t3601918343 * ___l0, const RuntimeMethod* method)
{
	Enumerator_t2532305113 * _thisAdjusted = reinterpret_cast<Enumerator_t2532305113 *>(__this + 1);
	Enumerator__ctor_m170247130(_thisAdjusted, ___l0, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::System.Collections.IEnumerator.Reset()
extern "C"  void Enumerator_System_Collections_IEnumerator_Reset_m3701053827_gshared (Enumerator_t2532305113 * __this, const RuntimeMethod* method)
{
	{
		Enumerator_VerifyState_m3345335743((Enumerator_t2532305113 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->set_next_1(0);
		return;
	}
}
extern "C"  void Enumerator_System_Collections_IEnumerator_Reset_m3701053827_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Enumerator_t2532305113 * _thisAdjusted = reinterpret_cast<Enumerator_t2532305113 *>(__this + 1);
	Enumerator_System_Collections_IEnumerator_Reset_m3701053827(_thisAdjusted, method);
}
// System.Object System.Collections.Generic.List`1/Enumerator<System.Object>::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * Enumerator_System_Collections_IEnumerator_get_Current_m1071044116_gshared (Enumerator_t2532305113 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerator_System_Collections_IEnumerator_get_Current_m1071044116_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Enumerator_VerifyState_m3345335743((Enumerator_t2532305113 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (int32_t)__this->get_next_1();
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t1236416966 * L_1 = (InvalidOperationException_t1236416966 *)il2cpp_codegen_object_new(InvalidOperationException_t1236416966_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m3530364982(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0018:
	{
		RuntimeObject * L_2 = (RuntimeObject *)__this->get_current_3();
		return L_2;
	}
}
extern "C"  RuntimeObject * Enumerator_System_Collections_IEnumerator_get_Current_m1071044116_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Enumerator_t2532305113 * _thisAdjusted = reinterpret_cast<Enumerator_t2532305113 *>(__this + 1);
	return Enumerator_System_Collections_IEnumerator_get_Current_m1071044116(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m1912687985_gshared (Enumerator_t2532305113 * __this, const RuntimeMethod* method)
{
	{
		__this->set_l_0((List_1_t3601918343 *)NULL);
		return;
	}
}
extern "C"  void Enumerator_Dispose_m1912687985_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Enumerator_t2532305113 * _thisAdjusted = reinterpret_cast<Enumerator_t2532305113 *>(__this + 1);
	Enumerator_Dispose_m1912687985(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::VerifyState()
extern "C"  void Enumerator_VerifyState_m3345335743_gshared (Enumerator_t2532305113 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerator_VerifyState_m3345335743_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t3601918343 * L_0 = (List_1_t3601918343 *)__this->get_l_0();
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		Enumerator_t2532305113  L_1 = (*(Enumerator_t2532305113 *)__this);
		RuntimeObject * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck((RuntimeObject *)L_2);
		Type_t * L_3 = Object_GetType_m1911167021((RuntimeObject *)L_2, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, (Type_t *)L_3);
		ObjectDisposedException_t3447794223 * L_5 = (ObjectDisposedException_t3447794223 *)il2cpp_codegen_object_new(ObjectDisposedException_t3447794223_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m2978407393(L_5, (String_t*)L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5);
	}

IL_0026:
	{
		int32_t L_6 = (int32_t)__this->get_ver_2();
		List_1_t3601918343 * L_7 = (List_1_t3601918343 *)__this->get_l_0();
		NullCheck(L_7);
		int32_t L_8 = (int32_t)L_7->get__version_2();
		if ((((int32_t)L_6) == ((int32_t)L_8)))
		{
			goto IL_0047;
		}
	}
	{
		InvalidOperationException_t1236416966 * L_9 = (InvalidOperationException_t1236416966 *)il2cpp_codegen_object_new(InvalidOperationException_t1236416966_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m257069250(L_9, (String_t*)_stringLiteral4156302984, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9);
	}

IL_0047:
	{
		return;
	}
}
extern "C"  void Enumerator_VerifyState_m3345335743_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Enumerator_t2532305113 * _thisAdjusted = reinterpret_cast<Enumerator_t2532305113 *>(__this + 1);
	Enumerator_VerifyState_m3345335743(_thisAdjusted, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m3992666936_gshared (Enumerator_t2532305113 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		Enumerator_VerifyState_m3345335743((Enumerator_t2532305113 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (int32_t)__this->get_next_1();
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		int32_t L_1 = (int32_t)__this->get_next_1();
		List_1_t3601918343 * L_2 = (List_1_t3601918343 *)__this->get_l_0();
		NullCheck(L_2);
		int32_t L_3 = (int32_t)L_2->get__size_1();
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_0053;
		}
	}
	{
		List_1_t3601918343 * L_4 = (List_1_t3601918343 *)__this->get_l_0();
		NullCheck(L_4);
		ObjectU5BU5D_t2347633292* L_5 = (ObjectU5BU5D_t2347633292*)L_4->get__items_0();
		int32_t L_6 = (int32_t)__this->get_next_1();
		int32_t L_7 = (int32_t)L_6;
		V_0 = (int32_t)L_7;
		__this->set_next_1(((int32_t)((int32_t)L_7+(int32_t)1)));
		int32_t L_8 = V_0;
		NullCheck(L_5);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		__this->set_current_3(L_10);
		return (bool)1;
	}

IL_0053:
	{
		__this->set_next_1((-1));
		return (bool)0;
	}
}
extern "C"  bool Enumerator_MoveNext_m3992666936_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Enumerator_t2532305113 * _thisAdjusted = reinterpret_cast<Enumerator_t2532305113 *>(__this + 1);
	return Enumerator_MoveNext_m3992666936(_thisAdjusted, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C"  RuntimeObject * Enumerator_get_Current_m3083854290_gshared (Enumerator_t2532305113 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return L_0;
	}
}
extern "C"  RuntimeObject * Enumerator_get_Current_m3083854290_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Enumerator_t2532305113 * _thisAdjusted = reinterpret_cast<Enumerator_t2532305113 *>(__this + 1);
	return Enumerator_get_Current_m3083854290(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Reflection.CustomAttributeNamedArgument>::.ctor(System.Collections.Generic.List`1<T>)
extern "C"  void Enumerator__ctor_m2889899032_gshared (Enumerator_t3765950849 * __this, List_1_t540596783 * ___l0, const RuntimeMethod* method)
{
	{
		List_1_t540596783 * L_0 = ___l0;
		__this->set_l_0(L_0);
		List_1_t540596783 * L_1 = ___l0;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)L_1->get__version_2();
		__this->set_ver_2(L_2);
		return;
	}
}
extern "C"  void Enumerator__ctor_m2889899032_AdjustorThunk (RuntimeObject * __this, List_1_t540596783 * ___l0, const RuntimeMethod* method)
{
	Enumerator_t3765950849 * _thisAdjusted = reinterpret_cast<Enumerator_t3765950849 *>(__this + 1);
	Enumerator__ctor_m2889899032(_thisAdjusted, ___l0, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Reflection.CustomAttributeNamedArgument>::System.Collections.IEnumerator.Reset()
extern "C"  void Enumerator_System_Collections_IEnumerator_Reset_m46981596_gshared (Enumerator_t3765950849 * __this, const RuntimeMethod* method)
{
	{
		Enumerator_VerifyState_m3458408358((Enumerator_t3765950849 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->set_next_1(0);
		return;
	}
}
extern "C"  void Enumerator_System_Collections_IEnumerator_Reset_m46981596_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Enumerator_t3765950849 * _thisAdjusted = reinterpret_cast<Enumerator_t3765950849 *>(__this + 1);
	Enumerator_System_Collections_IEnumerator_Reset_m46981596(_thisAdjusted, method);
}
// System.Object System.Collections.Generic.List`1/Enumerator<System.Reflection.CustomAttributeNamedArgument>::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * Enumerator_System_Collections_IEnumerator_get_Current_m3239662190_gshared (Enumerator_t3765950849 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerator_System_Collections_IEnumerator_get_Current_m3239662190_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Enumerator_VerifyState_m3458408358((Enumerator_t3765950849 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (int32_t)__this->get_next_1();
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t1236416966 * L_1 = (InvalidOperationException_t1236416966 *)il2cpp_codegen_object_new(InvalidOperationException_t1236416966_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m3530364982(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0018:
	{
		CustomAttributeNamedArgument_t3528441529  L_2 = (CustomAttributeNamedArgument_t3528441529 )__this->get_current_3();
		CustomAttributeNamedArgument_t3528441529  L_3 = L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_3);
		return L_4;
	}
}
extern "C"  RuntimeObject * Enumerator_System_Collections_IEnumerator_get_Current_m3239662190_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Enumerator_t3765950849 * _thisAdjusted = reinterpret_cast<Enumerator_t3765950849 *>(__this + 1);
	return Enumerator_System_Collections_IEnumerator_get_Current_m3239662190(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Reflection.CustomAttributeNamedArgument>::Dispose()
extern "C"  void Enumerator_Dispose_m28271419_gshared (Enumerator_t3765950849 * __this, const RuntimeMethod* method)
{
	{
		__this->set_l_0((List_1_t540596783 *)NULL);
		return;
	}
}
extern "C"  void Enumerator_Dispose_m28271419_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Enumerator_t3765950849 * _thisAdjusted = reinterpret_cast<Enumerator_t3765950849 *>(__this + 1);
	Enumerator_Dispose_m28271419(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Reflection.CustomAttributeNamedArgument>::VerifyState()
extern "C"  void Enumerator_VerifyState_m3458408358_gshared (Enumerator_t3765950849 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerator_VerifyState_m3458408358_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t540596783 * L_0 = (List_1_t540596783 *)__this->get_l_0();
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		Enumerator_t3765950849  L_1 = (*(Enumerator_t3765950849 *)__this);
		RuntimeObject * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck((RuntimeObject *)L_2);
		Type_t * L_3 = Object_GetType_m1911167021((RuntimeObject *)L_2, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, (Type_t *)L_3);
		ObjectDisposedException_t3447794223 * L_5 = (ObjectDisposedException_t3447794223 *)il2cpp_codegen_object_new(ObjectDisposedException_t3447794223_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m2978407393(L_5, (String_t*)L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5);
	}

IL_0026:
	{
		int32_t L_6 = (int32_t)__this->get_ver_2();
		List_1_t540596783 * L_7 = (List_1_t540596783 *)__this->get_l_0();
		NullCheck(L_7);
		int32_t L_8 = (int32_t)L_7->get__version_2();
		if ((((int32_t)L_6) == ((int32_t)L_8)))
		{
			goto IL_0047;
		}
	}
	{
		InvalidOperationException_t1236416966 * L_9 = (InvalidOperationException_t1236416966 *)il2cpp_codegen_object_new(InvalidOperationException_t1236416966_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m257069250(L_9, (String_t*)_stringLiteral4156302984, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9);
	}

IL_0047:
	{
		return;
	}
}
extern "C"  void Enumerator_VerifyState_m3458408358_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Enumerator_t3765950849 * _thisAdjusted = reinterpret_cast<Enumerator_t3765950849 *>(__this + 1);
	Enumerator_VerifyState_m3458408358(_thisAdjusted, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Reflection.CustomAttributeNamedArgument>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m2988345354_gshared (Enumerator_t3765950849 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		Enumerator_VerifyState_m3458408358((Enumerator_t3765950849 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (int32_t)__this->get_next_1();
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		int32_t L_1 = (int32_t)__this->get_next_1();
		List_1_t540596783 * L_2 = (List_1_t540596783 *)__this->get_l_0();
		NullCheck(L_2);
		int32_t L_3 = (int32_t)L_2->get__size_1();
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_0053;
		}
	}
	{
		List_1_t540596783 * L_4 = (List_1_t540596783 *)__this->get_l_0();
		NullCheck(L_4);
		CustomAttributeNamedArgumentU5BU5D_t3717413444* L_5 = (CustomAttributeNamedArgumentU5BU5D_t3717413444*)L_4->get__items_0();
		int32_t L_6 = (int32_t)__this->get_next_1();
		int32_t L_7 = (int32_t)L_6;
		V_0 = (int32_t)L_7;
		__this->set_next_1(((int32_t)((int32_t)L_7+(int32_t)1)));
		int32_t L_8 = V_0;
		NullCheck(L_5);
		int32_t L_9 = L_8;
		CustomAttributeNamedArgument_t3528441529  L_10 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		__this->set_current_3(L_10);
		return (bool)1;
	}

IL_0053:
	{
		__this->set_next_1((-1));
		return (bool)0;
	}
}
extern "C"  bool Enumerator_MoveNext_m2988345354_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Enumerator_t3765950849 * _thisAdjusted = reinterpret_cast<Enumerator_t3765950849 *>(__this + 1);
	return Enumerator_MoveNext_m2988345354(_thisAdjusted, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Reflection.CustomAttributeNamedArgument>::get_Current()
extern "C"  CustomAttributeNamedArgument_t3528441529  Enumerator_get_Current_m3647706358_gshared (Enumerator_t3765950849 * __this, const RuntimeMethod* method)
{
	{
		CustomAttributeNamedArgument_t3528441529  L_0 = (CustomAttributeNamedArgument_t3528441529 )__this->get_current_3();
		return L_0;
	}
}
extern "C"  CustomAttributeNamedArgument_t3528441529  Enumerator_get_Current_m3647706358_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Enumerator_t3765950849 * _thisAdjusted = reinterpret_cast<Enumerator_t3765950849 *>(__this + 1);
	return Enumerator_get_Current_m3647706358(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

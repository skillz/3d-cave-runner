#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityScript.Lang.Array
struct Array_t1396575355;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.Array
struct Il2CppArray;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_String2029220233.h"

// System.Void UnityScript.Lang.Array::.ctor()
extern "C"  void Array__ctor_m4252655432 (Array_t1396575355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityScript.Lang.Array::get_length()
extern "C"  int32_t Array_get_length_m754110913 (Array_t1396575355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityScript.Lang.Array::Coerce(System.Type)
extern "C"  Il2CppObject * Array_Coerce_m2367934489 (Array_t1396575355 * __this, Type_t * ___toType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array UnityScript.Lang.Array::ToBuiltin(System.Type)
extern "C"  Il2CppArray * Array_ToBuiltin_m3086745688 (Array_t1396575355 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityScript.Lang.Array::Add(System.Object)
extern "C"  void Array_Add_m3097471301 (Array_t1396575355 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityScript.Lang.Array::Pop()
extern "C"  Il2CppObject * Array_Pop_m3820345758 (Array_t1396575355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityScript.Lang.Array::pop()
extern "C"  Il2CppObject * Array_pop_m4075941118 (Array_t1396575355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityScript.Lang.Array::ToString()
extern "C"  String_t* Array_ToString_m1547520517 (Array_t1396575355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityScript.Lang.Array::Join(System.String)
extern "C"  String_t* Array_Join_m140080931 (Array_t1396575355 * __this, String_t* ___seperator0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityScript.Lang.Array::get_Item(System.Int32)
extern "C"  Il2CppObject * Array_get_Item_m3001262786 (Array_t1396575355 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityScript.Lang.Array::OnValidate(System.Object)
extern "C"  void Array_OnValidate_m1064559095 (Array_t1396575355 * __this, Il2CppObject * ___newValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

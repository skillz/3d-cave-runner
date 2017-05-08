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

// System.Type
struct Type_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_String2029220233.h"

// System.Boolean UnityEngine.AndroidReflection::IsPrimitive(System.Type)
extern "C"  bool AndroidReflection_IsPrimitive_m197545261 (Il2CppObject * __this /* static, unused */, Type_t * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AndroidReflection::IsAssignableFrom(System.Type,System.Type)
extern "C"  bool AndroidReflection_IsAssignableFrom_m3888316312 (Il2CppObject * __this /* static, unused */, Type_t * ___t0, Type_t * ___from1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidReflection::GetStaticMethodID(System.String,System.String,System.String)
extern "C"  IntPtr_t AndroidReflection_GetStaticMethodID_m933650314 (Il2CppObject * __this /* static, unused */, String_t* ___clazz0, String_t* ___methodName1, String_t* ___signature2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidReflection::GetConstructorMember(System.IntPtr,System.String)
extern "C"  IntPtr_t AndroidReflection_GetConstructorMember_m1134440920 (Il2CppObject * __this /* static, unused */, IntPtr_t ___jclass0, String_t* ___signature1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidReflection::GetMethodMember(System.IntPtr,System.String,System.String,System.Boolean)
extern "C"  IntPtr_t AndroidReflection_GetMethodMember_m2059264136 (Il2CppObject * __this /* static, unused */, IntPtr_t ___jclass0, String_t* ___methodName1, String_t* ___signature2, bool ___isStatic3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidReflection::GetFieldMember(System.IntPtr,System.String,System.String,System.Boolean)
extern "C"  IntPtr_t AndroidReflection_GetFieldMember_m807927981 (Il2CppObject * __this /* static, unused */, IntPtr_t ___jclass0, String_t* ___fieldName1, String_t* ___signature2, bool ___isStatic3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidReflection::.cctor()
extern "C"  void AndroidReflection__cctor_m1737201046 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;

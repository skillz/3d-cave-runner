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

// System.String
struct String_t;
// UnityEngine.AndroidJavaRunnable
struct AndroidJavaRunnable_t3501776228;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_t4274989947;
// UnityEngine.jvalue[]
struct jvalueU5BU5D_t2851849116;
// System.Object[]
struct ObjectU5BU5D_t3614634134;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_AndroidJavaRunnable3501776228.h"
#include "UnityEngine_UnityEngine_AndroidJavaProxy4274989947.h"

// System.IntPtr UnityEngine.AndroidJNIHelper::GetConstructorID(System.IntPtr,System.String)
extern "C"  IntPtr_t AndroidJNIHelper_GetConstructorID_m249770863 (Il2CppObject * __this /* static, unused */, IntPtr_t ___javaClass0, String_t* ___signature1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID(System.IntPtr,System.String,System.String,System.Boolean)
extern "C"  IntPtr_t AndroidJNIHelper_GetMethodID_m2906806689 (Il2CppObject * __this /* static, unused */, IntPtr_t ___javaClass0, String_t* ___methodName1, String_t* ___signature2, bool ___isStatic3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetFieldID(System.IntPtr,System.String,System.String,System.Boolean)
extern "C"  IntPtr_t AndroidJNIHelper_GetFieldID_m604884558 (Il2CppObject * __this /* static, unused */, IntPtr_t ___javaClass0, String_t* ___fieldName1, String_t* ___signature2, bool ___isStatic3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNIHelper::CreateJavaRunnable(UnityEngine.AndroidJavaRunnable)
extern "C"  IntPtr_t AndroidJNIHelper_CreateJavaRunnable_m3714552486 (Il2CppObject * __this /* static, unused */, AndroidJavaRunnable_t3501776228 * ___jrunnable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNIHelper::CreateJavaProxy(UnityEngine.AndroidJavaProxy)
extern "C"  IntPtr_t AndroidJNIHelper_CreateJavaProxy_m2012937254 (Il2CppObject * __this /* static, unused */, AndroidJavaProxy_t4274989947 * ___proxy0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNIHelper::INTERNAL_CALL_CreateJavaProxy(UnityEngine.AndroidJavaProxy,System.IntPtr&)
extern "C"  void AndroidJNIHelper_INTERNAL_CALL_CreateJavaProxy_m1898926128 (Il2CppObject * __this /* static, unused */, AndroidJavaProxy_t4274989947 * ___proxy0, IntPtr_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.jvalue[] UnityEngine.AndroidJNIHelper::CreateJNIArgArray(System.Object[])
extern "C"  jvalueU5BU5D_t2851849116* AndroidJNIHelper_CreateJNIArgArray_m3703862686 (Il2CppObject * __this /* static, unused */, ObjectU5BU5D_t3614634134* ___args0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNIHelper::DeleteJNIArgArray(System.Object[],UnityEngine.jvalue[])
extern "C"  void AndroidJNIHelper_DeleteJNIArgArray_m759003066 (Il2CppObject * __this /* static, unused */, ObjectU5BU5D_t3614634134* ___args0, jvalueU5BU5D_t2851849116* ___jniArgs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetConstructorID(System.IntPtr,System.Object[])
extern "C"  IntPtr_t AndroidJNIHelper_GetConstructorID_m1775532385 (Il2CppObject * __this /* static, unused */, IntPtr_t ___jclass0, ObjectU5BU5D_t3614634134* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID(System.IntPtr,System.String,System.Object[],System.Boolean)
extern "C"  IntPtr_t AndroidJNIHelper_GetMethodID_m2221772143 (Il2CppObject * __this /* static, unused */, IntPtr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t3614634134* ___args2, bool ___isStatic3, const MethodInfo* method) IL2CPP_METHOD_ATTR;

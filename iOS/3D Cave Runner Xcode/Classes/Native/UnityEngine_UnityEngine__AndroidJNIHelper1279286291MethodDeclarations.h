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

// UnityEngine.AndroidJavaRunnable
struct AndroidJavaRunnable_t3501776228;
// UnityEngine.jvalue[]
struct jvalueU5BU5D_t2851849116;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Array
struct Il2CppArray;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_AndroidJavaRunnable3501776228.h"
#include "mscorlib_System_Array3829468939.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"

// System.IntPtr UnityEngine._AndroidJNIHelper::CreateJavaRunnable(UnityEngine.AndroidJavaRunnable)
extern "C"  IntPtr_t _AndroidJNIHelper_CreateJavaRunnable_m135129443 (Il2CppObject * __this /* static, unused */, AndroidJavaRunnable_t3501776228 * ___jrunnable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.jvalue[] UnityEngine._AndroidJNIHelper::CreateJNIArgArray(System.Object[])
extern "C"  jvalueU5BU5D_t2851849116* _AndroidJNIHelper_CreateJNIArgArray_m774201621 (Il2CppObject * __this /* static, unused */, ObjectU5BU5D_t3614634134* ___args0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine._AndroidJNIHelper::DeleteJNIArgArray(System.Object[],UnityEngine.jvalue[])
extern "C"  void _AndroidJNIHelper_DeleteJNIArgArray_m962617579 (Il2CppObject * __this /* static, unused */, ObjectU5BU5D_t3614634134* ___args0, jvalueU5BU5D_t2851849116* ___jniArgs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine._AndroidJNIHelper::ConvertToJNIArray(System.Array)
extern "C"  IntPtr_t _AndroidJNIHelper_ConvertToJNIArray_m2807999869 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine._AndroidJNIHelper::GetConstructorID(System.IntPtr,System.Object[])
extern "C"  IntPtr_t _AndroidJNIHelper_GetConstructorID_m2571429584 (Il2CppObject * __this /* static, unused */, IntPtr_t ___jclass0, ObjectU5BU5D_t3614634134* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID(System.IntPtr,System.String,System.Object[],System.Boolean)
extern "C"  IntPtr_t _AndroidJNIHelper_GetMethodID_m656615818 (Il2CppObject * __this /* static, unused */, IntPtr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t3614634134* ___args2, bool ___isStatic3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine._AndroidJNIHelper::GetConstructorID(System.IntPtr,System.String)
extern "C"  IntPtr_t _AndroidJNIHelper_GetConstructorID_m537921590 (Il2CppObject * __this /* static, unused */, IntPtr_t ___jclass0, String_t* ___signature1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID(System.IntPtr,System.String,System.String,System.Boolean)
extern "C"  IntPtr_t _AndroidJNIHelper_GetMethodID_m2996221536 (Il2CppObject * __this /* static, unused */, IntPtr_t ___jclass0, String_t* ___methodName1, String_t* ___signature2, bool ___isStatic3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodIDFallback(System.IntPtr,System.String,System.String,System.Boolean)
extern "C"  IntPtr_t _AndroidJNIHelper_GetMethodIDFallback_m1400620742 (Il2CppObject * __this /* static, unused */, IntPtr_t ___jclass0, String_t* ___methodName1, String_t* ___signature2, bool ___isStatic3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine._AndroidJNIHelper::GetFieldID(System.IntPtr,System.String,System.String,System.Boolean)
extern "C"  IntPtr_t _AndroidJNIHelper_GetFieldID_m3006255247 (Il2CppObject * __this /* static, unused */, IntPtr_t ___jclass0, String_t* ___fieldName1, String_t* ___signature2, bool ___isStatic3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine._AndroidJNIHelper::GetSignature(System.Object)
extern "C"  String_t* _AndroidJNIHelper_GetSignature_m3764655171 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine._AndroidJNIHelper::GetSignature(System.Object[])
extern "C"  String_t* _AndroidJNIHelper_GetSignature_m3048041161 (Il2CppObject * __this /* static, unused */, ObjectU5BU5D_t3614634134* ___args0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

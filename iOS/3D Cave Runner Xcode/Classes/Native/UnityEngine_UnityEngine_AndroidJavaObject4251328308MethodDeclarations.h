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

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t4251328308;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t2973420583;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_IntPtr2504060609.h"

// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
extern "C"  void AndroidJavaObject__ctor_m1076535321 (AndroidJavaObject_t4251328308 * __this, String_t* ___className0, ObjectU5BU5D_t3614634134* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.IntPtr)
extern "C"  void AndroidJavaObject__ctor_m545973293 (AndroidJavaObject_t4251328308 * __this, IntPtr_t ___jobject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJavaObject::.ctor()
extern "C"  void AndroidJavaObject__ctor_m1848610783 (AndroidJavaObject_t4251328308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJavaObject::Dispose()
extern "C"  void AndroidJavaObject_Dispose_m551223760 (AndroidJavaObject_t4251328308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
extern "C"  void AndroidJavaObject_Call_m3681854287 (AndroidJavaObject_t4251328308 * __this, String_t* ___methodName0, ObjectU5BU5D_t3614634134* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJavaObject::CallStatic(System.String,System.Object[])
extern "C"  void AndroidJavaObject_CallStatic_m1227537731 (AndroidJavaObject_t4251328308 * __this, String_t* ___methodName0, ObjectU5BU5D_t3614634134* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJavaObject::GetRawObject()
extern "C"  IntPtr_t AndroidJavaObject_GetRawObject_m3395062661 (AndroidJavaObject_t4251328308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJavaObject::GetRawClass()
extern "C"  IntPtr_t AndroidJavaObject_GetRawClass_m4119621690 (AndroidJavaObject_t4251328308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJavaObject::DebugPrint(System.String)
extern "C"  void AndroidJavaObject_DebugPrint_m408812017 (AndroidJavaObject_t4251328308 * __this, String_t* ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJavaObject::_AndroidJavaObject(System.String,System.Object[])
extern "C"  void AndroidJavaObject__AndroidJavaObject_m294455298 (AndroidJavaObject_t4251328308 * __this, String_t* ___className0, ObjectU5BU5D_t3614634134* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJavaObject::Finalize()
extern "C"  void AndroidJavaObject_Finalize_m1510536377 (AndroidJavaObject_t4251328308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJavaObject::Dispose(System.Boolean)
extern "C"  void AndroidJavaObject_Dispose_m3243973715 (AndroidJavaObject_t4251328308 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJavaObject::_Dispose()
extern "C"  void AndroidJavaObject__Dispose_m2399974563 (AndroidJavaObject_t4251328308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJavaObject::_Call(System.String,System.Object[])
extern "C"  void AndroidJavaObject__Call_m3633254012 (AndroidJavaObject_t4251328308 * __this, String_t* ___methodName0, ObjectU5BU5D_t3614634134* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJavaObject::_CallStatic(System.String,System.Object[])
extern "C"  void AndroidJavaObject__CallStatic_m2829300222 (AndroidJavaObject_t4251328308 * __this, String_t* ___methodName0, ObjectU5BU5D_t3614634134* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AndroidJavaObject UnityEngine.AndroidJavaObject::AndroidJavaObjectDeleteLocalRef(System.IntPtr)
extern "C"  AndroidJavaObject_t4251328308 * AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m1542751394 (Il2CppObject * __this /* static, unused */, IntPtr_t ___jobject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaObject::AndroidJavaClassDeleteLocalRef(System.IntPtr)
extern "C"  AndroidJavaClass_t2973420583 * AndroidJavaObject_AndroidJavaClassDeleteLocalRef_m1607780408 (Il2CppObject * __this /* static, unused */, IntPtr_t ___jclass0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJavaObject::_GetRawObject()
extern "C"  IntPtr_t AndroidJavaObject__GetRawObject_m1427238300 (AndroidJavaObject_t4251328308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJavaObject::_GetRawClass()
extern "C"  IntPtr_t AndroidJavaObject__GetRawClass_m588582481 (AndroidJavaObject_t4251328308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AndroidJavaObject UnityEngine.AndroidJavaObject::FindClass(System.String)
extern "C"  AndroidJavaObject_t4251328308 * AndroidJavaObject_FindClass_m3665845112 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaObject::get_JavaLangClass()
extern "C"  AndroidJavaClass_t2973420583 * AndroidJavaObject_get_JavaLangClass_m514109341 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJavaObject::.cctor()
extern "C"  void AndroidJavaObject__cctor_m1120810516 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;

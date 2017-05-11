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
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void UnityEngine.AndroidJavaRunnable::.ctor(System.Object,System.IntPtr)
extern "C"  void AndroidJavaRunnable__ctor_m1361079927 (AndroidJavaRunnable_t3501776228 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJavaRunnable::Invoke()
extern "C"  void AndroidJavaRunnable_Invoke_m640177851 (AndroidJavaRunnable_t3501776228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UnityEngine.AndroidJavaRunnable::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * AndroidJavaRunnable_BeginInvoke_m1836290498 (AndroidJavaRunnable_t3501776228 * __this, AsyncCallback_t163412349 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJavaRunnable::EndInvoke(System.IAsyncResult)
extern "C"  void AndroidJavaRunnable_EndInvoke_m1478769609 (AndroidJavaRunnable_t3501776228 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

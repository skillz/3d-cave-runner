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

// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
struct Dispatcher_t2240407071;
// System.Object
struct Il2CppObject;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void Boo.Lang.Runtime.DynamicDispatching.Dispatcher::.ctor(System.Object,System.IntPtr)
extern "C"  void Dispatcher__ctor_m1899878867 (Dispatcher_t2240407071 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Boo.Lang.Runtime.DynamicDispatching.Dispatcher::Invoke(System.Object,System.Object[])
extern "C"  Il2CppObject * Dispatcher_Invoke_m2646110514 (Dispatcher_t2240407071 * __this, Il2CppObject * ___target0, ObjectU5BU5D_t3614634134* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Boo.Lang.Runtime.DynamicDispatching.Dispatcher::BeginInvoke(System.Object,System.Object[],System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Dispatcher_BeginInvoke_m2466638782 (Dispatcher_t2240407071 * __this, Il2CppObject * ___target0, ObjectU5BU5D_t3614634134* ___args1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Boo.Lang.Runtime.DynamicDispatching.Dispatcher::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * Dispatcher_EndInvoke_m2556461512 (Dispatcher_t2240407071 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

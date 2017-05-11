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

// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory
struct DispatcherFactory_t1307565918;
// System.Object
struct Il2CppObject;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
struct Dispatcher_t2240407071;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::.ctor(System.Object,System.IntPtr)
extern "C"  void DispatcherFactory__ctor_m3306016183 (DispatcherFactory_t1307565918 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::Invoke()
extern "C"  Dispatcher_t2240407071 * DispatcherFactory_Invoke_m1899124168 (DispatcherFactory_t1307565918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DispatcherFactory_BeginInvoke_m2682006594 (DispatcherFactory_t1307565918 * __this, AsyncCallback_t163412349 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::EndInvoke(System.IAsyncResult)
extern "C"  Dispatcher_t2240407071 * DispatcherFactory_EndInvoke_m3732402012 (DispatcherFactory_t1307565918 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

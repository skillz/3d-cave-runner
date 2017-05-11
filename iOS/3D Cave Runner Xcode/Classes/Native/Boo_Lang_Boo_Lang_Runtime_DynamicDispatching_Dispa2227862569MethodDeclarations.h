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

// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache
struct DispatcherCache_t2227862569;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
struct Dispatcher_t2240407071;
// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey
struct DispatcherKey_t708950850;
// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory
struct DispatcherFactory_t1307565918;

#include "codegen/il2cpp-codegen.h"
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_Dispat708950850.h"
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_Dispa1307565918.h"

// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::.ctor()
extern "C"  void DispatcherCache__ctor_m1122887875 (DispatcherCache_t2227862569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::.cctor()
extern "C"  void DispatcherCache__cctor_m2456225360 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::Get(Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory)
extern "C"  Dispatcher_t2240407071 * DispatcherCache_Get_m2484693929 (DispatcherCache_t2227862569 * __this, DispatcherKey_t708950850 * ___key0, DispatcherFactory_t1307565918 * ___factory1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

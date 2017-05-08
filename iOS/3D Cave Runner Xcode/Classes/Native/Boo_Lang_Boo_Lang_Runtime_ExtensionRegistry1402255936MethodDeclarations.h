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

// Boo.Lang.Runtime.ExtensionRegistry
struct ExtensionRegistry_t1402255936;
// System.Type
struct Type_t;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo>
struct IEnumerable_1_t40257009;
// Boo.Lang.List`1<System.Reflection.MemberInfo>
struct List_1_t1414935582;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"

// System.Void Boo.Lang.Runtime.ExtensionRegistry::.ctor()
extern "C"  void ExtensionRegistry__ctor_m3675685019 (ExtensionRegistry_t1402255936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Boo.Lang.Runtime.ExtensionRegistry::Register(System.Type)
extern "C"  void ExtensionRegistry_Register_m3174000641 (ExtensionRegistry_t1402255936 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo> Boo.Lang.Runtime.ExtensionRegistry::get_Extensions()
extern "C"  Il2CppObject* ExtensionRegistry_get_Extensions_m3207635652 (ExtensionRegistry_t1402255936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.List`1<System.Reflection.MemberInfo> Boo.Lang.Runtime.ExtensionRegistry::AddExtensionMembers(Boo.Lang.List`1<System.Reflection.MemberInfo>,System.Type)
extern "C"  List_1_t1414935582 * ExtensionRegistry_AddExtensionMembers_m1376072370 (Il2CppObject * __this /* static, unused */, List_1_t1414935582 * ___extensions0, Type_t * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.List`1<System.Reflection.MemberInfo> Boo.Lang.Runtime.ExtensionRegistry::CopyExtensions()
extern "C"  List_1_t1414935582 * ExtensionRegistry_CopyExtensions_m777567964 (ExtensionRegistry_t1402255936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// System.Reflection.Emit.PropertyBuilder
struct PropertyBuilder_t3694255912;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t152480188;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t2275869610;
// System.Object
struct Il2CppObject;
// System.Reflection.Binder
struct Binder_t3404612058;
// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;
// System.Reflection.Module
struct Module_t4282841206;
// System.Exception
struct Exception_t1927440687;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_PropertyAttributes883448530.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Reflection_BindingFlags1082350898.h"
#include "mscorlib_System_Reflection_Binder3404612058.h"
#include "mscorlib_System_Globalization_CultureInfo3500843524.h"

// System.Reflection.PropertyAttributes System.Reflection.Emit.PropertyBuilder::get_Attributes()
extern "C"  int32_t PropertyBuilder_get_Attributes_m1538287354 (PropertyBuilder_t3694255912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.PropertyBuilder::get_CanRead()
extern "C"  bool PropertyBuilder_get_CanRead_m2661496160 (PropertyBuilder_t3694255912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.PropertyBuilder::get_CanWrite()
extern "C"  bool PropertyBuilder_get_CanWrite_m2381953607 (PropertyBuilder_t3694255912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.PropertyBuilder::get_DeclaringType()
extern "C"  Type_t * PropertyBuilder_get_DeclaringType_m3664861407 (PropertyBuilder_t3694255912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.PropertyBuilder::get_Name()
extern "C"  String_t* PropertyBuilder_get_Name_m3823568914 (PropertyBuilder_t3694255912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.PropertyBuilder::get_PropertyType()
extern "C"  Type_t * PropertyBuilder_get_PropertyType_m2865954421 (PropertyBuilder_t3694255912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.PropertyBuilder::get_ReflectedType()
extern "C"  Type_t * PropertyBuilder_get_ReflectedType_m2158574648 (PropertyBuilder_t3694255912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.PropertyBuilder::GetAccessors(System.Boolean)
extern "C"  MethodInfoU5BU5D_t152480188* PropertyBuilder_GetAccessors_m1006850480 (PropertyBuilder_t3694255912 * __this, bool ___nonPublic0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.PropertyBuilder::GetCustomAttributes(System.Boolean)
extern "C"  ObjectU5BU5D_t3614634134* PropertyBuilder_GetCustomAttributes_m1029078269 (PropertyBuilder_t3694255912 * __this, bool ___inherit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.PropertyBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t3614634134* PropertyBuilder_GetCustomAttributes_m3351693494 (PropertyBuilder_t3694255912 * __this, Type_t * ___attributeType0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.PropertyBuilder::GetGetMethod(System.Boolean)
extern "C"  MethodInfo_t * PropertyBuilder_GetGetMethod_m4104689211 (PropertyBuilder_t3694255912 * __this, bool ___nonPublic0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.PropertyBuilder::GetIndexParameters()
extern "C"  ParameterInfoU5BU5D_t2275869610* PropertyBuilder_GetIndexParameters_m530648889 (PropertyBuilder_t3694255912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.PropertyBuilder::GetSetMethod(System.Boolean)
extern "C"  MethodInfo_t * PropertyBuilder_GetSetMethod_m3440414495 (PropertyBuilder_t3694255912 * __this, bool ___nonPublic0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.PropertyBuilder::GetValue(System.Object,System.Object[])
extern "C"  Il2CppObject * PropertyBuilder_GetValue_m1368104137 (PropertyBuilder_t3694255912 * __this, Il2CppObject * ___obj0, ObjectU5BU5D_t3614634134* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.PropertyBuilder::GetValue(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C"  Il2CppObject * PropertyBuilder_GetValue_m2017114019 (PropertyBuilder_t3694255912 * __this, Il2CppObject * ___obj0, int32_t ___invokeAttr1, Binder_t3404612058 * ___binder2, ObjectU5BU5D_t3614634134* ___index3, CultureInfo_t3500843524 * ___culture4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.PropertyBuilder::IsDefined(System.Type,System.Boolean)
extern "C"  bool PropertyBuilder_IsDefined_m1809430892 (PropertyBuilder_t3694255912 * __this, Type_t * ___attributeType0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.PropertyBuilder::SetValue(System.Object,System.Object,System.Object[])
extern "C"  void PropertyBuilder_SetValue_m3999239872 (PropertyBuilder_t3694255912 * __this, Il2CppObject * ___obj0, Il2CppObject * ___value1, ObjectU5BU5D_t3614634134* ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.PropertyBuilder::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C"  void PropertyBuilder_SetValue_m1174444320 (PropertyBuilder_t3694255912 * __this, Il2CppObject * ___obj0, Il2CppObject * ___value1, int32_t ___invokeAttr2, Binder_t3404612058 * ___binder3, ObjectU5BU5D_t3614634134* ___index4, CultureInfo_t3500843524 * ___culture5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.PropertyBuilder::get_Module()
extern "C"  Module_t4282841206 * PropertyBuilder_get_Module_m1618339927 (PropertyBuilder_t3694255912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.PropertyBuilder::not_supported()
extern "C"  Exception_t1927440687 * PropertyBuilder_not_supported_m143748788 (PropertyBuilder_t3694255912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

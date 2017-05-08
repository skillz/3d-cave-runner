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
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
struct Dispatcher_t2240407071;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Type[]
struct TypeU5BU5D_t1664964607;
// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory
struct DispatcherFactory_t1307565918;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Collections.IEnumerable
struct IEnumerable_t2911409499;
// System.Array
struct Il2CppArray;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>
struct IEnumerable_1_t3622673382;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_String2029220233.h"
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_Dispa1307565918.h"
#include "mscorlib_System_Reflection_MethodInfo3330546337.h"
#include "mscorlib_System_TypeCode2536926201.h"
#include "mscorlib_System_Array3829468939.h"

// System.Void Boo.Lang.Runtime.RuntimeServices::.cctor()
extern "C"  void RuntimeServices__cctor_m1718173874 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Boo.Lang.Runtime.RuntimeServices::RegisterExtensions(System.Type)
extern "C"  void RuntimeServices_RegisterExtensions_m3796711317 (Il2CppObject * __this /* static, unused */, Type_t * ___extensions0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::GetDispatcher(System.Object,System.String,System.Type[],Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory)
extern "C"  Dispatcher_t2240407071 * RuntimeServices_GetDispatcher_m1446846842 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___target0, String_t* ___cacheKeyName1, TypeU5BU5D_t1664964607* ___cacheKeyTypes2, DispatcherFactory_t1307565918 * ___factory3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Boo.Lang.Runtime.RuntimeServices::Coerce(System.Object,System.Type)
extern "C"  Il2CppObject * RuntimeServices_Coerce_m43784504 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, Type_t * ___toType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::CreateCoerceDispatcher(System.Object,System.Type)
extern "C"  Dispatcher_t2240407071 * RuntimeServices_CreateCoerceDispatcher_m2088980589 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, Type_t * ___toType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::EmitPromotionDispatcher(System.Type,System.Type)
extern "C"  Dispatcher_t2240407071 * RuntimeServices_EmitPromotionDispatcher_m2684860643 (Il2CppObject * __this /* static, unused */, Type_t * ___fromType0, Type_t * ___toType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Boo.Lang.Runtime.RuntimeServices::IsPromotableNumeric(System.Type)
extern "C"  bool RuntimeServices_IsPromotableNumeric_m3364364430 (Il2CppObject * __this /* static, unused */, Type_t * ___fromType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::EmitImplicitConversionDispatcher(System.Reflection.MethodInfo)
extern "C"  Dispatcher_t2240407071 * RuntimeServices_EmitImplicitConversionDispatcher_m857596550 (Il2CppObject * __this /* static, unused */, MethodInfo_t * ___method0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Boo.Lang.Runtime.RuntimeServices::CoercibleDispatcher(System.Object,System.Object[])
extern "C"  Il2CppObject * RuntimeServices_CoercibleDispatcher_m238083643 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___o0, ObjectU5BU5D_t3614634134* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Boo.Lang.Runtime.RuntimeServices::IdentityDispatcher(System.Object,System.Object[])
extern "C"  Il2CppObject * RuntimeServices_IdentityDispatcher_m4279533023 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___o0, ObjectU5BU5D_t3614634134* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Boo.Lang.Runtime.RuntimeServices::IsNumeric(System.TypeCode)
extern "C"  bool RuntimeServices_IsNumeric_m502621688 (Il2CppObject * __this /* static, unused */, int32_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerable Boo.Lang.Runtime.RuntimeServices::GetEnumerable(System.Object)
extern "C"  Il2CppObject * RuntimeServices_GetEnumerable_m664169683 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___enumerable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Boo.Lang.Runtime.RuntimeServices::op_Addition(System.String,System.String)
extern "C"  String_t* RuntimeServices_op_Addition_m1630013314 (Il2CppObject * __this /* static, unused */, String_t* ___lhs0, String_t* ___rhs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Boo.Lang.Runtime.RuntimeServices::EqualityOperator(System.Object,System.Object)
extern "C"  bool RuntimeServices_EqualityOperator_m2233200645 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___lhs0, Il2CppObject * ___rhs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Boo.Lang.Runtime.RuntimeServices::ArrayEqualityImpl(System.Array,System.Array)
extern "C"  bool RuntimeServices_ArrayEqualityImpl_m797322488 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___lhs0, Il2CppArray * ___rhs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TypeCode Boo.Lang.Runtime.RuntimeServices::GetConvertTypeCode(System.TypeCode,System.TypeCode)
extern "C"  int32_t RuntimeServices_GetConvertTypeCode_m69867490 (Il2CppObject * __this /* static, unused */, int32_t ___lhsTypeCode0, int32_t ___rhsTypeCode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Boo.Lang.Runtime.RuntimeServices::EqualityOperator(System.Object,System.TypeCode,System.Object,System.TypeCode)
extern "C"  bool RuntimeServices_EqualityOperator_m1406973573 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___lhs0, int32_t ___lhsTypeCode1, Il2CppObject * ___rhs2, int32_t ___rhsTypeCode3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Boo.Lang.Runtime.RuntimeServices::IsPromotableNumeric(System.TypeCode)
extern "C"  bool RuntimeServices_IsPromotableNumeric_m1545541583 (Il2CppObject * __this /* static, unused */, int32_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo Boo.Lang.Runtime.RuntimeServices::FindImplicitConversionOperator(System.Type,System.Type)
extern "C"  MethodInfo_t * RuntimeServices_FindImplicitConversionOperator_m2511316423 (Il2CppObject * __this /* static, unused */, Type_t * ___from0, Type_t * ___to1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo> Boo.Lang.Runtime.RuntimeServices::GetExtensionMethods()
extern "C"  Il2CppObject* RuntimeServices_GetExtensionMethods_m783677117 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo Boo.Lang.Runtime.RuntimeServices::FindImplicitConversionMethod(System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>,System.Type,System.Type)
extern "C"  MethodInfo_t * RuntimeServices_FindImplicitConversionMethod_m23858978 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___candidates0, Type_t * ___from1, Type_t * ___to2, const MethodInfo* method) IL2CPP_METHOD_ATTR;

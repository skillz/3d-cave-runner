#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.String
struct String_t;
// System.Collections.IEnumerable
struct IEnumerable_t1941168011;
// System.Text.StringBuilder
struct StringBuilder_t;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
struct Dispatcher_t684365006;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache
struct DispatcherCache_t1010326087;
// System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>
struct Dictionary_2_t866247282;
// System.Collections.Generic.IEqualityComparer`1<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey>
struct IEqualityComparer_1_t4217396590;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t892470886;
// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey
struct DispatcherKey_t2110064572;
// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory
struct DispatcherFactory_t1014155341;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey/_EqualityComparer
struct _EqualityComparer_t965810167;
// Boo.Lang.Runtime.ExtensionRegistry
struct ExtensionRegistry_t2424660641;
// Boo.Lang.List`1<System.Reflection.MemberInfo>
struct List_1_t1242660502;
// Boo.Lang.List`1<System.Object>
struct List_1_t942764925;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo>
struct IEnumerable_1_t2359854630;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// Boo.Lang.Runtime.RuntimeServices/<Coerce>c__AnonStorey1D
struct U3CCoerceU3Ec__AnonStorey1D_t572148199;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Delegate
struct Delegate_t1188392813;
// Boo.Lang.Runtime.RuntimeServices/<EmitImplicitConversionDispatcher>c__AnonStorey1E
struct U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t4009522197;
// System.ApplicationException
struct ApplicationException_t2339761290;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t827303578;
// System.IO.TextReader
struct TextReader_t283511965;
// System.ArgumentException
struct ArgumentException_t132251570;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>
struct IEnumerable_1_t857479137;
// Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC
struct U3CGetExtensionMethodsU3Ec__IteratorC_t3368530435;
// System.Reflection.ParameterInfo
struct ParameterInfo_t1861056598;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.Collections.Generic.IEnumerator`1<System.Reflection.MethodInfo>
struct IEnumerator_1_t2310196716;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// Boo.Lang.Runtime.TextReaderEnumerator/<lines>c__IteratorD
struct U3ClinesU3Ec__IteratorD_t110925711;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t2280021157;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t1302094432;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.Generic.IEnumerator`1<System.Reflection.MemberInfo>
struct IEnumerator_1_t3812572209;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey[]
struct DispatcherKeyU5BU5D_t1678415317;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher[]
struct DispatcherU5BU5D_t4037257275;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.Generic.Dictionary`2/Transform`1<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher,System.Collections.DictionaryEntry>
struct Transform_1_t4132401090;
// System.Void
struct Void_t1185182177;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Reflection.Emit.UnmanagedMarshal
struct UnmanagedMarshal_t984015687;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;

extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_t1941168011_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern const uint32_t Builtins_join_m864932387_MetadataUsageId;
extern RuntimeClass* DispatcherKey_t2110064572_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t866247282_il2cpp_TypeInfo_var;
extern RuntimeClass* DispatcherCache_t1010326087_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m1815469916_RuntimeMethod_var;
extern const uint32_t DispatcherCache__cctor_m62575632_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m1990775459_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m163959252_RuntimeMethod_var;
extern const uint32_t DispatcherCache_Get_m3609792288_MetadataUsageId;
extern RuntimeClass* Dispatcher_t684365006_il2cpp_TypeInfo_var;
extern const uint32_t DelegatePInvokeWrapper_DispatcherFactory_t1014155341_MetadataUsageId;
extern RuntimeClass* _EqualityComparer_t965810167_il2cpp_TypeInfo_var;
extern const uint32_t DispatcherKey__cctor_m1082726794_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern const uint32_t _EqualityComparer_Equals_m2225820911_MetadataUsageId;
extern RuntimeClass* List_1_t1242660502_il2cpp_TypeInfo_var;
extern RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m1115569667_RuntimeMethod_var;
extern const uint32_t ExtensionRegistry__ctor_m323844458_MetadataUsageId;
extern const RuntimeType* ExtensionAttribute_t1723066603_0_0_0_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_Contains_m769064252_RuntimeMethod_var;
extern const uint32_t ExtensionRegistry_AddExtensionMembers_m1072684021_MetadataUsageId;
extern const RuntimeMethod* List_1__ctor_m3956803198_RuntimeMethod_var;
extern const uint32_t ExtensionRegistry_CopyExtensions_m530464131_MetadataUsageId;
extern const RuntimeType* RuntimeServices_t2098243569_0_0_0_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* RuntimeServices_t2098243569_il2cpp_TypeInfo_var;
extern RuntimeClass* ExtensionRegistry_t2424660641_il2cpp_TypeInfo_var;
extern RuntimeClass* Boolean_t97287965_il2cpp_TypeInfo_var;
extern const uint32_t RuntimeServices__cctor_m1381641241_MetadataUsageId;
extern const uint32_t RuntimeServices_RegisterExtensions_m618331591_MetadataUsageId;
extern const uint32_t RuntimeServices_GetDispatcher_m3922777458_MetadataUsageId;
extern RuntimeClass* U3CCoerceU3Ec__AnonStorey1D_t572148199_il2cpp_TypeInfo_var;
extern RuntimeClass* TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var;
extern RuntimeClass* DispatcherFactory_t1014155341_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CCoerceU3Ec__AnonStorey1D_U3CU3Em__15_m4262864175_RuntimeMethod_var;
extern String_t* _stringLiteral4123921170;
extern const uint32_t RuntimeServices_Coerce_m1663619687_MetadataUsageId;
extern RuntimeClass* ICoercible_t1130343077_il2cpp_TypeInfo_var;
extern const RuntimeMethod* RuntimeServices_IdentityDispatcher_m1725786149_RuntimeMethod_var;
extern const RuntimeMethod* RuntimeServices_CoercibleDispatcher_m4058208960_RuntimeMethod_var;
extern const uint32_t RuntimeServices_CreateCoerceDispatcher_m661106792_MetadataUsageId;
extern const RuntimeType* Dispatcher_t684365006_0_0_0_var;
extern const RuntimeType* NumericPromotions_t3533651679_0_0_0_var;
extern RuntimeClass* TypeCode_t2987224087_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2755855817;
extern String_t* _stringLiteral3454777324;
extern const uint32_t RuntimeServices_EmitPromotionDispatcher_m734050861_MetadataUsageId;
extern const uint32_t RuntimeServices_IsPromotableNumeric_m2095247129_MetadataUsageId;
extern RuntimeClass* U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t4009522197_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_U3CU3Em__16_m940011970_RuntimeMethod_var;
extern const uint32_t RuntimeServices_EmitImplicitConversionDispatcher_m4072191859_MetadataUsageId;
extern const uint32_t RuntimeServices_CoercibleDispatcher_m4058208960_MetadataUsageId;
extern RuntimeClass* ApplicationException_t2339761290_il2cpp_TypeInfo_var;
extern RuntimeClass* TextReader_t283511965_il2cpp_TypeInfo_var;
extern const RuntimeMethod* RuntimeServices_GetEnumerable_m2712819723_RuntimeMethod_var;
extern String_t* _stringLiteral1439784940;
extern String_t* _stringLiteral4177126825;
extern const uint32_t RuntimeServices_GetEnumerable_m2712819723_MetadataUsageId;
extern const uint32_t RuntimeServices_op_Addition_m583005490_MetadataUsageId;
extern RuntimeClass* RuntimeArray_il2cpp_TypeInfo_var;
extern const uint32_t RuntimeServices_EqualityOperator_m2384872086_MetadataUsageId;
extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern const RuntimeMethod* RuntimeServices_ArrayEqualityImpl_m3673667702_RuntimeMethod_var;
extern String_t* _stringLiteral181402784;
extern const uint32_t RuntimeServices_ArrayEqualityImpl_m3673667702_MetadataUsageId;
extern RuntimeClass* IConvertible_t2977365677_il2cpp_TypeInfo_var;
extern RuntimeClass* Decimal_t2948259380_il2cpp_TypeInfo_var;
extern const uint32_t RuntimeServices_EqualityOperator_m2541246096_MetadataUsageId;
extern const uint32_t RuntimeServices_FindImplicitConversionOperator_m2560683559_MetadataUsageId;
extern RuntimeClass* U3CGetExtensionMethodsU3Ec__IteratorC_t3368530435_il2cpp_TypeInfo_var;
extern const uint32_t RuntimeServices_GetExtensionMethods_m2018979233_MetadataUsageId;
extern RuntimeClass* IEnumerable_1_t857479137_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t2310196716_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3306367446;
extern const uint32_t RuntimeServices_FindImplicitConversionMethod_m4176567206_MetadataUsageId;
extern const uint32_t U3CCoerceU3Ec__AnonStorey1D_U3CU3Em__15_m4262864175_MetadataUsageId;
extern const uint32_t U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_U3CU3Em__16_m940011970_MetadataUsageId;
extern const uint32_t U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MethodInfoU3E_GetEnumerator_m1148048048_MetadataUsageId;
extern RuntimeClass* IEnumerable_1_t2359854630_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t3812572209_il2cpp_TypeInfo_var;
extern RuntimeClass* MethodInfo_t_il2cpp_TypeInfo_var;
extern const uint32_t U3CGetExtensionMethodsU3Ec__IteratorC_MoveNext_m4162423597_MetadataUsageId;
extern const uint32_t U3CGetExtensionMethodsU3Ec__IteratorC_Dispose_m3192498793_MetadataUsageId;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CGetExtensionMethodsU3Ec__IteratorC_Reset_m865776842_RuntimeMethod_var;
extern const uint32_t U3CGetExtensionMethodsU3Ec__IteratorC_Reset_m865776842_MetadataUsageId;
extern RuntimeClass* U3ClinesU3Ec__IteratorD_t110925711_il2cpp_TypeInfo_var;
extern const uint32_t TextReaderEnumerator_lines_m1045794663_MetadataUsageId;
extern const uint32_t U3ClinesU3Ec__IteratorD_System_Collections_Generic_IEnumerableU3CstringU3E_GetEnumerator_m3555722259_MetadataUsageId;
extern const uint32_t U3ClinesU3Ec__IteratorD_MoveNext_m1496570322_MetadataUsageId;
extern const uint32_t U3ClinesU3Ec__IteratorD_Dispose_m3487747665_MetadataUsageId;
extern const RuntimeMethod* U3ClinesU3Ec__IteratorD_Reset_m4117646820_RuntimeMethod_var;
extern const uint32_t U3ClinesU3Ec__IteratorD_Reset_m4117646820_MetadataUsageId;

struct ObjectU5BU5D_t2843939325;
struct TypeU5BU5D_t3940880105;
struct MemberInfoU5BU5D_t1302094432;
struct MethodInfoU5BU5D_t2572182361;
struct ParameterInfoU5BU5D_t390618515;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef U3CMODULEU3E_T692745531_H
#define U3CMODULEU3E_T692745531_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745531 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745531_H
#ifndef U3CCOERCEU3EC__ANONSTOREY1D_T572148199_H
#define U3CCOERCEU3EC__ANONSTOREY1D_T572148199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boo.Lang.Runtime.RuntimeServices/<Coerce>c__AnonStorey1D
struct  U3CCoerceU3Ec__AnonStorey1D_t572148199  : public RuntimeObject
{
public:
	// System.Object Boo.Lang.Runtime.RuntimeServices/<Coerce>c__AnonStorey1D::value
	RuntimeObject * ___value_0;
	// System.Type Boo.Lang.Runtime.RuntimeServices/<Coerce>c__AnonStorey1D::toType
	Type_t * ___toType_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(U3CCoerceU3Ec__AnonStorey1D_t572148199, ___value_0)); }
	inline RuntimeObject * get_value_0() const { return ___value_0; }
	inline RuntimeObject ** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(RuntimeObject * value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((&___value_0), value);
	}

	inline static int32_t get_offset_of_toType_1() { return static_cast<int32_t>(offsetof(U3CCoerceU3Ec__AnonStorey1D_t572148199, ___toType_1)); }
	inline Type_t * get_toType_1() const { return ___toType_1; }
	inline Type_t ** get_address_of_toType_1() { return &___toType_1; }
	inline void set_toType_1(Type_t * value)
	{
		___toType_1 = value;
		Il2CppCodeGenWriteBarrier((&___toType_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CCOERCEU3EC__ANONSTOREY1D_T572148199_H
#ifndef RUNTIMESERVICES_T2098243569_H
#define RUNTIMESERVICES_T2098243569_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boo.Lang.Runtime.RuntimeServices
struct  RuntimeServices_t2098243569  : public RuntimeObject
{
public:

public:
};

struct RuntimeServices_t2098243569_StaticFields
{
public:
	// System.Object[] Boo.Lang.Runtime.RuntimeServices::NoArguments
	ObjectU5BU5D_t2843939325* ___NoArguments_0;
	// System.Type Boo.Lang.Runtime.RuntimeServices::RuntimeServicesType
	Type_t * ___RuntimeServicesType_1;
	// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache Boo.Lang.Runtime.RuntimeServices::_cache
	DispatcherCache_t1010326087 * ____cache_2;
	// Boo.Lang.Runtime.ExtensionRegistry Boo.Lang.Runtime.RuntimeServices::_extensions
	ExtensionRegistry_t2424660641 * ____extensions_3;
	// System.Object Boo.Lang.Runtime.RuntimeServices::True
	RuntimeObject * ___True_4;

public:
	inline static int32_t get_offset_of_NoArguments_0() { return static_cast<int32_t>(offsetof(RuntimeServices_t2098243569_StaticFields, ___NoArguments_0)); }
	inline ObjectU5BU5D_t2843939325* get_NoArguments_0() const { return ___NoArguments_0; }
	inline ObjectU5BU5D_t2843939325** get_address_of_NoArguments_0() { return &___NoArguments_0; }
	inline void set_NoArguments_0(ObjectU5BU5D_t2843939325* value)
	{
		___NoArguments_0 = value;
		Il2CppCodeGenWriteBarrier((&___NoArguments_0), value);
	}

	inline static int32_t get_offset_of_RuntimeServicesType_1() { return static_cast<int32_t>(offsetof(RuntimeServices_t2098243569_StaticFields, ___RuntimeServicesType_1)); }
	inline Type_t * get_RuntimeServicesType_1() const { return ___RuntimeServicesType_1; }
	inline Type_t ** get_address_of_RuntimeServicesType_1() { return &___RuntimeServicesType_1; }
	inline void set_RuntimeServicesType_1(Type_t * value)
	{
		___RuntimeServicesType_1 = value;
		Il2CppCodeGenWriteBarrier((&___RuntimeServicesType_1), value);
	}

	inline static int32_t get_offset_of__cache_2() { return static_cast<int32_t>(offsetof(RuntimeServices_t2098243569_StaticFields, ____cache_2)); }
	inline DispatcherCache_t1010326087 * get__cache_2() const { return ____cache_2; }
	inline DispatcherCache_t1010326087 ** get_address_of__cache_2() { return &____cache_2; }
	inline void set__cache_2(DispatcherCache_t1010326087 * value)
	{
		____cache_2 = value;
		Il2CppCodeGenWriteBarrier((&____cache_2), value);
	}

	inline static int32_t get_offset_of__extensions_3() { return static_cast<int32_t>(offsetof(RuntimeServices_t2098243569_StaticFields, ____extensions_3)); }
	inline ExtensionRegistry_t2424660641 * get__extensions_3() const { return ____extensions_3; }
	inline ExtensionRegistry_t2424660641 ** get_address_of__extensions_3() { return &____extensions_3; }
	inline void set__extensions_3(ExtensionRegistry_t2424660641 * value)
	{
		____extensions_3 = value;
		Il2CppCodeGenWriteBarrier((&____extensions_3), value);
	}

	inline static int32_t get_offset_of_True_4() { return static_cast<int32_t>(offsetof(RuntimeServices_t2098243569_StaticFields, ___True_4)); }
	inline RuntimeObject * get_True_4() const { return ___True_4; }
	inline RuntimeObject ** get_address_of_True_4() { return &___True_4; }
	inline void set_True_4(RuntimeObject * value)
	{
		___True_4 = value;
		Il2CppCodeGenWriteBarrier((&___True_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMESERVICES_T2098243569_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef LIST_1_T1242660502_H
#define LIST_1_T1242660502_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boo.Lang.List`1<System.Reflection.MemberInfo>
struct  List_1_t1242660502  : public RuntimeObject
{
public:
	// T[] Boo.Lang.List`1::_items
	MemberInfoU5BU5D_t1302094432* ____items_1;
	// System.Int32 Boo.Lang.List`1::_count
	int32_t ____count_2;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1242660502, ____items_1)); }
	inline MemberInfoU5BU5D_t1302094432* get__items_1() const { return ____items_1; }
	inline MemberInfoU5BU5D_t1302094432** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MemberInfoU5BU5D_t1302094432* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__count_2() { return static_cast<int32_t>(offsetof(List_1_t1242660502, ____count_2)); }
	inline int32_t get__count_2() const { return ____count_2; }
	inline int32_t* get_address_of__count_2() { return &____count_2; }
	inline void set__count_2(int32_t value)
	{
		____count_2 = value;
	}
};

struct List_1_t1242660502_StaticFields
{
public:
	// T[] Boo.Lang.List`1::EmptyArray
	MemberInfoU5BU5D_t1302094432* ___EmptyArray_0;

public:
	inline static int32_t get_offset_of_EmptyArray_0() { return static_cast<int32_t>(offsetof(List_1_t1242660502_StaticFields, ___EmptyArray_0)); }
	inline MemberInfoU5BU5D_t1302094432* get_EmptyArray_0() const { return ___EmptyArray_0; }
	inline MemberInfoU5BU5D_t1302094432** get_address_of_EmptyArray_0() { return &___EmptyArray_0; }
	inline void set_EmptyArray_0(MemberInfoU5BU5D_t1302094432* value)
	{
		___EmptyArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1242660502_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef EXTENSIONREGISTRY_T2424660641_H
#define EXTENSIONREGISTRY_T2424660641_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boo.Lang.Runtime.ExtensionRegistry
struct  ExtensionRegistry_t2424660641  : public RuntimeObject
{
public:
	// Boo.Lang.List`1<System.Reflection.MemberInfo> Boo.Lang.Runtime.ExtensionRegistry::_extensions
	List_1_t1242660502 * ____extensions_0;
	// System.Object Boo.Lang.Runtime.ExtensionRegistry::_classLock
	RuntimeObject * ____classLock_1;

public:
	inline static int32_t get_offset_of__extensions_0() { return static_cast<int32_t>(offsetof(ExtensionRegistry_t2424660641, ____extensions_0)); }
	inline List_1_t1242660502 * get__extensions_0() const { return ____extensions_0; }
	inline List_1_t1242660502 ** get_address_of__extensions_0() { return &____extensions_0; }
	inline void set__extensions_0(List_1_t1242660502 * value)
	{
		____extensions_0 = value;
		Il2CppCodeGenWriteBarrier((&____extensions_0), value);
	}

	inline static int32_t get_offset_of__classLock_1() { return static_cast<int32_t>(offsetof(ExtensionRegistry_t2424660641, ____classLock_1)); }
	inline RuntimeObject * get__classLock_1() const { return ____classLock_1; }
	inline RuntimeObject ** get_address_of__classLock_1() { return &____classLock_1; }
	inline void set__classLock_1(RuntimeObject * value)
	{
		____classLock_1 = value;
		Il2CppCodeGenWriteBarrier((&____classLock_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTENSIONREGISTRY_T2424660641_H
#ifndef NUMERICPROMOTIONS_T3533651679_H
#define NUMERICPROMOTIONS_T3533651679_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boo.Lang.Runtime.DynamicDispatching.NumericPromotions
struct  NumericPromotions_t3533651679  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NUMERICPROMOTIONS_T3533651679_H
#ifndef U3CEMITIMPLICITCONVERSIONDISPATCHERU3EC__ANONSTOREY1E_T4009522197_H
#define U3CEMITIMPLICITCONVERSIONDISPATCHERU3EC__ANONSTOREY1E_T4009522197_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boo.Lang.Runtime.RuntimeServices/<EmitImplicitConversionDispatcher>c__AnonStorey1E
struct  U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t4009522197  : public RuntimeObject
{
public:
	// System.Reflection.MethodInfo Boo.Lang.Runtime.RuntimeServices/<EmitImplicitConversionDispatcher>c__AnonStorey1E::method
	MethodInfo_t * ___method_0;

public:
	inline static int32_t get_offset_of_method_0() { return static_cast<int32_t>(offsetof(U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t4009522197, ___method_0)); }
	inline MethodInfo_t * get_method_0() const { return ___method_0; }
	inline MethodInfo_t ** get_address_of_method_0() { return &___method_0; }
	inline void set_method_0(MethodInfo_t * value)
	{
		___method_0 = value;
		Il2CppCodeGenWriteBarrier((&___method_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CEMITIMPLICITCONVERSIONDISPATCHERU3EC__ANONSTOREY1E_T4009522197_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef U3CLINESU3EC__ITERATORD_T110925711_H
#define U3CLINESU3EC__ITERATORD_T110925711_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boo.Lang.Runtime.TextReaderEnumerator/<lines>c__IteratorD
struct  U3ClinesU3Ec__IteratorD_t110925711  : public RuntimeObject
{
public:
	// System.IO.TextReader Boo.Lang.Runtime.TextReaderEnumerator/<lines>c__IteratorD::reader
	TextReader_t283511965 * ___reader_0;
	// System.IO.TextReader Boo.Lang.Runtime.TextReaderEnumerator/<lines>c__IteratorD::<$s_51>__0
	TextReader_t283511965 * ___U3CU24s_51U3E__0_1;
	// System.String Boo.Lang.Runtime.TextReaderEnumerator/<lines>c__IteratorD::<line>__1
	String_t* ___U3ClineU3E__1_2;
	// System.Int32 Boo.Lang.Runtime.TextReaderEnumerator/<lines>c__IteratorD::$PC
	int32_t ___U24PC_3;
	// System.String Boo.Lang.Runtime.TextReaderEnumerator/<lines>c__IteratorD::$current
	String_t* ___U24current_4;
	// System.IO.TextReader Boo.Lang.Runtime.TextReaderEnumerator/<lines>c__IteratorD::<$>reader
	TextReader_t283511965 * ___U3CU24U3Ereader_5;

public:
	inline static int32_t get_offset_of_reader_0() { return static_cast<int32_t>(offsetof(U3ClinesU3Ec__IteratorD_t110925711, ___reader_0)); }
	inline TextReader_t283511965 * get_reader_0() const { return ___reader_0; }
	inline TextReader_t283511965 ** get_address_of_reader_0() { return &___reader_0; }
	inline void set_reader_0(TextReader_t283511965 * value)
	{
		___reader_0 = value;
		Il2CppCodeGenWriteBarrier((&___reader_0), value);
	}

	inline static int32_t get_offset_of_U3CU24s_51U3E__0_1() { return static_cast<int32_t>(offsetof(U3ClinesU3Ec__IteratorD_t110925711, ___U3CU24s_51U3E__0_1)); }
	inline TextReader_t283511965 * get_U3CU24s_51U3E__0_1() const { return ___U3CU24s_51U3E__0_1; }
	inline TextReader_t283511965 ** get_address_of_U3CU24s_51U3E__0_1() { return &___U3CU24s_51U3E__0_1; }
	inline void set_U3CU24s_51U3E__0_1(TextReader_t283511965 * value)
	{
		___U3CU24s_51U3E__0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU24s_51U3E__0_1), value);
	}

	inline static int32_t get_offset_of_U3ClineU3E__1_2() { return static_cast<int32_t>(offsetof(U3ClinesU3Ec__IteratorD_t110925711, ___U3ClineU3E__1_2)); }
	inline String_t* get_U3ClineU3E__1_2() const { return ___U3ClineU3E__1_2; }
	inline String_t** get_address_of_U3ClineU3E__1_2() { return &___U3ClineU3E__1_2; }
	inline void set_U3ClineU3E__1_2(String_t* value)
	{
		___U3ClineU3E__1_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3ClineU3E__1_2), value);
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3ClinesU3Ec__IteratorD_t110925711, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3ClinesU3Ec__IteratorD_t110925711, ___U24current_4)); }
	inline String_t* get_U24current_4() const { return ___U24current_4; }
	inline String_t** get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(String_t* value)
	{
		___U24current_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_4), value);
	}

	inline static int32_t get_offset_of_U3CU24U3Ereader_5() { return static_cast<int32_t>(offsetof(U3ClinesU3Ec__IteratorD_t110925711, ___U3CU24U3Ereader_5)); }
	inline TextReader_t283511965 * get_U3CU24U3Ereader_5() const { return ___U3CU24U3Ereader_5; }
	inline TextReader_t283511965 ** get_address_of_U3CU24U3Ereader_5() { return &___U3CU24U3Ereader_5; }
	inline void set_U3CU24U3Ereader_5(TextReader_t283511965 * value)
	{
		___U3CU24U3Ereader_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU24U3Ereader_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CLINESU3EC__ITERATORD_T110925711_H
#ifndef TEXTREADERENUMERATOR_T2012764472_H
#define TEXTREADERENUMERATOR_T2012764472_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boo.Lang.Runtime.TextReaderEnumerator
struct  TextReaderEnumerator_t2012764472  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTREADERENUMERATOR_T2012764472_H
#ifndef U3CGETEXTENSIONMETHODSU3EC__ITERATORC_T3368530435_H
#define U3CGETEXTENSIONMETHODSU3EC__ITERATORC_T3368530435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC
struct  U3CGetExtensionMethodsU3Ec__IteratorC_t3368530435  : public RuntimeObject
{
public:
	// System.Collections.Generic.IEnumerator`1<System.Reflection.MemberInfo> Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::<$s_49>__0
	RuntimeObject* ___U3CU24s_49U3E__0_0;
	// System.Reflection.MemberInfo Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::<member>__1
	MemberInfo_t * ___U3CmemberU3E__1_1;
	// System.Int32 Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::$PC
	int32_t ___U24PC_2;
	// System.Reflection.MethodInfo Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::$current
	MethodInfo_t * ___U24current_3;

public:
	inline static int32_t get_offset_of_U3CU24s_49U3E__0_0() { return static_cast<int32_t>(offsetof(U3CGetExtensionMethodsU3Ec__IteratorC_t3368530435, ___U3CU24s_49U3E__0_0)); }
	inline RuntimeObject* get_U3CU24s_49U3E__0_0() const { return ___U3CU24s_49U3E__0_0; }
	inline RuntimeObject** get_address_of_U3CU24s_49U3E__0_0() { return &___U3CU24s_49U3E__0_0; }
	inline void set_U3CU24s_49U3E__0_0(RuntimeObject* value)
	{
		___U3CU24s_49U3E__0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU24s_49U3E__0_0), value);
	}

	inline static int32_t get_offset_of_U3CmemberU3E__1_1() { return static_cast<int32_t>(offsetof(U3CGetExtensionMethodsU3Ec__IteratorC_t3368530435, ___U3CmemberU3E__1_1)); }
	inline MemberInfo_t * get_U3CmemberU3E__1_1() const { return ___U3CmemberU3E__1_1; }
	inline MemberInfo_t ** get_address_of_U3CmemberU3E__1_1() { return &___U3CmemberU3E__1_1; }
	inline void set_U3CmemberU3E__1_1(MemberInfo_t * value)
	{
		___U3CmemberU3E__1_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmemberU3E__1_1), value);
	}

	inline static int32_t get_offset_of_U24PC_2() { return static_cast<int32_t>(offsetof(U3CGetExtensionMethodsU3Ec__IteratorC_t3368530435, ___U24PC_2)); }
	inline int32_t get_U24PC_2() const { return ___U24PC_2; }
	inline int32_t* get_address_of_U24PC_2() { return &___U24PC_2; }
	inline void set_U24PC_2(int32_t value)
	{
		___U24PC_2 = value;
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CGetExtensionMethodsU3Ec__IteratorC_t3368530435, ___U24current_3)); }
	inline MethodInfo_t * get_U24current_3() const { return ___U24current_3; }
	inline MethodInfo_t ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(MethodInfo_t * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGETEXTENSIONMETHODSU3EC__ITERATORC_T3368530435_H
#ifndef TEXTREADER_T283511965_H
#define TEXTREADER_T283511965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextReader
struct  TextReader_t283511965  : public RuntimeObject
{
public:

public:
};

struct TextReader_t283511965_StaticFields
{
public:
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t283511965 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(TextReader_t283511965_StaticFields, ___Null_0)); }
	inline TextReader_t283511965 * get_Null_0() const { return ___Null_0; }
	inline TextReader_t283511965 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(TextReader_t283511965 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTREADER_T283511965_H
#ifndef _EQUALITYCOMPARER_T965810167_H
#define _EQUALITYCOMPARER_T965810167_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey/_EqualityComparer
struct  _EqualityComparer_t965810167  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // _EQUALITYCOMPARER_T965810167_H
#ifndef DISPATCHERCACHE_T1010326087_H
#define DISPATCHERCACHE_T1010326087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache
struct  DispatcherCache_t1010326087  : public RuntimeObject
{
public:

public:
};

struct DispatcherCache_t1010326087_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher> Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::_cache
	Dictionary_2_t866247282 * ____cache_0;

public:
	inline static int32_t get_offset_of__cache_0() { return static_cast<int32_t>(offsetof(DispatcherCache_t1010326087_StaticFields, ____cache_0)); }
	inline Dictionary_2_t866247282 * get__cache_0() const { return ____cache_0; }
	inline Dictionary_2_t866247282 ** get_address_of__cache_0() { return &____cache_0; }
	inline void set__cache_0(Dictionary_2_t866247282 * value)
	{
		____cache_0 = value;
		Il2CppCodeGenWriteBarrier((&____cache_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPATCHERCACHE_T1010326087_H
#ifndef STRINGBUILDER_T_H
#define STRINGBUILDER_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Int32 System.Text.StringBuilder::_length
	int32_t ____length_1;
	// System.String System.Text.StringBuilder::_str
	String_t* ____str_2;
	// System.String System.Text.StringBuilder::_cached_str
	String_t* ____cached_str_3;
	// System.Int32 System.Text.StringBuilder::_maxCapacity
	int32_t ____maxCapacity_4;

public:
	inline static int32_t get_offset_of__length_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____length_1)); }
	inline int32_t get__length_1() const { return ____length_1; }
	inline int32_t* get_address_of__length_1() { return &____length_1; }
	inline void set__length_1(int32_t value)
	{
		____length_1 = value;
	}

	inline static int32_t get_offset_of__str_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____str_2)); }
	inline String_t* get__str_2() const { return ____str_2; }
	inline String_t** get_address_of__str_2() { return &____str_2; }
	inline void set__str_2(String_t* value)
	{
		____str_2 = value;
		Il2CppCodeGenWriteBarrier((&____str_2), value);
	}

	inline static int32_t get_offset_of__cached_str_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____cached_str_3)); }
	inline String_t* get__cached_str_3() const { return ____cached_str_3; }
	inline String_t** get_address_of__cached_str_3() { return &____cached_str_3; }
	inline void set__cached_str_3(String_t* value)
	{
		____cached_str_3 = value;
		Il2CppCodeGenWriteBarrier((&____cached_str_3), value);
	}

	inline static int32_t get_offset_of__maxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____maxCapacity_4)); }
	inline int32_t get__maxCapacity_4() const { return ____maxCapacity_4; }
	inline int32_t* get_address_of__maxCapacity_4() { return &____maxCapacity_4; }
	inline void set__maxCapacity_4(int32_t value)
	{
		____maxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
#ifndef DISPATCHERKEY_T2110064572_H
#define DISPATCHERKEY_T2110064572_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey
struct  DispatcherKey_t2110064572  : public RuntimeObject
{
public:
	// System.Type Boo.Lang.Runtime.DynamicDispatching.DispatcherKey::_type
	Type_t * ____type_1;
	// System.String Boo.Lang.Runtime.DynamicDispatching.DispatcherKey::_name
	String_t* ____name_2;
	// System.Type[] Boo.Lang.Runtime.DynamicDispatching.DispatcherKey::_arguments
	TypeU5BU5D_t3940880105* ____arguments_3;

public:
	inline static int32_t get_offset_of__type_1() { return static_cast<int32_t>(offsetof(DispatcherKey_t2110064572, ____type_1)); }
	inline Type_t * get__type_1() const { return ____type_1; }
	inline Type_t ** get_address_of__type_1() { return &____type_1; }
	inline void set__type_1(Type_t * value)
	{
		____type_1 = value;
		Il2CppCodeGenWriteBarrier((&____type_1), value);
	}

	inline static int32_t get_offset_of__name_2() { return static_cast<int32_t>(offsetof(DispatcherKey_t2110064572, ____name_2)); }
	inline String_t* get__name_2() const { return ____name_2; }
	inline String_t** get_address_of__name_2() { return &____name_2; }
	inline void set__name_2(String_t* value)
	{
		____name_2 = value;
		Il2CppCodeGenWriteBarrier((&____name_2), value);
	}

	inline static int32_t get_offset_of__arguments_3() { return static_cast<int32_t>(offsetof(DispatcherKey_t2110064572, ____arguments_3)); }
	inline TypeU5BU5D_t3940880105* get__arguments_3() const { return ____arguments_3; }
	inline TypeU5BU5D_t3940880105** get_address_of__arguments_3() { return &____arguments_3; }
	inline void set__arguments_3(TypeU5BU5D_t3940880105* value)
	{
		____arguments_3 = value;
		Il2CppCodeGenWriteBarrier((&____arguments_3), value);
	}
};

struct DispatcherKey_t2110064572_StaticFields
{
public:
	// System.Collections.Generic.IEqualityComparer`1<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey> Boo.Lang.Runtime.DynamicDispatching.DispatcherKey::EqualityComparer
	RuntimeObject* ___EqualityComparer_0;

public:
	inline static int32_t get_offset_of_EqualityComparer_0() { return static_cast<int32_t>(offsetof(DispatcherKey_t2110064572_StaticFields, ___EqualityComparer_0)); }
	inline RuntimeObject* get_EqualityComparer_0() const { return ___EqualityComparer_0; }
	inline RuntimeObject** get_address_of_EqualityComparer_0() { return &___EqualityComparer_0; }
	inline void set_EqualityComparer_0(RuntimeObject* value)
	{
		___EqualityComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___EqualityComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPATCHERKEY_T2110064572_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef BUILTINS_T286914603_H
#define BUILTINS_T286914603_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boo.Lang.Builtins
struct  Builtins_t286914603  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUILTINS_T286914603_H
#ifndef DICTIONARY_2_T866247282_H
#define DICTIONARY_2_T866247282_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>
struct  Dictionary_2_t866247282  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	DispatcherKeyU5BU5D_t1678415317* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	DispatcherU5BU5D_t4037257275* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t866247282, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t866247282, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t866247282, ___keySlots_6)); }
	inline DispatcherKeyU5BU5D_t1678415317* get_keySlots_6() const { return ___keySlots_6; }
	inline DispatcherKeyU5BU5D_t1678415317** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(DispatcherKeyU5BU5D_t1678415317* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t866247282, ___valueSlots_7)); }
	inline DispatcherU5BU5D_t4037257275* get_valueSlots_7() const { return ___valueSlots_7; }
	inline DispatcherU5BU5D_t4037257275** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(DispatcherU5BU5D_t4037257275* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t866247282, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t866247282, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t866247282, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t866247282, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t866247282, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t866247282, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t866247282, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t866247282_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t4132401090 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t866247282_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t4132401090 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t4132401090 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t4132401090 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T866247282_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef UINT64_T4134040092_H
#define UINT64_T4134040092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_t4134040092 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_t4134040092, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_T4134040092_H
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef METHODBASE_T_H
#define METHODBASE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODBASE_T_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef DECIMAL_T2948259380_H
#define DECIMAL_T2948259380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t2948259380 
{
public:
	// System.UInt32 System.Decimal::flags
	uint32_t ___flags_5;
	// System.UInt32 System.Decimal::hi
	uint32_t ___hi_6;
	// System.UInt32 System.Decimal::lo
	uint32_t ___lo_7;
	// System.UInt32 System.Decimal::mid
	uint32_t ___mid_8;

public:
	inline static int32_t get_offset_of_flags_5() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___flags_5)); }
	inline uint32_t get_flags_5() const { return ___flags_5; }
	inline uint32_t* get_address_of_flags_5() { return &___flags_5; }
	inline void set_flags_5(uint32_t value)
	{
		___flags_5 = value;
	}

	inline static int32_t get_offset_of_hi_6() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___hi_6)); }
	inline uint32_t get_hi_6() const { return ___hi_6; }
	inline uint32_t* get_address_of_hi_6() { return &___hi_6; }
	inline void set_hi_6(uint32_t value)
	{
		___hi_6 = value;
	}

	inline static int32_t get_offset_of_lo_7() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___lo_7)); }
	inline uint32_t get_lo_7() const { return ___lo_7; }
	inline uint32_t* get_address_of_lo_7() { return &___lo_7; }
	inline void set_lo_7(uint32_t value)
	{
		___lo_7 = value;
	}

	inline static int32_t get_offset_of_mid_8() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___mid_8)); }
	inline uint32_t get_mid_8() const { return ___mid_8; }
	inline uint32_t* get_address_of_mid_8() { return &___mid_8; }
	inline void set_mid_8(uint32_t value)
	{
		___mid_8 = value;
	}
};

struct Decimal_t2948259380_StaticFields
{
public:
	// System.Decimal System.Decimal::MinValue
	Decimal_t2948259380  ___MinValue_0;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2948259380  ___MaxValue_1;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2948259380  ___MinusOne_2;
	// System.Decimal System.Decimal::One
	Decimal_t2948259380  ___One_3;
	// System.Decimal System.Decimal::MaxValueDiv10
	Decimal_t2948259380  ___MaxValueDiv10_4;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinValue_0)); }
	inline Decimal_t2948259380  get_MinValue_0() const { return ___MinValue_0; }
	inline Decimal_t2948259380 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(Decimal_t2948259380  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValue_1)); }
	inline Decimal_t2948259380  get_MaxValue_1() const { return ___MaxValue_1; }
	inline Decimal_t2948259380 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(Decimal_t2948259380  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinusOne_2() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinusOne_2)); }
	inline Decimal_t2948259380  get_MinusOne_2() const { return ___MinusOne_2; }
	inline Decimal_t2948259380 * get_address_of_MinusOne_2() { return &___MinusOne_2; }
	inline void set_MinusOne_2(Decimal_t2948259380  value)
	{
		___MinusOne_2 = value;
	}

	inline static int32_t get_offset_of_One_3() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___One_3)); }
	inline Decimal_t2948259380  get_One_3() const { return ___One_3; }
	inline Decimal_t2948259380 * get_address_of_One_3() { return &___One_3; }
	inline void set_One_3(Decimal_t2948259380  value)
	{
		___One_3 = value;
	}

	inline static int32_t get_offset_of_MaxValueDiv10_4() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValueDiv10_4)); }
	inline Decimal_t2948259380  get_MaxValueDiv10_4() const { return ___MaxValueDiv10_4; }
	inline Decimal_t2948259380 * get_address_of_MaxValueDiv10_4() { return &___MaxValueDiv10_4; }
	inline void set_MaxValueDiv10_4(Decimal_t2948259380  value)
	{
		___MaxValueDiv10_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T2948259380_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef APPLICATIONEXCEPTION_T2339761290_H
#define APPLICATIONEXCEPTION_T2339761290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ApplicationException
struct  ApplicationException_t2339761290  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATIONEXCEPTION_T2339761290_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T2721792723_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef MEMBERTYPES_T3790569052_H
#define MEMBERTYPES_T3790569052_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberTypes
struct  MemberTypes_t3790569052 
{
public:
	// System.Int32 System.Reflection.MemberTypes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MemberTypes_t3790569052, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERTYPES_T3790569052_H
#ifndef METHODINFO_T_H
#define METHODINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODINFO_T_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef PARAMETERATTRIBUTES_T1826424051_H
#define PARAMETERATTRIBUTES_T1826424051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterAttributes
struct  ParameterAttributes_t1826424051 
{
public:
	// System.Int32 System.Reflection.ParameterAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ParameterAttributes_t1826424051, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETERATTRIBUTES_T1826424051_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef TYPECODE_T2987224087_H
#define TYPECODE_T2987224087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeCode
struct  TypeCode_t2987224087 
{
public:
	// System.Int32 System.TypeCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeCode_t2987224087, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECODE_T2987224087_H
#ifndef PARAMETERINFO_T1861056598_H
#define PARAMETERINFO_T1861056598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterInfo
struct  ParameterInfo_t1861056598  : public RuntimeObject
{
public:
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t * ___ClassImpl_0;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject * ___DefaultValueImpl_1;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t * ___MemberImpl_2;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_3;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_4;
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_5;
	// System.Reflection.Emit.UnmanagedMarshal System.Reflection.ParameterInfo::marshalAs
	UnmanagedMarshal_t984015687 * ___marshalAs_6;

public:
	inline static int32_t get_offset_of_ClassImpl_0() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___ClassImpl_0)); }
	inline Type_t * get_ClassImpl_0() const { return ___ClassImpl_0; }
	inline Type_t ** get_address_of_ClassImpl_0() { return &___ClassImpl_0; }
	inline void set_ClassImpl_0(Type_t * value)
	{
		___ClassImpl_0 = value;
		Il2CppCodeGenWriteBarrier((&___ClassImpl_0), value);
	}

	inline static int32_t get_offset_of_DefaultValueImpl_1() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___DefaultValueImpl_1)); }
	inline RuntimeObject * get_DefaultValueImpl_1() const { return ___DefaultValueImpl_1; }
	inline RuntimeObject ** get_address_of_DefaultValueImpl_1() { return &___DefaultValueImpl_1; }
	inline void set_DefaultValueImpl_1(RuntimeObject * value)
	{
		___DefaultValueImpl_1 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultValueImpl_1), value);
	}

	inline static int32_t get_offset_of_MemberImpl_2() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___MemberImpl_2)); }
	inline MemberInfo_t * get_MemberImpl_2() const { return ___MemberImpl_2; }
	inline MemberInfo_t ** get_address_of_MemberImpl_2() { return &___MemberImpl_2; }
	inline void set_MemberImpl_2(MemberInfo_t * value)
	{
		___MemberImpl_2 = value;
		Il2CppCodeGenWriteBarrier((&___MemberImpl_2), value);
	}

	inline static int32_t get_offset_of_NameImpl_3() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___NameImpl_3)); }
	inline String_t* get_NameImpl_3() const { return ___NameImpl_3; }
	inline String_t** get_address_of_NameImpl_3() { return &___NameImpl_3; }
	inline void set_NameImpl_3(String_t* value)
	{
		___NameImpl_3 = value;
		Il2CppCodeGenWriteBarrier((&___NameImpl_3), value);
	}

	inline static int32_t get_offset_of_PositionImpl_4() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___PositionImpl_4)); }
	inline int32_t get_PositionImpl_4() const { return ___PositionImpl_4; }
	inline int32_t* get_address_of_PositionImpl_4() { return &___PositionImpl_4; }
	inline void set_PositionImpl_4(int32_t value)
	{
		___PositionImpl_4 = value;
	}

	inline static int32_t get_offset_of_AttrsImpl_5() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___AttrsImpl_5)); }
	inline int32_t get_AttrsImpl_5() const { return ___AttrsImpl_5; }
	inline int32_t* get_address_of_AttrsImpl_5() { return &___AttrsImpl_5; }
	inline void set_AttrsImpl_5(int32_t value)
	{
		___AttrsImpl_5 = value;
	}

	inline static int32_t get_offset_of_marshalAs_6() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___marshalAs_6)); }
	inline UnmanagedMarshal_t984015687 * get_marshalAs_6() const { return ___marshalAs_6; }
	inline UnmanagedMarshal_t984015687 ** get_address_of_marshalAs_6() { return &___marshalAs_6; }
	inline void set_marshalAs_6(UnmanagedMarshal_t984015687 * value)
	{
		___marshalAs_6 = value;
		Il2CppCodeGenWriteBarrier((&___marshalAs_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETERINFO_T1861056598_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t426314064 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t426314064 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef DISPATCHERFACTORY_T1014155341_H
#define DISPATCHERFACTORY_T1014155341_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory
struct  DispatcherFactory_t1014155341  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPATCHERFACTORY_T1014155341_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef DISPATCHER_T684365006_H
#define DISPATCHER_T684365006_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
struct  Dispatcher_t684365006  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPATCHER_T684365006_H
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Type[]
struct TypeU5BU5D_t3940880105  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t1302094432  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MemberInfo_t * m_Items[1];

public:
	inline MemberInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MemberInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MemberInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline MemberInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MemberInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MemberInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t2572182361  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MethodInfo_t * m_Items[1];

public:
	inline MethodInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MethodInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MethodInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline MethodInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MethodInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MethodInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t390618515  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterInfo_t1861056598 * m_Items[1];

public:
	inline ParameterInfo_t1861056598 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_t1861056598 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_t1861056598 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline ParameterInfo_t1861056598 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_t1861056598 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_t1861056598 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<!0>)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m3072481003_gshared (Dictionary_2_t132545152 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m3280774074_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject ** p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_m2387223709_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void Boo.Lang.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2774066863_gshared (List_1_t942764925 * __this, const RuntimeMethod* method);
// System.Boolean Boo.Lang.List`1<System.Object>::Contains(T)
extern "C" IL2CPP_METHOD_ATTR bool List_1_Contains_m4165449587_gshared (List_1_t942764925 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void Boo.Lang.List`1<System.Object>::.ctor(System.Collections.IEnumerable)
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m985535999_gshared (List_1_t942764925 * __this, RuntimeObject* p0, const RuntimeMethod* method);

// System.Void System.Text.StringBuilder::.ctor()
extern "C" IL2CPP_METHOD_ATTR void StringBuilder__ctor_m3121283359 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1640838743 (StringBuilder_t * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1965104174 (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method);
// System.String System.Text.StringBuilder::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* StringBuilder_ToString_m3317489284 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Object Boo.Lang.Runtime.DynamicDispatching.Dispatcher::Invoke(System.Object,System.Object[])
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Dispatcher_Invoke_m1639676350 (Dispatcher_t684365006 * __this, RuntimeObject * ___target0, ObjectU5BU5D_t2843939325* ___args1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::.ctor(System.Collections.Generic.IEqualityComparer`1<!0>)
#define Dictionary_2__ctor_m1815469916(__this, p0, method) ((  void (*) (Dictionary_2_t866247282 *, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m3072481003_gshared)(__this, p0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::TryGetValue(!0,!1&)
#define Dictionary_2_TryGetValue_m1990775459(__this, p0, p1, method) ((  bool (*) (Dictionary_2_t866247282 *, DispatcherKey_t2110064572 *, Dispatcher_t684365006 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3280774074_gshared)(__this, p0, p1, method)
// System.Void System.Threading.Monitor::Enter(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Monitor_Enter_m2249409497 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::Invoke()
extern "C" IL2CPP_METHOD_ATTR Dispatcher_t684365006 * DispatcherFactory_Invoke_m2833957726 (DispatcherFactory_t1014155341 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::Add(!0,!1)
#define Dictionary_2_Add_m163959252(__this, p0, p1, method) ((  void (*) (Dictionary_2_t866247282 *, DispatcherKey_t2110064572 *, Dispatcher_t684365006 *, const RuntimeMethod*))Dictionary_2_Add_m2387223709_gshared)(__this, p0, p1, method)
// System.Void System.Threading.Monitor::Exit(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Monitor_Exit_m3585316909 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherKey/_EqualityComparer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void _EqualityComparer__ctor_m1412158449 (_EqualityComparer_t965810167 * __this, const RuntimeMethod* method);
// System.Int32 System.String::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t String_GetHashCode_m1906374149 (String_t* __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Inequality_m215368492 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void Boo.Lang.List`1<System.Reflection.MemberInfo>::.ctor()
#define List_1__ctor_m1115569667(__this, method) ((  void (*) (List_1_t1242660502 *, const RuntimeMethod*))List_1__ctor_m2774066863_gshared)(__this, method)
// Boo.Lang.List`1<System.Reflection.MemberInfo> Boo.Lang.Runtime.ExtensionRegistry::CopyExtensions()
extern "C" IL2CPP_METHOD_ATTR List_1_t1242660502 * ExtensionRegistry_CopyExtensions_m530464131 (ExtensionRegistry_t2424660641 * __this, const RuntimeMethod* method);
// Boo.Lang.List`1<System.Reflection.MemberInfo> Boo.Lang.Runtime.ExtensionRegistry::AddExtensionMembers(Boo.Lang.List`1<System.Reflection.MemberInfo>,System.Type)
extern "C" IL2CPP_METHOD_ATTR List_1_t1242660502 * ExtensionRegistry_AddExtensionMembers_m1072684021 (RuntimeObject * __this /* static, unused */, List_1_t1242660502 * ___extensions0, Type_t * ___type1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method);
// System.Boolean System.Attribute::IsDefined(System.Reflection.MemberInfo,System.Type)
extern "C" IL2CPP_METHOD_ATTR bool Attribute_IsDefined_m3363303722 (RuntimeObject * __this /* static, unused */, MemberInfo_t * p0, Type_t * p1, const RuntimeMethod* method);
// System.Boolean Boo.Lang.List`1<System.Reflection.MemberInfo>::Contains(T)
#define List_1_Contains_m769064252(__this, p0, method) ((  bool (*) (List_1_t1242660502 *, MemberInfo_t *, const RuntimeMethod*))List_1_Contains_m4165449587_gshared)(__this, p0, method)
// System.Void Boo.Lang.List`1<System.Reflection.MemberInfo>::.ctor(System.Collections.IEnumerable)
#define List_1__ctor_m3956803198(__this, p0, method) ((  void (*) (List_1_t1242660502 *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m985535999_gshared)(__this, p0, method)
// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DispatcherCache__ctor_m2156165103 (DispatcherCache_t1010326087 * __this, const RuntimeMethod* method);
// System.Void Boo.Lang.Runtime.ExtensionRegistry::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ExtensionRegistry__ctor_m323844458 (ExtensionRegistry_t2424660641 * __this, const RuntimeMethod* method);
// System.Void Boo.Lang.Runtime.ExtensionRegistry::Register(System.Type)
extern "C" IL2CPP_METHOD_ATTR void ExtensionRegistry_Register_m2065832968 (ExtensionRegistry_t2424660641 * __this, Type_t * ___type0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Object_GetType_m88164663 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherKey::.ctor(System.Type,System.String,System.Type[])
extern "C" IL2CPP_METHOD_ATTR void DispatcherKey__ctor_m1810669420 (DispatcherKey_t2110064572 * __this, Type_t * ___type0, String_t* ___name1, TypeU5BU5D_t3940880105* ___arguments2, const RuntimeMethod* method);
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::Get(Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory)
extern "C" IL2CPP_METHOD_ATTR Dispatcher_t684365006 * DispatcherCache_Get_m3609792288 (DispatcherCache_t1010326087 * __this, DispatcherKey_t2110064572 * ___key0, DispatcherFactory_t1014155341 * ___factory1, const RuntimeMethod* method);
// System.Void Boo.Lang.Runtime.RuntimeServices/<Coerce>c__AnonStorey1D::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CCoerceU3Ec__AnonStorey1D__ctor_m2227718426 (U3CCoerceU3Ec__AnonStorey1D_t572148199 * __this, const RuntimeMethod* method);
// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void DispatcherFactory__ctor_m3649217775 (DispatcherFactory_t1014155341 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::GetDispatcher(System.Object,System.String,System.Type[],Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory)
extern "C" IL2CPP_METHOD_ATTR Dispatcher_t684365006 * RuntimeServices_GetDispatcher_m3922777458 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___target0, String_t* ___cacheKeyName1, TypeU5BU5D_t3940880105* ___cacheKeyTypes2, DispatcherFactory_t1014155341 * ___factory3, const RuntimeMethod* method);
// System.Void Boo.Lang.Runtime.DynamicDispatching.Dispatcher::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Dispatcher__ctor_m4145559729 (Dispatcher_t684365006 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean Boo.Lang.Runtime.RuntimeServices::IsPromotableNumeric(System.Type)
extern "C" IL2CPP_METHOD_ATTR bool RuntimeServices_IsPromotableNumeric_m2095247129 (RuntimeObject * __this /* static, unused */, Type_t * ___fromType0, const RuntimeMethod* method);
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::EmitPromotionDispatcher(System.Type,System.Type)
extern "C" IL2CPP_METHOD_ATTR Dispatcher_t684365006 * RuntimeServices_EmitPromotionDispatcher_m734050861 (RuntimeObject * __this /* static, unused */, Type_t * ___fromType0, Type_t * ___toType1, const RuntimeMethod* method);
// System.Reflection.MethodInfo Boo.Lang.Runtime.RuntimeServices::FindImplicitConversionOperator(System.Type,System.Type)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * RuntimeServices_FindImplicitConversionOperator_m2560683559 (RuntimeObject * __this /* static, unused */, Type_t * ___from0, Type_t * ___to1, const RuntimeMethod* method);
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::EmitImplicitConversionDispatcher(System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR Dispatcher_t684365006 * RuntimeServices_EmitImplicitConversionDispatcher_m4072191859 (RuntimeObject * __this /* static, unused */, MethodInfo_t * ___method0, const RuntimeMethod* method);
// System.TypeCode System.Type::GetTypeCode(System.Type)
extern "C" IL2CPP_METHOD_ATTR int32_t Type_GetTypeCode_m480753082 (RuntimeObject * __this /* static, unused */, Type_t * p0, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m2971454694 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Type::GetMethod(System.String)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * Type_GetMethod_m2019726356 (Type_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR Delegate_t1188392813 * Delegate_CreateDelegate_m2396489936 (RuntimeObject * __this /* static, unused */, Type_t * p0, MethodInfo_t * p1, const RuntimeMethod* method);
// System.Boolean Boo.Lang.Runtime.RuntimeServices::IsPromotableNumeric(System.TypeCode)
extern "C" IL2CPP_METHOD_ATTR bool RuntimeServices_IsPromotableNumeric_m3673263760 (RuntimeObject * __this /* static, unused */, int32_t ___code0, const RuntimeMethod* method);
// System.Void Boo.Lang.Runtime.RuntimeServices/<EmitImplicitConversionDispatcher>c__AnonStorey1E::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E__ctor_m1951951183 (U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t4009522197 * __this, const RuntimeMethod* method);
// System.Void System.ApplicationException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ApplicationException__ctor_m2517758450 (ApplicationException_t2339761290 * __this, String_t* p0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.String> Boo.Lang.Runtime.TextReaderEnumerator::lines(System.IO.TextReader)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* TextReaderEnumerator_lines_m1045794663 (RuntimeObject * __this /* static, unused */, TextReader_t283511965 * ___reader0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Boolean Boo.Lang.Runtime.RuntimeServices::IsNumeric(System.TypeCode)
extern "C" IL2CPP_METHOD_ATTR bool RuntimeServices_IsNumeric_m2879598828 (RuntimeObject * __this /* static, unused */, int32_t ___code0, const RuntimeMethod* method);
// System.Boolean Boo.Lang.Runtime.RuntimeServices::EqualityOperator(System.Object,System.TypeCode,System.Object,System.TypeCode)
extern "C" IL2CPP_METHOD_ATTR bool RuntimeServices_EqualityOperator_m2541246096 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___lhs0, int32_t ___lhsTypeCode1, RuntimeObject * ___rhs2, int32_t ___rhsTypeCode3, const RuntimeMethod* method);
// System.Boolean Boo.Lang.Runtime.RuntimeServices::ArrayEqualityImpl(System.Array,System.Array)
extern "C" IL2CPP_METHOD_ATTR bool RuntimeServices_ArrayEqualityImpl_m3673667702 (RuntimeObject * __this /* static, unused */, RuntimeArray * ___lhs0, RuntimeArray * ___rhs1, const RuntimeMethod* method);
// System.Int32 System.Array::get_Rank()
extern "C" IL2CPP_METHOD_ATTR int32_t Array_get_Rank_m3448755881 (RuntimeArray * __this, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* p0, const RuntimeMethod* method);
// System.Int32 System.Array::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t Array_get_Length_m21610649 (RuntimeArray * __this, const RuntimeMethod* method);
// System.Object System.Array::GetValue(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Array_GetValue_m2528546681 (RuntimeArray * __this, int32_t p0, const RuntimeMethod* method);
// System.Boolean Boo.Lang.Runtime.RuntimeServices::EqualityOperator(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR bool RuntimeServices_EqualityOperator_m2384872086 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___lhs0, RuntimeObject * ___rhs1, const RuntimeMethod* method);
// System.TypeCode Boo.Lang.Runtime.RuntimeServices::GetConvertTypeCode(System.TypeCode,System.TypeCode)
extern "C" IL2CPP_METHOD_ATTR int32_t RuntimeServices_GetConvertTypeCode_m597524256 (RuntimeObject * __this /* static, unused */, int32_t ___lhsTypeCode0, int32_t ___rhsTypeCode1, const RuntimeMethod* method);
// System.Boolean System.Decimal::op_Equality(System.Decimal,System.Decimal)
extern "C" IL2CPP_METHOD_ATTR bool Decimal_op_Equality_m77262825 (RuntimeObject * __this /* static, unused */, Decimal_t2948259380  p0, Decimal_t2948259380  p1, const RuntimeMethod* method);
// System.Reflection.MethodInfo Boo.Lang.Runtime.RuntimeServices::FindImplicitConversionMethod(System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>,System.Type,System.Type)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * RuntimeServices_FindImplicitConversionMethod_m4176567206 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___candidates0, Type_t * ___from1, Type_t * ___to2, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo> Boo.Lang.Runtime.RuntimeServices::GetExtensionMethods()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* RuntimeServices_GetExtensionMethods_m2018979233 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CGetExtensionMethodsU3Ec__IteratorC__ctor_m1217043206 (U3CGetExtensionMethodsU3Ec__IteratorC_t3368530435 * __this, const RuntimeMethod* method);
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::CreateCoerceDispatcher(System.Object,System.Type)
extern "C" IL2CPP_METHOD_ATTR Dispatcher_t684365006 * RuntimeServices_CreateCoerceDispatcher_m661106792 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___value0, Type_t * ___toType1, const RuntimeMethod* method);
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * MethodBase_Invoke_m1776411915 (MethodBase_t * __this, RuntimeObject * p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Reflection.MethodInfo> Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::System.Collections.Generic.IEnumerable<System.Reflection.MethodInfo>.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MethodInfoU3E_GetEnumerator_m1148048048 (U3CGetExtensionMethodsU3Ec__IteratorC_t3368530435 * __this, const RuntimeMethod* method);
// System.Int32 System.Threading.Interlocked::CompareExchange(System.Int32&,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Interlocked_CompareExchange_m3023855514 (RuntimeObject * __this /* static, unused */, int32_t* p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo> Boo.Lang.Runtime.ExtensionRegistry::get_Extensions()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ExtensionRegistry_get_Extensions_m3605511872 (ExtensionRegistry_t2424660641 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method);
// System.Void Boo.Lang.Runtime.TextReaderEnumerator/<lines>c__IteratorD::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3ClinesU3Ec__IteratorD__ctor_m1372403301 (U3ClinesU3Ec__IteratorD_t110925711 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.String> Boo.Lang.Runtime.TextReaderEnumerator/<lines>c__IteratorD::System.Collections.Generic.IEnumerable<string>.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* U3ClinesU3Ec__IteratorD_System_Collections_Generic_IEnumerableU3CstringU3E_GetEnumerator_m3555722259 (U3ClinesU3Ec__IteratorD_t110925711 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Boo.Lang.Builtins::join(System.Collections.IEnumerable,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Builtins_join_m864932387 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___enumerable0, String_t* ___separator1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Builtins_join_m864932387_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		RuntimeObject* L_1 = ___enumerable0;
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, L_1);
		V_1 = L_2;
		RuntimeObject* L_3 = V_1;
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, IDisposable_t3640265483_il2cpp_TypeInfo_var));
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject* L_4 = V_1;
			NullCheck(L_4);
			bool L_5 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_4);
			if (!L_5)
			{
				goto IL_0051;
			}
		}

IL_001f:
		{
			StringBuilder_t * L_6 = V_0;
			RuntimeObject* L_7 = V_1;
			NullCheck(L_7);
			RuntimeObject * L_8 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_7);
			NullCheck(L_6);
			StringBuilder_Append_m1640838743(L_6, L_8, /*hidden argument*/NULL);
			goto IL_0046;
		}

IL_0031:
		{
			StringBuilder_t * L_9 = V_0;
			String_t* L_10 = ___separator1;
			NullCheck(L_9);
			StringBuilder_Append_m1965104174(L_9, L_10, /*hidden argument*/NULL);
			StringBuilder_t * L_11 = V_0;
			RuntimeObject* L_12 = V_1;
			NullCheck(L_12);
			RuntimeObject * L_13 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_12);
			NullCheck(L_11);
			StringBuilder_Append_m1640838743(L_11, L_13, /*hidden argument*/NULL);
		}

IL_0046:
		{
			RuntimeObject* L_14 = V_1;
			NullCheck(L_14);
			bool L_15 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_14);
			if (L_15)
			{
				goto IL_0031;
			}
		}

IL_0051:
		{
			IL2CPP_LEAVE(0x63, FINALLY_0056);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0056;
	}

FINALLY_0056:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_16 = V_2;
			if (!L_16)
			{
				goto IL_0062;
			}
		}

IL_005c:
		{
			RuntimeObject* L_17 = V_2;
			NullCheck(L_17);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_17);
		}

IL_0062:
		{
			IL2CPP_END_FINALLY(86)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(86)
	{
		IL2CPP_JUMP_TBL(0x63, IL_0063)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0063:
	{
		StringBuilder_t * L_18 = V_0;
		NullCheck(L_18);
		String_t* L_19 = StringBuilder_ToString_m3317489284(L_18, /*hidden argument*/NULL);
		return L_19;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Boo.Lang.Runtime.DynamicDispatching.Dispatcher::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Dispatcher__ctor_m4145559729 (Dispatcher_t684365006 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Object Boo.Lang.Runtime.DynamicDispatching.Dispatcher::Invoke(System.Object,System.Object[])
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Dispatcher_Invoke_m1639676350 (Dispatcher_t684365006 * __this, RuntimeObject * ___target0, ObjectU5BU5D_t2843939325* ___args1, const RuntimeMethod* method)
{
	RuntimeObject * result = NULL;
	if(__this->get_prev_9() != NULL)
	{
		Dispatcher_Invoke_m1639676350((Dispatcher_t684365006 *)__this->get_prev_9(), ___target0, ___args1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t2843939325*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___target0, ___args1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, ObjectU5BU5D_t2843939325*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___target0, ___args1, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t2843939325* >::Invoke(targetMethod, targetThis, ___target0, ___args1);
					else
						result = GenericVirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t2843939325* >::Invoke(targetMethod, targetThis, ___target0, ___args1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t2843939325* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___target0, ___args1);
					else
						result = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t2843939325* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___target0, ___args1);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, ObjectU5BU5D_t2843939325*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___target0, ___args1, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< RuntimeObject *, ObjectU5BU5D_t2843939325* >::Invoke(targetMethod, ___target0, ___args1);
					else
						result = GenericVirtFuncInvoker1< RuntimeObject *, ObjectU5BU5D_t2843939325* >::Invoke(targetMethod, ___target0, ___args1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< RuntimeObject *, ObjectU5BU5D_t2843939325* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___target0, ___args1);
					else
						result = VirtFuncInvoker1< RuntimeObject *, ObjectU5BU5D_t2843939325* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___target0, ___args1);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, ObjectU5BU5D_t2843939325*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___target0, ___args1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Boo.Lang.Runtime.DynamicDispatching.Dispatcher::BeginInvoke(System.Object,System.Object[],System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Dispatcher_BeginInvoke_m1986273823 (Dispatcher_t684365006 * __this, RuntimeObject * ___target0, ObjectU5BU5D_t2843939325* ___args1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___target0;
	__d_args[1] = ___args1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Object Boo.Lang.Runtime.DynamicDispatching.Dispatcher::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Dispatcher_EndInvoke_m1934666275 (Dispatcher_t684365006 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject *)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DispatcherCache__ctor_m2156165103 (DispatcherCache_t1010326087 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::.cctor()
extern "C" IL2CPP_METHOD_ATTR void DispatcherCache__cctor_m62575632 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DispatcherCache__cctor_m62575632_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DispatcherKey_t2110064572_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((DispatcherKey_t2110064572_StaticFields*)il2cpp_codegen_static_fields_for(DispatcherKey_t2110064572_il2cpp_TypeInfo_var))->get_EqualityComparer_0();
		Dictionary_2_t866247282 * L_1 = (Dictionary_2_t866247282 *)il2cpp_codegen_object_new(Dictionary_2_t866247282_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1815469916(L_1, L_0, /*hidden argument*/Dictionary_2__ctor_m1815469916_RuntimeMethod_var);
		((DispatcherCache_t1010326087_StaticFields*)il2cpp_codegen_static_fields_for(DispatcherCache_t1010326087_il2cpp_TypeInfo_var))->set__cache_0(L_1);
		return;
	}
}
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::Get(Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory)
extern "C" IL2CPP_METHOD_ATTR Dispatcher_t684365006 * DispatcherCache_Get_m3609792288 (DispatcherCache_t1010326087 * __this, DispatcherKey_t2110064572 * ___key0, DispatcherFactory_t1014155341 * ___factory1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DispatcherCache_Get_m3609792288_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dispatcher_t684365006 * V_0 = NULL;
	Dictionary_2_t866247282 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(DispatcherCache_t1010326087_il2cpp_TypeInfo_var);
		Dictionary_2_t866247282 * L_0 = ((DispatcherCache_t1010326087_StaticFields*)il2cpp_codegen_static_fields_for(DispatcherCache_t1010326087_il2cpp_TypeInfo_var))->get__cache_0();
		DispatcherKey_t2110064572 * L_1 = ___key0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_TryGetValue_m1990775459(L_0, L_1, (&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m1990775459_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_004f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DispatcherCache_t1010326087_il2cpp_TypeInfo_var);
		Dictionary_2_t866247282 * L_3 = ((DispatcherCache_t1010326087_StaticFields*)il2cpp_codegen_static_fields_for(DispatcherCache_t1010326087_il2cpp_TypeInfo_var))->get__cache_0();
		V_1 = L_3;
		Dictionary_2_t866247282 * L_4 = V_1;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_001e:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(DispatcherCache_t1010326087_il2cpp_TypeInfo_var);
			Dictionary_2_t866247282 * L_5 = ((DispatcherCache_t1010326087_StaticFields*)il2cpp_codegen_static_fields_for(DispatcherCache_t1010326087_il2cpp_TypeInfo_var))->get__cache_0();
			DispatcherKey_t2110064572 * L_6 = ___key0;
			NullCheck(L_5);
			bool L_7 = Dictionary_2_TryGetValue_m1990775459(L_5, L_6, (&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m1990775459_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_0043;
			}
		}

IL_0030:
		{
			DispatcherFactory_t1014155341 * L_8 = ___factory1;
			NullCheck(L_8);
			Dispatcher_t684365006 * L_9 = DispatcherFactory_Invoke_m2833957726(L_8, /*hidden argument*/NULL);
			V_0 = L_9;
			IL2CPP_RUNTIME_CLASS_INIT(DispatcherCache_t1010326087_il2cpp_TypeInfo_var);
			Dictionary_2_t866247282 * L_10 = ((DispatcherCache_t1010326087_StaticFields*)il2cpp_codegen_static_fields_for(DispatcherCache_t1010326087_il2cpp_TypeInfo_var))->get__cache_0();
			DispatcherKey_t2110064572 * L_11 = ___key0;
			Dispatcher_t684365006 * L_12 = V_0;
			NullCheck(L_10);
			Dictionary_2_Add_m163959252(L_10, L_11, L_12, /*hidden argument*/Dictionary_2_Add_m163959252_RuntimeMethod_var);
		}

IL_0043:
		{
			IL2CPP_LEAVE(0x4F, FINALLY_0048);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0048;
	}

FINALLY_0048:
	{ // begin finally (depth: 1)
		Dictionary_2_t866247282 * L_13 = V_1;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(72)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(72)
	{
		IL2CPP_JUMP_TBL(0x4F, IL_004f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004f:
	{
		Dispatcher_t684365006 * L_14 = V_0;
		return L_14;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  Dispatcher_t684365006 * DelegatePInvokeWrapper_DispatcherFactory_t1014155341 (DispatcherFactory_t1014155341 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DelegatePInvokeWrapper_DispatcherFactory_t1014155341_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	typedef Il2CppMethodPointer (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	Il2CppMethodPointer returnValue = il2cppPInvokeFunc();

	// Marshaling of return value back from native representation
	Dispatcher_t684365006 * _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_function_ptr_to_delegate<Dispatcher_t684365006>(returnValue, Dispatcher_t684365006_il2cpp_TypeInfo_var);

	return _returnValue_unmarshaled;
}
// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void DispatcherFactory__ctor_m3649217775 (DispatcherFactory_t1014155341 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::Invoke()
extern "C" IL2CPP_METHOD_ATTR Dispatcher_t684365006 * DispatcherFactory_Invoke_m2833957726 (DispatcherFactory_t1014155341 * __this, const RuntimeMethod* method)
{
	Dispatcher_t684365006 * result = NULL;
	if(__this->get_prev_9() != NULL)
	{
		DispatcherFactory_Invoke_m2833957726((DispatcherFactory_t1014155341 *)__this->get_prev_9(), method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 0)
		{
			// open
			{
				typedef Dispatcher_t684365006 * (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef Dispatcher_t684365006 * (*FunctionPointerType) (RuntimeObject *, void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< Dispatcher_t684365006 * >::Invoke(targetMethod, targetThis);
					else
						result = GenericVirtFuncInvoker0< Dispatcher_t684365006 * >::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< Dispatcher_t684365006 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						result = VirtFuncInvoker0< Dispatcher_t684365006 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef Dispatcher_t684365006 * (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* DispatcherFactory_BeginInvoke_m1351536112 (DispatcherFactory_t1014155341 * __this, AsyncCallback_t3962456242 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR Dispatcher_t684365006 * DispatcherFactory_EndInvoke_m2974203098 (DispatcherFactory_t1014155341 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (Dispatcher_t684365006 *)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherKey::.ctor(System.Type,System.String,System.Type[])
extern "C" IL2CPP_METHOD_ATTR void DispatcherKey__ctor_m1810669420 (DispatcherKey_t2110064572 * __this, Type_t * ___type0, String_t* ___name1, TypeU5BU5D_t3940880105* ___arguments2, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___type0;
		__this->set__type_1(L_0);
		String_t* L_1 = ___name1;
		__this->set__name_2(L_1);
		TypeU5BU5D_t3940880105* L_2 = ___arguments2;
		__this->set__arguments_3(L_2);
		return;
	}
}
// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherKey::.cctor()
extern "C" IL2CPP_METHOD_ATTR void DispatcherKey__cctor_m1082726794 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DispatcherKey__cctor_m1082726794_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		_EqualityComparer_t965810167 * L_0 = (_EqualityComparer_t965810167 *)il2cpp_codegen_object_new(_EqualityComparer_t965810167_il2cpp_TypeInfo_var);
		_EqualityComparer__ctor_m1412158449(L_0, /*hidden argument*/NULL);
		((DispatcherKey_t2110064572_StaticFields*)il2cpp_codegen_static_fields_for(DispatcherKey_t2110064572_il2cpp_TypeInfo_var))->set_EqualityComparer_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherKey/_EqualityComparer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void _EqualityComparer__ctor_m1412158449 (_EqualityComparer_t965810167 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Boo.Lang.Runtime.DynamicDispatching.DispatcherKey/_EqualityComparer::GetHashCode(Boo.Lang.Runtime.DynamicDispatching.DispatcherKey)
extern "C" IL2CPP_METHOD_ATTR int32_t _EqualityComparer_GetHashCode_m3745681409 (_EqualityComparer_t965810167 * __this, DispatcherKey_t2110064572 * ___key0, const RuntimeMethod* method)
{
	{
		DispatcherKey_t2110064572 * L_0 = ___key0;
		NullCheck(L_0);
		Type_t * L_1 = L_0->get__type_1();
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Type::GetHashCode() */, L_1);
		DispatcherKey_t2110064572 * L_3 = ___key0;
		NullCheck(L_3);
		String_t* L_4 = L_3->get__name_2();
		NullCheck(L_4);
		int32_t L_5 = String_GetHashCode_m1906374149(L_4, /*hidden argument*/NULL);
		DispatcherKey_t2110064572 * L_6 = ___key0;
		NullCheck(L_6);
		TypeU5BU5D_t3940880105* L_7 = L_6->get__arguments_3();
		NullCheck(L_7);
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_2^(int32_t)L_5))^(int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_7)->max_length))))));
	}
}
// System.Boolean Boo.Lang.Runtime.DynamicDispatching.DispatcherKey/_EqualityComparer::Equals(Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.DispatcherKey)
extern "C" IL2CPP_METHOD_ATTR bool _EqualityComparer_Equals_m2225820911 (_EqualityComparer_t965810167 * __this, DispatcherKey_t2110064572 * ___x0, DispatcherKey_t2110064572 * ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_EqualityComparer_Equals_m2225820911_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		DispatcherKey_t2110064572 * L_0 = ___x0;
		NullCheck(L_0);
		Type_t * L_1 = L_0->get__type_1();
		DispatcherKey_t2110064572 * L_2 = ___y1;
		NullCheck(L_2);
		Type_t * L_3 = L_2->get__type_1();
		if ((((RuntimeObject*)(Type_t *)L_1) == ((RuntimeObject*)(Type_t *)L_3)))
		{
			goto IL_0013;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		DispatcherKey_t2110064572 * L_4 = ___x0;
		NullCheck(L_4);
		TypeU5BU5D_t3940880105* L_5 = L_4->get__arguments_3();
		NullCheck(L_5);
		DispatcherKey_t2110064572 * L_6 = ___y1;
		NullCheck(L_6);
		TypeU5BU5D_t3940880105* L_7 = L_6->get__arguments_3();
		NullCheck(L_7);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length))))) == ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_7)->max_length)))))))
		{
			goto IL_002a;
		}
	}
	{
		return (bool)0;
	}

IL_002a:
	{
		DispatcherKey_t2110064572 * L_8 = ___x0;
		NullCheck(L_8);
		String_t* L_9 = L_8->get__name_2();
		DispatcherKey_t2110064572 * L_10 = ___y1;
		NullCheck(L_10);
		String_t* L_11 = L_10->get__name_2();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_12 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_9, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0042;
		}
	}
	{
		return (bool)0;
	}

IL_0042:
	{
		V_0 = 0;
		goto IL_0064;
	}

IL_0049:
	{
		DispatcherKey_t2110064572 * L_13 = ___x0;
		NullCheck(L_13);
		TypeU5BU5D_t3940880105* L_14 = L_13->get__arguments_3();
		int32_t L_15 = V_0;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		Type_t * L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		DispatcherKey_t2110064572 * L_18 = ___y1;
		NullCheck(L_18);
		TypeU5BU5D_t3940880105* L_19 = L_18->get__arguments_3();
		int32_t L_20 = V_0;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		Type_t * L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		if ((((RuntimeObject*)(Type_t *)L_17) == ((RuntimeObject*)(Type_t *)L_22)))
		{
			goto IL_0060;
		}
	}
	{
		return (bool)0;
	}

IL_0060:
	{
		int32_t L_23 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0064:
	{
		int32_t L_24 = V_0;
		DispatcherKey_t2110064572 * L_25 = ___x0;
		NullCheck(L_25);
		TypeU5BU5D_t3940880105* L_26 = L_25->get__arguments_3();
		NullCheck(L_26);
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_26)->max_length)))))))
		{
			goto IL_0049;
		}
	}
	{
		return (bool)1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Boo.Lang.Runtime.ExtensionRegistry::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ExtensionRegistry__ctor_m323844458 (ExtensionRegistry_t2424660641 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExtensionRegistry__ctor_m323844458_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t1242660502 * L_0 = (List_1_t1242660502 *)il2cpp_codegen_object_new(List_1_t1242660502_il2cpp_TypeInfo_var);
		List_1__ctor_m1115569667(L_0, /*hidden argument*/List_1__ctor_m1115569667_RuntimeMethod_var);
		__this->set__extensions_0(L_0);
		RuntimeObject * L_1 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m297566312(L_1, /*hidden argument*/NULL);
		__this->set__classLock_1(L_1);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Boo.Lang.Runtime.ExtensionRegistry::Register(System.Type)
extern "C" IL2CPP_METHOD_ATTR void ExtensionRegistry_Register_m2065832968 (ExtensionRegistry_t2424660641 * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject * L_0 = __this->get__classLock_1();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		List_1_t1242660502 * L_2 = ExtensionRegistry_CopyExtensions_m530464131(__this, /*hidden argument*/NULL);
		Type_t * L_3 = ___type0;
		List_1_t1242660502 * L_4 = ExtensionRegistry_AddExtensionMembers_m1072684021(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		__this->set__extensions_0(L_4);
		IL2CPP_LEAVE(0x2B, FINALLY_0024);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0024;
	}

FINALLY_0024:
	{ // begin finally (depth: 1)
		RuntimeObject * L_5 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(36)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(36)
	{
		IL2CPP_JUMP_TBL(0x2B, IL_002b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002b:
	{
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo> Boo.Lang.Runtime.ExtensionRegistry::get_Extensions()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ExtensionRegistry_get_Extensions_m3605511872 (ExtensionRegistry_t2424660641 * __this, const RuntimeMethod* method)
{
	{
		List_1_t1242660502 * L_0 = __this->get__extensions_0();
		return L_0;
	}
}
// Boo.Lang.List`1<System.Reflection.MemberInfo> Boo.Lang.Runtime.ExtensionRegistry::AddExtensionMembers(Boo.Lang.List`1<System.Reflection.MemberInfo>,System.Type)
extern "C" IL2CPP_METHOD_ATTR List_1_t1242660502 * ExtensionRegistry_AddExtensionMembers_m1072684021 (RuntimeObject * __this /* static, unused */, List_1_t1242660502 * ___extensions0, Type_t * ___type1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExtensionRegistry_AddExtensionMembers_m1072684021_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MemberInfo_t * V_0 = NULL;
	MemberInfoU5BU5D_t1302094432* V_1 = NULL;
	int32_t V_2 = 0;
	{
		Type_t * L_0 = ___type1;
		NullCheck(L_0);
		MemberInfoU5BU5D_t1302094432* L_1 = VirtFuncInvoker1< MemberInfoU5BU5D_t1302094432*, int32_t >::Invoke(48 /* System.Reflection.MemberInfo[] System.Type::GetMembers(System.Reflection.BindingFlags) */, L_0, ((int32_t)24));
		V_1 = L_1;
		V_2 = 0;
		goto IL_004b;
	}

IL_0010:
	{
		MemberInfoU5BU5D_t1302094432* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		MemberInfo_t * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		MemberInfo_t * L_6 = V_0;
		RuntimeTypeHandle_t3027515415  L_7 = { reinterpret_cast<intptr_t> (ExtensionAttribute_t1723066603_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		bool L_9 = Attribute_IsDefined_m3363303722(NULL /*static, unused*/, L_6, L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_002e;
		}
	}
	{
		goto IL_0047;
	}

IL_002e:
	{
		List_1_t1242660502 * L_10 = ___extensions0;
		MemberInfo_t * L_11 = V_0;
		NullCheck(L_10);
		bool L_12 = List_1_Contains_m769064252(L_10, L_11, /*hidden argument*/List_1_Contains_m769064252_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_003f;
		}
	}
	{
		goto IL_0047;
	}

IL_003f:
	{
		List_1_t1242660502 * L_13 = ___extensions0;
		MemberInfo_t * L_14 = V_0;
		NullCheck(L_13);
		VirtFuncInvoker1< List_1_t1242660502 *, MemberInfo_t * >::Invoke(31 /* Boo.Lang.List`1<T> Boo.Lang.List`1<System.Reflection.MemberInfo>::Add(T) */, L_13, L_14);
	}

IL_0047:
	{
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_004b:
	{
		int32_t L_16 = V_2;
		MemberInfoU5BU5D_t1302094432* L_17 = V_1;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length)))))))
		{
			goto IL_0010;
		}
	}
	{
		List_1_t1242660502 * L_18 = ___extensions0;
		return L_18;
	}
}
// Boo.Lang.List`1<System.Reflection.MemberInfo> Boo.Lang.Runtime.ExtensionRegistry::CopyExtensions()
extern "C" IL2CPP_METHOD_ATTR List_1_t1242660502 * ExtensionRegistry_CopyExtensions_m530464131 (ExtensionRegistry_t2424660641 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExtensionRegistry_CopyExtensions_m530464131_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t1242660502 * L_0 = __this->get__extensions_0();
		List_1_t1242660502 * L_1 = (List_1_t1242660502 *)il2cpp_codegen_object_new(List_1_t1242660502_il2cpp_TypeInfo_var);
		List_1__ctor_m3956803198(L_1, L_0, /*hidden argument*/List_1__ctor_m3956803198_RuntimeMethod_var);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Boo.Lang.Runtime.RuntimeServices::.cctor()
extern "C" IL2CPP_METHOD_ATTR void RuntimeServices__cctor_m1381641241 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RuntimeServices__cctor_m1381641241_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((RuntimeServices_t2098243569_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeServices_t2098243569_il2cpp_TypeInfo_var))->set_NoArguments_0(((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0)));
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (RuntimeServices_t2098243569_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		((RuntimeServices_t2098243569_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeServices_t2098243569_il2cpp_TypeInfo_var))->set_RuntimeServicesType_1(L_1);
		DispatcherCache_t1010326087 * L_2 = (DispatcherCache_t1010326087 *)il2cpp_codegen_object_new(DispatcherCache_t1010326087_il2cpp_TypeInfo_var);
		DispatcherCache__ctor_m2156165103(L_2, /*hidden argument*/NULL);
		((RuntimeServices_t2098243569_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeServices_t2098243569_il2cpp_TypeInfo_var))->set__cache_2(L_2);
		ExtensionRegistry_t2424660641 * L_3 = (ExtensionRegistry_t2424660641 *)il2cpp_codegen_object_new(ExtensionRegistry_t2424660641_il2cpp_TypeInfo_var);
		ExtensionRegistry__ctor_m323844458(L_3, /*hidden argument*/NULL);
		((RuntimeServices_t2098243569_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeServices_t2098243569_il2cpp_TypeInfo_var))->set__extensions_3(L_3);
		bool L_4 = ((bool)1);
		RuntimeObject * L_5 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_4);
		((RuntimeServices_t2098243569_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeServices_t2098243569_il2cpp_TypeInfo_var))->set_True_4(L_5);
		return;
	}
}
// System.Void Boo.Lang.Runtime.RuntimeServices::RegisterExtensions(System.Type)
extern "C" IL2CPP_METHOD_ATTR void RuntimeServices_RegisterExtensions_m618331591 (RuntimeObject * __this /* static, unused */, Type_t * ___extensions0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RuntimeServices_RegisterExtensions_m618331591_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t2098243569_il2cpp_TypeInfo_var);
		ExtensionRegistry_t2424660641 * L_0 = ((RuntimeServices_t2098243569_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeServices_t2098243569_il2cpp_TypeInfo_var))->get__extensions_3();
		Type_t * L_1 = ___extensions0;
		NullCheck(L_0);
		ExtensionRegistry_Register_m2065832968(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::GetDispatcher(System.Object,System.String,System.Type[],Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory)
extern "C" IL2CPP_METHOD_ATTR Dispatcher_t684365006 * RuntimeServices_GetDispatcher_m3922777458 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___target0, String_t* ___cacheKeyName1, TypeU5BU5D_t3940880105* ___cacheKeyTypes2, DispatcherFactory_t1014155341 * ___factory3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RuntimeServices_GetDispatcher_m3922777458_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	DispatcherKey_t2110064572 * V_1 = NULL;
	Type_t * G_B2_0 = NULL;
	Type_t * G_B1_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		Type_t * L_1 = ((Type_t *)IsInstClass((RuntimeObject*)L_0, Type_t_il2cpp_TypeInfo_var));
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0013;
		}
	}
	{
		RuntimeObject * L_2 = ___target0;
		NullCheck(L_2);
		Type_t * L_3 = Object_GetType_m88164663(L_2, /*hidden argument*/NULL);
		G_B2_0 = L_3;
	}

IL_0013:
	{
		V_0 = G_B2_0;
		Type_t * L_4 = V_0;
		String_t* L_5 = ___cacheKeyName1;
		TypeU5BU5D_t3940880105* L_6 = ___cacheKeyTypes2;
		DispatcherKey_t2110064572 * L_7 = (DispatcherKey_t2110064572 *)il2cpp_codegen_object_new(DispatcherKey_t2110064572_il2cpp_TypeInfo_var);
		DispatcherKey__ctor_m1810669420(L_7, L_4, L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t2098243569_il2cpp_TypeInfo_var);
		DispatcherCache_t1010326087 * L_8 = ((RuntimeServices_t2098243569_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeServices_t2098243569_il2cpp_TypeInfo_var))->get__cache_2();
		DispatcherKey_t2110064572 * L_9 = V_1;
		DispatcherFactory_t1014155341 * L_10 = ___factory3;
		NullCheck(L_8);
		Dispatcher_t684365006 * L_11 = DispatcherCache_Get_m3609792288(L_8, L_9, L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Object Boo.Lang.Runtime.RuntimeServices::Coerce(System.Object,System.Type)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * RuntimeServices_Coerce_m1663619687 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___value0, Type_t * ___toType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RuntimeServices_Coerce_m1663619687_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t2843939325* V_0 = NULL;
	Dispatcher_t684365006 * V_1 = NULL;
	U3CCoerceU3Ec__AnonStorey1D_t572148199 * V_2 = NULL;
	{
		U3CCoerceU3Ec__AnonStorey1D_t572148199 * L_0 = (U3CCoerceU3Ec__AnonStorey1D_t572148199 *)il2cpp_codegen_object_new(U3CCoerceU3Ec__AnonStorey1D_t572148199_il2cpp_TypeInfo_var);
		U3CCoerceU3Ec__AnonStorey1D__ctor_m2227718426(L_0, /*hidden argument*/NULL);
		V_2 = L_0;
		U3CCoerceU3Ec__AnonStorey1D_t572148199 * L_1 = V_2;
		RuntimeObject * L_2 = ___value0;
		NullCheck(L_1);
		L_1->set_value_0(L_2);
		U3CCoerceU3Ec__AnonStorey1D_t572148199 * L_3 = V_2;
		Type_t * L_4 = ___toType1;
		NullCheck(L_3);
		L_3->set_toType_1(L_4);
		U3CCoerceU3Ec__AnonStorey1D_t572148199 * L_5 = V_2;
		NullCheck(L_5);
		RuntimeObject * L_6 = L_5->get_value_0();
		if (L_6)
		{
			goto IL_0021;
		}
	}
	{
		return NULL;
	}

IL_0021:
	{
		ObjectU5BU5D_t2843939325* L_7 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		U3CCoerceU3Ec__AnonStorey1D_t572148199 * L_8 = V_2;
		NullCheck(L_8);
		Type_t * L_9 = L_8->get_toType_1();
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_9);
		V_0 = L_7;
		U3CCoerceU3Ec__AnonStorey1D_t572148199 * L_10 = V_2;
		NullCheck(L_10);
		RuntimeObject * L_11 = L_10->get_value_0();
		TypeU5BU5D_t3940880105* L_12 = ((TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)1));
		U3CCoerceU3Ec__AnonStorey1D_t572148199 * L_13 = V_2;
		NullCheck(L_13);
		Type_t * L_14 = L_13->get_toType_1();
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_14);
		U3CCoerceU3Ec__AnonStorey1D_t572148199 * L_15 = V_2;
		intptr_t L_16 = (intptr_t)U3CCoerceU3Ec__AnonStorey1D_U3CU3Em__15_m4262864175_RuntimeMethod_var;
		DispatcherFactory_t1014155341 * L_17 = (DispatcherFactory_t1014155341 *)il2cpp_codegen_object_new(DispatcherFactory_t1014155341_il2cpp_TypeInfo_var);
		DispatcherFactory__ctor_m3649217775(L_17, L_15, L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t2098243569_il2cpp_TypeInfo_var);
		Dispatcher_t684365006 * L_18 = RuntimeServices_GetDispatcher_m3922777458(NULL /*static, unused*/, L_11, _stringLiteral4123921170, L_12, L_17, /*hidden argument*/NULL);
		V_1 = L_18;
		Dispatcher_t684365006 * L_19 = V_1;
		U3CCoerceU3Ec__AnonStorey1D_t572148199 * L_20 = V_2;
		NullCheck(L_20);
		RuntimeObject * L_21 = L_20->get_value_0();
		ObjectU5BU5D_t2843939325* L_22 = V_0;
		NullCheck(L_19);
		RuntimeObject * L_23 = Dispatcher_Invoke_m1639676350(L_19, L_21, L_22, /*hidden argument*/NULL);
		return L_23;
	}
}
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::CreateCoerceDispatcher(System.Object,System.Type)
extern "C" IL2CPP_METHOD_ATTR Dispatcher_t684365006 * RuntimeServices_CreateCoerceDispatcher_m661106792 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___value0, Type_t * ___toType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RuntimeServices_CreateCoerceDispatcher_m661106792_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	MethodInfo_t * V_1 = NULL;
	{
		Type_t * L_0 = ___toType1;
		RuntimeObject * L_1 = ___value0;
		NullCheck(L_0);
		bool L_2 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(41 /* System.Boolean System.Type::IsInstanceOfType(System.Object) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		intptr_t L_3 = (intptr_t)RuntimeServices_IdentityDispatcher_m1725786149_RuntimeMethod_var;
		Dispatcher_t684365006 * L_4 = (Dispatcher_t684365006 *)il2cpp_codegen_object_new(Dispatcher_t684365006_il2cpp_TypeInfo_var);
		Dispatcher__ctor_m4145559729(L_4, NULL, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0019:
	{
		RuntimeObject * L_5 = ___value0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_5, ICoercible_t1130343077_il2cpp_TypeInfo_var)))
		{
			goto IL_0031;
		}
	}
	{
		intptr_t L_6 = (intptr_t)RuntimeServices_CoercibleDispatcher_m4058208960_RuntimeMethod_var;
		Dispatcher_t684365006 * L_7 = (Dispatcher_t684365006 *)il2cpp_codegen_object_new(Dispatcher_t684365006_il2cpp_TypeInfo_var);
		Dispatcher__ctor_m4145559729(L_7, NULL, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0031:
	{
		RuntimeObject * L_8 = ___value0;
		NullCheck(L_8);
		Type_t * L_9 = Object_GetType_m88164663(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		Type_t * L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t2098243569_il2cpp_TypeInfo_var);
		bool L_11 = RuntimeServices_IsPromotableNumeric_m2095247129(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		Type_t * L_12 = ___toType1;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t2098243569_il2cpp_TypeInfo_var);
		bool L_13 = RuntimeServices_IsPromotableNumeric_m2095247129(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0056;
		}
	}
	{
		Type_t * L_14 = V_0;
		Type_t * L_15 = ___toType1;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t2098243569_il2cpp_TypeInfo_var);
		Dispatcher_t684365006 * L_16 = RuntimeServices_EmitPromotionDispatcher_m734050861(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		return L_16;
	}

IL_0056:
	{
		Type_t * L_17 = V_0;
		Type_t * L_18 = ___toType1;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t2098243569_il2cpp_TypeInfo_var);
		MethodInfo_t * L_19 = RuntimeServices_FindImplicitConversionOperator_m2560683559(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		V_1 = L_19;
		MethodInfo_t * L_20 = V_1;
		if (L_20)
		{
			goto IL_0071;
		}
	}
	{
		intptr_t L_21 = (intptr_t)RuntimeServices_IdentityDispatcher_m1725786149_RuntimeMethod_var;
		Dispatcher_t684365006 * L_22 = (Dispatcher_t684365006 *)il2cpp_codegen_object_new(Dispatcher_t684365006_il2cpp_TypeInfo_var);
		Dispatcher__ctor_m4145559729(L_22, NULL, L_21, /*hidden argument*/NULL);
		return L_22;
	}

IL_0071:
	{
		MethodInfo_t * L_23 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t2098243569_il2cpp_TypeInfo_var);
		Dispatcher_t684365006 * L_24 = RuntimeServices_EmitImplicitConversionDispatcher_m4072191859(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		return L_24;
	}
}
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::EmitPromotionDispatcher(System.Type,System.Type)
extern "C" IL2CPP_METHOD_ATTR Dispatcher_t684365006 * RuntimeServices_EmitPromotionDispatcher_m734050861 (RuntimeObject * __this /* static, unused */, Type_t * ___fromType0, Type_t * ___toType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RuntimeServices_EmitPromotionDispatcher_m734050861_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (Dispatcher_t684365006_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_2 = { reinterpret_cast<intptr_t> (NumericPromotions_t3533651679_0_0_0_var) };
		Type_t * L_3 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_4 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4));
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral2755855817);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral2755855817);
		ObjectU5BU5D_t2843939325* L_5 = L_4;
		Type_t * L_6 = ___fromType0;
		int32_t L_7 = Type_GetTypeCode_m480753082(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(TypeCode_t2987224087_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_9);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_9);
		ObjectU5BU5D_t2843939325* L_10 = L_5;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral3454777324);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3454777324);
		ObjectU5BU5D_t2843939325* L_11 = L_10;
		Type_t * L_12 = ___toType1;
		int32_t L_13 = Type_GetTypeCode_m480753082(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(TypeCode_t2987224087_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_15);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_15);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Concat_m2971454694(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		NullCheck(L_3);
		MethodInfo_t * L_17 = Type_GetMethod_m2019726356(L_3, L_16, /*hidden argument*/NULL);
		Delegate_t1188392813 * L_18 = Delegate_CreateDelegate_m2396489936(NULL /*static, unused*/, L_1, L_17, /*hidden argument*/NULL);
		return ((Dispatcher_t684365006 *)CastclassSealed((RuntimeObject*)L_18, Dispatcher_t684365006_il2cpp_TypeInfo_var));
	}
}
// System.Boolean Boo.Lang.Runtime.RuntimeServices::IsPromotableNumeric(System.Type)
extern "C" IL2CPP_METHOD_ATTR bool RuntimeServices_IsPromotableNumeric_m2095247129 (RuntimeObject * __this /* static, unused */, Type_t * ___fromType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RuntimeServices_IsPromotableNumeric_m2095247129_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___fromType0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		int32_t L_1 = Type_GetTypeCode_m480753082(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t2098243569_il2cpp_TypeInfo_var);
		bool L_2 = RuntimeServices_IsPromotableNumeric_m3673263760(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::EmitImplicitConversionDispatcher(System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR Dispatcher_t684365006 * RuntimeServices_EmitImplicitConversionDispatcher_m4072191859 (RuntimeObject * __this /* static, unused */, MethodInfo_t * ___method0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RuntimeServices_EmitImplicitConversionDispatcher_m4072191859_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t4009522197 * V_0 = NULL;
	{
		U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t4009522197 * L_0 = (U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t4009522197 *)il2cpp_codegen_object_new(U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t4009522197_il2cpp_TypeInfo_var);
		U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E__ctor_m1951951183(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t4009522197 * L_1 = V_0;
		MethodInfo_t * L_2 = ___method0;
		NullCheck(L_1);
		L_1->set_method_0(L_2);
		U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t4009522197 * L_3 = V_0;
		intptr_t L_4 = (intptr_t)U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_U3CU3Em__16_m940011970_RuntimeMethod_var;
		Dispatcher_t684365006 * L_5 = (Dispatcher_t684365006 *)il2cpp_codegen_object_new(Dispatcher_t684365006_il2cpp_TypeInfo_var);
		Dispatcher__ctor_m4145559729(L_5, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Object Boo.Lang.Runtime.RuntimeServices::CoercibleDispatcher(System.Object,System.Object[])
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * RuntimeServices_CoercibleDispatcher_m4058208960 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___o0, ObjectU5BU5D_t2843939325* ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RuntimeServices_CoercibleDispatcher_m4058208960_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___o0;
		ObjectU5BU5D_t2843939325* L_1 = ___args1;
		NullCheck(L_1);
		int32_t L_2 = 0;
		RuntimeObject * L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_0, ICoercible_t1130343077_il2cpp_TypeInfo_var)));
		RuntimeObject * L_4 = InterfaceFuncInvoker1< RuntimeObject *, Type_t * >::Invoke(0 /* System.Object Boo.Lang.Runtime.ICoercible::Coerce(System.Type) */, ICoercible_t1130343077_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_0, ICoercible_t1130343077_il2cpp_TypeInfo_var)), ((Type_t *)CastclassClass((RuntimeObject*)L_3, Type_t_il2cpp_TypeInfo_var)));
		return L_4;
	}
}
// System.Object Boo.Lang.Runtime.RuntimeServices::IdentityDispatcher(System.Object,System.Object[])
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * RuntimeServices_IdentityDispatcher_m1725786149 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___o0, ObjectU5BU5D_t2843939325* ___args1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___o0;
		return L_0;
	}
}
// System.Boolean Boo.Lang.Runtime.RuntimeServices::IsNumeric(System.TypeCode)
extern "C" IL2CPP_METHOD_ATTR bool RuntimeServices_IsNumeric_m2879598828 (RuntimeObject * __this /* static, unused */, int32_t ___code0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___code0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)5)))
		{
			case 0:
			{
				goto IL_003d;
			}
			case 1:
			{
				goto IL_003b;
			}
			case 2:
			{
				goto IL_003f;
			}
			case 3:
			{
				goto IL_0045;
			}
			case 4:
			{
				goto IL_0041;
			}
			case 5:
			{
				goto IL_0047;
			}
			case 6:
			{
				goto IL_0043;
			}
			case 7:
			{
				goto IL_0049;
			}
			case 8:
			{
				goto IL_004b;
			}
			case 9:
			{
				goto IL_004d;
			}
			case 10:
			{
				goto IL_004f;
			}
		}
	}
	{
		goto IL_0051;
	}

IL_003b:
	{
		return (bool)1;
	}

IL_003d:
	{
		return (bool)1;
	}

IL_003f:
	{
		return (bool)1;
	}

IL_0041:
	{
		return (bool)1;
	}

IL_0043:
	{
		return (bool)1;
	}

IL_0045:
	{
		return (bool)1;
	}

IL_0047:
	{
		return (bool)1;
	}

IL_0049:
	{
		return (bool)1;
	}

IL_004b:
	{
		return (bool)1;
	}

IL_004d:
	{
		return (bool)1;
	}

IL_004f:
	{
		return (bool)1;
	}

IL_0051:
	{
		return (bool)0;
	}
}
// System.Collections.IEnumerable Boo.Lang.Runtime.RuntimeServices::GetEnumerable(System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* RuntimeServices_GetEnumerable_m2712819723 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___enumerable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RuntimeServices_GetEnumerable_m2712819723_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	TextReader_t283511965 * V_1 = NULL;
	{
		RuntimeObject * L_0 = ___enumerable0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ApplicationException_t2339761290 * L_1 = (ApplicationException_t2339761290 *)il2cpp_codegen_object_new(ApplicationException_t2339761290_il2cpp_TypeInfo_var);
		ApplicationException__ctor_m2517758450(L_1, _stringLiteral1439784940, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,RuntimeServices_GetEnumerable_m2712819723_RuntimeMethod_var);
	}

IL_0011:
	{
		RuntimeObject * L_2 = ___enumerable0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IEnumerable_t1941168011_il2cpp_TypeInfo_var));
		RuntimeObject* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_4 = V_0;
		return L_4;
	}

IL_0020:
	{
		RuntimeObject * L_5 = ___enumerable0;
		V_1 = ((TextReader_t283511965 *)IsInstClass((RuntimeObject*)L_5, TextReader_t283511965_il2cpp_TypeInfo_var));
		TextReader_t283511965 * L_6 = V_1;
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		TextReader_t283511965 * L_7 = V_1;
		RuntimeObject* L_8 = TextReaderEnumerator_lines_m1045794663(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0034:
	{
		ApplicationException_t2339761290 * L_9 = (ApplicationException_t2339761290 *)il2cpp_codegen_object_new(ApplicationException_t2339761290_il2cpp_TypeInfo_var);
		ApplicationException__ctor_m2517758450(L_9, _stringLiteral4177126825, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9,RuntimeServices_GetEnumerable_m2712819723_RuntimeMethod_var);
	}
}
// System.String Boo.Lang.Runtime.RuntimeServices::op_Addition(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* RuntimeServices_op_Addition_m583005490 (RuntimeObject * __this /* static, unused */, String_t* ___lhs0, String_t* ___rhs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RuntimeServices_op_Addition_m583005490_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___lhs0;
		String_t* L_1 = ___rhs1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m3937257545(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Boo.Lang.Runtime.RuntimeServices::EqualityOperator(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR bool RuntimeServices_EqualityOperator_m2384872086 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___lhs0, RuntimeObject * ___rhs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RuntimeServices_EqualityOperator_m2384872086_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RuntimeArray * V_2 = NULL;
	RuntimeArray * V_3 = NULL;
	int32_t G_B15_0 = 0;
	{
		RuntimeObject * L_0 = ___lhs0;
		RuntimeObject * L_1 = ___rhs1;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_0) == ((RuntimeObject*)(RuntimeObject *)L_1))))
		{
			goto IL_0009;
		}
	}
	{
		return (bool)1;
	}

IL_0009:
	{
		RuntimeObject * L_2 = ___lhs0;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject * L_3 = ___rhs1;
		RuntimeObject * L_4 = ___lhs0;
		NullCheck(L_3);
		bool L_5 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_3, L_4);
		return L_5;
	}

IL_0017:
	{
		RuntimeObject * L_6 = ___rhs1;
		if (L_6)
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject * L_7 = ___lhs0;
		RuntimeObject * L_8 = ___rhs1;
		NullCheck(L_7);
		bool L_9 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_7, L_8);
		return L_9;
	}

IL_0025:
	{
		RuntimeObject * L_10 = ___lhs0;
		NullCheck(L_10);
		Type_t * L_11 = Object_GetType_m88164663(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		int32_t L_12 = Type_GetTypeCode_m480753082(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		RuntimeObject * L_13 = ___rhs1;
		NullCheck(L_13);
		Type_t * L_14 = Object_GetType_m88164663(L_13, /*hidden argument*/NULL);
		int32_t L_15 = Type_GetTypeCode_m480753082(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		V_1 = L_15;
		int32_t L_16 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t2098243569_il2cpp_TypeInfo_var);
		bool L_17 = RuntimeServices_IsNumeric_m2879598828(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_18 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t2098243569_il2cpp_TypeInfo_var);
		bool L_19 = RuntimeServices_IsNumeric_m2879598828(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_005d;
		}
	}
	{
		RuntimeObject * L_20 = ___lhs0;
		int32_t L_21 = V_0;
		RuntimeObject * L_22 = ___rhs1;
		int32_t L_23 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t2098243569_il2cpp_TypeInfo_var);
		bool L_24 = RuntimeServices_EqualityOperator_m2541246096(NULL /*static, unused*/, L_20, L_21, L_22, L_23, /*hidden argument*/NULL);
		return L_24;
	}

IL_005d:
	{
		RuntimeObject * L_25 = ___lhs0;
		V_2 = ((RuntimeArray *)IsInstClass((RuntimeObject*)L_25, RuntimeArray_il2cpp_TypeInfo_var));
		RuntimeArray * L_26 = V_2;
		if (!L_26)
		{
			goto IL_007f;
		}
	}
	{
		RuntimeObject * L_27 = ___rhs1;
		V_3 = ((RuntimeArray *)IsInstClass((RuntimeObject*)L_27, RuntimeArray_il2cpp_TypeInfo_var));
		RuntimeArray * L_28 = V_3;
		if (!L_28)
		{
			goto IL_007f;
		}
	}
	{
		RuntimeArray * L_29 = V_2;
		RuntimeArray * L_30 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t2098243569_il2cpp_TypeInfo_var);
		bool L_31 = RuntimeServices_ArrayEqualityImpl_m3673667702(NULL /*static, unused*/, L_29, L_30, /*hidden argument*/NULL);
		return L_31;
	}

IL_007f:
	{
		RuntimeObject * L_32 = ___lhs0;
		RuntimeObject * L_33 = ___rhs1;
		NullCheck(L_32);
		bool L_34 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_32, L_33);
		if (L_34)
		{
			goto IL_0094;
		}
	}
	{
		RuntimeObject * L_35 = ___rhs1;
		RuntimeObject * L_36 = ___lhs0;
		NullCheck(L_35);
		bool L_37 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_35, L_36);
		G_B15_0 = ((int32_t)(L_37));
		goto IL_0095;
	}

IL_0094:
	{
		G_B15_0 = 1;
	}

IL_0095:
	{
		return (bool)G_B15_0;
	}
}
// System.Boolean Boo.Lang.Runtime.RuntimeServices::ArrayEqualityImpl(System.Array,System.Array)
extern "C" IL2CPP_METHOD_ATTR bool RuntimeServices_ArrayEqualityImpl_m3673667702 (RuntimeObject * __this /* static, unused */, RuntimeArray * ___lhs0, RuntimeArray * ___rhs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RuntimeServices_ArrayEqualityImpl_m3673667702_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		RuntimeArray * L_0 = ___lhs0;
		NullCheck(L_0);
		int32_t L_1 = Array_get_Rank_m3448755881(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0018;
		}
	}
	{
		RuntimeArray * L_2 = ___rhs1;
		NullCheck(L_2);
		int32_t L_3 = Array_get_Rank_m3448755881(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0023;
		}
	}

IL_0018:
	{
		ArgumentException_t132251570 * L_4 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_4, _stringLiteral181402784, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4,RuntimeServices_ArrayEqualityImpl_m3673667702_RuntimeMethod_var);
	}

IL_0023:
	{
		RuntimeArray * L_5 = ___lhs0;
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m21610649(L_5, /*hidden argument*/NULL);
		RuntimeArray * L_7 = ___rhs1;
		NullCheck(L_7);
		int32_t L_8 = Array_get_Length_m21610649(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_6) == ((int32_t)L_8)))
		{
			goto IL_0036;
		}
	}
	{
		return (bool)0;
	}

IL_0036:
	{
		V_0 = 0;
		goto IL_005b;
	}

IL_003d:
	{
		RuntimeArray * L_9 = ___lhs0;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		RuntimeObject * L_11 = Array_GetValue_m2528546681(L_9, L_10, /*hidden argument*/NULL);
		RuntimeArray * L_12 = ___rhs1;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		RuntimeObject * L_14 = Array_GetValue_m2528546681(L_12, L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t2098243569_il2cpp_TypeInfo_var);
		bool L_15 = RuntimeServices_EqualityOperator_m2384872086(NULL /*static, unused*/, L_11, L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0057;
		}
	}
	{
		return (bool)0;
	}

IL_0057:
	{
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_005b:
	{
		int32_t L_17 = V_0;
		RuntimeArray * L_18 = ___lhs0;
		NullCheck(L_18);
		int32_t L_19 = Array_get_Length_m21610649(L_18, /*hidden argument*/NULL);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_003d;
		}
	}
	{
		return (bool)1;
	}
}
// System.TypeCode Boo.Lang.Runtime.RuntimeServices::GetConvertTypeCode(System.TypeCode,System.TypeCode)
extern "C" IL2CPP_METHOD_ATTR int32_t RuntimeServices_GetConvertTypeCode_m597524256 (RuntimeObject * __this /* static, unused */, int32_t ___lhsTypeCode0, int32_t ___rhsTypeCode1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___lhsTypeCode0;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)15))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1 = ___rhsTypeCode1;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_0013;
		}
	}

IL_0010:
	{
		return (int32_t)(((int32_t)15));
	}

IL_0013:
	{
		int32_t L_2 = ___lhsTypeCode0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)14))))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_3 = ___rhsTypeCode1;
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)14)))))
		{
			goto IL_0026;
		}
	}

IL_0023:
	{
		return (int32_t)(((int32_t)14));
	}

IL_0026:
	{
		int32_t L_4 = ___lhsTypeCode0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)13))))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_5 = ___rhsTypeCode1;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_0039;
		}
	}

IL_0036:
	{
		return (int32_t)(((int32_t)13));
	}

IL_0039:
	{
		int32_t L_6 = ___lhsTypeCode0;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_7 = ___rhsTypeCode1;
		if ((((int32_t)L_7) == ((int32_t)5)))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_8 = ___rhsTypeCode1;
		if ((((int32_t)L_8) == ((int32_t)7)))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_9 = ___rhsTypeCode1;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)9))))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_10 = ___rhsTypeCode1;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0062;
		}
	}

IL_005f:
	{
		return (int32_t)(((int32_t)11));
	}

IL_0062:
	{
		return (int32_t)(((int32_t)12));
	}

IL_0065:
	{
		int32_t L_11 = ___rhsTypeCode1;
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_0091;
		}
	}
	{
		int32_t L_12 = ___lhsTypeCode0;
		if ((((int32_t)L_12) == ((int32_t)5)))
		{
			goto IL_008b;
		}
	}
	{
		int32_t L_13 = ___lhsTypeCode0;
		if ((((int32_t)L_13) == ((int32_t)7)))
		{
			goto IL_008b;
		}
	}
	{
		int32_t L_14 = ___lhsTypeCode0;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)9))))
		{
			goto IL_008b;
		}
	}
	{
		int32_t L_15 = ___lhsTypeCode0;
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_008e;
		}
	}

IL_008b:
	{
		return (int32_t)(((int32_t)11));
	}

IL_008e:
	{
		return (int32_t)(((int32_t)12));
	}

IL_0091:
	{
		int32_t L_16 = ___lhsTypeCode0;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)11))))
		{
			goto IL_00a1;
		}
	}
	{
		int32_t L_17 = ___rhsTypeCode1;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_00a4;
		}
	}

IL_00a1:
	{
		return (int32_t)(((int32_t)11));
	}

IL_00a4:
	{
		int32_t L_18 = ___lhsTypeCode0;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_00c8;
		}
	}
	{
		int32_t L_19 = ___rhsTypeCode1;
		if ((((int32_t)L_19) == ((int32_t)5)))
		{
			goto IL_00c2;
		}
	}
	{
		int32_t L_20 = ___rhsTypeCode1;
		if ((((int32_t)L_20) == ((int32_t)7)))
		{
			goto IL_00c2;
		}
	}
	{
		int32_t L_21 = ___rhsTypeCode1;
		if ((!(((uint32_t)L_21) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_00c5;
		}
	}

IL_00c2:
	{
		return (int32_t)(((int32_t)11));
	}

IL_00c5:
	{
		return (int32_t)(((int32_t)10));
	}

IL_00c8:
	{
		int32_t L_22 = ___rhsTypeCode1;
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_00ec;
		}
	}
	{
		int32_t L_23 = ___lhsTypeCode0;
		if ((((int32_t)L_23) == ((int32_t)5)))
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_24 = ___lhsTypeCode0;
		if ((((int32_t)L_24) == ((int32_t)7)))
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_25 = ___lhsTypeCode0;
		if ((!(((uint32_t)L_25) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_00e9;
		}
	}

IL_00e6:
	{
		return (int32_t)(((int32_t)11));
	}

IL_00e9:
	{
		return (int32_t)(((int32_t)10));
	}

IL_00ec:
	{
		return (int32_t)(((int32_t)9));
	}
}
// System.Boolean Boo.Lang.Runtime.RuntimeServices::EqualityOperator(System.Object,System.TypeCode,System.Object,System.TypeCode)
extern "C" IL2CPP_METHOD_ATTR bool RuntimeServices_EqualityOperator_m2541246096 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___lhs0, int32_t ___lhsTypeCode1, RuntimeObject * ___rhs2, int32_t ___rhsTypeCode3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RuntimeServices_EqualityOperator_m2541246096_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	{
		RuntimeObject * L_0 = ___lhs0;
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_0, IConvertible_t2977365677_il2cpp_TypeInfo_var));
		RuntimeObject * L_1 = ___rhs2;
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)L_1, IConvertible_t2977365677_il2cpp_TypeInfo_var));
		int32_t L_2 = ___lhsTypeCode1;
		int32_t L_3 = ___rhsTypeCode3;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t2098243569_il2cpp_TypeInfo_var);
		int32_t L_4 = RuntimeServices_GetConvertTypeCode_m597524256(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		int32_t L_5 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)((int32_t)10))))
		{
			case 0:
			{
				goto IL_0094;
			}
			case 1:
			{
				goto IL_0083;
			}
			case 2:
			{
				goto IL_0072;
			}
			case 3:
			{
				goto IL_0061;
			}
			case 4:
			{
				goto IL_0050;
			}
			case 5:
			{
				goto IL_003c;
			}
		}
	}
	{
		goto IL_00a5;
	}

IL_003c:
	{
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		Decimal_t2948259380  L_7 = InterfaceFuncInvoker1< Decimal_t2948259380 , RuntimeObject* >::Invoke(4 /* System.Decimal System.IConvertible::ToDecimal(System.IFormatProvider) */, IConvertible_t2977365677_il2cpp_TypeInfo_var, L_6, (RuntimeObject*)NULL);
		RuntimeObject* L_8 = V_1;
		NullCheck(L_8);
		Decimal_t2948259380  L_9 = InterfaceFuncInvoker1< Decimal_t2948259380 , RuntimeObject* >::Invoke(4 /* System.Decimal System.IConvertible::ToDecimal(System.IFormatProvider) */, IConvertible_t2977365677_il2cpp_TypeInfo_var, L_8, (RuntimeObject*)NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2948259380_il2cpp_TypeInfo_var);
		bool L_10 = Decimal_op_Equality_m77262825(NULL /*static, unused*/, L_7, L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_0050:
	{
		RuntimeObject* L_11 = V_0;
		NullCheck(L_11);
		double L_12 = InterfaceFuncInvoker1< double, RuntimeObject* >::Invoke(5 /* System.Double System.IConvertible::ToDouble(System.IFormatProvider) */, IConvertible_t2977365677_il2cpp_TypeInfo_var, L_11, (RuntimeObject*)NULL);
		RuntimeObject* L_13 = V_1;
		NullCheck(L_13);
		double L_14 = InterfaceFuncInvoker1< double, RuntimeObject* >::Invoke(5 /* System.Double System.IConvertible::ToDouble(System.IFormatProvider) */, IConvertible_t2977365677_il2cpp_TypeInfo_var, L_13, (RuntimeObject*)NULL);
		return (bool)((((double)L_12) == ((double)L_14))? 1 : 0);
	}

IL_0061:
	{
		RuntimeObject* L_15 = V_0;
		NullCheck(L_15);
		float L_16 = InterfaceFuncInvoker1< float, RuntimeObject* >::Invoke(10 /* System.Single System.IConvertible::ToSingle(System.IFormatProvider) */, IConvertible_t2977365677_il2cpp_TypeInfo_var, L_15, (RuntimeObject*)NULL);
		RuntimeObject* L_17 = V_1;
		NullCheck(L_17);
		float L_18 = InterfaceFuncInvoker1< float, RuntimeObject* >::Invoke(10 /* System.Single System.IConvertible::ToSingle(System.IFormatProvider) */, IConvertible_t2977365677_il2cpp_TypeInfo_var, L_17, (RuntimeObject*)NULL);
		return (bool)((((float)L_16) == ((float)L_18))? 1 : 0);
	}

IL_0072:
	{
		RuntimeObject* L_19 = V_0;
		NullCheck(L_19);
		uint64_t L_20 = InterfaceFuncInvoker1< uint64_t, RuntimeObject* >::Invoke(15 /* System.UInt64 System.IConvertible::ToUInt64(System.IFormatProvider) */, IConvertible_t2977365677_il2cpp_TypeInfo_var, L_19, (RuntimeObject*)NULL);
		RuntimeObject* L_21 = V_1;
		NullCheck(L_21);
		uint64_t L_22 = InterfaceFuncInvoker1< uint64_t, RuntimeObject* >::Invoke(15 /* System.UInt64 System.IConvertible::ToUInt64(System.IFormatProvider) */, IConvertible_t2977365677_il2cpp_TypeInfo_var, L_21, (RuntimeObject*)NULL);
		return (bool)((((int64_t)L_20) == ((int64_t)L_22))? 1 : 0);
	}

IL_0083:
	{
		RuntimeObject* L_23 = V_0;
		NullCheck(L_23);
		int64_t L_24 = InterfaceFuncInvoker1< int64_t, RuntimeObject* >::Invoke(8 /* System.Int64 System.IConvertible::ToInt64(System.IFormatProvider) */, IConvertible_t2977365677_il2cpp_TypeInfo_var, L_23, (RuntimeObject*)NULL);
		RuntimeObject* L_25 = V_1;
		NullCheck(L_25);
		int64_t L_26 = InterfaceFuncInvoker1< int64_t, RuntimeObject* >::Invoke(8 /* System.Int64 System.IConvertible::ToInt64(System.IFormatProvider) */, IConvertible_t2977365677_il2cpp_TypeInfo_var, L_25, (RuntimeObject*)NULL);
		return (bool)((((int64_t)L_24) == ((int64_t)L_26))? 1 : 0);
	}

IL_0094:
	{
		RuntimeObject* L_27 = V_0;
		NullCheck(L_27);
		uint32_t L_28 = InterfaceFuncInvoker1< uint32_t, RuntimeObject* >::Invoke(14 /* System.UInt32 System.IConvertible::ToUInt32(System.IFormatProvider) */, IConvertible_t2977365677_il2cpp_TypeInfo_var, L_27, (RuntimeObject*)NULL);
		RuntimeObject* L_29 = V_1;
		NullCheck(L_29);
		uint32_t L_30 = InterfaceFuncInvoker1< uint32_t, RuntimeObject* >::Invoke(14 /* System.UInt32 System.IConvertible::ToUInt32(System.IFormatProvider) */, IConvertible_t2977365677_il2cpp_TypeInfo_var, L_29, (RuntimeObject*)NULL);
		return (bool)((((int32_t)L_28) == ((int32_t)L_30))? 1 : 0);
	}

IL_00a5:
	{
		RuntimeObject* L_31 = V_0;
		NullCheck(L_31);
		int32_t L_32 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(7 /* System.Int32 System.IConvertible::ToInt32(System.IFormatProvider) */, IConvertible_t2977365677_il2cpp_TypeInfo_var, L_31, (RuntimeObject*)NULL);
		RuntimeObject* L_33 = V_1;
		NullCheck(L_33);
		int32_t L_34 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(7 /* System.Int32 System.IConvertible::ToInt32(System.IFormatProvider) */, IConvertible_t2977365677_il2cpp_TypeInfo_var, L_33, (RuntimeObject*)NULL);
		return (bool)((((int32_t)L_32) == ((int32_t)L_34))? 1 : 0);
	}
}
// System.Boolean Boo.Lang.Runtime.RuntimeServices::IsPromotableNumeric(System.TypeCode)
extern "C" IL2CPP_METHOD_ATTR bool RuntimeServices_IsPromotableNumeric_m3673263760 (RuntimeObject * __this /* static, unused */, int32_t ___code0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___code0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)3)))
		{
			case 0:
			{
				goto IL_0057;
			}
			case 1:
			{
				goto IL_005b;
			}
			case 2:
			{
				goto IL_0045;
			}
			case 3:
			{
				goto IL_0043;
			}
			case 4:
			{
				goto IL_0047;
			}
			case 5:
			{
				goto IL_004d;
			}
			case 6:
			{
				goto IL_0049;
			}
			case 7:
			{
				goto IL_004f;
			}
			case 8:
			{
				goto IL_004b;
			}
			case 9:
			{
				goto IL_0051;
			}
			case 10:
			{
				goto IL_0053;
			}
			case 11:
			{
				goto IL_0055;
			}
			case 12:
			{
				goto IL_0059;
			}
		}
	}
	{
		goto IL_005d;
	}

IL_0043:
	{
		return (bool)1;
	}

IL_0045:
	{
		return (bool)1;
	}

IL_0047:
	{
		return (bool)1;
	}

IL_0049:
	{
		return (bool)1;
	}

IL_004b:
	{
		return (bool)1;
	}

IL_004d:
	{
		return (bool)1;
	}

IL_004f:
	{
		return (bool)1;
	}

IL_0051:
	{
		return (bool)1;
	}

IL_0053:
	{
		return (bool)1;
	}

IL_0055:
	{
		return (bool)1;
	}

IL_0057:
	{
		return (bool)1;
	}

IL_0059:
	{
		return (bool)1;
	}

IL_005b:
	{
		return (bool)1;
	}

IL_005d:
	{
		return (bool)0;
	}
}
// System.Reflection.MethodInfo Boo.Lang.Runtime.RuntimeServices::FindImplicitConversionOperator(System.Type,System.Type)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * RuntimeServices_FindImplicitConversionOperator_m2560683559 (RuntimeObject * __this /* static, unused */, Type_t * ___from0, Type_t * ___to1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RuntimeServices_FindImplicitConversionOperator_m2560683559_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MethodInfo_t * G_B3_0 = NULL;
	MethodInfo_t * G_B1_0 = NULL;
	MethodInfo_t * G_B2_0 = NULL;
	{
		Type_t * L_0 = ___from0;
		NullCheck(L_0);
		MethodInfoU5BU5D_t2572182361* L_1 = VirtFuncInvoker1< MethodInfoU5BU5D_t2572182361*, int32_t >::Invoke(54 /* System.Reflection.MethodInfo[] System.Type::GetMethods(System.Reflection.BindingFlags) */, L_0, ((int32_t)88));
		Type_t * L_2 = ___from0;
		Type_t * L_3 = ___to1;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t2098243569_il2cpp_TypeInfo_var);
		MethodInfo_t * L_4 = RuntimeServices_FindImplicitConversionMethod_m4176567206(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_1, L_2, L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = L_4;
		G_B1_0 = L_5;
		if (L_5)
		{
			G_B3_0 = L_5;
			goto IL_0038;
		}
	}
	{
		Type_t * L_6 = ___to1;
		NullCheck(L_6);
		MethodInfoU5BU5D_t2572182361* L_7 = VirtFuncInvoker1< MethodInfoU5BU5D_t2572182361*, int32_t >::Invoke(54 /* System.Reflection.MethodInfo[] System.Type::GetMethods(System.Reflection.BindingFlags) */, L_6, ((int32_t)88));
		Type_t * L_8 = ___from0;
		Type_t * L_9 = ___to1;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t2098243569_il2cpp_TypeInfo_var);
		MethodInfo_t * L_10 = RuntimeServices_FindImplicitConversionMethod_m4176567206(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_7, L_8, L_9, /*hidden argument*/NULL);
		MethodInfo_t * L_11 = L_10;
		G_B2_0 = L_11;
		if (L_11)
		{
			G_B3_0 = L_11;
			goto IL_0038;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t2098243569_il2cpp_TypeInfo_var);
		RuntimeObject* L_12 = RuntimeServices_GetExtensionMethods_m2018979233(NULL /*static, unused*/, /*hidden argument*/NULL);
		Type_t * L_13 = ___from0;
		Type_t * L_14 = ___to1;
		MethodInfo_t * L_15 = RuntimeServices_FindImplicitConversionMethod_m4176567206(NULL /*static, unused*/, L_12, L_13, L_14, /*hidden argument*/NULL);
		G_B3_0 = L_15;
	}

IL_0038:
	{
		return G_B3_0;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo> Boo.Lang.Runtime.RuntimeServices::GetExtensionMethods()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* RuntimeServices_GetExtensionMethods_m2018979233 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RuntimeServices_GetExtensionMethods_m2018979233_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetExtensionMethodsU3Ec__IteratorC_t3368530435 * V_0 = NULL;
	{
		U3CGetExtensionMethodsU3Ec__IteratorC_t3368530435 * L_0 = (U3CGetExtensionMethodsU3Ec__IteratorC_t3368530435 *)il2cpp_codegen_object_new(U3CGetExtensionMethodsU3Ec__IteratorC_t3368530435_il2cpp_TypeInfo_var);
		U3CGetExtensionMethodsU3Ec__IteratorC__ctor_m1217043206(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetExtensionMethodsU3Ec__IteratorC_t3368530435 * L_1 = V_0;
		U3CGetExtensionMethodsU3Ec__IteratorC_t3368530435 * L_2 = L_1;
		NullCheck(L_2);
		L_2->set_U24PC_2(((int32_t)-2));
		return L_2;
	}
}
// System.Reflection.MethodInfo Boo.Lang.Runtime.RuntimeServices::FindImplicitConversionMethod(System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>,System.Type,System.Type)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * RuntimeServices_FindImplicitConversionMethod_m4176567206 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___candidates0, Type_t * ___from1, Type_t * ___to2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RuntimeServices_FindImplicitConversionMethod_m4176567206_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	ParameterInfoU5BU5D_t390618515* V_2 = NULL;
	MethodInfo_t * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = ___candidates0;
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>::GetEnumerator() */, IEnumerable_1_t857479137_il2cpp_TypeInfo_var, L_0);
		V_1 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0072;
		}

IL_000c:
		{
			RuntimeObject* L_2 = V_1;
			NullCheck(L_2);
			MethodInfo_t * L_3 = InterfaceFuncInvoker0< MethodInfo_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.MethodInfo>::get_Current() */, IEnumerator_1_t2310196716_il2cpp_TypeInfo_var, L_2);
			V_0 = L_3;
			MethodInfo_t * L_4 = V_0;
			NullCheck(L_4);
			String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_4);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_6 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_5, _stringLiteral3306367446, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_002d;
			}
		}

IL_0028:
		{
			goto IL_0072;
		}

IL_002d:
		{
			MethodInfo_t * L_7 = V_0;
			NullCheck(L_7);
			Type_t * L_8 = VirtFuncInvoker0< Type_t * >::Invoke(31 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_7);
			Type_t * L_9 = ___to2;
			if ((((RuntimeObject*)(Type_t *)L_8) == ((RuntimeObject*)(Type_t *)L_9)))
			{
				goto IL_003e;
			}
		}

IL_0039:
		{
			goto IL_0072;
		}

IL_003e:
		{
			MethodInfo_t * L_10 = V_0;
			NullCheck(L_10);
			ParameterInfoU5BU5D_t390618515* L_11 = VirtFuncInvoker0< ParameterInfoU5BU5D_t390618515* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_10);
			V_2 = L_11;
			ParameterInfoU5BU5D_t390618515* L_12 = V_2;
			NullCheck(L_12);
			if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length))))) == ((int32_t)1)))
			{
				goto IL_0053;
			}
		}

IL_004e:
		{
			goto IL_0072;
		}

IL_0053:
		{
			ParameterInfoU5BU5D_t390618515* L_13 = V_2;
			NullCheck(L_13);
			int32_t L_14 = 0;
			ParameterInfo_t1861056598 * L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
			NullCheck(L_15);
			Type_t * L_16 = VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_15);
			Type_t * L_17 = ___from1;
			NullCheck(L_16);
			bool L_18 = VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_16, L_17);
			if (L_18)
			{
				goto IL_006b;
			}
		}

IL_0066:
		{
			goto IL_0072;
		}

IL_006b:
		{
			MethodInfo_t * L_19 = V_0;
			V_3 = L_19;
			IL2CPP_LEAVE(0x8F, FINALLY_0082);
		}

IL_0072:
		{
			RuntimeObject* L_20 = V_1;
			NullCheck(L_20);
			bool L_21 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_20);
			if (L_21)
			{
				goto IL_000c;
			}
		}

IL_007d:
		{
			IL2CPP_LEAVE(0x8D, FINALLY_0082);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0082;
	}

FINALLY_0082:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_22 = V_1;
			if (L_22)
			{
				goto IL_0086;
			}
		}

IL_0085:
		{
			IL2CPP_END_FINALLY(130)
		}

IL_0086:
		{
			RuntimeObject* L_23 = V_1;
			NullCheck(L_23);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_23);
			IL2CPP_END_FINALLY(130)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(130)
	{
		IL2CPP_JUMP_TBL(0x8F, IL_008f)
		IL2CPP_JUMP_TBL(0x8D, IL_008d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_008d:
	{
		return (MethodInfo_t *)NULL;
	}

IL_008f:
	{
		MethodInfo_t * L_24 = V_3;
		return L_24;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Boo.Lang.Runtime.RuntimeServices/<Coerce>c__AnonStorey1D::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CCoerceU3Ec__AnonStorey1D__ctor_m2227718426 (U3CCoerceU3Ec__AnonStorey1D_t572148199 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices/<Coerce>c__AnonStorey1D::<>m__15()
extern "C" IL2CPP_METHOD_ATTR Dispatcher_t684365006 * U3CCoerceU3Ec__AnonStorey1D_U3CU3Em__15_m4262864175 (U3CCoerceU3Ec__AnonStorey1D_t572148199 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CCoerceU3Ec__AnonStorey1D_U3CU3Em__15_m4262864175_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = __this->get_value_0();
		Type_t * L_1 = __this->get_toType_1();
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t2098243569_il2cpp_TypeInfo_var);
		Dispatcher_t684365006 * L_2 = RuntimeServices_CreateCoerceDispatcher_m661106792(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Boo.Lang.Runtime.RuntimeServices/<EmitImplicitConversionDispatcher>c__AnonStorey1E::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E__ctor_m1951951183 (U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t4009522197 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Boo.Lang.Runtime.RuntimeServices/<EmitImplicitConversionDispatcher>c__AnonStorey1E::<>m__16(System.Object,System.Object[])
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_U3CU3Em__16_m940011970 (U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t4009522197 * __this, RuntimeObject * ___target0, ObjectU5BU5D_t2843939325* ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_U3CU3Em__16_m940011970_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t * L_0 = __this->get_method_0();
		ObjectU5BU5D_t2843939325* L_1 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		RuntimeObject * L_2 = ___target0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		NullCheck(L_0);
		RuntimeObject * L_3 = MethodBase_Invoke_m1776411915(L_0, NULL, L_1, /*hidden argument*/NULL);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CGetExtensionMethodsU3Ec__IteratorC__ctor_m1217043206 (U3CGetExtensionMethodsU3Ec__IteratorC_t3368530435 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::System.Collections.Generic.IEnumerator<System.Reflection.MethodInfo>.get_Current()
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumeratorU3CSystem_Reflection_MethodInfoU3E_get_Current_m3252140135 (U3CGetExtensionMethodsU3Ec__IteratorC_t3368530435 * __this, const RuntimeMethod* method)
{
	{
		MethodInfo_t * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Object Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerator_get_Current_m4085587551 (U3CGetExtensionMethodsU3Ec__IteratorC_t3368530435 * __this, const RuntimeMethod* method)
{
	{
		MethodInfo_t * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Collections.IEnumerator Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::System.Collections.IEnumerable.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerable_GetEnumerator_m907415348 (U3CGetExtensionMethodsU3Ec__IteratorC_t3368530435 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MethodInfoU3E_GetEnumerator_m1148048048(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Reflection.MethodInfo> Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::System.Collections.Generic.IEnumerable<System.Reflection.MethodInfo>.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MethodInfoU3E_GetEnumerator_m1148048048 (U3CGetExtensionMethodsU3Ec__IteratorC_t3368530435 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MethodInfoU3E_GetEnumerator_m1148048048_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t* L_0 = __this->get_address_of_U24PC_2();
		int32_t L_1 = Interlocked_CompareExchange_m3023855514(NULL /*static, unused*/, L_0, 0, ((int32_t)-2), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		return __this;
	}

IL_0014:
	{
		U3CGetExtensionMethodsU3Ec__IteratorC_t3368530435 * L_2 = (U3CGetExtensionMethodsU3Ec__IteratorC_t3368530435 *)il2cpp_codegen_object_new(U3CGetExtensionMethodsU3Ec__IteratorC_t3368530435_il2cpp_TypeInfo_var);
		U3CGetExtensionMethodsU3Ec__IteratorC__ctor_m1217043206(L_2, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CGetExtensionMethodsU3Ec__IteratorC_MoveNext_m4162423597 (U3CGetExtensionMethodsU3Ec__IteratorC_t3368530435 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetExtensionMethodsU3Ec__IteratorC_MoveNext_m4162423597_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U24PC_2();
		V_0 = L_0;
		__this->set_U24PC_2((-1));
		V_1 = (bool)0;
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0023;
			}
			case 1:
			{
				goto IL_003b;
			}
		}
	}
	{
		goto IL_00c2;
	}

IL_0023:
	{
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t2098243569_il2cpp_TypeInfo_var);
		ExtensionRegistry_t2424660641 * L_2 = ((RuntimeServices_t2098243569_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeServices_t2098243569_il2cpp_TypeInfo_var))->get__extensions_3();
		NullCheck(L_2);
		RuntimeObject* L_3 = ExtensionRegistry_get_Extensions_m3605511872(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		RuntimeObject* L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo>::GetEnumerator() */, IEnumerable_1_t2359854630_il2cpp_TypeInfo_var, L_3);
		__this->set_U3CU24s_49U3E__0_0(L_4);
		V_0 = ((int32_t)-3);
	}

IL_003b:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_5 = V_0;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1)))
			{
				case 0:
				{
					goto IL_008d;
				}
			}
		}

IL_0047:
		{
			goto IL_008d;
		}

IL_004c:
		{
			RuntimeObject* L_6 = __this->get_U3CU24s_49U3E__0_0();
			NullCheck(L_6);
			MemberInfo_t * L_7 = InterfaceFuncInvoker0< MemberInfo_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.MemberInfo>::get_Current() */, IEnumerator_1_t3812572209_il2cpp_TypeInfo_var, L_6);
			__this->set_U3CmemberU3E__1_1(L_7);
			MemberInfo_t * L_8 = __this->get_U3CmemberU3E__1_1();
			NullCheck(L_8);
			int32_t L_9 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Reflection.MemberTypes System.Reflection.MemberInfo::get_MemberType() */, L_8);
			if ((!(((uint32_t)L_9) == ((uint32_t)8))))
			{
				goto IL_008d;
			}
		}

IL_006e:
		{
			MemberInfo_t * L_10 = __this->get_U3CmemberU3E__1_1();
			__this->set_U24current_3(((MethodInfo_t *)CastclassClass((RuntimeObject*)L_10, MethodInfo_t_il2cpp_TypeInfo_var)));
			__this->set_U24PC_2(1);
			V_1 = (bool)1;
			IL2CPP_LEAVE(0xC4, FINALLY_00a2);
		}

IL_008d:
		{
			RuntimeObject* L_11 = __this->get_U3CU24s_49U3E__0_0();
			NullCheck(L_11);
			bool L_12 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_11);
			if (L_12)
			{
				goto IL_004c;
			}
		}

IL_009d:
		{
			IL2CPP_LEAVE(0xBB, FINALLY_00a2);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a2;
	}

FINALLY_00a2:
	{ // begin finally (depth: 1)
		{
			bool L_13 = V_1;
			if (!L_13)
			{
				goto IL_00a6;
			}
		}

IL_00a5:
		{
			IL2CPP_END_FINALLY(162)
		}

IL_00a6:
		{
			RuntimeObject* L_14 = __this->get_U3CU24s_49U3E__0_0();
			if (L_14)
			{
				goto IL_00af;
			}
		}

IL_00ae:
		{
			IL2CPP_END_FINALLY(162)
		}

IL_00af:
		{
			RuntimeObject* L_15 = __this->get_U3CU24s_49U3E__0_0();
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_15);
			IL2CPP_END_FINALLY(162)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(162)
	{
		IL2CPP_JUMP_TBL(0xC4, IL_00c4)
		IL2CPP_JUMP_TBL(0xBB, IL_00bb)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00bb:
	{
		__this->set_U24PC_2((-1));
	}

IL_00c2:
	{
		return (bool)0;
	}

IL_00c4:
	{
		return (bool)1;
	}
	// Dead block : IL_00c6: ldloc.2
}
// System.Void Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CGetExtensionMethodsU3Ec__IteratorC_Dispose_m3192498793 (U3CGetExtensionMethodsU3Ec__IteratorC_t3368530435 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetExtensionMethodsU3Ec__IteratorC_Dispose_m3192498793_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U24PC_2();
		V_0 = L_0;
		__this->set_U24PC_2((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_003b;
			}
			case 1:
			{
				goto IL_0021;
			}
		}
	}
	{
		goto IL_003b;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x3B, FINALLY_0026);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_2 = __this->get_U3CU24s_49U3E__0_0();
			if (L_2)
			{
				goto IL_002f;
			}
		}

IL_002e:
		{
			IL2CPP_END_FINALLY(38)
		}

IL_002f:
		{
			RuntimeObject* L_3 = __this->get_U3CU24s_49U3E__0_0();
			NullCheck(L_3);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_3);
			IL2CPP_END_FINALLY(38)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003b:
	{
		return;
	}
}
// System.Void Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CGetExtensionMethodsU3Ec__IteratorC_Reset_m865776842 (U3CGetExtensionMethodsU3Ec__IteratorC_t3368530435 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetExtensionMethodsU3Ec__IteratorC_Reset_m865776842_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,U3CGetExtensionMethodsU3Ec__IteratorC_Reset_m865776842_RuntimeMethod_var);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.IEnumerable`1<System.String> Boo.Lang.Runtime.TextReaderEnumerator::lines(System.IO.TextReader)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* TextReaderEnumerator_lines_m1045794663 (RuntimeObject * __this /* static, unused */, TextReader_t283511965 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextReaderEnumerator_lines_m1045794663_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3ClinesU3Ec__IteratorD_t110925711 * V_0 = NULL;
	{
		U3ClinesU3Ec__IteratorD_t110925711 * L_0 = (U3ClinesU3Ec__IteratorD_t110925711 *)il2cpp_codegen_object_new(U3ClinesU3Ec__IteratorD_t110925711_il2cpp_TypeInfo_var);
		U3ClinesU3Ec__IteratorD__ctor_m1372403301(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3ClinesU3Ec__IteratorD_t110925711 * L_1 = V_0;
		TextReader_t283511965 * L_2 = ___reader0;
		NullCheck(L_1);
		L_1->set_reader_0(L_2);
		U3ClinesU3Ec__IteratorD_t110925711 * L_3 = V_0;
		TextReader_t283511965 * L_4 = ___reader0;
		NullCheck(L_3);
		L_3->set_U3CU24U3Ereader_5(L_4);
		U3ClinesU3Ec__IteratorD_t110925711 * L_5 = V_0;
		U3ClinesU3Ec__IteratorD_t110925711 * L_6 = L_5;
		NullCheck(L_6);
		L_6->set_U24PC_3(((int32_t)-2));
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Boo.Lang.Runtime.TextReaderEnumerator/<lines>c__IteratorD::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3ClinesU3Ec__IteratorD__ctor_m1372403301 (U3ClinesU3Ec__IteratorD_t110925711 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Boo.Lang.Runtime.TextReaderEnumerator/<lines>c__IteratorD::System.Collections.Generic.IEnumerator<string>.get_Current()
extern "C" IL2CPP_METHOD_ATTR String_t* U3ClinesU3Ec__IteratorD_System_Collections_Generic_IEnumeratorU3CstringU3E_get_Current_m3218720954 (U3ClinesU3Ec__IteratorD_t110925711 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U24current_4();
		return L_0;
	}
}
// System.Object Boo.Lang.Runtime.TextReaderEnumerator/<lines>c__IteratorD::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3ClinesU3Ec__IteratorD_System_Collections_IEnumerator_get_Current_m3287764264 (U3ClinesU3Ec__IteratorD_t110925711 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U24current_4();
		return L_0;
	}
}
// System.Collections.IEnumerator Boo.Lang.Runtime.TextReaderEnumerator/<lines>c__IteratorD::System.Collections.IEnumerable.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* U3ClinesU3Ec__IteratorD_System_Collections_IEnumerable_GetEnumerator_m1565190784 (U3ClinesU3Ec__IteratorD_t110925711 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = U3ClinesU3Ec__IteratorD_System_Collections_Generic_IEnumerableU3CstringU3E_GetEnumerator_m3555722259(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.String> Boo.Lang.Runtime.TextReaderEnumerator/<lines>c__IteratorD::System.Collections.Generic.IEnumerable<string>.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* U3ClinesU3Ec__IteratorD_System_Collections_Generic_IEnumerableU3CstringU3E_GetEnumerator_m3555722259 (U3ClinesU3Ec__IteratorD_t110925711 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3ClinesU3Ec__IteratorD_System_Collections_Generic_IEnumerableU3CstringU3E_GetEnumerator_m3555722259_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3ClinesU3Ec__IteratorD_t110925711 * V_0 = NULL;
	{
		int32_t* L_0 = __this->get_address_of_U24PC_3();
		int32_t L_1 = Interlocked_CompareExchange_m3023855514(NULL /*static, unused*/, L_0, 0, ((int32_t)-2), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		return __this;
	}

IL_0014:
	{
		U3ClinesU3Ec__IteratorD_t110925711 * L_2 = (U3ClinesU3Ec__IteratorD_t110925711 *)il2cpp_codegen_object_new(U3ClinesU3Ec__IteratorD_t110925711_il2cpp_TypeInfo_var);
		U3ClinesU3Ec__IteratorD__ctor_m1372403301(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		U3ClinesU3Ec__IteratorD_t110925711 * L_3 = V_0;
		TextReader_t283511965 * L_4 = __this->get_U3CU24U3Ereader_5();
		NullCheck(L_3);
		L_3->set_reader_0(L_4);
		U3ClinesU3Ec__IteratorD_t110925711 * L_5 = V_0;
		return L_5;
	}
}
// System.Boolean Boo.Lang.Runtime.TextReaderEnumerator/<lines>c__IteratorD::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3ClinesU3Ec__IteratorD_MoveNext_m1496570322 (U3ClinesU3Ec__IteratorD_t110925711 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3ClinesU3Ec__IteratorD_MoveNext_m1496570322_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	String_t* V_2 = NULL;
	bool V_3 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		V_1 = (bool)0;
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0023;
			}
			case 1:
			{
				goto IL_0032;
			}
		}
	}
	{
		goto IL_009d;
	}

IL_0023:
	{
		TextReader_t283511965 * L_2 = __this->get_reader_0();
		__this->set_U3CU24s_51U3E__0_1(L_2);
		V_0 = ((int32_t)-3);
	}

IL_0032:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_3 = V_0;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)))
			{
				case 0:
				{
					goto IL_005d;
				}
			}
		}

IL_003e:
		{
			goto IL_005d;
		}

IL_0043:
		{
			String_t* L_4 = __this->get_U3ClineU3E__1_2();
			__this->set_U24current_4(L_4);
			__this->set_U24PC_3(1);
			V_1 = (bool)1;
			IL2CPP_LEAVE(0x9F, FINALLY_007b);
		}

IL_005d:
		{
			TextReader_t283511965 * L_5 = __this->get_reader_0();
			NullCheck(L_5);
			String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.IO.TextReader::ReadLine() */, L_5);
			String_t* L_7 = L_6;
			V_2 = L_7;
			__this->set_U3ClineU3E__1_2(L_7);
			String_t* L_8 = V_2;
			if (L_8)
			{
				goto IL_0043;
			}
		}

IL_0076:
		{
			IL2CPP_LEAVE(0x96, FINALLY_007b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007b;
	}

FINALLY_007b:
	{ // begin finally (depth: 1)
		{
			bool L_9 = V_1;
			if (!L_9)
			{
				goto IL_007f;
			}
		}

IL_007e:
		{
			IL2CPP_END_FINALLY(123)
		}

IL_007f:
		{
			TextReader_t283511965 * L_10 = __this->get_U3CU24s_51U3E__0_1();
			if (!L_10)
			{
				goto IL_0095;
			}
		}

IL_008a:
		{
			TextReader_t283511965 * L_11 = __this->get_U3CU24s_51U3E__0_1();
			NullCheck(L_11);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_11);
		}

IL_0095:
		{
			IL2CPP_END_FINALLY(123)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(123)
	{
		IL2CPP_JUMP_TBL(0x9F, IL_009f)
		IL2CPP_JUMP_TBL(0x96, IL_0096)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0096:
	{
		__this->set_U24PC_3((-1));
	}

IL_009d:
	{
		return (bool)0;
	}

IL_009f:
	{
		return (bool)1;
	}
	// Dead block : IL_00a1: ldloc.3
}
// System.Void Boo.Lang.Runtime.TextReaderEnumerator/<lines>c__IteratorD::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3ClinesU3Ec__IteratorD_Dispose_m3487747665 (U3ClinesU3Ec__IteratorD_t110925711 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3ClinesU3Ec__IteratorD_Dispose_m3487747665_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_003d;
			}
			case 1:
			{
				goto IL_0021;
			}
		}
	}
	{
		goto IL_003d;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x3D, FINALLY_0026);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		{
			TextReader_t283511965 * L_2 = __this->get_U3CU24s_51U3E__0_1();
			if (!L_2)
			{
				goto IL_003c;
			}
		}

IL_0031:
		{
			TextReader_t283511965 * L_3 = __this->get_U3CU24s_51U3E__0_1();
			NullCheck(L_3);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_3);
		}

IL_003c:
		{
			IL2CPP_END_FINALLY(38)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x3D, IL_003d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003d:
	{
		return;
	}
}
// System.Void Boo.Lang.Runtime.TextReaderEnumerator/<lines>c__IteratorD::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3ClinesU3Ec__IteratorD_Reset_m4117646820 (U3ClinesU3Ec__IteratorD_t110925711 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3ClinesU3Ec__IteratorD_Reset_m4117646820_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,U3ClinesU3Ec__IteratorD_Reset_m4117646820_RuntimeMethod_var);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

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

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "UnityScript_Lang_U3CModuleU3E3783534214.h"
#include "UnityScript_Lang_UnityScript_Lang_Array1396575355.h"
#include "mscorlib_System_Void1841601450.h"
#include "mscorlib_System_Collections_CollectionBase1101587467.h"
#include "mscorlib_System_Int322071877448.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "mscorlib_System_Collections_ArrayList4252133567.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityScript_Lang_UnityScript_Lang_Extensions2406697300.h"
#include "UnityScript_Lang_UnityScript_Lang_ListUpdateableEn2462779323.h"
#include "UnityScript_Lang_UnityScript_Lang_UnityRuntimeServ3303336867.h"
#include "mscorlib_System_RuntimeTypeHandle2330101084.h"
#include "mscorlib_System_ArgumentNullException628810857.h"

// UnityScript.Lang.Array
struct Array_t1396575355;
// System.Collections.CollectionBase
struct CollectionBase_t1101587467;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.Array
struct Il2CppArray;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.String
struct String_t;
// System.Collections.IEnumerable
struct IEnumerable_t2911409499;
// UnityScript.Lang.ListUpdateableEnumerator
struct ListUpdateableEnumerator_t2462779323;
// System.Collections.IList
struct IList_t3321498491;
// UnityScript.Lang.UnityRuntimeServices
struct UnityRuntimeServices_t3303336867;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.ArgumentNullException
struct ArgumentNullException_t628810857;
extern Il2CppCodeGenString* _stringLiteral372029314;
extern const uint32_t Array_ToString_m1547520517_MetadataUsageId;
extern Il2CppClass* ICollection_t91669223_il2cpp_TypeInfo_var;
extern const uint32_t ListUpdateableEnumerator_MoveNext_m1727071326_MetadataUsageId;
extern Il2CppClass* IList_t3321498491_il2cpp_TypeInfo_var;
extern const uint32_t ListUpdateableEnumerator_get_Current_m1239640447_MetadataUsageId;
extern const uint32_t ListUpdateableEnumerator_Update_m670620225_MetadataUsageId;
extern const Il2CppType* Extensions_t2406697300_0_0_0_var;
extern Il2CppClass* UnityRuntimeServices_t3303336867_il2cpp_TypeInfo_var;
extern Il2CppClass* Type_t_il2cpp_TypeInfo_var;
extern Il2CppClass* RuntimeServices_t1910041954_il2cpp_TypeInfo_var;
extern const uint32_t UnityRuntimeServices__cctor_m277244785_MetadataUsageId;
extern const Il2CppType* IList_t3321498491_0_0_0_var;
extern Il2CppClass* Array_t1396575355_il2cpp_TypeInfo_var;
extern Il2CppClass* ListUpdateableEnumerator_t2462779323_il2cpp_TypeInfo_var;
extern Il2CppClass* IEnumerable_t2911409499_il2cpp_TypeInfo_var;
extern Il2CppClass* IEnumerator_t1466026749_il2cpp_TypeInfo_var;
extern const uint32_t UnityRuntimeServices_GetEnumerator_m1135949016_MetadataUsageId;
extern Il2CppClass* ArgumentNullException_t628810857_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral372029369;
extern const uint32_t UnityRuntimeServices_Update_m1436857700_MetadataUsageId;
extern Il2CppClass* Il2CppArray_il2cpp_TypeInfo_var;
extern const uint32_t UnityRuntimeServices_IsValueTypeArray_m651527436_MetadataUsageId;
extern const Il2CppType* IEnumerator_t1466026749_0_0_0_var;
extern Il2CppClass* ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var;
extern const uint32_t UnityRuntimeServices_U24static_initializerU24_m2178156047_MetadataUsageId;

// System.Object[]
struct ObjectU5BU5D_t3614634134  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Il2CppObject * m_Items[1];

public:
	inline Il2CppObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Il2CppObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};



// System.Void System.Collections.CollectionBase::.ctor()
extern "C"  void CollectionBase__ctor_m2525885291 (CollectionBase_t1101587467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.CollectionBase::get_Count()
extern "C"  int32_t CollectionBase_get_Count_m740218359 (CollectionBase_t1101587467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsArray()
extern "C"  bool Type_get_IsArray_m811277129 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array UnityScript.Lang.Array::ToBuiltin(System.Type)
extern "C"  Il2CppArray * Array_ToBuiltin_m3086745688 (Array_t1396575355 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Collections.CollectionBase::get_InnerList()
extern "C"  ArrayList_t4252133567 * CollectionBase_get_InnerList_m44314156 (CollectionBase_t1101587467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityScript.Lang.Array::Pop()
extern "C"  Il2CppObject * Array_Pop_m3820345758 (Array_t1396575355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityScript.Lang.Array::Join(System.String)
extern "C"  String_t* Array_Join_m140080931 (Array_t1396575355 * __this, String_t* ___seperator0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Boo.Lang.Builtins::join(System.Collections.IEnumerable,System.String)
extern "C"  String_t* Builtins_join_m2036613869 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, String_t* p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::get_Length()
extern "C"  int32_t Array_get_Length_m1498215565 (Il2CppArray * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m2551263788 (Il2CppObject * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityScript.Lang.UnityRuntimeServices::$static_initializer$()
extern "C"  void UnityRuntimeServices_U24static_initializerU24_m2178156047 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C"  Type_t * Type_GetTypeFromHandle_m432505302 (Il2CppObject * __this /* static, unused */, RuntimeTypeHandle_t2330101084  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Boo.Lang.Runtime.RuntimeServices::RegisterExtensions(System.Type)
extern "C"  void RuntimeServices_RegisterExtensions_m3796711317 (Il2CppObject * __this /* static, unused */, Type_t * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityScript.Lang.UnityRuntimeServices::IsValueTypeArray(System.Object)
extern "C"  bool UnityRuntimeServices_IsValueTypeArray_m651527436 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Boo.Lang.Runtime.RuntimeServices::Coerce(System.Object,System.Type)
extern "C"  Il2CppObject * RuntimeServices_Coerce_m43784504 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, Type_t * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityScript.Lang.ListUpdateableEnumerator::.ctor(System.Collections.IList)
extern "C"  void ListUpdateableEnumerator__ctor_m2483709717 (ListUpdateableEnumerator_t2462779323 * __this, Il2CppObject * ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerable Boo.Lang.Runtime.RuntimeServices::GetEnumerable(System.Object)
extern "C"  Il2CppObject * RuntimeServices_GetEnumerable_m664169683 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C"  void ArgumentNullException__ctor_m3380712306 (ArgumentNullException_t628810857 * __this, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityScript.Lang.ListUpdateableEnumerator::Update(System.Object)
extern "C"  void ListUpdateableEnumerator_Update_m670620225 (ListUpdateableEnumerator_t2462779323 * __this, Il2CppObject * ___newValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Object::GetType()
extern "C"  Type_t * Object_GetType_m191970594 (Il2CppObject * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsValueType()
extern "C"  bool Type_get_IsValueType_m1733572463 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Array::GetEnumerator()
extern "C"  Il2CppObject * Array_GetEnumerator_m2284404958 (Il2CppArray * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityScript.Lang.Array::.ctor()
extern "C"  void Array__ctor_m4252655432 (Array_t1396575355 * __this, const MethodInfo* method)
{
	{
		CollectionBase__ctor_m2525885291(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityScript.Lang.Array::get_length()
extern "C"  int32_t Array_get_length_m754110913 (Array_t1396575355 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = CollectionBase_get_Count_m740218359(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Object UnityScript.Lang.Array::Coerce(System.Type)
extern "C"  Il2CppObject * Array_Coerce_m2367934489 (Array_t1396575355 * __this, Type_t * ___toType0, const MethodInfo* method)
{
	Il2CppArray * G_B3_0 = NULL;
	{
		Type_t * L_0 = ___toType0;
		NullCheck(L_0);
		bool L_1 = Type_get_IsArray_m811277129(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Type_t * L_2 = ___toType0;
		NullCheck(L_2);
		Type_t * L_3 = VirtFuncInvoker0< Type_t * >::Invoke(43 /* System.Type System.Type::GetElementType() */, L_2);
		Il2CppArray * L_4 = Array_ToBuiltin_m3086745688(__this, L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = ((Il2CppArray *)(__this));
	}

IL_001d:
	{
		return G_B3_0;
	}
}
// System.Array UnityScript.Lang.Array::ToBuiltin(System.Type)
extern "C"  Il2CppArray * Array_ToBuiltin_m3086745688 (Array_t1396575355 * __this, Type_t * ___type0, const MethodInfo* method)
{
	{
		ArrayList_t4252133567 * L_0 = CollectionBase_get_InnerList_m44314156(__this, /*hidden argument*/NULL);
		Type_t * L_1 = ___type0;
		NullCheck(L_0);
		Il2CppArray * L_2 = VirtFuncInvoker1< Il2CppArray *, Type_t * >::Invoke(44 /* System.Array System.Collections.ArrayList::ToArray(System.Type) */, L_0, L_1);
		return L_2;
	}
}
// System.Void UnityScript.Lang.Array::Add(System.Object)
extern "C"  void Array_Add_m3097471301 (Array_t1396575355 * __this, Il2CppObject * ___value0, const MethodInfo* method)
{
	{
		ArrayList_t4252133567 * L_0 = CollectionBase_get_InnerList_m44314156(__this, /*hidden argument*/NULL);
		Il2CppObject * L_1 = ___value0;
		NullCheck(L_0);
		VirtFuncInvoker1< int32_t, Il2CppObject * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_0, L_1);
		return;
	}
}
// System.Object UnityScript.Lang.Array::Pop()
extern "C"  Il2CppObject * Array_Pop_m3820345758 (Array_t1396575355 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	Il2CppObject * V_1 = NULL;
	{
		ArrayList_t4252133567 * L_0 = CollectionBase_get_InnerList_m44314156(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_0);
		if (((int64_t)L_1 - (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_1 - (int64_t)1 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception());
		V_0 = ((int32_t)((int32_t)L_1-(int32_t)1));
		ArrayList_t4252133567 * L_2 = CollectionBase_get_InnerList_m44314156(__this, /*hidden argument*/NULL);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		Il2CppObject * L_4 = VirtFuncInvoker1< Il2CppObject *, int32_t >::Invoke(18 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_2, L_3);
		V_1 = L_4;
		ArrayList_t4252133567 * L_5 = CollectionBase_get_InnerList_m44314156(__this, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ArrayList::RemoveAt(System.Int32) */, L_5, L_6);
		Il2CppObject * L_7 = V_1;
		return L_7;
	}
}
// System.Object UnityScript.Lang.Array::pop()
extern "C"  Il2CppObject * Array_pop_m4075941118 (Array_t1396575355 * __this, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = Array_Pop_m3820345758(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String UnityScript.Lang.Array::ToString()
extern "C"  String_t* Array_ToString_m1547520517 (Array_t1396575355 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_ToString_m1547520517_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = Array_Join_m140080931(__this, _stringLiteral372029314, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String UnityScript.Lang.Array::Join(System.String)
extern "C"  String_t* Array_Join_m140080931 (Array_t1396575355 * __this, String_t* ___seperator0, const MethodInfo* method)
{
	{
		ArrayList_t4252133567 * L_0 = CollectionBase_get_InnerList_m44314156(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___seperator0;
		String_t* L_2 = Builtins_join_m2036613869(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object UnityScript.Lang.Array::get_Item(System.Int32)
extern "C"  Il2CppObject * Array_get_Item_m3001262786 (Array_t1396575355 * __this, int32_t ___index0, const MethodInfo* method)
{
	{
		ArrayList_t4252133567 * L_0 = CollectionBase_get_InnerList_m44314156(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		Il2CppObject * L_2 = VirtFuncInvoker1< Il2CppObject *, int32_t >::Invoke(18 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_0, L_1);
		return L_2;
	}
}
// System.Void UnityScript.Lang.Array::OnValidate(System.Object)
extern "C"  void Array_OnValidate_m1064559095 (Array_t1396575355 * __this, Il2CppObject * ___newValue0, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Int32 UnityScript.Lang.Extensions::get_length(System.Array)
extern "C"  int32_t Extensions_get_length_m2475420192 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___a0, const MethodInfo* method)
{
	{
		Il2CppArray * L_0 = ___a0;
		NullCheck(L_0);
		int32_t L_1 = Array_get_Length_m1498215565(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityScript.Lang.ListUpdateableEnumerator::.ctor(System.Collections.IList)
extern "C"  void ListUpdateableEnumerator__ctor_m2483709717 (ListUpdateableEnumerator_t2462779323 * __this, Il2CppObject * ___list0, const MethodInfo* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		__this->set__current_1((-1));
		Il2CppObject * L_0 = ___list0;
		__this->set__list_0(L_0);
		return;
	}
}
// System.Void UnityScript.Lang.ListUpdateableEnumerator::Reset()
extern "C"  void ListUpdateableEnumerator_Reset_m4186908375 (ListUpdateableEnumerator_t2462779323 * __this, const MethodInfo* method)
{
	{
		__this->set__current_1((-1));
		return;
	}
}
// System.Boolean UnityScript.Lang.ListUpdateableEnumerator::MoveNext()
extern "C"  bool ListUpdateableEnumerator_MoveNext_m1727071326 (ListUpdateableEnumerator_t2462779323 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListUpdateableEnumerator_MoveNext_m1727071326_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get__current_1();
		if (((int64_t)L_0 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_0 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception());
		__this->set__current_1(((int32_t)((int32_t)L_0+(int32_t)1)));
		int32_t L_1 = __this->get__current_1();
		Il2CppObject * L_2 = __this->get__list_0();
		NullCheck(L_2);
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t91669223_il2cpp_TypeInfo_var, L_2);
		return (bool)((((int32_t)L_1) < ((int32_t)L_3))? 1 : 0);
	}
}
// System.Object UnityScript.Lang.ListUpdateableEnumerator::get_Current()
extern "C"  Il2CppObject * ListUpdateableEnumerator_get_Current_m1239640447 (ListUpdateableEnumerator_t2462779323 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListUpdateableEnumerator_get_Current_m1239640447_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppObject * L_0 = __this->get__list_0();
		int32_t L_1 = __this->get__current_1();
		NullCheck(L_0);
		Il2CppObject * L_2 = InterfaceFuncInvoker1< Il2CppObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t3321498491_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void UnityScript.Lang.ListUpdateableEnumerator::Update(System.Object)
extern "C"  void ListUpdateableEnumerator_Update_m670620225 (ListUpdateableEnumerator_t2462779323 * __this, Il2CppObject * ___newValue0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListUpdateableEnumerator_Update_m670620225_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppObject * L_0 = __this->get__list_0();
		int32_t L_1 = __this->get__current_1();
		Il2CppObject * L_2 = ___newValue0;
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, Il2CppObject * >::Invoke(1 /* System.Void System.Collections.IList::set_Item(System.Int32,System.Object) */, IList_t3321498491_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Void UnityScript.Lang.UnityRuntimeServices::.cctor()
extern "C"  void UnityRuntimeServices__cctor_m277244785 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRuntimeServices__cctor_m277244785_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityRuntimeServices_U24static_initializerU24_m2178156047(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, LoadTypeToken(Extensions_t2406697300_0_0_0_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t1910041954_il2cpp_TypeInfo_var);
		RuntimeServices_RegisterExtensions_m3796711317(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		((UnityRuntimeServices_t3303336867_StaticFields*)UnityRuntimeServices_t3303336867_il2cpp_TypeInfo_var->static_fields)->set_Initialized_2((bool)1);
		return;
	}
}
// System.Void UnityScript.Lang.UnityRuntimeServices::.ctor()
extern "C"  void UnityRuntimeServices__ctor_m1066678718 (UnityRuntimeServices_t3303336867 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator UnityScript.Lang.UnityRuntimeServices::GetEnumerator(System.Object)
extern "C"  Il2CppObject * UnityRuntimeServices_GetEnumerator_m1135949016 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRuntimeServices_GetEnumerator_m1135949016_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppObject * V_0 = NULL;
	Il2CppObject * V_1 = NULL;
	Il2CppObject * G_B12_0 = NULL;
	Il2CppObject * G_B6_0 = NULL;
	Il2CppObject * G_B5_0 = NULL;
	{
		Il2CppObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityRuntimeServices_t3303336867_il2cpp_TypeInfo_var);
		Il2CppObject * L_1 = ((UnityRuntimeServices_t3303336867_StaticFields*)UnityRuntimeServices_t3303336867_il2cpp_TypeInfo_var->static_fields)->get_EmptyEnumerator_0();
		G_B12_0 = L_1;
		goto IL_0086;
	}

IL_0010:
	{
		Il2CppObject * L_2 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(UnityRuntimeServices_t3303336867_il2cpp_TypeInfo_var);
		bool L_3 = UnityRuntimeServices_IsValueTypeArray_m651527436(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0026;
		}
	}
	{
		Il2CppObject * L_4 = ___obj0;
		if (!((Array_t1396575355 *)IsInstClass(L_4, Array_t1396575355_il2cpp_TypeInfo_var)))
		{
			goto IL_0050;
		}
	}

IL_0026:
	{
		Il2CppObject * L_5 = ___obj0;
		Il2CppObject * L_6 = L_5;
		G_B5_0 = L_6;
		if (((Il2CppObject *)IsInst(L_6, IList_t3321498491_il2cpp_TypeInfo_var)))
		{
			G_B6_0 = L_6;
			goto IL_0041;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, LoadTypeToken(IList_t3321498491_0_0_0_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t1910041954_il2cpp_TypeInfo_var);
		Il2CppObject * L_8 = RuntimeServices_Coerce_m43784504(NULL /*static, unused*/, G_B5_0, L_7, /*hidden argument*/NULL);
		G_B6_0 = L_8;
	}

IL_0041:
	{
		ListUpdateableEnumerator_t2462779323 * L_9 = (ListUpdateableEnumerator_t2462779323 *)il2cpp_codegen_object_new(ListUpdateableEnumerator_t2462779323_il2cpp_TypeInfo_var);
		ListUpdateableEnumerator__ctor_m2483709717(L_9, ((Il2CppObject *)Castclass(G_B6_0, IList_t3321498491_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		G_B12_0 = ((Il2CppObject *)(L_9));
		goto IL_0086;
	}

IL_0050:
	{
		Il2CppObject * L_10 = ___obj0;
		V_0 = ((Il2CppObject *)IsInst(L_10, IEnumerable_t2911409499_il2cpp_TypeInfo_var));
		Il2CppObject * L_11 = V_0;
		if (!L_11)
		{
			goto IL_0068;
		}
	}
	{
		Il2CppObject * L_12 = V_0;
		NullCheck(L_12);
		Il2CppObject * L_13 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t2911409499_il2cpp_TypeInfo_var, L_12);
		G_B12_0 = L_13;
		goto IL_0086;
	}

IL_0068:
	{
		Il2CppObject * L_14 = ___obj0;
		V_1 = ((Il2CppObject *)IsInst(L_14, IEnumerator_t1466026749_il2cpp_TypeInfo_var));
		Il2CppObject * L_15 = V_1;
		if (!L_15)
		{
			goto IL_007b;
		}
	}
	{
		Il2CppObject * L_16 = V_1;
		G_B12_0 = L_16;
		goto IL_0086;
	}

IL_007b:
	{
		Il2CppObject * L_17 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t1910041954_il2cpp_TypeInfo_var);
		Il2CppObject * L_18 = RuntimeServices_GetEnumerable_m664169683(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Il2CppObject * L_19 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t2911409499_il2cpp_TypeInfo_var, L_18);
		G_B12_0 = L_19;
	}

IL_0086:
	{
		return G_B12_0;
	}
}
// System.Void UnityScript.Lang.UnityRuntimeServices::Update(System.Collections.IEnumerator,System.Object)
extern "C"  void UnityRuntimeServices_Update_m1436857700 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___e0, Il2CppObject * ___newValue1, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRuntimeServices_Update_m1436857700_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppObject * L_0 = ___e0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t628810857 * L_1 = (ArgumentNullException_t628810857 *)il2cpp_codegen_object_new(ArgumentNullException_t628810857_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3380712306(L_1, _stringLiteral372029369, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0011:
	{
		Il2CppObject * L_2 = ___e0;
		if (((ListUpdateableEnumerator_t2462779323 *)IsInstClass(L_2, ListUpdateableEnumerator_t2462779323_il2cpp_TypeInfo_var)))
		{
			goto IL_0021;
		}
	}
	{
		goto IL_002d;
	}

IL_0021:
	{
		Il2CppObject * L_3 = ___e0;
		Il2CppObject * L_4 = ___newValue1;
		NullCheck(((ListUpdateableEnumerator_t2462779323 *)CastclassClass(L_3, ListUpdateableEnumerator_t2462779323_il2cpp_TypeInfo_var)));
		ListUpdateableEnumerator_Update_m670620225(((ListUpdateableEnumerator_t2462779323 *)CastclassClass(L_3, ListUpdateableEnumerator_t2462779323_il2cpp_TypeInfo_var)), L_4, /*hidden argument*/NULL);
	}

IL_002d:
	{
		return;
	}
}
// System.Boolean UnityScript.Lang.UnityRuntimeServices::IsValueTypeArray(System.Object)
extern "C"  bool UnityRuntimeServices_IsValueTypeArray_m651527436 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRuntimeServices_IsValueTypeArray_m651527436_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		Il2CppObject * L_0 = ___obj0;
		if (((Il2CppArray *)IsInstClass(L_0, Il2CppArray_il2cpp_TypeInfo_var)))
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0021;
	}

IL_0011:
	{
		Il2CppObject * L_1 = ___obj0;
		NullCheck(L_1);
		Type_t * L_2 = Object_GetType_m191970594(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Type_t * L_3 = VirtFuncInvoker0< Type_t * >::Invoke(43 /* System.Type System.Type::GetElementType() */, L_2);
		NullCheck(L_3);
		bool L_4 = Type_get_IsValueType_m1733572463(L_3, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_4));
	}

IL_0021:
	{
		return (bool)G_B3_0;
	}
}
// System.Void UnityScript.Lang.UnityRuntimeServices::$static_initializer$()
extern "C"  void UnityRuntimeServices_U24static_initializerU24_m2178156047 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRuntimeServices_U24static_initializerU24_m2178156047_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullCheck((Il2CppArray *)(Il2CppArray *)((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)0)));
		Il2CppObject * L_0 = Array_GetEnumerator_m2284404958((Il2CppArray *)(Il2CppArray *)((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityRuntimeServices_t3303336867_il2cpp_TypeInfo_var);
		((UnityRuntimeServices_t3303336867_StaticFields*)UnityRuntimeServices_t3303336867_il2cpp_TypeInfo_var->static_fields)->set_EmptyEnumerator_0(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, LoadTypeToken(IEnumerator_t1466026749_0_0_0_var), /*hidden argument*/NULL);
		((UnityRuntimeServices_t3303336867_StaticFields*)UnityRuntimeServices_t3303336867_il2cpp_TypeInfo_var->static_fields)->set_EnumeratorType_1(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

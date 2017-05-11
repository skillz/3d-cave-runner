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

// System.String
struct String_t;
// UnityEngine.jvalue[]
struct jvalueU5BU5D_t2851849116;
// System.Boolean[]
struct BooleanU5BU5D_t3568034315;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.Int16[]
struct Int16U5BU5D_t3104283263;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Int64[]
struct Int64U5BU5D_t717125112;
// System.Single[]
struct SingleU5BU5D_t577127397;
// System.Double[]
struct DoubleU5BU5D_t1889952540;
// System.IntPtr[]
struct IntPtrU5BU5D_t169632028;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_String2029220233.h"

// System.IntPtr UnityEngine.AndroidJNI::FindClass(System.String)
extern "C"  IntPtr_t AndroidJNI_FindClass_m2428140163 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_FindClass(System.String,System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_FindClass_m2014149759 (Il2CppObject * __this /* static, unused */, String_t* ___name0, IntPtr_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::FromReflectedMethod(System.IntPtr)
extern "C"  IntPtr_t AndroidJNI_FromReflectedMethod_m2626434215 (Il2CppObject * __this /* static, unused */, IntPtr_t ___refMethod0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_FromReflectedMethod(System.IntPtr,System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_FromReflectedMethod_m2764322075 (Il2CppObject * __this /* static, unused */, IntPtr_t ___refMethod0, IntPtr_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::FromReflectedField(System.IntPtr)
extern "C"  IntPtr_t AndroidJNI_FromReflectedField_m1474576612 (Il2CppObject * __this /* static, unused */, IntPtr_t ___refField0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_FromReflectedField(System.IntPtr,System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_FromReflectedField_m2696021006 (Il2CppObject * __this /* static, unused */, IntPtr_t ___refField0, IntPtr_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::ExceptionOccurred()
extern "C"  IntPtr_t AndroidJNI_ExceptionOccurred_m2435707430 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_ExceptionOccurred(System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_ExceptionOccurred_m2259725618 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::ExceptionClear()
extern "C"  void AndroidJNI_ExceptionClear_m531918105 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::NewGlobalRef(System.IntPtr)
extern "C"  IntPtr_t AndroidJNI_NewGlobalRef_m1427864962 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_NewGlobalRef(System.IntPtr,System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_NewGlobalRef_m2778535992 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::DeleteGlobalRef(System.IntPtr)
extern "C"  void AndroidJNI_DeleteGlobalRef_m817961148 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::DeleteLocalRef(System.IntPtr)
extern "C"  void AndroidJNI_DeleteLocalRef_m2567844534 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::NewObject(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  IntPtr_t AndroidJNI_NewObject_m3953316571 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___methodID1, jvalueU5BU5D_t2851849116* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_NewObject(System.IntPtr,System.IntPtr,UnityEngine.jvalue[],System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_NewObject_m3269534159 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___methodID1, jvalueU5BU5D_t2851849116* ___args2, IntPtr_t* ___value3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::GetObjectClass(System.IntPtr)
extern "C"  IntPtr_t AndroidJNI_GetObjectClass_m1135692933 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_GetObjectClass(System.IntPtr,System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_GetObjectClass_m83583961 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::GetMethodID(System.IntPtr,System.String,System.String)
extern "C"  IntPtr_t AndroidJNI_GetMethodID_m2377106222 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, String_t* ___name1, String_t* ___sig2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_GetMethodID(System.IntPtr,System.String,System.String,System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_GetMethodID_m620686896 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, String_t* ___name1, String_t* ___sig2, IntPtr_t* ___value3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::GetFieldID(System.IntPtr,System.String,System.String)
extern "C"  IntPtr_t AndroidJNI_GetFieldID_m3512649953 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, String_t* ___name1, String_t* ___sig2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_GetFieldID(System.IntPtr,System.String,System.String,System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_GetFieldID_m23469749 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, String_t* ___name1, String_t* ___sig2, IntPtr_t* ___value3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::GetStaticMethodID(System.IntPtr,System.String,System.String)
extern "C"  IntPtr_t AndroidJNI_GetStaticMethodID_m1993743500 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, String_t* ___name1, String_t* ___sig2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_GetStaticMethodID(System.IntPtr,System.String,System.String,System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_GetStaticMethodID_m4025688058 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, String_t* ___name1, String_t* ___sig2, IntPtr_t* ___value3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::GetStaticFieldID(System.IntPtr,System.String,System.String)
extern "C"  IntPtr_t AndroidJNI_GetStaticFieldID_m3820138545 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, String_t* ___name1, String_t* ___sig2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_GetStaticFieldID(System.IntPtr,System.String,System.String,System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_GetStaticFieldID_m1307870813 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, String_t* ___name1, String_t* ___sig2, IntPtr_t* ___value3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::NewStringUTF(System.String)
extern "C"  IntPtr_t AndroidJNI_NewStringUTF_m523166192 (Il2CppObject * __this /* static, unused */, String_t* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_NewStringUTF(System.String,System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_NewStringUTF_m3194729082 (Il2CppObject * __this /* static, unused */, String_t* ___bytes0, IntPtr_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.AndroidJNI::GetStringUTFChars(System.IntPtr)
extern "C"  String_t* AndroidJNI_GetStringUTFChars_m2257291075 (Il2CppObject * __this /* static, unused */, IntPtr_t ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.AndroidJNI::CallStringMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  String_t* AndroidJNI_CallStringMethod_m1072256578 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___methodID1, jvalueU5BU5D_t2851849116* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::CallObjectMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  IntPtr_t AndroidJNI_CallObjectMethod_m2800924552 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___methodID1, jvalueU5BU5D_t2851849116* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_CallObjectMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[],System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_CallObjectMethod_m4063133562 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___methodID1, jvalueU5BU5D_t2851849116* ___args2, IntPtr_t* ___value3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AndroidJNI::CallIntMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  int32_t AndroidJNI_CallIntMethod_m3843787691 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___methodID1, jvalueU5BU5D_t2851849116* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AndroidJNI::CallBooleanMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  bool AndroidJNI_CallBooleanMethod_m3106305426 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___methodID1, jvalueU5BU5D_t2851849116* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 UnityEngine.AndroidJNI::CallShortMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  int16_t AndroidJNI_CallShortMethod_m927793578 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___methodID1, jvalueU5BU5D_t2851849116* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte UnityEngine.AndroidJNI::CallByteMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  uint8_t AndroidJNI_CallByteMethod_m1689833208 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___methodID1, jvalueU5BU5D_t2851849116* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.AndroidJNI::CallCharMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  Il2CppChar AndroidJNI_CallCharMethod_m910196688 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___methodID1, jvalueU5BU5D_t2851849116* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AndroidJNI::CallFloatMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  float AndroidJNI_CallFloatMethod_m2655808370 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___methodID1, jvalueU5BU5D_t2851849116* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.AndroidJNI::CallDoubleMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  double AndroidJNI_CallDoubleMethod_m401104194 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___methodID1, jvalueU5BU5D_t2851849116* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 UnityEngine.AndroidJNI::CallLongMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  int64_t AndroidJNI_CallLongMethod_m3631373833 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___methodID1, jvalueU5BU5D_t2851849116* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::CallVoidMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  void AndroidJNI_CallVoidMethod_m1345390760 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___methodID1, jvalueU5BU5D_t2851849116* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.AndroidJNI::CallStaticStringMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  String_t* AndroidJNI_CallStaticStringMethod_m1354697768 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___methodID1, jvalueU5BU5D_t2851849116* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::CallStaticObjectMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  IntPtr_t AndroidJNI_CallStaticObjectMethod_m998729826 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___methodID1, jvalueU5BU5D_t2851849116* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_CallStaticObjectMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[],System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_CallStaticObjectMethod_m1230549856 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___methodID1, jvalueU5BU5D_t2851849116* ___args2, IntPtr_t* ___value3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AndroidJNI::CallStaticIntMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  int32_t AndroidJNI_CallStaticIntMethod_m971393887 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___methodID1, jvalueU5BU5D_t2851849116* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AndroidJNI::CallStaticBooleanMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  bool AndroidJNI_CallStaticBooleanMethod_m2711632856 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___methodID1, jvalueU5BU5D_t2851849116* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 UnityEngine.AndroidJNI::CallStaticShortMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  int16_t AndroidJNI_CallStaticShortMethod_m2890326648 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___methodID1, jvalueU5BU5D_t2851849116* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte UnityEngine.AndroidJNI::CallStaticByteMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  uint8_t AndroidJNI_CallStaticByteMethod_m197863794 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___methodID1, jvalueU5BU5D_t2851849116* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.AndroidJNI::CallStaticCharMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  Il2CppChar AndroidJNI_CallStaticCharMethod_m1124664058 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___methodID1, jvalueU5BU5D_t2851849116* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AndroidJNI::CallStaticFloatMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  float AndroidJNI_CallStaticFloatMethod_m3885388984 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___methodID1, jvalueU5BU5D_t2851849116* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.AndroidJNI::CallStaticDoubleMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  double AndroidJNI_CallStaticDoubleMethod_m38542440 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___methodID1, jvalueU5BU5D_t2851849116* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 UnityEngine.AndroidJNI::CallStaticLongMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  int64_t AndroidJNI_CallStaticLongMethod_m881240849 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___methodID1, jvalueU5BU5D_t2851849116* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::CallStaticVoidMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  void AndroidJNI_CallStaticVoidMethod_m2379657250 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___methodID1, jvalueU5BU5D_t2851849116* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.AndroidJNI::GetStaticStringField(System.IntPtr,System.IntPtr)
extern "C"  String_t* AndroidJNI_GetStaticStringField_m4191856435 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::GetStaticObjectField(System.IntPtr,System.IntPtr)
extern "C"  IntPtr_t AndroidJNI_GetStaticObjectField_m2123670935 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_GetStaticObjectField(System.IntPtr,System.IntPtr,System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_GetStaticObjectField_m1812443787 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, IntPtr_t* ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AndroidJNI::GetStaticBooleanField(System.IntPtr,System.IntPtr)
extern "C"  bool AndroidJNI_GetStaticBooleanField_m3813914791 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte UnityEngine.AndroidJNI::GetStaticByteField(System.IntPtr,System.IntPtr)
extern "C"  uint8_t AndroidJNI_GetStaticByteField_m706077459 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.AndroidJNI::GetStaticCharField(System.IntPtr,System.IntPtr)
extern "C"  Il2CppChar AndroidJNI_GetStaticCharField_m649933907 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 UnityEngine.AndroidJNI::GetStaticShortField(System.IntPtr,System.IntPtr)
extern "C"  int16_t AndroidJNI_GetStaticShortField_m922426589 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AndroidJNI::GetStaticIntField(System.IntPtr,System.IntPtr)
extern "C"  int32_t AndroidJNI_GetStaticIntField_m2786411036 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 UnityEngine.AndroidJNI::GetStaticLongField(System.IntPtr,System.IntPtr)
extern "C"  int64_t AndroidJNI_GetStaticLongField_m1743478504 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AndroidJNI::GetStaticFloatField(System.IntPtr,System.IntPtr)
extern "C"  float AndroidJNI_GetStaticFloatField_m1526011597 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.AndroidJNI::GetStaticDoubleField(System.IntPtr,System.IntPtr)
extern "C"  double AndroidJNI_GetStaticDoubleField_m520518899 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::ToBooleanArray(System.Boolean[])
extern "C"  IntPtr_t AndroidJNI_ToBooleanArray_m60930445 (Il2CppObject * __this /* static, unused */, BooleanU5BU5D_t3568034315* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_ToBooleanArray(System.Boolean[],System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_ToBooleanArray_m3942677865 (Il2CppObject * __this /* static, unused */, BooleanU5BU5D_t3568034315* ___array0, IntPtr_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::ToByteArray(System.Byte[])
extern "C"  IntPtr_t AndroidJNI_ToByteArray_m4000632781 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_ToByteArray(System.Byte[],System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_ToByteArray_m645672329 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___array0, IntPtr_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::ToCharArray(System.Char[])
extern "C"  IntPtr_t AndroidJNI_ToCharArray_m440734561 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_ToCharArray(System.Char[],System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_ToCharArray_m1076822525 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___array0, IntPtr_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::ToShortArray(System.Int16[])
extern "C"  IntPtr_t AndroidJNI_ToShortArray_m3386306387 (Il2CppObject * __this /* static, unused */, Int16U5BU5D_t3104283263* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_ToShortArray(System.Int16[],System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_ToShortArray_m909617919 (Il2CppObject * __this /* static, unused */, Int16U5BU5D_t3104283263* ___array0, IntPtr_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::ToIntArray(System.Int32[])
extern "C"  IntPtr_t AndroidJNI_ToIntArray_m769330108 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t3030399641* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_ToIntArray(System.Int32[],System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_ToIntArray_m1630407586 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t3030399641* ___array0, IntPtr_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::ToLongArray(System.Int64[])
extern "C"  IntPtr_t AndroidJNI_ToLongArray_m3648376436 (Il2CppObject * __this /* static, unused */, Int64U5BU5D_t717125112* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_ToLongArray(System.Int64[],System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_ToLongArray_m1053339774 (Il2CppObject * __this /* static, unused */, Int64U5BU5D_t717125112* ___array0, IntPtr_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::ToFloatArray(System.Single[])
extern "C"  IntPtr_t AndroidJNI_ToFloatArray_m484610271 (Il2CppObject * __this /* static, unused */, SingleU5BU5D_t577127397* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_ToFloatArray(System.Single[],System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_ToFloatArray_m955766195 (Il2CppObject * __this /* static, unused */, SingleU5BU5D_t577127397* ___array0, IntPtr_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::ToDoubleArray(System.Double[])
extern "C"  IntPtr_t AndroidJNI_ToDoubleArray_m3960066029 (Il2CppObject * __this /* static, unused */, DoubleU5BU5D_t1889952540* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_ToDoubleArray(System.Double[],System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_ToDoubleArray_m3942840465 (Il2CppObject * __this /* static, unused */, DoubleU5BU5D_t1889952540* ___array0, IntPtr_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::ToObjectArray(System.IntPtr[],System.IntPtr)
extern "C"  IntPtr_t AndroidJNI_ToObjectArray_m630607815 (Il2CppObject * __this /* static, unused */, IntPtrU5BU5D_t169632028* ___array0, IntPtr_t ___arrayClass1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_ToObjectArray(System.IntPtr[],System.IntPtr,System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_ToObjectArray_m4033334475 (Il2CppObject * __this /* static, unused */, IntPtrU5BU5D_t169632028* ___array0, IntPtr_t ___arrayClass1, IntPtr_t* ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean[] UnityEngine.AndroidJNI::FromBooleanArray(System.IntPtr)
extern "C"  BooleanU5BU5D_t3568034315* AndroidJNI_FromBooleanArray_m404759016 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.AndroidJNI::FromByteArray(System.IntPtr)
extern "C"  ByteU5BU5D_t3397334013* AndroidJNI_FromByteArray_m1228802202 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] UnityEngine.AndroidJNI::FromCharArray(System.IntPtr)
extern "C"  CharU5BU5D_t1328083999* AndroidJNI_FromCharArray_m995621742 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16[] UnityEngine.AndroidJNI::FromShortArray(System.IntPtr)
extern "C"  Int16U5BU5D_t3104283263* AndroidJNI_FromShortArray_m3031115604 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] UnityEngine.AndroidJNI::FromIntArray(System.IntPtr)
extern "C"  Int32U5BU5D_t3030399641* AndroidJNI_FromIntArray_m3492579093 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64[] UnityEngine.AndroidJNI::FromLongArray(System.IntPtr)
extern "C"  Int64U5BU5D_t717125112* AndroidJNI_FromLongArray_m416568223 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] UnityEngine.AndroidJNI::FromFloatArray(System.IntPtr)
extern "C"  SingleU5BU5D_t577127397* AndroidJNI_FromFloatArray_m99673808 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double[] UnityEngine.AndroidJNI::FromDoubleArray(System.IntPtr)
extern "C"  DoubleU5BU5D_t1889952540* AndroidJNI_FromDoubleArray_m2858147712 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AndroidJNI::GetArrayLength(System.IntPtr)
extern "C"  int32_t AndroidJNI_GetArrayLength_m916064724 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::NewObjectArray(System.Int32,System.IntPtr,System.IntPtr)
extern "C"  IntPtr_t AndroidJNI_NewObjectArray_m2425614375 (Il2CppObject * __this /* static, unused */, int32_t ___size0, IntPtr_t ___clazz1, IntPtr_t ___obj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_NewObjectArray(System.Int32,System.IntPtr,System.IntPtr,System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_NewObjectArray_m1522442683 (Il2CppObject * __this /* static, unused */, int32_t ___size0, IntPtr_t ___clazz1, IntPtr_t ___obj2, IntPtr_t* ___value3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::GetObjectArrayElement(System.IntPtr,System.Int32)
extern "C"  IntPtr_t AndroidJNI_GetObjectArrayElement_m528873821 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_GetObjectArrayElement(System.IntPtr,System.Int32,System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_GetObjectArrayElement_m1569184073 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, int32_t ___index1, IntPtr_t* ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::SetObjectArrayElement(System.IntPtr,System.Int32,System.IntPtr)
extern "C"  void AndroidJNI_SetObjectArrayElement_m3906365370 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, int32_t ___index1, IntPtr_t ___obj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;

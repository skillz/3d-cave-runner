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
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.Double[]
struct DoubleU5BU5D_t1889952540;
// System.Single[]
struct SingleU5BU5D_t577127397;
// System.Int64[]
struct Int64U5BU5D_t717125112;
// System.Int16[]
struct Int16U5BU5D_t3104283263;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Boolean[]
struct BooleanU5BU5D_t3568034315;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.IntPtr[]
struct IntPtrU5BU5D_t169632028;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_String2029220233.h"

// System.Void UnityEngine.AndroidJNISafe::CheckException()
extern "C"  void AndroidJNISafe_CheckException_m3549813083 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNISafe::DeleteGlobalRef(System.IntPtr)
extern "C"  void AndroidJNISafe_DeleteGlobalRef_m3746512123 (Il2CppObject * __this /* static, unused */, IntPtr_t ___globalref0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNISafe::DeleteLocalRef(System.IntPtr)
extern "C"  void AndroidJNISafe_DeleteLocalRef_m4312141 (Il2CppObject * __this /* static, unused */, IntPtr_t ___localref0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNISafe::NewStringUTF(System.String)
extern "C"  IntPtr_t AndroidJNISafe_NewStringUTF_m557450071 (Il2CppObject * __this /* static, unused */, String_t* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.AndroidJNISafe::GetStringUTFChars(System.IntPtr)
extern "C"  String_t* AndroidJNISafe_GetStringUTFChars_m882694074 (Il2CppObject * __this /* static, unused */, IntPtr_t ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNISafe::GetObjectClass(System.IntPtr)
extern "C"  IntPtr_t AndroidJNISafe_GetObjectClass_m3946558620 (Il2CppObject * __this /* static, unused */, IntPtr_t ___ptr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNISafe::GetStaticMethodID(System.IntPtr,System.String,System.String)
extern "C"  IntPtr_t AndroidJNISafe_GetStaticMethodID_m1614326005 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, String_t* ___name1, String_t* ___sig2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNISafe::GetMethodID(System.IntPtr,System.String,System.String)
extern "C"  IntPtr_t AndroidJNISafe_GetMethodID_m3926486005 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, String_t* ___name1, String_t* ___sig2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNISafe::GetFieldID(System.IntPtr,System.String,System.String)
extern "C"  IntPtr_t AndroidJNISafe_GetFieldID_m1937259872 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, String_t* ___name1, String_t* ___sig2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNISafe::GetStaticFieldID(System.IntPtr,System.String,System.String)
extern "C"  IntPtr_t AndroidJNISafe_GetStaticFieldID_m1177277202 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, String_t* ___name1, String_t* ___sig2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNISafe::FromReflectedMethod(System.IntPtr)
extern "C"  IntPtr_t AndroidJNISafe_FromReflectedMethod_m3949640480 (Il2CppObject * __this /* static, unused */, IntPtr_t ___refMethod0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNISafe::FromReflectedField(System.IntPtr)
extern "C"  IntPtr_t AndroidJNISafe_FromReflectedField_m1538681731 (Il2CppObject * __this /* static, unused */, IntPtr_t ___refField0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNISafe::FindClass(System.String)
extern "C"  IntPtr_t AndroidJNISafe_FindClass_m1113934500 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNISafe::NewObject(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  IntPtr_t AndroidJNISafe_NewObject_m2899927202 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___methodID1, jvalueU5BU5D_t2851849116* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNISafe::GetStaticObjectField(System.IntPtr,System.IntPtr)
extern "C"  IntPtr_t AndroidJNISafe_GetStaticObjectField_m1912618390 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.AndroidJNISafe::GetStaticStringField(System.IntPtr,System.IntPtr)
extern "C"  String_t* AndroidJNISafe_GetStaticStringField_m3509790772 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.AndroidJNISafe::GetStaticCharField(System.IntPtr,System.IntPtr)
extern "C"  Il2CppChar AndroidJNISafe_GetStaticCharField_m913229236 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.AndroidJNISafe::GetStaticDoubleField(System.IntPtr,System.IntPtr)
extern "C"  double AndroidJNISafe_GetStaticDoubleField_m415477620 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AndroidJNISafe::GetStaticFloatField(System.IntPtr,System.IntPtr)
extern "C"  float AndroidJNISafe_GetStaticFloatField_m3093052204 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 UnityEngine.AndroidJNISafe::GetStaticLongField(System.IntPtr,System.IntPtr)
extern "C"  int64_t AndroidJNISafe_GetStaticLongField_m4294451373 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 UnityEngine.AndroidJNISafe::GetStaticShortField(System.IntPtr,System.IntPtr)
extern "C"  int16_t AndroidJNISafe_GetStaticShortField_m2629964368 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte UnityEngine.AndroidJNISafe::GetStaticByteField(System.IntPtr,System.IntPtr)
extern "C"  uint8_t AndroidJNISafe_GetStaticByteField_m1781050740 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AndroidJNISafe::GetStaticBooleanField(System.IntPtr,System.IntPtr)
extern "C"  bool AndroidJNISafe_GetStaticBooleanField_m3706433356 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AndroidJNISafe::GetStaticIntField(System.IntPtr,System.IntPtr)
extern "C"  int32_t AndroidJNISafe_GetStaticIntField_m4056437079 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNISafe::CallStaticVoidMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  void AndroidJNISafe_CallStaticVoidMethod_m2257798155 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___methodID1, jvalueU5BU5D_t2851849116* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNISafe::CallStaticObjectMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  IntPtr_t AndroidJNISafe_CallStaticObjectMethod_m3783508827 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___methodID1, jvalueU5BU5D_t2851849116* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.AndroidJNISafe::CallStaticStringMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  String_t* AndroidJNISafe_CallStaticStringMethod_m3099457967 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___methodID1, jvalueU5BU5D_t2851849116* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.AndroidJNISafe::CallStaticCharMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  Il2CppChar AndroidJNISafe_CallStaticCharMethod_m2403622067 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___methodID1, jvalueU5BU5D_t2851849116* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.AndroidJNISafe::CallStaticDoubleMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  double AndroidJNISafe_CallStaticDoubleMethod_m3274153839 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___methodID1, jvalueU5BU5D_t2851849116* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AndroidJNISafe::CallStaticFloatMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  float AndroidJNISafe_CallStaticFloatMethod_m1787403217 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___methodID1, jvalueU5BU5D_t2851849116* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 UnityEngine.AndroidJNISafe::CallStaticLongMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  int64_t AndroidJNISafe_CallStaticLongMethod_m991961726 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___methodID1, jvalueU5BU5D_t2851849116* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 UnityEngine.AndroidJNISafe::CallStaticShortMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  int16_t AndroidJNISafe_CallStaticShortMethod_m2639809309 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___methodID1, jvalueU5BU5D_t2851849116* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte UnityEngine.AndroidJNISafe::CallStaticByteMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  uint8_t AndroidJNISafe_CallStaticByteMethod_m2377968203 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___methodID1, jvalueU5BU5D_t2851849116* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AndroidJNISafe::CallStaticBooleanMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  bool AndroidJNISafe_CallStaticBooleanMethod_m862283147 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___methodID1, jvalueU5BU5D_t2851849116* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AndroidJNISafe::CallStaticIntMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  int32_t AndroidJNISafe_CallStaticIntMethod_m3340302834 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___methodID1, jvalueU5BU5D_t2851849116* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNISafe::CallVoidMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  void AndroidJNISafe_CallVoidMethod_m1565447951 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___methodID1, jvalueU5BU5D_t2851849116* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNISafe::CallObjectMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  IntPtr_t AndroidJNISafe_CallObjectMethod_m2231940863 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___methodID1, jvalueU5BU5D_t2851849116* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.AndroidJNISafe::CallStringMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  String_t* AndroidJNISafe_CallStringMethod_m1190980747 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___methodID1, jvalueU5BU5D_t2851849116* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.AndroidJNISafe::CallCharMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  Il2CppChar AndroidJNISafe_CallCharMethod_m2903641543 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___methodID1, jvalueU5BU5D_t2851849116* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.AndroidJNISafe::CallDoubleMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  double AndroidJNISafe_CallDoubleMethod_m624962955 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___methodID1, jvalueU5BU5D_t2851849116* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AndroidJNISafe::CallFloatMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  float AndroidJNISafe_CallFloatMethod_m1666006857 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___methodID1, jvalueU5BU5D_t2851849116* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 UnityEngine.AndroidJNISafe::CallLongMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  int64_t AndroidJNISafe_CallLongMethod_m3637356332 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___methodID1, jvalueU5BU5D_t2851849116* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 UnityEngine.AndroidJNISafe::CallShortMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  int16_t AndroidJNISafe_CallShortMethod_m4148068037 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___methodID1, jvalueU5BU5D_t2851849116* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte UnityEngine.AndroidJNISafe::CallByteMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  uint8_t AndroidJNISafe_CallByteMethod_m2326150991 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___methodID1, jvalueU5BU5D_t2851849116* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AndroidJNISafe::CallBooleanMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  bool AndroidJNISafe_CallBooleanMethod_m2757795727 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___methodID1, jvalueU5BU5D_t2851849116* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AndroidJNISafe::CallIntMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  int32_t AndroidJNISafe_CallIntMethod_m2063907464 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___methodID1, jvalueU5BU5D_t2851849116* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] UnityEngine.AndroidJNISafe::FromCharArray(System.IntPtr)
extern "C"  CharU5BU5D_t1328083999* AndroidJNISafe_FromCharArray_m2952065413 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double[] UnityEngine.AndroidJNISafe::FromDoubleArray(System.IntPtr)
extern "C"  DoubleU5BU5D_t1889952540* AndroidJNISafe_FromDoubleArray_m964673321 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] UnityEngine.AndroidJNISafe::FromFloatArray(System.IntPtr)
extern "C"  SingleU5BU5D_t577127397* AndroidJNISafe_FromFloatArray_m973529127 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64[] UnityEngine.AndroidJNISafe::FromLongArray(System.IntPtr)
extern "C"  Int64U5BU5D_t717125112* AndroidJNISafe_FromLongArray_m2909858 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16[] UnityEngine.AndroidJNISafe::FromShortArray(System.IntPtr)
extern "C"  Int16U5BU5D_t3104283263* AndroidJNISafe_FromShortArray_m1106134831 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.AndroidJNISafe::FromByteArray(System.IntPtr)
extern "C"  ByteU5BU5D_t3397334013* AndroidJNISafe_FromByteArray_m3387994193 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean[] UnityEngine.AndroidJNISafe::FromBooleanArray(System.IntPtr)
extern "C"  BooleanU5BU5D_t3568034315* AndroidJNISafe_FromBooleanArray_m1089939685 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] UnityEngine.AndroidJNISafe::FromIntArray(System.IntPtr)
extern "C"  Int32U5BU5D_t3030399641* AndroidJNISafe_FromIntArray_m1642932658 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNISafe::ToObjectArray(System.IntPtr[],System.IntPtr)
extern "C"  IntPtr_t AndroidJNISafe_ToObjectArray_m1796512326 (Il2CppObject * __this /* static, unused */, IntPtrU5BU5D_t169632028* ___array0, IntPtr_t ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNISafe::ToCharArray(System.Char[])
extern "C"  IntPtr_t AndroidJNISafe_ToCharArray_m2041086850 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNISafe::ToDoubleArray(System.Double[])
extern "C"  IntPtr_t AndroidJNISafe_ToDoubleArray_m2319324204 (Il2CppObject * __this /* static, unused */, DoubleU5BU5D_t1889952540* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNISafe::ToFloatArray(System.Single[])
extern "C"  IntPtr_t AndroidJNISafe_ToFloatArray_m3705599742 (Il2CppObject * __this /* static, unused */, SingleU5BU5D_t577127397* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNISafe::ToLongArray(System.Int64[])
extern "C"  IntPtr_t AndroidJNISafe_ToLongArray_m2313037395 (Il2CppObject * __this /* static, unused */, Int64U5BU5D_t717125112* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNISafe::ToShortArray(System.Int16[])
extern "C"  IntPtr_t AndroidJNISafe_ToShortArray_m4262810106 (Il2CppObject * __this /* static, unused */, Int16U5BU5D_t3104283263* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNISafe::ToByteArray(System.Byte[])
extern "C"  IntPtr_t AndroidJNISafe_ToByteArray_m4290305102 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNISafe::ToBooleanArray(System.Boolean[])
extern "C"  IntPtr_t AndroidJNISafe_ToBooleanArray_m316136334 (Il2CppObject * __this /* static, unused */, BooleanU5BU5D_t3568034315* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNISafe::ToIntArray(System.Int32[])
extern "C"  IntPtr_t AndroidJNISafe_ToIntArray_m774732029 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t3030399641* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AndroidJNISafe::GetArrayLength(System.IntPtr)
extern "C"  int32_t AndroidJNISafe_GetArrayLength_m1243392065 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

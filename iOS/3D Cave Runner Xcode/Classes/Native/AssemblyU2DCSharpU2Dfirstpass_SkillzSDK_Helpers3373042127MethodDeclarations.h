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

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Nullable_1_gen2088641033.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Nullable_1_gen3251239280.h"
#include "mscorlib_System_Nullable_1_gen2341081996.h"
#include "mscorlib_System_Nullable_1_gen334943763.h"
#include "mscorlib_System_Nullable_1_gen412748336.h"

// System.Nullable`1<System.Boolean> SkillzSDK.Helpers::SafeBoolParse(System.String,System.String,System.String,System.String,System.String)
extern "C"  Nullable_1_t2088641033  Helpers_SafeBoolParse_m3833182202 (Il2CppObject * __this /* static, unused */, String_t* ___str0, String_t* ___trueStr1, String_t* ___falseStr2, String_t* ___trueInt3, String_t* ___falseInt4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTime> SkillzSDK.Helpers::SafeParseUnixTime(System.Nullable`1<System.Double>)
extern "C"  Nullable_1_t3251239280  Helpers_SafeParseUnixTime_m1328800797 (Il2CppObject * __this /* static, unused */, Nullable_1_t2341081996  ___unixTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Double> SkillzSDK.Helpers::SafeDoubleParse(System.String)
extern "C"  Nullable_1_t2341081996  Helpers_SafeDoubleParse_m2429094246 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Int32> SkillzSDK.Helpers::SafeIntParse(System.String)
extern "C"  Nullable_1_t334943763  Helpers_SafeIntParse_m1349804695 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.UInt32> SkillzSDK.Helpers::SafeUintParse(System.String)
extern "C"  Nullable_1_t412748336  Helpers_SafeUintParse_m2355548551 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

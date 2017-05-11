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

// SkillzSDK.MiniJSON.Json/Parser
struct Parser_t3266458908;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t2058570427;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SkillzSDK_MiniJSON_J1424013098.h"

// System.Void SkillzSDK.MiniJSON.Json/Parser::.ctor(System.String)
extern "C"  void Parser__ctor_m985372631 (Parser_t3266458908 * __this, String_t* ___jsonString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SkillzSDK.MiniJSON.Json/Parser::IsWordBreak(System.Char)
extern "C"  bool Parser_IsWordBreak_m3028009253 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object SkillzSDK.MiniJSON.Json/Parser::Parse(System.String)
extern "C"  Il2CppObject * Parser_Parse_m4168624675 (Il2CppObject * __this /* static, unused */, String_t* ___jsonString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.MiniJSON.Json/Parser::Dispose()
extern "C"  void Parser_Dispose_m2238634732 (Parser_t3266458908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> SkillzSDK.MiniJSON.Json/Parser::ParseObject()
extern "C"  Dictionary_2_t309261261 * Parser_ParseObject_m1674625037 (Parser_t3266458908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Object> SkillzSDK.MiniJSON.Json/Parser::ParseArray()
extern "C"  List_1_t2058570427 * Parser_ParseArray_m3221988264 (Parser_t3266458908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object SkillzSDK.MiniJSON.Json/Parser::ParseValue()
extern "C"  Il2CppObject * Parser_ParseValue_m813771238 (Parser_t3266458908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object SkillzSDK.MiniJSON.Json/Parser::ParseByToken(SkillzSDK.MiniJSON.Json/Parser/TOKEN)
extern "C"  Il2CppObject * Parser_ParseByToken_m3663602137 (Parser_t3266458908 * __this, int32_t ___token0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SkillzSDK.MiniJSON.Json/Parser::ParseString()
extern "C"  String_t* Parser_ParseString_m3678366328 (Parser_t3266458908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object SkillzSDK.MiniJSON.Json/Parser::ParseNumber()
extern "C"  Il2CppObject * Parser_ParseNumber_m2715690574 (Parser_t3266458908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.MiniJSON.Json/Parser::EatWhitespace()
extern "C"  void Parser_EatWhitespace_m3667109410 (Parser_t3266458908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char SkillzSDK.MiniJSON.Json/Parser::get_PeekChar()
extern "C"  Il2CppChar Parser_get_PeekChar_m250758683 (Parser_t3266458908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char SkillzSDK.MiniJSON.Json/Parser::get_NextChar()
extern "C"  Il2CppChar Parser_get_NextChar_m2896692947 (Parser_t3266458908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SkillzSDK.MiniJSON.Json/Parser::get_NextWord()
extern "C"  String_t* Parser_get_NextWord_m1990500560 (Parser_t3266458908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SkillzSDK.MiniJSON.Json/Parser/TOKEN SkillzSDK.MiniJSON.Json/Parser::get_NextToken()
extern "C"  int32_t Parser_get_NextToken_m2132010499 (Parser_t3266458908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

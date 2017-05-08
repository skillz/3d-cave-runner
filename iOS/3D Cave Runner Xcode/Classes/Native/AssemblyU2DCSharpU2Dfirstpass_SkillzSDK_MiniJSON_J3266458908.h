#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.IO.StringReader
struct StringReader_t1480123486;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SkillzSDK.MiniJSON.Json/Parser
struct  Parser_t3266458908  : public Il2CppObject
{
public:
	// System.IO.StringReader SkillzSDK.MiniJSON.Json/Parser::json
	StringReader_t1480123486 * ___json_1;

public:
	inline static int32_t get_offset_of_json_1() { return static_cast<int32_t>(offsetof(Parser_t3266458908, ___json_1)); }
	inline StringReader_t1480123486 * get_json_1() const { return ___json_1; }
	inline StringReader_t1480123486 ** get_address_of_json_1() { return &___json_1; }
	inline void set_json_1(StringReader_t1480123486 * value)
	{
		___json_1 = value;
		Il2CppCodeGenWriteBarrier(&___json_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

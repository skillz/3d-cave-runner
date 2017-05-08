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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoadLevel
struct  LoadLevel_t2625531918  : public MonoBehaviour_t1158329972
{
public:
	// System.String LoadLevel::LevelName
	String_t* ___LevelName_2;

public:
	inline static int32_t get_offset_of_LevelName_2() { return static_cast<int32_t>(offsetof(LoadLevel_t2625531918, ___LevelName_2)); }
	inline String_t* get_LevelName_2() const { return ___LevelName_2; }
	inline String_t** get_address_of_LevelName_2() { return &___LevelName_2; }
	inline void set_LevelName_2(String_t* value)
	{
		___LevelName_2 = value;
		Il2CppCodeGenWriteBarrier(&___LevelName_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

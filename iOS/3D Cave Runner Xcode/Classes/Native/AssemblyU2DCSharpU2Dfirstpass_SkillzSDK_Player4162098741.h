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

#include "mscorlib_System_ValueType3507792607.h"
#include "mscorlib_System_Nullable_1_gen412748336.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SkillzSDK.Player
struct  Player_t4162098741 
{
public:
	// System.String SkillzSDK.Player::DisplayName
	String_t* ___DisplayName_0;
	// System.Nullable`1<System.UInt32> SkillzSDK.Player::ID
	Nullable_1_t412748336  ___ID_1;
	// System.String SkillzSDK.Player::AvatarURL
	String_t* ___AvatarURL_2;
	// System.String SkillzSDK.Player::FlagURL
	String_t* ___FlagURL_3;

public:
	inline static int32_t get_offset_of_DisplayName_0() { return static_cast<int32_t>(offsetof(Player_t4162098741, ___DisplayName_0)); }
	inline String_t* get_DisplayName_0() const { return ___DisplayName_0; }
	inline String_t** get_address_of_DisplayName_0() { return &___DisplayName_0; }
	inline void set_DisplayName_0(String_t* value)
	{
		___DisplayName_0 = value;
		Il2CppCodeGenWriteBarrier(&___DisplayName_0, value);
	}

	inline static int32_t get_offset_of_ID_1() { return static_cast<int32_t>(offsetof(Player_t4162098741, ___ID_1)); }
	inline Nullable_1_t412748336  get_ID_1() const { return ___ID_1; }
	inline Nullable_1_t412748336 * get_address_of_ID_1() { return &___ID_1; }
	inline void set_ID_1(Nullable_1_t412748336  value)
	{
		___ID_1 = value;
	}

	inline static int32_t get_offset_of_AvatarURL_2() { return static_cast<int32_t>(offsetof(Player_t4162098741, ___AvatarURL_2)); }
	inline String_t* get_AvatarURL_2() const { return ___AvatarURL_2; }
	inline String_t** get_address_of_AvatarURL_2() { return &___AvatarURL_2; }
	inline void set_AvatarURL_2(String_t* value)
	{
		___AvatarURL_2 = value;
		Il2CppCodeGenWriteBarrier(&___AvatarURL_2, value);
	}

	inline static int32_t get_offset_of_FlagURL_3() { return static_cast<int32_t>(offsetof(Player_t4162098741, ___FlagURL_3)); }
	inline String_t* get_FlagURL_3() const { return ___FlagURL_3; }
	inline String_t** get_address_of_FlagURL_3() { return &___FlagURL_3; }
	inline void set_FlagURL_3(String_t* value)
	{
		___FlagURL_3 = value;
		Il2CppCodeGenWriteBarrier(&___FlagURL_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of SkillzSDK.Player
struct Player_t4162098741_marshaled_pinvoke
{
	char* ___DisplayName_0;
	Nullable_1_t412748336  ___ID_1;
	char* ___AvatarURL_2;
	char* ___FlagURL_3;
};
// Native definition for COM marshalling of SkillzSDK.Player
struct Player_t4162098741_marshaled_com
{
	Il2CppChar* ___DisplayName_0;
	Nullable_1_t412748336  ___ID_1;
	Il2CppChar* ___AvatarURL_2;
	Il2CppChar* ___FlagURL_3;
};

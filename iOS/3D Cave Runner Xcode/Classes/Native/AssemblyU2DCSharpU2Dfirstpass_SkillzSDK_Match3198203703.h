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
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Nullable_1_gen334943763.h"
#include "mscorlib_System_Nullable_1_gen412748336.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SkillzSDK_Player4162098741.h"
#include "mscorlib_System_Nullable_1_gen2088641033.h"
#include "mscorlib_System_Nullable_1_gen339576247.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SkillzSDK.Match
struct  Match_t3198203703  : public Il2CppObject
{
public:
	// System.String SkillzSDK.Match::Name
	String_t* ___Name_0;
	// System.String SkillzSDK.Match::Description
	String_t* ___Description_1;
	// System.Nullable`1<System.Int32> SkillzSDK.Match::ID
	Nullable_1_t334943763  ___ID_2;
	// System.Nullable`1<System.Int32> SkillzSDK.Match::TemplateID
	Nullable_1_t334943763  ___TemplateID_3;
	// System.Nullable`1<System.UInt32> SkillzSDK.Match::SkillzDifficulty
	Nullable_1_t412748336  ___SkillzDifficulty_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> SkillzSDK.Match::GameParams
	Dictionary_2_t3943999495 * ___GameParams_5;
	// SkillzSDK.Player SkillzSDK.Match::Player
	Player_t4162098741  ___Player_6;
	// System.Nullable`1<System.Boolean> SkillzSDK.Match::IsCash
	Nullable_1_t2088641033  ___IsCash_7;
	// System.Nullable`1<System.Int32> SkillzSDK.Match::EntryPoints
	Nullable_1_t334943763  ___EntryPoints_8;
	// System.Nullable`1<System.Single> SkillzSDK.Match::EntryCash
	Nullable_1_t339576247  ___EntryCash_9;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(Match_t3198203703, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier(&___Name_0, value);
	}

	inline static int32_t get_offset_of_Description_1() { return static_cast<int32_t>(offsetof(Match_t3198203703, ___Description_1)); }
	inline String_t* get_Description_1() const { return ___Description_1; }
	inline String_t** get_address_of_Description_1() { return &___Description_1; }
	inline void set_Description_1(String_t* value)
	{
		___Description_1 = value;
		Il2CppCodeGenWriteBarrier(&___Description_1, value);
	}

	inline static int32_t get_offset_of_ID_2() { return static_cast<int32_t>(offsetof(Match_t3198203703, ___ID_2)); }
	inline Nullable_1_t334943763  get_ID_2() const { return ___ID_2; }
	inline Nullable_1_t334943763 * get_address_of_ID_2() { return &___ID_2; }
	inline void set_ID_2(Nullable_1_t334943763  value)
	{
		___ID_2 = value;
	}

	inline static int32_t get_offset_of_TemplateID_3() { return static_cast<int32_t>(offsetof(Match_t3198203703, ___TemplateID_3)); }
	inline Nullable_1_t334943763  get_TemplateID_3() const { return ___TemplateID_3; }
	inline Nullable_1_t334943763 * get_address_of_TemplateID_3() { return &___TemplateID_3; }
	inline void set_TemplateID_3(Nullable_1_t334943763  value)
	{
		___TemplateID_3 = value;
	}

	inline static int32_t get_offset_of_SkillzDifficulty_4() { return static_cast<int32_t>(offsetof(Match_t3198203703, ___SkillzDifficulty_4)); }
	inline Nullable_1_t412748336  get_SkillzDifficulty_4() const { return ___SkillzDifficulty_4; }
	inline Nullable_1_t412748336 * get_address_of_SkillzDifficulty_4() { return &___SkillzDifficulty_4; }
	inline void set_SkillzDifficulty_4(Nullable_1_t412748336  value)
	{
		___SkillzDifficulty_4 = value;
	}

	inline static int32_t get_offset_of_GameParams_5() { return static_cast<int32_t>(offsetof(Match_t3198203703, ___GameParams_5)); }
	inline Dictionary_2_t3943999495 * get_GameParams_5() const { return ___GameParams_5; }
	inline Dictionary_2_t3943999495 ** get_address_of_GameParams_5() { return &___GameParams_5; }
	inline void set_GameParams_5(Dictionary_2_t3943999495 * value)
	{
		___GameParams_5 = value;
		Il2CppCodeGenWriteBarrier(&___GameParams_5, value);
	}

	inline static int32_t get_offset_of_Player_6() { return static_cast<int32_t>(offsetof(Match_t3198203703, ___Player_6)); }
	inline Player_t4162098741  get_Player_6() const { return ___Player_6; }
	inline Player_t4162098741 * get_address_of_Player_6() { return &___Player_6; }
	inline void set_Player_6(Player_t4162098741  value)
	{
		___Player_6 = value;
	}

	inline static int32_t get_offset_of_IsCash_7() { return static_cast<int32_t>(offsetof(Match_t3198203703, ___IsCash_7)); }
	inline Nullable_1_t2088641033  get_IsCash_7() const { return ___IsCash_7; }
	inline Nullable_1_t2088641033 * get_address_of_IsCash_7() { return &___IsCash_7; }
	inline void set_IsCash_7(Nullable_1_t2088641033  value)
	{
		___IsCash_7 = value;
	}

	inline static int32_t get_offset_of_EntryPoints_8() { return static_cast<int32_t>(offsetof(Match_t3198203703, ___EntryPoints_8)); }
	inline Nullable_1_t334943763  get_EntryPoints_8() const { return ___EntryPoints_8; }
	inline Nullable_1_t334943763 * get_address_of_EntryPoints_8() { return &___EntryPoints_8; }
	inline void set_EntryPoints_8(Nullable_1_t334943763  value)
	{
		___EntryPoints_8 = value;
	}

	inline static int32_t get_offset_of_EntryCash_9() { return static_cast<int32_t>(offsetof(Match_t3198203703, ___EntryCash_9)); }
	inline Nullable_1_t339576247  get_EntryCash_9() const { return ___EntryCash_9; }
	inline Nullable_1_t339576247 * get_address_of_EntryCash_9() { return &___EntryCash_9; }
	inline void set_EntryCash_9(Nullable_1_t339576247  value)
	{
		___EntryCash_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

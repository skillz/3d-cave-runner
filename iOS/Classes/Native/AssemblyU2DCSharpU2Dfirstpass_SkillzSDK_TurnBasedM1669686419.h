﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SkillzSDK_Match3198203703.h"
#include "mscorlib_System_Nullable_1_gen412748336.h"
#include "mscorlib_System_Nullable_1_gen2341081996.h"
#include "mscorlib_System_Nullable_1_gen3251239280.h"
#include "mscorlib_System_Nullable_1_gen2088641033.h"
#include "mscorlib_System_Nullable_1_gen334943763.h"
#include "mscorlib_System_Nullable_1_gen2663366791.h"

// System.Collections.Generic.List`1<SkillzSDK.TurnBasedRound>
struct List_1_t363789400;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SkillzSDK.TurnBasedMatch
struct  TurnBasedMatch_t1669686419  : public Match_t3198203703
{
public:
	// System.Nullable`1<System.UInt32> SkillzSDK.TurnBasedMatch::PrizeZ
	Nullable_1_t412748336  ___PrizeZ_10;
	// System.Nullable`1<System.Double> SkillzSDK.TurnBasedMatch::PrizeCash
	Nullable_1_t2341081996  ___PrizeCash_11;
	// System.Nullable`1<System.DateTime> SkillzSDK.TurnBasedMatch::TimeTournamentBegan
	Nullable_1_t3251239280  ___TimeTournamentBegan_12;
	// System.Nullable`1<System.DateTime> SkillzSDK.TurnBasedMatch::TimeLastTurnCompleted
	Nullable_1_t3251239280  ___TimeLastTurnCompleted_13;
	// System.Nullable`1<System.Boolean> SkillzSDK.TurnBasedMatch::IsMatchOver
	Nullable_1_t2088641033  ___IsMatchOver_14;
	// System.Collections.Generic.List`1<SkillzSDK.TurnBasedRound> SkillzSDK.TurnBasedMatch::Rounds
	List_1_t363789400 * ___Rounds_15;
	// System.Nullable`1<System.Int32> SkillzSDK.TurnBasedMatch::CurrentTurnIndex
	Nullable_1_t334943763  ___CurrentTurnIndex_16;
	// System.Nullable`1<SkillzSDK.ContinuedTurnBasedMatch> SkillzSDK.TurnBasedMatch::ContinueMatchData
	Nullable_1_t2663366791  ___ContinueMatchData_17;

public:
	inline static int32_t get_offset_of_PrizeZ_10() { return static_cast<int32_t>(offsetof(TurnBasedMatch_t1669686419, ___PrizeZ_10)); }
	inline Nullable_1_t412748336  get_PrizeZ_10() const { return ___PrizeZ_10; }
	inline Nullable_1_t412748336 * get_address_of_PrizeZ_10() { return &___PrizeZ_10; }
	inline void set_PrizeZ_10(Nullable_1_t412748336  value)
	{
		___PrizeZ_10 = value;
	}

	inline static int32_t get_offset_of_PrizeCash_11() { return static_cast<int32_t>(offsetof(TurnBasedMatch_t1669686419, ___PrizeCash_11)); }
	inline Nullable_1_t2341081996  get_PrizeCash_11() const { return ___PrizeCash_11; }
	inline Nullable_1_t2341081996 * get_address_of_PrizeCash_11() { return &___PrizeCash_11; }
	inline void set_PrizeCash_11(Nullable_1_t2341081996  value)
	{
		___PrizeCash_11 = value;
	}

	inline static int32_t get_offset_of_TimeTournamentBegan_12() { return static_cast<int32_t>(offsetof(TurnBasedMatch_t1669686419, ___TimeTournamentBegan_12)); }
	inline Nullable_1_t3251239280  get_TimeTournamentBegan_12() const { return ___TimeTournamentBegan_12; }
	inline Nullable_1_t3251239280 * get_address_of_TimeTournamentBegan_12() { return &___TimeTournamentBegan_12; }
	inline void set_TimeTournamentBegan_12(Nullable_1_t3251239280  value)
	{
		___TimeTournamentBegan_12 = value;
	}

	inline static int32_t get_offset_of_TimeLastTurnCompleted_13() { return static_cast<int32_t>(offsetof(TurnBasedMatch_t1669686419, ___TimeLastTurnCompleted_13)); }
	inline Nullable_1_t3251239280  get_TimeLastTurnCompleted_13() const { return ___TimeLastTurnCompleted_13; }
	inline Nullable_1_t3251239280 * get_address_of_TimeLastTurnCompleted_13() { return &___TimeLastTurnCompleted_13; }
	inline void set_TimeLastTurnCompleted_13(Nullable_1_t3251239280  value)
	{
		___TimeLastTurnCompleted_13 = value;
	}

	inline static int32_t get_offset_of_IsMatchOver_14() { return static_cast<int32_t>(offsetof(TurnBasedMatch_t1669686419, ___IsMatchOver_14)); }
	inline Nullable_1_t2088641033  get_IsMatchOver_14() const { return ___IsMatchOver_14; }
	inline Nullable_1_t2088641033 * get_address_of_IsMatchOver_14() { return &___IsMatchOver_14; }
	inline void set_IsMatchOver_14(Nullable_1_t2088641033  value)
	{
		___IsMatchOver_14 = value;
	}

	inline static int32_t get_offset_of_Rounds_15() { return static_cast<int32_t>(offsetof(TurnBasedMatch_t1669686419, ___Rounds_15)); }
	inline List_1_t363789400 * get_Rounds_15() const { return ___Rounds_15; }
	inline List_1_t363789400 ** get_address_of_Rounds_15() { return &___Rounds_15; }
	inline void set_Rounds_15(List_1_t363789400 * value)
	{
		___Rounds_15 = value;
		Il2CppCodeGenWriteBarrier(&___Rounds_15, value);
	}

	inline static int32_t get_offset_of_CurrentTurnIndex_16() { return static_cast<int32_t>(offsetof(TurnBasedMatch_t1669686419, ___CurrentTurnIndex_16)); }
	inline Nullable_1_t334943763  get_CurrentTurnIndex_16() const { return ___CurrentTurnIndex_16; }
	inline Nullable_1_t334943763 * get_address_of_CurrentTurnIndex_16() { return &___CurrentTurnIndex_16; }
	inline void set_CurrentTurnIndex_16(Nullable_1_t334943763  value)
	{
		___CurrentTurnIndex_16 = value;
	}

	inline static int32_t get_offset_of_ContinueMatchData_17() { return static_cast<int32_t>(offsetof(TurnBasedMatch_t1669686419, ___ContinueMatchData_17)); }
	inline Nullable_1_t2663366791  get_ContinueMatchData_17() const { return ___ContinueMatchData_17; }
	inline Nullable_1_t2663366791 * get_address_of_ContinueMatchData_17() { return &___ContinueMatchData_17; }
	inline void set_ContinueMatchData_17(Nullable_1_t2663366791  value)
	{
		___ContinueMatchData_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

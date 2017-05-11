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
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SkillzSDK_Player4162098741.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SkillzSDK_Environmen4039601343.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SkillzSDK_Orientatio1012746788.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SkillzSDK_TurnBasedR4169257086.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SkillzSDK_TurnBasedM3014500315.h"

// System.Void SkillzSDK.Api::_addMetadataForMatchInProgress(System.String,System.Boolean)
extern "C"  void Api__addMetadataForMatchInProgress_m3941390800 (Il2CppObject * __this /* static, unused */, String_t* ___metadataJson0, bool ___forMatchInProgress1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SkillzSDK.Api::_getRandomNumber()
extern "C"  int32_t Api__getRandomNumber_m3248116795 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SkillzSDK.Api::_getRandomNumberWithMinAndMax(System.Int32,System.Int32)
extern "C"  int32_t Api__getRandomNumberWithMinAndMax_m1465320238 (Il2CppObject * __this /* static, unused */, int32_t ___min0, int32_t ___max1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.Api::_skillzInitForGameIdAndEnvironment(System.String,System.String)
extern "C"  void Api__skillzInitForGameIdAndEnvironment_m3331601678 (Il2CppObject * __this /* static, unused */, String_t* ___gameId0, String_t* ___environment1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SkillzSDK.Api::_tournamentIsInProgress()
extern "C"  int32_t Api__tournamentIsInProgress_m1349815042 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr SkillzSDK.Api::_player()
extern "C"  IntPtr_t Api__player_m4230033813 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr SkillzSDK.Api::_SDKShortVersion()
extern "C"  IntPtr_t Api__SDKShortVersion_m3377474710 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.Api::_showSDKVersionInfo()
extern "C"  void Api__showSDKVersionInfo_m712259022 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.Api::_launchSkillz(System.String)
extern "C"  void Api__launchSkillz_m3319942915 (Il2CppObject * __this /* static, unused */, String_t* ___orientation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.Api::_displayTournamentResultsWithScore(System.Int32)
extern "C"  void Api__displayTournamentResultsWithScore_m3194878409 (Il2CppObject * __this /* static, unused */, int32_t ___score0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.Api::_displayTournamentResultsWithFloatScore(System.Single)
extern "C"  void Api__displayTournamentResultsWithFloatScore_m2130054253 (Il2CppObject * __this /* static, unused */, float ___score0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.Api::_completeTurnWithGameData(System.String,System.String,System.Single,System.Single,System.String,System.String)
extern "C"  void Api__completeTurnWithGameData_m3970940879 (Il2CppObject * __this /* static, unused */, String_t* ___gameData0, String_t* ___score1, float ___playerCurrentTotalScore2, float ___opponentCurrentTotalScore3, String_t* ___roundOutcome4, String_t* ___matchOutcome5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.Api::_finishReviewingCurrentGameState()
extern "C"  void Api__finishReviewingCurrentGameState_m3046595578 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.Api::_notifyPlayerAbortWithCompletion()
extern "C"  void Api__notifyPlayerAbortWithCompletion_m490015027 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.Api::_updatePlayersCurrentScore(System.Single)
extern "C"  void Api__updatePlayersCurrentScore_m1350442912 (Il2CppObject * __this /* static, unused */, float ___score0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single SkillzSDK.Api::_getRandomFloat()
extern "C"  float Api__getRandomFloat_m3434364398 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.Api::_setShouldSkillzLaunchFromURL(System.Boolean)
extern "C"  void Api__setShouldSkillzLaunchFromURL_m3929442516 (Il2CppObject * __this /* static, unused */, bool ___allowLaunch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SkillzSDK.Api::get_IsTournamentInProgress()
extern "C"  bool Api_get_IsTournamentInProgress_m2422544872 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SkillzSDK.Api::get_CurrentUserDisplayName()
extern "C"  String_t* Api_get_CurrentUserDisplayName_m3600102937 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SkillzSDK.Player SkillzSDK.Api::get_Player()
extern "C"  Player_t4162098741  Api_get_Player_m1903705515 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SkillzSDK.Api::get_SDKVersionShort()
extern "C"  String_t* Api_get_SDKVersionShort_m1046057278 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.Api::Initialize(System.String,SkillzSDK.Environment)
extern "C"  void Api_Initialize_m3025511632 (Il2CppObject * __this /* static, unused */, String_t* ___gameId0, int32_t ___environment1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.Api::LaunchSkillz(SkillzSDK.Orientation)
extern "C"  void Api_LaunchSkillz_m2055221213 (Il2CppObject * __this /* static, unused */, int32_t ___orientation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.Api::UpdatePlayerScore(System.Single)
extern "C"  void Api_UpdatePlayerScore_m1618566087 (Il2CppObject * __this /* static, unused */, float ___currentScoreForPlayer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.Api::AbortGame()
extern "C"  void Api_AbortGame_m3022560270 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.Api::FinishTournament(System.Int32)
extern "C"  void Api_FinishTournament_m613936183 (Il2CppObject * __this /* static, unused */, int32_t ___score0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.Api::FinishTournament(System.Single)
extern "C"  void Api_FinishTournament_m2031012011 (Il2CppObject * __this /* static, unused */, float ___score0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.Api::FinishTurn(System.String,SkillzSDK.TurnBasedRoundOutcome,SkillzSDK.TurnBasedMatchOutcome)
extern "C"  void Api_FinishTurn_m3489953285 (Il2CppObject * __this /* static, unused */, String_t* ___gameData0, int32_t ___roundOutcome1, int32_t ___matchOutcome2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.Api::FinishTurn(System.String,SkillzSDK.TurnBasedRoundOutcome,SkillzSDK.TurnBasedMatchOutcome,System.String,System.Single,System.Single)
extern "C"  void Api_FinishTurn_m1186411527 (Il2CppObject * __this /* static, unused */, String_t* ___gameData0, int32_t ___roundOutcome1, int32_t ___matchOutcome2, String_t* ___playerTurnScore3, float ___playerTotalScore4, float ___opponentTotalScore5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.Api::FinishReviewingTurn()
extern "C"  void Api_FinishReviewingTurn_m2449940440 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.Api::AddMetadataForMatchInProgress(System.String,System.Boolean)
extern "C"  void Api_AddMetadataForMatchInProgress_m969494395 (Il2CppObject * __this /* static, unused */, String_t* ___metadataJson0, bool ___forMatchInProgress1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SkillzSDK.Api::GetRandomNumber()
extern "C"  int32_t Api_GetRandomNumber_m2295430974 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SkillzSDK.Api::GetRandomNumber(System.Int32,System.Int32)
extern "C"  int32_t Api_GetRandomNumber_m2953521842 (Il2CppObject * __this /* static, unused */, int32_t ___min0, int32_t ___max1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.Api::PrintSDKVersionInfo()
extern "C"  void Api_PrintSDKVersionInfo_m3297076605 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.Api::SetShouldSkillzLaunchFromURL(System.Boolean)
extern "C"  void Api_SetShouldSkillzLaunchFromURL_m3397539431 (Il2CppObject * __this /* static, unused */, bool ___allowLaunch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> SkillzSDK.Api::DeserializeJSONToDictionary(System.String)
extern "C"  Dictionary_2_t309261261 * Api_DeserializeJSONToDictionary_m3130614824 (Il2CppObject * __this /* static, unused */, String_t* ___jsonString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

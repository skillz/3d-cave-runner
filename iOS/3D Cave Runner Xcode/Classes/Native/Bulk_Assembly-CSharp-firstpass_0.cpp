#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// GameSceneManager
struct GameSceneManager_t277739717;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;
// System.Object
struct Il2CppObject;
// SkillzSDK.Match
struct Match_t3198203703;
// SkillzSDK.MiniJSON.Json/Parser
struct Parser_t3266458908;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t2058570427;
// SkillzSDK.MiniJSON.Json/Serializer
struct Serializer_t2315747485;
// System.Collections.IDictionary
struct IDictionary_t596158605;
// System.Collections.IList
struct IList_t3321498491;
// SkillzSDK.SkillzDelegateBase
struct SkillzDelegateBase_t2433258543;
// SkillzSDK.SkillzDelegateInit
struct SkillzDelegateInit_t4059693480;
// SkillzSDK.SkillzDelegateStandard
struct SkillzDelegateStandard_t2914650099;
// SkillzSDK.SkillzDelegateTurnBased
struct SkillzDelegateTurnBased_t3217995174;
// SkillzSDK.TurnBasedMatch
struct TurnBasedMatch_t1669686419;
// SkillzSDK.SkillzMessageReceiver
struct SkillzMessageReceiver_t704596351;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharpU2Dfirstpass_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharpU2Dfirstpass_U3CModuleU3E3783534214MethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_GameSceneManager277739717.h"
#include "AssemblyU2DCSharpU2Dfirstpass_GameSceneManager277739717MethodDeclarations.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Time31991979MethodDeclarations.h"
#include "UnityEngine_UnityEngine_SceneManagement_SceneManager90660965MethodDeclarations.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "mscorlib_System_Single2076509932.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_PlayerPrefs3325146001MethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SkillzSDK_Api1442529210.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SkillzSDK_Api1442529210MethodDeclarations.h"
#include "mscorlib_System_Int322071877448.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_Application354826772MethodDeclarations.h"
#include "UnityEngine_UnityEngine_RuntimePlatform1869584967.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SkillzSDK_Player4162098741.h"
#include "mscorlib_System_Runtime_InteropServices_Marshal785896760MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_ge309261261.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SkillzSDK_Player4162098741MethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SkillzSDK_Environmen4039601343.h"
#include "UnityEngine_UnityEngine_Debug1368543263MethodDeclarations.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SkillzSDK_Orientatio1012746788.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SkillzSDK_TurnBasedR4169257086.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SkillzSDK_TurnBasedM3014500315.h"
#include "mscorlib_System_String2029220233MethodDeclarations.h"
#include "mscorlib_System_Object2689449295MethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SkillzSDK_MiniJSON_J3912181816MethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SkillzSDK_Api_Random1396361203.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SkillzSDK_Api_Random1396361203MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Random1170710517MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Mathf2336485820MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector32243707580MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918MethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SkillzSDK_ContinuedTu105333180.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SkillzSDK_ContinuedTu105333180MethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SkillzSDK_Extensions1725192953MethodDeclarations.h"
#include "mscorlib_System_Type1303803226MethodDeclarations.h"
#include "mscorlib_System_Nullable_1_gen2341081996.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_RuntimeTypeHandle2330101084.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_UInt322149682021.h"
#include "mscorlib_System_Nullable_1_gen412748336.h"
#include "mscorlib_System_Nullable_1_gen412748336MethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SkillzSDK_Environmen4039601343MethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SkillzSDK_Extensions1725192953.h"
#include "mscorlib_System_Nullable_1_gen2088641033.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SkillzSDK_Helpers3373042127MethodDeclarations.h"
#include "mscorlib_System_Nullable_1_gen3251239280.h"
#include "mscorlib_System_Nullable_1_gen334943763.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_ge309261261MethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SkillzSDK_Helpers3373042127.h"
#include "mscorlib_System_Nullable_1_gen2088641033MethodDeclarations.h"
#include "mscorlib_System_DateTime693205669.h"
#include "mscorlib_System_Exception1927440687.h"
#include "mscorlib_System_Nullable_1_gen2341081996MethodDeclarations.h"
#include "mscorlib_System_DateTime693205669MethodDeclarations.h"
#include "mscorlib_System_DateTimeKind2186819611.h"
#include "mscorlib_System_Double4078015681.h"
#include "mscorlib_System_Nullable_1_gen3251239280MethodDeclarations.h"
#include "mscorlib_System_Double4078015681MethodDeclarations.h"
#include "mscorlib_System_Int322071877448MethodDeclarations.h"
#include "mscorlib_System_Nullable_1_gen334943763MethodDeclarations.h"
#include "mscorlib_System_UInt322149682021MethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SkillzSDK_Match3198203703.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SkillzSDK_Match3198203703MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_g3943999495MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22361573779.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E1629285963.h"
#include "mscorlib_System_Nullable_1_gen339576247.h"
#include "mscorlib_System_Nullable_1_gen339576247MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_g3943999495.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E1629285963MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22361573779MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21701344717.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_En969056901.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_En969056901MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21701344717MethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SkillzSDK_MiniJSON_J3912181816.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SkillzSDK_MiniJSON_J3266458908MethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SkillzSDK_MiniJSON_J2315747485MethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SkillzSDK_MiniJSON_J3266458908.h"
#include "mscorlib_System_IO_StringReader1480123486MethodDeclarations.h"
#include "mscorlib_System_IO_StringReader1480123486.h"
#include "mscorlib_System_Char3454481338.h"
#include "mscorlib_System_Char3454481338MethodDeclarations.h"
#include "mscorlib_System_IO_TextReader1561828458MethodDeclarations.h"
#include "mscorlib_System_IO_TextReader1561828458.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SkillzSDK_MiniJSON_J1424013098.h"
#include "mscorlib_System_Collections_Generic_List_1_gen2058570427.h"
#include "mscorlib_System_Collections_Generic_List_1_gen2058570427MethodDeclarations.h"
#include "mscorlib_System_Text_StringBuilder1221177846MethodDeclarations.h"
#include "mscorlib_System_Convert2607082565MethodDeclarations.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"
#include "mscorlib_System_Globalization_CultureInfo3500843524MethodDeclarations.h"
#include "mscorlib_System_Int64909078037MethodDeclarations.h"
#include "mscorlib_System_Int64909078037.h"
#include "mscorlib_System_Globalization_CultureInfo3500843524.h"
#include "mscorlib_System_Globalization_NumberStyles3408984435.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SkillzSDK_MiniJSON_J1424013098MethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SkillzSDK_MiniJSON_J2315747485.h"
#include "mscorlib_System_Single2076509932MethodDeclarations.h"
#include "mscorlib_System_SByte454417549.h"
#include "mscorlib_System_Byte3683104436.h"
#include "mscorlib_System_Int164041245914.h"
#include "mscorlib_System_UInt16986882611.h"
#include "mscorlib_System_UInt642909196914.h"
#include "mscorlib_System_Decimal724701077.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SkillzSDK_Orientatio1012746788MethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SkillzSDK_SkillzDele2433258543.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SkillzSDK_SkillzDele2433258543MethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SkillzSDK_SkillzDele4059693480.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SkillzSDK_SkillzDele4059693480MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component3819376471MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Object1021602117MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Object1021602117.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SkillzSDK_SkillzDele2914650099.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SkillzSDK_SkillzDele2914650099MethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SkillzSDK_SkillzDele3217995174.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SkillzSDK_SkillzDele3217995174MethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SkillzSDK_TurnBasedM1669686419.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SkillzSDK_SkillzMessa704596351.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SkillzSDK_SkillzMessa704596351MethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SkillzSDK_TurnBasedM1669686419MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen363789400MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumera1593300101.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SkillzSDK_TurnBasedRo994668268.h"
#include "mscorlib_System_Collections_Generic_List_1_gen363789400.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumera1593300101MethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SkillzSDK_TurnBasedRo994668268MethodDeclarations.h"
#include "mscorlib_System_Nullable_1_gen2663366791.h"
#include "mscorlib_System_Nullable_1_gen2663366791MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumera4193486370.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumera4193486370MethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SkillzSDK_TurnBasedM3014500315MethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SkillzSDK_TurnBasedR4169257086MethodDeclarations.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameSceneManager::.ctor()
extern "C"  void GameSceneManager__ctor_m632855394 (GameSceneManager_t277739717 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameSceneManager::Update()
extern "C"  void GameSceneManager_Update_m120817315 (GameSceneManager_t277739717 * __this, const MethodInfo* method)
{
	{
		bool L_0 = __this->get_startTimer_4();
		if (!L_0)
		{
			goto IL_0044;
		}
	}
	{
		float L_1 = __this->get_timer_5();
		float L_2 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_timer_5(((float)((float)L_1-(float)L_2)));
		float L_3 = __this->get_timer_5();
		if ((!(((float)L_3) <= ((float)(0.0f)))))
		{
			goto IL_0043;
		}
	}
	{
		__this->set_startTimer_4((bool)0);
		String_t* L_4 = GameSceneManager_GetPrevScene_m2654384510(__this, /*hidden argument*/NULL);
		SceneManager_LoadScene_m1619949821(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_0043:
	{
	}

IL_0044:
	{
		return;
	}
}
// System.Void GameSceneManager::OnApplicationPause(System.Boolean)
extern Il2CppClass* GameSceneManager_t277739717_il2cpp_TypeInfo_var;
extern const uint32_t GameSceneManager_OnApplicationPause_m3982775664_MetadataUsageId;
extern "C"  void GameSceneManager_OnApplicationPause_m3982775664 (GameSceneManager_t277739717 * __this, bool ___isPaused0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameSceneManager_OnApplicationPause_m3982775664_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___isPaused0;
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		__this->set_startTimer_4((bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(GameSceneManager_t277739717_il2cpp_TypeInfo_var);
		float L_1 = ((GameSceneManager_t277739717_StaticFields*)GameSceneManager_t277739717_il2cpp_TypeInfo_var->static_fields)->get_TIMER_LENGTH_3();
		__this->set_timer_5(L_1);
	}

IL_001b:
	{
		return;
	}
}
// System.String GameSceneManager::GetPrevScene()
extern Il2CppClass* GameSceneManager_t277739717_il2cpp_TypeInfo_var;
extern const uint32_t GameSceneManager_GetPrevScene_m2654384510_MetadataUsageId;
extern "C"  String_t* GameSceneManager_GetPrevScene_m2654384510 (GameSceneManager_t277739717 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameSceneManager_GetPrevScene_m2654384510_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameSceneManager_t277739717_il2cpp_TypeInfo_var);
		String_t* L_0 = ((GameSceneManager_t277739717_StaticFields*)GameSceneManager_t277739717_il2cpp_TypeInfo_var->static_fields)->get_PREV_SCENE_2();
		String_t* L_1 = PlayerPrefs_GetString_m1903615000(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0011;
	}

IL_0011:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Void GameSceneManager::SetPrevScene(System.String)
extern Il2CppClass* GameSceneManager_t277739717_il2cpp_TypeInfo_var;
extern const uint32_t GameSceneManager_SetPrevScene_m1513945461_MetadataUsageId;
extern "C"  void GameSceneManager_SetPrevScene_m1513945461 (Il2CppObject * __this /* static, unused */, String_t* ___scene0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameSceneManager_SetPrevScene_m1513945461_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameSceneManager_t277739717_il2cpp_TypeInfo_var);
		String_t* L_0 = ((GameSceneManager_t277739717_StaticFields*)GameSceneManager_t277739717_il2cpp_TypeInfo_var->static_fields)->get_PREV_SCENE_2();
		String_t* L_1 = ___scene0;
		PlayerPrefs_SetString_m2547809843(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameSceneManager::.cctor()
extern Il2CppClass* GameSceneManager_t277739717_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2563158975;
extern const uint32_t GameSceneManager__cctor_m3182283413_MetadataUsageId;
extern "C"  void GameSceneManager__cctor_m3182283413 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameSceneManager__cctor_m3182283413_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((GameSceneManager_t277739717_StaticFields*)GameSceneManager_t277739717_il2cpp_TypeInfo_var->static_fields)->set_PREV_SCENE_2(_stringLiteral2563158975);
		((GameSceneManager_t277739717_StaticFields*)GameSceneManager_t277739717_il2cpp_TypeInfo_var->static_fields)->set_TIMER_LENGTH_3((0.25f));
		return;
	}
}
extern "C" void DEFAULT_CALL _addMetadataForMatchInProgress(char*, int32_t);
// System.Void SkillzSDK.Api::_addMetadataForMatchInProgress(System.String,System.Boolean)
extern "C"  void Api__addMetadataForMatchInProgress_m3941390800 (Il2CppObject * __this /* static, unused */, String_t* ___metadataJson0, bool ___forMatchInProgress1, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);

	// Marshaling of parameter '___metadataJson0' to native representation
	char* ____metadataJson0_marshaled = NULL;
	____metadataJson0_marshaled = il2cpp_codegen_marshal_string(___metadataJson0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_addMetadataForMatchInProgress)(____metadataJson0_marshaled, static_cast<int32_t>(___forMatchInProgress1));

	// Marshaling cleanup of parameter '___metadataJson0' native representation
	il2cpp_codegen_marshal_free(____metadataJson0_marshaled);
	____metadataJson0_marshaled = NULL;

}
extern "C" int32_t DEFAULT_CALL _getRandomNumber();
// System.Int32 SkillzSDK.Api::_getRandomNumber()
extern "C"  int32_t Api__getRandomNumber_m3248116795 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_getRandomNumber)();

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL _getRandomNumberWithMinAndMax(int32_t, int32_t);
// System.Int32 SkillzSDK.Api::_getRandomNumberWithMinAndMax(System.Int32,System.Int32)
extern "C"  int32_t Api__getRandomNumberWithMinAndMax_m1465320238 (Il2CppObject * __this /* static, unused */, int32_t ___min0, int32_t ___max1, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_getRandomNumberWithMinAndMax)(___min0, ___max1);

	return returnValue;
}
extern "C" void DEFAULT_CALL _skillzInitForGameIdAndEnvironment(char*, char*);
// System.Void SkillzSDK.Api::_skillzInitForGameIdAndEnvironment(System.String,System.String)
extern "C"  void Api__skillzInitForGameIdAndEnvironment_m3331601678 (Il2CppObject * __this /* static, unused */, String_t* ___gameId0, String_t* ___environment1, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter '___gameId0' to native representation
	char* ____gameId0_marshaled = NULL;
	____gameId0_marshaled = il2cpp_codegen_marshal_string(___gameId0);

	// Marshaling of parameter '___environment1' to native representation
	char* ____environment1_marshaled = NULL;
	____environment1_marshaled = il2cpp_codegen_marshal_string(___environment1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_skillzInitForGameIdAndEnvironment)(____gameId0_marshaled, ____environment1_marshaled);

	// Marshaling cleanup of parameter '___gameId0' native representation
	il2cpp_codegen_marshal_free(____gameId0_marshaled);
	____gameId0_marshaled = NULL;

	// Marshaling cleanup of parameter '___environment1' native representation
	il2cpp_codegen_marshal_free(____environment1_marshaled);
	____environment1_marshaled = NULL;

}
extern "C" int32_t DEFAULT_CALL _tournamentIsInProgress();
// System.Int32 SkillzSDK.Api::_tournamentIsInProgress()
extern "C"  int32_t Api__tournamentIsInProgress_m1349815042 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_tournamentIsInProgress)();

	return returnValue;
}
extern "C" intptr_t DEFAULT_CALL _player();
// System.IntPtr SkillzSDK.Api::_player()
extern "C"  IntPtr_t Api__player_m4230033813 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(_player)();

	// Marshaling of return value back from native representation
	IntPtr_t _returnValue_unmarshaled;
	_returnValue_unmarshaled.set_m_value_0(reinterpret_cast<void*>((intptr_t)(returnValue)));

	return _returnValue_unmarshaled;
}
extern "C" intptr_t DEFAULT_CALL _SDKShortVersion();
// System.IntPtr SkillzSDK.Api::_SDKShortVersion()
extern "C"  IntPtr_t Api__SDKShortVersion_m3377474710 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(_SDKShortVersion)();

	// Marshaling of return value back from native representation
	IntPtr_t _returnValue_unmarshaled;
	_returnValue_unmarshaled.set_m_value_0(reinterpret_cast<void*>((intptr_t)(returnValue)));

	return _returnValue_unmarshaled;
}
extern "C" void DEFAULT_CALL _showSDKVersionInfo();
// System.Void SkillzSDK.Api::_showSDKVersionInfo()
extern "C"  void Api__showSDKVersionInfo_m712259022 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_showSDKVersionInfo)();

}
extern "C" void DEFAULT_CALL _launchSkillz(char*);
// System.Void SkillzSDK.Api::_launchSkillz(System.String)
extern "C"  void Api__launchSkillz_m3319942915 (Il2CppObject * __this /* static, unused */, String_t* ___orientation0, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___orientation0' to native representation
	char* ____orientation0_marshaled = NULL;
	____orientation0_marshaled = il2cpp_codegen_marshal_string(___orientation0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_launchSkillz)(____orientation0_marshaled);

	// Marshaling cleanup of parameter '___orientation0' native representation
	il2cpp_codegen_marshal_free(____orientation0_marshaled);
	____orientation0_marshaled = NULL;

}
extern "C" void DEFAULT_CALL _displayTournamentResultsWithScore(int32_t);
// System.Void SkillzSDK.Api::_displayTournamentResultsWithScore(System.Int32)
extern "C"  void Api__displayTournamentResultsWithScore_m3194878409 (Il2CppObject * __this /* static, unused */, int32_t ___score0, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_displayTournamentResultsWithScore)(___score0);

}
extern "C" void DEFAULT_CALL _displayTournamentResultsWithFloatScore(float);
// System.Void SkillzSDK.Api::_displayTournamentResultsWithFloatScore(System.Single)
extern "C"  void Api__displayTournamentResultsWithFloatScore_m2130054253 (Il2CppObject * __this /* static, unused */, float ___score0, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_displayTournamentResultsWithFloatScore)(___score0);

}
extern "C" void DEFAULT_CALL _completeTurnWithGameData(char*, char*, float, float, char*, char*);
// System.Void SkillzSDK.Api::_completeTurnWithGameData(System.String,System.String,System.Single,System.Single,System.String,System.String)
extern "C"  void Api__completeTurnWithGameData_m3970940879 (Il2CppObject * __this /* static, unused */, String_t* ___gameData0, String_t* ___score1, float ___playerCurrentTotalScore2, float ___opponentCurrentTotalScore3, String_t* ___roundOutcome4, String_t* ___matchOutcome5, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*, float, float, char*, char*);

	// Marshaling of parameter '___gameData0' to native representation
	char* ____gameData0_marshaled = NULL;
	____gameData0_marshaled = il2cpp_codegen_marshal_string(___gameData0);

	// Marshaling of parameter '___score1' to native representation
	char* ____score1_marshaled = NULL;
	____score1_marshaled = il2cpp_codegen_marshal_string(___score1);

	// Marshaling of parameter '___roundOutcome4' to native representation
	char* ____roundOutcome4_marshaled = NULL;
	____roundOutcome4_marshaled = il2cpp_codegen_marshal_string(___roundOutcome4);

	// Marshaling of parameter '___matchOutcome5' to native representation
	char* ____matchOutcome5_marshaled = NULL;
	____matchOutcome5_marshaled = il2cpp_codegen_marshal_string(___matchOutcome5);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_completeTurnWithGameData)(____gameData0_marshaled, ____score1_marshaled, ___playerCurrentTotalScore2, ___opponentCurrentTotalScore3, ____roundOutcome4_marshaled, ____matchOutcome5_marshaled);

	// Marshaling cleanup of parameter '___gameData0' native representation
	il2cpp_codegen_marshal_free(____gameData0_marshaled);
	____gameData0_marshaled = NULL;

	// Marshaling cleanup of parameter '___score1' native representation
	il2cpp_codegen_marshal_free(____score1_marshaled);
	____score1_marshaled = NULL;

	// Marshaling cleanup of parameter '___roundOutcome4' native representation
	il2cpp_codegen_marshal_free(____roundOutcome4_marshaled);
	____roundOutcome4_marshaled = NULL;

	// Marshaling cleanup of parameter '___matchOutcome5' native representation
	il2cpp_codegen_marshal_free(____matchOutcome5_marshaled);
	____matchOutcome5_marshaled = NULL;

}
extern "C" void DEFAULT_CALL _finishReviewingCurrentGameState();
// System.Void SkillzSDK.Api::_finishReviewingCurrentGameState()
extern "C"  void Api__finishReviewingCurrentGameState_m3046595578 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_finishReviewingCurrentGameState)();

}
extern "C" void DEFAULT_CALL _notifyPlayerAbortWithCompletion();
// System.Void SkillzSDK.Api::_notifyPlayerAbortWithCompletion()
extern "C"  void Api__notifyPlayerAbortWithCompletion_m490015027 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_notifyPlayerAbortWithCompletion)();

}
extern "C" void DEFAULT_CALL _updatePlayersCurrentScore(float);
// System.Void SkillzSDK.Api::_updatePlayersCurrentScore(System.Single)
extern "C"  void Api__updatePlayersCurrentScore_m1350442912 (Il2CppObject * __this /* static, unused */, float ___score0, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_updatePlayersCurrentScore)(___score0);

}
extern "C" float DEFAULT_CALL _getRandomFloat();
// System.Single SkillzSDK.Api::_getRandomFloat()
extern "C"  float Api__getRandomFloat_m3434364398 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	float returnValue = reinterpret_cast<PInvokeFunc>(_getRandomFloat)();

	return returnValue;
}
extern "C" void DEFAULT_CALL _setShouldSkillzLaunchFromURL(int32_t);
// System.Void SkillzSDK.Api::_setShouldSkillzLaunchFromURL(System.Boolean)
extern "C"  void Api__setShouldSkillzLaunchFromURL_m3929442516 (Il2CppObject * __this /* static, unused */, bool ___allowLaunch0, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_setShouldSkillzLaunchFromURL)(static_cast<int32_t>(___allowLaunch0));

}
// System.Boolean SkillzSDK.Api::get_IsTournamentInProgress()
extern "C"  bool Api_get_IsTournamentInProgress_m2422544872 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = Application_get_platform_m3989224144(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_1 = Api__tournamentIsInProgress_m1349815042(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)((((int32_t)L_1) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 0;
	}

IL_001a:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0020;
	}

IL_0020:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.String SkillzSDK.Api::get_CurrentUserDisplayName()
extern "C"  String_t* Api_get_CurrentUserDisplayName_m3600102937 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	Player_t4162098741  V_0;
	memset(&V_0, 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		Player_t4162098741  L_0 = Api_get_Player_m1903705515(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = (&V_0)->get_DisplayName_0();
		V_1 = L_1;
		goto IL_0014;
	}

IL_0014:
	{
		String_t* L_2 = V_1;
		return L_2;
	}
}
// SkillzSDK.Player SkillzSDK.Api::get_Player()
extern Il2CppClass* Marshal_t785896760_il2cpp_TypeInfo_var;
extern const uint32_t Api_get_Player_m1903705515_MetadataUsageId;
extern "C"  Player_t4162098741  Api_get_Player_m1903705515 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Api_get_Player_m1903705515_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Dictionary_2_t309261261 * V_1 = NULL;
	Player_t4162098741  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		IntPtr_t L_0 = Api__player_m4230033813(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t785896760_il2cpp_TypeInfo_var);
		String_t* L_1 = Marshal_PtrToStringAnsi_m2970070000(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		Dictionary_2_t309261261 * L_3 = Api_DeserializeJSONToDictionary_m3130614824(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		Dictionary_2_t309261261 * L_4 = V_1;
		Player_t4162098741  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Player__ctor_m627459380(&L_5, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		goto IL_001f;
	}

IL_001f:
	{
		Player_t4162098741  L_6 = V_2;
		return L_6;
	}
}
// System.String SkillzSDK.Api::get_SDKVersionShort()
extern Il2CppClass* Marshal_t785896760_il2cpp_TypeInfo_var;
extern const uint32_t Api_get_SDKVersionShort_m1046057278_MetadataUsageId;
extern "C"  String_t* Api_get_SDKVersionShort_m1046057278 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Api_get_SDKVersionShort_m1046057278_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		IntPtr_t L_0 = Api__SDKShortVersion_m3377474710(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t785896760_il2cpp_TypeInfo_var);
		String_t* L_1 = Marshal_PtrToStringAnsi_m2970070000(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0011;
	}

IL_0011:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Void SkillzSDK.Api::Initialize(System.String,SkillzSDK.Environment)
extern Il2CppClass* Debug_t1368543263_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2548405134;
extern Il2CppCodeGenString* _stringLiteral1870015092;
extern Il2CppCodeGenString* _stringLiteral3245065498;
extern const uint32_t Api_Initialize_m3025511632_MetadataUsageId;
extern "C"  void Api_Initialize_m3025511632 (Il2CppObject * __this /* static, unused */, String_t* ___gameId0, int32_t ___environment1, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Api_Initialize_m3025511632_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		int32_t L_0 = Application_get_platform_m3989224144(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = ___environment1;
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		V_0 = _stringLiteral2548405134;
		goto IL_0028;
	}

IL_0020:
	{
		V_0 = _stringLiteral1870015092;
	}

IL_0028:
	{
		String_t* L_2 = ___gameId0;
		String_t* L_3 = V_0;
		Api__skillzInitForGameIdAndEnvironment_m3331601678(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		goto IL_0041;
	}

IL_0035:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_LogWarning_m2503577968(NULL /*static, unused*/, _stringLiteral3245065498, /*hidden argument*/NULL);
	}

IL_0041:
	{
		return;
	}
}
// System.Void SkillzSDK.Api::LaunchSkillz(SkillzSDK.Orientation)
extern Il2CppClass* Debug_t1368543263_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral622269836;
extern Il2CppCodeGenString* _stringLiteral1733830040;
extern Il2CppCodeGenString* _stringLiteral1086620435;
extern const uint32_t Api_LaunchSkillz_m2055221213_MetadataUsageId;
extern "C"  void Api_LaunchSkillz_m2055221213 (Il2CppObject * __this /* static, unused */, int32_t ___orientation0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Api_LaunchSkillz_m2055221213_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = Application_get_platform_m3989224144(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_1 = ___orientation0;
		if (L_1)
		{
			goto IL_0024;
		}
	}
	{
		Api__launchSkillz_m3319942915(NULL /*static, unused*/, _stringLiteral622269836, /*hidden argument*/NULL);
		goto IL_0030;
	}

IL_0024:
	{
		Api__launchSkillz_m3319942915(NULL /*static, unused*/, _stringLiteral1733830040, /*hidden argument*/NULL);
	}

IL_0030:
	{
		goto IL_0042;
	}

IL_0036:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_LogError_m3715728798(NULL /*static, unused*/, _stringLiteral1086620435, /*hidden argument*/NULL);
	}

IL_0042:
	{
		return;
	}
}
// System.Void SkillzSDK.Api::UpdatePlayerScore(System.Single)
extern "C"  void Api_UpdatePlayerScore_m1618566087 (Il2CppObject * __this /* static, unused */, float ___currentScoreForPlayer0, const MethodInfo* method)
{
	{
		float L_0 = ___currentScoreForPlayer0;
		Api__updatePlayersCurrentScore_m1350442912(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzSDK.Api::AbortGame()
extern "C"  void Api_AbortGame_m3022560270 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	{
		Api__notifyPlayerAbortWithCompletion_m490015027(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzSDK.Api::FinishTournament(System.Int32)
extern "C"  void Api_FinishTournament_m613936183 (Il2CppObject * __this /* static, unused */, int32_t ___score0, const MethodInfo* method)
{
	{
		int32_t L_0 = ___score0;
		Api__displayTournamentResultsWithScore_m3194878409(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzSDK.Api::FinishTournament(System.Single)
extern "C"  void Api_FinishTournament_m2031012011 (Il2CppObject * __this /* static, unused */, float ___score0, const MethodInfo* method)
{
	{
		float L_0 = ___score0;
		Api__displayTournamentResultsWithFloatScore_m2130054253(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzSDK.Api::FinishTurn(System.String,SkillzSDK.TurnBasedRoundOutcome,SkillzSDK.TurnBasedMatchOutcome)
extern "C"  void Api_FinishTurn_m3489953285 (Il2CppObject * __this /* static, unused */, String_t* ___gameData0, int32_t ___roundOutcome1, int32_t ___matchOutcome2, const MethodInfo* method)
{
	{
		String_t* L_0 = ___gameData0;
		int32_t L_1 = ___roundOutcome1;
		int32_t L_2 = ___matchOutcome2;
		Api_FinishTurn_m1186411527(NULL /*static, unused*/, L_0, L_1, L_2, (String_t*)NULL, (std::numeric_limits<float>::quiet_NaN()), (std::numeric_limits<float>::quiet_NaN()), /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzSDK.Api::FinishTurn(System.String,SkillzSDK.TurnBasedRoundOutcome,SkillzSDK.TurnBasedMatchOutcome,System.String,System.Single,System.Single)
extern Il2CppClass* TurnBasedRoundOutcome_t4169257086_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* TurnBasedMatchOutcome_t3014500315_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1593642701;
extern Il2CppCodeGenString* _stringLiteral1714630596;
extern const uint32_t Api_FinishTurn_m1186411527_MetadataUsageId;
extern "C"  void Api_FinishTurn_m1186411527 (Il2CppObject * __this /* static, unused */, String_t* ___gameData0, int32_t ___roundOutcome1, int32_t ___matchOutcome2, String_t* ___playerTurnScore3, float ___playerTotalScore4, float ___opponentTotalScore5, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Api_FinishTurn_m1186411527_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___gameData0;
		String_t* L_1 = ___playerTurnScore3;
		float L_2 = ___playerTotalScore4;
		float L_3 = ___opponentTotalScore5;
		Il2CppObject * L_4 = Box(TurnBasedRoundOutcome_t4169257086_il2cpp_TypeInfo_var, (&___roundOutcome1));
		NullCheck(L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m2596409543(NULL /*static, unused*/, _stringLiteral1593642701, L_5, /*hidden argument*/NULL);
		Il2CppObject * L_7 = Box(TurnBasedMatchOutcome_t3014500315_il2cpp_TypeInfo_var, (&___matchOutcome2));
		NullCheck(L_7);
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
		String_t* L_9 = String_Concat_m2596409543(NULL /*static, unused*/, _stringLiteral1714630596, L_8, /*hidden argument*/NULL);
		Api__completeTurnWithGameData_m3970940879(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_6, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzSDK.Api::FinishReviewingTurn()
extern "C"  void Api_FinishReviewingTurn_m2449940440 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	{
		Api__finishReviewingCurrentGameState_m3046595578(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzSDK.Api::AddMetadataForMatchInProgress(System.String,System.Boolean)
extern "C"  void Api_AddMetadataForMatchInProgress_m969494395 (Il2CppObject * __this /* static, unused */, String_t* ___metadataJson0, bool ___forMatchInProgress1, const MethodInfo* method)
{
	{
		String_t* L_0 = ___metadataJson0;
		bool L_1 = ___forMatchInProgress1;
		Api__addMetadataForMatchInProgress_m3941390800(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 SkillzSDK.Api::GetRandomNumber()
extern "C"  int32_t Api_GetRandomNumber_m2295430974 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = Api__getRandomNumber_m3248116795(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 SkillzSDK.Api::GetRandomNumber(System.Int32,System.Int32)
extern "C"  int32_t Api_GetRandomNumber_m2953521842 (Il2CppObject * __this /* static, unused */, int32_t ___min0, int32_t ___max1, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___min0;
		int32_t L_1 = ___max1;
		int32_t L_2 = Api__getRandomNumberWithMinAndMax_m1465320238(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Void SkillzSDK.Api::PrintSDKVersionInfo()
extern "C"  void Api_PrintSDKVersionInfo_m3297076605 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	{
		Api__showSDKVersionInfo_m712259022(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzSDK.Api::SetShouldSkillzLaunchFromURL(System.Boolean)
extern "C"  void Api_SetShouldSkillzLaunchFromURL_m3397539431 (Il2CppObject * __this /* static, unused */, bool ___allowLaunch0, const MethodInfo* method)
{
	{
		bool L_0 = ___allowLaunch0;
		Api__setShouldSkillzLaunchFromURL_m3929442516(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> SkillzSDK.Api::DeserializeJSONToDictionary(System.String)
extern Il2CppClass* Dictionary_2_t309261261_il2cpp_TypeInfo_var;
extern const uint32_t Api_DeserializeJSONToDictionary_m3130614824_MetadataUsageId;
extern "C"  Dictionary_2_t309261261 * Api_DeserializeJSONToDictionary_m3130614824 (Il2CppObject * __this /* static, unused */, String_t* ___jsonString0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Api_DeserializeJSONToDictionary_m3130614824_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t309261261 * V_0 = NULL;
	{
		String_t* L_0 = ___jsonString0;
		Il2CppObject * L_1 = Json_Deserialize_m969239781(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t309261261 *)IsInstClass(L_1, Dictionary_2_t309261261_il2cpp_TypeInfo_var));
		goto IL_0012;
	}

IL_0012:
	{
		Dictionary_2_t309261261 * L_2 = V_0;
		return L_2;
	}
}
// System.Single SkillzSDK.Api/Random::Value()
extern "C"  float Random_Value_m1702323749 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (0.0f);
		bool L_0 = Api_get_IsTournamentInProgress_m2422544872(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		float L_1 = Api__getRandomFloat_m3434364398(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0026;
	}

IL_001e:
	{
		float L_2 = Random_get_value_m976649312(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_2;
	}

IL_0026:
	{
		float L_3 = V_0;
		V_1 = L_3;
		goto IL_002d;
	}

IL_002d:
	{
		float L_4 = V_1;
		return L_4;
	}
}
// UnityEngine.Vector3 SkillzSDK.Api/Random::InsideUnitSphere()
extern Il2CppClass* Mathf_t2336485820_il2cpp_TypeInfo_var;
extern const uint32_t Random_InsideUnitSphere_m3945894201_MetadataUsageId;
extern "C"  Vector3_t2243707580  Random_InsideUnitSphere_m3945894201 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Random_InsideUnitSphere_m3945894201_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector3_t2243707580  V_6;
	memset(&V_6, 0, sizeof(V_6));
	{
		float L_0 = Random_Value_m1702323749(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = Random_Value_m1702323749(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = ((float)((float)L_1*(float)(3.14159274f)));
		float L_2 = Random_Value_m1702323749(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = ((float)((float)((float)((float)L_2*(float)(3.14159274f)))*(float)(2.0f)));
		float L_3 = V_0;
		float L_4 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t2336485820_il2cpp_TypeInfo_var);
		float L_5 = cosf(L_4);
		float L_6 = V_1;
		float L_7 = sinf(L_6);
		V_3 = ((float)((float)((float)((float)L_3*(float)L_5))*(float)L_7));
		float L_8 = V_0;
		float L_9 = V_2;
		float L_10 = sinf(L_9);
		float L_11 = V_1;
		float L_12 = sinf(L_11);
		V_4 = ((float)((float)((float)((float)L_8*(float)L_10))*(float)L_12));
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = cosf(L_14);
		V_5 = ((float)((float)L_13*(float)L_15));
		float L_16 = V_3;
		float L_17 = V_4;
		float L_18 = V_5;
		Vector3_t2243707580  L_19;
		memset(&L_19, 0, sizeof(L_19));
		Vector3__ctor_m2638739322(&L_19, L_16, L_17, L_18, /*hidden argument*/NULL);
		V_6 = L_19;
		goto IL_0061;
	}

IL_0061:
	{
		Vector3_t2243707580  L_20 = V_6;
		return L_20;
	}
}
// UnityEngine.Vector2 SkillzSDK.Api/Random::InsideUnitCircle()
extern Il2CppClass* Vector2_t2243707579_il2cpp_TypeInfo_var;
extern Il2CppClass* Mathf_t2336485820_il2cpp_TypeInfo_var;
extern const uint32_t Random_InsideUnitCircle_m3734577335_MetadataUsageId;
extern "C"  Vector2_t2243707579  Random_InsideUnitCircle_m3734577335 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Random_InsideUnitCircle_m3734577335_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector2_t2243707579  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector2_t2243707579  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		V_0 = (1.0f);
		float L_0 = Random_Value_m1702323749(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = ((float)((float)((float)((float)L_0*(float)(2.0f)))*(float)(3.14159274f)));
		Initobj (Vector2_t2243707579_il2cpp_TypeInfo_var, (&V_2));
		float L_1 = V_0;
		float L_2 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t2336485820_il2cpp_TypeInfo_var);
		float L_3 = cosf(L_2);
		(&V_2)->set_x_0(((float)((float)L_1*(float)L_3)));
		float L_4 = V_0;
		float L_5 = V_1;
		float L_6 = sinf(L_5);
		(&V_2)->set_y_1(((float)((float)L_4*(float)L_6)));
		Vector2_t2243707579  L_7 = V_2;
		V_3 = L_7;
		goto IL_0046;
	}

IL_0046:
	{
		Vector2_t2243707579  L_8 = V_3;
		return L_8;
	}
}
// UnityEngine.Vector3 SkillzSDK.Api/Random::OnUnitSphere()
extern Il2CppClass* Vector3_t2243707580_il2cpp_TypeInfo_var;
extern Il2CppClass* Mathf_t2336485820_il2cpp_TypeInfo_var;
extern const uint32_t Random_OnUnitSphere_m3391719348_MetadataUsageId;
extern "C"  Vector3_t2243707580  Random_OnUnitSphere_m3391719348 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Random_OnUnitSphere_m3391719348_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t2243707580  V_0;
	memset(&V_0, 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector3_t2243707580  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		Initobj (Vector3_t2243707580_il2cpp_TypeInfo_var, (&V_0));
	}

IL_0009:
	{
		float L_0 = Random_Value_m1702323749(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->set_x_1(((float)((float)((float)((float)(2.0f)*(float)(((float)((float)L_0)))))-(float)(1.0f))));
		float L_1 = Random_Value_m1702323749(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->set_y_2(((float)((float)((float)((float)(2.0f)*(float)(((float)((float)L_1)))))-(float)(1.0f))));
		float L_2 = (&V_0)->get_x_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t2336485820_il2cpp_TypeInfo_var);
		float L_3 = powf(L_2, (2.0f));
		float L_4 = (&V_0)->get_y_2();
		float L_5 = powf(L_4, (2.0f));
		V_1 = ((float)((float)L_3+(float)L_5));
		float L_6 = V_1;
		if ((((float)L_6) > ((float)(1.0f))))
		{
			goto IL_0009;
		}
	}
	{
		float L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t2336485820_il2cpp_TypeInfo_var);
		float L_8 = sqrtf(((float)((float)(1.0f)-(float)L_7)));
		V_2 = ((float)((float)(2.0f)*(float)L_8));
		Vector3_t2243707580 * L_9 = (&V_0);
		float L_10 = L_9->get_x_1();
		float L_11 = V_2;
		L_9->set_x_1(((float)((float)L_10*(float)L_11)));
		Vector3_t2243707580 * L_12 = (&V_0);
		float L_13 = L_12->get_y_2();
		float L_14 = V_2;
		L_12->set_y_2(((float)((float)L_13*(float)L_14)));
		float L_15 = V_1;
		(&V_0)->set_z_3(((float)((float)((float)((float)(2.0f)*(float)L_15))-(float)(1.0f))));
		Vector3_t2243707580  L_16 = V_0;
		V_3 = L_16;
		goto IL_00b8;
	}

IL_00b8:
	{
		Vector3_t2243707580  L_17 = V_3;
		return L_17;
	}
}
// UnityEngine.Quaternion SkillzSDK.Api/Random::RotationUniform()
extern Il2CppClass* Mathf_t2336485820_il2cpp_TypeInfo_var;
extern const uint32_t Random_RotationUniform_m3118538726_MetadataUsageId;
extern "C"  Quaternion_t4030073918  Random_RotationUniform_m3118538726 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Random_RotationUniform_m3118538726_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	Quaternion_t4030073918  V_9;
	memset(&V_9, 0, sizeof(V_9));
	{
		float L_0 = Random_Value_m1702323749(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = Random_Value_m1702323749(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = Random_Value_m1702323749(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_2;
		float L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t2336485820_il2cpp_TypeInfo_var);
		float L_4 = sqrtf(L_3);
		V_3 = L_4;
		float L_5 = V_0;
		float L_6 = sqrtf(((float)((float)(1.0f)-(float)L_5)));
		V_4 = L_6;
		float L_7 = V_4;
		float L_8 = V_1;
		float L_9 = sinf(((float)((float)(6.28318548f)*(float)L_8)));
		V_5 = ((float)((float)L_7*(float)L_9));
		float L_10 = V_4;
		float L_11 = V_1;
		float L_12 = cosf(((float)((float)(6.28318548f)*(float)L_11)));
		V_6 = ((float)((float)L_10*(float)L_12));
		float L_13 = V_3;
		float L_14 = V_2;
		float L_15 = sinf(((float)((float)(6.28318548f)*(float)L_14)));
		V_7 = ((float)((float)L_13*(float)L_15));
		float L_16 = V_3;
		float L_17 = V_2;
		float L_18 = cosf(((float)((float)(6.28318548f)*(float)L_17)));
		V_8 = ((float)((float)L_16*(float)L_18));
		float L_19 = V_5;
		float L_20 = V_6;
		float L_21 = V_7;
		float L_22 = V_8;
		Quaternion_t4030073918  L_23;
		memset(&L_23, 0, sizeof(L_23));
		Quaternion__ctor_m3196903881(&L_23, L_19, L_20, L_21, L_22, /*hidden argument*/NULL);
		V_9 = L_23;
		goto IL_007e;
	}

IL_007e:
	{
		Quaternion_t4030073918  L_24 = V_9;
		return L_24;
	}
}
// UnityEngine.Quaternion SkillzSDK.Api/Random::Rotation()
extern "C"  Quaternion_t4030073918  Random_Rotation_m4111731280 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	Quaternion_t4030073918  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Quaternion_t4030073918  L_0 = Random_RotationUniform_m3118538726(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Quaternion_t4030073918  L_1 = V_0;
		return L_1;
	}
}
// System.Single SkillzSDK.Api/Random::Range(System.Single,System.Single)
extern "C"  float Random_Range_m2587169101 (Il2CppObject * __this /* static, unused */, float ___min0, float ___max1, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		float L_0 = Random_Value_m1702323749(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = ___min0;
		float L_2 = V_0;
		float L_3 = ___max1;
		float L_4 = ___min0;
		V_1 = ((float)((float)L_1+(float)((float)((float)L_2*(float)((float)((float)L_3-(float)L_4))))));
		goto IL_0014;
	}

IL_0014:
	{
		float L_5 = V_1;
		return L_5;
	}
}
// System.Int32 SkillzSDK.Api/Random::Range(System.Int32,System.Int32)
extern "C"  int32_t Random_Range_m1979568373 (Il2CppObject * __this /* static, unused */, int32_t ___min0, int32_t ___max1, const MethodInfo* method)
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		float L_0 = Random_Value_m1702323749(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = ___min0;
		float L_2 = V_0;
		int32_t L_3 = ___max1;
		int32_t L_4 = ___min0;
		V_1 = ((int32_t)((int32_t)L_1+(int32_t)(((int32_t)((int32_t)((float)((float)L_2*(float)(((float)((float)((int32_t)((int32_t)L_3-(int32_t)L_4))))))))))));
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_5 = V_1;
		return L_5;
	}
}
// System.Void SkillzSDK.ContinuedTurnBasedMatch::.ctor(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern const Il2CppType* Dictionary_2_t309261261_0_0_0_var;
extern Il2CppClass* Type_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Dictionary_2_t309261261_il2cpp_TypeInfo_var;
extern Il2CppClass* Nullable_1_t2341081996_il2cpp_TypeInfo_var;
extern Il2CppClass* Player_t4162098741_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1177268164;
extern Il2CppCodeGenString* _stringLiteral1875821083;
extern Il2CppCodeGenString* _stringLiteral2688340487;
extern Il2CppCodeGenString* _stringLiteral3772638065;
extern const uint32_t ContinuedTurnBasedMatch__ctor_m2740335165_MetadataUsageId;
extern "C"  void ContinuedTurnBasedMatch__ctor_m2740335165 (ContinuedTurnBasedMatch_t105333180 * __this, Dictionary_2_t309261261 * ___matchInfo0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ContinuedTurnBasedMatch__ctor_m2740335165_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppObject * V_0 = NULL;
	Dictionary_2_t309261261 * V_1 = NULL;
	Nullable_1_t2341081996  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Il2CppObject * V_3 = NULL;
	Dictionary_2_t309261261 * V_4 = NULL;
	Player_t4162098741  V_5;
	memset(&V_5, 0, sizeof(V_5));
	{
		Dictionary_2_t309261261 * L_0 = ___matchInfo0;
		String_t* L_1 = SkillzExtensions_SafeGetStringValue_m1232434120(NULL /*static, unused*/, L_0, _stringLiteral1177268164, /*hidden argument*/NULL);
		__this->set_GameData_0(L_1);
		Dictionary_2_t309261261 * L_2 = ___matchInfo0;
		Il2CppObject * L_3 = SkillzExtensions_SafeGetValue_m1809279245(NULL /*static, unused*/, L_2, _stringLiteral1875821083, /*hidden argument*/NULL);
		V_0 = L_3;
		Il2CppObject * L_4 = V_0;
		if (!L_4)
		{
			goto IL_0058;
		}
	}
	{
		Il2CppObject * L_5 = V_0;
		NullCheck(L_5);
		Type_t * L_6 = Object_GetType_m191970594(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, LoadTypeToken(Dictionary_2_t309261261_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Il2CppObject*)(Type_t *)L_6) == ((Il2CppObject*)(Type_t *)L_7))))
		{
			goto IL_0058;
		}
	}
	{
		Il2CppObject * L_8 = V_0;
		V_1 = ((Dictionary_2_t309261261 *)CastclassClass(L_8, Dictionary_2_t309261261_il2cpp_TypeInfo_var));
		Dictionary_2_t309261261 * L_9 = V_1;
		Nullable_1_t2341081996  L_10 = SkillzExtensions_SafeGetDoubleValue_m3582278033(NULL /*static, unused*/, L_9, _stringLiteral2688340487, /*hidden argument*/NULL);
		__this->set_MyCurrentTotalScore_2(L_10);
		goto IL_0069;
	}

IL_0058:
	{
		Initobj (Nullable_1_t2341081996_il2cpp_TypeInfo_var, (&V_2));
		Nullable_1_t2341081996  L_11 = V_2;
		__this->set_MyCurrentTotalScore_2(L_11);
	}

IL_0069:
	{
		Dictionary_2_t309261261 * L_12 = ___matchInfo0;
		Il2CppObject * L_13 = SkillzExtensions_SafeGetValue_m1809279245(NULL /*static, unused*/, L_12, _stringLiteral3772638065, /*hidden argument*/NULL);
		V_3 = L_13;
		Il2CppObject * L_14 = V_3;
		if (!L_14)
		{
			goto IL_00be;
		}
	}
	{
		Il2CppObject * L_15 = V_3;
		NullCheck(L_15);
		Type_t * L_16 = Object_GetType_m191970594(L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_17 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, LoadTypeToken(Dictionary_2_t309261261_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Il2CppObject*)(Type_t *)L_16) == ((Il2CppObject*)(Type_t *)L_17))))
		{
			goto IL_00be;
		}
	}
	{
		Il2CppObject * L_18 = V_3;
		V_4 = ((Dictionary_2_t309261261 *)CastclassClass(L_18, Dictionary_2_t309261261_il2cpp_TypeInfo_var));
		Dictionary_2_t309261261 * L_19 = V_4;
		Player_t4162098741  L_20;
		memset(&L_20, 0, sizeof(L_20));
		Player__ctor_m627459380(&L_20, L_19, /*hidden argument*/NULL);
		__this->set_Opponent_1(L_20);
		Dictionary_2_t309261261 * L_21 = V_4;
		Nullable_1_t2341081996  L_22 = SkillzExtensions_SafeGetDoubleValue_m3582278033(NULL /*static, unused*/, L_21, _stringLiteral2688340487, /*hidden argument*/NULL);
		__this->set_OpponentCurrentTotalScore_3(L_22);
		goto IL_00df;
	}

IL_00be:
	{
		Initobj (Player_t4162098741_il2cpp_TypeInfo_var, (&V_5));
		Player_t4162098741  L_23 = V_5;
		__this->set_Opponent_1(L_23);
		Initobj (Nullable_1_t2341081996_il2cpp_TypeInfo_var, (&V_2));
		Nullable_1_t2341081996  L_24 = V_2;
		__this->set_OpponentCurrentTotalScore_3(L_24);
	}

IL_00df:
	{
		return;
	}
}
extern "C"  void ContinuedTurnBasedMatch__ctor_m2740335165_AdjustorThunk (Il2CppObject * __this, Dictionary_2_t309261261 * ___matchInfo0, const MethodInfo* method)
{
	ContinuedTurnBasedMatch_t105333180 * _thisAdjusted = reinterpret_cast<ContinuedTurnBasedMatch_t105333180 *>(__this + 1);
	ContinuedTurnBasedMatch__ctor_m2740335165(_thisAdjusted, ___matchInfo0, method);
}
// System.String SkillzSDK.ContinuedTurnBasedMatch::ToString()
extern Il2CppClass* ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var;
extern Il2CppClass* Nullable_1_t2341081996_il2cpp_TypeInfo_var;
extern Il2CppClass* Player_t4162098741_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3083410247;
extern Il2CppCodeGenString* _stringLiteral1509461711;
extern Il2CppCodeGenString* _stringLiteral2961205821;
extern Il2CppCodeGenString* _stringLiteral3615374662;
extern Il2CppCodeGenString* _stringLiteral372029425;
extern const uint32_t ContinuedTurnBasedMatch_ToString_m1164934633_MetadataUsageId;
extern "C"  String_t* ContinuedTurnBasedMatch_ToString_m1164934633 (ContinuedTurnBasedMatch_t105333180 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ContinuedTurnBasedMatch_ToString_m1164934633_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t3614634134* L_0 = ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9)));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral3083410247);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)_stringLiteral3083410247);
		ObjectU5BU5D_t3614634134* L_1 = L_0;
		String_t* L_2 = __this->get_GameData_0();
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_2);
		ObjectU5BU5D_t3614634134* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral1509461711);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppObject *)_stringLiteral1509461711);
		ObjectU5BU5D_t3614634134* L_4 = L_3;
		Nullable_1_t2341081996  L_5 = __this->get_MyCurrentTotalScore_2();
		Nullable_1_t2341081996  L_6 = L_5;
		Il2CppObject * L_7 = Box(Nullable_1_t2341081996_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppObject *)L_7);
		ObjectU5BU5D_t3614634134* L_8 = L_4;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral2961205821);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (Il2CppObject *)_stringLiteral2961205821);
		ObjectU5BU5D_t3614634134* L_9 = L_8;
		Player_t4162098741  L_10 = __this->get_Opponent_1();
		Player_t4162098741  L_11 = L_10;
		Il2CppObject * L_12 = Box(Player_t4162098741_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(5), (Il2CppObject *)L_12);
		ObjectU5BU5D_t3614634134* L_13 = L_9;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral3615374662);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (Il2CppObject *)_stringLiteral3615374662);
		ObjectU5BU5D_t3614634134* L_14 = L_13;
		Nullable_1_t2341081996  L_15 = __this->get_OpponentCurrentTotalScore_3();
		Nullable_1_t2341081996  L_16 = L_15;
		Il2CppObject * L_17 = Box(Nullable_1_t2341081996_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(7), (Il2CppObject *)L_17);
		ObjectU5BU5D_t3614634134* L_18 = L_14;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteral372029425);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(8), (Il2CppObject *)_stringLiteral372029425);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_19 = String_Concat_m3881798623(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		V_0 = L_19;
		goto IL_006e;
	}

IL_006e:
	{
		String_t* L_20 = V_0;
		return L_20;
	}
}
extern "C"  String_t* ContinuedTurnBasedMatch_ToString_m1164934633_AdjustorThunk (Il2CppObject * __this, const MethodInfo* method)
{
	ContinuedTurnBasedMatch_t105333180 * _thisAdjusted = reinterpret_cast<ContinuedTurnBasedMatch_t105333180 *>(__this + 1);
	return ContinuedTurnBasedMatch_ToString_m1164934633(_thisAdjusted, method);
}
// System.String SkillzSDK.ContinuedTurnBasedMatch::get_OpponentAvatarURL()
extern Il2CppCodeGenString* _stringLiteral371857150;
extern const uint32_t ContinuedTurnBasedMatch_get_OpponentAvatarURL_m2212338657_MetadataUsageId;
extern "C"  String_t* ContinuedTurnBasedMatch_get_OpponentAvatarURL_m2212338657 (ContinuedTurnBasedMatch_t105333180 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ContinuedTurnBasedMatch_get_OpponentAvatarURL_m2212338657_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Player_t4162098741  V_0;
	memset(&V_0, 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		Player_t4162098741  L_0 = __this->get_Opponent_1();
		V_0 = L_0;
		String_t* L_1 = (&V_0)->get_AvatarURL_2();
		String_t* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_001b;
		}
	}
	{
		G_B2_0 = _stringLiteral371857150;
	}

IL_001b:
	{
		V_1 = G_B2_0;
		goto IL_0021;
	}

IL_0021:
	{
		String_t* L_3 = V_1;
		return L_3;
	}
}
extern "C"  String_t* ContinuedTurnBasedMatch_get_OpponentAvatarURL_m2212338657_AdjustorThunk (Il2CppObject * __this, const MethodInfo* method)
{
	ContinuedTurnBasedMatch_t105333180 * _thisAdjusted = reinterpret_cast<ContinuedTurnBasedMatch_t105333180 *>(__this + 1);
	return ContinuedTurnBasedMatch_get_OpponentAvatarURL_m2212338657(_thisAdjusted, method);
}
// System.String SkillzSDK.ContinuedTurnBasedMatch::get_OpponentDisplayName()
extern Il2CppCodeGenString* _stringLiteral371857150;
extern const uint32_t ContinuedTurnBasedMatch_get_OpponentDisplayName_m1240271442_MetadataUsageId;
extern "C"  String_t* ContinuedTurnBasedMatch_get_OpponentDisplayName_m1240271442 (ContinuedTurnBasedMatch_t105333180 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ContinuedTurnBasedMatch_get_OpponentDisplayName_m1240271442_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Player_t4162098741  V_0;
	memset(&V_0, 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		Player_t4162098741  L_0 = __this->get_Opponent_1();
		V_0 = L_0;
		String_t* L_1 = (&V_0)->get_DisplayName_0();
		String_t* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_001b;
		}
	}
	{
		G_B2_0 = _stringLiteral371857150;
	}

IL_001b:
	{
		V_1 = G_B2_0;
		goto IL_0021;
	}

IL_0021:
	{
		String_t* L_3 = V_1;
		return L_3;
	}
}
extern "C"  String_t* ContinuedTurnBasedMatch_get_OpponentDisplayName_m1240271442_AdjustorThunk (Il2CppObject * __this, const MethodInfo* method)
{
	ContinuedTurnBasedMatch_t105333180 * _thisAdjusted = reinterpret_cast<ContinuedTurnBasedMatch_t105333180 *>(__this + 1);
	return ContinuedTurnBasedMatch_get_OpponentDisplayName_m1240271442(_thisAdjusted, method);
}
// System.UInt32 SkillzSDK.ContinuedTurnBasedMatch::get_OpponentUniqueID()
extern const MethodInfo* Nullable_1_get_HasValue_m373321800_MethodInfo_var;
extern const MethodInfo* Nullable_1_get_Value_m1489477262_MethodInfo_var;
extern const uint32_t ContinuedTurnBasedMatch_get_OpponentUniqueID_m3577667203_MetadataUsageId;
extern "C"  uint32_t ContinuedTurnBasedMatch_get_OpponentUniqueID_m3577667203 (ContinuedTurnBasedMatch_t105333180 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ContinuedTurnBasedMatch_get_OpponentUniqueID_m3577667203_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Player_t4162098741  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Nullable_1_t412748336  V_1;
	memset(&V_1, 0, sizeof(V_1));
	uint32_t V_2 = 0;
	uint32_t G_B3_0 = 0;
	{
		Player_t4162098741  L_0 = __this->get_Opponent_1();
		V_0 = L_0;
		Nullable_1_t412748336  L_1 = (&V_0)->get_ID_1();
		V_1 = L_1;
		bool L_2 = Nullable_1_get_HasValue_m373321800((&V_1), /*hidden argument*/Nullable_1_get_HasValue_m373321800_MethodInfo_var);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		uint32_t L_3 = Nullable_1_get_Value_m1489477262((&V_1), /*hidden argument*/Nullable_1_get_Value_m1489477262_MethodInfo_var);
		G_B3_0 = L_3;
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = ((uint32_t)(0));
	}

IL_0029:
	{
		V_2 = G_B3_0;
		goto IL_002f;
	}

IL_002f:
	{
		uint32_t L_4 = V_2;
		return L_4;
	}
}
extern "C"  uint32_t ContinuedTurnBasedMatch_get_OpponentUniqueID_m3577667203_AdjustorThunk (Il2CppObject * __this, const MethodInfo* method)
{
	ContinuedTurnBasedMatch_t105333180 * _thisAdjusted = reinterpret_cast<ContinuedTurnBasedMatch_t105333180 *>(__this + 1);
	return ContinuedTurnBasedMatch_get_OpponentUniqueID_m3577667203(_thisAdjusted, method);
}
// Conversion methods for marshalling of: SkillzSDK.ContinuedTurnBasedMatch
extern "C" void ContinuedTurnBasedMatch_t105333180_marshal_pinvoke(const ContinuedTurnBasedMatch_t105333180& unmarshaled, ContinuedTurnBasedMatch_t105333180_marshaled_pinvoke& marshaled)
{
	Il2CppCodeGenException* ___Opponent_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Opponent' of type 'ContinuedTurnBasedMatch'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Opponent_1Exception);
}
extern "C" void ContinuedTurnBasedMatch_t105333180_marshal_pinvoke_back(const ContinuedTurnBasedMatch_t105333180_marshaled_pinvoke& marshaled, ContinuedTurnBasedMatch_t105333180& unmarshaled)
{
	Il2CppCodeGenException* ___Opponent_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Opponent' of type 'ContinuedTurnBasedMatch'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Opponent_1Exception);
}
// Conversion method for clean up from marshalling of: SkillzSDK.ContinuedTurnBasedMatch
extern "C" void ContinuedTurnBasedMatch_t105333180_marshal_pinvoke_cleanup(ContinuedTurnBasedMatch_t105333180_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: SkillzSDK.ContinuedTurnBasedMatch
extern "C" void ContinuedTurnBasedMatch_t105333180_marshal_com(const ContinuedTurnBasedMatch_t105333180& unmarshaled, ContinuedTurnBasedMatch_t105333180_marshaled_com& marshaled)
{
	Il2CppCodeGenException* ___Opponent_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Opponent' of type 'ContinuedTurnBasedMatch'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Opponent_1Exception);
}
extern "C" void ContinuedTurnBasedMatch_t105333180_marshal_com_back(const ContinuedTurnBasedMatch_t105333180_marshaled_com& marshaled, ContinuedTurnBasedMatch_t105333180& unmarshaled)
{
	Il2CppCodeGenException* ___Opponent_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Opponent' of type 'ContinuedTurnBasedMatch'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Opponent_1Exception);
}
// Conversion method for clean up from marshalling of: SkillzSDK.ContinuedTurnBasedMatch
extern "C" void ContinuedTurnBasedMatch_t105333180_marshal_com_cleanup(ContinuedTurnBasedMatch_t105333180_marshaled_com& marshaled)
{
}
// System.Nullable`1<System.Boolean> SkillzSDK.Extensions.SkillzExtensions::SafeGetBoolValue(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
extern Il2CppCodeGenString* _stringLiteral3323264318;
extern Il2CppCodeGenString* _stringLiteral2609910045;
extern Il2CppCodeGenString* _stringLiteral372029325;
extern Il2CppCodeGenString* _stringLiteral372029326;
extern const uint32_t SkillzExtensions_SafeGetBoolValue_m3602896471_MetadataUsageId;
extern "C"  Nullable_1_t2088641033  SkillzExtensions_SafeGetBoolValue_m3602896471 (Il2CppObject * __this /* static, unused */, Dictionary_2_t309261261 * ___dict0, String_t* ___key1, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkillzExtensions_SafeGetBoolValue_m3602896471_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Nullable_1_t2088641033  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Dictionary_2_t309261261 * L_0 = ___dict0;
		String_t* L_1 = ___key1;
		String_t* L_2 = SkillzExtensions_SafeGetStringValue_m1232434120(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		Nullable_1_t2088641033  L_4 = Helpers_SafeBoolParse_m3833182202(NULL /*static, unused*/, L_3, _stringLiteral3323264318, _stringLiteral2609910045, _stringLiteral372029325, _stringLiteral372029326, /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_0029;
	}

IL_0029:
	{
		Nullable_1_t2088641033  L_5 = V_1;
		return L_5;
	}
}
// System.Nullable`1<System.Double> SkillzSDK.Extensions.SkillzExtensions::SafeGetDoubleValue(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
extern "C"  Nullable_1_t2341081996  SkillzExtensions_SafeGetDoubleValue_m3582278033 (Il2CppObject * __this /* static, unused */, Dictionary_2_t309261261 * ___dict0, String_t* ___key1, const MethodInfo* method)
{
	String_t* V_0 = NULL;
	Nullable_1_t2341081996  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Dictionary_2_t309261261 * L_0 = ___dict0;
		String_t* L_1 = ___key1;
		String_t* L_2 = SkillzExtensions_SafeGetStringValue_m1232434120(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		Nullable_1_t2341081996  L_4 = Helpers_SafeDoubleParse_m2429094246(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Nullable_1_t2341081996  L_5 = V_1;
		return L_5;
	}
}
// System.Nullable`1<System.DateTime> SkillzSDK.Extensions.SkillzExtensions::SafeGetUnixDateTimeValue(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
extern "C"  Nullable_1_t3251239280  SkillzExtensions_SafeGetUnixDateTimeValue_m4069810339 (Il2CppObject * __this /* static, unused */, Dictionary_2_t309261261 * ___dict0, String_t* ___key1, const MethodInfo* method)
{
	Nullable_1_t2341081996  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Nullable_1_t3251239280  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Dictionary_2_t309261261 * L_0 = ___dict0;
		String_t* L_1 = ___key1;
		Nullable_1_t2341081996  L_2 = SkillzExtensions_SafeGetDoubleValue_m3582278033(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Nullable_1_t2341081996  L_3 = V_0;
		Nullable_1_t3251239280  L_4 = Helpers_SafeParseUnixTime_m1328800797(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Nullable_1_t3251239280  L_5 = V_1;
		return L_5;
	}
}
// System.Nullable`1<System.Int32> SkillzSDK.Extensions.SkillzExtensions::SafeGetIntValue(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
extern "C"  Nullable_1_t334943763  SkillzExtensions_SafeGetIntValue_m15557640 (Il2CppObject * __this /* static, unused */, Dictionary_2_t309261261 * ___dict0, String_t* ___key1, const MethodInfo* method)
{
	String_t* V_0 = NULL;
	Nullable_1_t334943763  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Dictionary_2_t309261261 * L_0 = ___dict0;
		String_t* L_1 = ___key1;
		String_t* L_2 = SkillzExtensions_SafeGetStringValue_m1232434120(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		Nullable_1_t334943763  L_4 = Helpers_SafeIntParse_m1349804695(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Nullable_1_t334943763  L_5 = V_1;
		return L_5;
	}
}
// System.Nullable`1<System.UInt32> SkillzSDK.Extensions.SkillzExtensions::SafeGetUintValue(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
extern "C"  Nullable_1_t412748336  SkillzExtensions_SafeGetUintValue_m657502786 (Il2CppObject * __this /* static, unused */, Dictionary_2_t309261261 * ___dict0, String_t* ___key1, const MethodInfo* method)
{
	String_t* V_0 = NULL;
	Nullable_1_t412748336  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Dictionary_2_t309261261 * L_0 = ___dict0;
		String_t* L_1 = ___key1;
		String_t* L_2 = SkillzExtensions_SafeGetStringValue_m1232434120(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		Nullable_1_t412748336  L_4 = Helpers_SafeUintParse_m2355548551(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Nullable_1_t412748336  L_5 = V_1;
		return L_5;
	}
}
// System.String SkillzSDK.Extensions.SkillzExtensions::SafeGetStringValue(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
extern "C"  String_t* SkillzExtensions_SafeGetStringValue_m1232434120 (Il2CppObject * __this /* static, unused */, Dictionary_2_t309261261 * ___dict0, String_t* ___key1, const MethodInfo* method)
{
	Il2CppObject * V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* G_B3_0 = NULL;
	{
		Dictionary_2_t309261261 * L_0 = ___dict0;
		String_t* L_1 = ___key1;
		Il2CppObject * L_2 = SkillzExtensions_SafeGetValue_m1809279245(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Il2CppObject * L_3 = V_0;
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		Il2CppObject * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		G_B3_0 = L_5;
		goto IL_001b;
	}

IL_001a:
	{
		G_B3_0 = ((String_t*)(NULL));
	}

IL_001b:
	{
		V_1 = G_B3_0;
		goto IL_0021;
	}

IL_0021:
	{
		String_t* L_6 = V_1;
		return L_6;
	}
}
// System.Object SkillzSDK.Extensions.SkillzExtensions::SafeGetValue(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
extern const MethodInfo* Dictionary_2_ContainsKey_m3839145803_MethodInfo_var;
extern const MethodInfo* Dictionary_2_get_Item_m1659314300_MethodInfo_var;
extern const uint32_t SkillzExtensions_SafeGetValue_m1809279245_MetadataUsageId;
extern "C"  Il2CppObject * SkillzExtensions_SafeGetValue_m1809279245 (Il2CppObject * __this /* static, unused */, Dictionary_2_t309261261 * ___dict0, String_t* ___key1, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkillzExtensions_SafeGetValue_m1809279245_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppObject * V_0 = NULL;
	Il2CppObject * G_B3_0 = NULL;
	{
		Dictionary_2_t309261261 * L_0 = ___dict0;
		String_t* L_1 = ___key1;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m3839145803(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m3839145803_MethodInfo_var);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		Dictionary_2_t309261261 * L_3 = ___dict0;
		String_t* L_4 = ___key1;
		NullCheck(L_3);
		Il2CppObject * L_5 = Dictionary_2_get_Item_m1659314300(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m1659314300_MethodInfo_var);
		G_B3_0 = L_5;
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = NULL;
	}

IL_001a:
	{
		V_0 = G_B3_0;
		goto IL_0020;
	}

IL_0020:
	{
		Il2CppObject * L_6 = V_0;
		return L_6;
	}
}
// System.Nullable`1<System.Boolean> SkillzSDK.Helpers::SafeBoolParse(System.String,System.String,System.String,System.String,System.String)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Nullable_1_t2088641033_il2cpp_TypeInfo_var;
extern const MethodInfo* Nullable_1__ctor_m2689552070_MethodInfo_var;
extern const uint32_t Helpers_SafeBoolParse_m3833182202_MetadataUsageId;
extern "C"  Nullable_1_t2088641033  Helpers_SafeBoolParse_m3833182202 (Il2CppObject * __this /* static, unused */, String_t* ___str0, String_t* ___trueStr1, String_t* ___falseStr2, String_t* ___trueInt3, String_t* ___falseInt4, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Helpers_SafeBoolParse_m3833182202_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t2088641033  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Nullable_1_t2088641033  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		String_t* L_0 = ___str0;
		String_t* L_1 = ___trueStr1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_3 = ___str0;
		String_t* L_4 = ___trueInt3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0026;
		}
	}

IL_0019:
	{
		Nullable_1_t2088641033  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Nullable_1__ctor_m2689552070(&L_6, (bool)1, /*hidden argument*/Nullable_1__ctor_m2689552070_MethodInfo_var);
		V_0 = L_6;
		goto IL_005b;
	}

IL_0026:
	{
		String_t* L_7 = ___str0;
		String_t* L_8 = ___falseStr2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_9 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_003f;
		}
	}
	{
		String_t* L_10 = ___str0;
		String_t* L_11 = ___falseInt4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_12 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_004c;
		}
	}

IL_003f:
	{
		Nullable_1_t2088641033  L_13;
		memset(&L_13, 0, sizeof(L_13));
		Nullable_1__ctor_m2689552070(&L_13, (bool)0, /*hidden argument*/Nullable_1__ctor_m2689552070_MethodInfo_var);
		V_0 = L_13;
		goto IL_005b;
	}

IL_004c:
	{
		Initobj (Nullable_1_t2088641033_il2cpp_TypeInfo_var, (&V_1));
		Nullable_1_t2088641033  L_14 = V_1;
		V_0 = L_14;
		goto IL_005b;
	}

IL_005b:
	{
		Nullable_1_t2088641033  L_15 = V_0;
		return L_15;
	}
}
// System.Nullable`1<System.DateTime> SkillzSDK.Helpers::SafeParseUnixTime(System.Nullable`1<System.Double>)
extern Il2CppClass* Nullable_1_t3251239280_il2cpp_TypeInfo_var;
extern Il2CppClass* Exception_t1927440687_il2cpp_TypeInfo_var;
extern const MethodInfo* Nullable_1_get_HasValue_m1650683232_MethodInfo_var;
extern const MethodInfo* Nullable_1_get_Value_m1369785918_MethodInfo_var;
extern const MethodInfo* Nullable_1__ctor_m314858655_MethodInfo_var;
extern const uint32_t Helpers_SafeParseUnixTime_m1328800797_MetadataUsageId;
extern "C"  Nullable_1_t3251239280  Helpers_SafeParseUnixTime_m1328800797 (Il2CppObject * __this /* static, unused */, Nullable_1_t2341081996  ___unixTime0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Helpers_SafeParseUnixTime_m1328800797_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t3251239280  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Nullable_1_t3251239280  V_1;
	memset(&V_1, 0, sizeof(V_1));
	DateTime_t693205669  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = Nullable_1_get_HasValue_m1650683232((&___unixTime0), /*hidden argument*/Nullable_1_get_HasValue_m1650683232_MethodInfo_var);
		if (!((((int32_t)L_0) == ((int32_t)0))? 1 : 0))
		{
			goto IL_0020;
		}
	}
	{
		Initobj (Nullable_1_t3251239280_il2cpp_TypeInfo_var, (&V_0));
		Nullable_1_t3251239280  L_1 = V_0;
		V_1 = L_1;
		goto IL_005d;
	}

IL_0020:
	try
	{ // begin try (depth: 1)
		DateTime__ctor_m3270618252((&V_2), ((int32_t)1970), 1, 1, 0, 0, 0, 1, /*hidden argument*/NULL);
		double L_2 = Nullable_1_get_Value_m1369785918((&___unixTime0), /*hidden argument*/Nullable_1_get_Value_m1369785918_MethodInfo_var);
		DateTime_t693205669  L_3 = DateTime_AddSeconds_m722082155((&V_2), L_2, /*hidden argument*/NULL);
		Nullable_1_t3251239280  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Nullable_1__ctor_m314858655(&L_4, L_3, /*hidden argument*/Nullable_1__ctor_m314858655_MethodInfo_var);
		V_1 = L_4;
		goto IL_005d;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t1927440687 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t1927440687_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_004c;
		throw e;
	}

CATCH_004c:
	{ // begin catch(System.Exception)
		Initobj (Nullable_1_t3251239280_il2cpp_TypeInfo_var, (&V_0));
		Nullable_1_t3251239280  L_5 = V_0;
		V_1 = L_5;
		goto IL_005d;
	} // end catch (depth: 1)

IL_005d:
	{
		Nullable_1_t3251239280  L_6 = V_1;
		return L_6;
	}
}
// System.Nullable`1<System.Double> SkillzSDK.Helpers::SafeDoubleParse(System.String)
extern Il2CppClass* Nullable_1_t2341081996_il2cpp_TypeInfo_var;
extern const MethodInfo* Nullable_1__ctor_m2526569243_MethodInfo_var;
extern const uint32_t Helpers_SafeDoubleParse_m2429094246_MetadataUsageId;
extern "C"  Nullable_1_t2341081996  Helpers_SafeDoubleParse_m2429094246 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Helpers_SafeDoubleParse_m2429094246_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	bool V_1 = false;
	Nullable_1_t2341081996  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Nullable_1_t2341081996  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Nullable_1_t2341081996  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	{
		String_t* L_0 = ___str0;
		bool L_1 = Double_TryParse_m3252018994(NULL /*static, unused*/, L_0, (&V_0), /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		double L_3 = V_0;
		Nullable_1_t2341081996  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Nullable_1__ctor_m2526569243(&L_4, L_3, /*hidden argument*/Nullable_1__ctor_m2526569243_MethodInfo_var);
		G_B3_0 = L_4;
		goto IL_0024;
	}

IL_001b:
	{
		Initobj (Nullable_1_t2341081996_il2cpp_TypeInfo_var, (&V_2));
		Nullable_1_t2341081996  L_5 = V_2;
		G_B3_0 = L_5;
	}

IL_0024:
	{
		V_3 = G_B3_0;
		goto IL_002a;
	}

IL_002a:
	{
		Nullable_1_t2341081996  L_6 = V_3;
		return L_6;
	}
}
// System.Nullable`1<System.Int32> SkillzSDK.Helpers::SafeIntParse(System.String)
extern Il2CppClass* Nullable_1_t334943763_il2cpp_TypeInfo_var;
extern const MethodInfo* Nullable_1__ctor_m340725702_MethodInfo_var;
extern const uint32_t Helpers_SafeIntParse_m1349804695_MetadataUsageId;
extern "C"  Nullable_1_t334943763  Helpers_SafeIntParse_m1349804695 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Helpers_SafeIntParse_m1349804695_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	Nullable_1_t334943763  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Nullable_1_t334943763  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Nullable_1_t334943763  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	{
		String_t* L_0 = ___str0;
		bool L_1 = Int32_TryParse_m656840904(NULL /*static, unused*/, L_0, (&V_0), /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_3 = V_0;
		Nullable_1_t334943763  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Nullable_1__ctor_m340725702(&L_4, L_3, /*hidden argument*/Nullable_1__ctor_m340725702_MethodInfo_var);
		G_B3_0 = L_4;
		goto IL_0024;
	}

IL_001b:
	{
		Initobj (Nullable_1_t334943763_il2cpp_TypeInfo_var, (&V_2));
		Nullable_1_t334943763  L_5 = V_2;
		G_B3_0 = L_5;
	}

IL_0024:
	{
		V_3 = G_B3_0;
		goto IL_002a;
	}

IL_002a:
	{
		Nullable_1_t334943763  L_6 = V_3;
		return L_6;
	}
}
// System.Nullable`1<System.UInt32> SkillzSDK.Helpers::SafeUintParse(System.String)
extern Il2CppClass* Nullable_1_t412748336_il2cpp_TypeInfo_var;
extern const MethodInfo* Nullable_1__ctor_m263545653_MethodInfo_var;
extern const uint32_t Helpers_SafeUintParse_m2355548551_MetadataUsageId;
extern "C"  Nullable_1_t412748336  Helpers_SafeUintParse_m2355548551 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Helpers_SafeUintParse_m2355548551_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	Nullable_1_t412748336  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Nullable_1_t412748336  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Nullable_1_t412748336  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	{
		String_t* L_0 = ___str0;
		bool L_1 = UInt32_TryParse_m4283512434(NULL /*static, unused*/, L_0, (&V_0), /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		uint32_t L_3 = V_0;
		Nullable_1_t412748336  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Nullable_1__ctor_m263545653(&L_4, L_3, /*hidden argument*/Nullable_1__ctor_m263545653_MethodInfo_var);
		G_B3_0 = L_4;
		goto IL_0024;
	}

IL_001b:
	{
		Initobj (Nullable_1_t412748336_il2cpp_TypeInfo_var, (&V_2));
		Nullable_1_t412748336  L_5 = V_2;
		G_B3_0 = L_5;
	}

IL_0024:
	{
		V_3 = G_B3_0;
		goto IL_002a;
	}

IL_002a:
	{
		Nullable_1_t412748336  L_6 = V_3;
		return L_6;
	}
}
// System.Void SkillzSDK.Match::.ctor(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern const Il2CppType* Dictionary_2_t309261261_0_0_0_var;
extern Il2CppClass* Type_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Dictionary_2_t309261261_il2cpp_TypeInfo_var;
extern Il2CppClass* Player_t4162098741_il2cpp_TypeInfo_var;
extern Il2CppClass* Dictionary_2_t3943999495_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Nullable_1_get_Value_m1369785918_MethodInfo_var;
extern const MethodInfo* Nullable_1__ctor_m4293084486_MethodInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2768501952_MethodInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m1937427624_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m1068972542_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m4112425633_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m231366286_MethodInfo_var;
extern const MethodInfo* Dictionary_2_Add_m2139965640_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m1221037759_MethodInfo_var;
extern const MethodInfo* Enumerator_Dispose_m977331043_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral3502937385;
extern Il2CppCodeGenString* _stringLiteral10668785;
extern Il2CppCodeGenString* _stringLiteral4170022787;
extern Il2CppCodeGenString* _stringLiteral287061489;
extern Il2CppCodeGenString* _stringLiteral2268429821;
extern Il2CppCodeGenString* _stringLiteral2328218955;
extern Il2CppCodeGenString* _stringLiteral4290231287;
extern Il2CppCodeGenString* _stringLiteral1875821083;
extern Il2CppCodeGenString* _stringLiteral3761535424;
extern Il2CppCodeGenString* _stringLiteral4112217487;
extern const uint32_t Match__ctor_m2937599774_MetadataUsageId;
extern "C"  void Match__ctor_m2937599774 (Match_t3198203703 * __this, Dictionary_2_t309261261 * ___jsonData0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Match__ctor_m2937599774_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t2341081996  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Il2CppObject * V_1 = NULL;
	Dictionary_2_t309261261 * V_2 = NULL;
	Player_t4162098741  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Il2CppObject * V_4 = NULL;
	KeyValuePair_2_t2361573779  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Enumerator_t1629285963  V_6;
	memset(&V_6, 0, sizeof(V_6));
	String_t* V_7 = NULL;
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		Dictionary_2_t309261261 * L_0 = ___jsonData0;
		String_t* L_1 = SkillzExtensions_SafeGetStringValue_m1232434120(NULL /*static, unused*/, L_0, _stringLiteral3502937385, /*hidden argument*/NULL);
		__this->set_Description_1(L_1);
		Dictionary_2_t309261261 * L_2 = ___jsonData0;
		Nullable_1_t2341081996  L_3 = SkillzExtensions_SafeGetDoubleValue_m3582278033(NULL /*static, unused*/, L_2, _stringLiteral10668785, /*hidden argument*/NULL);
		V_0 = L_3;
		double L_4 = Nullable_1_get_Value_m1369785918((&V_0), /*hidden argument*/Nullable_1_get_Value_m1369785918_MethodInfo_var);
		Nullable_1_t339576247  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Nullable_1__ctor_m4293084486(&L_5, (((float)((float)L_4))), /*hidden argument*/Nullable_1__ctor_m4293084486_MethodInfo_var);
		__this->set_EntryCash_9(L_5);
		Dictionary_2_t309261261 * L_6 = ___jsonData0;
		Nullable_1_t334943763  L_7 = SkillzExtensions_SafeGetIntValue_m15557640(NULL /*static, unused*/, L_6, _stringLiteral4170022787, /*hidden argument*/NULL);
		__this->set_EntryPoints_8(L_7);
		Dictionary_2_t309261261 * L_8 = ___jsonData0;
		Nullable_1_t334943763  L_9 = SkillzExtensions_SafeGetIntValue_m15557640(NULL /*static, unused*/, L_8, _stringLiteral287061489, /*hidden argument*/NULL);
		__this->set_ID_2(L_9);
		Dictionary_2_t309261261 * L_10 = ___jsonData0;
		Nullable_1_t334943763  L_11 = SkillzExtensions_SafeGetIntValue_m15557640(NULL /*static, unused*/, L_10, _stringLiteral2268429821, /*hidden argument*/NULL);
		__this->set_TemplateID_3(L_11);
		Dictionary_2_t309261261 * L_12 = ___jsonData0;
		String_t* L_13 = SkillzExtensions_SafeGetStringValue_m1232434120(NULL /*static, unused*/, L_12, _stringLiteral2328218955, /*hidden argument*/NULL);
		__this->set_Name_0(L_13);
		Dictionary_2_t309261261 * L_14 = ___jsonData0;
		Nullable_1_t2088641033  L_15 = SkillzExtensions_SafeGetBoolValue_m3602896471(NULL /*static, unused*/, L_14, _stringLiteral4290231287, /*hidden argument*/NULL);
		__this->set_IsCash_7(L_15);
		Dictionary_2_t309261261 * L_16 = ___jsonData0;
		Il2CppObject * L_17 = SkillzExtensions_SafeGetValue_m1809279245(NULL /*static, unused*/, L_16, _stringLiteral1875821083, /*hidden argument*/NULL);
		V_1 = L_17;
		Il2CppObject * L_18 = V_1;
		if (!L_18)
		{
			goto IL_00cd;
		}
	}
	{
		Il2CppObject * L_19 = V_1;
		NullCheck(L_19);
		Type_t * L_20 = Object_GetType_m191970594(L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_21 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, LoadTypeToken(Dictionary_2_t309261261_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Il2CppObject*)(Type_t *)L_20) == ((Il2CppObject*)(Type_t *)L_21))))
		{
			goto IL_00cd;
		}
	}
	{
		Il2CppObject * L_22 = V_1;
		V_2 = ((Dictionary_2_t309261261 *)CastclassClass(L_22, Dictionary_2_t309261261_il2cpp_TypeInfo_var));
		Dictionary_2_t309261261 * L_23 = V_2;
		Player_t4162098741  L_24;
		memset(&L_24, 0, sizeof(L_24));
		Player__ctor_m627459380(&L_24, L_23, /*hidden argument*/NULL);
		__this->set_Player_6(L_24);
		goto IL_00de;
	}

IL_00cd:
	{
		Initobj (Player_t4162098741_il2cpp_TypeInfo_var, (&V_3));
		Player_t4162098741  L_25 = V_3;
		__this->set_Player_6(L_25);
	}

IL_00de:
	{
		Dictionary_2_t3943999495 * L_26 = (Dictionary_2_t3943999495 *)il2cpp_codegen_object_new(Dictionary_2_t3943999495_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2768501952(L_26, /*hidden argument*/Dictionary_2__ctor_m2768501952_MethodInfo_var);
		__this->set_GameParams_5(L_26);
		Dictionary_2_t309261261 * L_27 = ___jsonData0;
		Il2CppObject * L_28 = SkillzExtensions_SafeGetValue_m1809279245(NULL /*static, unused*/, L_27, _stringLiteral3761535424, /*hidden argument*/NULL);
		V_4 = L_28;
		Il2CppObject * L_29 = V_4;
		if (!L_29)
		{
			goto IL_01b3;
		}
	}
	{
		Il2CppObject * L_30 = V_4;
		NullCheck(L_30);
		Type_t * L_31 = Object_GetType_m191970594(L_30, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, LoadTypeToken(Dictionary_2_t309261261_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Il2CppObject*)(Type_t *)L_31) == ((Il2CppObject*)(Type_t *)L_32))))
		{
			goto IL_01b3;
		}
	}
	{
		Il2CppObject * L_33 = V_4;
		NullCheck(((Dictionary_2_t309261261 *)CastclassClass(L_33, Dictionary_2_t309261261_il2cpp_TypeInfo_var)));
		Enumerator_t1629285963  L_34 = Dictionary_2_GetEnumerator_m1937427624(((Dictionary_2_t309261261 *)CastclassClass(L_33, Dictionary_2_t309261261_il2cpp_TypeInfo_var)), /*hidden argument*/Dictionary_2_GetEnumerator_m1937427624_MethodInfo_var);
		V_6 = L_34;
	}

IL_0123:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0193;
		}

IL_0128:
		{
			KeyValuePair_2_t2361573779  L_35 = Enumerator_get_Current_m1068972542((&V_6), /*hidden argument*/Enumerator_get_Current_m1068972542_MethodInfo_var);
			V_5 = L_35;
			Il2CppObject * L_36 = KeyValuePair_2_get_Value_m4112425633((&V_5), /*hidden argument*/KeyValuePair_2_get_Value_m4112425633_MethodInfo_var);
			if (L_36)
			{
				goto IL_0144;
			}
		}

IL_013e:
		{
			goto IL_0193;
		}

IL_0144:
		{
			Il2CppObject * L_37 = KeyValuePair_2_get_Value_m4112425633((&V_5), /*hidden argument*/KeyValuePair_2_get_Value_m4112425633_MethodInfo_var);
			NullCheck(L_37);
			String_t* L_38 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_37);
			V_7 = L_38;
			String_t* L_39 = KeyValuePair_2_get_Key_m231366286((&V_5), /*hidden argument*/KeyValuePair_2_get_Key_m231366286_MethodInfo_var);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_40 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_39, _stringLiteral4112217487, /*hidden argument*/NULL);
			if (!L_40)
			{
				goto IL_017c;
			}
		}

IL_0168:
		{
			String_t* L_41 = V_7;
			Nullable_1_t412748336  L_42 = Helpers_SafeUintParse_m2355548551(NULL /*static, unused*/, L_41, /*hidden argument*/NULL);
			__this->set_SkillzDifficulty_4(L_42);
			goto IL_0192;
		}

IL_017c:
		{
			Dictionary_2_t3943999495 * L_43 = __this->get_GameParams_5();
			String_t* L_44 = KeyValuePair_2_get_Key_m231366286((&V_5), /*hidden argument*/KeyValuePair_2_get_Key_m231366286_MethodInfo_var);
			String_t* L_45 = V_7;
			NullCheck(L_43);
			Dictionary_2_Add_m2139965640(L_43, L_44, L_45, /*hidden argument*/Dictionary_2_Add_m2139965640_MethodInfo_var);
		}

IL_0192:
		{
		}

IL_0193:
		{
			bool L_46 = Enumerator_MoveNext_m1221037759((&V_6), /*hidden argument*/Enumerator_MoveNext_m1221037759_MethodInfo_var);
			if (L_46)
			{
				goto IL_0128;
			}
		}

IL_019f:
		{
			IL2CPP_LEAVE(0x1B2, FINALLY_01a4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_01a4;
	}

FINALLY_01a4:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m977331043((&V_6), /*hidden argument*/Enumerator_Dispose_m977331043_MethodInfo_var);
		IL2CPP_END_FINALLY(420)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(420)
	{
		IL2CPP_JUMP_TBL(0x1B2, IL_01b2)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_01b2:
	{
	}

IL_01b3:
	{
		return;
	}
}
// System.String SkillzSDK.Match::ToString()
extern Il2CppClass* StringU5BU5D_t1642385972_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var;
extern Il2CppClass* Nullable_1_t334943763_il2cpp_TypeInfo_var;
extern Il2CppClass* Nullable_1_t412748336_il2cpp_TypeInfo_var;
extern Il2CppClass* Nullable_1_t2088641033_il2cpp_TypeInfo_var;
extern Il2CppClass* Nullable_1_t339576247_il2cpp_TypeInfo_var;
extern Il2CppClass* Player_t4162098741_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m2456297074_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m4048655796_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m2641560888_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m2909389725_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m52089307_MethodInfo_var;
extern const MethodInfo* Enumerator_Dispose_m882561911_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral371857150;
extern Il2CppCodeGenString* _stringLiteral372029310;
extern Il2CppCodeGenString* _stringLiteral811305496;
extern Il2CppCodeGenString* _stringLiteral2746356953;
extern Il2CppCodeGenString* _stringLiteral396133375;
extern Il2CppCodeGenString* _stringLiteral238043226;
extern Il2CppCodeGenString* _stringLiteral1351788097;
extern Il2CppCodeGenString* _stringLiteral1171304074;
extern Il2CppCodeGenString* _stringLiteral1274439131;
extern Il2CppCodeGenString* _stringLiteral721391243;
extern Il2CppCodeGenString* _stringLiteral1307038305;
extern Il2CppCodeGenString* _stringLiteral1026702230;
extern Il2CppCodeGenString* _stringLiteral1750594807;
extern Il2CppCodeGenString* _stringLiteral372029425;
extern const uint32_t Match_ToString_m2280718370_MetadataUsageId;
extern "C"  String_t* Match_ToString_m2280718370 (Match_t3198203703 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Match_ToString_m2280718370_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	KeyValuePair_2_t1701344717  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Enumerator_t969056901  V_2;
	memset(&V_2, 0, sizeof(V_2));
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = _stringLiteral371857150;
		Dictionary_2_t3943999495 * L_0 = __this->get_GameParams_5();
		NullCheck(L_0);
		Enumerator_t969056901  L_1 = Dictionary_2_GetEnumerator_m2456297074(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_m2456297074_MethodInfo_var);
		V_2 = L_1;
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0059;
		}

IL_0019:
		{
			KeyValuePair_2_t1701344717  L_2 = Enumerator_get_Current_m4048655796((&V_2), /*hidden argument*/Enumerator_get_Current_m4048655796_MethodInfo_var);
			V_1 = L_2;
			String_t* L_3 = V_0;
			V_3 = L_3;
			StringU5BU5D_t1642385972* L_4 = ((StringU5BU5D_t1642385972*)SZArrayNew(StringU5BU5D_t1642385972_il2cpp_TypeInfo_var, (uint32_t)5));
			String_t* L_5 = V_3;
			NullCheck(L_4);
			ArrayElementTypeCheck (L_4, L_5);
			(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_5);
			StringU5BU5D_t1642385972* L_6 = L_4;
			NullCheck(L_6);
			ArrayElementTypeCheck (L_6, _stringLiteral372029310);
			(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral372029310);
			StringU5BU5D_t1642385972* L_7 = L_6;
			String_t* L_8 = KeyValuePair_2_get_Key_m2641560888((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m2641560888_MethodInfo_var);
			NullCheck(L_7);
			ArrayElementTypeCheck (L_7, L_8);
			(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_8);
			StringU5BU5D_t1642385972* L_9 = L_7;
			NullCheck(L_9);
			ArrayElementTypeCheck (L_9, _stringLiteral811305496);
			(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral811305496);
			StringU5BU5D_t1642385972* L_10 = L_9;
			String_t* L_11 = KeyValuePair_2_get_Value_m2909389725((&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m2909389725_MethodInfo_var);
			NullCheck(L_10);
			ArrayElementTypeCheck (L_10, L_11);
			(L_10)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_11);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_12 = String_Concat_m626692867(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
			V_0 = L_12;
		}

IL_0059:
		{
			bool L_13 = Enumerator_MoveNext_m52089307((&V_2), /*hidden argument*/Enumerator_MoveNext_m52089307_MethodInfo_var);
			if (L_13)
			{
				goto IL_0019;
			}
		}

IL_0065:
		{
			IL2CPP_LEAVE(0x78, FINALLY_006a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_006a;
	}

FINALLY_006a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m882561911((&V_2), /*hidden argument*/Enumerator_Dispose_m882561911_MethodInfo_var);
		IL2CPP_END_FINALLY(106)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(106)
	{
		IL2CPP_JUMP_TBL(0x78, IL_0078)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_0078:
	{
		ObjectU5BU5D_t3614634134* L_14 = ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)((int32_t)21)));
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral2746356953);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)_stringLiteral2746356953);
		ObjectU5BU5D_t3614634134* L_15 = L_14;
		Nullable_1_t334943763  L_16 = __this->get_ID_2();
		Nullable_1_t334943763  L_17 = L_16;
		Il2CppObject * L_18 = Box(Nullable_1_t334943763_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_18);
		ObjectU5BU5D_t3614634134* L_19 = L_15;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteral396133375);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppObject *)_stringLiteral396133375);
		ObjectU5BU5D_t3614634134* L_20 = L_19;
		String_t* L_21 = __this->get_Name_0();
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_21);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppObject *)L_21);
		ObjectU5BU5D_t3614634134* L_22 = L_20;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteral238043226);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(4), (Il2CppObject *)_stringLiteral238043226);
		ObjectU5BU5D_t3614634134* L_23 = L_22;
		String_t* L_24 = __this->get_Description_1();
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_24);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(5), (Il2CppObject *)L_24);
		ObjectU5BU5D_t3614634134* L_25 = L_23;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, _stringLiteral1351788097);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(6), (Il2CppObject *)_stringLiteral1351788097);
		ObjectU5BU5D_t3614634134* L_26 = L_25;
		Nullable_1_t334943763  L_27 = __this->get_TemplateID_3();
		Nullable_1_t334943763  L_28 = L_27;
		Il2CppObject * L_29 = Box(Nullable_1_t334943763_il2cpp_TypeInfo_var, &L_28);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_29);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(7), (Il2CppObject *)L_29);
		ObjectU5BU5D_t3614634134* L_30 = L_26;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, _stringLiteral1171304074);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(8), (Il2CppObject *)_stringLiteral1171304074);
		ObjectU5BU5D_t3614634134* L_31 = L_30;
		Nullable_1_t412748336  L_32 = __this->get_SkillzDifficulty_4();
		Nullable_1_t412748336  L_33 = L_32;
		Il2CppObject * L_34 = Box(Nullable_1_t412748336_il2cpp_TypeInfo_var, &L_33);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_34);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (Il2CppObject *)L_34);
		ObjectU5BU5D_t3614634134* L_35 = L_31;
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, _stringLiteral1274439131);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (Il2CppObject *)_stringLiteral1274439131);
		ObjectU5BU5D_t3614634134* L_36 = L_35;
		Nullable_1_t2088641033  L_37 = __this->get_IsCash_7();
		Nullable_1_t2088641033  L_38 = L_37;
		Il2CppObject * L_39 = Box(Nullable_1_t2088641033_il2cpp_TypeInfo_var, &L_38);
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_39);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (Il2CppObject *)L_39);
		ObjectU5BU5D_t3614634134* L_40 = L_36;
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, _stringLiteral721391243);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (Il2CppObject *)_stringLiteral721391243);
		ObjectU5BU5D_t3614634134* L_41 = L_40;
		Nullable_1_t334943763  L_42 = __this->get_EntryPoints_8();
		Nullable_1_t334943763  L_43 = L_42;
		Il2CppObject * L_44 = Box(Nullable_1_t334943763_il2cpp_TypeInfo_var, &L_43);
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_44);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (Il2CppObject *)L_44);
		ObjectU5BU5D_t3614634134* L_45 = L_41;
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, _stringLiteral1307038305);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (Il2CppObject *)_stringLiteral1307038305);
		ObjectU5BU5D_t3614634134* L_46 = L_45;
		Nullable_1_t339576247  L_47 = __this->get_EntryCash_9();
		Nullable_1_t339576247  L_48 = L_47;
		Il2CppObject * L_49 = Box(Nullable_1_t339576247_il2cpp_TypeInfo_var, &L_48);
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, L_49);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (Il2CppObject *)L_49);
		ObjectU5BU5D_t3614634134* L_50 = L_46;
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, _stringLiteral1026702230);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (Il2CppObject *)_stringLiteral1026702230);
		ObjectU5BU5D_t3614634134* L_51 = L_50;
		String_t* L_52 = V_0;
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, L_52);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (Il2CppObject *)L_52);
		ObjectU5BU5D_t3614634134* L_53 = L_51;
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, _stringLiteral1750594807);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (Il2CppObject *)_stringLiteral1750594807);
		ObjectU5BU5D_t3614634134* L_54 = L_53;
		Player_t4162098741  L_55 = __this->get_Player_6();
		Player_t4162098741  L_56 = L_55;
		Il2CppObject * L_57 = Box(Player_t4162098741_il2cpp_TypeInfo_var, &L_56);
		NullCheck(L_54);
		ArrayElementTypeCheck (L_54, L_57);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (Il2CppObject *)L_57);
		ObjectU5BU5D_t3614634134* L_58 = L_54;
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, _stringLiteral372029425);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)20)), (Il2CppObject *)_stringLiteral372029425);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_59 = String_Concat_m3881798623(NULL /*static, unused*/, L_58, /*hidden argument*/NULL);
		V_4 = L_59;
		goto IL_0167;
	}

IL_0167:
	{
		String_t* L_60 = V_4;
		return L_60;
	}
}
// System.Object SkillzSDK.MiniJSON.Json::Deserialize(System.String)
extern "C"  Il2CppObject * Json_Deserialize_m969239781 (Il2CppObject * __this /* static, unused */, String_t* ___json0, const MethodInfo* method)
{
	Il2CppObject * V_0 = NULL;
	{
		String_t* L_0 = ___json0;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		V_0 = NULL;
		goto IL_001b;
	}

IL_000f:
	{
		String_t* L_1 = ___json0;
		Il2CppObject * L_2 = Parser_Parse_m4168624675(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_001b;
	}

IL_001b:
	{
		Il2CppObject * L_3 = V_0;
		return L_3;
	}
}
// System.String SkillzSDK.MiniJSON.Json::Serialize(System.Object)
extern "C"  String_t* Json_Serialize_m1472605628 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method)
{
	String_t* V_0 = NULL;
	{
		Il2CppObject * L_0 = ___obj0;
		String_t* L_1 = Serializer_Serialize_m1241501283(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Void SkillzSDK.MiniJSON.Json/Parser::.ctor(System.String)
extern Il2CppClass* StringReader_t1480123486_il2cpp_TypeInfo_var;
extern const uint32_t Parser__ctor_m985372631_MetadataUsageId;
extern "C"  void Parser__ctor_m985372631 (Parser_t3266458908 * __this, String_t* ___jsonString0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser__ctor_m985372631_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___jsonString0;
		StringReader_t1480123486 * L_1 = (StringReader_t1480123486 *)il2cpp_codegen_object_new(StringReader_t1480123486_il2cpp_TypeInfo_var);
		StringReader__ctor_m643998729(L_1, L_0, /*hidden argument*/NULL);
		__this->set_json_1(L_1);
		return;
	}
}
// System.Boolean SkillzSDK.MiniJSON.Json/Parser::IsWordBreak(System.Char)
extern Il2CppClass* Char_t3454481338_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1102494086;
extern const uint32_t Parser_IsWordBreak_m3028009253_MetadataUsageId;
extern "C"  bool Parser_IsWordBreak_m3028009253 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_IsWordBreak_m3028009253_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		Il2CppChar L_0 = ___c0;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3454481338_il2cpp_TypeInfo_var);
		bool L_1 = Char_IsWhiteSpace_m1507160293(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		Il2CppChar L_2 = ___c0;
		NullCheck(_stringLiteral1102494086);
		int32_t L_3 = String_IndexOf_m2358239236(_stringLiteral1102494086, L_2, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 1;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0026;
	}

IL_0026:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Object SkillzSDK.MiniJSON.Json/Parser::Parse(System.String)
extern Il2CppClass* Parser_t3266458908_il2cpp_TypeInfo_var;
extern Il2CppClass* IDisposable_t2427283555_il2cpp_TypeInfo_var;
extern const uint32_t Parser_Parse_m4168624675_MetadataUsageId;
extern "C"  Il2CppObject * Parser_Parse_m4168624675 (Il2CppObject * __this /* static, unused */, String_t* ___jsonString0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_Parse_m4168624675_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Parser_t3266458908 * V_0 = NULL;
	Il2CppObject * V_1 = NULL;
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___jsonString0;
		Parser_t3266458908 * L_1 = (Parser_t3266458908 *)il2cpp_codegen_object_new(Parser_t3266458908_il2cpp_TypeInfo_var);
		Parser__ctor_m985372631(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		Parser_t3266458908 * L_2 = V_0;
		NullCheck(L_2);
		Il2CppObject * L_3 = Parser_ParseValue_m813771238(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		IL2CPP_LEAVE(0x22, FINALLY_0015);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_0015;
	}

FINALLY_0015:
	{ // begin finally (depth: 1)
		{
			Parser_t3266458908 * L_4 = V_0;
			if (!L_4)
			{
				goto IL_0021;
			}
		}

IL_001b:
		{
			Parser_t3266458908 * L_5 = V_0;
			NullCheck(L_5);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t2427283555_il2cpp_TypeInfo_var, L_5);
		}

IL_0021:
		{
			IL2CPP_END_FINALLY(21)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(21)
	{
		IL2CPP_JUMP_TBL(0x22, IL_0022)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_0022:
	{
		Il2CppObject * L_6 = V_1;
		return L_6;
	}
}
// System.Void SkillzSDK.MiniJSON.Json/Parser::Dispose()
extern "C"  void Parser_Dispose_m2238634732 (Parser_t3266458908 * __this, const MethodInfo* method)
{
	{
		StringReader_t1480123486 * L_0 = __this->get_json_1();
		NullCheck(L_0);
		TextReader_Dispose_m4077464570(L_0, /*hidden argument*/NULL);
		__this->set_json_1((StringReader_t1480123486 *)NULL);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> SkillzSDK.MiniJSON.Json/Parser::ParseObject()
extern Il2CppClass* Dictionary_2_t309261261_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3074147194_MethodInfo_var;
extern const MethodInfo* Dictionary_2_set_Item_m952647287_MethodInfo_var;
extern const uint32_t Parser_ParseObject_m1674625037_MetadataUsageId;
extern "C"  Dictionary_2_t309261261 * Parser_ParseObject_m1674625037 (Parser_t3266458908 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseObject_m1674625037_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t309261261 * V_0 = NULL;
	int32_t V_1 = 0;
	Dictionary_2_t309261261 * V_2 = NULL;
	String_t* V_3 = NULL;
	{
		Dictionary_2_t309261261 * L_0 = (Dictionary_2_t309261261 *)il2cpp_codegen_object_new(Dictionary_2_t309261261_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3074147194(L_0, /*hidden argument*/Dictionary_2__ctor_m3074147194_MethodInfo_var);
		V_0 = L_0;
		StringReader_t1480123486 * L_1 = __this->get_json_1();
		NullCheck(L_1);
		VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.IO.TextReader::Read() */, L_1);
	}

IL_0013:
	{
		int32_t L_2 = Parser_get_NextToken_m2132010499(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if (L_3 == 0)
		{
			goto IL_003a;
		}
		if (L_3 == 1)
		{
			goto IL_002e;
		}
		if (L_3 == 2)
		{
			goto IL_0046;
		}
	}

IL_002e:
	{
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) == ((int32_t)6)))
		{
			goto IL_0041;
		}
	}
	{
		goto IL_004d;
	}

IL_003a:
	{
		V_2 = (Dictionary_2_t309261261 *)NULL;
		goto IL_009a;
	}

IL_0041:
	{
		goto IL_0013;
	}

IL_0046:
	{
		Dictionary_2_t309261261 * L_5 = V_0;
		V_2 = L_5;
		goto IL_009a;
	}

IL_004d:
	{
		String_t* L_6 = Parser_ParseString_m3678366328(__this, /*hidden argument*/NULL);
		V_3 = L_6;
		String_t* L_7 = V_3;
		if (L_7)
		{
			goto IL_0062;
		}
	}
	{
		V_2 = (Dictionary_2_t309261261 *)NULL;
		goto IL_009a;
	}

IL_0062:
	{
		int32_t L_8 = Parser_get_NextToken_m2132010499(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_8) == ((int32_t)5)))
		{
			goto IL_0076;
		}
	}
	{
		V_2 = (Dictionary_2_t309261261 *)NULL;
		goto IL_009a;
	}

IL_0076:
	{
		StringReader_t1480123486 * L_9 = __this->get_json_1();
		NullCheck(L_9);
		VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.IO.TextReader::Read() */, L_9);
		Dictionary_2_t309261261 * L_10 = V_0;
		String_t* L_11 = V_3;
		Il2CppObject * L_12 = Parser_ParseValue_m813771238(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Dictionary_2_set_Item_m952647287(L_10, L_11, L_12, /*hidden argument*/Dictionary_2_set_Item_m952647287_MethodInfo_var);
		goto IL_0094;
	}

IL_0094:
	{
		goto IL_0013;
	}

IL_009a:
	{
		Dictionary_2_t309261261 * L_13 = V_2;
		return L_13;
	}
}
// System.Collections.Generic.List`1<System.Object> SkillzSDK.MiniJSON.Json/Parser::ParseArray()
extern Il2CppClass* List_1_t2058570427_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m688657633_MethodInfo_var;
extern const MethodInfo* List_1_Add_m3937138917_MethodInfo_var;
extern const uint32_t Parser_ParseArray_m3221988264_MetadataUsageId;
extern "C"  List_1_t2058570427 * Parser_ParseArray_m3221988264 (Parser_t3266458908 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseArray_m3221988264_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t2058570427 * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	List_1_t2058570427 * V_3 = NULL;
	Il2CppObject * V_4 = NULL;
	{
		List_1_t2058570427 * L_0 = (List_1_t2058570427 *)il2cpp_codegen_object_new(List_1_t2058570427_il2cpp_TypeInfo_var);
		List_1__ctor_m688657633(L_0, /*hidden argument*/List_1__ctor_m688657633_MethodInfo_var);
		V_0 = L_0;
		StringReader_t1480123486 * L_1 = __this->get_json_1();
		NullCheck(L_1);
		VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.IO.TextReader::Read() */, L_1);
		V_1 = (bool)1;
		goto IL_006b;
	}

IL_001a:
	{
		int32_t L_2 = Parser_get_NextToken_m2132010499(__this, /*hidden argument*/NULL);
		V_2 = L_2;
		int32_t L_3 = V_2;
		if (((int32_t)((int32_t)L_3-(int32_t)4)) == 0)
		{
			goto IL_004d;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)4)) == 1)
		{
			goto IL_0036;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)4)) == 2)
		{
			goto IL_0048;
		}
	}

IL_0036:
	{
		int32_t L_4 = V_2;
		if (!L_4)
		{
			goto IL_0041;
		}
	}
	{
		goto IL_0054;
	}

IL_0041:
	{
		V_3 = (List_1_t2058570427 *)NULL;
		goto IL_0078;
	}

IL_0048:
	{
		goto IL_006b;
	}

IL_004d:
	{
		V_1 = (bool)0;
		goto IL_006a;
	}

IL_0054:
	{
		int32_t L_5 = V_2;
		Il2CppObject * L_6 = Parser_ParseByToken_m3663602137(__this, L_5, /*hidden argument*/NULL);
		V_4 = L_6;
		List_1_t2058570427 * L_7 = V_0;
		Il2CppObject * L_8 = V_4;
		NullCheck(L_7);
		List_1_Add_m3937138917(L_7, L_8, /*hidden argument*/List_1_Add_m3937138917_MethodInfo_var);
		goto IL_006a;
	}

IL_006a:
	{
	}

IL_006b:
	{
		bool L_9 = V_1;
		if (L_9)
		{
			goto IL_001a;
		}
	}
	{
		List_1_t2058570427 * L_10 = V_0;
		V_3 = L_10;
		goto IL_0078;
	}

IL_0078:
	{
		List_1_t2058570427 * L_11 = V_3;
		return L_11;
	}
}
// System.Object SkillzSDK.MiniJSON.Json/Parser::ParseValue()
extern "C"  Il2CppObject * Parser_ParseValue_m813771238 (Parser_t3266458908 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	Il2CppObject * V_1 = NULL;
	{
		int32_t L_0 = Parser_get_NextToken_m2132010499(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		Il2CppObject * L_2 = Parser_ParseByToken_m3663602137(__this, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		Il2CppObject * L_3 = V_1;
		return L_3;
	}
}
// System.Object SkillzSDK.MiniJSON.Json/Parser::ParseByToken(SkillzSDK.MiniJSON.Json/Parser/TOKEN)
extern Il2CppClass* Boolean_t3825574718_il2cpp_TypeInfo_var;
extern const uint32_t Parser_ParseByToken_m3663602137_MetadataUsageId;
extern "C"  Il2CppObject * Parser_ParseByToken_m3663602137 (Parser_t3266458908 * __this, int32_t ___token0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseByToken_m3663602137_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppObject * V_0 = NULL;
	{
		int32_t L_0 = ___token0;
		if (((int32_t)((int32_t)L_0-(int32_t)7)) == 0)
		{
			goto IL_0036;
		}
		if (((int32_t)((int32_t)L_0-(int32_t)7)) == 1)
		{
			goto IL_0042;
		}
		if (((int32_t)((int32_t)L_0-(int32_t)7)) == 2)
		{
			goto IL_0066;
		}
		if (((int32_t)((int32_t)L_0-(int32_t)7)) == 3)
		{
			goto IL_0072;
		}
		if (((int32_t)((int32_t)L_0-(int32_t)7)) == 4)
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_1 = ___token0;
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 0)
		{
			goto IL_004e;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 1)
		{
			goto IL_0085;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 2)
		{
			goto IL_005a;
		}
	}
	{
		goto IL_0085;
	}

IL_0036:
	{
		String_t* L_2 = Parser_ParseString_m3678366328(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_008c;
	}

IL_0042:
	{
		Il2CppObject * L_3 = Parser_ParseNumber_m2715690574(__this, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_008c;
	}

IL_004e:
	{
		Dictionary_2_t309261261 * L_4 = Parser_ParseObject_m1674625037(__this, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_008c;
	}

IL_005a:
	{
		List_1_t2058570427 * L_5 = Parser_ParseArray_m3221988264(__this, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_008c;
	}

IL_0066:
	{
		bool L_6 = ((bool)1);
		Il2CppObject * L_7 = Box(Boolean_t3825574718_il2cpp_TypeInfo_var, &L_6);
		V_0 = L_7;
		goto IL_008c;
	}

IL_0072:
	{
		bool L_8 = ((bool)0);
		Il2CppObject * L_9 = Box(Boolean_t3825574718_il2cpp_TypeInfo_var, &L_8);
		V_0 = L_9;
		goto IL_008c;
	}

IL_007e:
	{
		V_0 = NULL;
		goto IL_008c;
	}

IL_0085:
	{
		V_0 = NULL;
		goto IL_008c;
	}

IL_008c:
	{
		Il2CppObject * L_10 = V_0;
		return L_10;
	}
}
// System.String SkillzSDK.MiniJSON.Json/Parser::ParseString()
extern Il2CppClass* StringBuilder_t1221177846_il2cpp_TypeInfo_var;
extern Il2CppClass* CharU5BU5D_t1328083999_il2cpp_TypeInfo_var;
extern Il2CppClass* Convert_t2607082565_il2cpp_TypeInfo_var;
extern const uint32_t Parser_ParseString_m3678366328_MetadataUsageId;
extern "C"  String_t* Parser_ParseString_m3678366328 (Parser_t3266458908 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseString_m3678366328_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t1221177846 * V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	bool V_2 = false;
	CharU5BU5D_t1328083999* V_3 = NULL;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	{
		StringBuilder_t1221177846 * L_0 = (StringBuilder_t1221177846 *)il2cpp_codegen_object_new(StringBuilder_t1221177846_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3946851802(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		StringReader_t1480123486 * L_1 = __this->get_json_1();
		NullCheck(L_1);
		VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.IO.TextReader::Read() */, L_1);
		V_2 = (bool)1;
		goto IL_016d;
	}

IL_001a:
	{
		StringReader_t1480123486 * L_2 = __this->get_json_1();
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 System.IO.TextReader::Peek() */, L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_0034;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_0173;
	}

IL_0034:
	{
		Il2CppChar L_4 = Parser_get_NextChar_m2896692947(__this, /*hidden argument*/NULL);
		V_1 = L_4;
		Il2CppChar L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)34))))
		{
			goto IL_0050;
		}
	}
	{
		Il2CppChar L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)92))))
		{
			goto IL_0057;
		}
	}
	{
		goto IL_015f;
	}

IL_0050:
	{
		V_2 = (bool)0;
		goto IL_016c;
	}

IL_0057:
	{
		StringReader_t1480123486 * L_7 = __this->get_json_1();
		NullCheck(L_7);
		int32_t L_8 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 System.IO.TextReader::Peek() */, L_7);
		if ((!(((uint32_t)L_8) == ((uint32_t)(-1)))))
		{
			goto IL_0070;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_016c;
	}

IL_0070:
	{
		Il2CppChar L_9 = Parser_get_NextChar_m2896692947(__this, /*hidden argument*/NULL);
		V_1 = L_9;
		Il2CppChar L_10 = V_1;
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)114))) == 0)
		{
			goto IL_00fb;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)114))) == 1)
		{
			goto IL_0090;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)114))) == 2)
		{
			goto IL_0109;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)114))) == 3)
		{
			goto IL_0117;
		}
	}

IL_0090:
	{
		Il2CppChar L_11 = V_1;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)34))))
		{
			goto IL_00c5;
		}
	}
	{
		Il2CppChar L_12 = V_1;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)47))))
		{
			goto IL_00c5;
		}
	}
	{
		Il2CppChar L_13 = V_1;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)92))))
		{
			goto IL_00c5;
		}
	}
	{
		Il2CppChar L_14 = V_1;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)98))))
		{
			goto IL_00d2;
		}
	}
	{
		Il2CppChar L_15 = V_1;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)102))))
		{
			goto IL_00df;
		}
	}
	{
		Il2CppChar L_16 = V_1;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)110))))
		{
			goto IL_00ed;
		}
	}
	{
		goto IL_015a;
	}

IL_00c5:
	{
		StringBuilder_t1221177846 * L_17 = V_0;
		Il2CppChar L_18 = V_1;
		NullCheck(L_17);
		StringBuilder_Append_m3618697540(L_17, L_18, /*hidden argument*/NULL);
		goto IL_015a;
	}

IL_00d2:
	{
		StringBuilder_t1221177846 * L_19 = V_0;
		NullCheck(L_19);
		StringBuilder_Append_m3618697540(L_19, 8, /*hidden argument*/NULL);
		goto IL_015a;
	}

IL_00df:
	{
		StringBuilder_t1221177846 * L_20 = V_0;
		NullCheck(L_20);
		StringBuilder_Append_m3618697540(L_20, ((int32_t)12), /*hidden argument*/NULL);
		goto IL_015a;
	}

IL_00ed:
	{
		StringBuilder_t1221177846 * L_21 = V_0;
		NullCheck(L_21);
		StringBuilder_Append_m3618697540(L_21, ((int32_t)10), /*hidden argument*/NULL);
		goto IL_015a;
	}

IL_00fb:
	{
		StringBuilder_t1221177846 * L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_Append_m3618697540(L_22, ((int32_t)13), /*hidden argument*/NULL);
		goto IL_015a;
	}

IL_0109:
	{
		StringBuilder_t1221177846 * L_23 = V_0;
		NullCheck(L_23);
		StringBuilder_Append_m3618697540(L_23, ((int32_t)9), /*hidden argument*/NULL);
		goto IL_015a;
	}

IL_0117:
	{
		V_3 = ((CharU5BU5D_t1328083999*)SZArrayNew(CharU5BU5D_t1328083999_il2cpp_TypeInfo_var, (uint32_t)4));
		V_4 = 0;
		goto IL_0138;
	}

IL_0126:
	{
		CharU5BU5D_t1328083999* L_24 = V_3;
		int32_t L_25 = V_4;
		Il2CppChar L_26 = Parser_get_NextChar_m2896692947(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (Il2CppChar)L_26);
		int32_t L_27 = V_4;
		V_4 = ((int32_t)((int32_t)L_27+(int32_t)1));
	}

IL_0138:
	{
		int32_t L_28 = V_4;
		if ((((int32_t)L_28) < ((int32_t)4)))
		{
			goto IL_0126;
		}
	}
	{
		StringBuilder_t1221177846 * L_29 = V_0;
		CharU5BU5D_t1328083999* L_30 = V_3;
		String_t* L_31 = String_CreateString_m3818307083(NULL, L_30, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2607082565_il2cpp_TypeInfo_var);
		int32_t L_32 = Convert_ToInt32_m3262696010(NULL /*static, unused*/, L_31, ((int32_t)16), /*hidden argument*/NULL);
		NullCheck(L_29);
		StringBuilder_Append_m3618697540(L_29, (((int32_t)((uint16_t)L_32))), /*hidden argument*/NULL);
		goto IL_015a;
	}

IL_015a:
	{
		goto IL_016c;
	}

IL_015f:
	{
		StringBuilder_t1221177846 * L_33 = V_0;
		Il2CppChar L_34 = V_1;
		NullCheck(L_33);
		StringBuilder_Append_m3618697540(L_33, L_34, /*hidden argument*/NULL);
		goto IL_016c;
	}

IL_016c:
	{
	}

IL_016d:
	{
		bool L_35 = V_2;
		if (L_35)
		{
			goto IL_001a;
		}
	}

IL_0173:
	{
		StringBuilder_t1221177846 * L_36 = V_0;
		NullCheck(L_36);
		String_t* L_37 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_36);
		V_5 = L_37;
		goto IL_0180;
	}

IL_0180:
	{
		String_t* L_38 = V_5;
		return L_38;
	}
}
// System.Object SkillzSDK.MiniJSON.Json/Parser::ParseNumber()
extern Il2CppClass* CultureInfo_t3500843524_il2cpp_TypeInfo_var;
extern Il2CppClass* Int64_t909078037_il2cpp_TypeInfo_var;
extern Il2CppClass* Double_t4078015681_il2cpp_TypeInfo_var;
extern const uint32_t Parser_ParseNumber_m2715690574_MetadataUsageId;
extern "C"  Il2CppObject * Parser_ParseNumber_m2715690574 (Parser_t3266458908 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseNumber_m2715690574_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int64_t V_1 = 0;
	Il2CppObject * V_2 = NULL;
	double V_3 = 0.0;
	{
		String_t* L_0 = Parser_get_NextWord_m1990500560(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2 = String_IndexOf_m2358239236(L_1, ((int32_t)46), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0036;
		}
	}
	{
		String_t* L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t3500843524_il2cpp_TypeInfo_var);
		CultureInfo_t3500843524 * L_4 = CultureInfo_get_InvariantCulture_m398972276(NULL /*static, unused*/, /*hidden argument*/NULL);
		Int64_TryParse_m3093198325(NULL /*static, unused*/, L_3, ((int32_t)511), L_4, (&V_1), /*hidden argument*/NULL);
		int64_t L_5 = V_1;
		int64_t L_6 = L_5;
		Il2CppObject * L_7 = Box(Int64_t909078037_il2cpp_TypeInfo_var, &L_6);
		V_2 = L_7;
		goto IL_0055;
	}

IL_0036:
	{
		String_t* L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t3500843524_il2cpp_TypeInfo_var);
		CultureInfo_t3500843524 * L_9 = CultureInfo_get_InvariantCulture_m398972276(NULL /*static, unused*/, /*hidden argument*/NULL);
		Double_TryParse_m815528105(NULL /*static, unused*/, L_8, ((int32_t)511), L_9, (&V_3), /*hidden argument*/NULL);
		double L_10 = V_3;
		double L_11 = L_10;
		Il2CppObject * L_12 = Box(Double_t4078015681_il2cpp_TypeInfo_var, &L_11);
		V_2 = L_12;
		goto IL_0055;
	}

IL_0055:
	{
		Il2CppObject * L_13 = V_2;
		return L_13;
	}
}
// System.Void SkillzSDK.MiniJSON.Json/Parser::EatWhitespace()
extern Il2CppClass* Char_t3454481338_il2cpp_TypeInfo_var;
extern const uint32_t Parser_EatWhitespace_m3667109410_MetadataUsageId;
extern "C"  void Parser_EatWhitespace_m3667109410 (Parser_t3266458908 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_EatWhitespace_m3667109410_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_002b;
	}

IL_0006:
	{
		StringReader_t1480123486 * L_0 = __this->get_json_1();
		NullCheck(L_0);
		VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.IO.TextReader::Read() */, L_0);
		StringReader_t1480123486 * L_1 = __this->get_json_1();
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 System.IO.TextReader::Peek() */, L_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_002a;
		}
	}
	{
		goto IL_003b;
	}

IL_002a:
	{
	}

IL_002b:
	{
		Il2CppChar L_3 = Parser_get_PeekChar_m250758683(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3454481338_il2cpp_TypeInfo_var);
		bool L_4 = Char_IsWhiteSpace_m1507160293(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0006;
		}
	}

IL_003b:
	{
		return;
	}
}
// System.Char SkillzSDK.MiniJSON.Json/Parser::get_PeekChar()
extern Il2CppClass* Convert_t2607082565_il2cpp_TypeInfo_var;
extern const uint32_t Parser_get_PeekChar_m250758683_MetadataUsageId;
extern "C"  Il2CppChar Parser_get_PeekChar_m250758683 (Parser_t3266458908 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_get_PeekChar_m250758683_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		StringReader_t1480123486 * L_0 = __this->get_json_1();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 System.IO.TextReader::Peek() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2607082565_il2cpp_TypeInfo_var);
		Il2CppChar L_2 = Convert_ToChar_m3827339132(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0017;
	}

IL_0017:
	{
		Il2CppChar L_3 = V_0;
		return L_3;
	}
}
// System.Char SkillzSDK.MiniJSON.Json/Parser::get_NextChar()
extern Il2CppClass* Convert_t2607082565_il2cpp_TypeInfo_var;
extern const uint32_t Parser_get_NextChar_m2896692947_MetadataUsageId;
extern "C"  Il2CppChar Parser_get_NextChar_m2896692947 (Parser_t3266458908 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_get_NextChar_m2896692947_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		StringReader_t1480123486 * L_0 = __this->get_json_1();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.IO.TextReader::Read() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2607082565_il2cpp_TypeInfo_var);
		Il2CppChar L_2 = Convert_ToChar_m3827339132(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0017;
	}

IL_0017:
	{
		Il2CppChar L_3 = V_0;
		return L_3;
	}
}
// System.String SkillzSDK.MiniJSON.Json/Parser::get_NextWord()
extern Il2CppClass* StringBuilder_t1221177846_il2cpp_TypeInfo_var;
extern const uint32_t Parser_get_NextWord_m1990500560_MetadataUsageId;
extern "C"  String_t* Parser_get_NextWord_m1990500560 (Parser_t3266458908 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_get_NextWord_m1990500560_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t1221177846 * V_0 = NULL;
	String_t* V_1 = NULL;
	{
		StringBuilder_t1221177846 * L_0 = (StringBuilder_t1221177846 *)il2cpp_codegen_object_new(StringBuilder_t1221177846_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3946851802(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0032;
	}

IL_000c:
	{
		StringBuilder_t1221177846 * L_1 = V_0;
		Il2CppChar L_2 = Parser_get_NextChar_m2896692947(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_Append_m3618697540(L_1, L_2, /*hidden argument*/NULL);
		StringReader_t1480123486 * L_3 = __this->get_json_1();
		NullCheck(L_3);
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 System.IO.TextReader::Peek() */, L_3);
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_0031;
		}
	}
	{
		goto IL_0042;
	}

IL_0031:
	{
	}

IL_0032:
	{
		Il2CppChar L_5 = Parser_get_PeekChar_m250758683(__this, /*hidden argument*/NULL);
		bool L_6 = Parser_IsWordBreak_m3028009253(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_000c;
		}
	}

IL_0042:
	{
		StringBuilder_t1221177846 * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
		V_1 = L_8;
		goto IL_004e;
	}

IL_004e:
	{
		String_t* L_9 = V_1;
		return L_9;
	}
}
// SkillzSDK.MiniJSON.Json/Parser/TOKEN SkillzSDK.MiniJSON.Json/Parser::get_NextToken()
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2609877245;
extern Il2CppCodeGenString* _stringLiteral3323263070;
extern Il2CppCodeGenString* _stringLiteral1743624307;
extern const uint32_t Parser_get_NextToken_m2132010499_MetadataUsageId;
extern "C"  int32_t Parser_get_NextToken_m2132010499 (Parser_t3266458908 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_get_NextToken_m2132010499_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	String_t* V_2 = NULL;
	{
		Parser_EatWhitespace_m3667109410(__this, /*hidden argument*/NULL);
		StringReader_t1480123486 * L_0 = __this->get_json_1();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 System.IO.TextReader::Peek() */, L_0);
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0020;
		}
	}
	{
		V_0 = 0;
		goto IL_0160;
	}

IL_0020:
	{
		Il2CppChar L_2 = Parser_get_PeekChar_m250758683(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		Il2CppChar L_3 = V_1;
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)44))) == 0)
		{
			goto IL_00d7;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)44))) == 1)
		{
			goto IL_00f8;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)44))) == 2)
		{
			goto IL_006c;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)44))) == 3)
		{
			goto IL_006c;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)44))) == 4)
		{
			goto IL_00f8;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)44))) == 5)
		{
			goto IL_00f8;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)44))) == 6)
		{
			goto IL_00f8;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)44))) == 7)
		{
			goto IL_00f8;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)44))) == 8)
		{
			goto IL_00f8;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)44))) == 9)
		{
			goto IL_00f8;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)44))) == 10)
		{
			goto IL_00f8;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)44))) == 11)
		{
			goto IL_00f8;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)44))) == 12)
		{
			goto IL_00f8;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)44))) == 13)
		{
			goto IL_00f8;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)44))) == 14)
		{
			goto IL_00f1;
		}
	}

IL_006c:
	{
		Il2CppChar L_4 = V_1;
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)91))) == 0)
		{
			goto IL_00bd;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)91))) == 1)
		{
			goto IL_0081;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)91))) == 2)
		{
			goto IL_00c4;
		}
	}

IL_0081:
	{
		Il2CppChar L_5 = V_1;
		if (((int32_t)((int32_t)L_5-(int32_t)((int32_t)123))) == 0)
		{
			goto IL_00a3;
		}
		if (((int32_t)((int32_t)L_5-(int32_t)((int32_t)123))) == 1)
		{
			goto IL_0096;
		}
		if (((int32_t)((int32_t)L_5-(int32_t)((int32_t)123))) == 2)
		{
			goto IL_00aa;
		}
	}

IL_0096:
	{
		Il2CppChar L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)34))))
		{
			goto IL_00ea;
		}
	}
	{
		goto IL_00ff;
	}

IL_00a3:
	{
		V_0 = 1;
		goto IL_0160;
	}

IL_00aa:
	{
		StringReader_t1480123486 * L_7 = __this->get_json_1();
		NullCheck(L_7);
		VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.IO.TextReader::Read() */, L_7);
		V_0 = 2;
		goto IL_0160;
	}

IL_00bd:
	{
		V_0 = 3;
		goto IL_0160;
	}

IL_00c4:
	{
		StringReader_t1480123486 * L_8 = __this->get_json_1();
		NullCheck(L_8);
		VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.IO.TextReader::Read() */, L_8);
		V_0 = 4;
		goto IL_0160;
	}

IL_00d7:
	{
		StringReader_t1480123486 * L_9 = __this->get_json_1();
		NullCheck(L_9);
		VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.IO.TextReader::Read() */, L_9);
		V_0 = 6;
		goto IL_0160;
	}

IL_00ea:
	{
		V_0 = 7;
		goto IL_0160;
	}

IL_00f1:
	{
		V_0 = 5;
		goto IL_0160;
	}

IL_00f8:
	{
		V_0 = 8;
		goto IL_0160;
	}

IL_00ff:
	{
		String_t* L_10 = Parser_get_NextWord_m1990500560(__this, /*hidden argument*/NULL);
		V_2 = L_10;
		String_t* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0159;
		}
	}
	{
		String_t* L_12 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_13 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_12, _stringLiteral2609877245, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0141;
		}
	}
	{
		String_t* L_14 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_15 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_14, _stringLiteral3323263070, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0149;
		}
	}
	{
		String_t* L_16 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_17 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_16, _stringLiteral1743624307, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_0151;
		}
	}
	{
		goto IL_0159;
	}

IL_0141:
	{
		V_0 = ((int32_t)10);
		goto IL_0160;
	}

IL_0149:
	{
		V_0 = ((int32_t)9);
		goto IL_0160;
	}

IL_0151:
	{
		V_0 = ((int32_t)11);
		goto IL_0160;
	}

IL_0159:
	{
		V_0 = 0;
		goto IL_0160;
	}

IL_0160:
	{
		int32_t L_18 = V_0;
		return L_18;
	}
}
// System.Void SkillzSDK.MiniJSON.Json/Serializer::.ctor()
extern Il2CppClass* StringBuilder_t1221177846_il2cpp_TypeInfo_var;
extern const uint32_t Serializer__ctor_m1216776356_MetadataUsageId;
extern "C"  void Serializer__ctor_m1216776356 (Serializer_t2315747485 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer__ctor_m1216776356_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		StringBuilder_t1221177846 * L_0 = (StringBuilder_t1221177846 *)il2cpp_codegen_object_new(StringBuilder_t1221177846_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3946851802(L_0, /*hidden argument*/NULL);
		__this->set_builder_0(L_0);
		return;
	}
}
// System.String SkillzSDK.MiniJSON.Json/Serializer::Serialize(System.Object)
extern Il2CppClass* Serializer_t2315747485_il2cpp_TypeInfo_var;
extern const uint32_t Serializer_Serialize_m1241501283_MetadataUsageId;
extern "C"  String_t* Serializer_Serialize_m1241501283 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_Serialize_m1241501283_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Serializer_t2315747485 * V_0 = NULL;
	String_t* V_1 = NULL;
	{
		Serializer_t2315747485 * L_0 = (Serializer_t2315747485 *)il2cpp_codegen_object_new(Serializer_t2315747485_il2cpp_TypeInfo_var);
		Serializer__ctor_m1216776356(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Serializer_t2315747485 * L_1 = V_0;
		Il2CppObject * L_2 = ___obj0;
		NullCheck(L_1);
		Serializer_SerializeValue_m1148710681(L_1, L_2, /*hidden argument*/NULL);
		Serializer_t2315747485 * L_3 = V_0;
		NullCheck(L_3);
		StringBuilder_t1221177846 * L_4 = L_3->get_builder_0();
		NullCheck(L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		V_1 = L_5;
		goto IL_001f;
	}

IL_001f:
	{
		String_t* L_6 = V_1;
		return L_6;
	}
}
// System.Void SkillzSDK.MiniJSON.Json/Serializer::SerializeValue(System.Object)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Boolean_t3825574718_il2cpp_TypeInfo_var;
extern Il2CppClass* IList_t3321498491_il2cpp_TypeInfo_var;
extern Il2CppClass* IDictionary_t596158605_il2cpp_TypeInfo_var;
extern Il2CppClass* Char_t3454481338_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1743624307;
extern Il2CppCodeGenString* _stringLiteral3323263070;
extern Il2CppCodeGenString* _stringLiteral2609877245;
extern const uint32_t Serializer_SerializeValue_m1148710681_MetadataUsageId;
extern "C"  void Serializer_SerializeValue_m1148710681 (Serializer_t2315747485 * __this, Il2CppObject * ___value0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeValue_m1148710681_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppObject * V_0 = NULL;
	Il2CppObject * V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t1221177846 * G_B7_0 = NULL;
	StringBuilder_t1221177846 * G_B6_0 = NULL;
	String_t* G_B8_0 = NULL;
	StringBuilder_t1221177846 * G_B8_1 = NULL;
	{
		Il2CppObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_001f;
		}
	}
	{
		StringBuilder_t1221177846 * L_1 = __this->get_builder_0();
		NullCheck(L_1);
		StringBuilder_Append_m3636508479(L_1, _stringLiteral1743624307, /*hidden argument*/NULL);
		goto IL_00d5;
	}

IL_001f:
	{
		Il2CppObject * L_2 = ___value0;
		String_t* L_3 = ((String_t*)IsInstSealed(L_2, String_t_il2cpp_TypeInfo_var));
		V_2 = L_3;
		if (!L_3)
		{
			goto IL_003a;
		}
	}
	{
		String_t* L_4 = V_2;
		Serializer_SerializeString_m3293617839(__this, L_4, /*hidden argument*/NULL);
		goto IL_00d5;
	}

IL_003a:
	{
		Il2CppObject * L_5 = ___value0;
		if (!((Il2CppObject *)IsInstSealed(L_5, Boolean_t3825574718_il2cpp_TypeInfo_var)))
		{
			goto IL_0072;
		}
	}
	{
		StringBuilder_t1221177846 * L_6 = __this->get_builder_0();
		Il2CppObject * L_7 = ___value0;
		G_B6_0 = L_6;
		if (!((*(bool*)((bool*)UnBox (L_7, Boolean_t3825574718_il2cpp_TypeInfo_var)))))
		{
			G_B7_0 = L_6;
			goto IL_0061;
		}
	}
	{
		G_B8_0 = _stringLiteral3323263070;
		G_B8_1 = G_B6_0;
		goto IL_0066;
	}

IL_0061:
	{
		G_B8_0 = _stringLiteral2609877245;
		G_B8_1 = G_B7_0;
	}

IL_0066:
	{
		NullCheck(G_B8_1);
		StringBuilder_Append_m3636508479(G_B8_1, G_B8_0, /*hidden argument*/NULL);
		goto IL_00d5;
	}

IL_0072:
	{
		Il2CppObject * L_8 = ___value0;
		Il2CppObject * L_9 = ((Il2CppObject *)IsInst(L_8, IList_t3321498491_il2cpp_TypeInfo_var));
		V_0 = L_9;
		if (!L_9)
		{
			goto IL_008d;
		}
	}
	{
		Il2CppObject * L_10 = V_0;
		Serializer_SerializeArray_m4169151492(__this, L_10, /*hidden argument*/NULL);
		goto IL_00d5;
	}

IL_008d:
	{
		Il2CppObject * L_11 = ___value0;
		Il2CppObject * L_12 = ((Il2CppObject *)IsInst(L_11, IDictionary_t596158605_il2cpp_TypeInfo_var));
		V_1 = L_12;
		if (!L_12)
		{
			goto IL_00a8;
		}
	}
	{
		Il2CppObject * L_13 = V_1;
		Serializer_SerializeObject_m1017707112(__this, L_13, /*hidden argument*/NULL);
		goto IL_00d5;
	}

IL_00a8:
	{
		Il2CppObject * L_14 = ___value0;
		if (!((Il2CppObject *)IsInstSealed(L_14, Char_t3454481338_il2cpp_TypeInfo_var)))
		{
			goto IL_00cc;
		}
	}
	{
		Il2CppObject * L_15 = ___value0;
		String_t* L_16 = String_CreateString_m2556700934(NULL, ((*(Il2CppChar*)((Il2CppChar*)UnBox (L_15, Char_t3454481338_il2cpp_TypeInfo_var)))), 1, /*hidden argument*/NULL);
		Serializer_SerializeString_m3293617839(__this, L_16, /*hidden argument*/NULL);
		goto IL_00d5;
	}

IL_00cc:
	{
		Il2CppObject * L_17 = ___value0;
		Serializer_SerializeOther_m12875806(__this, L_17, /*hidden argument*/NULL);
	}

IL_00d5:
	{
		return;
	}
}
// System.Void SkillzSDK.MiniJSON.Json/Serializer::SerializeObject(System.Collections.IDictionary)
extern Il2CppClass* IDictionary_t596158605_il2cpp_TypeInfo_var;
extern Il2CppClass* IEnumerable_t2911409499_il2cpp_TypeInfo_var;
extern Il2CppClass* IEnumerator_t1466026749_il2cpp_TypeInfo_var;
extern Il2CppClass* IDisposable_t2427283555_il2cpp_TypeInfo_var;
extern const uint32_t Serializer_SerializeObject_m1017707112_MetadataUsageId;
extern "C"  void Serializer_SerializeObject_m1017707112 (Serializer_t2315747485 * __this, Il2CppObject * ___obj0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeObject_m1017707112_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Il2CppObject * V_1 = NULL;
	Il2CppObject * V_2 = NULL;
	Il2CppObject * V_3 = NULL;
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (bool)1;
		StringBuilder_t1221177846 * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_Append_m3618697540(L_0, ((int32_t)123), /*hidden argument*/NULL);
		Il2CppObject * L_1 = ___obj0;
		NullCheck(L_1);
		Il2CppObject * L_2 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(2 /* System.Collections.ICollection System.Collections.IDictionary::get_Keys() */, IDictionary_t596158605_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		Il2CppObject * L_3 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t2911409499_il2cpp_TypeInfo_var, L_2);
		V_2 = L_3;
	}

IL_001e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006b;
		}

IL_0023:
		{
			Il2CppObject * L_4 = V_2;
			NullCheck(L_4);
			Il2CppObject * L_5 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_4);
			V_1 = L_5;
			bool L_6 = V_0;
			if (L_6)
			{
				goto IL_0041;
			}
		}

IL_0031:
		{
			StringBuilder_t1221177846 * L_7 = __this->get_builder_0();
			NullCheck(L_7);
			StringBuilder_Append_m3618697540(L_7, ((int32_t)44), /*hidden argument*/NULL);
		}

IL_0041:
		{
			Il2CppObject * L_8 = V_1;
			NullCheck(L_8);
			String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
			Serializer_SerializeString_m3293617839(__this, L_9, /*hidden argument*/NULL);
			StringBuilder_t1221177846 * L_10 = __this->get_builder_0();
			NullCheck(L_10);
			StringBuilder_Append_m3618697540(L_10, ((int32_t)58), /*hidden argument*/NULL);
			Il2CppObject * L_11 = ___obj0;
			Il2CppObject * L_12 = V_1;
			NullCheck(L_11);
			Il2CppObject * L_13 = InterfaceFuncInvoker1< Il2CppObject *, Il2CppObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t596158605_il2cpp_TypeInfo_var, L_11, L_12);
			Serializer_SerializeValue_m1148710681(__this, L_13, /*hidden argument*/NULL);
			V_0 = (bool)0;
		}

IL_006b:
		{
			Il2CppObject * L_14 = V_2;
			NullCheck(L_14);
			bool L_15 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_14);
			if (L_15)
			{
				goto IL_0023;
			}
		}

IL_0076:
		{
			IL2CPP_LEAVE(0x8F, FINALLY_007b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_007b;
	}

FINALLY_007b:
	{ // begin finally (depth: 1)
		{
			Il2CppObject * L_16 = V_2;
			Il2CppObject * L_17 = ((Il2CppObject *)IsInst(L_16, IDisposable_t2427283555_il2cpp_TypeInfo_var));
			V_3 = L_17;
			if (!L_17)
			{
				goto IL_008e;
			}
		}

IL_0088:
		{
			Il2CppObject * L_18 = V_3;
			NullCheck(L_18);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t2427283555_il2cpp_TypeInfo_var, L_18);
		}

IL_008e:
		{
			IL2CPP_END_FINALLY(123)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(123)
	{
		IL2CPP_JUMP_TBL(0x8F, IL_008f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_008f:
	{
		StringBuilder_t1221177846 * L_19 = __this->get_builder_0();
		NullCheck(L_19);
		StringBuilder_Append_m3618697540(L_19, ((int32_t)125), /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzSDK.MiniJSON.Json/Serializer::SerializeArray(System.Collections.IList)
extern Il2CppClass* IEnumerable_t2911409499_il2cpp_TypeInfo_var;
extern Il2CppClass* IEnumerator_t1466026749_il2cpp_TypeInfo_var;
extern Il2CppClass* IDisposable_t2427283555_il2cpp_TypeInfo_var;
extern const uint32_t Serializer_SerializeArray_m4169151492_MetadataUsageId;
extern "C"  void Serializer_SerializeArray_m4169151492 (Serializer_t2315747485 * __this, Il2CppObject * ___anArray0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeArray_m4169151492_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Il2CppObject * V_1 = NULL;
	Il2CppObject * V_2 = NULL;
	Il2CppObject * V_3 = NULL;
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		StringBuilder_t1221177846 * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_Append_m3618697540(L_0, ((int32_t)91), /*hidden argument*/NULL);
		V_0 = (bool)1;
		Il2CppObject * L_1 = ___anArray0;
		NullCheck(L_1);
		Il2CppObject * L_2 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t2911409499_il2cpp_TypeInfo_var, L_1);
		V_2 = L_2;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0046;
		}

IL_001e:
		{
			Il2CppObject * L_3 = V_2;
			NullCheck(L_3);
			Il2CppObject * L_4 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_3);
			V_1 = L_4;
			bool L_5 = V_0;
			if (L_5)
			{
				goto IL_003c;
			}
		}

IL_002c:
		{
			StringBuilder_t1221177846 * L_6 = __this->get_builder_0();
			NullCheck(L_6);
			StringBuilder_Append_m3618697540(L_6, ((int32_t)44), /*hidden argument*/NULL);
		}

IL_003c:
		{
			Il2CppObject * L_7 = V_1;
			Serializer_SerializeValue_m1148710681(__this, L_7, /*hidden argument*/NULL);
			V_0 = (bool)0;
		}

IL_0046:
		{
			Il2CppObject * L_8 = V_2;
			NullCheck(L_8);
			bool L_9 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_8);
			if (L_9)
			{
				goto IL_001e;
			}
		}

IL_0051:
		{
			IL2CPP_LEAVE(0x6A, FINALLY_0056);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_0056;
	}

FINALLY_0056:
	{ // begin finally (depth: 1)
		{
			Il2CppObject * L_10 = V_2;
			Il2CppObject * L_11 = ((Il2CppObject *)IsInst(L_10, IDisposable_t2427283555_il2cpp_TypeInfo_var));
			V_3 = L_11;
			if (!L_11)
			{
				goto IL_0069;
			}
		}

IL_0063:
		{
			Il2CppObject * L_12 = V_3;
			NullCheck(L_12);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t2427283555_il2cpp_TypeInfo_var, L_12);
		}

IL_0069:
		{
			IL2CPP_END_FINALLY(86)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(86)
	{
		IL2CPP_JUMP_TBL(0x6A, IL_006a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_006a:
	{
		StringBuilder_t1221177846 * L_13 = __this->get_builder_0();
		NullCheck(L_13);
		StringBuilder_Append_m3618697540(L_13, ((int32_t)93), /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzSDK.MiniJSON.Json/Serializer::SerializeString(System.String)
extern Il2CppClass* Convert_t2607082565_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3943473468;
extern Il2CppCodeGenString* _stringLiteral2088416310;
extern Il2CppCodeGenString* _stringLiteral1093630588;
extern Il2CppCodeGenString* _stringLiteral3419229416;
extern Il2CppCodeGenString* _stringLiteral3062999056;
extern Il2CppCodeGenString* _stringLiteral381169868;
extern Il2CppCodeGenString* _stringLiteral3869568110;
extern Il2CppCodeGenString* _stringLiteral2303484169;
extern Il2CppCodeGenString* _stringLiteral2424443666;
extern const uint32_t Serializer_SerializeString_m3293617839_MetadataUsageId;
extern "C"  void Serializer_SerializeString_m3293617839 (Serializer_t2315747485 * __this, String_t* ___str0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeString_m3293617839_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t1328083999* V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	CharU5BU5D_t1328083999* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		StringBuilder_t1221177846 * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_Append_m3618697540(L_0, ((int32_t)34), /*hidden argument*/NULL);
		String_t* L_1 = ___str0;
		NullCheck(L_1);
		CharU5BU5D_t1328083999* L_2 = String_ToCharArray_m870309954(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		CharU5BU5D_t1328083999* L_3 = V_0;
		V_2 = L_3;
		V_3 = 0;
		goto IL_0157;
	}

IL_0020:
	{
		CharU5BU5D_t1328083999* L_4 = V_2;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint16_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		Il2CppChar L_8 = V_1;
		if (((int32_t)((int32_t)L_8-(int32_t)8)) == 0)
		{
			goto IL_0086;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)8)) == 1)
		{
			goto IL_00de;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)8)) == 2)
		{
			goto IL_00b2;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)8)) == 3)
		{
			goto IL_0045;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)8)) == 4)
		{
			goto IL_009c;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)8)) == 5)
		{
			goto IL_00c8;
		}
	}

IL_0045:
	{
		Il2CppChar L_9 = V_1;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)34))))
		{
			goto IL_005a;
		}
	}
	{
		Il2CppChar L_10 = V_1;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)92))))
		{
			goto IL_0070;
		}
	}
	{
		goto IL_00f4;
	}

IL_005a:
	{
		StringBuilder_t1221177846 * L_11 = __this->get_builder_0();
		NullCheck(L_11);
		StringBuilder_Append_m3636508479(L_11, _stringLiteral3943473468, /*hidden argument*/NULL);
		goto IL_0152;
	}

IL_0070:
	{
		StringBuilder_t1221177846 * L_12 = __this->get_builder_0();
		NullCheck(L_12);
		StringBuilder_Append_m3636508479(L_12, _stringLiteral2088416310, /*hidden argument*/NULL);
		goto IL_0152;
	}

IL_0086:
	{
		StringBuilder_t1221177846 * L_13 = __this->get_builder_0();
		NullCheck(L_13);
		StringBuilder_Append_m3636508479(L_13, _stringLiteral1093630588, /*hidden argument*/NULL);
		goto IL_0152;
	}

IL_009c:
	{
		StringBuilder_t1221177846 * L_14 = __this->get_builder_0();
		NullCheck(L_14);
		StringBuilder_Append_m3636508479(L_14, _stringLiteral3419229416, /*hidden argument*/NULL);
		goto IL_0152;
	}

IL_00b2:
	{
		StringBuilder_t1221177846 * L_15 = __this->get_builder_0();
		NullCheck(L_15);
		StringBuilder_Append_m3636508479(L_15, _stringLiteral3062999056, /*hidden argument*/NULL);
		goto IL_0152;
	}

IL_00c8:
	{
		StringBuilder_t1221177846 * L_16 = __this->get_builder_0();
		NullCheck(L_16);
		StringBuilder_Append_m3636508479(L_16, _stringLiteral381169868, /*hidden argument*/NULL);
		goto IL_0152;
	}

IL_00de:
	{
		StringBuilder_t1221177846 * L_17 = __this->get_builder_0();
		NullCheck(L_17);
		StringBuilder_Append_m3636508479(L_17, _stringLiteral3869568110, /*hidden argument*/NULL);
		goto IL_0152;
	}

IL_00f4:
	{
		Il2CppChar L_18 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2607082565_il2cpp_TypeInfo_var);
		int32_t L_19 = Convert_ToInt32_m3683486440(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		V_4 = L_19;
		int32_t L_20 = V_4;
		if ((((int32_t)L_20) < ((int32_t)((int32_t)32))))
		{
			goto IL_0122;
		}
	}
	{
		int32_t L_21 = V_4;
		if ((((int32_t)L_21) > ((int32_t)((int32_t)126))))
		{
			goto IL_0122;
		}
	}
	{
		StringBuilder_t1221177846 * L_22 = __this->get_builder_0();
		Il2CppChar L_23 = V_1;
		NullCheck(L_22);
		StringBuilder_Append_m3618697540(L_22, L_23, /*hidden argument*/NULL);
		goto IL_014d;
	}

IL_0122:
	{
		StringBuilder_t1221177846 * L_24 = __this->get_builder_0();
		NullCheck(L_24);
		StringBuilder_Append_m3636508479(L_24, _stringLiteral2303484169, /*hidden argument*/NULL);
		StringBuilder_t1221177846 * L_25 = __this->get_builder_0();
		String_t* L_26 = Int32_ToString_m1064459878((&V_4), _stringLiteral2424443666, /*hidden argument*/NULL);
		NullCheck(L_25);
		StringBuilder_Append_m3636508479(L_25, L_26, /*hidden argument*/NULL);
	}

IL_014d:
	{
		goto IL_0152;
	}

IL_0152:
	{
		int32_t L_27 = V_3;
		V_3 = ((int32_t)((int32_t)L_27+(int32_t)1));
	}

IL_0157:
	{
		int32_t L_28 = V_3;
		CharU5BU5D_t1328083999* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_29)->max_length)))))))
		{
			goto IL_0020;
		}
	}
	{
		StringBuilder_t1221177846 * L_30 = __this->get_builder_0();
		NullCheck(L_30);
		StringBuilder_Append_m3618697540(L_30, ((int32_t)34), /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzSDK.MiniJSON.Json/Serializer::SerializeOther(System.Object)
extern Il2CppClass* Single_t2076509932_il2cpp_TypeInfo_var;
extern Il2CppClass* CultureInfo_t3500843524_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t2071877448_il2cpp_TypeInfo_var;
extern Il2CppClass* UInt32_t2149682021_il2cpp_TypeInfo_var;
extern Il2CppClass* Int64_t909078037_il2cpp_TypeInfo_var;
extern Il2CppClass* SByte_t454417549_il2cpp_TypeInfo_var;
extern Il2CppClass* Byte_t3683104436_il2cpp_TypeInfo_var;
extern Il2CppClass* Int16_t4041245914_il2cpp_TypeInfo_var;
extern Il2CppClass* UInt16_t986882611_il2cpp_TypeInfo_var;
extern Il2CppClass* UInt64_t2909196914_il2cpp_TypeInfo_var;
extern Il2CppClass* Double_t4078015681_il2cpp_TypeInfo_var;
extern Il2CppClass* Decimal_t724701077_il2cpp_TypeInfo_var;
extern Il2CppClass* Convert_t2607082565_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral372029424;
extern const uint32_t Serializer_SerializeOther_m12875806_MetadataUsageId;
extern "C"  void Serializer_SerializeOther_m12875806 (Serializer_t2315747485 * __this, Il2CppObject * ___value0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeOther_m12875806_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	double V_1 = 0.0;
	{
		Il2CppObject * L_0 = ___value0;
		if (!((Il2CppObject *)IsInstSealed(L_0, Single_t2076509932_il2cpp_TypeInfo_var)))
		{
			goto IL_0037;
		}
	}
	{
		StringBuilder_t1221177846 * L_1 = __this->get_builder_0();
		Il2CppObject * L_2 = ___value0;
		V_0 = ((*(float*)((float*)UnBox (L_2, Single_t2076509932_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t3500843524_il2cpp_TypeInfo_var);
		CultureInfo_t3500843524 * L_3 = CultureInfo_get_InvariantCulture_m398972276(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_4 = Single_ToString_m3667608664((&V_0), _stringLiteral372029424, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_Append_m3636508479(L_1, L_4, /*hidden argument*/NULL);
		goto IL_00f2;
	}

IL_0037:
	{
		Il2CppObject * L_5 = ___value0;
		if (((Il2CppObject *)IsInstSealed(L_5, Int32_t2071877448_il2cpp_TypeInfo_var)))
		{
			goto IL_008f;
		}
	}
	{
		Il2CppObject * L_6 = ___value0;
		if (((Il2CppObject *)IsInstSealed(L_6, UInt32_t2149682021_il2cpp_TypeInfo_var)))
		{
			goto IL_008f;
		}
	}
	{
		Il2CppObject * L_7 = ___value0;
		if (((Il2CppObject *)IsInstSealed(L_7, Int64_t909078037_il2cpp_TypeInfo_var)))
		{
			goto IL_008f;
		}
	}
	{
		Il2CppObject * L_8 = ___value0;
		if (((Il2CppObject *)IsInstSealed(L_8, SByte_t454417549_il2cpp_TypeInfo_var)))
		{
			goto IL_008f;
		}
	}
	{
		Il2CppObject * L_9 = ___value0;
		if (((Il2CppObject *)IsInstSealed(L_9, Byte_t3683104436_il2cpp_TypeInfo_var)))
		{
			goto IL_008f;
		}
	}
	{
		Il2CppObject * L_10 = ___value0;
		if (((Il2CppObject *)IsInstSealed(L_10, Int16_t4041245914_il2cpp_TypeInfo_var)))
		{
			goto IL_008f;
		}
	}
	{
		Il2CppObject * L_11 = ___value0;
		if (((Il2CppObject *)IsInstSealed(L_11, UInt16_t986882611_il2cpp_TypeInfo_var)))
		{
			goto IL_008f;
		}
	}
	{
		Il2CppObject * L_12 = ___value0;
		if (!((Il2CppObject *)IsInstSealed(L_12, UInt64_t2909196914_il2cpp_TypeInfo_var)))
		{
			goto IL_00a3;
		}
	}

IL_008f:
	{
		StringBuilder_t1221177846 * L_13 = __this->get_builder_0();
		Il2CppObject * L_14 = ___value0;
		NullCheck(L_13);
		StringBuilder_Append_m3541816491(L_13, L_14, /*hidden argument*/NULL);
		goto IL_00f2;
	}

IL_00a3:
	{
		Il2CppObject * L_15 = ___value0;
		if (((Il2CppObject *)IsInstSealed(L_15, Double_t4078015681_il2cpp_TypeInfo_var)))
		{
			goto IL_00b9;
		}
	}
	{
		Il2CppObject * L_16 = ___value0;
		if (!((Il2CppObject *)IsInstSealed(L_16, Decimal_t724701077_il2cpp_TypeInfo_var)))
		{
			goto IL_00e4;
		}
	}

IL_00b9:
	{
		StringBuilder_t1221177846 * L_17 = __this->get_builder_0();
		Il2CppObject * L_18 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2607082565_il2cpp_TypeInfo_var);
		double L_19 = Convert_ToDouble_m3751930225(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		V_1 = L_19;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t3500843524_il2cpp_TypeInfo_var);
		CultureInfo_t3500843524 * L_20 = CultureInfo_get_InvariantCulture_m398972276(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_21 = Double_ToString_m1474956491((&V_1), _stringLiteral372029424, L_20, /*hidden argument*/NULL);
		NullCheck(L_17);
		StringBuilder_Append_m3636508479(L_17, L_21, /*hidden argument*/NULL);
		goto IL_00f2;
	}

IL_00e4:
	{
		Il2CppObject * L_22 = ___value0;
		NullCheck(L_22);
		String_t* L_23 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_22);
		Serializer_SerializeString_m3293617839(__this, L_23, /*hidden argument*/NULL);
	}

IL_00f2:
	{
		return;
	}
}
// System.Void SkillzSDK.Player::.ctor(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern Il2CppCodeGenString* _stringLiteral287061489;
extern Il2CppCodeGenString* _stringLiteral2237042265;
extern Il2CppCodeGenString* _stringLiteral2083566528;
extern Il2CppCodeGenString* _stringLiteral2923008263;
extern const uint32_t Player__ctor_m627459380_MetadataUsageId;
extern "C"  void Player__ctor_m627459380 (Player_t4162098741 * __this, Dictionary_2_t309261261 * ___playerJSON0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player__ctor_m627459380_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t309261261 * L_0 = ___playerJSON0;
		Nullable_1_t412748336  L_1 = SkillzExtensions_SafeGetUintValue_m657502786(NULL /*static, unused*/, L_0, _stringLiteral287061489, /*hidden argument*/NULL);
		__this->set_ID_1(L_1);
		Dictionary_2_t309261261 * L_2 = ___playerJSON0;
		String_t* L_3 = SkillzExtensions_SafeGetStringValue_m1232434120(NULL /*static, unused*/, L_2, _stringLiteral2237042265, /*hidden argument*/NULL);
		__this->set_DisplayName_0(L_3);
		Dictionary_2_t309261261 * L_4 = ___playerJSON0;
		String_t* L_5 = SkillzExtensions_SafeGetStringValue_m1232434120(NULL /*static, unused*/, L_4, _stringLiteral2083566528, /*hidden argument*/NULL);
		__this->set_AvatarURL_2(L_5);
		Dictionary_2_t309261261 * L_6 = ___playerJSON0;
		String_t* L_7 = SkillzExtensions_SafeGetStringValue_m1232434120(NULL /*static, unused*/, L_6, _stringLiteral2923008263, /*hidden argument*/NULL);
		__this->set_FlagURL_3(L_7);
		return;
	}
}
extern "C"  void Player__ctor_m627459380_AdjustorThunk (Il2CppObject * __this, Dictionary_2_t309261261 * ___playerJSON0, const MethodInfo* method)
{
	Player_t4162098741 * _thisAdjusted = reinterpret_cast<Player_t4162098741 *>(__this + 1);
	Player__ctor_m627459380(_thisAdjusted, ___playerJSON0, method);
}
// System.String SkillzSDK.Player::ToString()
extern Il2CppClass* ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var;
extern Il2CppClass* Nullable_1_t412748336_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4062561409;
extern Il2CppCodeGenString* _stringLiteral2508008281;
extern Il2CppCodeGenString* _stringLiteral4163298846;
extern Il2CppCodeGenString* _stringLiteral2778680023;
extern Il2CppCodeGenString* _stringLiteral372029425;
extern const uint32_t Player_ToString_m557479334_MetadataUsageId;
extern "C"  String_t* Player_ToString_m557479334 (Player_t4162098741 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_ToString_m557479334_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t3614634134* L_0 = ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9)));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral4062561409);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)_stringLiteral4062561409);
		ObjectU5BU5D_t3614634134* L_1 = L_0;
		Nullable_1_t412748336  L_2 = __this->get_ID_1();
		Nullable_1_t412748336  L_3 = L_2;
		Il2CppObject * L_4 = Box(Nullable_1_t412748336_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_4);
		ObjectU5BU5D_t3614634134* L_5 = L_1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral2508008281);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppObject *)_stringLiteral2508008281);
		ObjectU5BU5D_t3614634134* L_6 = L_5;
		String_t* L_7 = __this->get_DisplayName_0();
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppObject *)L_7);
		ObjectU5BU5D_t3614634134* L_8 = L_6;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral4163298846);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (Il2CppObject *)_stringLiteral4163298846);
		ObjectU5BU5D_t3614634134* L_9 = L_8;
		String_t* L_10 = __this->get_AvatarURL_2();
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(5), (Il2CppObject *)L_10);
		ObjectU5BU5D_t3614634134* L_11 = L_9;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral2778680023);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(6), (Il2CppObject *)_stringLiteral2778680023);
		ObjectU5BU5D_t3614634134* L_12 = L_11;
		String_t* L_13 = __this->get_FlagURL_3();
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(7), (Il2CppObject *)L_13);
		ObjectU5BU5D_t3614634134* L_14 = L_12;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral372029425);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(8), (Il2CppObject *)_stringLiteral372029425);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Concat_m3881798623(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		V_0 = L_15;
		goto IL_0064;
	}

IL_0064:
	{
		String_t* L_16 = V_0;
		return L_16;
	}
}
extern "C"  String_t* Player_ToString_m557479334_AdjustorThunk (Il2CppObject * __this, const MethodInfo* method)
{
	Player_t4162098741 * _thisAdjusted = reinterpret_cast<Player_t4162098741 *>(__this + 1);
	return Player_ToString_m557479334(_thisAdjusted, method);
}
// Conversion methods for marshalling of: SkillzSDK.Player
extern "C" void Player_t4162098741_marshal_pinvoke(const Player_t4162098741& unmarshaled, Player_t4162098741_marshaled_pinvoke& marshaled)
{
	Il2CppCodeGenException* ___ID_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'ID' of type 'Player'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___ID_1Exception);
}
extern "C" void Player_t4162098741_marshal_pinvoke_back(const Player_t4162098741_marshaled_pinvoke& marshaled, Player_t4162098741& unmarshaled)
{
	Il2CppCodeGenException* ___ID_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'ID' of type 'Player'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___ID_1Exception);
}
// Conversion method for clean up from marshalling of: SkillzSDK.Player
extern "C" void Player_t4162098741_marshal_pinvoke_cleanup(Player_t4162098741_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: SkillzSDK.Player
extern "C" void Player_t4162098741_marshal_com(const Player_t4162098741& unmarshaled, Player_t4162098741_marshaled_com& marshaled)
{
	Il2CppCodeGenException* ___ID_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'ID' of type 'Player'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___ID_1Exception);
}
extern "C" void Player_t4162098741_marshal_com_back(const Player_t4162098741_marshaled_com& marshaled, Player_t4162098741& unmarshaled)
{
	Il2CppCodeGenException* ___ID_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'ID' of type 'Player'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___ID_1Exception);
}
// Conversion method for clean up from marshalling of: SkillzSDK.Player
extern "C" void Player_t4162098741_marshal_com_cleanup(Player_t4162098741_marshaled_com& marshaled)
{
}
// System.Void SkillzSDK.SkillzDelegateBase::.ctor()
extern "C"  void SkillzDelegateBase__ctor_m2097145993 (SkillzDelegateBase_t2433258543 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzSDK.SkillzDelegateBase::OnSkillzWillExit()
extern "C"  void SkillzDelegateBase_OnSkillzWillExit_m2812844833 (SkillzDelegateBase_t2433258543 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void SkillzSDK.SkillzDelegateBase::OnSkillzWillLaunch()
extern "C"  void SkillzDelegateBase_OnSkillzWillLaunch_m1318344358 (SkillzDelegateBase_t2433258543 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void SkillzSDK.SkillzDelegateBase::OnSkillzLaunchCompleted()
extern "C"  void SkillzDelegateBase_OnSkillzLaunchCompleted_m3421551607 (SkillzDelegateBase_t2433258543 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void SkillzSDK.SkillzDelegateBase::OnTournamentAborted()
extern "C"  void SkillzDelegateBase_OnTournamentAborted_m3696654092 (SkillzDelegateBase_t2433258543 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void SkillzSDK.SkillzDelegateInit::.ctor()
extern "C"  void SkillzDelegateInit__ctor_m392615900 (SkillzDelegateInit_t4059693480 * __this, const MethodInfo* method)
{
	{
		__this->set_GameID_3(0);
		__this->set_SkillzEnvironment_4(0);
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzSDK.SkillzDelegateInit::Awake()
extern Il2CppClass* SkillzDelegateInit_t4059693480_il2cpp_TypeInfo_var;
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern const uint32_t SkillzDelegateInit_Awake_m2804485639_MetadataUsageId;
extern "C"  void SkillzDelegateInit_Awake_m2804485639 (SkillzDelegateInit_t4059693480 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkillzDelegateInit_Awake_m2804485639_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SkillzDelegateInit_t4059693480_il2cpp_TypeInfo_var);
		bool L_0 = ((SkillzDelegateInit_t4059693480_StaticFields*)SkillzDelegateInit_t4059693480_il2cpp_TypeInfo_var->static_fields)->get_initializedYet_2();
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		GameObject_t1756533147 * L_1 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Destroy_m4145850038(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		goto IL_004f;
	}

IL_001c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SkillzDelegateInit_t4059693480_il2cpp_TypeInfo_var);
		((SkillzDelegateInit_t4059693480_StaticFields*)SkillzDelegateInit_t4059693480_il2cpp_TypeInfo_var->static_fields)->set_initializedYet_2((bool)1);
		GameObject_t1756533147 * L_2 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m2330762974(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		int32_t* L_3 = __this->get_address_of_GameID_3();
		String_t* L_4 = Int32_ToString_m2960866144(L_3, /*hidden argument*/NULL);
		int32_t L_5 = __this->get_SkillzEnvironment_4();
		Api_Initialize_m3025511632(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		Object_Destroy_m4145850038(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
	}

IL_004f:
	{
		return;
	}
}
// System.Void SkillzSDK.SkillzDelegateInit::.cctor()
extern Il2CppClass* SkillzDelegateInit_t4059693480_il2cpp_TypeInfo_var;
extern const uint32_t SkillzDelegateInit__cctor_m4065847625_MetadataUsageId;
extern "C"  void SkillzDelegateInit__cctor_m4065847625 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkillzDelegateInit__cctor_m4065847625_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((SkillzDelegateInit_t4059693480_StaticFields*)SkillzDelegateInit_t4059693480_il2cpp_TypeInfo_var->static_fields)->set_initializedYet_2((bool)0);
		return;
	}
}
// System.Void SkillzSDK.SkillzDelegateStandard::.ctor()
extern "C"  void SkillzDelegateStandard__ctor_m2552137287 (SkillzDelegateStandard_t2914650099 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzSDK.SkillzDelegateStandard::OnTournamentCompleted()
extern "C"  void SkillzDelegateStandard_OnTournamentCompleted_m3414589790 (SkillzDelegateStandard_t2914650099 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void SkillzSDK.SkillzDelegateTurnBased::.ctor()
extern "C"  void SkillzDelegateTurnBased__ctor_m2870468942 (SkillzDelegateTurnBased_t3217995174 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzSDK.SkillzDelegateTurnBased::OnTurnEnd()
extern "C"  void SkillzDelegateTurnBased_OnTurnEnd_m3272152411 (SkillzDelegateTurnBased_t3217995174 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void SkillzSDK.SkillzDelegateTurnBased::OnTurnBasedReviewWillBegin(SkillzSDK.TurnBasedMatch)
extern "C"  void SkillzDelegateTurnBased_OnTurnBasedReviewWillBegin_m270068222 (SkillzDelegateTurnBased_t3217995174 * __this, TurnBasedMatch_t1669686419 * ___matchInfo0, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void SkillzSDK.SkillzDelegateTurnBased::OnReviewEnd()
extern "C"  void SkillzDelegateTurnBased_OnReviewEnd_m127839628 (SkillzDelegateTurnBased_t3217995174 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void SkillzSDK.SkillzMessageReceiver::.ctor()
extern "C"  void SkillzMessageReceiver__ctor_m854128957 (SkillzMessageReceiver_t704596351 * __this, const MethodInfo* method)
{
	{
		__this->set_DelBase_2((SkillzDelegateBase_t2433258543 *)NULL);
		__this->set_DelStandard_3((SkillzDelegateStandard_t2914650099 *)NULL);
		__this->set_DelTurnBased_4((SkillzDelegateTurnBased_t3217995174 *)NULL);
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzSDK.SkillzMessageReceiver::Start()
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern Il2CppClass* Debug_t1368543263_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1644296566;
extern Il2CppCodeGenString* _stringLiteral3777040845;
extern const uint32_t SkillzMessageReceiver_Start_m795227381_MetadataUsageId;
extern "C"  void SkillzMessageReceiver_Start_m795227381 (SkillzMessageReceiver_t704596351 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkillzMessageReceiver_Start_m795227381_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SkillzDelegateBase_t2433258543 * L_0 = __this->get_DelBase_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m3764089466(NULL /*static, unused*/, L_0, (Object_t1021602117 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_LogError_m3715728798(NULL /*static, unused*/, _stringLiteral1644296566, /*hidden argument*/NULL);
	}

IL_001e:
	{
		SkillzDelegateStandard_t2914650099 * L_2 = __this->get_DelStandard_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_m3764089466(NULL /*static, unused*/, L_2, (Object_t1021602117 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_004c;
		}
	}
	{
		SkillzDelegateTurnBased_t3217995174 * L_4 = __this->get_DelTurnBased_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_m3764089466(NULL /*static, unused*/, L_4, (Object_t1021602117 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_LogError_m3715728798(NULL /*static, unused*/, _stringLiteral3777040845, /*hidden argument*/NULL);
	}

IL_004c:
	{
		return;
	}
}
// System.Void SkillzSDK.SkillzMessageReceiver::skillzWillExit(System.String)
extern "C"  void SkillzMessageReceiver_skillzWillExit_m300115806 (SkillzMessageReceiver_t704596351 * __this, String_t* ___ignoreMe0, const MethodInfo* method)
{
	{
		SkillzDelegateBase_t2433258543 * L_0 = __this->get_DelBase_2();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(4 /* System.Void SkillzSDK.SkillzDelegateBase::OnSkillzWillExit() */, L_0);
		return;
	}
}
// System.Void SkillzSDK.SkillzMessageReceiver::skillzLaunchHasCompleted(System.String)
extern "C"  void SkillzMessageReceiver_skillzLaunchHasCompleted_m4237608952 (SkillzMessageReceiver_t704596351 * __this, String_t* ___ignoreMe0, const MethodInfo* method)
{
	{
		SkillzDelegateBase_t2433258543 * L_0 = __this->get_DelBase_2();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(6 /* System.Void SkillzSDK.SkillzDelegateBase::OnSkillzLaunchCompleted() */, L_0);
		return;
	}
}
// System.Void SkillzSDK.SkillzMessageReceiver::skillzWillLaunch(System.String)
extern "C"  void SkillzMessageReceiver_skillzWillLaunch_m2278897723 (SkillzMessageReceiver_t704596351 * __this, String_t* ___ignoreMe0, const MethodInfo* method)
{
	{
		SkillzDelegateBase_t2433258543 * L_0 = __this->get_DelBase_2();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(5 /* System.Void SkillzSDK.SkillzDelegateBase::OnSkillzWillLaunch() */, L_0);
		return;
	}
}
// System.Void SkillzSDK.SkillzMessageReceiver::skillzWithPlayerAbort(System.String)
extern "C"  void SkillzMessageReceiver_skillzWithPlayerAbort_m407039023 (SkillzMessageReceiver_t704596351 * __this, String_t* ___ignoreMe0, const MethodInfo* method)
{
	{
		SkillzDelegateBase_t2433258543 * L_0 = __this->get_DelBase_2();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(7 /* System.Void SkillzSDK.SkillzDelegateBase::OnTournamentAborted() */, L_0);
		return;
	}
}
// System.Void SkillzSDK.SkillzMessageReceiver::skillzTournamentWillBegin(System.String)
extern Il2CppClass* Match_t3198203703_il2cpp_TypeInfo_var;
extern const uint32_t SkillzMessageReceiver_skillzTournamentWillBegin_m2101136200_MetadataUsageId;
extern "C"  void SkillzMessageReceiver_skillzTournamentWillBegin_m2101136200 (SkillzMessageReceiver_t704596351 * __this, String_t* ___matchInfoJson0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkillzMessageReceiver_skillzTournamentWillBegin_m2101136200_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t309261261 * V_0 = NULL;
	Match_t3198203703 * V_1 = NULL;
	{
		String_t* L_0 = ___matchInfoJson0;
		Dictionary_2_t309261261 * L_1 = SkillzMessageReceiver_DeserializeJSONToDictionary_m1470367815(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Dictionary_2_t309261261 * L_2 = V_0;
		Match_t3198203703 * L_3 = (Match_t3198203703 *)il2cpp_codegen_object_new(Match_t3198203703_il2cpp_TypeInfo_var);
		Match__ctor_m2937599774(L_3, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		SkillzDelegateStandard_t2914650099 * L_4 = __this->get_DelStandard_3();
		Match_t3198203703 * L_5 = V_1;
		NullCheck(L_4);
		VirtActionInvoker1< Match_t3198203703 * >::Invoke(4 /* System.Void SkillzSDK.SkillzDelegateStandard::OnTournamentWillBegin(SkillzSDK.Match) */, L_4, L_5);
		return;
	}
}
// System.Void SkillzSDK.SkillzMessageReceiver::skillzWithTournamentCompletion(System.String)
extern "C"  void SkillzMessageReceiver_skillzWithTournamentCompletion_m4060549867 (SkillzMessageReceiver_t704596351 * __this, String_t* ___ignoreMe0, const MethodInfo* method)
{
	{
		SkillzDelegateStandard_t2914650099 * L_0 = __this->get_DelStandard_3();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(5 /* System.Void SkillzSDK.SkillzDelegateStandard::OnTournamentCompleted() */, L_0);
		return;
	}
}
// System.Void SkillzSDK.SkillzMessageReceiver::skillzTurnBasedTournamentWillBegin(System.String)
extern Il2CppClass* TurnBasedMatch_t1669686419_il2cpp_TypeInfo_var;
extern const uint32_t SkillzMessageReceiver_skillzTurnBasedTournamentWillBegin_m106370324_MetadataUsageId;
extern "C"  void SkillzMessageReceiver_skillzTurnBasedTournamentWillBegin_m106370324 (SkillzMessageReceiver_t704596351 * __this, String_t* ___turnBasedMatchInfoJson0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkillzMessageReceiver_skillzTurnBasedTournamentWillBegin_m106370324_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t309261261 * V_0 = NULL;
	TurnBasedMatch_t1669686419 * V_1 = NULL;
	{
		String_t* L_0 = ___turnBasedMatchInfoJson0;
		Dictionary_2_t309261261 * L_1 = SkillzMessageReceiver_DeserializeJSONToDictionary_m1470367815(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Dictionary_2_t309261261 * L_2 = V_0;
		TurnBasedMatch_t1669686419 * L_3 = (TurnBasedMatch_t1669686419 *)il2cpp_codegen_object_new(TurnBasedMatch_t1669686419_il2cpp_TypeInfo_var);
		TurnBasedMatch__ctor_m1723016574(L_3, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		SkillzDelegateTurnBased_t3217995174 * L_4 = __this->get_DelTurnBased_4();
		TurnBasedMatch_t1669686419 * L_5 = V_1;
		NullCheck(L_4);
		VirtActionInvoker1< TurnBasedMatch_t1669686419 * >::Invoke(4 /* System.Void SkillzSDK.SkillzDelegateTurnBased::OnTurnBasedTournamentWillBegin(SkillzSDK.TurnBasedMatch) */, L_4, L_5);
		return;
	}
}
// System.Void SkillzSDK.SkillzMessageReceiver::skillzEndTurnCompletion(System.String)
extern "C"  void SkillzMessageReceiver_skillzEndTurnCompletion_m2893470020 (SkillzMessageReceiver_t704596351 * __this, String_t* ___ignoreMe0, const MethodInfo* method)
{
	{
		SkillzDelegateTurnBased_t3217995174 * L_0 = __this->get_DelTurnBased_4();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(5 /* System.Void SkillzSDK.SkillzDelegateTurnBased::OnTurnEnd() */, L_0);
		return;
	}
}
// System.Void SkillzSDK.SkillzMessageReceiver::skillzReviewCurrentGameState(System.String)
extern Il2CppClass* TurnBasedMatch_t1669686419_il2cpp_TypeInfo_var;
extern const uint32_t SkillzMessageReceiver_skillzReviewCurrentGameState_m427440186_MetadataUsageId;
extern "C"  void SkillzMessageReceiver_skillzReviewCurrentGameState_m427440186 (SkillzMessageReceiver_t704596351 * __this, String_t* ___turnBasedMatchInfoJson0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkillzMessageReceiver_skillzReviewCurrentGameState_m427440186_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t309261261 * V_0 = NULL;
	TurnBasedMatch_t1669686419 * V_1 = NULL;
	{
		String_t* L_0 = ___turnBasedMatchInfoJson0;
		Dictionary_2_t309261261 * L_1 = SkillzMessageReceiver_DeserializeJSONToDictionary_m1470367815(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Dictionary_2_t309261261 * L_2 = V_0;
		TurnBasedMatch_t1669686419 * L_3 = (TurnBasedMatch_t1669686419 *)il2cpp_codegen_object_new(TurnBasedMatch_t1669686419_il2cpp_TypeInfo_var);
		TurnBasedMatch__ctor_m1723016574(L_3, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		SkillzDelegateTurnBased_t3217995174 * L_4 = __this->get_DelTurnBased_4();
		TurnBasedMatch_t1669686419 * L_5 = V_1;
		NullCheck(L_4);
		VirtActionInvoker1< TurnBasedMatch_t1669686419 * >::Invoke(6 /* System.Void SkillzSDK.SkillzDelegateTurnBased::OnTurnBasedReviewWillBegin(SkillzSDK.TurnBasedMatch) */, L_4, L_5);
		return;
	}
}
// System.Void SkillzSDK.SkillzMessageReceiver::skillzFinishReviewingCurrentGameState(System.String)
extern "C"  void SkillzMessageReceiver_skillzFinishReviewingCurrentGameState_m3557823297 (SkillzMessageReceiver_t704596351 * __this, String_t* ___ignoreMe0, const MethodInfo* method)
{
	{
		SkillzDelegateTurnBased_t3217995174 * L_0 = __this->get_DelTurnBased_4();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(7 /* System.Void SkillzSDK.SkillzDelegateTurnBased::OnReviewEnd() */, L_0);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> SkillzSDK.SkillzMessageReceiver::DeserializeJSONToDictionary(System.String)
extern Il2CppClass* Dictionary_2_t309261261_il2cpp_TypeInfo_var;
extern const uint32_t SkillzMessageReceiver_DeserializeJSONToDictionary_m1470367815_MetadataUsageId;
extern "C"  Dictionary_2_t309261261 * SkillzMessageReceiver_DeserializeJSONToDictionary_m1470367815 (Il2CppObject * __this /* static, unused */, String_t* ___jsonString0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkillzMessageReceiver_DeserializeJSONToDictionary_m1470367815_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t309261261 * V_0 = NULL;
	{
		String_t* L_0 = ___jsonString0;
		Il2CppObject * L_1 = Json_Deserialize_m969239781(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t309261261 *)IsInstClass(L_1, Dictionary_2_t309261261_il2cpp_TypeInfo_var));
		goto IL_0012;
	}

IL_0012:
	{
		Dictionary_2_t309261261 * L_2 = V_0;
		return L_2;
	}
}
// System.Void SkillzSDK.TurnBasedMatch::.ctor(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern const Il2CppType* List_1_t2058570427_0_0_0_var;
extern const Il2CppType* Dictionary_2_t309261261_0_0_0_var;
extern Il2CppClass* List_1_t363789400_il2cpp_TypeInfo_var;
extern Il2CppClass* Type_t_il2cpp_TypeInfo_var;
extern Il2CppClass* List_1_t2058570427_il2cpp_TypeInfo_var;
extern Il2CppClass* Dictionary_2_t309261261_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3033644156_MethodInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m3623694812_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m2417004258_MethodInfo_var;
extern const MethodInfo* List_1_Add_m925878200_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m846496112_MethodInfo_var;
extern const MethodInfo* Enumerator_Dispose_m3736175406_MethodInfo_var;
extern const MethodInfo* Nullable_1__ctor_m3735245154_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral4175067729;
extern Il2CppCodeGenString* _stringLiteral981266066;
extern Il2CppCodeGenString* _stringLiteral1608514398;
extern Il2CppCodeGenString* _stringLiteral3997019755;
extern Il2CppCodeGenString* _stringLiteral647006721;
extern Il2CppCodeGenString* _stringLiteral3462562320;
extern Il2CppCodeGenString* _stringLiteral104196972;
extern const uint32_t TurnBasedMatch__ctor_m1723016574_MetadataUsageId;
extern "C"  void TurnBasedMatch__ctor_m1723016574 (TurnBasedMatch_t1669686419 * __this, Dictionary_2_t309261261 * ___matchInfo0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TurnBasedMatch__ctor_m1723016574_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppObject * V_0 = NULL;
	List_1_t2058570427 * V_1 = NULL;
	Il2CppObject * V_2 = NULL;
	Enumerator_t1593300101  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Dictionary_2_t309261261 * V_4 = NULL;
	TurnBasedRound_t994668268  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t309261261 * L_0 = ___matchInfo0;
		Match__ctor_m2937599774(__this, L_0, /*hidden argument*/NULL);
		Dictionary_2_t309261261 * L_1 = ___matchInfo0;
		Nullable_1_t2088641033  L_2 = SkillzExtensions_SafeGetBoolValue_m3602896471(NULL /*static, unused*/, L_1, _stringLiteral4175067729, /*hidden argument*/NULL);
		__this->set_IsMatchOver_14(L_2);
		Dictionary_2_t309261261 * L_3 = ___matchInfo0;
		Nullable_1_t3251239280  L_4 = SkillzExtensions_SafeGetUnixDateTimeValue_m4069810339(NULL /*static, unused*/, L_3, _stringLiteral981266066, /*hidden argument*/NULL);
		__this->set_TimeTournamentBegan_12(L_4);
		Dictionary_2_t309261261 * L_5 = ___matchInfo0;
		Nullable_1_t3251239280  L_6 = SkillzExtensions_SafeGetUnixDateTimeValue_m4069810339(NULL /*static, unused*/, L_5, _stringLiteral1608514398, /*hidden argument*/NULL);
		__this->set_TimeLastTurnCompleted_13(L_6);
		Dictionary_2_t309261261 * L_7 = ___matchInfo0;
		Nullable_1_t412748336  L_8 = SkillzExtensions_SafeGetUintValue_m657502786(NULL /*static, unused*/, L_7, _stringLiteral3997019755, /*hidden argument*/NULL);
		__this->set_PrizeZ_10(L_8);
		Dictionary_2_t309261261 * L_9 = ___matchInfo0;
		Nullable_1_t2341081996  L_10 = SkillzExtensions_SafeGetDoubleValue_m3582278033(NULL /*static, unused*/, L_9, _stringLiteral647006721, /*hidden argument*/NULL);
		__this->set_PrizeCash_11(L_10);
		Dictionary_2_t309261261 * L_11 = ___matchInfo0;
		Nullable_1_t334943763  L_12 = SkillzExtensions_SafeGetIntValue_m15557640(NULL /*static, unused*/, L_11, _stringLiteral3462562320, /*hidden argument*/NULL);
		__this->set_CurrentTurnIndex_16(L_12);
		List_1_t363789400 * L_13 = (List_1_t363789400 *)il2cpp_codegen_object_new(List_1_t363789400_il2cpp_TypeInfo_var);
		List_1__ctor_m3033644156(L_13, /*hidden argument*/List_1__ctor_m3033644156_MethodInfo_var);
		__this->set_Rounds_15(L_13);
		Dictionary_2_t309261261 * L_14 = ___matchInfo0;
		Il2CppObject * L_15 = SkillzExtensions_SafeGetValue_m1809279245(NULL /*static, unused*/, L_14, _stringLiteral104196972, /*hidden argument*/NULL);
		V_0 = L_15;
		Il2CppObject * L_16 = V_0;
		if (!L_16)
		{
			goto IL_011a;
		}
	}
	{
		Il2CppObject * L_17 = V_0;
		NullCheck(L_17);
		Type_t * L_18 = Object_GetType_m191970594(L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_19 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, LoadTypeToken(List_1_t2058570427_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Il2CppObject*)(Type_t *)L_18) == ((Il2CppObject*)(Type_t *)L_19))))
		{
			goto IL_011a;
		}
	}
	{
		Il2CppObject * L_20 = V_0;
		V_1 = ((List_1_t2058570427 *)CastclassClass(L_20, List_1_t2058570427_il2cpp_TypeInfo_var));
		List_1_t2058570427 * L_21 = V_1;
		NullCheck(L_21);
		Enumerator_t1593300101  L_22 = List_1_GetEnumerator_m3623694812(L_21, /*hidden argument*/List_1_GetEnumerator_m3623694812_MethodInfo_var);
		V_3 = L_22;
	}

IL_00b0:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00fa;
		}

IL_00b5:
		{
			Il2CppObject * L_23 = Enumerator_get_Current_m2417004258((&V_3), /*hidden argument*/Enumerator_get_Current_m2417004258_MethodInfo_var);
			V_2 = L_23;
			Il2CppObject * L_24 = V_2;
			if (!L_24)
			{
				goto IL_00f9;
			}
		}

IL_00c4:
		{
			Il2CppObject * L_25 = V_2;
			NullCheck(L_25);
			Type_t * L_26 = Object_GetType_m191970594(L_25, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_27 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, LoadTypeToken(Dictionary_2_t309261261_0_0_0_var), /*hidden argument*/NULL);
			if ((!(((Il2CppObject*)(Type_t *)L_26) == ((Il2CppObject*)(Type_t *)L_27))))
			{
				goto IL_00f9;
			}
		}

IL_00d9:
		{
			Il2CppObject * L_28 = V_2;
			V_4 = ((Dictionary_2_t309261261 *)CastclassClass(L_28, Dictionary_2_t309261261_il2cpp_TypeInfo_var));
			Dictionary_2_t309261261 * L_29 = V_4;
			TurnBasedRound__ctor_m1944947777((&V_5), L_29, /*hidden argument*/NULL);
			List_1_t363789400 * L_30 = __this->get_Rounds_15();
			TurnBasedRound_t994668268  L_31 = V_5;
			NullCheck(L_30);
			List_1_Add_m925878200(L_30, L_31, /*hidden argument*/List_1_Add_m925878200_MethodInfo_var);
		}

IL_00f9:
		{
		}

IL_00fa:
		{
			bool L_32 = Enumerator_MoveNext_m846496112((&V_3), /*hidden argument*/Enumerator_MoveNext_m846496112_MethodInfo_var);
			if (L_32)
			{
				goto IL_00b5;
			}
		}

IL_0106:
		{
			IL2CPP_LEAVE(0x119, FINALLY_010b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_010b;
	}

FINALLY_010b:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3736175406((&V_3), /*hidden argument*/Enumerator_Dispose_m3736175406_MethodInfo_var);
		IL2CPP_END_FINALLY(267)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(267)
	{
		IL2CPP_JUMP_TBL(0x119, IL_0119)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_0119:
	{
	}

IL_011a:
	{
		Dictionary_2_t309261261 * L_33 = ___matchInfo0;
		ContinuedTurnBasedMatch_t105333180  L_34;
		memset(&L_34, 0, sizeof(L_34));
		ContinuedTurnBasedMatch__ctor_m2740335165(&L_34, L_33, /*hidden argument*/NULL);
		Nullable_1_t2663366791  L_35;
		memset(&L_35, 0, sizeof(L_35));
		Nullable_1__ctor_m3735245154(&L_35, L_34, /*hidden argument*/Nullable_1__ctor_m3735245154_MethodInfo_var);
		__this->set_ContinueMatchData_17(L_35);
		return;
	}
}
// System.String SkillzSDK.TurnBasedMatch::ToString()
extern Il2CppClass* StringU5BU5D_t1642385972_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var;
extern Il2CppClass* TurnBasedRound_t994668268_il2cpp_TypeInfo_var;
extern Il2CppClass* Nullable_1_t334943763_il2cpp_TypeInfo_var;
extern Il2CppClass* Nullable_1_t412748336_il2cpp_TypeInfo_var;
extern Il2CppClass* Nullable_1_t2088641033_il2cpp_TypeInfo_var;
extern Il2CppClass* Nullable_1_t339576247_il2cpp_TypeInfo_var;
extern Il2CppClass* Player_t4162098741_il2cpp_TypeInfo_var;
extern Il2CppClass* Nullable_1_t2341081996_il2cpp_TypeInfo_var;
extern Il2CppClass* Nullable_1_t3251239280_il2cpp_TypeInfo_var;
extern Il2CppClass* Nullable_1_t2663366791_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m2456297074_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m4048655796_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m2641560888_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m2909389725_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m52089307_MethodInfo_var;
extern const MethodInfo* Enumerator_Dispose_m882561911_MethodInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m2761452841_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m1292923677_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m502949041_MethodInfo_var;
extern const MethodInfo* Enumerator_Dispose_m2691563289_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral371857150;
extern Il2CppCodeGenString* _stringLiteral372029310;
extern Il2CppCodeGenString* _stringLiteral811305496;
extern Il2CppCodeGenString* _stringLiteral372029399;
extern Il2CppCodeGenString* _stringLiteral811305553;
extern Il2CppCodeGenString* _stringLiteral4112252377;
extern Il2CppCodeGenString* _stringLiteral396133375;
extern Il2CppCodeGenString* _stringLiteral238043226;
extern Il2CppCodeGenString* _stringLiteral1351788097;
extern Il2CppCodeGenString* _stringLiteral1171304074;
extern Il2CppCodeGenString* _stringLiteral1274439131;
extern Il2CppCodeGenString* _stringLiteral721391243;
extern Il2CppCodeGenString* _stringLiteral1307038305;
extern Il2CppCodeGenString* _stringLiteral1026702230;
extern Il2CppCodeGenString* _stringLiteral1750594807;
extern Il2CppCodeGenString* _stringLiteral3244241880;
extern Il2CppCodeGenString* _stringLiteral1984335065;
extern Il2CppCodeGenString* _stringLiteral3511692715;
extern Il2CppCodeGenString* _stringLiteral4280142631;
extern Il2CppCodeGenString* _stringLiteral2111783455;
extern Il2CppCodeGenString* _stringLiteral509452301;
extern Il2CppCodeGenString* _stringLiteral486599140;
extern Il2CppCodeGenString* _stringLiteral4233767510;
extern Il2CppCodeGenString* _stringLiteral372029425;
extern const uint32_t TurnBasedMatch_ToString_m566102668_MetadataUsageId;
extern "C"  String_t* TurnBasedMatch_ToString_m566102668 (TurnBasedMatch_t1669686419 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TurnBasedMatch_ToString_m566102668_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	KeyValuePair_2_t1701344717  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Enumerator_t969056901  V_2;
	memset(&V_2, 0, sizeof(V_2));
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	TurnBasedRound_t994668268  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Enumerator_t4193486370  V_6;
	memset(&V_6, 0, sizeof(V_6));
	String_t* V_7 = NULL;
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = _stringLiteral371857150;
		Dictionary_2_t3943999495 * L_0 = ((Match_t3198203703 *)__this)->get_GameParams_5();
		NullCheck(L_0);
		Enumerator_t969056901  L_1 = Dictionary_2_GetEnumerator_m2456297074(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_m2456297074_MethodInfo_var);
		V_2 = L_1;
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0059;
		}

IL_0019:
		{
			KeyValuePair_2_t1701344717  L_2 = Enumerator_get_Current_m4048655796((&V_2), /*hidden argument*/Enumerator_get_Current_m4048655796_MethodInfo_var);
			V_1 = L_2;
			String_t* L_3 = V_0;
			V_3 = L_3;
			StringU5BU5D_t1642385972* L_4 = ((StringU5BU5D_t1642385972*)SZArrayNew(StringU5BU5D_t1642385972_il2cpp_TypeInfo_var, (uint32_t)5));
			String_t* L_5 = V_3;
			NullCheck(L_4);
			ArrayElementTypeCheck (L_4, L_5);
			(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_5);
			StringU5BU5D_t1642385972* L_6 = L_4;
			NullCheck(L_6);
			ArrayElementTypeCheck (L_6, _stringLiteral372029310);
			(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral372029310);
			StringU5BU5D_t1642385972* L_7 = L_6;
			String_t* L_8 = KeyValuePair_2_get_Key_m2641560888((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m2641560888_MethodInfo_var);
			NullCheck(L_7);
			ArrayElementTypeCheck (L_7, L_8);
			(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_8);
			StringU5BU5D_t1642385972* L_9 = L_7;
			NullCheck(L_9);
			ArrayElementTypeCheck (L_9, _stringLiteral811305496);
			(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral811305496);
			StringU5BU5D_t1642385972* L_10 = L_9;
			String_t* L_11 = KeyValuePair_2_get_Value_m2909389725((&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m2909389725_MethodInfo_var);
			NullCheck(L_10);
			ArrayElementTypeCheck (L_10, L_11);
			(L_10)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_11);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_12 = String_Concat_m626692867(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
			V_0 = L_12;
		}

IL_0059:
		{
			bool L_13 = Enumerator_MoveNext_m52089307((&V_2), /*hidden argument*/Enumerator_MoveNext_m52089307_MethodInfo_var);
			if (L_13)
			{
				goto IL_0019;
			}
		}

IL_0065:
		{
			IL2CPP_LEAVE(0x78, FINALLY_006a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_006a;
	}

FINALLY_006a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m882561911((&V_2), /*hidden argument*/Enumerator_Dispose_m882561911_MethodInfo_var);
		IL2CPP_END_FINALLY(106)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(106)
	{
		IL2CPP_JUMP_TBL(0x78, IL_0078)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_0078:
	{
		V_4 = _stringLiteral371857150;
		List_1_t363789400 * L_14 = __this->get_Rounds_15();
		NullCheck(L_14);
		Enumerator_t4193486370  L_15 = List_1_GetEnumerator_m2761452841(L_14, /*hidden argument*/List_1_GetEnumerator_m2761452841_MethodInfo_var);
		V_6 = L_15;
	}

IL_008d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00cb;
		}

IL_0092:
		{
			TurnBasedRound_t994668268  L_16 = Enumerator_get_Current_m1292923677((&V_6), /*hidden argument*/Enumerator_get_Current_m1292923677_MethodInfo_var);
			V_5 = L_16;
			String_t* L_17 = V_4;
			V_3 = L_17;
			ObjectU5BU5D_t3614634134* L_18 = ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)4));
			String_t* L_19 = V_3;
			NullCheck(L_18);
			ArrayElementTypeCheck (L_18, L_19);
			(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)L_19);
			ObjectU5BU5D_t3614634134* L_20 = L_18;
			NullCheck(L_20);
			ArrayElementTypeCheck (L_20, _stringLiteral372029399);
			(L_20)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)_stringLiteral372029399);
			ObjectU5BU5D_t3614634134* L_21 = L_20;
			TurnBasedRound_t994668268  L_22 = V_5;
			TurnBasedRound_t994668268  L_23 = L_22;
			Il2CppObject * L_24 = Box(TurnBasedRound_t994668268_il2cpp_TypeInfo_var, &L_23);
			NullCheck(L_21);
			ArrayElementTypeCheck (L_21, L_24);
			(L_21)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppObject *)L_24);
			ObjectU5BU5D_t3614634134* L_25 = L_21;
			NullCheck(L_25);
			ArrayElementTypeCheck (L_25, _stringLiteral811305553);
			(L_25)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppObject *)_stringLiteral811305553);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_26 = String_Concat_m3881798623(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
			V_4 = L_26;
		}

IL_00cb:
		{
			bool L_27 = Enumerator_MoveNext_m502949041((&V_6), /*hidden argument*/Enumerator_MoveNext_m502949041_MethodInfo_var);
			if (L_27)
			{
				goto IL_0092;
			}
		}

IL_00d7:
		{
			IL2CPP_LEAVE(0xEA, FINALLY_00dc);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_00dc;
	}

FINALLY_00dc:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2691563289((&V_6), /*hidden argument*/Enumerator_Dispose_m2691563289_MethodInfo_var);
		IL2CPP_END_FINALLY(220)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(220)
	{
		IL2CPP_JUMP_TBL(0xEA, IL_00ea)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_00ea:
	{
		ObjectU5BU5D_t3614634134* L_28 = ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)((int32_t)37)));
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, _stringLiteral4112252377);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)_stringLiteral4112252377);
		ObjectU5BU5D_t3614634134* L_29 = L_28;
		Nullable_1_t334943763  L_30 = ((Match_t3198203703 *)__this)->get_ID_2();
		Nullable_1_t334943763  L_31 = L_30;
		Il2CppObject * L_32 = Box(Nullable_1_t334943763_il2cpp_TypeInfo_var, &L_31);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_32);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_32);
		ObjectU5BU5D_t3614634134* L_33 = L_29;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, _stringLiteral396133375);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppObject *)_stringLiteral396133375);
		ObjectU5BU5D_t3614634134* L_34 = L_33;
		String_t* L_35 = ((Match_t3198203703 *)__this)->get_Name_0();
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_35);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppObject *)L_35);
		ObjectU5BU5D_t3614634134* L_36 = L_34;
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, _stringLiteral238043226);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(4), (Il2CppObject *)_stringLiteral238043226);
		ObjectU5BU5D_t3614634134* L_37 = L_36;
		String_t* L_38 = ((Match_t3198203703 *)__this)->get_Description_1();
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_38);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(5), (Il2CppObject *)L_38);
		ObjectU5BU5D_t3614634134* L_39 = L_37;
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, _stringLiteral1351788097);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(6), (Il2CppObject *)_stringLiteral1351788097);
		ObjectU5BU5D_t3614634134* L_40 = L_39;
		Nullable_1_t334943763  L_41 = ((Match_t3198203703 *)__this)->get_TemplateID_3();
		Nullable_1_t334943763  L_42 = L_41;
		Il2CppObject * L_43 = Box(Nullable_1_t334943763_il2cpp_TypeInfo_var, &L_42);
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_43);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(7), (Il2CppObject *)L_43);
		ObjectU5BU5D_t3614634134* L_44 = L_40;
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, _stringLiteral1171304074);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(8), (Il2CppObject *)_stringLiteral1171304074);
		ObjectU5BU5D_t3614634134* L_45 = L_44;
		Nullable_1_t412748336  L_46 = ((Match_t3198203703 *)__this)->get_SkillzDifficulty_4();
		Nullable_1_t412748336  L_47 = L_46;
		Il2CppObject * L_48 = Box(Nullable_1_t412748336_il2cpp_TypeInfo_var, &L_47);
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, L_48);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (Il2CppObject *)L_48);
		ObjectU5BU5D_t3614634134* L_49 = L_45;
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, _stringLiteral1274439131);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (Il2CppObject *)_stringLiteral1274439131);
		ObjectU5BU5D_t3614634134* L_50 = L_49;
		Nullable_1_t2088641033  L_51 = ((Match_t3198203703 *)__this)->get_IsCash_7();
		Nullable_1_t2088641033  L_52 = L_51;
		Il2CppObject * L_53 = Box(Nullable_1_t2088641033_il2cpp_TypeInfo_var, &L_52);
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, L_53);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (Il2CppObject *)L_53);
		ObjectU5BU5D_t3614634134* L_54 = L_50;
		NullCheck(L_54);
		ArrayElementTypeCheck (L_54, _stringLiteral721391243);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (Il2CppObject *)_stringLiteral721391243);
		ObjectU5BU5D_t3614634134* L_55 = L_54;
		Nullable_1_t334943763  L_56 = ((Match_t3198203703 *)__this)->get_EntryPoints_8();
		Nullable_1_t334943763  L_57 = L_56;
		Il2CppObject * L_58 = Box(Nullable_1_t334943763_il2cpp_TypeInfo_var, &L_57);
		NullCheck(L_55);
		ArrayElementTypeCheck (L_55, L_58);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (Il2CppObject *)L_58);
		ObjectU5BU5D_t3614634134* L_59 = L_55;
		NullCheck(L_59);
		ArrayElementTypeCheck (L_59, _stringLiteral1307038305);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (Il2CppObject *)_stringLiteral1307038305);
		ObjectU5BU5D_t3614634134* L_60 = L_59;
		Nullable_1_t339576247  L_61 = ((Match_t3198203703 *)__this)->get_EntryCash_9();
		Nullable_1_t339576247  L_62 = L_61;
		Il2CppObject * L_63 = Box(Nullable_1_t339576247_il2cpp_TypeInfo_var, &L_62);
		NullCheck(L_60);
		ArrayElementTypeCheck (L_60, L_63);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (Il2CppObject *)L_63);
		ObjectU5BU5D_t3614634134* L_64 = L_60;
		NullCheck(L_64);
		ArrayElementTypeCheck (L_64, _stringLiteral1026702230);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (Il2CppObject *)_stringLiteral1026702230);
		ObjectU5BU5D_t3614634134* L_65 = L_64;
		String_t* L_66 = V_0;
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, L_66);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (Il2CppObject *)L_66);
		ObjectU5BU5D_t3614634134* L_67 = L_65;
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, _stringLiteral1750594807);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (Il2CppObject *)_stringLiteral1750594807);
		ObjectU5BU5D_t3614634134* L_68 = L_67;
		Player_t4162098741  L_69 = ((Match_t3198203703 *)__this)->get_Player_6();
		Player_t4162098741  L_70 = L_69;
		Il2CppObject * L_71 = Box(Player_t4162098741_il2cpp_TypeInfo_var, &L_70);
		NullCheck(L_68);
		ArrayElementTypeCheck (L_68, L_71);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (Il2CppObject *)L_71);
		ObjectU5BU5D_t3614634134* L_72 = L_68;
		NullCheck(L_72);
		ArrayElementTypeCheck (L_72, _stringLiteral3244241880);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)20)), (Il2CppObject *)_stringLiteral3244241880);
		ObjectU5BU5D_t3614634134* L_73 = L_72;
		Nullable_1_t412748336  L_74 = __this->get_PrizeZ_10();
		Nullable_1_t412748336  L_75 = L_74;
		Il2CppObject * L_76 = Box(Nullable_1_t412748336_il2cpp_TypeInfo_var, &L_75);
		NullCheck(L_73);
		ArrayElementTypeCheck (L_73, L_76);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)21)), (Il2CppObject *)L_76);
		ObjectU5BU5D_t3614634134* L_77 = L_73;
		NullCheck(L_77);
		ArrayElementTypeCheck (L_77, _stringLiteral1984335065);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)22)), (Il2CppObject *)_stringLiteral1984335065);
		ObjectU5BU5D_t3614634134* L_78 = L_77;
		Nullable_1_t2341081996  L_79 = __this->get_PrizeCash_11();
		Nullable_1_t2341081996  L_80 = L_79;
		Il2CppObject * L_81 = Box(Nullable_1_t2341081996_il2cpp_TypeInfo_var, &L_80);
		NullCheck(L_78);
		ArrayElementTypeCheck (L_78, L_81);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)23)), (Il2CppObject *)L_81);
		ObjectU5BU5D_t3614634134* L_82 = L_78;
		NullCheck(L_82);
		ArrayElementTypeCheck (L_82, _stringLiteral3511692715);
		(L_82)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)24)), (Il2CppObject *)_stringLiteral3511692715);
		ObjectU5BU5D_t3614634134* L_83 = L_82;
		Nullable_1_t3251239280  L_84 = __this->get_TimeTournamentBegan_12();
		Nullable_1_t3251239280  L_85 = L_84;
		Il2CppObject * L_86 = Box(Nullable_1_t3251239280_il2cpp_TypeInfo_var, &L_85);
		NullCheck(L_83);
		ArrayElementTypeCheck (L_83, L_86);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)25)), (Il2CppObject *)L_86);
		ObjectU5BU5D_t3614634134* L_87 = L_83;
		NullCheck(L_87);
		ArrayElementTypeCheck (L_87, _stringLiteral4280142631);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)26)), (Il2CppObject *)_stringLiteral4280142631);
		ObjectU5BU5D_t3614634134* L_88 = L_87;
		Nullable_1_t3251239280  L_89 = __this->get_TimeLastTurnCompleted_13();
		Nullable_1_t3251239280  L_90 = L_89;
		Il2CppObject * L_91 = Box(Nullable_1_t3251239280_il2cpp_TypeInfo_var, &L_90);
		NullCheck(L_88);
		ArrayElementTypeCheck (L_88, L_91);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)27)), (Il2CppObject *)L_91);
		ObjectU5BU5D_t3614634134* L_92 = L_88;
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, _stringLiteral2111783455);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)28)), (Il2CppObject *)_stringLiteral2111783455);
		ObjectU5BU5D_t3614634134* L_93 = L_92;
		Nullable_1_t2088641033  L_94 = __this->get_IsMatchOver_14();
		Nullable_1_t2088641033  L_95 = L_94;
		Il2CppObject * L_96 = Box(Nullable_1_t2088641033_il2cpp_TypeInfo_var, &L_95);
		NullCheck(L_93);
		ArrayElementTypeCheck (L_93, L_96);
		(L_93)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)29)), (Il2CppObject *)L_96);
		ObjectU5BU5D_t3614634134* L_97 = L_93;
		NullCheck(L_97);
		ArrayElementTypeCheck (L_97, _stringLiteral509452301);
		(L_97)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)30)), (Il2CppObject *)_stringLiteral509452301);
		ObjectU5BU5D_t3614634134* L_98 = L_97;
		String_t* L_99 = V_4;
		NullCheck(L_98);
		ArrayElementTypeCheck (L_98, L_99);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)31)), (Il2CppObject *)L_99);
		ObjectU5BU5D_t3614634134* L_100 = L_98;
		NullCheck(L_100);
		ArrayElementTypeCheck (L_100, _stringLiteral486599140);
		(L_100)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)32)), (Il2CppObject *)_stringLiteral486599140);
		ObjectU5BU5D_t3614634134* L_101 = L_100;
		Nullable_1_t334943763  L_102 = __this->get_CurrentTurnIndex_16();
		Nullable_1_t334943763  L_103 = L_102;
		Il2CppObject * L_104 = Box(Nullable_1_t334943763_il2cpp_TypeInfo_var, &L_103);
		NullCheck(L_101);
		ArrayElementTypeCheck (L_101, L_104);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)33)), (Il2CppObject *)L_104);
		ObjectU5BU5D_t3614634134* L_105 = L_101;
		NullCheck(L_105);
		ArrayElementTypeCheck (L_105, _stringLiteral4233767510);
		(L_105)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)34)), (Il2CppObject *)_stringLiteral4233767510);
		ObjectU5BU5D_t3614634134* L_106 = L_105;
		Nullable_1_t2663366791  L_107 = __this->get_ContinueMatchData_17();
		Nullable_1_t2663366791  L_108 = L_107;
		Il2CppObject * L_109 = Box(Nullable_1_t2663366791_il2cpp_TypeInfo_var, &L_108);
		NullCheck(L_106);
		ArrayElementTypeCheck (L_106, L_109);
		(L_106)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)35)), (Il2CppObject *)L_109);
		ObjectU5BU5D_t3614634134* L_110 = L_106;
		NullCheck(L_110);
		ArrayElementTypeCheck (L_110, _stringLiteral372029425);
		(L_110)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)36)), (Il2CppObject *)_stringLiteral372029425);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_111 = String_Concat_m3881798623(NULL /*static, unused*/, L_110, /*hidden argument*/NULL);
		V_7 = L_111;
		goto IL_0290;
	}

IL_0290:
	{
		String_t* L_112 = V_7;
		return L_112;
	}
}
// System.UInt32 SkillzSDK.TurnBasedMatch::get_PlayerID()
extern const MethodInfo* Nullable_1_get_HasValue_m373321800_MethodInfo_var;
extern const MethodInfo* Nullable_1_get_Value_m1489477262_MethodInfo_var;
extern const uint32_t TurnBasedMatch_get_PlayerID_m2914890867_MetadataUsageId;
extern "C"  uint32_t TurnBasedMatch_get_PlayerID_m2914890867 (TurnBasedMatch_t1669686419 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TurnBasedMatch_get_PlayerID_m2914890867_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Player_t4162098741  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Nullable_1_t412748336  V_1;
	memset(&V_1, 0, sizeof(V_1));
	uint32_t V_2 = 0;
	uint32_t G_B3_0 = 0;
	{
		Player_t4162098741  L_0 = ((Match_t3198203703 *)__this)->get_Player_6();
		V_0 = L_0;
		Nullable_1_t412748336  L_1 = (&V_0)->get_ID_1();
		V_1 = L_1;
		bool L_2 = Nullable_1_get_HasValue_m373321800((&V_1), /*hidden argument*/Nullable_1_get_HasValue_m373321800_MethodInfo_var);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		uint32_t L_3 = Nullable_1_get_Value_m1489477262((&V_1), /*hidden argument*/Nullable_1_get_Value_m1489477262_MethodInfo_var);
		G_B3_0 = L_3;
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = ((uint32_t)(0));
	}

IL_0029:
	{
		V_2 = G_B3_0;
		goto IL_002f;
	}

IL_002f:
	{
		uint32_t L_4 = V_2;
		return L_4;
	}
}
// System.String SkillzSDK.TurnBasedMatch::get_PlayerDisplayName()
extern Il2CppCodeGenString* _stringLiteral371857150;
extern const uint32_t TurnBasedMatch_get_PlayerDisplayName_m682683457_MetadataUsageId;
extern "C"  String_t* TurnBasedMatch_get_PlayerDisplayName_m682683457 (TurnBasedMatch_t1669686419 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TurnBasedMatch_get_PlayerDisplayName_m682683457_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Player_t4162098741  V_0;
	memset(&V_0, 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		Player_t4162098741  L_0 = ((Match_t3198203703 *)__this)->get_Player_6();
		V_0 = L_0;
		String_t* L_1 = (&V_0)->get_DisplayName_0();
		String_t* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_001b;
		}
	}
	{
		G_B2_0 = _stringLiteral371857150;
	}

IL_001b:
	{
		V_1 = G_B2_0;
		goto IL_0021;
	}

IL_0021:
	{
		String_t* L_3 = V_1;
		return L_3;
	}
}
// System.String SkillzSDK.TurnBasedMatch::get_PlayerAvatarURL()
extern Il2CppCodeGenString* _stringLiteral371857150;
extern const uint32_t TurnBasedMatch_get_PlayerAvatarURL_m475469296_MetadataUsageId;
extern "C"  String_t* TurnBasedMatch_get_PlayerAvatarURL_m475469296 (TurnBasedMatch_t1669686419 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TurnBasedMatch_get_PlayerAvatarURL_m475469296_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Player_t4162098741  V_0;
	memset(&V_0, 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		Player_t4162098741  L_0 = ((Match_t3198203703 *)__this)->get_Player_6();
		V_0 = L_0;
		String_t* L_1 = (&V_0)->get_AvatarURL_2();
		String_t* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_001b;
		}
	}
	{
		G_B2_0 = _stringLiteral371857150;
	}

IL_001b:
	{
		V_1 = G_B2_0;
		goto IL_0021;
	}

IL_0021:
	{
		String_t* L_3 = V_1;
		return L_3;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> SkillzSDK.TurnBasedMatch::get_TournamentParams()
extern "C"  Dictionary_2_t3943999495 * TurnBasedMatch_get_TournamentParams_m58436287 (TurnBasedMatch_t1669686419 * __this, const MethodInfo* method)
{
	Dictionary_2_t3943999495 * V_0 = NULL;
	{
		Dictionary_2_t3943999495 * L_0 = ((Match_t3198203703 *)__this)->get_GameParams_5();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Dictionary_2_t3943999495 * L_1 = V_0;
		return L_1;
	}
}
// System.Void SkillzSDK.TurnBasedRound::.ctor(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern const MethodInfo* Nullable_1_get_HasValue_m373321800_MethodInfo_var;
extern const MethodInfo* Nullable_1_get_Value_m1489477262_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral1769959045;
extern Il2CppCodeGenString* _stringLiteral2556528999;
extern Il2CppCodeGenString* _stringLiteral3340977734;
extern const uint32_t TurnBasedRound__ctor_m1944947777_MetadataUsageId;
extern "C"  void TurnBasedRound__ctor_m1944947777 (TurnBasedRound_t994668268 * __this, Dictionary_2_t309261261 * ___dict0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TurnBasedRound__ctor_m1944947777_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t412748336  V_0;
	memset(&V_0, 0, sizeof(V_0));
	uint32_t V_1 = 0;
	{
		Dictionary_2_t309261261 * L_0 = ___dict0;
		Nullable_1_t2341081996  L_1 = SkillzExtensions_SafeGetDoubleValue_m3582278033(NULL /*static, unused*/, L_0, _stringLiteral1769959045, /*hidden argument*/NULL);
		__this->set_OpponentRoundScore_1(L_1);
		Dictionary_2_t309261261 * L_2 = ___dict0;
		Nullable_1_t2341081996  L_3 = SkillzExtensions_SafeGetDoubleValue_m3582278033(NULL /*static, unused*/, L_2, _stringLiteral2556528999, /*hidden argument*/NULL);
		__this->set_MyRoundScore_2(L_3);
		Dictionary_2_t309261261 * L_4 = ___dict0;
		Nullable_1_t412748336  L_5 = SkillzExtensions_SafeGetUintValue_m657502786(NULL /*static, unused*/, L_4, _stringLiteral3340977734, /*hidden argument*/NULL);
		V_0 = L_5;
		bool L_6 = Nullable_1_get_HasValue_m373321800((&V_0), /*hidden argument*/Nullable_1_get_HasValue_m373321800_MethodInfo_var);
		if (!((((int32_t)L_6) == ((int32_t)0))? 1 : 0))
		{
			goto IL_004c;
		}
	}
	{
		__this->set_Outcome_0(3);
		goto IL_00b1;
	}

IL_004c:
	{
		bool L_7 = Nullable_1_get_HasValue_m373321800((&V_0), /*hidden argument*/Nullable_1_get_HasValue_m373321800_MethodInfo_var);
		if (!L_7)
		{
			goto IL_00a4;
		}
	}
	{
		uint32_t L_8 = Nullable_1_get_Value_m1489477262((&V_0), /*hidden argument*/Nullable_1_get_Value_m1489477262_MethodInfo_var);
		V_1 = L_8;
		uint32_t L_9 = V_1;
		if (L_9 == 0)
		{
			goto IL_0080;
		}
		if (L_9 == 1)
		{
			goto IL_008c;
		}
		if (L_9 == 2)
		{
			goto IL_0098;
		}
		if (L_9 == 3)
		{
			goto IL_00a4;
		}
		if (L_9 == 4)
		{
			goto IL_00a4;
		}
	}
	{
		goto IL_00a4;
	}

IL_0080:
	{
		__this->set_Outcome_0(0);
		goto IL_00b0;
	}

IL_008c:
	{
		__this->set_Outcome_0(1);
		goto IL_00b0;
	}

IL_0098:
	{
		__this->set_Outcome_0(2);
		goto IL_00b0;
	}

IL_00a4:
	{
		__this->set_Outcome_0(3);
		goto IL_00b0;
	}

IL_00b0:
	{
	}

IL_00b1:
	{
		return;
	}
}
extern "C"  void TurnBasedRound__ctor_m1944947777_AdjustorThunk (Il2CppObject * __this, Dictionary_2_t309261261 * ___dict0, const MethodInfo* method)
{
	TurnBasedRound_t994668268 * _thisAdjusted = reinterpret_cast<TurnBasedRound_t994668268 *>(__this + 1);
	TurnBasedRound__ctor_m1944947777(_thisAdjusted, ___dict0, method);
}
// System.String SkillzSDK.TurnBasedRound::ToString()
extern Il2CppClass* ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var;
extern Il2CppClass* Nullable_1_t2341081996_il2cpp_TypeInfo_var;
extern Il2CppClass* TurnBasedRoundOutcome_t4169257086_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3575918831;
extern Il2CppCodeGenString* _stringLiteral1186933331;
extern Il2CppCodeGenString* _stringLiteral3935904836;
extern Il2CppCodeGenString* _stringLiteral372029425;
extern const uint32_t TurnBasedRound_ToString_m1265966985_MetadataUsageId;
extern "C"  String_t* TurnBasedRound_ToString_m1265966985 (TurnBasedRound_t994668268 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TurnBasedRound_ToString_m1265966985_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t3614634134* L_0 = ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)7));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral3575918831);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)_stringLiteral3575918831);
		ObjectU5BU5D_t3614634134* L_1 = L_0;
		Nullable_1_t2341081996  L_2 = __this->get_MyRoundScore_2();
		Nullable_1_t2341081996  L_3 = L_2;
		Il2CppObject * L_4 = Box(Nullable_1_t2341081996_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_4);
		ObjectU5BU5D_t3614634134* L_5 = L_1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral1186933331);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppObject *)_stringLiteral1186933331);
		ObjectU5BU5D_t3614634134* L_6 = L_5;
		Nullable_1_t2341081996  L_7 = __this->get_OpponentRoundScore_1();
		Nullable_1_t2341081996  L_8 = L_7;
		Il2CppObject * L_9 = Box(Nullable_1_t2341081996_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppObject *)L_9);
		ObjectU5BU5D_t3614634134* L_10 = L_6;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral3935904836);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(4), (Il2CppObject *)_stringLiteral3935904836);
		ObjectU5BU5D_t3614634134* L_11 = L_10;
		int32_t L_12 = __this->get_Outcome_0();
		int32_t L_13 = L_12;
		Il2CppObject * L_14 = Box(TurnBasedRoundOutcome_t4169257086_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (Il2CppObject *)L_14);
		ObjectU5BU5D_t3614634134* L_15 = L_11;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral372029425);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(6), (Il2CppObject *)_stringLiteral372029425);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Concat_m3881798623(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_005c;
	}

IL_005c:
	{
		String_t* L_17 = V_0;
		return L_17;
	}
}
extern "C"  String_t* TurnBasedRound_ToString_m1265966985_AdjustorThunk (Il2CppObject * __this, const MethodInfo* method)
{
	TurnBasedRound_t994668268 * _thisAdjusted = reinterpret_cast<TurnBasedRound_t994668268 *>(__this + 1);
	return TurnBasedRound_ToString_m1265966985(_thisAdjusted, method);
}
// Conversion methods for marshalling of: SkillzSDK.TurnBasedRound
extern "C" void TurnBasedRound_t994668268_marshal_pinvoke(const TurnBasedRound_t994668268& unmarshaled, TurnBasedRound_t994668268_marshaled_pinvoke& marshaled)
{
	Il2CppCodeGenException* ___OpponentRoundScore_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'OpponentRoundScore' of type 'TurnBasedRound'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___OpponentRoundScore_1Exception);
}
extern "C" void TurnBasedRound_t994668268_marshal_pinvoke_back(const TurnBasedRound_t994668268_marshaled_pinvoke& marshaled, TurnBasedRound_t994668268& unmarshaled)
{
	Il2CppCodeGenException* ___OpponentRoundScore_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'OpponentRoundScore' of type 'TurnBasedRound'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___OpponentRoundScore_1Exception);
}
// Conversion method for clean up from marshalling of: SkillzSDK.TurnBasedRound
extern "C" void TurnBasedRound_t994668268_marshal_pinvoke_cleanup(TurnBasedRound_t994668268_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: SkillzSDK.TurnBasedRound
extern "C" void TurnBasedRound_t994668268_marshal_com(const TurnBasedRound_t994668268& unmarshaled, TurnBasedRound_t994668268_marshaled_com& marshaled)
{
	Il2CppCodeGenException* ___OpponentRoundScore_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'OpponentRoundScore' of type 'TurnBasedRound'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___OpponentRoundScore_1Exception);
}
extern "C" void TurnBasedRound_t994668268_marshal_com_back(const TurnBasedRound_t994668268_marshaled_com& marshaled, TurnBasedRound_t994668268& unmarshaled)
{
	Il2CppCodeGenException* ___OpponentRoundScore_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'OpponentRoundScore' of type 'TurnBasedRound'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___OpponentRoundScore_1Exception);
}
// Conversion method for clean up from marshalling of: SkillzSDK.TurnBasedRound
extern "C" void TurnBasedRound_t994668268_marshal_com_cleanup(TurnBasedRound_t994668268_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

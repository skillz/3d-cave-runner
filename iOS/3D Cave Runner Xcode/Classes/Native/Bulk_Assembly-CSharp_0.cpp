﻿#include "il2cpp-config.h"

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

// MyDelegateBase
struct MyDelegateBase_t1053717880;
// MyDelegateStandard
struct MyDelegateStandard_t1766615652;
// SkillzSDK.Match
struct Match_t3198203703;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214MethodDeclarations.h"
#include "AssemblyU2DCSharp_MyDelegateBase1053717880.h"
#include "AssemblyU2DCSharp_MyDelegateBase1053717880MethodDeclarations.h"
#include "mscorlib_System_Void1841601450.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SkillzSDK_SkillzDele2433258543MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Application354826772MethodDeclarations.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_MyDelegateStandard1766615652.h"
#include "AssemblyU2DCSharp_MyDelegateStandard1766615652MethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SkillzSDK_SkillzDele2914650099MethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SkillzSDK_Match3198203703.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_g3943999495.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MyDelegateBase::.ctor()
extern "C"  void MyDelegateBase__ctor_m1630137489 (MyDelegateBase_t1053717880 * __this, const MethodInfo* method)
{
	{
		SkillzDelegateBase__ctor_m2097145993(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MyDelegateBase::OnSkillzWillExit()
extern Il2CppCodeGenString* _stringLiteral2858725202;
extern const uint32_t MyDelegateBase_OnSkillzWillExit_m1257785593_MetadataUsageId;
extern "C"  void MyDelegateBase_OnSkillzWillExit_m1257785593 (MyDelegateBase_t1053717880 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MyDelegateBase_OnSkillzWillExit_m1257785593_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Application_LoadLevel_m393995325(NULL /*static, unused*/, _stringLiteral2858725202, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MyDelegateStandard::.ctor()
extern "C"  void MyDelegateStandard__ctor_m3334492963 (MyDelegateStandard_t1766615652 * __this, const MethodInfo* method)
{
	{
		SkillzDelegateStandard__ctor_m2552137287(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MyDelegateStandard::OnTournamentWillBegin(SkillzSDK.Match)
extern Il2CppCodeGenString* _stringLiteral2328218740;
extern const uint32_t MyDelegateStandard_OnTournamentWillBegin_m3139439550_MetadataUsageId;
extern "C"  void MyDelegateStandard_OnTournamentWillBegin_m3139439550 (MyDelegateStandard_t1766615652 * __this, Match_t3198203703 * ___match0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MyDelegateStandard_OnTournamentWillBegin_m3139439550_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t3943999495 * V_0 = NULL;
	{
		Match_t3198203703 * L_0 = ___match0;
		NullCheck(L_0);
		Dictionary_2_t3943999495 * L_1 = L_0->get_GameParams_5();
		V_0 = L_1;
		Application_LoadLevel_m393995325(NULL /*static, unused*/, _stringLiteral2328218740, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

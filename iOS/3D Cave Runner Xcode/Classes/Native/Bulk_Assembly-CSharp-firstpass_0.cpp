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
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// GameSceneManager
struct GameSceneManager_t2999297734;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// System.String
struct String_t;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t32045322;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t4131667876;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// SkillzDelegate
struct SkillzDelegate_t3178178617;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Object
struct Object_t631007953;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2865362463;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// SkillzSDK.Player
struct Player_t2961656996;
// System.Type
struct Type_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// SkillzSDK.Match
struct Match_t1925635937;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t1632706988;
// System.String[]
struct StringU5BU5D_t1281789340;
// SkillzSDK.MiniJSON.Json/Parser
struct Parser_t744090300;
// System.IO.StringReader
struct StringReader_t3465604688;
// System.IO.TextReader
struct TextReader_t283511965;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Globalization.CultureInfo
struct CultureInfo_t4157843068;
// System.IFormatProvider
struct IFormatProvider_t2518567562;
// SkillzSDK.MiniJSON.Json/Serializer
struct Serializer_t2308540583;
// System.Collections.IList
struct IList_t2094931216;
// SkillzSDK.SkillzDelegateBase
struct SkillzDelegateBase_t1468035564;
// SkillzSDK.SkillzDelegateTurnBased
struct SkillzDelegateTurnBased_t453936421;
// SkillzSDK.TurnBasedMatch
struct TurnBasedMatch_t2355453244;
// System.Collections.Generic.List`1<SkillzSDK.TurnBasedRound>
struct List_1_t2705874203;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.Collections.DictionaryEntry>
struct Transform_1_t1694351041;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.Collections.DictionaryEntry>
struct Transform_1_t132201056;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t435877138;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t2405853701;
// System.Globalization.TextInfo
struct TextInfo_t3810425522;
// System.Globalization.CompareInfo
struct CompareInfo_t1092934962;
// System.Globalization.Calendar[]
struct CalendarU5BU5D_t3985046076;
// System.Globalization.Calendar
struct Calendar_t1661121569;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Int32
struct Int32_t2950945753;
// System.Void
struct Void_t1185182177;
// SkillzSDK.TurnBasedRound[]
struct TurnBasedRoundU5BU5D_t3854040232;
// System.Collections.Hashtable/Slot[]
struct SlotU5BU5D_t2994659099;
// System.Collections.Hashtable/HashKeys
struct HashKeys_t1568156503;
// System.Collections.Hashtable/HashValues
struct HashValues_t618387445;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t267601189;
// System.Collections.IComparer
struct IComparer_t1540313114;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t1493878338;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t3225273728;
// System.Byte
struct Byte_t1134296376;
// System.Double
struct Double_t594665363;
// System.UInt16
struct UInt16_t2177724958;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;

extern RuntimeClass* GameSceneManager_t2999297734_il2cpp_TypeInfo_var;
extern const uint32_t GameSceneManager_OnApplicationPause_m2616752940_MetadataUsageId;
extern const uint32_t GameSceneManager_GetPrevScene_m2997470641_MetadataUsageId;
extern const uint32_t GameSceneManager_SetPrevScene_m3694103869_MetadataUsageId;
extern String_t* _stringLiteral1002639002;
extern const uint32_t GameSceneManager__cctor_m4189588096_MetadataUsageId;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2004037916;
extern const uint32_t Skillz_Launch_m3673327423_MetadataUsageId;
extern const RuntimeMethod* AndroidJavaObject_CallStatic_TisBoolean_t97287965_m4111307719_RuntimeMethod_var;
extern String_t* _stringLiteral919935400;
extern const uint32_t Skillz_IsMatchInProgress_m3063185030_MetadataUsageId;
extern RuntimeClass* Hashtable_t1853889766_il2cpp_TypeInfo_var;
extern const RuntimeMethod* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t4131667876_m2031442458_RuntimeMethod_var;
extern const RuntimeMethod* AndroidJavaObject_Call_TisAndroidJavaObject_t4131667876_m2649654213_RuntimeMethod_var;
extern const RuntimeMethod* AndroidJavaObject_Call_TisString_t_m1899832687_RuntimeMethod_var;
extern const RuntimeMethod* AndroidJavaObject_Call_TisBoolean_t97287965_m948263851_RuntimeMethod_var;
extern String_t* _stringLiteral238343282;
extern String_t* _stringLiteral477167485;
extern String_t* _stringLiteral2970134904;
extern String_t* _stringLiteral3987835844;
extern String_t* _stringLiteral3808803602;
extern String_t* _stringLiteral1755624995;
extern String_t* _stringLiteral2465423926;
extern const uint32_t Skillz_GetMatchRules_m2415021141_MetadataUsageId;
extern String_t* _stringLiteral3390440049;
extern const uint32_t Skillz_AbortMatch_m566335097_MetadataUsageId;
extern RuntimeClass* AndroidJavaObject_t4131667876_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1721169208;
extern String_t* _stringLiteral1353950911;
extern const uint32_t Skillz_UpdatePlayersCurrentScore_m257371438_MetadataUsageId;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern const uint32_t Skillz_UpdatePlayersCurrentScore_m3743257856_MetadataUsageId;
extern const uint32_t Skillz_UpdatePlayersCurrentScore_m2959754337_MetadataUsageId;
extern String_t* _stringLiteral1714618831;
extern const uint32_t Skillz_ReportScore_m3895707234_MetadataUsageId;
extern const uint32_t Skillz_ReportScore_m2273239404_MetadataUsageId;
extern const uint32_t Skillz_ReportScore_m1217323751_MetadataUsageId;
extern RuntimeClass* Boolean_t97287965_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1798820815;
extern const uint32_t Skillz_AddMetadataForMatchInProgress_m2758983296_MetadataUsageId;
extern const RuntimeMethod* AndroidJavaObject_CallStatic_TisString_t_m3599693027_RuntimeMethod_var;
extern String_t* _stringLiteral4204234082;
extern const uint32_t Skillz_SDKVersionShort_m1202112188_MetadataUsageId;
extern String_t* _stringLiteral3068533840;
extern const uint32_t Skillz_CurrentUserDisplayName_m1258831207_MetadataUsageId;
extern RuntimeClass* AndroidJavaClass_t32045322_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2747799586;
extern const uint32_t Skillz_GetSkillz_m1754260856_MetadataUsageId;
extern const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t4131667876_m1414442298_RuntimeMethod_var;
extern String_t* _stringLiteral2149247999;
extern String_t* _stringLiteral3452315504;
extern const uint32_t Skillz_GetCurrentActivity_m1705205339_MetadataUsageId;
extern String_t* _stringLiteral2261821926;
extern String_t* _stringLiteral4186487569;
extern const uint32_t Player_GetId_m3058628368_MetadataUsageId;
extern String_t* _stringLiteral3398431868;
extern const uint32_t Player_GetAvatarUrl_m2658549551_MetadataUsageId;
extern String_t* _stringLiteral1396822555;
extern const uint32_t Player_GetFlagUrl_m668577164_MetadataUsageId;
extern const RuntimeMethod* AndroidJavaObject_Call_TisSingle_t1397266774_m1436156811_RuntimeMethod_var;
extern String_t* _stringLiteral4294067722;
extern String_t* _stringLiteral1778944692;
extern const uint32_t Random_Value_m3600019517_MetadataUsageId;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern const uint32_t Random_InsideUnitSphere_m1723542434_MetadataUsageId;
extern const uint32_t Random_InsideUnitCircle_m3376432988_MetadataUsageId;
extern const uint32_t Random_OnUnitSphere_m2777744284_MetadataUsageId;
extern const uint32_t Random_RotationUniform_m1635932153_MetadataUsageId;
extern const uint32_t SkillzCrossPlatform_GetSkillz_m1312181533_MetadataUsageId;
extern const RuntimeMethod* Nullable_1_ToString_m1639120067_RuntimeMethod_var;
extern const uint32_t Player_GetId_m721593025_MetadataUsageId;
extern const uint32_t Random_InsideUnitSphere_m3158642049_MetadataUsageId;
extern const uint32_t Random_InsideUnitCircle_m1205585536_MetadataUsageId;
extern const uint32_t Random_OnUnitSphere_m1681403655_MetadataUsageId;
extern const uint32_t Random_RotationUniform_m2440073649_MetadataUsageId;
extern String_t* _stringLiteral62725234;
extern const uint32_t SkillzDelegate_OnMatchWillBegin_m2359423314_MetadataUsageId;
extern String_t* _stringLiteral2707269980;
extern const uint32_t SkillzDelegate_OnSkillzWillExit_m4049406625_MetadataUsageId;
extern RuntimeClass* SkillzDelegate_t3178178617_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern const uint32_t SkillzDelegate_Awake_m2407513439_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1518127339;
extern String_t* _stringLiteral3875954633;
extern String_t* _stringLiteral4002445229;
extern String_t* _stringLiteral69044786;
extern String_t* _stringLiteral817137886;
extern String_t* _stringLiteral2902724446;
extern const uint32_t SkillzDelegate_AndroidInitialize_m2855825067_MetadataUsageId;
extern const uint32_t SkillzDelegate_GetSkillzPreferences_m862293494_MetadataUsageId;
extern const uint32_t SkillzDelegate_GetCurrentActivity_m2769826294_MetadataUsageId;
extern RuntimeClass* Marshal_t1757017490_il2cpp_TypeInfo_var;
extern const uint32_t Api_get_Player_m3819377184_MetadataUsageId;
extern const uint32_t Api_get_SDKVersionShort_m3300381882_MetadataUsageId;
extern String_t* _stringLiteral3573203357;
extern String_t* _stringLiteral3443696199;
extern String_t* _stringLiteral1330767061;
extern const uint32_t Api_Initialize_m1562849269_MetadataUsageId;
extern String_t* _stringLiteral2996089877;
extern const uint32_t Api_LaunchSkillz_m3695930818_MetadataUsageId;
extern RuntimeClass* TurnBasedRoundOutcome_t235959152_il2cpp_TypeInfo_var;
extern RuntimeClass* TurnBasedMatchOutcome_t1929616948_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral4011663913;
extern String_t* _stringLiteral2594243837;
extern const uint32_t Api_FinishTurn_m1359245850_MetadataUsageId;
extern const uint32_t Api_GetMatchRules_m1004458514_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t2865362463_il2cpp_TypeInfo_var;
extern const uint32_t Api_DeserializeJSONToDictionary_m2968966310_MetadataUsageId;
extern const uint32_t Random_InsideUnitSphere_m1273973450_MetadataUsageId;
extern const uint32_t Random_InsideUnitCircle_m1942269933_MetadataUsageId;
extern const uint32_t Random_OnUnitSphere_m1006952296_MetadataUsageId;
extern const uint32_t Random_RotationUniform_m2406981108_MetadataUsageId;
struct Player_t2961656996_marshaled_pinvoke;
struct Player_t2961656996;;
struct Player_t2961656996_marshaled_pinvoke;;
struct Player_t2961656996_marshaled_com;
struct Player_t2961656996_marshaled_com;;
extern const RuntimeType* Dictionary_2_t2865362463_0_0_0_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3705954998;
extern String_t* _stringLiteral2332988269;
extern String_t* _stringLiteral3398487231;
extern const uint32_t ContinuedTurnBasedMatch__ctor_m3686691244_MetadataUsageId;
extern RuntimeClass* Nullable_1_t2317227445_il2cpp_TypeInfo_var;
extern RuntimeClass* Player_t2961656996_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1367093446;
extern String_t* _stringLiteral3714965605;
extern String_t* _stringLiteral1690536272;
extern String_t* _stringLiteral967426173;
extern String_t* _stringLiteral3452614643;
extern const uint32_t ContinuedTurnBasedMatch_ToString_m1925674645_MetadataUsageId;
extern const uint32_t ContinuedTurnBasedMatch_get_OpponentAvatarURL_m951854446_MetadataUsageId;
extern const uint32_t ContinuedTurnBasedMatch_get_OpponentDisplayName_m3190551676_MetadataUsageId;
extern const RuntimeMethod* Nullable_1_get_HasValue_m1763782828_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_get_Value_m1994738269_RuntimeMethod_var;
extern const uint32_t ContinuedTurnBasedMatch_get_OpponentUniqueID_m1460019975_MetadataUsageId;
extern String_t* _stringLiteral4002445261;
extern String_t* _stringLiteral3875955625;
extern String_t* _stringLiteral3452614543;
extern String_t* _stringLiteral3452614544;
extern const uint32_t SkillzExtensions_SafeGetBoolValue_m2039874569_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m1520683221_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m3179620279_RuntimeMethod_var;
extern const uint32_t SkillzExtensions_SafeGetValue_m1149006436_MetadataUsageId;
extern const RuntimeMethod* Nullable_1__ctor_m269558965_RuntimeMethod_var;
extern const uint32_t Helpers_SafeBoolParse_m4269993608_MetadataUsageId;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Nullable_1_get_HasValue_m1700900799_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_get_Value_m3507161817_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1__ctor_m3556066642_RuntimeMethod_var;
extern const uint32_t Helpers_SafeParseUnixTime_m1673506953_MetadataUsageId;
extern const RuntimeMethod* Nullable_1__ctor_m1383724426_RuntimeMethod_var;
extern const uint32_t Helpers_SafeDoubleParse_m3716186029_MetadataUsageId;
extern const RuntimeMethod* Nullable_1__ctor_m3556133687_RuntimeMethod_var;
extern const uint32_t Helpers_SafeIntParse_m1084147332_MetadataUsageId;
extern const RuntimeMethod* Nullable_1__ctor_m2245710918_RuntimeMethod_var;
extern const uint32_t Helpers_SafeUintParse_m2387950348_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t1632706988_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Nullable_1__ctor_m2775392932_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m4291560139_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_GetEnumerator_m788364790_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m687346582_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m436157746_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m1405741725_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m2958530770_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m597713471_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m2607424534_RuntimeMethod_var;
extern String_t* _stringLiteral3324580424;
extern String_t* _stringLiteral1596949038;
extern String_t* _stringLiteral1839984739;
extern String_t* _stringLiteral3454449607;
extern String_t* _stringLiteral988376447;
extern String_t* _stringLiteral62725243;
extern String_t* _stringLiteral1720450795;
extern String_t* _stringLiteral135315692;
extern String_t* _stringLiteral2293145220;
extern const uint32_t Match__ctor_m3021370963_MetadataUsageId;
extern RuntimeClass* StringU5BU5D_t1281789340_il2cpp_TypeInfo_var;
extern RuntimeClass* Nullable_1_t378540539_il2cpp_TypeInfo_var;
extern RuntimeClass* Nullable_1_t4282624060_il2cpp_TypeInfo_var;
extern RuntimeClass* Nullable_1_t1819850047_il2cpp_TypeInfo_var;
extern RuntimeClass* Nullable_1_t3119828856_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2_GetEnumerator_m260861070_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m2519371089_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m3980750512_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m2243990694_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m1175750522_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m2198401511_RuntimeMethod_var;
extern String_t* _stringLiteral3452614528;
extern String_t* _stringLiteral3450517398;
extern String_t* _stringLiteral3070787003;
extern String_t* _stringLiteral3159449611;
extern String_t* _stringLiteral992829410;
extern String_t* _stringLiteral1247249208;
extern String_t* _stringLiteral2912928911;
extern String_t* _stringLiteral3489731131;
extern String_t* _stringLiteral1304305895;
extern String_t* _stringLiteral3163162291;
extern String_t* _stringLiteral2305604390;
extern String_t* _stringLiteral3806938157;
extern const uint32_t Match_ToString_m1621100561_MetadataUsageId;
extern RuntimeClass* StringReader_t3465604688_il2cpp_TypeInfo_var;
extern const uint32_t Parser__ctor_m2872727206_MetadataUsageId;
extern RuntimeClass* Char_t3634460470_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1482762766;
extern const uint32_t Parser_IsWordBreak_m502866020_MetadataUsageId;
extern RuntimeClass* Parser_t744090300_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern const uint32_t Parser_Parse_m579644997_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2__ctor_m3962145734_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m2329160973_RuntimeMethod_var;
extern const uint32_t Parser_ParseObject_m2337980612_MetadataUsageId;
extern RuntimeClass* List_1_t257213610_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m2321703786_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m3338814081_RuntimeMethod_var;
extern const uint32_t Parser_ParseArray_m452367317_MetadataUsageId;
extern const uint32_t Parser_ParseByToken_m3089833922_MetadataUsageId;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern RuntimeClass* CharU5BU5D_t3528271667_il2cpp_TypeInfo_var;
extern RuntimeClass* Convert_t2465617642_il2cpp_TypeInfo_var;
extern const uint32_t Parser_ParseString_m2447585359_MetadataUsageId;
extern RuntimeClass* CultureInfo_t4157843068_il2cpp_TypeInfo_var;
extern RuntimeClass* Int64_t3736567304_il2cpp_TypeInfo_var;
extern RuntimeClass* Double_t594665363_il2cpp_TypeInfo_var;
extern const uint32_t Parser_ParseNumber_m2559473348_MetadataUsageId;
extern const uint32_t Parser_EatWhitespace_m1572341284_MetadataUsageId;
extern const uint32_t Parser_get_PeekChar_m1352524934_MetadataUsageId;
extern const uint32_t Parser_get_NextChar_m3195442849_MetadataUsageId;
extern const uint32_t Parser_get_NextWord_m2019659234_MetadataUsageId;
extern String_t* _stringLiteral1202628576;
extern const uint32_t Parser_get_NextToken_m3456563509_MetadataUsageId;
extern const uint32_t Serializer__ctor_m3762600030_MetadataUsageId;
extern RuntimeClass* Serializer_t2308540583_il2cpp_TypeInfo_var;
extern const uint32_t Serializer_Serialize_m3997990965_MetadataUsageId;
extern RuntimeClass* IList_t2094931216_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_t1363984059_il2cpp_TypeInfo_var;
extern const uint32_t Serializer_SerializeValue_m686405948_MetadataUsageId;
extern RuntimeClass* IEnumerable_t1941168011_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern const uint32_t Serializer_SerializeObject_m3682694325_MetadataUsageId;
extern const uint32_t Serializer_SerializeArray_m1201005993_MetadataUsageId;
extern String_t* _stringLiteral3450386420;
extern String_t* _stringLiteral3458119668;
extern String_t* _stringLiteral3454580724;
extern String_t* _stringLiteral3454318580;
extern String_t* _stringLiteral3454842868;
extern String_t* _stringLiteral3455629300;
extern String_t* _stringLiteral3455498228;
extern String_t* _stringLiteral3455432692;
extern String_t* _stringLiteral3451303896;
extern const uint32_t Serializer_SerializeString_m4252171944_MetadataUsageId;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt32_t2560061978_il2cpp_TypeInfo_var;
extern RuntimeClass* SByte_t1669577662_il2cpp_TypeInfo_var;
extern RuntimeClass* Byte_t1134296376_il2cpp_TypeInfo_var;
extern RuntimeClass* Int16_t2552820387_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt16_t2177724958_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt64_t4134040092_il2cpp_TypeInfo_var;
extern RuntimeClass* Decimal_t2948259380_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3452614638;
extern const uint32_t Serializer_SerializeOther_m1045354682_MetadataUsageId;
extern String_t* _stringLiteral2186314903;
extern String_t* _stringLiteral3226725044;
extern String_t* _stringLiteral241366642;
extern const uint32_t Player__ctor_m2866643626_MetadataUsageId;
extern String_t* _stringLiteral3435626159;
extern String_t* _stringLiteral3969381551;
extern String_t* _stringLiteral3320620591;
extern String_t* _stringLiteral1025240796;
extern const uint32_t Player_ToString_m4275545513_MetadataUsageId;
extern const RuntimeType* List_1_t257213610_0_0_0_var;
extern RuntimeClass* List_1_t2705874203_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m402830882_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m2930774921_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m470245444_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1731145970_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m2142368520_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m3007748546_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1__ctor_m3660700179_RuntimeMethod_var;
extern String_t* _stringLiteral2905464034;
extern String_t* _stringLiteral1291135618;
extern String_t* _stringLiteral62147769;
extern String_t* _stringLiteral2172021066;
extern String_t* _stringLiteral3431335447;
extern String_t* _stringLiteral2035437214;
extern String_t* _stringLiteral2119036461;
extern const uint32_t TurnBasedMatch__ctor_m2093759627_MetadataUsageId;
extern RuntimeClass* TurnBasedRound_t1233799461_il2cpp_TypeInfo_var;
extern RuntimeClass* Nullable_1_t1166124571_il2cpp_TypeInfo_var;
extern RuntimeClass* Nullable_1_t1192268148_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_GetEnumerator_m4100385154_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m3229262329_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m3624477067_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m1156375690_RuntimeMethod_var;
extern String_t* _stringLiteral3452614613;
extern String_t* _stringLiteral3450517459;
extern String_t* _stringLiteral995527479;
extern String_t* _stringLiteral1571535424;
extern String_t* _stringLiteral1686285278;
extern String_t* _stringLiteral3276876123;
extern String_t* _stringLiteral4246042434;
extern String_t* _stringLiteral2022270018;
extern String_t* _stringLiteral2416228878;
extern String_t* _stringLiteral218638185;
extern String_t* _stringLiteral1800660722;
extern const uint32_t TurnBasedMatch_ToString_m3968764345_MetadataUsageId;
extern const uint32_t TurnBasedMatch_get_PlayerID_m740634712_MetadataUsageId;
extern const uint32_t TurnBasedMatch_get_PlayerDisplayName_m280910283_MetadataUsageId;
extern const uint32_t TurnBasedMatch_get_PlayerAvatarURL_m536938902_MetadataUsageId;
extern String_t* _stringLiteral1936663027;
extern String_t* _stringLiteral1003644178;
extern String_t* _stringLiteral2513803938;
extern const uint32_t TurnBasedRound__ctor_m164100429_MetadataUsageId;
extern String_t* _stringLiteral1490736252;
extern String_t* _stringLiteral1388720723;
extern String_t* _stringLiteral1125965648;
extern const uint32_t TurnBasedRound_ToString_m2659950938_MetadataUsageId;

struct ObjectU5BU5D_t2843939325;
struct StringU5BU5D_t1281789340;
struct CharU5BU5D_t3528271667;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef U3CMODULEU3E_T692745542_H
#define U3CMODULEU3E_T692745542_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745542 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745542_H
#ifndef API_T3979125197_H
#define API_T3979125197_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SkillzSDK.Api
struct  Api_t3979125197  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // API_T3979125197_H
#ifndef DICTIONARY_2_T2865362463_H
#define DICTIONARY_2_T2865362463_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct  Dictionary_2_t2865362463  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	ObjectU5BU5D_t2843939325* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___valueSlots_7)); }
	inline ObjectU5BU5D_t2843939325* get_valueSlots_7() const { return ___valueSlots_7; }
	inline ObjectU5BU5D_t2843939325** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(ObjectU5BU5D_t2843939325* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t2865362463_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t1694351041 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t1694351041 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t1694351041 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t1694351041 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2865362463_H
#ifndef RANDOM_T2925929201_H
#define RANDOM_T2925929201_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SkillzSDK.Api/Random
struct  Random_t2925929201  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOM_T2925929201_H
#ifndef SKILLZEXTENSIONS_T3448093338_H
#define SKILLZEXTENSIONS_T3448093338_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SkillzSDK.Extensions.SkillzExtensions
struct  SkillzExtensions_t3448093338  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SKILLZEXTENSIONS_T3448093338_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef DICTIONARY_2_T1632706988_H
#define DICTIONARY_2_T1632706988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct  Dictionary_2_t1632706988  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	StringU5BU5D_t1281789340* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___valueSlots_7)); }
	inline StringU5BU5D_t1281789340* get_valueSlots_7() const { return ___valueSlots_7; }
	inline StringU5BU5D_t1281789340** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(StringU5BU5D_t1281789340* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t1632706988_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t132201056 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t132201056 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t132201056 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t132201056 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T1632706988_H
#ifndef JSON_T312688538_H
#define JSON_T312688538_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SkillzSDK.MiniJSON.Json
struct  Json_t312688538  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSON_T312688538_H
#ifndef PARSER_T744090300_H
#define PARSER_T744090300_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SkillzSDK.MiniJSON.Json/Parser
struct  Parser_t744090300  : public RuntimeObject
{
public:
	// System.IO.StringReader SkillzSDK.MiniJSON.Json/Parser::json
	StringReader_t3465604688 * ___json_1;

public:
	inline static int32_t get_offset_of_json_1() { return static_cast<int32_t>(offsetof(Parser_t744090300, ___json_1)); }
	inline StringReader_t3465604688 * get_json_1() const { return ___json_1; }
	inline StringReader_t3465604688 ** get_address_of_json_1() { return &___json_1; }
	inline void set_json_1(StringReader_t3465604688 * value)
	{
		___json_1 = value;
		Il2CppCodeGenWriteBarrier((&___json_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARSER_T744090300_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef TEXTREADER_T283511965_H
#define TEXTREADER_T283511965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextReader
struct  TextReader_t283511965  : public RuntimeObject
{
public:

public:
};

struct TextReader_t283511965_StaticFields
{
public:
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t283511965 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(TextReader_t283511965_StaticFields, ___Null_0)); }
	inline TextReader_t283511965 * get_Null_0() const { return ___Null_0; }
	inline TextReader_t283511965 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(TextReader_t283511965 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTREADER_T283511965_H
#ifndef LIST_1_T257213610_H
#define LIST_1_T257213610_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Object>
struct  List_1_t257213610  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t2843939325* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____items_1)); }
	inline ObjectU5BU5D_t2843939325* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t2843939325** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t2843939325* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t257213610_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ObjectU5BU5D_t2843939325* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t257213610_StaticFields, ___EmptyArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T257213610_H
#ifndef STRINGBUILDER_T_H
#define STRINGBUILDER_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Int32 System.Text.StringBuilder::_length
	int32_t ____length_1;
	// System.String System.Text.StringBuilder::_str
	String_t* ____str_2;
	// System.String System.Text.StringBuilder::_cached_str
	String_t* ____cached_str_3;
	// System.Int32 System.Text.StringBuilder::_maxCapacity
	int32_t ____maxCapacity_4;

public:
	inline static int32_t get_offset_of__length_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____length_1)); }
	inline int32_t get__length_1() const { return ____length_1; }
	inline int32_t* get_address_of__length_1() { return &____length_1; }
	inline void set__length_1(int32_t value)
	{
		____length_1 = value;
	}

	inline static int32_t get_offset_of__str_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____str_2)); }
	inline String_t* get__str_2() const { return ____str_2; }
	inline String_t** get_address_of__str_2() { return &____str_2; }
	inline void set__str_2(String_t* value)
	{
		____str_2 = value;
		Il2CppCodeGenWriteBarrier((&____str_2), value);
	}

	inline static int32_t get_offset_of__cached_str_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____cached_str_3)); }
	inline String_t* get__cached_str_3() const { return ____cached_str_3; }
	inline String_t** get_address_of__cached_str_3() { return &____cached_str_3; }
	inline void set__cached_str_3(String_t* value)
	{
		____cached_str_3 = value;
		Il2CppCodeGenWriteBarrier((&____cached_str_3), value);
	}

	inline static int32_t get_offset_of__maxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____maxCapacity_4)); }
	inline int32_t get__maxCapacity_4() const { return ____maxCapacity_4; }
	inline int32_t* get_address_of__maxCapacity_4() { return &____maxCapacity_4; }
	inline void set__maxCapacity_4(int32_t value)
	{
		____maxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
#ifndef CULTUREINFO_T4157843068_H
#define CULTUREINFO_T4157843068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CultureInfo
struct  CultureInfo_t4157843068  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_7;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_8;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_9;
	// System.Int32 System.Globalization.CultureInfo::specific_lcid
	int32_t ___specific_lcid_10;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_11;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_12;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_13;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t435877138 * ___numInfo_14;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t2405853701 * ___dateTimeInfo_15;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t3810425522 * ___textInfo_16;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_17;
	// System.String System.Globalization.CultureInfo::displayname
	String_t* ___displayname_18;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_19;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_20;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_21;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_22;
	// System.String System.Globalization.CultureInfo::icu_name
	String_t* ___icu_name_23;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_24;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_25;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1092934962 * ___compareInfo_26;
	// System.Int32* System.Globalization.CultureInfo::calendar_data
	int32_t* ___calendar_data_27;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_28;
	// System.Globalization.Calendar[] System.Globalization.CultureInfo::optional_calendars
	CalendarU5BU5D_t3985046076* ___optional_calendars_29;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t4157843068 * ___parent_culture_30;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_31;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t1661121569 * ___calendar_32;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_33;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_t4116647657* ___cached_serialized_form_34;

public:
	inline static int32_t get_offset_of_m_isReadOnly_7() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_isReadOnly_7)); }
	inline bool get_m_isReadOnly_7() const { return ___m_isReadOnly_7; }
	inline bool* get_address_of_m_isReadOnly_7() { return &___m_isReadOnly_7; }
	inline void set_m_isReadOnly_7(bool value)
	{
		___m_isReadOnly_7 = value;
	}

	inline static int32_t get_offset_of_cultureID_8() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cultureID_8)); }
	inline int32_t get_cultureID_8() const { return ___cultureID_8; }
	inline int32_t* get_address_of_cultureID_8() { return &___cultureID_8; }
	inline void set_cultureID_8(int32_t value)
	{
		___cultureID_8 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_9() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_lcid_9)); }
	inline int32_t get_parent_lcid_9() const { return ___parent_lcid_9; }
	inline int32_t* get_address_of_parent_lcid_9() { return &___parent_lcid_9; }
	inline void set_parent_lcid_9(int32_t value)
	{
		___parent_lcid_9 = value;
	}

	inline static int32_t get_offset_of_specific_lcid_10() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___specific_lcid_10)); }
	inline int32_t get_specific_lcid_10() const { return ___specific_lcid_10; }
	inline int32_t* get_address_of_specific_lcid_10() { return &___specific_lcid_10; }
	inline void set_specific_lcid_10(int32_t value)
	{
		___specific_lcid_10 = value;
	}

	inline static int32_t get_offset_of_datetime_index_11() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___datetime_index_11)); }
	inline int32_t get_datetime_index_11() const { return ___datetime_index_11; }
	inline int32_t* get_address_of_datetime_index_11() { return &___datetime_index_11; }
	inline void set_datetime_index_11(int32_t value)
	{
		___datetime_index_11 = value;
	}

	inline static int32_t get_offset_of_number_index_12() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___number_index_12)); }
	inline int32_t get_number_index_12() const { return ___number_index_12; }
	inline int32_t* get_address_of_number_index_12() { return &___number_index_12; }
	inline void set_number_index_12(int32_t value)
	{
		___number_index_12 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_13() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_useUserOverride_13)); }
	inline bool get_m_useUserOverride_13() const { return ___m_useUserOverride_13; }
	inline bool* get_address_of_m_useUserOverride_13() { return &___m_useUserOverride_13; }
	inline void set_m_useUserOverride_13(bool value)
	{
		___m_useUserOverride_13 = value;
	}

	inline static int32_t get_offset_of_numInfo_14() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___numInfo_14)); }
	inline NumberFormatInfo_t435877138 * get_numInfo_14() const { return ___numInfo_14; }
	inline NumberFormatInfo_t435877138 ** get_address_of_numInfo_14() { return &___numInfo_14; }
	inline void set_numInfo_14(NumberFormatInfo_t435877138 * value)
	{
		___numInfo_14 = value;
		Il2CppCodeGenWriteBarrier((&___numInfo_14), value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_15() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___dateTimeInfo_15)); }
	inline DateTimeFormatInfo_t2405853701 * get_dateTimeInfo_15() const { return ___dateTimeInfo_15; }
	inline DateTimeFormatInfo_t2405853701 ** get_address_of_dateTimeInfo_15() { return &___dateTimeInfo_15; }
	inline void set_dateTimeInfo_15(DateTimeFormatInfo_t2405853701 * value)
	{
		___dateTimeInfo_15 = value;
		Il2CppCodeGenWriteBarrier((&___dateTimeInfo_15), value);
	}

	inline static int32_t get_offset_of_textInfo_16() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textInfo_16)); }
	inline TextInfo_t3810425522 * get_textInfo_16() const { return ___textInfo_16; }
	inline TextInfo_t3810425522 ** get_address_of_textInfo_16() { return &___textInfo_16; }
	inline void set_textInfo_16(TextInfo_t3810425522 * value)
	{
		___textInfo_16 = value;
		Il2CppCodeGenWriteBarrier((&___textInfo_16), value);
	}

	inline static int32_t get_offset_of_m_name_17() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_name_17)); }
	inline String_t* get_m_name_17() const { return ___m_name_17; }
	inline String_t** get_address_of_m_name_17() { return &___m_name_17; }
	inline void set_m_name_17(String_t* value)
	{
		___m_name_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_17), value);
	}

	inline static int32_t get_offset_of_displayname_18() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___displayname_18)); }
	inline String_t* get_displayname_18() const { return ___displayname_18; }
	inline String_t** get_address_of_displayname_18() { return &___displayname_18; }
	inline void set_displayname_18(String_t* value)
	{
		___displayname_18 = value;
		Il2CppCodeGenWriteBarrier((&___displayname_18), value);
	}

	inline static int32_t get_offset_of_englishname_19() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___englishname_19)); }
	inline String_t* get_englishname_19() const { return ___englishname_19; }
	inline String_t** get_address_of_englishname_19() { return &___englishname_19; }
	inline void set_englishname_19(String_t* value)
	{
		___englishname_19 = value;
		Il2CppCodeGenWriteBarrier((&___englishname_19), value);
	}

	inline static int32_t get_offset_of_nativename_20() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___nativename_20)); }
	inline String_t* get_nativename_20() const { return ___nativename_20; }
	inline String_t** get_address_of_nativename_20() { return &___nativename_20; }
	inline void set_nativename_20(String_t* value)
	{
		___nativename_20 = value;
		Il2CppCodeGenWriteBarrier((&___nativename_20), value);
	}

	inline static int32_t get_offset_of_iso3lang_21() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso3lang_21)); }
	inline String_t* get_iso3lang_21() const { return ___iso3lang_21; }
	inline String_t** get_address_of_iso3lang_21() { return &___iso3lang_21; }
	inline void set_iso3lang_21(String_t* value)
	{
		___iso3lang_21 = value;
		Il2CppCodeGenWriteBarrier((&___iso3lang_21), value);
	}

	inline static int32_t get_offset_of_iso2lang_22() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso2lang_22)); }
	inline String_t* get_iso2lang_22() const { return ___iso2lang_22; }
	inline String_t** get_address_of_iso2lang_22() { return &___iso2lang_22; }
	inline void set_iso2lang_22(String_t* value)
	{
		___iso2lang_22 = value;
		Il2CppCodeGenWriteBarrier((&___iso2lang_22), value);
	}

	inline static int32_t get_offset_of_icu_name_23() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___icu_name_23)); }
	inline String_t* get_icu_name_23() const { return ___icu_name_23; }
	inline String_t** get_address_of_icu_name_23() { return &___icu_name_23; }
	inline void set_icu_name_23(String_t* value)
	{
		___icu_name_23 = value;
		Il2CppCodeGenWriteBarrier((&___icu_name_23), value);
	}

	inline static int32_t get_offset_of_win3lang_24() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___win3lang_24)); }
	inline String_t* get_win3lang_24() const { return ___win3lang_24; }
	inline String_t** get_address_of_win3lang_24() { return &___win3lang_24; }
	inline void set_win3lang_24(String_t* value)
	{
		___win3lang_24 = value;
		Il2CppCodeGenWriteBarrier((&___win3lang_24), value);
	}

	inline static int32_t get_offset_of_territory_25() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___territory_25)); }
	inline String_t* get_territory_25() const { return ___territory_25; }
	inline String_t** get_address_of_territory_25() { return &___territory_25; }
	inline void set_territory_25(String_t* value)
	{
		___territory_25 = value;
		Il2CppCodeGenWriteBarrier((&___territory_25), value);
	}

	inline static int32_t get_offset_of_compareInfo_26() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___compareInfo_26)); }
	inline CompareInfo_t1092934962 * get_compareInfo_26() const { return ___compareInfo_26; }
	inline CompareInfo_t1092934962 ** get_address_of_compareInfo_26() { return &___compareInfo_26; }
	inline void set_compareInfo_26(CompareInfo_t1092934962 * value)
	{
		___compareInfo_26 = value;
		Il2CppCodeGenWriteBarrier((&___compareInfo_26), value);
	}

	inline static int32_t get_offset_of_calendar_data_27() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___calendar_data_27)); }
	inline int32_t* get_calendar_data_27() const { return ___calendar_data_27; }
	inline int32_t** get_address_of_calendar_data_27() { return &___calendar_data_27; }
	inline void set_calendar_data_27(int32_t* value)
	{
		___calendar_data_27 = value;
	}

	inline static int32_t get_offset_of_textinfo_data_28() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textinfo_data_28)); }
	inline void* get_textinfo_data_28() const { return ___textinfo_data_28; }
	inline void** get_address_of_textinfo_data_28() { return &___textinfo_data_28; }
	inline void set_textinfo_data_28(void* value)
	{
		___textinfo_data_28 = value;
	}

	inline static int32_t get_offset_of_optional_calendars_29() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___optional_calendars_29)); }
	inline CalendarU5BU5D_t3985046076* get_optional_calendars_29() const { return ___optional_calendars_29; }
	inline CalendarU5BU5D_t3985046076** get_address_of_optional_calendars_29() { return &___optional_calendars_29; }
	inline void set_optional_calendars_29(CalendarU5BU5D_t3985046076* value)
	{
		___optional_calendars_29 = value;
		Il2CppCodeGenWriteBarrier((&___optional_calendars_29), value);
	}

	inline static int32_t get_offset_of_parent_culture_30() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_culture_30)); }
	inline CultureInfo_t4157843068 * get_parent_culture_30() const { return ___parent_culture_30; }
	inline CultureInfo_t4157843068 ** get_address_of_parent_culture_30() { return &___parent_culture_30; }
	inline void set_parent_culture_30(CultureInfo_t4157843068 * value)
	{
		___parent_culture_30 = value;
		Il2CppCodeGenWriteBarrier((&___parent_culture_30), value);
	}

	inline static int32_t get_offset_of_m_dataItem_31() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_dataItem_31)); }
	inline int32_t get_m_dataItem_31() const { return ___m_dataItem_31; }
	inline int32_t* get_address_of_m_dataItem_31() { return &___m_dataItem_31; }
	inline void set_m_dataItem_31(int32_t value)
	{
		___m_dataItem_31 = value;
	}

	inline static int32_t get_offset_of_calendar_32() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___calendar_32)); }
	inline Calendar_t1661121569 * get_calendar_32() const { return ___calendar_32; }
	inline Calendar_t1661121569 ** get_address_of_calendar_32() { return &___calendar_32; }
	inline void set_calendar_32(Calendar_t1661121569 * value)
	{
		___calendar_32 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_32), value);
	}

	inline static int32_t get_offset_of_constructed_33() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___constructed_33)); }
	inline bool get_constructed_33() const { return ___constructed_33; }
	inline bool* get_address_of_constructed_33() { return &___constructed_33; }
	inline void set_constructed_33(bool value)
	{
		___constructed_33 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_34() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cached_serialized_form_34)); }
	inline ByteU5BU5D_t4116647657* get_cached_serialized_form_34() const { return ___cached_serialized_form_34; }
	inline ByteU5BU5D_t4116647657** get_address_of_cached_serialized_form_34() { return &___cached_serialized_form_34; }
	inline void set_cached_serialized_form_34(ByteU5BU5D_t4116647657* value)
	{
		___cached_serialized_form_34 = value;
		Il2CppCodeGenWriteBarrier((&___cached_serialized_form_34), value);
	}
};

struct CultureInfo_t4157843068_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t4157843068 * ___invariant_culture_info_4;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_5;
	// System.Int32 System.Globalization.CultureInfo::BootstrapCultureID
	int32_t ___BootstrapCultureID_6;
	// System.String System.Globalization.CultureInfo::MSG_READONLY
	String_t* ___MSG_READONLY_35;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_number
	Hashtable_t1853889766 * ___shared_by_number_36;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_name
	Hashtable_t1853889766 * ___shared_by_name_37;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map19
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map19_38;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map1A
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map1A_39;

public:
	inline static int32_t get_offset_of_invariant_culture_info_4() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___invariant_culture_info_4)); }
	inline CultureInfo_t4157843068 * get_invariant_culture_info_4() const { return ___invariant_culture_info_4; }
	inline CultureInfo_t4157843068 ** get_address_of_invariant_culture_info_4() { return &___invariant_culture_info_4; }
	inline void set_invariant_culture_info_4(CultureInfo_t4157843068 * value)
	{
		___invariant_culture_info_4 = value;
		Il2CppCodeGenWriteBarrier((&___invariant_culture_info_4), value);
	}

	inline static int32_t get_offset_of_shared_table_lock_5() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_table_lock_5)); }
	inline RuntimeObject * get_shared_table_lock_5() const { return ___shared_table_lock_5; }
	inline RuntimeObject ** get_address_of_shared_table_lock_5() { return &___shared_table_lock_5; }
	inline void set_shared_table_lock_5(RuntimeObject * value)
	{
		___shared_table_lock_5 = value;
		Il2CppCodeGenWriteBarrier((&___shared_table_lock_5), value);
	}

	inline static int32_t get_offset_of_BootstrapCultureID_6() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___BootstrapCultureID_6)); }
	inline int32_t get_BootstrapCultureID_6() const { return ___BootstrapCultureID_6; }
	inline int32_t* get_address_of_BootstrapCultureID_6() { return &___BootstrapCultureID_6; }
	inline void set_BootstrapCultureID_6(int32_t value)
	{
		___BootstrapCultureID_6 = value;
	}

	inline static int32_t get_offset_of_MSG_READONLY_35() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___MSG_READONLY_35)); }
	inline String_t* get_MSG_READONLY_35() const { return ___MSG_READONLY_35; }
	inline String_t** get_address_of_MSG_READONLY_35() { return &___MSG_READONLY_35; }
	inline void set_MSG_READONLY_35(String_t* value)
	{
		___MSG_READONLY_35 = value;
		Il2CppCodeGenWriteBarrier((&___MSG_READONLY_35), value);
	}

	inline static int32_t get_offset_of_shared_by_number_36() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_number_36)); }
	inline Hashtable_t1853889766 * get_shared_by_number_36() const { return ___shared_by_number_36; }
	inline Hashtable_t1853889766 ** get_address_of_shared_by_number_36() { return &___shared_by_number_36; }
	inline void set_shared_by_number_36(Hashtable_t1853889766 * value)
	{
		___shared_by_number_36 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_number_36), value);
	}

	inline static int32_t get_offset_of_shared_by_name_37() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_name_37)); }
	inline Hashtable_t1853889766 * get_shared_by_name_37() const { return ___shared_by_name_37; }
	inline Hashtable_t1853889766 ** get_address_of_shared_by_name_37() { return &___shared_by_name_37; }
	inline void set_shared_by_name_37(Hashtable_t1853889766 * value)
	{
		___shared_by_name_37 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_name_37), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map19_38() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___U3CU3Ef__switchU24map19_38)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map19_38() const { return ___U3CU3Ef__switchU24map19_38; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map19_38() { return &___U3CU3Ef__switchU24map19_38; }
	inline void set_U3CU3Ef__switchU24map19_38(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map19_38 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map19_38), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1A_39() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___U3CU3Ef__switchU24map1A_39)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map1A_39() const { return ___U3CU3Ef__switchU24map1A_39; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map1A_39() { return &___U3CU3Ef__switchU24map1A_39; }
	inline void set_U3CU3Ef__switchU24map1A_39(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map1A_39 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1A_39), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFO_T4157843068_H
#ifndef SERIALIZER_T2308540583_H
#define SERIALIZER_T2308540583_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SkillzSDK.MiniJSON.Json/Serializer
struct  Serializer_t2308540583  : public RuntimeObject
{
public:
	// System.Text.StringBuilder SkillzSDK.MiniJSON.Json/Serializer::builder
	StringBuilder_t * ___builder_0;

public:
	inline static int32_t get_offset_of_builder_0() { return static_cast<int32_t>(offsetof(Serializer_t2308540583, ___builder_0)); }
	inline StringBuilder_t * get_builder_0() const { return ___builder_0; }
	inline StringBuilder_t ** get_address_of_builder_0() { return &___builder_0; }
	inline void set_builder_0(StringBuilder_t * value)
	{
		___builder_0 = value;
		Il2CppCodeGenWriteBarrier((&___builder_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZER_T2308540583_H
#ifndef LIST_1_T2705874203_H
#define LIST_1_T2705874203_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<SkillzSDK.TurnBasedRound>
struct  List_1_t2705874203  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TurnBasedRoundU5BU5D_t3854040232* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2705874203, ____items_1)); }
	inline TurnBasedRoundU5BU5D_t3854040232* get__items_1() const { return ____items_1; }
	inline TurnBasedRoundU5BU5D_t3854040232** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TurnBasedRoundU5BU5D_t3854040232* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2705874203, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2705874203, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2705874203_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	TurnBasedRoundU5BU5D_t3854040232* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2705874203_StaticFields, ___EmptyArray_4)); }
	inline TurnBasedRoundU5BU5D_t3854040232* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline TurnBasedRoundU5BU5D_t3854040232** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(TurnBasedRoundU5BU5D_t3854040232* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2705874203_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef RANDOM_T3648619896_H
#define RANDOM_T3648619896_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SkillzCrossPlatform/Random
struct  Random_t3648619896  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOM_T3648619896_H
#ifndef PLAYER_T2153297533_H
#define PLAYER_T2153297533_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SkillzCrossPlatform/Player
struct  Player_t2153297533  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYER_T2153297533_H
#ifndef HELPERS_T100173483_H
#define HELPERS_T100173483_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SkillzSDK.Helpers
struct  Helpers_t100173483  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HELPERS_T100173483_H
#ifndef PLAYER_T3463356010_H
#define PLAYER_T3463356010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Skillz/Player
struct  Player_t3463356010  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYER_T3463356010_H
#ifndef SKILLZCROSSPLATFORM_T176633252_H
#define SKILLZCROSSPLATFORM_T176633252_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SkillzCrossPlatform
struct  SkillzCrossPlatform_t176633252  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SKILLZCROSSPLATFORM_T176633252_H
#ifndef HASHTABLE_T1853889766_H
#define HASHTABLE_T1853889766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable
struct  Hashtable_t1853889766  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.Hashtable::inUse
	int32_t ___inUse_1;
	// System.Int32 System.Collections.Hashtable::modificationCount
	int32_t ___modificationCount_2;
	// System.Single System.Collections.Hashtable::loadFactor
	float ___loadFactor_3;
	// System.Collections.Hashtable/Slot[] System.Collections.Hashtable::table
	SlotU5BU5D_t2994659099* ___table_4;
	// System.Int32[] System.Collections.Hashtable::hashes
	Int32U5BU5D_t385246372* ___hashes_5;
	// System.Int32 System.Collections.Hashtable::threshold
	int32_t ___threshold_6;
	// System.Collections.Hashtable/HashKeys System.Collections.Hashtable::hashKeys
	HashKeys_t1568156503 * ___hashKeys_7;
	// System.Collections.Hashtable/HashValues System.Collections.Hashtable::hashValues
	HashValues_t618387445 * ___hashValues_8;
	// System.Collections.IHashCodeProvider System.Collections.Hashtable::hcpRef
	RuntimeObject* ___hcpRef_9;
	// System.Collections.IComparer System.Collections.Hashtable::comparerRef
	RuntimeObject* ___comparerRef_10;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Hashtable::serializationInfo
	SerializationInfo_t950877179 * ___serializationInfo_11;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::equalityComparer
	RuntimeObject* ___equalityComparer_12;

public:
	inline static int32_t get_offset_of_inUse_1() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___inUse_1)); }
	inline int32_t get_inUse_1() const { return ___inUse_1; }
	inline int32_t* get_address_of_inUse_1() { return &___inUse_1; }
	inline void set_inUse_1(int32_t value)
	{
		___inUse_1 = value;
	}

	inline static int32_t get_offset_of_modificationCount_2() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___modificationCount_2)); }
	inline int32_t get_modificationCount_2() const { return ___modificationCount_2; }
	inline int32_t* get_address_of_modificationCount_2() { return &___modificationCount_2; }
	inline void set_modificationCount_2(int32_t value)
	{
		___modificationCount_2 = value;
	}

	inline static int32_t get_offset_of_loadFactor_3() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___loadFactor_3)); }
	inline float get_loadFactor_3() const { return ___loadFactor_3; }
	inline float* get_address_of_loadFactor_3() { return &___loadFactor_3; }
	inline void set_loadFactor_3(float value)
	{
		___loadFactor_3 = value;
	}

	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___table_4)); }
	inline SlotU5BU5D_t2994659099* get_table_4() const { return ___table_4; }
	inline SlotU5BU5D_t2994659099** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(SlotU5BU5D_t2994659099* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_hashes_5() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___hashes_5)); }
	inline Int32U5BU5D_t385246372* get_hashes_5() const { return ___hashes_5; }
	inline Int32U5BU5D_t385246372** get_address_of_hashes_5() { return &___hashes_5; }
	inline void set_hashes_5(Int32U5BU5D_t385246372* value)
	{
		___hashes_5 = value;
		Il2CppCodeGenWriteBarrier((&___hashes_5), value);
	}

	inline static int32_t get_offset_of_threshold_6() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___threshold_6)); }
	inline int32_t get_threshold_6() const { return ___threshold_6; }
	inline int32_t* get_address_of_threshold_6() { return &___threshold_6; }
	inline void set_threshold_6(int32_t value)
	{
		___threshold_6 = value;
	}

	inline static int32_t get_offset_of_hashKeys_7() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___hashKeys_7)); }
	inline HashKeys_t1568156503 * get_hashKeys_7() const { return ___hashKeys_7; }
	inline HashKeys_t1568156503 ** get_address_of_hashKeys_7() { return &___hashKeys_7; }
	inline void set_hashKeys_7(HashKeys_t1568156503 * value)
	{
		___hashKeys_7 = value;
		Il2CppCodeGenWriteBarrier((&___hashKeys_7), value);
	}

	inline static int32_t get_offset_of_hashValues_8() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___hashValues_8)); }
	inline HashValues_t618387445 * get_hashValues_8() const { return ___hashValues_8; }
	inline HashValues_t618387445 ** get_address_of_hashValues_8() { return &___hashValues_8; }
	inline void set_hashValues_8(HashValues_t618387445 * value)
	{
		___hashValues_8 = value;
		Il2CppCodeGenWriteBarrier((&___hashValues_8), value);
	}

	inline static int32_t get_offset_of_hcpRef_9() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___hcpRef_9)); }
	inline RuntimeObject* get_hcpRef_9() const { return ___hcpRef_9; }
	inline RuntimeObject** get_address_of_hcpRef_9() { return &___hcpRef_9; }
	inline void set_hcpRef_9(RuntimeObject* value)
	{
		___hcpRef_9 = value;
		Il2CppCodeGenWriteBarrier((&___hcpRef_9), value);
	}

	inline static int32_t get_offset_of_comparerRef_10() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___comparerRef_10)); }
	inline RuntimeObject* get_comparerRef_10() const { return ___comparerRef_10; }
	inline RuntimeObject** get_address_of_comparerRef_10() { return &___comparerRef_10; }
	inline void set_comparerRef_10(RuntimeObject* value)
	{
		___comparerRef_10 = value;
		Il2CppCodeGenWriteBarrier((&___comparerRef_10), value);
	}

	inline static int32_t get_offset_of_serializationInfo_11() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___serializationInfo_11)); }
	inline SerializationInfo_t950877179 * get_serializationInfo_11() const { return ___serializationInfo_11; }
	inline SerializationInfo_t950877179 ** get_address_of_serializationInfo_11() { return &___serializationInfo_11; }
	inline void set_serializationInfo_11(SerializationInfo_t950877179 * value)
	{
		___serializationInfo_11 = value;
		Il2CppCodeGenWriteBarrier((&___serializationInfo_11), value);
	}

	inline static int32_t get_offset_of_equalityComparer_12() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___equalityComparer_12)); }
	inline RuntimeObject* get_equalityComparer_12() const { return ___equalityComparer_12; }
	inline RuntimeObject** get_address_of_equalityComparer_12() { return &___equalityComparer_12; }
	inline void set_equalityComparer_12(RuntimeObject* value)
	{
		___equalityComparer_12 = value;
		Il2CppCodeGenWriteBarrier((&___equalityComparer_12), value);
	}
};

struct Hashtable_t1853889766_StaticFields
{
public:
	// System.Int32[] System.Collections.Hashtable::primeTbl
	Int32U5BU5D_t385246372* ___primeTbl_13;

public:
	inline static int32_t get_offset_of_primeTbl_13() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766_StaticFields, ___primeTbl_13)); }
	inline Int32U5BU5D_t385246372* get_primeTbl_13() const { return ___primeTbl_13; }
	inline Int32U5BU5D_t385246372** get_address_of_primeTbl_13() { return &___primeTbl_13; }
	inline void set_primeTbl_13(Int32U5BU5D_t385246372* value)
	{
		___primeTbl_13 = value;
		Il2CppCodeGenWriteBarrier((&___primeTbl_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHTABLE_T1853889766_H
#ifndef ANDROIDJAVAOBJECT_T4131667876_H
#define ANDROIDJAVAOBJECT_T4131667876_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AndroidJavaObject
struct  AndroidJavaObject_t4131667876  : public RuntimeObject
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t3225273728 * ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t3225273728 * ___m_jclass_2;

public:
	inline static int32_t get_offset_of_m_jobject_1() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t4131667876, ___m_jobject_1)); }
	inline GlobalJavaObjectRef_t3225273728 * get_m_jobject_1() const { return ___m_jobject_1; }
	inline GlobalJavaObjectRef_t3225273728 ** get_address_of_m_jobject_1() { return &___m_jobject_1; }
	inline void set_m_jobject_1(GlobalJavaObjectRef_t3225273728 * value)
	{
		___m_jobject_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_jobject_1), value);
	}

	inline static int32_t get_offset_of_m_jclass_2() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t4131667876, ___m_jclass_2)); }
	inline GlobalJavaObjectRef_t3225273728 * get_m_jclass_2() const { return ___m_jclass_2; }
	inline GlobalJavaObjectRef_t3225273728 ** get_address_of_m_jclass_2() { return &___m_jclass_2; }
	inline void set_m_jclass_2(GlobalJavaObjectRef_t3225273728 * value)
	{
		___m_jclass_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_jclass_2), value);
	}
};

struct AndroidJavaObject_t4131667876_StaticFields
{
public:
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaObject::s_JavaLangClass
	AndroidJavaClass_t32045322 * ___s_JavaLangClass_3;

public:
	inline static int32_t get_offset_of_enableDebugPrints_0() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t4131667876_StaticFields, ___enableDebugPrints_0)); }
	inline bool get_enableDebugPrints_0() const { return ___enableDebugPrints_0; }
	inline bool* get_address_of_enableDebugPrints_0() { return &___enableDebugPrints_0; }
	inline void set_enableDebugPrints_0(bool value)
	{
		___enableDebugPrints_0 = value;
	}

	inline static int32_t get_offset_of_s_JavaLangClass_3() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t4131667876_StaticFields, ___s_JavaLangClass_3)); }
	inline AndroidJavaClass_t32045322 * get_s_JavaLangClass_3() const { return ___s_JavaLangClass_3; }
	inline AndroidJavaClass_t32045322 ** get_address_of_s_JavaLangClass_3() { return &___s_JavaLangClass_3; }
	inline void set_s_JavaLangClass_3(AndroidJavaClass_t32045322 * value)
	{
		___s_JavaLangClass_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_JavaLangClass_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANDROIDJAVAOBJECT_T4131667876_H
#ifndef RANDOM_T1975799751_H
#define RANDOM_T1975799751_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Skillz/Random
struct  Random_t1975799751  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOM_T1975799751_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef SKILLZ_T1424191382_H
#define SKILLZ_T1424191382_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Skillz
struct  Skillz_t1424191382  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SKILLZ_T1424191382_H
#ifndef KEYVALUEPAIR_2_T968067334_H
#define KEYVALUEPAIR_2_T968067334_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
struct  KeyValuePair_2_t968067334 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t968067334, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t968067334, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T968067334_H
#ifndef KEYVALUEPAIR_2_T2530217319_H
#define KEYVALUEPAIR_2_T2530217319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t2530217319 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2530217319_H
#ifndef KEYVALUEPAIR_2_T4030379155_H
#define KEYVALUEPAIR_2_T4030379155_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct  KeyValuePair_2_t4030379155 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4030379155, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4030379155, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T4030379155_H
#ifndef STRINGREADER_T3465604688_H
#define STRINGREADER_T3465604688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StringReader
struct  StringReader_t3465604688  : public TextReader_t283511965
{
public:
	// System.String System.IO.StringReader::source
	String_t* ___source_1;
	// System.Int32 System.IO.StringReader::nextChar
	int32_t ___nextChar_2;
	// System.Int32 System.IO.StringReader::sourceLength
	int32_t ___sourceLength_3;

public:
	inline static int32_t get_offset_of_source_1() { return static_cast<int32_t>(offsetof(StringReader_t3465604688, ___source_1)); }
	inline String_t* get_source_1() const { return ___source_1; }
	inline String_t** get_address_of_source_1() { return &___source_1; }
	inline void set_source_1(String_t* value)
	{
		___source_1 = value;
		Il2CppCodeGenWriteBarrier((&___source_1), value);
	}

	inline static int32_t get_offset_of_nextChar_2() { return static_cast<int32_t>(offsetof(StringReader_t3465604688, ___nextChar_2)); }
	inline int32_t get_nextChar_2() const { return ___nextChar_2; }
	inline int32_t* get_address_of_nextChar_2() { return &___nextChar_2; }
	inline void set_nextChar_2(int32_t value)
	{
		___nextChar_2 = value;
	}

	inline static int32_t get_offset_of_sourceLength_3() { return static_cast<int32_t>(offsetof(StringReader_t3465604688, ___sourceLength_3)); }
	inline int32_t get_sourceLength_3() const { return ___sourceLength_3; }
	inline int32_t* get_address_of_sourceLength_3() { return &___sourceLength_3; }
	inline void set_sourceLength_3(int32_t value)
	{
		___sourceLength_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGREADER_T3465604688_H
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
#ifndef ANDROIDJAVACLASS_T32045322_H
#define ANDROIDJAVACLASS_T32045322_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AndroidJavaClass
struct  AndroidJavaClass_t32045322  : public AndroidJavaObject_t4131667876
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANDROIDJAVACLASS_T32045322_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef SBYTE_T1669577662_H
#define SBYTE_T1669577662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SByte
struct  SByte_t1669577662 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t1669577662, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTE_T1669577662_H
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
#ifndef INT16_T2552820387_H
#define INT16_T2552820387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int16
struct  Int16_t2552820387 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t2552820387, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16_T2552820387_H
#ifndef UINT16_T2177724958_H
#define UINT16_T2177724958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_t2177724958 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt16_t2177724958, ___m_value_2)); }
	inline uint16_t get_m_value_2() const { return ___m_value_2; }
	inline uint16_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint16_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16_T2177724958_H
#ifndef UINT64_T4134040092_H
#define UINT64_T4134040092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_t4134040092 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_t4134040092, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_T4134040092_H
#ifndef DECIMAL_T2948259380_H
#define DECIMAL_T2948259380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t2948259380 
{
public:
	// System.UInt32 System.Decimal::flags
	uint32_t ___flags_5;
	// System.UInt32 System.Decimal::hi
	uint32_t ___hi_6;
	// System.UInt32 System.Decimal::lo
	uint32_t ___lo_7;
	// System.UInt32 System.Decimal::mid
	uint32_t ___mid_8;

public:
	inline static int32_t get_offset_of_flags_5() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___flags_5)); }
	inline uint32_t get_flags_5() const { return ___flags_5; }
	inline uint32_t* get_address_of_flags_5() { return &___flags_5; }
	inline void set_flags_5(uint32_t value)
	{
		___flags_5 = value;
	}

	inline static int32_t get_offset_of_hi_6() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___hi_6)); }
	inline uint32_t get_hi_6() const { return ___hi_6; }
	inline uint32_t* get_address_of_hi_6() { return &___hi_6; }
	inline void set_hi_6(uint32_t value)
	{
		___hi_6 = value;
	}

	inline static int32_t get_offset_of_lo_7() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___lo_7)); }
	inline uint32_t get_lo_7() const { return ___lo_7; }
	inline uint32_t* get_address_of_lo_7() { return &___lo_7; }
	inline void set_lo_7(uint32_t value)
	{
		___lo_7 = value;
	}

	inline static int32_t get_offset_of_mid_8() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___mid_8)); }
	inline uint32_t get_mid_8() const { return ___mid_8; }
	inline uint32_t* get_address_of_mid_8() { return &___mid_8; }
	inline void set_mid_8(uint32_t value)
	{
		___mid_8 = value;
	}
};

struct Decimal_t2948259380_StaticFields
{
public:
	// System.Decimal System.Decimal::MinValue
	Decimal_t2948259380  ___MinValue_0;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2948259380  ___MaxValue_1;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2948259380  ___MinusOne_2;
	// System.Decimal System.Decimal::One
	Decimal_t2948259380  ___One_3;
	// System.Decimal System.Decimal::MaxValueDiv10
	Decimal_t2948259380  ___MaxValueDiv10_4;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinValue_0)); }
	inline Decimal_t2948259380  get_MinValue_0() const { return ___MinValue_0; }
	inline Decimal_t2948259380 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(Decimal_t2948259380  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValue_1)); }
	inline Decimal_t2948259380  get_MaxValue_1() const { return ___MaxValue_1; }
	inline Decimal_t2948259380 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(Decimal_t2948259380  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinusOne_2() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinusOne_2)); }
	inline Decimal_t2948259380  get_MinusOne_2() const { return ___MinusOne_2; }
	inline Decimal_t2948259380 * get_address_of_MinusOne_2() { return &___MinusOne_2; }
	inline void set_MinusOne_2(Decimal_t2948259380  value)
	{
		___MinusOne_2 = value;
	}

	inline static int32_t get_offset_of_One_3() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___One_3)); }
	inline Decimal_t2948259380  get_One_3() const { return ___One_3; }
	inline Decimal_t2948259380 * get_address_of_One_3() { return &___One_3; }
	inline void set_One_3(Decimal_t2948259380  value)
	{
		___One_3 = value;
	}

	inline static int32_t get_offset_of_MaxValueDiv10_4() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValueDiv10_4)); }
	inline Decimal_t2948259380  get_MaxValueDiv10_4() const { return ___MaxValueDiv10_4; }
	inline Decimal_t2948259380 * get_address_of_MaxValueDiv10_4() { return &___MaxValueDiv10_4; }
	inline void set_MaxValueDiv10_4(Decimal_t2948259380  value)
	{
		___MaxValueDiv10_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T2948259380_H
#ifndef ENUMERATOR_T2146457487_H
#define ENUMERATOR_T2146457487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t2146457487 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t257213610 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___l_0)); }
	inline List_1_t257213610 * get_l_0() const { return ___l_0; }
	inline List_1_t257213610 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t257213610 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2146457487_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef NULLABLE_1_T3119828856_H
#define NULLABLE_1_T3119828856_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Single>
struct  Nullable_1_t3119828856 
{
public:
	// T System.Nullable`1::value
	float ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t3119828856, ___value_0)); }
	inline float get_value_0() const { return ___value_0; }
	inline float* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(float value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t3119828856, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T3119828856_H
#ifndef NULLABLE_1_T4282624060_H
#define NULLABLE_1_T4282624060_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.UInt32>
struct  Nullable_1_t4282624060 
{
public:
	// T System.Nullable`1::value
	uint32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t4282624060, ___value_0)); }
	inline uint32_t get_value_0() const { return ___value_0; }
	inline uint32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(uint32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t4282624060, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T4282624060_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef TIMESPAN_T881159249_H
#define TIMESPAN_T881159249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t881159249 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t881159249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t881159249  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t881159249  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t881159249  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t881159249  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_2)); }
	inline TimeSpan_t881159249  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t881159249 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t881159249  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef NULLABLE_1_T378540539_H
#define NULLABLE_1_T378540539_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Int32>
struct  Nullable_1_t378540539 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t378540539, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t378540539, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T378540539_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
#ifndef NULLABLE_1_T1819850047_H
#define NULLABLE_1_T1819850047_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Boolean>
struct  Nullable_1_t1819850047 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1819850047, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1819850047, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T1819850047_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef NULLABLE_1_T2317227445_H
#define NULLABLE_1_T2317227445_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Double>
struct  Nullable_1_t2317227445 
{
public:
	// T System.Nullable`1::value
	double ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t2317227445, ___value_0)); }
	inline double get_value_0() const { return ___value_0; }
	inline double* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(double value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t2317227445, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T2317227445_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef ENVIRONMENT_T385701969_H
#define ENVIRONMENT_T385701969_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SkillzSDK.Environment
struct  Environment_t385701969 
{
public:
	// System.Int32 SkillzSDK.Environment::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Environment_t385701969, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENVIRONMENT_T385701969_H
#ifndef ORIENTATION_T3160564636_H
#define ORIENTATION_T3160564636_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SkillzSDK.Orientation
struct  Orientation_t3160564636 
{
public:
	// System.Int32 SkillzSDK.Orientation::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Orientation_t3160564636, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORIENTATION_T3160564636_H
#ifndef RUNTIMEPLATFORM_T4159857903_H
#define RUNTIMEPLATFORM_T4159857903_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RuntimePlatform
struct  RuntimePlatform_t4159857903 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RuntimePlatform_t4159857903, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEPLATFORM_T4159857903_H
#ifndef TURNBASEDMATCHOUTCOME_T1929616948_H
#define TURNBASEDMATCHOUTCOME_T1929616948_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SkillzSDK.TurnBasedMatchOutcome
struct  TurnBasedMatchOutcome_t1929616948 
{
public:
	// System.Int32 SkillzSDK.TurnBasedMatchOutcome::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TurnBasedMatchOutcome_t1929616948, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TURNBASEDMATCHOUTCOME_T1929616948_H
#ifndef NUMBERSTYLES_T617258130_H
#define NUMBERSTYLES_T617258130_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.NumberStyles
struct  NumberStyles_t617258130 
{
public:
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NumberStyles_t617258130, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NUMBERSTYLES_T617258130_H
#ifndef TURNBASEDROUNDOUTCOME_T235959152_H
#define TURNBASEDROUNDOUTCOME_T235959152_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SkillzSDK.TurnBasedRoundOutcome
struct  TurnBasedRoundOutcome_t235959152 
{
public:
	// System.Int32 SkillzSDK.TurnBasedRoundOutcome::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TurnBasedRoundOutcome_t235959152, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TURNBASEDROUNDOUTCOME_T235959152_H
#ifndef TOKEN_T2398424852_H
#define TOKEN_T2398424852_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SkillzSDK.MiniJSON.Json/Parser/TOKEN
struct  TOKEN_t2398424852 
{
public:
	// System.Int32 SkillzSDK.MiniJSON.Json/Parser/TOKEN::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TOKEN_t2398424852, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOKEN_T2398424852_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef DATETIMEKIND_T3468814247_H
#define DATETIMEKIND_T3468814247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t3468814247 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t3468814247, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEKIND_T3468814247_H
#ifndef ENUMERATOR_T3586889763_H
#define ENUMERATOR_T3586889763_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
struct  Enumerator_t3586889763 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t1632706988 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t4030379155  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t3586889763, ___dictionary_0)); }
	inline Dictionary_2_t1632706988 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t1632706988 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t1632706988 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t3586889763, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t3586889763, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3586889763, ___current_3)); }
	inline KeyValuePair_2_t4030379155  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t4030379155 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t4030379155  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3586889763_H
#ifndef PLAYER_T2961656996_H
#define PLAYER_T2961656996_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SkillzSDK.Player
struct  Player_t2961656996 
{
public:
	// System.String SkillzSDK.Player::DisplayName
	String_t* ___DisplayName_0;
	// System.Nullable`1<System.UInt32> SkillzSDK.Player::ID
	Nullable_1_t4282624060  ___ID_1;
	// System.String SkillzSDK.Player::AvatarURL
	String_t* ___AvatarURL_2;
	// System.String SkillzSDK.Player::FlagURL
	String_t* ___FlagURL_3;

public:
	inline static int32_t get_offset_of_DisplayName_0() { return static_cast<int32_t>(offsetof(Player_t2961656996, ___DisplayName_0)); }
	inline String_t* get_DisplayName_0() const { return ___DisplayName_0; }
	inline String_t** get_address_of_DisplayName_0() { return &___DisplayName_0; }
	inline void set_DisplayName_0(String_t* value)
	{
		___DisplayName_0 = value;
		Il2CppCodeGenWriteBarrier((&___DisplayName_0), value);
	}

	inline static int32_t get_offset_of_ID_1() { return static_cast<int32_t>(offsetof(Player_t2961656996, ___ID_1)); }
	inline Nullable_1_t4282624060  get_ID_1() const { return ___ID_1; }
	inline Nullable_1_t4282624060 * get_address_of_ID_1() { return &___ID_1; }
	inline void set_ID_1(Nullable_1_t4282624060  value)
	{
		___ID_1 = value;
	}

	inline static int32_t get_offset_of_AvatarURL_2() { return static_cast<int32_t>(offsetof(Player_t2961656996, ___AvatarURL_2)); }
	inline String_t* get_AvatarURL_2() const { return ___AvatarURL_2; }
	inline String_t** get_address_of_AvatarURL_2() { return &___AvatarURL_2; }
	inline void set_AvatarURL_2(String_t* value)
	{
		___AvatarURL_2 = value;
		Il2CppCodeGenWriteBarrier((&___AvatarURL_2), value);
	}

	inline static int32_t get_offset_of_FlagURL_3() { return static_cast<int32_t>(offsetof(Player_t2961656996, ___FlagURL_3)); }
	inline String_t* get_FlagURL_3() const { return ___FlagURL_3; }
	inline String_t** get_address_of_FlagURL_3() { return &___FlagURL_3; }
	inline void set_FlagURL_3(String_t* value)
	{
		___FlagURL_3 = value;
		Il2CppCodeGenWriteBarrier((&___FlagURL_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of SkillzSDK.Player
struct Player_t2961656996_marshaled_pinvoke
{
	char* ___DisplayName_0;
	Nullable_1_t4282624060  ___ID_1;
	char* ___AvatarURL_2;
	char* ___FlagURL_3;
};
// Native definition for COM marshalling of SkillzSDK.Player
struct Player_t2961656996_marshaled_com
{
	Il2CppChar* ___DisplayName_0;
	Nullable_1_t4282624060  ___ID_1;
	Il2CppChar* ___AvatarURL_2;
	Il2CppChar* ___FlagURL_3;
};
#endif // PLAYER_T2961656996_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T2721792723_H
#ifndef ENUMERATOR_T524577942_H
#define ENUMERATOR_T524577942_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>
struct  Enumerator_t524577942 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t2865362463 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t968067334  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t524577942, ___dictionary_0)); }
	inline Dictionary_2_t2865362463 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t2865362463 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t2865362463 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t524577942, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t524577942, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t524577942, ___current_3)); }
	inline KeyValuePair_2_t968067334  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t968067334 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t968067334  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T524577942_H
#ifndef ENUMERATOR_T2086727927_H
#define ENUMERATOR_T2086727927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct  Enumerator_t2086727927 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t132545152 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t2530217319  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___dictionary_0)); }
	inline Dictionary_2_t132545152 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t132545152 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t132545152 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___current_3)); }
	inline KeyValuePair_2_t2530217319  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t2530217319 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t2530217319  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2086727927_H
#ifndef TURNBASEDROUND_T1233799461_H
#define TURNBASEDROUND_T1233799461_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SkillzSDK.TurnBasedRound
struct  TurnBasedRound_t1233799461 
{
public:
	// SkillzSDK.TurnBasedRoundOutcome SkillzSDK.TurnBasedRound::Outcome
	int32_t ___Outcome_0;
	// System.Nullable`1<System.Double> SkillzSDK.TurnBasedRound::OpponentRoundScore
	Nullable_1_t2317227445  ___OpponentRoundScore_1;
	// System.Nullable`1<System.Double> SkillzSDK.TurnBasedRound::MyRoundScore
	Nullable_1_t2317227445  ___MyRoundScore_2;

public:
	inline static int32_t get_offset_of_Outcome_0() { return static_cast<int32_t>(offsetof(TurnBasedRound_t1233799461, ___Outcome_0)); }
	inline int32_t get_Outcome_0() const { return ___Outcome_0; }
	inline int32_t* get_address_of_Outcome_0() { return &___Outcome_0; }
	inline void set_Outcome_0(int32_t value)
	{
		___Outcome_0 = value;
	}

	inline static int32_t get_offset_of_OpponentRoundScore_1() { return static_cast<int32_t>(offsetof(TurnBasedRound_t1233799461, ___OpponentRoundScore_1)); }
	inline Nullable_1_t2317227445  get_OpponentRoundScore_1() const { return ___OpponentRoundScore_1; }
	inline Nullable_1_t2317227445 * get_address_of_OpponentRoundScore_1() { return &___OpponentRoundScore_1; }
	inline void set_OpponentRoundScore_1(Nullable_1_t2317227445  value)
	{
		___OpponentRoundScore_1 = value;
	}

	inline static int32_t get_offset_of_MyRoundScore_2() { return static_cast<int32_t>(offsetof(TurnBasedRound_t1233799461, ___MyRoundScore_2)); }
	inline Nullable_1_t2317227445  get_MyRoundScore_2() const { return ___MyRoundScore_2; }
	inline Nullable_1_t2317227445 * get_address_of_MyRoundScore_2() { return &___MyRoundScore_2; }
	inline void set_MyRoundScore_2(Nullable_1_t2317227445  value)
	{
		___MyRoundScore_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of SkillzSDK.TurnBasedRound
struct TurnBasedRound_t1233799461_marshaled_pinvoke
{
	int32_t ___Outcome_0;
	Nullable_1_t2317227445  ___OpponentRoundScore_1;
	Nullable_1_t2317227445  ___MyRoundScore_2;
};
// Native definition for COM marshalling of SkillzSDK.TurnBasedRound
struct TurnBasedRound_t1233799461_marshaled_com
{
	int32_t ___Outcome_0;
	Nullable_1_t2317227445  ___OpponentRoundScore_1;
	Nullable_1_t2317227445  ___MyRoundScore_2;
};
#endif // TURNBASEDROUND_T1233799461_H
#ifndef CONTINUEDTURNBASEDMATCH_T3764673362_H
#define CONTINUEDTURNBASEDMATCH_T3764673362_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SkillzSDK.ContinuedTurnBasedMatch
struct  ContinuedTurnBasedMatch_t3764673362 
{
public:
	// System.String SkillzSDK.ContinuedTurnBasedMatch::GameData
	String_t* ___GameData_0;
	// SkillzSDK.Player SkillzSDK.ContinuedTurnBasedMatch::Opponent
	Player_t2961656996  ___Opponent_1;
	// System.Nullable`1<System.Double> SkillzSDK.ContinuedTurnBasedMatch::MyCurrentTotalScore
	Nullable_1_t2317227445  ___MyCurrentTotalScore_2;
	// System.Nullable`1<System.Double> SkillzSDK.ContinuedTurnBasedMatch::OpponentCurrentTotalScore
	Nullable_1_t2317227445  ___OpponentCurrentTotalScore_3;

public:
	inline static int32_t get_offset_of_GameData_0() { return static_cast<int32_t>(offsetof(ContinuedTurnBasedMatch_t3764673362, ___GameData_0)); }
	inline String_t* get_GameData_0() const { return ___GameData_0; }
	inline String_t** get_address_of_GameData_0() { return &___GameData_0; }
	inline void set_GameData_0(String_t* value)
	{
		___GameData_0 = value;
		Il2CppCodeGenWriteBarrier((&___GameData_0), value);
	}

	inline static int32_t get_offset_of_Opponent_1() { return static_cast<int32_t>(offsetof(ContinuedTurnBasedMatch_t3764673362, ___Opponent_1)); }
	inline Player_t2961656996  get_Opponent_1() const { return ___Opponent_1; }
	inline Player_t2961656996 * get_address_of_Opponent_1() { return &___Opponent_1; }
	inline void set_Opponent_1(Player_t2961656996  value)
	{
		___Opponent_1 = value;
	}

	inline static int32_t get_offset_of_MyCurrentTotalScore_2() { return static_cast<int32_t>(offsetof(ContinuedTurnBasedMatch_t3764673362, ___MyCurrentTotalScore_2)); }
	inline Nullable_1_t2317227445  get_MyCurrentTotalScore_2() const { return ___MyCurrentTotalScore_2; }
	inline Nullable_1_t2317227445 * get_address_of_MyCurrentTotalScore_2() { return &___MyCurrentTotalScore_2; }
	inline void set_MyCurrentTotalScore_2(Nullable_1_t2317227445  value)
	{
		___MyCurrentTotalScore_2 = value;
	}

	inline static int32_t get_offset_of_OpponentCurrentTotalScore_3() { return static_cast<int32_t>(offsetof(ContinuedTurnBasedMatch_t3764673362, ___OpponentCurrentTotalScore_3)); }
	inline Nullable_1_t2317227445  get_OpponentCurrentTotalScore_3() const { return ___OpponentCurrentTotalScore_3; }
	inline Nullable_1_t2317227445 * get_address_of_OpponentCurrentTotalScore_3() { return &___OpponentCurrentTotalScore_3; }
	inline void set_OpponentCurrentTotalScore_3(Nullable_1_t2317227445  value)
	{
		___OpponentCurrentTotalScore_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of SkillzSDK.ContinuedTurnBasedMatch
struct ContinuedTurnBasedMatch_t3764673362_marshaled_pinvoke
{
	char* ___GameData_0;
	Player_t2961656996_marshaled_pinvoke ___Opponent_1;
	Nullable_1_t2317227445  ___MyCurrentTotalScore_2;
	Nullable_1_t2317227445  ___OpponentCurrentTotalScore_3;
};
// Native definition for COM marshalling of SkillzSDK.ContinuedTurnBasedMatch
struct ContinuedTurnBasedMatch_t3764673362_marshaled_com
{
	Il2CppChar* ___GameData_0;
	Player_t2961656996_marshaled_com ___Opponent_1;
	Nullable_1_t2317227445  ___MyCurrentTotalScore_2;
	Nullable_1_t2317227445  ___OpponentCurrentTotalScore_3;
};
#endif // CONTINUEDTURNBASEDMATCH_T3764673362_H
#ifndef MATCH_T1925635937_H
#define MATCH_T1925635937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SkillzSDK.Match
struct  Match_t1925635937  : public RuntimeObject
{
public:
	// System.String SkillzSDK.Match::Name
	String_t* ___Name_0;
	// System.String SkillzSDK.Match::Description
	String_t* ___Description_1;
	// System.Nullable`1<System.Int32> SkillzSDK.Match::ID
	Nullable_1_t378540539  ___ID_2;
	// System.Nullable`1<System.Int32> SkillzSDK.Match::TemplateID
	Nullable_1_t378540539  ___TemplateID_3;
	// System.Nullable`1<System.UInt32> SkillzSDK.Match::SkillzDifficulty
	Nullable_1_t4282624060  ___SkillzDifficulty_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> SkillzSDK.Match::GameParams
	Dictionary_2_t1632706988 * ___GameParams_5;
	// SkillzSDK.Player SkillzSDK.Match::Player
	Player_t2961656996  ___Player_6;
	// System.Nullable`1<System.Boolean> SkillzSDK.Match::IsCash
	Nullable_1_t1819850047  ___IsCash_7;
	// System.Nullable`1<System.Int32> SkillzSDK.Match::EntryPoints
	Nullable_1_t378540539  ___EntryPoints_8;
	// System.Nullable`1<System.Single> SkillzSDK.Match::EntryCash
	Nullable_1_t3119828856  ___EntryCash_9;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(Match_t1925635937, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___Name_0), value);
	}

	inline static int32_t get_offset_of_Description_1() { return static_cast<int32_t>(offsetof(Match_t1925635937, ___Description_1)); }
	inline String_t* get_Description_1() const { return ___Description_1; }
	inline String_t** get_address_of_Description_1() { return &___Description_1; }
	inline void set_Description_1(String_t* value)
	{
		___Description_1 = value;
		Il2CppCodeGenWriteBarrier((&___Description_1), value);
	}

	inline static int32_t get_offset_of_ID_2() { return static_cast<int32_t>(offsetof(Match_t1925635937, ___ID_2)); }
	inline Nullable_1_t378540539  get_ID_2() const { return ___ID_2; }
	inline Nullable_1_t378540539 * get_address_of_ID_2() { return &___ID_2; }
	inline void set_ID_2(Nullable_1_t378540539  value)
	{
		___ID_2 = value;
	}

	inline static int32_t get_offset_of_TemplateID_3() { return static_cast<int32_t>(offsetof(Match_t1925635937, ___TemplateID_3)); }
	inline Nullable_1_t378540539  get_TemplateID_3() const { return ___TemplateID_3; }
	inline Nullable_1_t378540539 * get_address_of_TemplateID_3() { return &___TemplateID_3; }
	inline void set_TemplateID_3(Nullable_1_t378540539  value)
	{
		___TemplateID_3 = value;
	}

	inline static int32_t get_offset_of_SkillzDifficulty_4() { return static_cast<int32_t>(offsetof(Match_t1925635937, ___SkillzDifficulty_4)); }
	inline Nullable_1_t4282624060  get_SkillzDifficulty_4() const { return ___SkillzDifficulty_4; }
	inline Nullable_1_t4282624060 * get_address_of_SkillzDifficulty_4() { return &___SkillzDifficulty_4; }
	inline void set_SkillzDifficulty_4(Nullable_1_t4282624060  value)
	{
		___SkillzDifficulty_4 = value;
	}

	inline static int32_t get_offset_of_GameParams_5() { return static_cast<int32_t>(offsetof(Match_t1925635937, ___GameParams_5)); }
	inline Dictionary_2_t1632706988 * get_GameParams_5() const { return ___GameParams_5; }
	inline Dictionary_2_t1632706988 ** get_address_of_GameParams_5() { return &___GameParams_5; }
	inline void set_GameParams_5(Dictionary_2_t1632706988 * value)
	{
		___GameParams_5 = value;
		Il2CppCodeGenWriteBarrier((&___GameParams_5), value);
	}

	inline static int32_t get_offset_of_Player_6() { return static_cast<int32_t>(offsetof(Match_t1925635937, ___Player_6)); }
	inline Player_t2961656996  get_Player_6() const { return ___Player_6; }
	inline Player_t2961656996 * get_address_of_Player_6() { return &___Player_6; }
	inline void set_Player_6(Player_t2961656996  value)
	{
		___Player_6 = value;
	}

	inline static int32_t get_offset_of_IsCash_7() { return static_cast<int32_t>(offsetof(Match_t1925635937, ___IsCash_7)); }
	inline Nullable_1_t1819850047  get_IsCash_7() const { return ___IsCash_7; }
	inline Nullable_1_t1819850047 * get_address_of_IsCash_7() { return &___IsCash_7; }
	inline void set_IsCash_7(Nullable_1_t1819850047  value)
	{
		___IsCash_7 = value;
	}

	inline static int32_t get_offset_of_EntryPoints_8() { return static_cast<int32_t>(offsetof(Match_t1925635937, ___EntryPoints_8)); }
	inline Nullable_1_t378540539  get_EntryPoints_8() const { return ___EntryPoints_8; }
	inline Nullable_1_t378540539 * get_address_of_EntryPoints_8() { return &___EntryPoints_8; }
	inline void set_EntryPoints_8(Nullable_1_t378540539  value)
	{
		___EntryPoints_8 = value;
	}

	inline static int32_t get_offset_of_EntryCash_9() { return static_cast<int32_t>(offsetof(Match_t1925635937, ___EntryCash_9)); }
	inline Nullable_1_t3119828856  get_EntryCash_9() const { return ___EntryCash_9; }
	inline Nullable_1_t3119828856 * get_address_of_EntryCash_9() { return &___EntryCash_9; }
	inline void set_EntryCash_9(Nullable_1_t3119828856  value)
	{
		___EntryCash_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATCH_T1925635937_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef DATETIME_T3738529785_H
#define DATETIME_T3738529785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3738529785 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t881159249  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___ticks_0)); }
	inline TimeSpan_t881159249  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t881159249 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t881159249  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t1281789340* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t1281789340* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t1281789340* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t1281789340* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t1281789340* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t1281789340* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t1281789340* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t385246372* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t385246372* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_2)); }
	inline DateTime_t3738529785  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t3738529785  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_3)); }
	inline DateTime_t3738529785  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t3738529785 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t3738529785  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t1281789340* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t1281789340* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t1281789340* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t1281789340* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t1281789340* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t1281789340* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t1281789340* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t1281789340* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t1281789340* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t1281789340* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t1281789340* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t1281789340** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t1281789340* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t1281789340* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t1281789340** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t1281789340* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t385246372* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t385246372* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t385246372* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t385246372* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___last_now_14)); }
	inline int64_t get_last_now_14() const { return ___last_now_14; }
	inline int64_t* get_address_of_last_now_14() { return &___last_now_14; }
	inline void set_last_now_14(int64_t value)
	{
		___last_now_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t426314064 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t426314064 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef NULLABLE_1_T1166124571_H
#define NULLABLE_1_T1166124571_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.DateTime>
struct  Nullable_1_t1166124571 
{
public:
	// T System.Nullable`1::value
	DateTime_t3738529785  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1166124571, ___value_0)); }
	inline DateTime_t3738529785  get_value_0() const { return ___value_0; }
	inline DateTime_t3738529785 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(DateTime_t3738529785  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1166124571, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T1166124571_H
#ifndef NULLABLE_1_T1192268148_H
#define NULLABLE_1_T1192268148_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<SkillzSDK.ContinuedTurnBasedMatch>
struct  Nullable_1_t1192268148 
{
public:
	// T System.Nullable`1::value
	ContinuedTurnBasedMatch_t3764673362  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1192268148, ___value_0)); }
	inline ContinuedTurnBasedMatch_t3764673362  get_value_0() const { return ___value_0; }
	inline ContinuedTurnBasedMatch_t3764673362 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(ContinuedTurnBasedMatch_t3764673362  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1192268148, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T1192268148_H
#ifndef ENUMERATOR_T300150784_H
#define ENUMERATOR_T300150784_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<SkillzSDK.TurnBasedRound>
struct  Enumerator_t300150784 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t2705874203 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	TurnBasedRound_t1233799461  ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t300150784, ___l_0)); }
	inline List_1_t2705874203 * get_l_0() const { return ___l_0; }
	inline List_1_t2705874203 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t2705874203 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t300150784, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t300150784, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t300150784, ___current_3)); }
	inline TurnBasedRound_t1233799461  get_current_3() const { return ___current_3; }
	inline TurnBasedRound_t1233799461 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(TurnBasedRound_t1233799461  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T300150784_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef TURNBASEDMATCH_T2355453244_H
#define TURNBASEDMATCH_T2355453244_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SkillzSDK.TurnBasedMatch
struct  TurnBasedMatch_t2355453244  : public Match_t1925635937
{
public:
	// System.Nullable`1<System.UInt32> SkillzSDK.TurnBasedMatch::PrizeZ
	Nullable_1_t4282624060  ___PrizeZ_10;
	// System.Nullable`1<System.Double> SkillzSDK.TurnBasedMatch::PrizeCash
	Nullable_1_t2317227445  ___PrizeCash_11;
	// System.Nullable`1<System.DateTime> SkillzSDK.TurnBasedMatch::TimeTournamentBegan
	Nullable_1_t1166124571  ___TimeTournamentBegan_12;
	// System.Nullable`1<System.DateTime> SkillzSDK.TurnBasedMatch::TimeLastTurnCompleted
	Nullable_1_t1166124571  ___TimeLastTurnCompleted_13;
	// System.Nullable`1<System.Boolean> SkillzSDK.TurnBasedMatch::IsMatchOver
	Nullable_1_t1819850047  ___IsMatchOver_14;
	// System.Collections.Generic.List`1<SkillzSDK.TurnBasedRound> SkillzSDK.TurnBasedMatch::Rounds
	List_1_t2705874203 * ___Rounds_15;
	// System.Nullable`1<System.Int32> SkillzSDK.TurnBasedMatch::CurrentTurnIndex
	Nullable_1_t378540539  ___CurrentTurnIndex_16;
	// System.Nullable`1<SkillzSDK.ContinuedTurnBasedMatch> SkillzSDK.TurnBasedMatch::ContinueMatchData
	Nullable_1_t1192268148  ___ContinueMatchData_17;

public:
	inline static int32_t get_offset_of_PrizeZ_10() { return static_cast<int32_t>(offsetof(TurnBasedMatch_t2355453244, ___PrizeZ_10)); }
	inline Nullable_1_t4282624060  get_PrizeZ_10() const { return ___PrizeZ_10; }
	inline Nullable_1_t4282624060 * get_address_of_PrizeZ_10() { return &___PrizeZ_10; }
	inline void set_PrizeZ_10(Nullable_1_t4282624060  value)
	{
		___PrizeZ_10 = value;
	}

	inline static int32_t get_offset_of_PrizeCash_11() { return static_cast<int32_t>(offsetof(TurnBasedMatch_t2355453244, ___PrizeCash_11)); }
	inline Nullable_1_t2317227445  get_PrizeCash_11() const { return ___PrizeCash_11; }
	inline Nullable_1_t2317227445 * get_address_of_PrizeCash_11() { return &___PrizeCash_11; }
	inline void set_PrizeCash_11(Nullable_1_t2317227445  value)
	{
		___PrizeCash_11 = value;
	}

	inline static int32_t get_offset_of_TimeTournamentBegan_12() { return static_cast<int32_t>(offsetof(TurnBasedMatch_t2355453244, ___TimeTournamentBegan_12)); }
	inline Nullable_1_t1166124571  get_TimeTournamentBegan_12() const { return ___TimeTournamentBegan_12; }
	inline Nullable_1_t1166124571 * get_address_of_TimeTournamentBegan_12() { return &___TimeTournamentBegan_12; }
	inline void set_TimeTournamentBegan_12(Nullable_1_t1166124571  value)
	{
		___TimeTournamentBegan_12 = value;
	}

	inline static int32_t get_offset_of_TimeLastTurnCompleted_13() { return static_cast<int32_t>(offsetof(TurnBasedMatch_t2355453244, ___TimeLastTurnCompleted_13)); }
	inline Nullable_1_t1166124571  get_TimeLastTurnCompleted_13() const { return ___TimeLastTurnCompleted_13; }
	inline Nullable_1_t1166124571 * get_address_of_TimeLastTurnCompleted_13() { return &___TimeLastTurnCompleted_13; }
	inline void set_TimeLastTurnCompleted_13(Nullable_1_t1166124571  value)
	{
		___TimeLastTurnCompleted_13 = value;
	}

	inline static int32_t get_offset_of_IsMatchOver_14() { return static_cast<int32_t>(offsetof(TurnBasedMatch_t2355453244, ___IsMatchOver_14)); }
	inline Nullable_1_t1819850047  get_IsMatchOver_14() const { return ___IsMatchOver_14; }
	inline Nullable_1_t1819850047 * get_address_of_IsMatchOver_14() { return &___IsMatchOver_14; }
	inline void set_IsMatchOver_14(Nullable_1_t1819850047  value)
	{
		___IsMatchOver_14 = value;
	}

	inline static int32_t get_offset_of_Rounds_15() { return static_cast<int32_t>(offsetof(TurnBasedMatch_t2355453244, ___Rounds_15)); }
	inline List_1_t2705874203 * get_Rounds_15() const { return ___Rounds_15; }
	inline List_1_t2705874203 ** get_address_of_Rounds_15() { return &___Rounds_15; }
	inline void set_Rounds_15(List_1_t2705874203 * value)
	{
		___Rounds_15 = value;
		Il2CppCodeGenWriteBarrier((&___Rounds_15), value);
	}

	inline static int32_t get_offset_of_CurrentTurnIndex_16() { return static_cast<int32_t>(offsetof(TurnBasedMatch_t2355453244, ___CurrentTurnIndex_16)); }
	inline Nullable_1_t378540539  get_CurrentTurnIndex_16() const { return ___CurrentTurnIndex_16; }
	inline Nullable_1_t378540539 * get_address_of_CurrentTurnIndex_16() { return &___CurrentTurnIndex_16; }
	inline void set_CurrentTurnIndex_16(Nullable_1_t378540539  value)
	{
		___CurrentTurnIndex_16 = value;
	}

	inline static int32_t get_offset_of_ContinueMatchData_17() { return static_cast<int32_t>(offsetof(TurnBasedMatch_t2355453244, ___ContinueMatchData_17)); }
	inline Nullable_1_t1192268148  get_ContinueMatchData_17() const { return ___ContinueMatchData_17; }
	inline Nullable_1_t1192268148 * get_address_of_ContinueMatchData_17() { return &___ContinueMatchData_17; }
	inline void set_ContinueMatchData_17(Nullable_1_t1192268148  value)
	{
		___ContinueMatchData_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TURNBASEDMATCH_T2355453244_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef SKILLZDELEGATEBASE_T1468035564_H
#define SKILLZDELEGATEBASE_T1468035564_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SkillzSDK.SkillzDelegateBase
struct  SkillzDelegateBase_t1468035564  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SKILLZDELEGATEBASE_T1468035564_H
#ifndef SKILLZDELEGATE_T3178178617_H
#define SKILLZDELEGATE_T3178178617_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SkillzDelegate
struct  SkillzDelegate_t3178178617  : public MonoBehaviour_t3962482529
{
public:
	// System.Int32 SkillzDelegate::GameID
	int32_t ___GameID_2;
	// SkillzSDK.Environment SkillzDelegate::SkillzEnvironment
	int32_t ___SkillzEnvironment_3;

public:
	inline static int32_t get_offset_of_GameID_2() { return static_cast<int32_t>(offsetof(SkillzDelegate_t3178178617, ___GameID_2)); }
	inline int32_t get_GameID_2() const { return ___GameID_2; }
	inline int32_t* get_address_of_GameID_2() { return &___GameID_2; }
	inline void set_GameID_2(int32_t value)
	{
		___GameID_2 = value;
	}

	inline static int32_t get_offset_of_SkillzEnvironment_3() { return static_cast<int32_t>(offsetof(SkillzDelegate_t3178178617, ___SkillzEnvironment_3)); }
	inline int32_t get_SkillzEnvironment_3() const { return ___SkillzEnvironment_3; }
	inline int32_t* get_address_of_SkillzEnvironment_3() { return &___SkillzEnvironment_3; }
	inline void set_SkillzEnvironment_3(int32_t value)
	{
		___SkillzEnvironment_3 = value;
	}
};

struct SkillzDelegate_t3178178617_StaticFields
{
public:
	// System.Boolean SkillzDelegate::initializedYet
	bool ___initializedYet_4;

public:
	inline static int32_t get_offset_of_initializedYet_4() { return static_cast<int32_t>(offsetof(SkillzDelegate_t3178178617_StaticFields, ___initializedYet_4)); }
	inline bool get_initializedYet_4() const { return ___initializedYet_4; }
	inline bool* get_address_of_initializedYet_4() { return &___initializedYet_4; }
	inline void set_initializedYet_4(bool value)
	{
		___initializedYet_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SKILLZDELEGATE_T3178178617_H
#ifndef GAMESCENEMANAGER_T2999297734_H
#define GAMESCENEMANAGER_T2999297734_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameSceneManager
struct  GameSceneManager_t2999297734  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean GameSceneManager::startTimer
	bool ___startTimer_4;
	// System.Single GameSceneManager::timer
	float ___timer_5;

public:
	inline static int32_t get_offset_of_startTimer_4() { return static_cast<int32_t>(offsetof(GameSceneManager_t2999297734, ___startTimer_4)); }
	inline bool get_startTimer_4() const { return ___startTimer_4; }
	inline bool* get_address_of_startTimer_4() { return &___startTimer_4; }
	inline void set_startTimer_4(bool value)
	{
		___startTimer_4 = value;
	}

	inline static int32_t get_offset_of_timer_5() { return static_cast<int32_t>(offsetof(GameSceneManager_t2999297734, ___timer_5)); }
	inline float get_timer_5() const { return ___timer_5; }
	inline float* get_address_of_timer_5() { return &___timer_5; }
	inline void set_timer_5(float value)
	{
		___timer_5 = value;
	}
};

struct GameSceneManager_t2999297734_StaticFields
{
public:
	// System.String GameSceneManager::PREV_SCENE
	String_t* ___PREV_SCENE_2;
	// System.Single GameSceneManager::TIMER_LENGTH
	float ___TIMER_LENGTH_3;

public:
	inline static int32_t get_offset_of_PREV_SCENE_2() { return static_cast<int32_t>(offsetof(GameSceneManager_t2999297734_StaticFields, ___PREV_SCENE_2)); }
	inline String_t* get_PREV_SCENE_2() const { return ___PREV_SCENE_2; }
	inline String_t** get_address_of_PREV_SCENE_2() { return &___PREV_SCENE_2; }
	inline void set_PREV_SCENE_2(String_t* value)
	{
		___PREV_SCENE_2 = value;
		Il2CppCodeGenWriteBarrier((&___PREV_SCENE_2), value);
	}

	inline static int32_t get_offset_of_TIMER_LENGTH_3() { return static_cast<int32_t>(offsetof(GameSceneManager_t2999297734_StaticFields, ___TIMER_LENGTH_3)); }
	inline float get_TIMER_LENGTH_3() const { return ___TIMER_LENGTH_3; }
	inline float* get_address_of_TIMER_LENGTH_3() { return &___TIMER_LENGTH_3; }
	inline void set_TIMER_LENGTH_3(float value)
	{
		___TIMER_LENGTH_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMESCENEMANAGER_T2999297734_H
#ifndef SKILLZDELEGATETURNBASED_T453936421_H
#define SKILLZDELEGATETURNBASED_T453936421_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SkillzSDK.SkillzDelegateTurnBased
struct  SkillzDelegateTurnBased_t453936421  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SKILLZDELEGATETURNBASED_T453936421_H
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Char[]
struct CharU5BU5D_t3528271667  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};

extern "C" void Player_t2961656996_marshal_pinvoke(const Player_t2961656996& unmarshaled, Player_t2961656996_marshaled_pinvoke& marshaled);
extern "C" void Player_t2961656996_marshal_pinvoke_back(const Player_t2961656996_marshaled_pinvoke& marshaled, Player_t2961656996& unmarshaled);
extern "C" void Player_t2961656996_marshal_pinvoke_cleanup(Player_t2961656996_marshaled_pinvoke& marshaled);
extern "C" void Player_t2961656996_marshal_com(const Player_t2961656996& unmarshaled, Player_t2961656996_marshaled_com& marshaled);
extern "C" void Player_t2961656996_marshal_com_back(const Player_t2961656996_marshaled_com& marshaled, Player_t2961656996& unmarshaled);
extern "C" void Player_t2961656996_marshal_com_cleanup(Player_t2961656996_marshaled_com& marshaled);

// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
extern "C"  bool AndroidJavaObject_CallStatic_TisBoolean_t97287965_m4111307719_gshared (AndroidJavaObject_t4131667876 * __this, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
extern "C"  RuntimeObject * AndroidJavaObject_CallStatic_TisRuntimeObject_m1663918964_gshared (AndroidJavaObject_t4131667876 * __this, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Object>(System.String,System.Object[])
extern "C"  RuntimeObject * AndroidJavaObject_Call_TisRuntimeObject_m3865839649_gshared (AndroidJavaObject_t4131667876 * __this, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
extern "C"  bool AndroidJavaObject_Call_TisBoolean_t97287965_m948263851_gshared (AndroidJavaObject_t4131667876 * __this, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
extern "C"  RuntimeObject * AndroidJavaObject_GetStatic_TisRuntimeObject_m3787108634_gshared (AndroidJavaObject_t4131667876 * __this, String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Single>(System.String,System.Object[])
extern "C"  float AndroidJavaObject_Call_TisSingle_t1397266774_m1436156811_gshared (AndroidJavaObject_t4131667876 * __this, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// System.String System.Nullable`1<System.UInt32>::ToString()
extern "C"  String_t* Nullable_1_ToString_m1639120067_gshared (Nullable_1_t4282624060 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.UInt32>::get_HasValue()
extern "C"  bool Nullable_1_get_HasValue_m1763782828_gshared (Nullable_1_t4282624060 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.UInt32>::get_Value()
extern "C"  uint32_t Nullable_1_get_Value_m1994738269_gshared (Nullable_1_t4282624060 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
extern "C"  bool Dictionary_2_ContainsKey_m2278349286_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
extern "C"  RuntimeObject * Dictionary_2_get_Item_m2714930061_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Boolean>::.ctor(!0)
extern "C"  void Nullable_1__ctor_m269558965_gshared (Nullable_1_t1819850047 * __this, bool p0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Double>::get_HasValue()
extern "C"  bool Nullable_1_get_HasValue_m1700900799_gshared (Nullable_1_t2317227445 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Double>::get_Value()
extern "C"  double Nullable_1_get_Value_m3507161817_gshared (Nullable_1_t2317227445 * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.DateTime>::.ctor(!0)
extern "C"  void Nullable_1__ctor_m3556066642_gshared (Nullable_1_t1166124571 * __this, DateTime_t3738529785  p0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Double>::.ctor(!0)
extern "C"  void Nullable_1__ctor_m1383724426_gshared (Nullable_1_t2317227445 * __this, double p0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
extern "C"  void Nullable_1__ctor_m3556133687_gshared (Nullable_1_t378540539 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.UInt32>::.ctor(!0)
extern "C"  void Nullable_1__ctor_m2245710918_gshared (Nullable_1_t4282624060 * __this, uint32_t p0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Single>::.ctor(!0)
extern "C"  void Nullable_1__ctor_m2775392932_gshared (Nullable_1_t3119828856 * __this, float p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m518943619_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C"  Enumerator_t2086727927  Dictionary_2_GetEnumerator_m3278257048_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C"  KeyValuePair_2_t2530217319  Enumerator_get_Current_m2655181939_gshared (Enumerator_t2086727927 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m3464904234_gshared (KeyValuePair_2_t2530217319 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m1328507389_gshared (KeyValuePair_2_t2530217319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
extern "C"  void Dictionary_2_Add_m2387223709_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m1107569389_gshared (Enumerator_t2086727927 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m3885012575_gshared (Enumerator_t2086727927 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
extern "C"  void Dictionary_2_set_Item_m3474379962_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C"  void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<SkillzSDK.TurnBasedRound>::.ctor()
extern "C"  void List_1__ctor_m402830882_gshared (List_1_t2705874203 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C"  Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C"  RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<SkillzSDK.TurnBasedRound>::Add(!0)
extern "C"  void List_1_Add_m1731145970_gshared (List_1_t2705874203 * __this, TurnBasedRound_t1233799461  p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<SkillzSDK.ContinuedTurnBasedMatch>::.ctor(!0)
extern "C"  void Nullable_1__ctor_m3660700179_gshared (Nullable_1_t1192268148 * __this, ContinuedTurnBasedMatch_t3764673362  p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<SkillzSDK.TurnBasedRound>::GetEnumerator()
extern "C"  Enumerator_t300150784  List_1_GetEnumerator_m4100385154_gshared (List_1_t2705874203 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<SkillzSDK.TurnBasedRound>::get_Current()
extern "C"  TurnBasedRound_t1233799461  Enumerator_get_Current_m3229262329_gshared (Enumerator_t300150784 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<SkillzSDK.TurnBasedRound>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m3624477067_gshared (Enumerator_t300150784 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<SkillzSDK.TurnBasedRound>::Dispose()
extern "C"  void Enumerator_Dispose_m1156375690_gshared (Enumerator_t300150784 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_deltaTime()
extern "C"  float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String GameSceneManager::GetPrevScene()
extern "C"  String_t* GameSceneManager_GetPrevScene_m2997470641 (GameSceneManager_t2999297734 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
extern "C"  void SceneManager_LoadScene_m1758133949 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
extern "C"  String_t* PlayerPrefs_GetString_m389913383 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
extern "C"  void PlayerPrefs_SetString_m2101271233 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AndroidJavaClass Skillz::GetSkillz()
extern "C"  AndroidJavaClass_t32045322 * Skillz_GetSkillz_m1754260856 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AndroidJavaObject Skillz::GetCurrentActivity()
extern "C"  AndroidJavaObject_t4131667876 * Skillz_GetCurrentActivity_m1705205339 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJavaObject::CallStatic(System.String,System.Object[])
extern "C"  void AndroidJavaObject_CallStatic_m2922144688 (AndroidJavaObject_t4131667876 * __this, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
#define AndroidJavaObject_CallStatic_TisBoolean_t97287965_m4111307719(__this, p0, p1, method) ((  bool (*) (AndroidJavaObject_t4131667876 *, String_t*, ObjectU5BU5D_t2843939325*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisBoolean_t97287965_m4111307719_gshared)(__this, p0, p1, method)
// System.Void System.Collections.Hashtable::.ctor()
extern "C"  void Hashtable__ctor_m1815022027 (Hashtable_t1853889766 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.AndroidJavaObject::CallStatic<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
#define AndroidJavaObject_CallStatic_TisAndroidJavaObject_t4131667876_m2031442458(__this, p0, p1, method) ((  AndroidJavaObject_t4131667876 * (*) (AndroidJavaObject_t4131667876 *, String_t*, ObjectU5BU5D_t2843939325*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_m1663918964_gshared)(__this, p0, p1, method)
// !!0 UnityEngine.AndroidJavaObject::Call<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
#define AndroidJavaObject_Call_TisAndroidJavaObject_t4131667876_m2649654213(__this, p0, p1, method) ((  AndroidJavaObject_t4131667876 * (*) (AndroidJavaObject_t4131667876 *, String_t*, ObjectU5BU5D_t2843939325*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_m3865839649_gshared)(__this, p0, p1, method)
// !!0 UnityEngine.AndroidJavaObject::Call<System.String>(System.String,System.Object[])
#define AndroidJavaObject_Call_TisString_t_m1899832687(__this, p0, p1, method) ((  String_t* (*) (AndroidJavaObject_t4131667876 *, String_t*, ObjectU5BU5D_t2843939325*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_m3865839649_gshared)(__this, p0, p1, method)
// !!0 UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
#define AndroidJavaObject_Call_TisBoolean_t97287965_m948263851(__this, p0, p1, method) ((  bool (*) (AndroidJavaObject_t4131667876 *, String_t*, ObjectU5BU5D_t2843939325*, const RuntimeMethod*))AndroidJavaObject_Call_TisBoolean_t97287965_m948263851_gshared)(__this, p0, p1, method)
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
extern "C"  void AndroidJavaObject__ctor_m3828648572 (AndroidJavaObject_t4131667876 * __this, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Single::ToString()
extern "C"  String_t* Single_ToString_m3947131094 (float* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.String>(System.String,System.Object[])
#define AndroidJavaObject_CallStatic_TisString_t_m3599693027(__this, p0, p1, method) ((  String_t* (*) (AndroidJavaObject_t4131667876 *, String_t*, ObjectU5BU5D_t2843939325*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_m1663918964_gshared)(__this, p0, p1, method)
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
extern "C"  void AndroidJavaClass__ctor_m366853020 (AndroidJavaClass_t32045322 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
#define AndroidJavaObject_GetStatic_TisAndroidJavaObject_t4131667876_m1414442298(__this, p0, method) ((  AndroidJavaObject_t4131667876 * (*) (AndroidJavaObject_t4131667876 *, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m3787108634_gshared)(__this, p0, method)
// System.Boolean Skillz::IsMatchInProgress()
extern "C"  bool Skillz_IsMatchInProgress_m3063185030 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.AndroidJavaObject::Call<System.Single>(System.String,System.Object[])
#define AndroidJavaObject_Call_TisSingle_t1397266774_m1436156811(__this, p0, p1, method) ((  float (*) (AndroidJavaObject_t4131667876 *, String_t*, ObjectU5BU5D_t2843939325*, const RuntimeMethod*))AndroidJavaObject_Call_TisSingle_t1397266774_m1436156811_gshared)(__this, p0, p1, method)
// System.Single UnityEngine.Random::get_value()
extern "C"  float Random_get_value_m3115885645 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single Skillz/Random::Value()
extern "C"  float Random_Value_m3600019517 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Quaternion__ctor_m435141806 (Quaternion_t2301928331 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Skillz/Random::RotationUniform()
extern "C"  Quaternion_t2301928331  Random_RotationUniform_m1635932153 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.Api::LaunchSkillz()
extern "C"  void Api_LaunchSkillz_m3695930818 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean SkillzSDK.Api::get_IsTournamentInProgress()
extern "C"  bool Api_get_IsTournamentInProgress_m2522558358 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable SkillzSDK.Api::GetMatchRules()
extern "C"  Hashtable_t1853889766 * Api_GetMatchRules_m1004458514 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.Api::AbortGame()
extern "C"  void Api_AbortGame_m1087523040 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single System.Single::Parse(System.String)
extern "C"  float Single_Parse_m364357836 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.Api::UpdatePlayerScore(System.Single)
extern "C"  void Api_UpdatePlayerScore_m3917494721 (RuntimeObject * __this /* static, unused */, float ___currentScoreForPlayer0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.Api::UpdatePlayerScore(System.Int32)
extern "C"  void Api_UpdatePlayerScore_m2639514829 (RuntimeObject * __this /* static, unused */, int32_t ___currentScoreForPlayer0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.Api::FinishTournament(System.Single)
extern "C"  void Api_FinishTournament_m3112126626 (RuntimeObject * __this /* static, unused */, float ___score0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.Api::FinishTournament(System.Int32)
extern "C"  void Api_FinishTournament_m2922484481 (RuntimeObject * __this /* static, unused */, int32_t ___score0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String SkillzSDK.Api::get_SDKVersionShort()
extern "C"  String_t* Api_get_SDKVersionShort_m3300381882 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// SkillzSDK.Player SkillzSDK.Api::get_Player()
extern "C"  Player_t2961656996  Api_get_Player_m3819377184 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.Api::AddMetadataForMatchInProgress(System.String,System.Boolean)
extern "C"  void Api_AddMetadataForMatchInProgress_m3539437012 (RuntimeObject * __this /* static, unused */, String_t* ___metadataJson0, bool ___forMatchInProgress1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Nullable`1<System.UInt32>::ToString()
#define Nullable_1_ToString_m1639120067(__this, method) ((  String_t* (*) (Nullable_1_t4282624060 *, const RuntimeMethod*))Nullable_1_ToString_m1639120067_gshared)(__this, method)
// System.Boolean SkillzCrossPlatform::IsMatchInProgress()
extern "C"  bool SkillzCrossPlatform_IsMatchInProgress_m3051185731 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single SkillzSDK.Api::_getRandomFloat()
extern "C"  float Api__getRandomFloat_m745272966 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single SkillzCrossPlatform/Random::Value()
extern "C"  float Random_Value_m919656150 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion SkillzCrossPlatform/Random::RotationUniform()
extern "C"  Quaternion_t2301928331  Random_RotationUniform_m2440073649 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::LoadLevel(System.String)
extern "C"  void Application_LoadLevel_m2650087286 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
extern "C"  void Object_DontDestroyOnLoad_m166252750 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Int32::ToString()
extern "C"  String_t* Int32_ToString_m141394615 (int32_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.Api::Initialize(System.String,SkillzSDK.Environment)
extern "C"  void Api_Initialize_m1562849269 (RuntimeObject * __this /* static, unused */, String_t* ___gameId0, int32_t ___environment1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
extern "C"  int32_t Application_get_platform_m2150679437 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AndroidJavaClass SkillzDelegate::GetSkillzPreferences()
extern "C"  AndroidJavaClass_t32045322 * SkillzDelegate_GetSkillzPreferences_m862293494 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AndroidJavaObject SkillzDelegate::GetCurrentActivity()
extern "C"  AndroidJavaObject_t4131667876 * SkillzDelegate_GetCurrentActivity_m2769826294 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C"  void Debug_LogWarning_m3752629331 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 SkillzSDK.Api::_tournamentIsInProgress()
extern "C"  int32_t Api__tournamentIsInProgress_m3775620099 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr SkillzSDK.Api::_player()
extern "C"  intptr_t Api__player_m1362132540 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAnsi(System.IntPtr)
extern "C"  String_t* Marshal_PtrToStringAnsi_m2474145239 (RuntimeObject * __this /* static, unused */, intptr_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> SkillzSDK.Api::DeserializeJSONToDictionary(System.String)
extern "C"  Dictionary_2_t2865362463 * Api_DeserializeJSONToDictionary_m2968966310 (RuntimeObject * __this /* static, unused */, String_t* ___jsonString0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.Player::.ctor(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void Player__ctor_m2866643626 (Player_t2961656996 * __this, Dictionary_2_t2865362463 * ___playerJSON0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr SkillzSDK.Api::_SDKShortVersion()
extern "C"  intptr_t Api__SDKShortVersion_m2578248954 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.Api::_skillzInitForGameIdAndEnvironment(System.String,System.String)
extern "C"  void Api__skillzInitForGameIdAndEnvironment_m3192474511 (RuntimeObject * __this /* static, unused */, String_t* ___gameId0, String_t* ___environment1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.Api::_launchSkillz()
extern "C"  void Api__launchSkillz_m664158212 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C"  void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.Api::_updatePlayersCurrentScore(System.Single)
extern "C"  void Api__updatePlayersCurrentScore_m246008890 (RuntimeObject * __this /* static, unused */, float ___score0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.Api::_updatePlayersCurrentStringScore(System.String)
extern "C"  void Api__updatePlayersCurrentStringScore_m4005077211 (RuntimeObject * __this /* static, unused */, String_t* ___score0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.Api::_updatePlayersCurrentIntScore(System.Int32)
extern "C"  void Api__updatePlayersCurrentIntScore_m3021323692 (RuntimeObject * __this /* static, unused */, int32_t ___score0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.Api::_notifyPlayerAbortWithCompletion()
extern "C"  void Api__notifyPlayerAbortWithCompletion_m960311694 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.Api::_displayTournamentResultsWithScore(System.Int32)
extern "C"  void Api__displayTournamentResultsWithScore_m3315146318 (RuntimeObject * __this /* static, unused */, int32_t ___score0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.Api::_displayTournamentResultsWithFloatScore(System.Single)
extern "C"  void Api__displayTournamentResultsWithFloatScore_m1284634361 (RuntimeObject * __this /* static, unused */, float ___score0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.Api::_displayTournamentResultsWithStringScore(System.String)
extern "C"  void Api__displayTournamentResultsWithStringScore_m2296794800 (RuntimeObject * __this /* static, unused */, String_t* ___score0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.Api::FinishTurn(System.String,SkillzSDK.TurnBasedRoundOutcome,SkillzSDK.TurnBasedMatchOutcome,System.String,System.Single,System.Single)
extern "C"  void Api_FinishTurn_m1359245850 (RuntimeObject * __this /* static, unused */, String_t* ___gameData0, int32_t ___roundOutcome1, int32_t ___matchOutcome2, String_t* ___playerTurnScore3, float ___playerTotalScore4, float ___opponentTotalScore5, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.Api::_completeTurnWithGameData(System.String,System.String,System.Single,System.Single,System.String,System.String)
extern "C"  void Api__completeTurnWithGameData_m1632710802 (RuntimeObject * __this /* static, unused */, String_t* ___gameData0, String_t* ___score1, float ___playerCurrentTotalScore2, float ___opponentCurrentTotalScore3, String_t* ___roundOutcome4, String_t* ___matchOutcome5, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.Api::_finishReviewingCurrentGameState()
extern "C"  void Api__finishReviewingCurrentGameState_m376951918 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.Api::_addMetadataForMatchInProgress(System.String,System.Boolean)
extern "C"  void Api__addMetadataForMatchInProgress_m3365956122 (RuntimeObject * __this /* static, unused */, String_t* ___metadataJson0, bool ___forMatchInProgress1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 SkillzSDK.Api::_getRandomNumber()
extern "C"  int32_t Api__getRandomNumber_m626801295 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 SkillzSDK.Api::_getRandomNumberWithMinAndMax(System.Int32,System.Int32)
extern "C"  int32_t Api__getRandomNumberWithMinAndMax_m679981106 (RuntimeObject * __this /* static, unused */, int32_t ___min0, int32_t ___max1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.Api::_showSDKVersionInfo()
extern "C"  void Api__showSDKVersionInfo_m2617811748 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr SkillzSDK.Api::_getMatchRules()
extern "C"  intptr_t Api__getMatchRules_m768486371 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Collections.IDictionary)
extern "C"  void Hashtable__ctor_m2112858046 (Hashtable_t1853889766 * __this, RuntimeObject* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object SkillzSDK.MiniJSON.Json::Deserialize(System.String)
extern "C"  RuntimeObject * Json_Deserialize_m639621384 (RuntimeObject * __this /* static, unused */, String_t* ___json0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single SkillzSDK.Api/Random::Value()
extern "C"  float Random_Value_m3937663143 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion SkillzSDK.Api/Random::RotationUniform()
extern "C"  Quaternion_t2301928331  Random_RotationUniform_m2406981108 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String SkillzSDK.Extensions.SkillzExtensions::SafeGetStringValue(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
extern "C"  String_t* SkillzExtensions_SafeGetStringValue_m3748395908 (RuntimeObject * __this /* static, unused */, Dictionary_2_t2865362463 * ___dict0, String_t* ___key1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object SkillzSDK.Extensions.SkillzExtensions::SafeGetValue(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
extern "C"  RuntimeObject * SkillzExtensions_SafeGetValue_m1149006436 (RuntimeObject * __this /* static, unused */, Dictionary_2_t2865362463 * ___dict0, String_t* ___key1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Object::GetType()
extern "C"  Type_t * Object_GetType_m88164663 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C"  Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Double> SkillzSDK.Extensions.SkillzExtensions::SafeGetDoubleValue(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
extern "C"  Nullable_1_t2317227445  SkillzExtensions_SafeGetDoubleValue_m1033428401 (RuntimeObject * __this /* static, unused */, Dictionary_2_t2865362463 * ___dict0, String_t* ___key1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.ContinuedTurnBasedMatch::.ctor(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void ContinuedTurnBasedMatch__ctor_m3686691244 (ContinuedTurnBasedMatch_t3764673362 * __this, Dictionary_2_t2865362463 * ___matchInfo0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object[])
extern "C"  String_t* String_Concat_m2971454694 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String SkillzSDK.ContinuedTurnBasedMatch::ToString()
extern "C"  String_t* ContinuedTurnBasedMatch_ToString_m1925674645 (ContinuedTurnBasedMatch_t3764673362 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String SkillzSDK.ContinuedTurnBasedMatch::get_OpponentAvatarURL()
extern "C"  String_t* ContinuedTurnBasedMatch_get_OpponentAvatarURL_m951854446 (ContinuedTurnBasedMatch_t3764673362 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String SkillzSDK.ContinuedTurnBasedMatch::get_OpponentDisplayName()
extern "C"  String_t* ContinuedTurnBasedMatch_get_OpponentDisplayName_m3190551676 (ContinuedTurnBasedMatch_t3764673362 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Nullable`1<System.UInt32>::get_HasValue()
#define Nullable_1_get_HasValue_m1763782828(__this, method) ((  bool (*) (Nullable_1_t4282624060 *, const RuntimeMethod*))Nullable_1_get_HasValue_m1763782828_gshared)(__this, method)
// !0 System.Nullable`1<System.UInt32>::get_Value()
#define Nullable_1_get_Value_m1994738269(__this, method) ((  uint32_t (*) (Nullable_1_t4282624060 *, const RuntimeMethod*))Nullable_1_get_Value_m1994738269_gshared)(__this, method)
// System.UInt32 SkillzSDK.ContinuedTurnBasedMatch::get_OpponentUniqueID()
extern "C"  uint32_t ContinuedTurnBasedMatch_get_OpponentUniqueID_m1460019975 (ContinuedTurnBasedMatch_t3764673362 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Boolean> SkillzSDK.Helpers::SafeBoolParse(System.String,System.String,System.String,System.String,System.String)
extern "C"  Nullable_1_t1819850047  Helpers_SafeBoolParse_m4269993608 (RuntimeObject * __this /* static, unused */, String_t* ___str0, String_t* ___trueStr1, String_t* ___falseStr2, String_t* ___trueInt3, String_t* ___falseInt4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Double> SkillzSDK.Helpers::SafeDoubleParse(System.String)
extern "C"  Nullable_1_t2317227445  Helpers_SafeDoubleParse_m3716186029 (RuntimeObject * __this /* static, unused */, String_t* ___str0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTime> SkillzSDK.Helpers::SafeParseUnixTime(System.Nullable`1<System.Double>)
extern "C"  Nullable_1_t1166124571  Helpers_SafeParseUnixTime_m1673506953 (RuntimeObject * __this /* static, unused */, Nullable_1_t2317227445  ___unixTime0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Int32> SkillzSDK.Helpers::SafeIntParse(System.String)
extern "C"  Nullable_1_t378540539  Helpers_SafeIntParse_m1084147332 (RuntimeObject * __this /* static, unused */, String_t* ___str0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.UInt32> SkillzSDK.Helpers::SafeUintParse(System.String)
extern "C"  Nullable_1_t4282624060  Helpers_SafeUintParse_m2387950348 (RuntimeObject * __this /* static, unused */, String_t* ___str0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0)
#define Dictionary_2_ContainsKey_m1520683221(__this, p0, method) ((  bool (*) (Dictionary_2_t2865362463 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m2278349286_gshared)(__this, p0, method)
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0)
#define Dictionary_2_get_Item_m3179620279(__this, p0, method) ((  RuntimeObject * (*) (Dictionary_2_t2865362463 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m2714930061_gshared)(__this, p0, method)
// System.Void System.Nullable`1<System.Boolean>::.ctor(!0)
#define Nullable_1__ctor_m269558965(__this, p0, method) ((  void (*) (Nullable_1_t1819850047 *, bool, const RuntimeMethod*))Nullable_1__ctor_m269558965_gshared)(__this, p0, method)
// System.Boolean System.Nullable`1<System.Double>::get_HasValue()
#define Nullable_1_get_HasValue_m1700900799(__this, method) ((  bool (*) (Nullable_1_t2317227445 *, const RuntimeMethod*))Nullable_1_get_HasValue_m1700900799_gshared)(__this, method)
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.DateTimeKind)
extern "C"  void DateTime__ctor_m2956360140 (DateTime_t3738529785 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, int32_t p4, int32_t p5, int32_t p6, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Nullable`1<System.Double>::get_Value()
#define Nullable_1_get_Value_m3507161817(__this, method) ((  double (*) (Nullable_1_t2317227445 *, const RuntimeMethod*))Nullable_1_get_Value_m3507161817_gshared)(__this, method)
// System.DateTime System.DateTime::AddSeconds(System.Double)
extern "C"  DateTime_t3738529785  DateTime_AddSeconds_m332574389 (DateTime_t3738529785 * __this, double p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Nullable`1<System.DateTime>::.ctor(!0)
#define Nullable_1__ctor_m3556066642(__this, p0, method) ((  void (*) (Nullable_1_t1166124571 *, DateTime_t3738529785 , const RuntimeMethod*))Nullable_1__ctor_m3556066642_gshared)(__this, p0, method)
// System.Boolean System.Double::TryParse(System.String,System.Double&)
extern "C"  bool Double_TryParse_m3021978240 (RuntimeObject * __this /* static, unused */, String_t* p0, double* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Nullable`1<System.Double>::.ctor(!0)
#define Nullable_1__ctor_m1383724426(__this, p0, method) ((  void (*) (Nullable_1_t2317227445 *, double, const RuntimeMethod*))Nullable_1__ctor_m1383724426_gshared)(__this, p0, method)
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
extern "C"  bool Int32_TryParse_m2404707562 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
#define Nullable_1__ctor_m3556133687(__this, p0, method) ((  void (*) (Nullable_1_t378540539 *, int32_t, const RuntimeMethod*))Nullable_1__ctor_m3556133687_gshared)(__this, p0, method)
// System.Boolean System.UInt32::TryParse(System.String,System.UInt32&)
extern "C"  bool UInt32_TryParse_m2819179361 (RuntimeObject * __this /* static, unused */, String_t* p0, uint32_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Nullable`1<System.UInt32>::.ctor(!0)
#define Nullable_1__ctor_m2245710918(__this, p0, method) ((  void (*) (Nullable_1_t4282624060 *, uint32_t, const RuntimeMethod*))Nullable_1__ctor_m2245710918_gshared)(__this, p0, method)
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Nullable`1<System.Single>::.ctor(!0)
#define Nullable_1__ctor_m2775392932(__this, p0, method) ((  void (*) (Nullable_1_t3119828856 *, float, const RuntimeMethod*))Nullable_1__ctor_m2775392932_gshared)(__this, p0, method)
// System.Nullable`1<System.Int32> SkillzSDK.Extensions.SkillzExtensions::SafeGetIntValue(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
extern "C"  Nullable_1_t378540539  SkillzExtensions_SafeGetIntValue_m2048183163 (RuntimeObject * __this /* static, unused */, Dictionary_2_t2865362463 * ___dict0, String_t* ___key1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Boolean> SkillzSDK.Extensions.SkillzExtensions::SafeGetBoolValue(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
extern "C"  Nullable_1_t1819850047  SkillzExtensions_SafeGetBoolValue_m2039874569 (RuntimeObject * __this /* static, unused */, Dictionary_2_t2865362463 * ___dict0, String_t* ___key1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
#define Dictionary_2__ctor_m4291560139(__this, method) ((  void (*) (Dictionary_2_t1632706988 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.Object>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m788364790(__this, method) ((  Enumerator_t524577942  (*) (Dictionary_2_t2865362463 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_m3278257048_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::get_Current()
#define Enumerator_get_Current_m687346582(__this, method) ((  KeyValuePair_2_t968067334  (*) (Enumerator_t524577942 *, const RuntimeMethod*))Enumerator_get_Current_m2655181939_gshared)(__this, method)
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m436157746(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t968067334 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3464904234_gshared)(__this, method)
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m1405741725(__this, method) ((  String_t* (*) (KeyValuePair_2_t968067334 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1328507389_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(!0,!1)
#define Dictionary_2_Add_m2958530770(__this, p0, p1, method) ((  void (*) (Dictionary_2_t1632706988 *, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m2387223709_gshared)(__this, p0, p1, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::MoveNext()
#define Enumerator_MoveNext_m597713471(__this, method) ((  bool (*) (Enumerator_t524577942 *, const RuntimeMethod*))Enumerator_MoveNext_m1107569389_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::Dispose()
#define Enumerator_Dispose_m2607424534(__this, method) ((  void (*) (Enumerator_t524577942 *, const RuntimeMethod*))Enumerator_Dispose_m3885012575_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.String>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m260861070(__this, method) ((  Enumerator_t3586889763  (*) (Dictionary_2_t1632706988 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_m3278257048_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::get_Current()
#define Enumerator_get_Current_m2519371089(__this, method) ((  KeyValuePair_2_t4030379155  (*) (Enumerator_t3586889763 *, const RuntimeMethod*))Enumerator_get_Current_m2655181939_gshared)(__this, method)
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
#define KeyValuePair_2_get_Key_m3980750512(__this, method) ((  String_t* (*) (KeyValuePair_2_t4030379155 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1328507389_gshared)(__this, method)
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
#define KeyValuePair_2_get_Value_m2243990694(__this, method) ((  String_t* (*) (KeyValuePair_2_t4030379155 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3464904234_gshared)(__this, method)
// System.String System.String::Concat(System.String[])
extern "C"  String_t* String_Concat_m1809518182 (RuntimeObject * __this /* static, unused */, StringU5BU5D_t1281789340* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::MoveNext()
#define Enumerator_MoveNext_m1175750522(__this, method) ((  bool (*) (Enumerator_t3586889763 *, const RuntimeMethod*))Enumerator_MoveNext_m1107569389_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::Dispose()
#define Enumerator_Dispose_m2198401511(__this, method) ((  void (*) (Enumerator_t3586889763 *, const RuntimeMethod*))Enumerator_Dispose_m3885012575_gshared)(__this, method)
// System.Object SkillzSDK.MiniJSON.Json/Parser::Parse(System.String)
extern "C"  RuntimeObject * Parser_Parse_m579644997 (RuntimeObject * __this /* static, unused */, String_t* ___jsonString0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String SkillzSDK.MiniJSON.Json/Serializer::Serialize(System.Object)
extern "C"  String_t* Serializer_Serialize_m3997990965 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringReader::.ctor(System.String)
extern "C"  void StringReader__ctor_m126993932 (StringReader_t3465604688 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsWhiteSpace(System.Char)
extern "C"  bool Char_IsWhiteSpace_m2148390798 (RuntimeObject * __this /* static, unused */, Il2CppChar p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.Char)
extern "C"  int32_t String_IndexOf_m363431711 (String_t* __this, Il2CppChar p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.MiniJSON.Json/Parser::.ctor(System.String)
extern "C"  void Parser__ctor_m2872727206 (Parser_t744090300 * __this, String_t* ___jsonString0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object SkillzSDK.MiniJSON.Json/Parser::ParseValue()
extern "C"  RuntimeObject * Parser_ParseValue_m3476452396 (Parser_t744090300 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextReader::Dispose()
extern "C"  void TextReader_Dispose_m4253712522 (TextReader_t283511965 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
#define Dictionary_2__ctor_m3962145734(__this, method) ((  void (*) (Dictionary_2_t2865362463 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// SkillzSDK.MiniJSON.Json/Parser/TOKEN SkillzSDK.MiniJSON.Json/Parser::get_NextToken()
extern "C"  int32_t Parser_get_NextToken_m3456563509 (Parser_t744090300 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String SkillzSDK.MiniJSON.Json/Parser::ParseString()
extern "C"  String_t* Parser_ParseString_m2447585359 (Parser_t744090300 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1)
#define Dictionary_2_set_Item_m2329160973(__this, p0, p1, method) ((  void (*) (Dictionary_2_t2865362463 *, String_t*, RuntimeObject *, const RuntimeMethod*))Dictionary_2_set_Item_m3474379962_gshared)(__this, p0, p1, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
#define List_1__ctor_m2321703786(__this, method) ((  void (*) (List_1_t257213610 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Object SkillzSDK.MiniJSON.Json/Parser::ParseByToken(SkillzSDK.MiniJSON.Json/Parser/TOKEN)
extern "C"  RuntimeObject * Parser_ParseByToken_m3089833922 (Parser_t744090300 * __this, int32_t ___token0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
#define List_1_Add_m3338814081(__this, p0, method) ((  void (*) (List_1_t257213610 *, RuntimeObject *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Object SkillzSDK.MiniJSON.Json/Parser::ParseNumber()
extern "C"  RuntimeObject * Parser_ParseNumber_m2559473348 (Parser_t744090300 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> SkillzSDK.MiniJSON.Json/Parser::ParseObject()
extern "C"  Dictionary_2_t2865362463 * Parser_ParseObject_m2337980612 (Parser_t744090300 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Object> SkillzSDK.MiniJSON.Json/Parser::ParseArray()
extern "C"  List_1_t257213610 * Parser_ParseArray_m452367317 (Parser_t744090300 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor()
extern "C"  void StringBuilder__ctor_m3121283359 (StringBuilder_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char SkillzSDK.MiniJSON.Json/Parser::get_NextChar()
extern "C"  Il2CppChar Parser_get_NextChar_m3195442849 (Parser_t744090300 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
extern "C"  StringBuilder_t * StringBuilder_Append_m2383614642 (StringBuilder_t * __this, Il2CppChar p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char[])
extern "C"  String_t* String_CreateString_m2818852475 (String_t* __this, CharU5BU5D_t3528271667* ___val0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.String,System.Int32)
extern "C"  int32_t Convert_ToInt32_m391894676 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String SkillzSDK.MiniJSON.Json/Parser::get_NextWord()
extern "C"  String_t* Parser_get_NextWord_m2019659234 (Parser_t744090300 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
extern "C"  CultureInfo_t4157843068 * CultureInfo_get_InvariantCulture_m3532445182 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int64::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Int64&)
extern "C"  bool Int64_TryParse_m3606398488 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t p1, RuntimeObject* p2, int64_t* p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Double::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Double&)
extern "C"  bool Double_TryParse_m623190659 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t p1, RuntimeObject* p2, double* p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char SkillzSDK.MiniJSON.Json/Parser::get_PeekChar()
extern "C"  Il2CppChar Parser_get_PeekChar_m1352524934 (Parser_t744090300 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.Int32)
extern "C"  Il2CppChar Convert_ToChar_m4189066566 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean SkillzSDK.MiniJSON.Json/Parser::IsWordBreak(System.Char)
extern "C"  bool Parser_IsWordBreak_m502866020 (RuntimeObject * __this /* static, unused */, Il2CppChar ___c0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.MiniJSON.Json/Parser::EatWhitespace()
extern "C"  void Parser_EatWhitespace_m1572341284 (Parser_t744090300 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.MiniJSON.Json/Serializer::.ctor()
extern "C"  void Serializer__ctor_m3762600030 (Serializer_t2308540583 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.MiniJSON.Json/Serializer::SerializeValue(System.Object)
extern "C"  void Serializer_SerializeValue_m686405948 (Serializer_t2308540583 * __this, RuntimeObject * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
extern "C"  StringBuilder_t * StringBuilder_Append_m1965104174 (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.MiniJSON.Json/Serializer::SerializeString(System.String)
extern "C"  void Serializer_SerializeString_m4252171944 (Serializer_t2308540583 * __this, String_t* ___str0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.MiniJSON.Json/Serializer::SerializeArray(System.Collections.IList)
extern "C"  void Serializer_SerializeArray_m1201005993 (Serializer_t2308540583 * __this, RuntimeObject* ___anArray0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.MiniJSON.Json/Serializer::SerializeObject(System.Collections.IDictionary)
extern "C"  void Serializer_SerializeObject_m3682694325 (Serializer_t2308540583 * __this, RuntimeObject* ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char,System.Int32)
extern "C"  String_t* String_CreateString_m1262864254 (String_t* __this, Il2CppChar ___c0, int32_t ___count1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.MiniJSON.Json/Serializer::SerializeOther(System.Object)
extern "C"  void Serializer_SerializeOther_m1045354682 (Serializer_t2308540583 * __this, RuntimeObject * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char[] System.String::ToCharArray()
extern "C"  CharU5BU5D_t3528271667* String_ToCharArray_m1492846834 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Char)
extern "C"  int32_t Convert_ToInt32_m1876369743 (RuntimeObject * __this /* static, unused */, Il2CppChar p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Int32::ToString(System.String)
extern "C"  String_t* Int32_ToString_m372259452 (int32_t* __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Single::ToString(System.String,System.IFormatProvider)
extern "C"  String_t* Single_ToString_m543431371 (float* __this, String_t* p0, RuntimeObject* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
extern "C"  StringBuilder_t * StringBuilder_Append_m1640838743 (StringBuilder_t * __this, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Object)
extern "C"  double Convert_ToDouble_m4025515304 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Double::ToString(System.String,System.IFormatProvider)
extern "C"  String_t* Double_ToString_m1051753975 (double* __this, String_t* p0, RuntimeObject* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.UInt32> SkillzSDK.Extensions.SkillzExtensions::SafeGetUintValue(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
extern "C"  Nullable_1_t4282624060  SkillzExtensions_SafeGetUintValue_m475157154 (RuntimeObject * __this /* static, unused */, Dictionary_2_t2865362463 * ___dict0, String_t* ___key1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String SkillzSDK.Player::ToString()
extern "C"  String_t* Player_ToString_m4275545513 (Player_t2961656996 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.Match::.ctor(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void Match__ctor_m3021370963 (Match_t1925635937 * __this, Dictionary_2_t2865362463 * ___jsonData0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTime> SkillzSDK.Extensions.SkillzExtensions::SafeGetUnixDateTimeValue(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
extern "C"  Nullable_1_t1166124571  SkillzExtensions_SafeGetUnixDateTimeValue_m2661374245 (RuntimeObject * __this /* static, unused */, Dictionary_2_t2865362463 * ___dict0, String_t* ___key1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<SkillzSDK.TurnBasedRound>::.ctor()
#define List_1__ctor_m402830882(__this, method) ((  void (*) (List_1_t2705874203 *, const RuntimeMethod*))List_1__ctor_m402830882_gshared)(__this, method)
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
#define List_1_GetEnumerator_m2930774921(__this, method) ((  Enumerator_t2146457487  (*) (List_1_t257213610 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
#define Enumerator_get_Current_m470245444(__this, method) ((  RuntimeObject * (*) (Enumerator_t2146457487 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Void SkillzSDK.TurnBasedRound::.ctor(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void TurnBasedRound__ctor_m164100429 (TurnBasedRound_t1233799461 * __this, Dictionary_2_t2865362463 * ___dict0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<SkillzSDK.TurnBasedRound>::Add(!0)
#define List_1_Add_m1731145970(__this, p0, method) ((  void (*) (List_1_t2705874203 *, TurnBasedRound_t1233799461 , const RuntimeMethod*))List_1_Add_m1731145970_gshared)(__this, p0, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
#define Enumerator_MoveNext_m2142368520(__this, method) ((  bool (*) (Enumerator_t2146457487 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
#define Enumerator_Dispose_m3007748546(__this, method) ((  void (*) (Enumerator_t2146457487 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Void System.Nullable`1<SkillzSDK.ContinuedTurnBasedMatch>::.ctor(!0)
#define Nullable_1__ctor_m3660700179(__this, p0, method) ((  void (*) (Nullable_1_t1192268148 *, ContinuedTurnBasedMatch_t3764673362 , const RuntimeMethod*))Nullable_1__ctor_m3660700179_gshared)(__this, p0, method)
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<SkillzSDK.TurnBasedRound>::GetEnumerator()
#define List_1_GetEnumerator_m4100385154(__this, method) ((  Enumerator_t300150784  (*) (List_1_t2705874203 *, const RuntimeMethod*))List_1_GetEnumerator_m4100385154_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<SkillzSDK.TurnBasedRound>::get_Current()
#define Enumerator_get_Current_m3229262329(__this, method) ((  TurnBasedRound_t1233799461  (*) (Enumerator_t300150784 *, const RuntimeMethod*))Enumerator_get_Current_m3229262329_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<SkillzSDK.TurnBasedRound>::MoveNext()
#define Enumerator_MoveNext_m3624477067(__this, method) ((  bool (*) (Enumerator_t300150784 *, const RuntimeMethod*))Enumerator_MoveNext_m3624477067_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<SkillzSDK.TurnBasedRound>::Dispose()
#define Enumerator_Dispose_m1156375690(__this, method) ((  void (*) (Enumerator_t300150784 *, const RuntimeMethod*))Enumerator_Dispose_m1156375690_gshared)(__this, method)
// System.String SkillzSDK.TurnBasedRound::ToString()
extern "C"  String_t* TurnBasedRound_ToString_m2659950938 (TurnBasedRound_t1233799461 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameSceneManager::.ctor()
extern "C"  void GameSceneManager__ctor_m568675883 (GameSceneManager_t2999297734 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameSceneManager::Update()
extern "C"  void GameSceneManager_Update_m3694737365 (GameSceneManager_t2999297734 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_startTimer_4();
		if (!L_0)
		{
			goto IL_003f;
		}
	}
	{
		float L_1 = __this->get_timer_5();
		float L_2 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_timer_5(((float)il2cpp_codegen_subtract((float)L_1, (float)L_2)));
		float L_3 = __this->get_timer_5();
		if ((!(((float)L_3) <= ((float)(0.0f)))))
		{
			goto IL_003f;
		}
	}
	{
		__this->set_startTimer_4((bool)0);
		String_t* L_4 = GameSceneManager_GetPrevScene_m2997470641(__this, /*hidden argument*/NULL);
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_003f:
	{
		return;
	}
}
// System.Void GameSceneManager::OnApplicationPause(System.Boolean)
extern "C"  void GameSceneManager_OnApplicationPause_m2616752940 (GameSceneManager_t2999297734 * __this, bool ___isPaused0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameSceneManager_OnApplicationPause_m2616752940_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___isPaused0;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		__this->set_startTimer_4((bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(GameSceneManager_t2999297734_il2cpp_TypeInfo_var);
		float L_1 = ((GameSceneManager_t2999297734_StaticFields*)il2cpp_codegen_static_fields_for(GameSceneManager_t2999297734_il2cpp_TypeInfo_var))->get_TIMER_LENGTH_3();
		__this->set_timer_5(L_1);
	}

IL_0018:
	{
		return;
	}
}
// System.String GameSceneManager::GetPrevScene()
extern "C"  String_t* GameSceneManager_GetPrevScene_m2997470641 (GameSceneManager_t2999297734 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameSceneManager_GetPrevScene_m2997470641_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameSceneManager_t2999297734_il2cpp_TypeInfo_var);
		String_t* L_0 = ((GameSceneManager_t2999297734_StaticFields*)il2cpp_codegen_static_fields_for(GameSceneManager_t2999297734_il2cpp_TypeInfo_var))->get_PREV_SCENE_2();
		String_t* L_1 = PlayerPrefs_GetString_m389913383(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void GameSceneManager::SetPrevScene(System.String)
extern "C"  void GameSceneManager_SetPrevScene_m3694103869 (RuntimeObject * __this /* static, unused */, String_t* ___scene0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameSceneManager_SetPrevScene_m3694103869_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameSceneManager_t2999297734_il2cpp_TypeInfo_var);
		String_t* L_0 = ((GameSceneManager_t2999297734_StaticFields*)il2cpp_codegen_static_fields_for(GameSceneManager_t2999297734_il2cpp_TypeInfo_var))->get_PREV_SCENE_2();
		String_t* L_1 = ___scene0;
		PlayerPrefs_SetString_m2101271233(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameSceneManager::.cctor()
extern "C"  void GameSceneManager__cctor_m4189588096 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameSceneManager__cctor_m4189588096_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((GameSceneManager_t2999297734_StaticFields*)il2cpp_codegen_static_fields_for(GameSceneManager_t2999297734_il2cpp_TypeInfo_var))->set_PREV_SCENE_2(_stringLiteral1002639002);
		((GameSceneManager_t2999297734_StaticFields*)il2cpp_codegen_static_fields_for(GameSceneManager_t2999297734_il2cpp_TypeInfo_var))->set_TIMER_LENGTH_3((0.25f));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Skillz::Launch()
extern "C"  void Skillz_Launch_m3673327423 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Skillz_Launch_m3673327423_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AndroidJavaClass_t32045322 * L_0 = Skillz_GetSkillz_m1754260856(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_1 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		AndroidJavaObject_t4131667876 * L_2 = Skillz_GetCurrentActivity_m1705205339(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m2922144688(L_0, _stringLiteral2004037916, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Skillz::IsMatchInProgress()
extern "C"  bool Skillz_IsMatchInProgress_m3063185030 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Skillz_IsMatchInProgress_m3063185030_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		AndroidJavaClass_t32045322 * L_0 = Skillz_GetSkillz_m1754260856(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = AndroidJavaObject_CallStatic_TisBoolean_t97287965_m4111307719(L_0, _stringLiteral919935400, ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/AndroidJavaObject_CallStatic_TisBoolean_t97287965_m4111307719_RuntimeMethod_var);
		V_0 = L_1;
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Collections.Hashtable Skillz::GetMatchRules()
extern "C"  Hashtable_t1853889766 * Skillz_GetMatchRules_m2415021141 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Skillz_GetMatchRules_m2415021141_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Hashtable_t1853889766 * V_0 = NULL;
	AndroidJavaObject_t4131667876 * V_1 = NULL;
	AndroidJavaObject_t4131667876 * V_2 = NULL;
	AndroidJavaObject_t4131667876 * V_3 = NULL;
	AndroidJavaObject_t4131667876 * V_4 = NULL;
	{
		Hashtable_t1853889766 * L_0 = (Hashtable_t1853889766 *)il2cpp_codegen_object_new(Hashtable_t1853889766_il2cpp_TypeInfo_var);
		Hashtable__ctor_m1815022027(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		AndroidJavaClass_t32045322 * L_1 = Skillz_GetSkillz_m1754260856(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		AndroidJavaObject_t4131667876 * L_2 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t4131667876_m2031442458(L_1, _stringLiteral238343282, ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/AndroidJavaObject_CallStatic_TisAndroidJavaObject_t4131667876_m2031442458_RuntimeMethod_var);
		V_1 = L_2;
		AndroidJavaObject_t4131667876 * L_3 = V_1;
		NullCheck(L_3);
		AndroidJavaObject_t4131667876 * L_4 = AndroidJavaObject_Call_TisAndroidJavaObject_t4131667876_m2649654213(L_3, _stringLiteral477167485, ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t4131667876_m2649654213_RuntimeMethod_var);
		V_2 = L_4;
		AndroidJavaObject_t4131667876 * L_5 = V_2;
		NullCheck(L_5);
		AndroidJavaObject_t4131667876 * L_6 = AndroidJavaObject_Call_TisAndroidJavaObject_t4131667876_m2649654213(L_5, _stringLiteral2970134904, ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t4131667876_m2649654213_RuntimeMethod_var);
		V_3 = L_6;
		goto IL_0082;
	}

IL_0045:
	{
		AndroidJavaObject_t4131667876 * L_7 = V_3;
		NullCheck(L_7);
		AndroidJavaObject_t4131667876 * L_8 = AndroidJavaObject_Call_TisAndroidJavaObject_t4131667876_m2649654213(L_7, _stringLiteral3987835844, ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t4131667876_m2649654213_RuntimeMethod_var);
		V_4 = L_8;
		Hashtable_t1853889766 * L_9 = V_0;
		AndroidJavaObject_t4131667876 * L_10 = V_4;
		NullCheck(L_10);
		String_t* L_11 = AndroidJavaObject_Call_TisString_t_m1899832687(L_10, _stringLiteral3808803602, ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/AndroidJavaObject_Call_TisString_t_m1899832687_RuntimeMethod_var);
		AndroidJavaObject_t4131667876 * L_12 = V_4;
		NullCheck(L_12);
		String_t* L_13 = AndroidJavaObject_Call_TisString_t_m1899832687(L_12, _stringLiteral1755624995, ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/AndroidJavaObject_Call_TisString_t_m1899832687_RuntimeMethod_var);
		NullCheck(L_9);
		VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(23 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_9, L_11, L_13);
	}

IL_0082:
	{
		AndroidJavaObject_t4131667876 * L_14 = V_3;
		NullCheck(L_14);
		bool L_15 = AndroidJavaObject_Call_TisBoolean_t97287965_m948263851(L_14, _stringLiteral2465423926, ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/AndroidJavaObject_Call_TisBoolean_t97287965_m948263851_RuntimeMethod_var);
		if (L_15)
		{
			goto IL_0045;
		}
	}
	{
		Hashtable_t1853889766 * L_16 = V_0;
		return L_16;
	}
}
// System.Void Skillz::AbortMatch()
extern "C"  void Skillz_AbortMatch_m566335097 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Skillz_AbortMatch_m566335097_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AndroidJavaClass_t32045322 * L_0 = Skillz_GetSkillz_m1754260856(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_1 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		AndroidJavaObject_t4131667876 * L_2 = Skillz_GetCurrentActivity_m1705205339(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m2922144688(L_0, _stringLiteral3390440049, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Skillz::UpdatePlayersCurrentScore(System.String)
extern "C"  void Skillz_UpdatePlayersCurrentScore_m257371438 (RuntimeObject * __this /* static, unused */, String_t* ___score0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Skillz_UpdatePlayersCurrentScore_m257371438_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t4131667876 * V_0 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		String_t* L_1 = ___score0;
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_1);
		AndroidJavaObject_t4131667876 * L_2 = (AndroidJavaObject_t4131667876 *)il2cpp_codegen_object_new(AndroidJavaObject_t4131667876_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m3828648572(L_2, _stringLiteral1721169208, L_0, /*hidden argument*/NULL);
		V_0 = L_2;
		AndroidJavaClass_t32045322 * L_3 = Skillz_GetSkillz_m1754260856(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_4 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2));
		AndroidJavaObject_t4131667876 * L_5 = Skillz_GetCurrentActivity_m1705205339(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		ObjectU5BU5D_t2843939325* L_6 = L_4;
		AndroidJavaObject_t4131667876 * L_7 = V_0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		NullCheck(L_3);
		AndroidJavaObject_CallStatic_m2922144688(L_3, _stringLiteral1353950911, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Skillz::UpdatePlayersCurrentScore(System.Int32)
extern "C"  void Skillz_UpdatePlayersCurrentScore_m3743257856 (RuntimeObject * __this /* static, unused */, int32_t ___score0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Skillz_UpdatePlayersCurrentScore_m3743257856_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t4131667876 * V_0 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		int32_t L_1 = ___score0;
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_3);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		AndroidJavaObject_t4131667876 * L_4 = (AndroidJavaObject_t4131667876 *)il2cpp_codegen_object_new(AndroidJavaObject_t4131667876_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m3828648572(L_4, _stringLiteral1721169208, L_0, /*hidden argument*/NULL);
		V_0 = L_4;
		AndroidJavaClass_t32045322 * L_5 = Skillz_GetSkillz_m1754260856(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_6 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2));
		AndroidJavaObject_t4131667876 * L_7 = Skillz_GetCurrentActivity_m1705205339(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_7);
		ObjectU5BU5D_t2843939325* L_8 = L_6;
		AndroidJavaObject_t4131667876 * L_9 = V_0;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_9);
		NullCheck(L_5);
		AndroidJavaObject_CallStatic_m2922144688(L_5, _stringLiteral1353950911, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Skillz::UpdatePlayersCurrentScore(System.Single)
extern "C"  void Skillz_UpdatePlayersCurrentScore_m2959754337 (RuntimeObject * __this /* static, unused */, float ___score0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Skillz_UpdatePlayersCurrentScore_m2959754337_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t4131667876 * V_0 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		String_t* L_1 = Single_ToString_m3947131094((float*)(&___score0), /*hidden argument*/NULL);
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_1);
		AndroidJavaObject_t4131667876 * L_2 = (AndroidJavaObject_t4131667876 *)il2cpp_codegen_object_new(AndroidJavaObject_t4131667876_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m3828648572(L_2, _stringLiteral1721169208, L_0, /*hidden argument*/NULL);
		V_0 = L_2;
		AndroidJavaClass_t32045322 * L_3 = Skillz_GetSkillz_m1754260856(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_4 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2));
		AndroidJavaObject_t4131667876 * L_5 = Skillz_GetCurrentActivity_m1705205339(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		ObjectU5BU5D_t2843939325* L_6 = L_4;
		AndroidJavaObject_t4131667876 * L_7 = V_0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		NullCheck(L_3);
		AndroidJavaObject_CallStatic_m2922144688(L_3, _stringLiteral1353950911, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Skillz::ReportScore(System.String)
extern "C"  void Skillz_ReportScore_m3895707234 (RuntimeObject * __this /* static, unused */, String_t* ___score0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Skillz_ReportScore_m3895707234_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t4131667876 * V_0 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		String_t* L_1 = ___score0;
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_1);
		AndroidJavaObject_t4131667876 * L_2 = (AndroidJavaObject_t4131667876 *)il2cpp_codegen_object_new(AndroidJavaObject_t4131667876_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m3828648572(L_2, _stringLiteral1721169208, L_0, /*hidden argument*/NULL);
		V_0 = L_2;
		AndroidJavaClass_t32045322 * L_3 = Skillz_GetSkillz_m1754260856(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_4 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2));
		AndroidJavaObject_t4131667876 * L_5 = Skillz_GetCurrentActivity_m1705205339(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		ObjectU5BU5D_t2843939325* L_6 = L_4;
		AndroidJavaObject_t4131667876 * L_7 = V_0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		NullCheck(L_3);
		AndroidJavaObject_CallStatic_m2922144688(L_3, _stringLiteral1714618831, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Skillz::ReportScore(System.Int32)
extern "C"  void Skillz_ReportScore_m2273239404 (RuntimeObject * __this /* static, unused */, int32_t ___score0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Skillz_ReportScore_m2273239404_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t4131667876 * V_0 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		int32_t L_1 = ___score0;
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_3);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		AndroidJavaObject_t4131667876 * L_4 = (AndroidJavaObject_t4131667876 *)il2cpp_codegen_object_new(AndroidJavaObject_t4131667876_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m3828648572(L_4, _stringLiteral1721169208, L_0, /*hidden argument*/NULL);
		V_0 = L_4;
		AndroidJavaClass_t32045322 * L_5 = Skillz_GetSkillz_m1754260856(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_6 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2));
		AndroidJavaObject_t4131667876 * L_7 = Skillz_GetCurrentActivity_m1705205339(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_7);
		ObjectU5BU5D_t2843939325* L_8 = L_6;
		AndroidJavaObject_t4131667876 * L_9 = V_0;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_9);
		NullCheck(L_5);
		AndroidJavaObject_CallStatic_m2922144688(L_5, _stringLiteral1714618831, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Skillz::ReportScore(System.Single)
extern "C"  void Skillz_ReportScore_m1217323751 (RuntimeObject * __this /* static, unused */, float ___score0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Skillz_ReportScore_m1217323751_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t4131667876 * V_0 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		String_t* L_1 = Single_ToString_m3947131094((float*)(&___score0), /*hidden argument*/NULL);
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_1);
		AndroidJavaObject_t4131667876 * L_2 = (AndroidJavaObject_t4131667876 *)il2cpp_codegen_object_new(AndroidJavaObject_t4131667876_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m3828648572(L_2, _stringLiteral1721169208, L_0, /*hidden argument*/NULL);
		V_0 = L_2;
		AndroidJavaClass_t32045322 * L_3 = Skillz_GetSkillz_m1754260856(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_4 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2));
		AndroidJavaObject_t4131667876 * L_5 = Skillz_GetCurrentActivity_m1705205339(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		ObjectU5BU5D_t2843939325* L_6 = L_4;
		AndroidJavaObject_t4131667876 * L_7 = V_0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		NullCheck(L_3);
		AndroidJavaObject_CallStatic_m2922144688(L_3, _stringLiteral1714618831, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Skillz::AddMetadataForMatchInProgress(System.String,System.Boolean)
extern "C"  void Skillz_AddMetadataForMatchInProgress_m2758983296 (RuntimeObject * __this /* static, unused */, String_t* ___metadataJson0, bool ___isMatchInProgress1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Skillz_AddMetadataForMatchInProgress_m2758983296_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AndroidJavaClass_t32045322 * L_0 = Skillz_GetSkillz_m1754260856(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_1 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2));
		String_t* L_2 = ___metadataJson0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t2843939325* L_3 = L_1;
		bool L_4 = ___isMatchInProgress1;
		bool L_5 = L_4;
		RuntimeObject * L_6 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m2922144688(L_0, _stringLiteral1798820815, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.String Skillz::SDKVersionShort()
extern "C"  String_t* Skillz_SDKVersionShort_m1202112188 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Skillz_SDKVersionShort_m1202112188_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		AndroidJavaClass_t32045322 * L_0 = Skillz_GetSkillz_m1754260856(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = AndroidJavaObject_CallStatic_TisString_t_m3599693027(L_0, _stringLiteral4204234082, ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/AndroidJavaObject_CallStatic_TisString_t_m3599693027_RuntimeMethod_var);
		V_0 = L_1;
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.String Skillz::CurrentUserDisplayName()
extern "C"  String_t* Skillz_CurrentUserDisplayName_m1258831207 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Skillz_CurrentUserDisplayName_m1258831207_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		AndroidJavaClass_t32045322 * L_0 = Skillz_GetSkillz_m1754260856(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_1 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		AndroidJavaObject_t4131667876 * L_2 = Skillz_GetCurrentActivity_m1705205339(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		NullCheck(L_0);
		String_t* L_3 = AndroidJavaObject_CallStatic_TisString_t_m3599693027(L_0, _stringLiteral3068533840, L_1, /*hidden argument*/AndroidJavaObject_CallStatic_TisString_t_m3599693027_RuntimeMethod_var);
		V_0 = L_3;
		String_t* L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.AndroidJavaClass Skillz::GetSkillz()
extern "C"  AndroidJavaClass_t32045322 * Skillz_GetSkillz_m1754260856 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Skillz_GetSkillz_m1754260856_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AndroidJavaClass_t32045322 * L_0 = (AndroidJavaClass_t32045322 *)il2cpp_codegen_object_new(AndroidJavaClass_t32045322_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_m366853020(L_0, _stringLiteral2747799586, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.AndroidJavaObject Skillz::GetCurrentActivity()
extern "C"  AndroidJavaObject_t4131667876 * Skillz_GetCurrentActivity_m1705205339 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Skillz_GetCurrentActivity_m1705205339_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_t32045322 * V_0 = NULL;
	AndroidJavaObject_t4131667876 * V_1 = NULL;
	{
		AndroidJavaClass_t32045322 * L_0 = (AndroidJavaClass_t32045322 *)il2cpp_codegen_object_new(AndroidJavaClass_t32045322_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_m366853020(L_0, _stringLiteral2149247999, /*hidden argument*/NULL);
		V_0 = L_0;
		AndroidJavaClass_t32045322 * L_1 = V_0;
		NullCheck(L_1);
		AndroidJavaObject_t4131667876 * L_2 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t4131667876_m1414442298(L_1, _stringLiteral3452315504, /*hidden argument*/AndroidJavaObject_GetStatic_TisAndroidJavaObject_t4131667876_m1414442298_RuntimeMethod_var);
		V_1 = L_2;
		AndroidJavaObject_t4131667876 * L_3 = V_1;
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Skillz/Player::GetId()
extern "C"  String_t* Player_GetId_m3058628368 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_GetId_m3058628368_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t4131667876 * V_0 = NULL;
	{
		AndroidJavaClass_t32045322 * L_0 = Skillz_GetSkillz_m1754260856(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_1 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		AndroidJavaObject_t4131667876 * L_2 = Skillz_GetCurrentActivity_m1705205339(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		NullCheck(L_0);
		AndroidJavaObject_t4131667876 * L_3 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t4131667876_m2031442458(L_0, _stringLiteral2261821926, L_1, /*hidden argument*/AndroidJavaObject_CallStatic_TisAndroidJavaObject_t4131667876_m2031442458_RuntimeMethod_var);
		V_0 = L_3;
		AndroidJavaObject_t4131667876 * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = AndroidJavaObject_Call_TisString_t_m1899832687(L_4, _stringLiteral4186487569, ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/AndroidJavaObject_Call_TisString_t_m1899832687_RuntimeMethod_var);
		return L_5;
	}
}
// System.String Skillz/Player::GetAvatarUrl()
extern "C"  String_t* Player_GetAvatarUrl_m2658549551 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_GetAvatarUrl_m2658549551_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t4131667876 * V_0 = NULL;
	{
		AndroidJavaClass_t32045322 * L_0 = Skillz_GetSkillz_m1754260856(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_1 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		AndroidJavaObject_t4131667876 * L_2 = Skillz_GetCurrentActivity_m1705205339(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		NullCheck(L_0);
		AndroidJavaObject_t4131667876 * L_3 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t4131667876_m2031442458(L_0, _stringLiteral2261821926, L_1, /*hidden argument*/AndroidJavaObject_CallStatic_TisAndroidJavaObject_t4131667876_m2031442458_RuntimeMethod_var);
		V_0 = L_3;
		AndroidJavaObject_t4131667876 * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = AndroidJavaObject_Call_TisString_t_m1899832687(L_4, _stringLiteral3398431868, ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/AndroidJavaObject_Call_TisString_t_m1899832687_RuntimeMethod_var);
		return L_5;
	}
}
// System.String Skillz/Player::GetFlagUrl()
extern "C"  String_t* Player_GetFlagUrl_m668577164 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_GetFlagUrl_m668577164_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t4131667876 * V_0 = NULL;
	{
		AndroidJavaClass_t32045322 * L_0 = Skillz_GetSkillz_m1754260856(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_1 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		AndroidJavaObject_t4131667876 * L_2 = Skillz_GetCurrentActivity_m1705205339(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		NullCheck(L_0);
		AndroidJavaObject_t4131667876 * L_3 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t4131667876_m2031442458(L_0, _stringLiteral2261821926, L_1, /*hidden argument*/AndroidJavaObject_CallStatic_TisAndroidJavaObject_t4131667876_m2031442458_RuntimeMethod_var);
		V_0 = L_3;
		AndroidJavaObject_t4131667876 * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = AndroidJavaObject_Call_TisString_t_m1899832687(L_4, _stringLiteral1396822555, ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/AndroidJavaObject_Call_TisString_t_m1899832687_RuntimeMethod_var);
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single Skillz/Random::Value()
extern "C"  float Random_Value_m3600019517 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Random_Value_m3600019517_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	AndroidJavaObject_t4131667876 * V_1 = NULL;
	{
		V_0 = (0.0f);
		bool L_0 = Skillz_IsMatchInProgress_m3063185030(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_003d;
		}
	}
	{
		AndroidJavaClass_t32045322 * L_1 = Skillz_GetSkillz_m1754260856(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		AndroidJavaObject_t4131667876 * L_2 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t4131667876_m2031442458(L_1, _stringLiteral4294067722, ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/AndroidJavaObject_CallStatic_TisAndroidJavaObject_t4131667876_m2031442458_RuntimeMethod_var);
		V_1 = L_2;
		AndroidJavaObject_t4131667876 * L_3 = V_1;
		NullCheck(L_3);
		float L_4 = AndroidJavaObject_Call_TisSingle_t1397266774_m1436156811(L_3, _stringLiteral1778944692, ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/AndroidJavaObject_Call_TisSingle_t1397266774_m1436156811_RuntimeMethod_var);
		V_0 = L_4;
		goto IL_0043;
	}

IL_003d:
	{
		float L_5 = Random_get_value_m3115885645(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_0043:
	{
		float L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.Vector3 Skillz/Random::InsideUnitSphere()
extern "C"  Vector3_t3722313464  Random_InsideUnitSphere_m1723542434 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Random_InsideUnitSphere_m1723542434_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		float L_0 = Random_Value_m3600019517(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = Random_Value_m3600019517(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_multiply((float)L_1, (float)(3.14159274f)));
		float L_2 = Random_Value_m3600019517(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_2, (float)(3.14159274f))), (float)(2.0f)));
		float L_3 = V_0;
		float L_4 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_5 = cosf(L_4);
		float L_6 = V_1;
		float L_7 = sinf(L_6);
		V_3 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_3, (float)L_5)), (float)L_7));
		float L_8 = V_0;
		float L_9 = V_2;
		float L_10 = sinf(L_9);
		float L_11 = V_1;
		float L_12 = sinf(L_11);
		V_4 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_8, (float)L_10)), (float)L_12));
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = cosf(L_14);
		V_5 = ((float)il2cpp_codegen_multiply((float)L_13, (float)L_15));
		float L_16 = V_3;
		float L_17 = V_4;
		float L_18 = V_5;
		Vector3_t3722313464  L_19;
		memset(&L_19, 0, sizeof(L_19));
		Vector3__ctor_m3353183577((&L_19), L_16, L_17, L_18, /*hidden argument*/NULL);
		return L_19;
	}
}
// UnityEngine.Vector2 Skillz/Random::InsideUnitCircle()
extern "C"  Vector2_t2156229523  Random_InsideUnitCircle_m3376432988 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Random_InsideUnitCircle_m3376432988_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector2_t2156229523  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		V_0 = (1.0f);
		float L_0 = Random_Value_m3600019517(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_0, (float)(2.0f))), (float)(3.14159274f)));
		il2cpp_codegen_initobj((&V_2), sizeof(Vector2_t2156229523 ));
		float L_1 = V_0;
		float L_2 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_3 = cosf(L_2);
		(&V_2)->set_x_0(((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)));
		float L_4 = V_0;
		float L_5 = V_1;
		float L_6 = sinf(L_5);
		(&V_2)->set_y_1(((float)il2cpp_codegen_multiply((float)L_4, (float)L_6)));
		Vector2_t2156229523  L_7 = V_2;
		return L_7;
	}
}
// UnityEngine.Vector3 Skillz/Random::OnUnitSphere()
extern "C"  Vector3_t3722313464  Random_OnUnitSphere_m2777744284 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Random_OnUnitSphere_m2777744284_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t3722313464 ));
	}

IL_0008:
	{
		float L_0 = Random_Value_m3600019517(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->set_x_1(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)(((float)((float)L_0))))), (float)(1.0f))));
		float L_1 = Random_Value_m3600019517(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->set_y_2(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)(((float)((float)L_1))))), (float)(1.0f))));
		float L_2 = (&V_0)->get_x_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_3 = powf(L_2, (2.0f));
		float L_4 = (&V_0)->get_y_2();
		float L_5 = powf(L_4, (2.0f));
		V_1 = ((float)il2cpp_codegen_add((float)L_3, (float)L_5));
		float L_6 = V_1;
		if ((((float)L_6) > ((float)(1.0f))))
		{
			goto IL_0008;
		}
	}
	{
		float L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_8 = sqrtf(((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_7)));
		V_2 = ((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_8));
		Vector3_t3722313464 * L_9 = (&V_0);
		float L_10 = L_9->get_x_1();
		float L_11 = V_2;
		L_9->set_x_1(((float)il2cpp_codegen_multiply((float)L_10, (float)L_11)));
		Vector3_t3722313464 * L_12 = (&V_0);
		float L_13 = L_12->get_y_2();
		float L_14 = V_2;
		L_12->set_y_2(((float)il2cpp_codegen_multiply((float)L_13, (float)L_14)));
		float L_15 = V_1;
		(&V_0)->set_z_3(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_15)), (float)(1.0f))));
		Vector3_t3722313464  L_16 = V_0;
		return L_16;
	}
}
// UnityEngine.Quaternion Skillz/Random::RotationUniform()
extern "C"  Quaternion_t2301928331  Random_RotationUniform_m1635932153 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Random_RotationUniform_m1635932153_MetadataUsageId);
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
	{
		float L_0 = Random_Value_m3600019517(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = Random_Value_m3600019517(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = Random_Value_m3600019517(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_2;
		float L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_4 = sqrtf(L_3);
		V_3 = L_4;
		float L_5 = V_0;
		float L_6 = sqrtf(((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_5)));
		V_4 = L_6;
		float L_7 = V_4;
		float L_8 = V_1;
		float L_9 = sinf(((float)il2cpp_codegen_multiply((float)(6.28318548f), (float)L_8)));
		V_5 = ((float)il2cpp_codegen_multiply((float)L_7, (float)L_9));
		float L_10 = V_4;
		float L_11 = V_1;
		float L_12 = cosf(((float)il2cpp_codegen_multiply((float)(6.28318548f), (float)L_11)));
		V_6 = ((float)il2cpp_codegen_multiply((float)L_10, (float)L_12));
		float L_13 = V_3;
		float L_14 = V_2;
		float L_15 = sinf(((float)il2cpp_codegen_multiply((float)(6.28318548f), (float)L_14)));
		V_7 = ((float)il2cpp_codegen_multiply((float)L_13, (float)L_15));
		float L_16 = V_3;
		float L_17 = V_2;
		float L_18 = cosf(((float)il2cpp_codegen_multiply((float)(6.28318548f), (float)L_17)));
		V_8 = ((float)il2cpp_codegen_multiply((float)L_16, (float)L_18));
		float L_19 = V_5;
		float L_20 = V_6;
		float L_21 = V_7;
		float L_22 = V_8;
		Quaternion_t2301928331  L_23;
		memset(&L_23, 0, sizeof(L_23));
		Quaternion__ctor_m435141806((&L_23), L_19, L_20, L_21, L_22, /*hidden argument*/NULL);
		return L_23;
	}
}
// UnityEngine.Quaternion Skillz/Random::Rotation()
extern "C"  Quaternion_t2301928331  Random_Rotation_m3055737740 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		Quaternion_t2301928331  L_0 = Random_RotationUniform_m1635932153(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Single Skillz/Random::Range(System.Single,System.Single)
extern "C"  float Random_Range_m2803966720 (RuntimeObject * __this /* static, unused */, float ___min0, float ___max1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = Random_Value_m3600019517(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = ___min0;
		float L_2 = V_0;
		float L_3 = ___max1;
		float L_4 = ___min0;
		return ((float)il2cpp_codegen_add((float)L_1, (float)((float)il2cpp_codegen_multiply((float)L_2, (float)((float)il2cpp_codegen_subtract((float)L_3, (float)L_4))))));
	}
}
// System.Int32 Skillz/Random::Range(System.Int32,System.Int32)
extern "C"  int32_t Random_Range_m1159738737 (RuntimeObject * __this /* static, unused */, int32_t ___min0, int32_t ___max1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = Random_Value_m3600019517(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = ___min0;
		float L_2 = V_0;
		int32_t L_3 = ___max1;
		int32_t L_4 = ___min0;
		return ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)(((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)L_2, (float)(((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)L_4))))))))))));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SkillzCrossPlatform::LaunchSkillz()
extern "C"  void SkillzCrossPlatform_LaunchSkillz_m630391766 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		Api_LaunchSkillz_m3695930818(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SkillzCrossPlatform::IsMatchInProgress()
extern "C"  bool SkillzCrossPlatform_IsMatchInProgress_m3051185731 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		bool L_0 = Api_get_IsTournamentInProgress_m2522558358(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Collections.Hashtable SkillzCrossPlatform::GetMatchRules()
extern "C"  Hashtable_t1853889766 * SkillzCrossPlatform_GetMatchRules_m659662059 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		Hashtable_t1853889766 * L_0 = Api_GetMatchRules_m1004458514(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void SkillzCrossPlatform::AbortMatch()
extern "C"  void SkillzCrossPlatform_AbortMatch_m3288244518 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		Api_AbortGame_m1087523040(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzCrossPlatform::UpdatePlayersCurrentScore(System.String)
extern "C"  void SkillzCrossPlatform_UpdatePlayersCurrentScore_m3697324461 (RuntimeObject * __this /* static, unused */, String_t* ___score0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___score0;
		float L_1 = Single_Parse_m364357836(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Api_UpdatePlayerScore_m3917494721(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzCrossPlatform::UpdatePlayersCurrentScore(System.Int32)
extern "C"  void SkillzCrossPlatform_UpdatePlayersCurrentScore_m2714058276 (RuntimeObject * __this /* static, unused */, int32_t ___score0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___score0;
		Api_UpdatePlayerScore_m2639514829(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzCrossPlatform::UpdatePlayersCurrentScore(System.Single)
extern "C"  void SkillzCrossPlatform_UpdatePlayersCurrentScore_m1554176879 (RuntimeObject * __this /* static, unused */, float ___score0, const RuntimeMethod* method)
{
	{
		float L_0 = ___score0;
		Api_UpdatePlayerScore_m3917494721(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzCrossPlatform::ReportFinalScore(System.String)
extern "C"  void SkillzCrossPlatform_ReportFinalScore_m3670549424 (RuntimeObject * __this /* static, unused */, String_t* ___score0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___score0;
		float L_1 = Single_Parse_m364357836(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Api_FinishTournament_m3112126626(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzCrossPlatform::ReportFinalScore(System.Int32)
extern "C"  void SkillzCrossPlatform_ReportFinalScore_m3641759666 (RuntimeObject * __this /* static, unused */, int32_t ___score0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___score0;
		Api_FinishTournament_m2922484481(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzCrossPlatform::ReportFinalScore(System.Single)
extern "C"  void SkillzCrossPlatform_ReportFinalScore_m2115713365 (RuntimeObject * __this /* static, unused */, float ___score0, const RuntimeMethod* method)
{
	{
		float L_0 = ___score0;
		Api_FinishTournament_m3112126626(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String SkillzCrossPlatform::SDKVersionShort()
extern "C"  String_t* SkillzCrossPlatform_SDKVersionShort_m2867820836 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		String_t* L_0 = Api_get_SDKVersionShort_m3300381882(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String SkillzCrossPlatform::CurrentUserDisplayName()
extern "C"  String_t* SkillzCrossPlatform_CurrentUserDisplayName_m2290825413 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	Player_t2961656996  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Player_t2961656996  L_0 = Api_get_Player_m3819377184(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = (&V_0)->get_DisplayName_0();
		return L_1;
	}
}
// System.Void SkillzCrossPlatform::AddMetadataForMatchInProgress(System.String,System.Boolean)
extern "C"  void SkillzCrossPlatform_AddMetadataForMatchInProgress_m1150526934 (RuntimeObject * __this /* static, unused */, String_t* ___metadataJson0, bool ___forMatchInProgress1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___metadataJson0;
		bool L_1 = ___forMatchInProgress1;
		Api_AddMetadataForMatchInProgress_m3539437012(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.AndroidJavaClass SkillzCrossPlatform::GetSkillz()
extern "C"  AndroidJavaClass_t32045322 * SkillzCrossPlatform_GetSkillz_m1312181533 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkillzCrossPlatform_GetSkillz_m1312181533_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AndroidJavaClass_t32045322 * L_0 = (AndroidJavaClass_t32045322 *)il2cpp_codegen_object_new(AndroidJavaClass_t32045322_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_m366853020(L_0, _stringLiteral2747799586, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String SkillzCrossPlatform/Player::GetId()
extern "C"  String_t* Player_GetId_m721593025 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_GetId_m721593025_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Player_t2961656996  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Nullable_1_t4282624060  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Player_t2961656996  L_0 = Api_get_Player_m3819377184(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		Nullable_1_t4282624060  L_1 = (&V_0)->get_ID_1();
		V_1 = L_1;
		String_t* L_2 = Nullable_1_ToString_m1639120067((Nullable_1_t4282624060 *)(&V_1), /*hidden argument*/Nullable_1_ToString_m1639120067_RuntimeMethod_var);
		return L_2;
	}
}
// System.String SkillzCrossPlatform/Player::GetAvatarUrl()
extern "C"  String_t* Player_GetAvatarUrl_m165871242 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	Player_t2961656996  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Player_t2961656996  L_0 = Api_get_Player_m3819377184(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = (&V_0)->get_AvatarURL_2();
		return L_1;
	}
}
// System.String SkillzCrossPlatform/Player::GetFlagUrl()
extern "C"  String_t* Player_GetFlagUrl_m707374729 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	Player_t2961656996  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Player_t2961656996  L_0 = Api_get_Player_m3819377184(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = (&V_0)->get_FlagURL_3();
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single SkillzCrossPlatform/Random::Value()
extern "C"  float Random_Value_m919656150 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		bool L_0 = SkillzCrossPlatform_IsMatchInProgress_m3051185731(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		float L_1 = Api__getRandomFloat_m745272966(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0021;
	}

IL_001b:
	{
		float L_2 = Random_get_value_m3115885645(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_2;
	}

IL_0021:
	{
		float L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Vector3 SkillzCrossPlatform/Random::InsideUnitSphere()
extern "C"  Vector3_t3722313464  Random_InsideUnitSphere_m3158642049 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Random_InsideUnitSphere_m3158642049_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		float L_0 = Random_Value_m919656150(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = Random_Value_m919656150(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_multiply((float)L_1, (float)(3.14159274f)));
		float L_2 = Random_Value_m919656150(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_2, (float)(3.14159274f))), (float)(2.0f)));
		float L_3 = V_0;
		float L_4 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_5 = cosf(L_4);
		float L_6 = V_1;
		float L_7 = sinf(L_6);
		V_3 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_3, (float)L_5)), (float)L_7));
		float L_8 = V_0;
		float L_9 = V_2;
		float L_10 = sinf(L_9);
		float L_11 = V_1;
		float L_12 = sinf(L_11);
		V_4 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_8, (float)L_10)), (float)L_12));
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = cosf(L_14);
		V_5 = ((float)il2cpp_codegen_multiply((float)L_13, (float)L_15));
		float L_16 = V_3;
		float L_17 = V_4;
		float L_18 = V_5;
		Vector3_t3722313464  L_19;
		memset(&L_19, 0, sizeof(L_19));
		Vector3__ctor_m3353183577((&L_19), L_16, L_17, L_18, /*hidden argument*/NULL);
		return L_19;
	}
}
// UnityEngine.Vector2 SkillzCrossPlatform/Random::InsideUnitCircle()
extern "C"  Vector2_t2156229523  Random_InsideUnitCircle_m1205585536 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Random_InsideUnitCircle_m1205585536_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector2_t2156229523  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		V_0 = (1.0f);
		float L_0 = Random_Value_m919656150(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_0, (float)(2.0f))), (float)(3.14159274f)));
		il2cpp_codegen_initobj((&V_2), sizeof(Vector2_t2156229523 ));
		float L_1 = V_0;
		float L_2 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_3 = cosf(L_2);
		(&V_2)->set_x_0(((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)));
		float L_4 = V_0;
		float L_5 = V_1;
		float L_6 = sinf(L_5);
		(&V_2)->set_y_1(((float)il2cpp_codegen_multiply((float)L_4, (float)L_6)));
		Vector2_t2156229523  L_7 = V_2;
		return L_7;
	}
}
// UnityEngine.Vector3 SkillzCrossPlatform/Random::OnUnitSphere()
extern "C"  Vector3_t3722313464  Random_OnUnitSphere_m1681403655 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Random_OnUnitSphere_m1681403655_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t3722313464 ));
	}

IL_0008:
	{
		float L_0 = Random_Value_m919656150(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->set_x_1(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)(((float)((float)L_0))))), (float)(1.0f))));
		float L_1 = Random_Value_m919656150(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->set_y_2(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)(((float)((float)L_1))))), (float)(1.0f))));
		float L_2 = (&V_0)->get_x_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_3 = powf(L_2, (2.0f));
		float L_4 = (&V_0)->get_y_2();
		float L_5 = powf(L_4, (2.0f));
		V_1 = ((float)il2cpp_codegen_add((float)L_3, (float)L_5));
		float L_6 = V_1;
		if ((((float)L_6) > ((float)(1.0f))))
		{
			goto IL_0008;
		}
	}
	{
		float L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_8 = sqrtf(((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_7)));
		V_2 = ((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_8));
		Vector3_t3722313464 * L_9 = (&V_0);
		float L_10 = L_9->get_x_1();
		float L_11 = V_2;
		L_9->set_x_1(((float)il2cpp_codegen_multiply((float)L_10, (float)L_11)));
		Vector3_t3722313464 * L_12 = (&V_0);
		float L_13 = L_12->get_y_2();
		float L_14 = V_2;
		L_12->set_y_2(((float)il2cpp_codegen_multiply((float)L_13, (float)L_14)));
		float L_15 = V_1;
		(&V_0)->set_z_3(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_15)), (float)(1.0f))));
		Vector3_t3722313464  L_16 = V_0;
		return L_16;
	}
}
// UnityEngine.Quaternion SkillzCrossPlatform/Random::RotationUniform()
extern "C"  Quaternion_t2301928331  Random_RotationUniform_m2440073649 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Random_RotationUniform_m2440073649_MetadataUsageId);
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
	{
		float L_0 = Random_Value_m919656150(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = Random_Value_m919656150(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = Random_Value_m919656150(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_2;
		float L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_4 = sqrtf(L_3);
		V_3 = L_4;
		float L_5 = V_0;
		float L_6 = sqrtf(((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_5)));
		V_4 = L_6;
		float L_7 = V_4;
		float L_8 = V_1;
		float L_9 = sinf(((float)il2cpp_codegen_multiply((float)(6.28318548f), (float)L_8)));
		V_5 = ((float)il2cpp_codegen_multiply((float)L_7, (float)L_9));
		float L_10 = V_4;
		float L_11 = V_1;
		float L_12 = cosf(((float)il2cpp_codegen_multiply((float)(6.28318548f), (float)L_11)));
		V_6 = ((float)il2cpp_codegen_multiply((float)L_10, (float)L_12));
		float L_13 = V_3;
		float L_14 = V_2;
		float L_15 = sinf(((float)il2cpp_codegen_multiply((float)(6.28318548f), (float)L_14)));
		V_7 = ((float)il2cpp_codegen_multiply((float)L_13, (float)L_15));
		float L_16 = V_3;
		float L_17 = V_2;
		float L_18 = cosf(((float)il2cpp_codegen_multiply((float)(6.28318548f), (float)L_17)));
		V_8 = ((float)il2cpp_codegen_multiply((float)L_16, (float)L_18));
		float L_19 = V_5;
		float L_20 = V_6;
		float L_21 = V_7;
		float L_22 = V_8;
		Quaternion_t2301928331  L_23;
		memset(&L_23, 0, sizeof(L_23));
		Quaternion__ctor_m435141806((&L_23), L_19, L_20, L_21, L_22, /*hidden argument*/NULL);
		return L_23;
	}
}
// UnityEngine.Quaternion SkillzCrossPlatform/Random::Rotation()
extern "C"  Quaternion_t2301928331  Random_Rotation_m3135877901 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		Quaternion_t2301928331  L_0 = Random_RotationUniform_m2440073649(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Single SkillzCrossPlatform/Random::Range(System.Single,System.Single)
extern "C"  float Random_Range_m34752324 (RuntimeObject * __this /* static, unused */, float ___min0, float ___max1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = Random_Value_m919656150(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = ___min0;
		float L_2 = V_0;
		float L_3 = ___max1;
		float L_4 = ___min0;
		return ((float)il2cpp_codegen_add((float)L_1, (float)((float)il2cpp_codegen_multiply((float)L_2, (float)((float)il2cpp_codegen_subtract((float)L_3, (float)L_4))))));
	}
}
// System.Int32 SkillzCrossPlatform/Random::Range(System.Int32,System.Int32)
extern "C"  int32_t Random_Range_m135660526 (RuntimeObject * __this /* static, unused */, int32_t ___min0, int32_t ___max1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = Random_Value_m919656150(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = ___min0;
		float L_2 = V_0;
		int32_t L_3 = ___max1;
		int32_t L_4 = ___min0;
		return ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)(((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)L_2, (float)(((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)L_4))))))))))));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SkillzDelegate::.ctor()
extern "C"  void SkillzDelegate__ctor_m2676049584 (SkillzDelegate_t3178178617 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzDelegate::OnMatchWillBegin()
extern "C"  void SkillzDelegate_OnMatchWillBegin_m2359423314 (SkillzDelegate_t3178178617 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkillzDelegate_OnMatchWillBegin_m2359423314_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Application_LoadLevel_m2650087286(NULL /*static, unused*/, _stringLiteral62725234, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzDelegate::OnSkillzWillExit()
extern "C"  void SkillzDelegate_OnSkillzWillExit_m4049406625 (SkillzDelegate_t3178178617 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkillzDelegate_OnSkillzWillExit_m4049406625_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Application_LoadLevel_m2650087286(NULL /*static, unused*/, _stringLiteral2707269980, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzDelegate::Awake()
extern "C"  void SkillzDelegate_Awake_m2407513439 (SkillzDelegate_t3178178617 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkillzDelegate_Awake_m2407513439_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SkillzDelegate_t3178178617_il2cpp_TypeInfo_var);
		bool L_0 = ((SkillzDelegate_t3178178617_StaticFields*)il2cpp_codegen_static_fields_for(SkillzDelegate_t3178178617_il2cpp_TypeInfo_var))->get_initializedYet_4();
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SkillzDelegate_t3178178617_il2cpp_TypeInfo_var);
		((SkillzDelegate_t3178178617_StaticFields*)il2cpp_codegen_static_fields_for(SkillzDelegate_t3178178617_il2cpp_TypeInfo_var))->set_initializedYet_4((bool)1);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m166252750(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		int32_t* L_2 = __this->get_address_of_GameID_2();
		String_t* L_3 = Int32_ToString_m141394615((int32_t*)L_2, /*hidden argument*/NULL);
		int32_t L_4 = __this->get_SkillzEnvironment_3();
		Api_Initialize_m1562849269(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzDelegate::AndroidInitialize(System.String,System.String)
extern "C"  void SkillzDelegate_AndroidInitialize_m2855825067 (RuntimeObject * __this /* static, unused */, String_t* ___gameId0, String_t* ___environment1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkillzDelegate_AndroidInitialize_m2855825067_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		int32_t L_0 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0074;
		}
	}
	{
		String_t* L_1 = ___environment1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Equality_m920492651(NULL /*static, unused*/, L_1, _stringLiteral1518127339, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		V_0 = _stringLiteral3875954633;
		goto IL_002d;
	}

IL_0027:
	{
		V_0 = _stringLiteral4002445229;
	}

IL_002d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SkillzDelegate_t3178178617_il2cpp_TypeInfo_var);
		AndroidJavaClass_t32045322 * L_3 = SkillzDelegate_GetSkillzPreferences_m862293494(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_4 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2));
		AndroidJavaObject_t4131667876 * L_5 = SkillzDelegate_GetCurrentActivity_m2769826294(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		ObjectU5BU5D_t2843939325* L_6 = L_4;
		String_t* L_7 = ___gameId0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		NullCheck(L_3);
		AndroidJavaObject_CallStatic_m2922144688(L_3, _stringLiteral69044786, L_6, /*hidden argument*/NULL);
		AndroidJavaClass_t32045322 * L_8 = SkillzDelegate_GetSkillzPreferences_m862293494(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_9 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2));
		AndroidJavaObject_t4131667876 * L_10 = SkillzDelegate_GetCurrentActivity_m2769826294(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_10);
		ObjectU5BU5D_t2843939325* L_11 = L_9;
		String_t* L_12 = V_0;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_12);
		NullCheck(L_8);
		AndroidJavaObject_CallStatic_m2922144688(L_8, _stringLiteral817137886, L_11, /*hidden argument*/NULL);
		goto IL_007e;
	}

IL_0074:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, _stringLiteral2902724446, /*hidden argument*/NULL);
	}

IL_007e:
	{
		return;
	}
}
// UnityEngine.AndroidJavaClass SkillzDelegate::GetSkillzPreferences()
extern "C"  AndroidJavaClass_t32045322 * SkillzDelegate_GetSkillzPreferences_m862293494 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkillzDelegate_GetSkillzPreferences_m862293494_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AndroidJavaClass_t32045322 * L_0 = (AndroidJavaClass_t32045322 *)il2cpp_codegen_object_new(AndroidJavaClass_t32045322_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_m366853020(L_0, _stringLiteral2747799586, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.AndroidJavaObject SkillzDelegate::GetCurrentActivity()
extern "C"  AndroidJavaObject_t4131667876 * SkillzDelegate_GetCurrentActivity_m2769826294 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkillzDelegate_GetCurrentActivity_m2769826294_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_t32045322 * V_0 = NULL;
	AndroidJavaObject_t4131667876 * V_1 = NULL;
	{
		AndroidJavaClass_t32045322 * L_0 = (AndroidJavaClass_t32045322 *)il2cpp_codegen_object_new(AndroidJavaClass_t32045322_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_m366853020(L_0, _stringLiteral2149247999, /*hidden argument*/NULL);
		V_0 = L_0;
		AndroidJavaClass_t32045322 * L_1 = V_0;
		NullCheck(L_1);
		AndroidJavaObject_t4131667876 * L_2 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t4131667876_m1414442298(L_1, _stringLiteral3452315504, /*hidden argument*/AndroidJavaObject_GetStatic_TisAndroidJavaObject_t4131667876_m1414442298_RuntimeMethod_var);
		V_1 = L_2;
		AndroidJavaObject_t4131667876 * L_3 = V_1;
		return L_3;
	}
}
// System.Void SkillzDelegate::.cctor()
extern "C"  void SkillzDelegate__cctor_m1832625859 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL _addMetadataForMatchInProgress(char*, int32_t);
// System.Void SkillzSDK.Api::_addMetadataForMatchInProgress(System.String,System.Boolean)
extern "C"  void Api__addMetadataForMatchInProgress_m3365956122 (RuntimeObject * __this /* static, unused */, String_t* ___metadataJson0, bool ___forMatchInProgress1, const RuntimeMethod* method)
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
extern "C"  int32_t Api__getRandomNumber_m626801295 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_getRandomNumber)();

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL _getRandomNumberWithMinAndMax(int32_t, int32_t);
// System.Int32 SkillzSDK.Api::_getRandomNumberWithMinAndMax(System.Int32,System.Int32)
extern "C"  int32_t Api__getRandomNumberWithMinAndMax_m679981106 (RuntimeObject * __this /* static, unused */, int32_t ___min0, int32_t ___max1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_getRandomNumberWithMinAndMax)(___min0, ___max1);

	return returnValue;
}
extern "C" void DEFAULT_CALL _skillzInitForGameIdAndEnvironment(char*, char*);
// System.Void SkillzSDK.Api::_skillzInitForGameIdAndEnvironment(System.String,System.String)
extern "C"  void Api__skillzInitForGameIdAndEnvironment_m3192474511 (RuntimeObject * __this /* static, unused */, String_t* ___gameId0, String_t* ___environment1, const RuntimeMethod* method)
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
extern "C"  int32_t Api__tournamentIsInProgress_m3775620099 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_tournamentIsInProgress)();

	return returnValue;
}
extern "C" intptr_t DEFAULT_CALL _player();
// System.IntPtr SkillzSDK.Api::_player()
extern "C"  intptr_t Api__player_m1362132540 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(_player)();

	return returnValue;
}
extern "C" intptr_t DEFAULT_CALL _SDKShortVersion();
// System.IntPtr SkillzSDK.Api::_SDKShortVersion()
extern "C"  intptr_t Api__SDKShortVersion_m2578248954 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(_SDKShortVersion)();

	return returnValue;
}
extern "C" void DEFAULT_CALL _showSDKVersionInfo();
// System.Void SkillzSDK.Api::_showSDKVersionInfo()
extern "C"  void Api__showSDKVersionInfo_m2617811748 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_showSDKVersionInfo)();

}
extern "C" intptr_t DEFAULT_CALL _getMatchRules();
// System.IntPtr SkillzSDK.Api::_getMatchRules()
extern "C"  intptr_t Api__getMatchRules_m768486371 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(_getMatchRules)();

	return returnValue;
}
extern "C" void DEFAULT_CALL _launchSkillz();
// System.Void SkillzSDK.Api::_launchSkillz()
extern "C"  void Api__launchSkillz_m664158212 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_launchSkillz)();

}
extern "C" void DEFAULT_CALL _displayTournamentResultsWithScore(int32_t);
// System.Void SkillzSDK.Api::_displayTournamentResultsWithScore(System.Int32)
extern "C"  void Api__displayTournamentResultsWithScore_m3315146318 (RuntimeObject * __this /* static, unused */, int32_t ___score0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_displayTournamentResultsWithScore)(___score0);

}
extern "C" void DEFAULT_CALL _displayTournamentResultsWithFloatScore(float);
// System.Void SkillzSDK.Api::_displayTournamentResultsWithFloatScore(System.Single)
extern "C"  void Api__displayTournamentResultsWithFloatScore_m1284634361 (RuntimeObject * __this /* static, unused */, float ___score0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_displayTournamentResultsWithFloatScore)(___score0);

}
extern "C" void DEFAULT_CALL _displayTournamentResultsWithStringScore(char*);
// System.Void SkillzSDK.Api::_displayTournamentResultsWithStringScore(System.String)
extern "C"  void Api__displayTournamentResultsWithStringScore_m2296794800 (RuntimeObject * __this /* static, unused */, String_t* ___score0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___score0' to native representation
	char* ____score0_marshaled = NULL;
	____score0_marshaled = il2cpp_codegen_marshal_string(___score0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_displayTournamentResultsWithStringScore)(____score0_marshaled);

	// Marshaling cleanup of parameter '___score0' native representation
	il2cpp_codegen_marshal_free(____score0_marshaled);
	____score0_marshaled = NULL;

}
extern "C" void DEFAULT_CALL _completeTurnWithGameData(char*, char*, float, float, char*, char*);
// System.Void SkillzSDK.Api::_completeTurnWithGameData(System.String,System.String,System.Single,System.Single,System.String,System.String)
extern "C"  void Api__completeTurnWithGameData_m1632710802 (RuntimeObject * __this /* static, unused */, String_t* ___gameData0, String_t* ___score1, float ___playerCurrentTotalScore2, float ___opponentCurrentTotalScore3, String_t* ___roundOutcome4, String_t* ___matchOutcome5, const RuntimeMethod* method)
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
extern "C"  void Api__finishReviewingCurrentGameState_m376951918 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_finishReviewingCurrentGameState)();

}
extern "C" void DEFAULT_CALL _notifyPlayerAbortWithCompletion();
// System.Void SkillzSDK.Api::_notifyPlayerAbortWithCompletion()
extern "C"  void Api__notifyPlayerAbortWithCompletion_m960311694 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_notifyPlayerAbortWithCompletion)();

}
extern "C" void DEFAULT_CALL _updatePlayersCurrentScore(float);
// System.Void SkillzSDK.Api::_updatePlayersCurrentScore(System.Single)
extern "C"  void Api__updatePlayersCurrentScore_m246008890 (RuntimeObject * __this /* static, unused */, float ___score0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_updatePlayersCurrentScore)(___score0);

}
extern "C" void DEFAULT_CALL _updatePlayersCurrentStringScore(char*);
// System.Void SkillzSDK.Api::_updatePlayersCurrentStringScore(System.String)
extern "C"  void Api__updatePlayersCurrentStringScore_m4005077211 (RuntimeObject * __this /* static, unused */, String_t* ___score0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___score0' to native representation
	char* ____score0_marshaled = NULL;
	____score0_marshaled = il2cpp_codegen_marshal_string(___score0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_updatePlayersCurrentStringScore)(____score0_marshaled);

	// Marshaling cleanup of parameter '___score0' native representation
	il2cpp_codegen_marshal_free(____score0_marshaled);
	____score0_marshaled = NULL;

}
extern "C" void DEFAULT_CALL _updatePlayersCurrentIntScore(int32_t);
// System.Void SkillzSDK.Api::_updatePlayersCurrentIntScore(System.Int32)
extern "C"  void Api__updatePlayersCurrentIntScore_m3021323692 (RuntimeObject * __this /* static, unused */, int32_t ___score0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_updatePlayersCurrentIntScore)(___score0);

}
extern "C" float DEFAULT_CALL _getRandomFloat();
// System.Single SkillzSDK.Api::_getRandomFloat()
extern "C"  float Api__getRandomFloat_m745272966 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef float (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	float returnValue = reinterpret_cast<PInvokeFunc>(_getRandomFloat)();

	return returnValue;
}
// System.Boolean SkillzSDK.Api::get_IsTournamentInProgress()
extern "C"  bool Api_get_IsTournamentInProgress_m2522558358 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = Api__tournamentIsInProgress_m3775620099(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)((((int32_t)L_1) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		return (bool)G_B3_0;
	}
}
// System.String SkillzSDK.Api::get_CurrentUserDisplayName()
extern "C"  String_t* Api_get_CurrentUserDisplayName_m403866726 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	Player_t2961656996  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Player_t2961656996  L_0 = Api_get_Player_m3819377184(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = (&V_0)->get_DisplayName_0();
		return L_1;
	}
}
// SkillzSDK.Player SkillzSDK.Api::get_Player()
extern "C"  Player_t2961656996  Api_get_Player_m3819377184 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Api_get_Player_m3819377184_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Dictionary_2_t2865362463 * V_1 = NULL;
	{
		intptr_t L_0 = Api__player_m1362132540(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		String_t* L_1 = Marshal_PtrToStringAnsi_m2474145239(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		Dictionary_2_t2865362463 * L_3 = Api_DeserializeJSONToDictionary_m2968966310(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		Dictionary_2_t2865362463 * L_4 = V_1;
		Player_t2961656996  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Player__ctor_m2866643626((&L_5), L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.String SkillzSDK.Api::get_SDKVersionShort()
extern "C"  String_t* Api_get_SDKVersionShort_m3300381882 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Api_get_SDKVersionShort_m3300381882_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = Api__SDKShortVersion_m2578248954(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		String_t* L_1 = Marshal_PtrToStringAnsi_m2474145239(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void SkillzSDK.Api::Initialize(System.String,SkillzSDK.Environment)
extern "C"  void Api_Initialize_m1562849269 (RuntimeObject * __this /* static, unused */, String_t* ___gameId0, int32_t ___environment1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Api_Initialize_m1562849269_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		int32_t L_0 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_1 = ___environment1;
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		V_0 = _stringLiteral3573203357;
		goto IL_0022;
	}

IL_001c:
	{
		V_0 = _stringLiteral3443696199;
	}

IL_0022:
	{
		String_t* L_2 = ___gameId0;
		String_t* L_3 = V_0;
		Api__skillzInitForGameIdAndEnvironment_m3192474511(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		goto IL_0038;
	}

IL_002e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, _stringLiteral1330767061, /*hidden argument*/NULL);
	}

IL_0038:
	{
		return;
	}
}
// System.Void SkillzSDK.Api::LaunchSkillz()
extern "C"  void Api_LaunchSkillz_m3695930818 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Api_LaunchSkillz_m3695930818_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_0015;
		}
	}
	{
		Api__launchSkillz_m664158212(NULL /*static, unused*/, /*hidden argument*/NULL);
		goto IL_001f;
	}

IL_0015:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral2996089877, /*hidden argument*/NULL);
	}

IL_001f:
	{
		return;
	}
}
// System.Void SkillzSDK.Api::UpdatePlayerScore(System.Single)
extern "C"  void Api_UpdatePlayerScore_m3917494721 (RuntimeObject * __this /* static, unused */, float ___currentScoreForPlayer0, const RuntimeMethod* method)
{
	{
		float L_0 = ___currentScoreForPlayer0;
		Api__updatePlayersCurrentScore_m246008890(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzSDK.Api::UpdatePlayerScore(System.String)
extern "C"  void Api_UpdatePlayerScore_m3418103691 (RuntimeObject * __this /* static, unused */, String_t* ___currentScoreForPlayer0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___currentScoreForPlayer0;
		Api__updatePlayersCurrentStringScore_m4005077211(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzSDK.Api::UpdatePlayerScore(System.Int32)
extern "C"  void Api_UpdatePlayerScore_m2639514829 (RuntimeObject * __this /* static, unused */, int32_t ___currentScoreForPlayer0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___currentScoreForPlayer0;
		Api__updatePlayersCurrentIntScore_m3021323692(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzSDK.Api::AbortGame()
extern "C"  void Api_AbortGame_m1087523040 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		Api__notifyPlayerAbortWithCompletion_m960311694(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzSDK.Api::FinishTournament(System.Int32)
extern "C"  void Api_FinishTournament_m2922484481 (RuntimeObject * __this /* static, unused */, int32_t ___score0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___score0;
		Api__displayTournamentResultsWithScore_m3315146318(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzSDK.Api::FinishTournament(System.Single)
extern "C"  void Api_FinishTournament_m3112126626 (RuntimeObject * __this /* static, unused */, float ___score0, const RuntimeMethod* method)
{
	{
		float L_0 = ___score0;
		Api__displayTournamentResultsWithFloatScore_m1284634361(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzSDK.Api::FinishTournament(System.String)
extern "C"  void Api_FinishTournament_m3069090011 (RuntimeObject * __this /* static, unused */, String_t* ___score0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___score0;
		Api__displayTournamentResultsWithStringScore_m2296794800(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzSDK.Api::FinishTurn(System.String,SkillzSDK.TurnBasedRoundOutcome,SkillzSDK.TurnBasedMatchOutcome)
extern "C"  void Api_FinishTurn_m3247793548 (RuntimeObject * __this /* static, unused */, String_t* ___gameData0, int32_t ___roundOutcome1, int32_t ___matchOutcome2, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___gameData0;
		int32_t L_1 = ___roundOutcome1;
		int32_t L_2 = ___matchOutcome2;
		Api_FinishTurn_m1359245850(NULL /*static, unused*/, L_0, L_1, L_2, (String_t*)NULL, (std::numeric_limits<float>::quiet_NaN()), (std::numeric_limits<float>::quiet_NaN()), /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzSDK.Api::FinishTurn(System.String,SkillzSDK.TurnBasedRoundOutcome,SkillzSDK.TurnBasedMatchOutcome,System.String,System.Single,System.Single)
extern "C"  void Api_FinishTurn_m1359245850 (RuntimeObject * __this /* static, unused */, String_t* ___gameData0, int32_t ___roundOutcome1, int32_t ___matchOutcome2, String_t* ___playerTurnScore3, float ___playerTotalScore4, float ___opponentTotalScore5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Api_FinishTurn_m1359245850_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___gameData0;
		String_t* L_1 = ___playerTurnScore3;
		float L_2 = ___playerTotalScore4;
		float L_3 = ___opponentTotalScore5;
		RuntimeObject * L_4 = Box(TurnBasedRoundOutcome_t235959152_il2cpp_TypeInfo_var, (&___roundOutcome1));
		NullCheck(L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		___roundOutcome1 = *(int32_t*)UnBox(L_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral4011663913, L_5, /*hidden argument*/NULL);
		RuntimeObject * L_7 = Box(TurnBasedMatchOutcome_t1929616948_il2cpp_TypeInfo_var, (&___matchOutcome2));
		NullCheck(L_7);
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
		___matchOutcome2 = *(int32_t*)UnBox(L_7);
		String_t* L_9 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2594243837, L_8, /*hidden argument*/NULL);
		Api__completeTurnWithGameData_m1632710802(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_6, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzSDK.Api::FinishReviewingTurn()
extern "C"  void Api_FinishReviewingTurn_m2951052610 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		Api__finishReviewingCurrentGameState_m376951918(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzSDK.Api::AddMetadataForMatchInProgress(System.String,System.Boolean)
extern "C"  void Api_AddMetadataForMatchInProgress_m3539437012 (RuntimeObject * __this /* static, unused */, String_t* ___metadataJson0, bool ___forMatchInProgress1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___metadataJson0;
		bool L_1 = ___forMatchInProgress1;
		Api__addMetadataForMatchInProgress_m3365956122(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 SkillzSDK.Api::GetRandomNumber()
extern "C"  int32_t Api_GetRandomNumber_m3472583166 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		int32_t L_0 = Api__getRandomNumber_m626801295(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 SkillzSDK.Api::GetRandomNumber(System.Int32,System.Int32)
extern "C"  int32_t Api_GetRandomNumber_m1864709087 (RuntimeObject * __this /* static, unused */, int32_t ___min0, int32_t ___max1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___min0;
		int32_t L_1 = ___max1;
		int32_t L_2 = Api__getRandomNumberWithMinAndMax_m679981106(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void SkillzSDK.Api::PrintSDKVersionInfo()
extern "C"  void Api_PrintSDKVersionInfo_m321791972 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		Api__showSDKVersionInfo_m2617811748(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Hashtable SkillzSDK.Api::GetMatchRules()
extern "C"  Hashtable_t1853889766 * Api_GetMatchRules_m1004458514 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Api_GetMatchRules_m1004458514_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Dictionary_2_t2865362463 * V_1 = NULL;
	Hashtable_t1853889766 * V_2 = NULL;
	{
		intptr_t L_0 = Api__getMatchRules_m768486371(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		String_t* L_1 = Marshal_PtrToStringAnsi_m2474145239(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		Dictionary_2_t2865362463 * L_3 = Api_DeserializeJSONToDictionary_m2968966310(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		Dictionary_2_t2865362463 * L_4 = V_1;
		Hashtable_t1853889766 * L_5 = (Hashtable_t1853889766 *)il2cpp_codegen_object_new(Hashtable_t1853889766_il2cpp_TypeInfo_var);
		Hashtable__ctor_m2112858046(L_5, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		Hashtable_t1853889766 * L_6 = V_2;
		return L_6;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> SkillzSDK.Api::DeserializeJSONToDictionary(System.String)
extern "C"  Dictionary_2_t2865362463 * Api_DeserializeJSONToDictionary_m2968966310 (RuntimeObject * __this /* static, unused */, String_t* ___jsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Api_DeserializeJSONToDictionary_m2968966310_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___jsonString0;
		RuntimeObject * L_1 = Json_Deserialize_m639621384(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return ((Dictionary_2_t2865362463 *)IsInstClass((RuntimeObject*)L_1, Dictionary_2_t2865362463_il2cpp_TypeInfo_var));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single SkillzSDK.Api/Random::Value()
extern "C"  float Random_Value_m3937663143 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		bool L_0 = Api_get_IsTournamentInProgress_m2522558358(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		float L_1 = Api__getRandomFloat_m745272966(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0021;
	}

IL_001b:
	{
		float L_2 = Random_get_value_m3115885645(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_2;
	}

IL_0021:
	{
		float L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Vector3 SkillzSDK.Api/Random::InsideUnitSphere()
extern "C"  Vector3_t3722313464  Random_InsideUnitSphere_m1273973450 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Random_InsideUnitSphere_m1273973450_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		float L_0 = Random_Value_m3937663143(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = Random_Value_m3937663143(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_multiply((float)L_1, (float)(3.14159274f)));
		float L_2 = Random_Value_m3937663143(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_2, (float)(3.14159274f))), (float)(2.0f)));
		float L_3 = V_0;
		float L_4 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_5 = cosf(L_4);
		float L_6 = V_1;
		float L_7 = sinf(L_6);
		V_3 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_3, (float)L_5)), (float)L_7));
		float L_8 = V_0;
		float L_9 = V_2;
		float L_10 = sinf(L_9);
		float L_11 = V_1;
		float L_12 = sinf(L_11);
		V_4 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_8, (float)L_10)), (float)L_12));
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = cosf(L_14);
		V_5 = ((float)il2cpp_codegen_multiply((float)L_13, (float)L_15));
		float L_16 = V_3;
		float L_17 = V_4;
		float L_18 = V_5;
		Vector3_t3722313464  L_19;
		memset(&L_19, 0, sizeof(L_19));
		Vector3__ctor_m3353183577((&L_19), L_16, L_17, L_18, /*hidden argument*/NULL);
		return L_19;
	}
}
// UnityEngine.Vector2 SkillzSDK.Api/Random::InsideUnitCircle()
extern "C"  Vector2_t2156229523  Random_InsideUnitCircle_m1942269933 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Random_InsideUnitCircle_m1942269933_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector2_t2156229523  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		V_0 = (1.0f);
		float L_0 = Random_Value_m3937663143(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_0, (float)(2.0f))), (float)(3.14159274f)));
		il2cpp_codegen_initobj((&V_2), sizeof(Vector2_t2156229523 ));
		float L_1 = V_0;
		float L_2 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_3 = cosf(L_2);
		(&V_2)->set_x_0(((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)));
		float L_4 = V_0;
		float L_5 = V_1;
		float L_6 = sinf(L_5);
		(&V_2)->set_y_1(((float)il2cpp_codegen_multiply((float)L_4, (float)L_6)));
		Vector2_t2156229523  L_7 = V_2;
		return L_7;
	}
}
// UnityEngine.Vector3 SkillzSDK.Api/Random::OnUnitSphere()
extern "C"  Vector3_t3722313464  Random_OnUnitSphere_m1006952296 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Random_OnUnitSphere_m1006952296_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t3722313464 ));
	}

IL_0008:
	{
		float L_0 = Random_Value_m3937663143(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->set_x_1(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)(((float)((float)L_0))))), (float)(1.0f))));
		float L_1 = Random_Value_m3937663143(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->set_y_2(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)(((float)((float)L_1))))), (float)(1.0f))));
		float L_2 = (&V_0)->get_x_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_3 = powf(L_2, (2.0f));
		float L_4 = (&V_0)->get_y_2();
		float L_5 = powf(L_4, (2.0f));
		V_1 = ((float)il2cpp_codegen_add((float)L_3, (float)L_5));
		float L_6 = V_1;
		if ((((float)L_6) > ((float)(1.0f))))
		{
			goto IL_0008;
		}
	}
	{
		float L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_8 = sqrtf(((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_7)));
		V_2 = ((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_8));
		Vector3_t3722313464 * L_9 = (&V_0);
		float L_10 = L_9->get_x_1();
		float L_11 = V_2;
		L_9->set_x_1(((float)il2cpp_codegen_multiply((float)L_10, (float)L_11)));
		Vector3_t3722313464 * L_12 = (&V_0);
		float L_13 = L_12->get_y_2();
		float L_14 = V_2;
		L_12->set_y_2(((float)il2cpp_codegen_multiply((float)L_13, (float)L_14)));
		float L_15 = V_1;
		(&V_0)->set_z_3(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_15)), (float)(1.0f))));
		Vector3_t3722313464  L_16 = V_0;
		return L_16;
	}
}
// UnityEngine.Quaternion SkillzSDK.Api/Random::RotationUniform()
extern "C"  Quaternion_t2301928331  Random_RotationUniform_m2406981108 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Random_RotationUniform_m2406981108_MetadataUsageId);
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
	{
		float L_0 = Random_Value_m3937663143(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = Random_Value_m3937663143(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = Random_Value_m3937663143(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_2;
		float L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_4 = sqrtf(L_3);
		V_3 = L_4;
		float L_5 = V_0;
		float L_6 = sqrtf(((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_5)));
		V_4 = L_6;
		float L_7 = V_4;
		float L_8 = V_1;
		float L_9 = sinf(((float)il2cpp_codegen_multiply((float)(6.28318548f), (float)L_8)));
		V_5 = ((float)il2cpp_codegen_multiply((float)L_7, (float)L_9));
		float L_10 = V_4;
		float L_11 = V_1;
		float L_12 = cosf(((float)il2cpp_codegen_multiply((float)(6.28318548f), (float)L_11)));
		V_6 = ((float)il2cpp_codegen_multiply((float)L_10, (float)L_12));
		float L_13 = V_3;
		float L_14 = V_2;
		float L_15 = sinf(((float)il2cpp_codegen_multiply((float)(6.28318548f), (float)L_14)));
		V_7 = ((float)il2cpp_codegen_multiply((float)L_13, (float)L_15));
		float L_16 = V_3;
		float L_17 = V_2;
		float L_18 = cosf(((float)il2cpp_codegen_multiply((float)(6.28318548f), (float)L_17)));
		V_8 = ((float)il2cpp_codegen_multiply((float)L_16, (float)L_18));
		float L_19 = V_5;
		float L_20 = V_6;
		float L_21 = V_7;
		float L_22 = V_8;
		Quaternion_t2301928331  L_23;
		memset(&L_23, 0, sizeof(L_23));
		Quaternion__ctor_m435141806((&L_23), L_19, L_20, L_21, L_22, /*hidden argument*/NULL);
		return L_23;
	}
}
// UnityEngine.Quaternion SkillzSDK.Api/Random::Rotation()
extern "C"  Quaternion_t2301928331  Random_Rotation_m4052302809 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		Quaternion_t2301928331  L_0 = Random_RotationUniform_m2406981108(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Single SkillzSDK.Api/Random::Range(System.Single,System.Single)
extern "C"  float Random_Range_m3260912103 (RuntimeObject * __this /* static, unused */, float ___min0, float ___max1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = Random_Value_m3937663143(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = ___min0;
		float L_2 = V_0;
		float L_3 = ___max1;
		float L_4 = ___min0;
		return ((float)il2cpp_codegen_add((float)L_1, (float)((float)il2cpp_codegen_multiply((float)L_2, (float)((float)il2cpp_codegen_subtract((float)L_3, (float)L_4))))));
	}
}
// System.Int32 SkillzSDK.Api/Random::Range(System.Int32,System.Int32)
extern "C"  int32_t Random_Range_m1954521421 (RuntimeObject * __this /* static, unused */, int32_t ___min0, int32_t ___max1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = Random_Value_m3937663143(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = ___min0;
		float L_2 = V_0;
		int32_t L_3 = ___max1;
		int32_t L_4 = ___min0;
		return ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)(((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)L_2, (float)(((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)L_4))))))))))));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: SkillzSDK.ContinuedTurnBasedMatch
extern "C" void ContinuedTurnBasedMatch_t3764673362_marshal_pinvoke(const ContinuedTurnBasedMatch_t3764673362& unmarshaled, ContinuedTurnBasedMatch_t3764673362_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Opponent_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Opponent' of type 'ContinuedTurnBasedMatch'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Opponent_1Exception, NULL, NULL);
}
extern "C" void ContinuedTurnBasedMatch_t3764673362_marshal_pinvoke_back(const ContinuedTurnBasedMatch_t3764673362_marshaled_pinvoke& marshaled, ContinuedTurnBasedMatch_t3764673362& unmarshaled)
{
	Exception_t* ___Opponent_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Opponent' of type 'ContinuedTurnBasedMatch'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Opponent_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: SkillzSDK.ContinuedTurnBasedMatch
extern "C" void ContinuedTurnBasedMatch_t3764673362_marshal_pinvoke_cleanup(ContinuedTurnBasedMatch_t3764673362_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: SkillzSDK.ContinuedTurnBasedMatch
extern "C" void ContinuedTurnBasedMatch_t3764673362_marshal_com(const ContinuedTurnBasedMatch_t3764673362& unmarshaled, ContinuedTurnBasedMatch_t3764673362_marshaled_com& marshaled)
{
	Exception_t* ___Opponent_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Opponent' of type 'ContinuedTurnBasedMatch'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Opponent_1Exception, NULL, NULL);
}
extern "C" void ContinuedTurnBasedMatch_t3764673362_marshal_com_back(const ContinuedTurnBasedMatch_t3764673362_marshaled_com& marshaled, ContinuedTurnBasedMatch_t3764673362& unmarshaled)
{
	Exception_t* ___Opponent_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Opponent' of type 'ContinuedTurnBasedMatch'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Opponent_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: SkillzSDK.ContinuedTurnBasedMatch
extern "C" void ContinuedTurnBasedMatch_t3764673362_marshal_com_cleanup(ContinuedTurnBasedMatch_t3764673362_marshaled_com& marshaled)
{
}
// System.Void SkillzSDK.ContinuedTurnBasedMatch::.ctor(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void ContinuedTurnBasedMatch__ctor_m3686691244 (ContinuedTurnBasedMatch_t3764673362 * __this, Dictionary_2_t2865362463 * ___matchInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ContinuedTurnBasedMatch__ctor_m3686691244_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Dictionary_2_t2865362463 * V_1 = NULL;
	Nullable_1_t2317227445  V_2;
	memset(&V_2, 0, sizeof(V_2));
	RuntimeObject * V_3 = NULL;
	Dictionary_2_t2865362463 * V_4 = NULL;
	Player_t2961656996  V_5;
	memset(&V_5, 0, sizeof(V_5));
	{
		Dictionary_2_t2865362463 * L_0 = ___matchInfo0;
		String_t* L_1 = SkillzExtensions_SafeGetStringValue_m3748395908(NULL /*static, unused*/, L_0, _stringLiteral3705954998, /*hidden argument*/NULL);
		__this->set_GameData_0(L_1);
		Dictionary_2_t2865362463 * L_2 = ___matchInfo0;
		RuntimeObject * L_3 = SkillzExtensions_SafeGetValue_m1149006436(NULL /*static, unused*/, L_2, _stringLiteral2261821926, /*hidden argument*/NULL);
		V_0 = L_3;
		RuntimeObject * L_4 = V_0;
		if (!L_4)
		{
			goto IL_0055;
		}
	}
	{
		RuntimeObject * L_5 = V_0;
		NullCheck(L_5);
		Type_t * L_6 = Object_GetType_m88164663(L_5, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_7 = { reinterpret_cast<intptr_t> (Dictionary_2_t2865362463_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_6) == ((RuntimeObject*)(Type_t *)L_8))))
		{
			goto IL_0055;
		}
	}
	{
		RuntimeObject * L_9 = V_0;
		V_1 = ((Dictionary_2_t2865362463 *)CastclassClass((RuntimeObject*)L_9, Dictionary_2_t2865362463_il2cpp_TypeInfo_var));
		Dictionary_2_t2865362463 * L_10 = V_1;
		Nullable_1_t2317227445  L_11 = SkillzExtensions_SafeGetDoubleValue_m1033428401(NULL /*static, unused*/, L_10, _stringLiteral2332988269, /*hidden argument*/NULL);
		__this->set_MyCurrentTotalScore_2(L_11);
		goto IL_0064;
	}

IL_0055:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_t2317227445 ));
		Nullable_1_t2317227445  L_12 = V_2;
		__this->set_MyCurrentTotalScore_2(L_12);
	}

IL_0064:
	{
		Dictionary_2_t2865362463 * L_13 = ___matchInfo0;
		RuntimeObject * L_14 = SkillzExtensions_SafeGetValue_m1149006436(NULL /*static, unused*/, L_13, _stringLiteral3398487231, /*hidden argument*/NULL);
		V_3 = L_14;
		RuntimeObject * L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b7;
		}
	}
	{
		RuntimeObject * L_16 = V_3;
		NullCheck(L_16);
		Type_t * L_17 = Object_GetType_m88164663(L_16, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_18 = { reinterpret_cast<intptr_t> (Dictionary_2_t2865362463_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_19 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_17) == ((RuntimeObject*)(Type_t *)L_19))))
		{
			goto IL_00b7;
		}
	}
	{
		RuntimeObject * L_20 = V_3;
		V_4 = ((Dictionary_2_t2865362463 *)CastclassClass((RuntimeObject*)L_20, Dictionary_2_t2865362463_il2cpp_TypeInfo_var));
		Dictionary_2_t2865362463 * L_21 = V_4;
		Player_t2961656996  L_22;
		memset(&L_22, 0, sizeof(L_22));
		Player__ctor_m2866643626((&L_22), L_21, /*hidden argument*/NULL);
		__this->set_Opponent_1(L_22);
		Dictionary_2_t2865362463 * L_23 = V_4;
		Nullable_1_t2317227445  L_24 = SkillzExtensions_SafeGetDoubleValue_m1033428401(NULL /*static, unused*/, L_23, _stringLiteral2332988269, /*hidden argument*/NULL);
		__this->set_OpponentCurrentTotalScore_3(L_24);
		goto IL_00d6;
	}

IL_00b7:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(Player_t2961656996 ));
		Player_t2961656996  L_25 = V_5;
		__this->set_Opponent_1(L_25);
		il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_t2317227445 ));
		Nullable_1_t2317227445  L_26 = V_2;
		__this->set_OpponentCurrentTotalScore_3(L_26);
	}

IL_00d6:
	{
		return;
	}
}
extern "C"  void ContinuedTurnBasedMatch__ctor_m3686691244_AdjustorThunk (RuntimeObject * __this, Dictionary_2_t2865362463 * ___matchInfo0, const RuntimeMethod* method)
{
	ContinuedTurnBasedMatch_t3764673362 * _thisAdjusted = reinterpret_cast<ContinuedTurnBasedMatch_t3764673362 *>(__this + 1);
	ContinuedTurnBasedMatch__ctor_m3686691244(_thisAdjusted, ___matchInfo0, method);
}
// System.String SkillzSDK.ContinuedTurnBasedMatch::ToString()
extern "C"  String_t* ContinuedTurnBasedMatch_ToString_m1925674645 (ContinuedTurnBasedMatch_t3764673362 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ContinuedTurnBasedMatch_ToString_m1925674645_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9)));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral1367093446);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral1367093446);
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		String_t* L_2 = __this->get_GameData_0();
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_2);
		ObjectU5BU5D_t2843939325* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral3714965605);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3714965605);
		ObjectU5BU5D_t2843939325* L_4 = L_3;
		Nullable_1_t2317227445  L_5 = __this->get_MyCurrentTotalScore_2();
		Nullable_1_t2317227445  L_6 = L_5;
		RuntimeObject * L_7 = Box(Nullable_1_t2317227445_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_7);
		ObjectU5BU5D_t2843939325* L_8 = L_4;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral1690536272);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral1690536272);
		ObjectU5BU5D_t2843939325* L_9 = L_8;
		Player_t2961656996  L_10 = __this->get_Opponent_1();
		Player_t2961656996  L_11 = L_10;
		RuntimeObject * L_12 = Box(Player_t2961656996_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_12);
		ObjectU5BU5D_t2843939325* L_13 = L_9;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral967426173);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)_stringLiteral967426173);
		ObjectU5BU5D_t2843939325* L_14 = L_13;
		Nullable_1_t2317227445  L_15 = __this->get_OpponentCurrentTotalScore_3();
		Nullable_1_t2317227445  L_16 = L_15;
		RuntimeObject * L_17 = Box(Nullable_1_t2317227445_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)L_17);
		ObjectU5BU5D_t2843939325* L_18 = L_14;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteral3452614643);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject *)_stringLiteral3452614643);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_19 = String_Concat_m2971454694(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		return L_19;
	}
}
extern "C"  String_t* ContinuedTurnBasedMatch_ToString_m1925674645_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ContinuedTurnBasedMatch_t3764673362 * _thisAdjusted = reinterpret_cast<ContinuedTurnBasedMatch_t3764673362 *>(__this + 1);
	return ContinuedTurnBasedMatch_ToString_m1925674645(_thisAdjusted, method);
}
// System.String SkillzSDK.ContinuedTurnBasedMatch::get_OpponentAvatarURL()
extern "C"  String_t* ContinuedTurnBasedMatch_get_OpponentAvatarURL_m951854446 (ContinuedTurnBasedMatch_t3764673362 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ContinuedTurnBasedMatch_get_OpponentAvatarURL_m951854446_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Player_t2961656996  V_0;
	memset(&V_0, 0, sizeof(V_0));
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		Player_t2961656996  L_0 = __this->get_Opponent_1();
		V_0 = L_0;
		String_t* L_1 = (&V_0)->get_AvatarURL_2();
		String_t* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B2_0 = L_3;
	}

IL_001a:
	{
		return G_B2_0;
	}
}
extern "C"  String_t* ContinuedTurnBasedMatch_get_OpponentAvatarURL_m951854446_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ContinuedTurnBasedMatch_t3764673362 * _thisAdjusted = reinterpret_cast<ContinuedTurnBasedMatch_t3764673362 *>(__this + 1);
	return ContinuedTurnBasedMatch_get_OpponentAvatarURL_m951854446(_thisAdjusted, method);
}
// System.String SkillzSDK.ContinuedTurnBasedMatch::get_OpponentDisplayName()
extern "C"  String_t* ContinuedTurnBasedMatch_get_OpponentDisplayName_m3190551676 (ContinuedTurnBasedMatch_t3764673362 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ContinuedTurnBasedMatch_get_OpponentDisplayName_m3190551676_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Player_t2961656996  V_0;
	memset(&V_0, 0, sizeof(V_0));
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		Player_t2961656996  L_0 = __this->get_Opponent_1();
		V_0 = L_0;
		String_t* L_1 = (&V_0)->get_DisplayName_0();
		String_t* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B2_0 = L_3;
	}

IL_001a:
	{
		return G_B2_0;
	}
}
extern "C"  String_t* ContinuedTurnBasedMatch_get_OpponentDisplayName_m3190551676_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ContinuedTurnBasedMatch_t3764673362 * _thisAdjusted = reinterpret_cast<ContinuedTurnBasedMatch_t3764673362 *>(__this + 1);
	return ContinuedTurnBasedMatch_get_OpponentDisplayName_m3190551676(_thisAdjusted, method);
}
// System.UInt32 SkillzSDK.ContinuedTurnBasedMatch::get_OpponentUniqueID()
extern "C"  uint32_t ContinuedTurnBasedMatch_get_OpponentUniqueID_m1460019975 (ContinuedTurnBasedMatch_t3764673362 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ContinuedTurnBasedMatch_get_OpponentUniqueID_m1460019975_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Player_t2961656996  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Nullable_1_t4282624060  V_1;
	memset(&V_1, 0, sizeof(V_1));
	uint32_t G_B3_0 = 0;
	{
		Player_t2961656996  L_0 = __this->get_Opponent_1();
		V_0 = L_0;
		Nullable_1_t4282624060  L_1 = (&V_0)->get_ID_1();
		V_1 = L_1;
		bool L_2 = Nullable_1_get_HasValue_m1763782828((Nullable_1_t4282624060 *)(&V_1), /*hidden argument*/Nullable_1_get_HasValue_m1763782828_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		uint32_t L_3 = Nullable_1_get_Value_m1994738269((Nullable_1_t4282624060 *)(&V_1), /*hidden argument*/Nullable_1_get_Value_m1994738269_RuntimeMethod_var);
		G_B3_0 = L_3;
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = ((uint32_t)(0));
	}

IL_0028:
	{
		return G_B3_0;
	}
}
extern "C"  uint32_t ContinuedTurnBasedMatch_get_OpponentUniqueID_m1460019975_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ContinuedTurnBasedMatch_t3764673362 * _thisAdjusted = reinterpret_cast<ContinuedTurnBasedMatch_t3764673362 *>(__this + 1);
	return ContinuedTurnBasedMatch_get_OpponentUniqueID_m1460019975(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Nullable`1<System.Boolean> SkillzSDK.Extensions.SkillzExtensions::SafeGetBoolValue(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
extern "C"  Nullable_1_t1819850047  SkillzExtensions_SafeGetBoolValue_m2039874569 (RuntimeObject * __this /* static, unused */, Dictionary_2_t2865362463 * ___dict0, String_t* ___key1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkillzExtensions_SafeGetBoolValue_m2039874569_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		Dictionary_2_t2865362463 * L_0 = ___dict0;
		String_t* L_1 = ___key1;
		String_t* L_2 = SkillzExtensions_SafeGetStringValue_m3748395908(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		Nullable_1_t1819850047  L_4 = Helpers_SafeBoolParse_m4269993608(NULL /*static, unused*/, L_3, _stringLiteral4002445261, _stringLiteral3875955625, _stringLiteral3452614543, _stringLiteral3452614544, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Nullable`1<System.Double> SkillzSDK.Extensions.SkillzExtensions::SafeGetDoubleValue(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
extern "C"  Nullable_1_t2317227445  SkillzExtensions_SafeGetDoubleValue_m1033428401 (RuntimeObject * __this /* static, unused */, Dictionary_2_t2865362463 * ___dict0, String_t* ___key1, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		Dictionary_2_t2865362463 * L_0 = ___dict0;
		String_t* L_1 = ___key1;
		String_t* L_2 = SkillzExtensions_SafeGetStringValue_m3748395908(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		Nullable_1_t2317227445  L_4 = Helpers_SafeDoubleParse_m3716186029(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Nullable`1<System.DateTime> SkillzSDK.Extensions.SkillzExtensions::SafeGetUnixDateTimeValue(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
extern "C"  Nullable_1_t1166124571  SkillzExtensions_SafeGetUnixDateTimeValue_m2661374245 (RuntimeObject * __this /* static, unused */, Dictionary_2_t2865362463 * ___dict0, String_t* ___key1, const RuntimeMethod* method)
{
	Nullable_1_t2317227445  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Dictionary_2_t2865362463 * L_0 = ___dict0;
		String_t* L_1 = ___key1;
		Nullable_1_t2317227445  L_2 = SkillzExtensions_SafeGetDoubleValue_m1033428401(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Nullable_1_t2317227445  L_3 = V_0;
		Nullable_1_t1166124571  L_4 = Helpers_SafeParseUnixTime_m1673506953(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Nullable`1<System.Int32> SkillzSDK.Extensions.SkillzExtensions::SafeGetIntValue(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
extern "C"  Nullable_1_t378540539  SkillzExtensions_SafeGetIntValue_m2048183163 (RuntimeObject * __this /* static, unused */, Dictionary_2_t2865362463 * ___dict0, String_t* ___key1, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		Dictionary_2_t2865362463 * L_0 = ___dict0;
		String_t* L_1 = ___key1;
		String_t* L_2 = SkillzExtensions_SafeGetStringValue_m3748395908(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		Nullable_1_t378540539  L_4 = Helpers_SafeIntParse_m1084147332(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Nullable`1<System.UInt32> SkillzSDK.Extensions.SkillzExtensions::SafeGetUintValue(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
extern "C"  Nullable_1_t4282624060  SkillzExtensions_SafeGetUintValue_m475157154 (RuntimeObject * __this /* static, unused */, Dictionary_2_t2865362463 * ___dict0, String_t* ___key1, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		Dictionary_2_t2865362463 * L_0 = ___dict0;
		String_t* L_1 = ___key1;
		String_t* L_2 = SkillzExtensions_SafeGetStringValue_m3748395908(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		Nullable_1_t4282624060  L_4 = Helpers_SafeUintParse_m2387950348(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.String SkillzSDK.Extensions.SkillzExtensions::SafeGetStringValue(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
extern "C"  String_t* SkillzExtensions_SafeGetStringValue_m3748395908 (RuntimeObject * __this /* static, unused */, Dictionary_2_t2865362463 * ___dict0, String_t* ___key1, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	String_t* G_B3_0 = NULL;
	{
		Dictionary_2_t2865362463 * L_0 = ___dict0;
		String_t* L_1 = ___key1;
		RuntimeObject * L_2 = SkillzExtensions_SafeGetValue_m1149006436(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		RuntimeObject * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		RuntimeObject * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		G_B3_0 = L_5;
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = ((String_t*)(NULL));
	}

IL_001a:
	{
		return G_B3_0;
	}
}
// System.Object SkillzSDK.Extensions.SkillzExtensions::SafeGetValue(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
extern "C"  RuntimeObject * SkillzExtensions_SafeGetValue_m1149006436 (RuntimeObject * __this /* static, unused */, Dictionary_2_t2865362463 * ___dict0, String_t* ___key1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkillzExtensions_SafeGetValue_m1149006436_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * G_B3_0 = NULL;
	{
		Dictionary_2_t2865362463 * L_0 = ___dict0;
		String_t* L_1 = ___key1;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m1520683221(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m1520683221_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		Dictionary_2_t2865362463 * L_3 = ___dict0;
		String_t* L_4 = ___key1;
		NullCheck(L_3);
		RuntimeObject * L_5 = Dictionary_2_get_Item_m3179620279(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m3179620279_RuntimeMethod_var);
		G_B3_0 = L_5;
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = NULL;
	}

IL_0019:
	{
		return G_B3_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Nullable`1<System.Boolean> SkillzSDK.Helpers::SafeBoolParse(System.String,System.String,System.String,System.String,System.String)
extern "C"  Nullable_1_t1819850047  Helpers_SafeBoolParse_m4269993608 (RuntimeObject * __this /* static, unused */, String_t* ___str0, String_t* ___trueStr1, String_t* ___falseStr2, String_t* ___trueInt3, String_t* ___falseInt4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Helpers_SafeBoolParse_m4269993608_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t1819850047  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		String_t* L_0 = ___str0;
		String_t* L_1 = ___trueStr1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Equality_m920492651(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_3 = ___str0;
		String_t* L_4 = ___trueInt3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m920492651(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_001f;
		}
	}

IL_0018:
	{
		Nullable_1_t1819850047  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Nullable_1__ctor_m269558965((&L_6), (bool)1, /*hidden argument*/Nullable_1__ctor_m269558965_RuntimeMethod_var);
		return L_6;
	}

IL_001f:
	{
		String_t* L_7 = ___str0;
		String_t* L_8 = ___falseStr2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_9 = String_op_Equality_m920492651(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0038;
		}
	}
	{
		String_t* L_10 = ___str0;
		String_t* L_11 = ___falseInt4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_12 = String_op_Equality_m920492651(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_003f;
		}
	}

IL_0038:
	{
		Nullable_1_t1819850047  L_13;
		memset(&L_13, 0, sizeof(L_13));
		Nullable_1__ctor_m269558965((&L_13), (bool)0, /*hidden argument*/Nullable_1__ctor_m269558965_RuntimeMethod_var);
		return L_13;
	}

IL_003f:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t1819850047 ));
		Nullable_1_t1819850047  L_14 = V_0;
		return L_14;
	}
}
// System.Nullable`1<System.DateTime> SkillzSDK.Helpers::SafeParseUnixTime(System.Nullable`1<System.Double>)
extern "C"  Nullable_1_t1166124571  Helpers_SafeParseUnixTime_m1673506953 (RuntimeObject * __this /* static, unused */, Nullable_1_t2317227445  ___unixTime0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Helpers_SafeParseUnixTime_m1673506953_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t1166124571  V_0;
	memset(&V_0, 0, sizeof(V_0));
	DateTime_t3738529785  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Nullable_1_t1166124571  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = Nullable_1_get_HasValue_m1700900799((Nullable_1_t2317227445 *)(&___unixTime0), /*hidden argument*/Nullable_1_get_HasValue_m1700900799_RuntimeMethod_var);
		if (!((((int32_t)L_0) == ((int32_t)0))? 1 : 0))
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t1166124571 ));
		Nullable_1_t1166124571  L_1 = V_0;
		return L_1;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		DateTime__ctor_m2956360140((DateTime_t3738529785 *)(&V_1), ((int32_t)1970), 1, 1, 0, 0, 0, 1, /*hidden argument*/NULL);
		double L_2 = Nullable_1_get_Value_m3507161817((Nullable_1_t2317227445 *)(&___unixTime0), /*hidden argument*/Nullable_1_get_Value_m3507161817_RuntimeMethod_var);
		DateTime_t3738529785  L_3 = DateTime_AddSeconds_m332574389((DateTime_t3738529785 *)(&V_1), L_2, /*hidden argument*/NULL);
		Nullable_1_t1166124571  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Nullable_1__ctor_m3556066642((&L_4), L_3, /*hidden argument*/Nullable_1__ctor_m3556066642_RuntimeMethod_var);
		V_2 = L_4;
		goto IL_0054;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0044;
		throw e;
	}

CATCH_0044:
	{ // begin catch(System.Exception)
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t1166124571 ));
		Nullable_1_t1166124571  L_5 = V_0;
		V_2 = L_5;
		goto IL_0054;
	} // end catch (depth: 1)

IL_0054:
	{
		Nullable_1_t1166124571  L_6 = V_2;
		return L_6;
	}
}
// System.Nullable`1<System.Double> SkillzSDK.Helpers::SafeDoubleParse(System.String)
extern "C"  Nullable_1_t2317227445  Helpers_SafeDoubleParse_m3716186029 (RuntimeObject * __this /* static, unused */, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Helpers_SafeDoubleParse_m3716186029_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	bool V_1 = false;
	Nullable_1_t2317227445  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Nullable_1_t2317227445  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	{
		String_t* L_0 = ___str0;
		bool L_1 = Double_TryParse_m3021978240(NULL /*static, unused*/, L_0, (double*)(&V_0), /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		double L_3 = V_0;
		Nullable_1_t2317227445  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Nullable_1__ctor_m1383724426((&L_4), L_3, /*hidden argument*/Nullable_1__ctor_m1383724426_RuntimeMethod_var);
		G_B3_0 = L_4;
		goto IL_0023;
	}

IL_001a:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_t2317227445 ));
		Nullable_1_t2317227445  L_5 = V_2;
		G_B3_0 = L_5;
	}

IL_0023:
	{
		return G_B3_0;
	}
}
// System.Nullable`1<System.Int32> SkillzSDK.Helpers::SafeIntParse(System.String)
extern "C"  Nullable_1_t378540539  Helpers_SafeIntParse_m1084147332 (RuntimeObject * __this /* static, unused */, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Helpers_SafeIntParse_m1084147332_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	Nullable_1_t378540539  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Nullable_1_t378540539  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	{
		String_t* L_0 = ___str0;
		bool L_1 = Int32_TryParse_m2404707562(NULL /*static, unused*/, L_0, (int32_t*)(&V_0), /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		Nullable_1_t378540539  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Nullable_1__ctor_m3556133687((&L_4), L_3, /*hidden argument*/Nullable_1__ctor_m3556133687_RuntimeMethod_var);
		G_B3_0 = L_4;
		goto IL_0023;
	}

IL_001a:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_t378540539 ));
		Nullable_1_t378540539  L_5 = V_2;
		G_B3_0 = L_5;
	}

IL_0023:
	{
		return G_B3_0;
	}
}
// System.Nullable`1<System.UInt32> SkillzSDK.Helpers::SafeUintParse(System.String)
extern "C"  Nullable_1_t4282624060  Helpers_SafeUintParse_m2387950348 (RuntimeObject * __this /* static, unused */, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Helpers_SafeUintParse_m2387950348_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	Nullable_1_t4282624060  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Nullable_1_t4282624060  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	{
		String_t* L_0 = ___str0;
		bool L_1 = UInt32_TryParse_m2819179361(NULL /*static, unused*/, L_0, (uint32_t*)(&V_0), /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		uint32_t L_3 = V_0;
		Nullable_1_t4282624060  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Nullable_1__ctor_m2245710918((&L_4), L_3, /*hidden argument*/Nullable_1__ctor_m2245710918_RuntimeMethod_var);
		G_B3_0 = L_4;
		goto IL_0023;
	}

IL_001a:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_t4282624060 ));
		Nullable_1_t4282624060  L_5 = V_2;
		G_B3_0 = L_5;
	}

IL_0023:
	{
		return G_B3_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SkillzSDK.Match::.ctor(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void Match__ctor_m3021370963 (Match_t1925635937 * __this, Dictionary_2_t2865362463 * ___jsonData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Match__ctor_m3021370963_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t2317227445  V_0;
	memset(&V_0, 0, sizeof(V_0));
	RuntimeObject * V_1 = NULL;
	Dictionary_2_t2865362463 * V_2 = NULL;
	Player_t2961656996  V_3;
	memset(&V_3, 0, sizeof(V_3));
	RuntimeObject * V_4 = NULL;
	KeyValuePair_2_t968067334  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Enumerator_t524577942  V_6;
	memset(&V_6, 0, sizeof(V_6));
	String_t* V_7 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		Dictionary_2_t2865362463 * L_0 = ___jsonData0;
		String_t* L_1 = SkillzExtensions_SafeGetStringValue_m3748395908(NULL /*static, unused*/, L_0, _stringLiteral3324580424, /*hidden argument*/NULL);
		__this->set_Description_1(L_1);
		Dictionary_2_t2865362463 * L_2 = ___jsonData0;
		Nullable_1_t2317227445  L_3 = SkillzExtensions_SafeGetDoubleValue_m1033428401(NULL /*static, unused*/, L_2, _stringLiteral1596949038, /*hidden argument*/NULL);
		V_0 = L_3;
		double L_4 = Nullable_1_get_Value_m3507161817((Nullable_1_t2317227445 *)(&V_0), /*hidden argument*/Nullable_1_get_Value_m3507161817_RuntimeMethod_var);
		Nullable_1_t3119828856  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Nullable_1__ctor_m2775392932((&L_5), (((float)((float)L_4))), /*hidden argument*/Nullable_1__ctor_m2775392932_RuntimeMethod_var);
		__this->set_EntryCash_9(L_5);
		Dictionary_2_t2865362463 * L_6 = ___jsonData0;
		Nullable_1_t378540539  L_7 = SkillzExtensions_SafeGetIntValue_m2048183163(NULL /*static, unused*/, L_6, _stringLiteral1839984739, /*hidden argument*/NULL);
		__this->set_EntryPoints_8(L_7);
		Dictionary_2_t2865362463 * L_8 = ___jsonData0;
		Nullable_1_t378540539  L_9 = SkillzExtensions_SafeGetIntValue_m2048183163(NULL /*static, unused*/, L_8, _stringLiteral3454449607, /*hidden argument*/NULL);
		__this->set_ID_2(L_9);
		Dictionary_2_t2865362463 * L_10 = ___jsonData0;
		Nullable_1_t378540539  L_11 = SkillzExtensions_SafeGetIntValue_m2048183163(NULL /*static, unused*/, L_10, _stringLiteral988376447, /*hidden argument*/NULL);
		__this->set_TemplateID_3(L_11);
		Dictionary_2_t2865362463 * L_12 = ___jsonData0;
		String_t* L_13 = SkillzExtensions_SafeGetStringValue_m3748395908(NULL /*static, unused*/, L_12, _stringLiteral62725243, /*hidden argument*/NULL);
		__this->set_Name_0(L_13);
		Dictionary_2_t2865362463 * L_14 = ___jsonData0;
		Nullable_1_t1819850047  L_15 = SkillzExtensions_SafeGetBoolValue_m2039874569(NULL /*static, unused*/, L_14, _stringLiteral1720450795, /*hidden argument*/NULL);
		__this->set_IsCash_7(L_15);
		Dictionary_2_t2865362463 * L_16 = ___jsonData0;
		RuntimeObject * L_17 = SkillzExtensions_SafeGetValue_m1149006436(NULL /*static, unused*/, L_16, _stringLiteral2261821926, /*hidden argument*/NULL);
		V_1 = L_17;
		RuntimeObject * L_18 = V_1;
		if (!L_18)
		{
			goto IL_00ca;
		}
	}
	{
		RuntimeObject * L_19 = V_1;
		NullCheck(L_19);
		Type_t * L_20 = Object_GetType_m88164663(L_19, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_21 = { reinterpret_cast<intptr_t> (Dictionary_2_t2865362463_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_22 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_20) == ((RuntimeObject*)(Type_t *)L_22))))
		{
			goto IL_00ca;
		}
	}
	{
		RuntimeObject * L_23 = V_1;
		V_2 = ((Dictionary_2_t2865362463 *)CastclassClass((RuntimeObject*)L_23, Dictionary_2_t2865362463_il2cpp_TypeInfo_var));
		Dictionary_2_t2865362463 * L_24 = V_2;
		Player_t2961656996  L_25;
		memset(&L_25, 0, sizeof(L_25));
		Player__ctor_m2866643626((&L_25), L_24, /*hidden argument*/NULL);
		__this->set_Player_6(L_25);
		goto IL_00d9;
	}

IL_00ca:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(Player_t2961656996 ));
		Player_t2961656996  L_26 = V_3;
		__this->set_Player_6(L_26);
	}

IL_00d9:
	{
		Dictionary_2_t1632706988 * L_27 = (Dictionary_2_t1632706988 *)il2cpp_codegen_object_new(Dictionary_2_t1632706988_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4291560139(L_27, /*hidden argument*/Dictionary_2__ctor_m4291560139_RuntimeMethod_var);
		__this->set_GameParams_5(L_27);
		Dictionary_2_t2865362463 * L_28 = ___jsonData0;
		RuntimeObject * L_29 = SkillzExtensions_SafeGetValue_m1149006436(NULL /*static, unused*/, L_28, _stringLiteral135315692, /*hidden argument*/NULL);
		V_4 = L_29;
		RuntimeObject * L_30 = V_4;
		if (!L_30)
		{
			goto IL_01a4;
		}
	}
	{
		RuntimeObject * L_31 = V_4;
		NullCheck(L_31);
		Type_t * L_32 = Object_GetType_m88164663(L_31, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_33 = { reinterpret_cast<intptr_t> (Dictionary_2_t2865362463_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_34 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_33, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_32) == ((RuntimeObject*)(Type_t *)L_34))))
		{
			goto IL_01a4;
		}
	}
	{
		RuntimeObject * L_35 = V_4;
		NullCheck(((Dictionary_2_t2865362463 *)CastclassClass((RuntimeObject*)L_35, Dictionary_2_t2865362463_il2cpp_TypeInfo_var)));
		Enumerator_t524577942  L_36 = Dictionary_2_GetEnumerator_m788364790(((Dictionary_2_t2865362463 *)CastclassClass((RuntimeObject*)L_35, Dictionary_2_t2865362463_il2cpp_TypeInfo_var)), /*hidden argument*/Dictionary_2_GetEnumerator_m788364790_RuntimeMethod_var);
		V_6 = L_36;
	}

IL_011c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0185;
		}

IL_0121:
		{
			KeyValuePair_2_t968067334  L_37 = Enumerator_get_Current_m687346582((Enumerator_t524577942 *)(&V_6), /*hidden argument*/Enumerator_get_Current_m687346582_RuntimeMethod_var);
			V_5 = L_37;
			RuntimeObject * L_38 = KeyValuePair_2_get_Value_m436157746((KeyValuePair_2_t968067334 *)(&V_5), /*hidden argument*/KeyValuePair_2_get_Value_m436157746_RuntimeMethod_var);
			if (L_38)
			{
				goto IL_013b;
			}
		}

IL_0136:
		{
			goto IL_0185;
		}

IL_013b:
		{
			RuntimeObject * L_39 = KeyValuePair_2_get_Value_m436157746((KeyValuePair_2_t968067334 *)(&V_5), /*hidden argument*/KeyValuePair_2_get_Value_m436157746_RuntimeMethod_var);
			NullCheck(L_39);
			String_t* L_40 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_39);
			V_7 = L_40;
			String_t* L_41 = KeyValuePair_2_get_Key_m1405741725((KeyValuePair_2_t968067334 *)(&V_5), /*hidden argument*/KeyValuePair_2_get_Key_m1405741725_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_42 = String_op_Equality_m920492651(NULL /*static, unused*/, L_41, _stringLiteral2293145220, /*hidden argument*/NULL);
			if (!L_42)
			{
				goto IL_0171;
			}
		}

IL_015f:
		{
			String_t* L_43 = V_7;
			Nullable_1_t4282624060  L_44 = Helpers_SafeUintParse_m2387950348(NULL /*static, unused*/, L_43, /*hidden argument*/NULL);
			__this->set_SkillzDifficulty_4(L_44);
			goto IL_0185;
		}

IL_0171:
		{
			Dictionary_2_t1632706988 * L_45 = __this->get_GameParams_5();
			String_t* L_46 = KeyValuePair_2_get_Key_m1405741725((KeyValuePair_2_t968067334 *)(&V_5), /*hidden argument*/KeyValuePair_2_get_Key_m1405741725_RuntimeMethod_var);
			String_t* L_47 = V_7;
			NullCheck(L_45);
			Dictionary_2_Add_m2958530770(L_45, L_46, L_47, /*hidden argument*/Dictionary_2_Add_m2958530770_RuntimeMethod_var);
		}

IL_0185:
		{
			bool L_48 = Enumerator_MoveNext_m597713471((Enumerator_t524577942 *)(&V_6), /*hidden argument*/Enumerator_MoveNext_m597713471_RuntimeMethod_var);
			if (L_48)
			{
				goto IL_0121;
			}
		}

IL_0191:
		{
			IL2CPP_LEAVE(0x1A4, FINALLY_0196);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0196;
	}

FINALLY_0196:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2607424534((Enumerator_t524577942 *)(&V_6), /*hidden argument*/Enumerator_Dispose_m2607424534_RuntimeMethod_var);
		IL2CPP_END_FINALLY(406)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(406)
	{
		IL2CPP_JUMP_TBL(0x1A4, IL_01a4)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_01a4:
	{
		return;
	}
}
// System.String SkillzSDK.Match::ToString()
extern "C"  String_t* Match_ToString_m1621100561 (Match_t1925635937 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Match_ToString_m1621100561_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	KeyValuePair_2_t4030379155  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Enumerator_t3586889763  V_2;
	memset(&V_2, 0, sizeof(V_2));
	String_t* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		V_0 = L_0;
		Dictionary_2_t1632706988 * L_1 = __this->get_GameParams_5();
		NullCheck(L_1);
		Enumerator_t3586889763  L_2 = Dictionary_2_GetEnumerator_m260861070(L_1, /*hidden argument*/Dictionary_2_GetEnumerator_m260861070_RuntimeMethod_var);
		V_2 = L_2;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0055;
		}

IL_0017:
		{
			KeyValuePair_2_t4030379155  L_3 = Enumerator_get_Current_m2519371089((Enumerator_t3586889763 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m2519371089_RuntimeMethod_var);
			V_1 = L_3;
			String_t* L_4 = V_0;
			V_3 = L_4;
			StringU5BU5D_t1281789340* L_5 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)5));
			String_t* L_6 = V_3;
			NullCheck(L_5);
			ArrayElementTypeCheck (L_5, L_6);
			(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_6);
			StringU5BU5D_t1281789340* L_7 = L_5;
			NullCheck(L_7);
			ArrayElementTypeCheck (L_7, _stringLiteral3452614528);
			(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral3452614528);
			StringU5BU5D_t1281789340* L_8 = L_7;
			String_t* L_9 = KeyValuePair_2_get_Key_m3980750512((KeyValuePair_2_t4030379155 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m3980750512_RuntimeMethod_var);
			NullCheck(L_8);
			ArrayElementTypeCheck (L_8, L_9);
			(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_9);
			StringU5BU5D_t1281789340* L_10 = L_8;
			NullCheck(L_10);
			ArrayElementTypeCheck (L_10, _stringLiteral3450517398);
			(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral3450517398);
			StringU5BU5D_t1281789340* L_11 = L_10;
			String_t* L_12 = KeyValuePair_2_get_Value_m2243990694((KeyValuePair_2_t4030379155 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m2243990694_RuntimeMethod_var);
			NullCheck(L_11);
			ArrayElementTypeCheck (L_11, L_12);
			(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_12);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_13 = String_Concat_m1809518182(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
			V_0 = L_13;
		}

IL_0055:
		{
			bool L_14 = Enumerator_MoveNext_m1175750522((Enumerator_t3586889763 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m1175750522_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_0017;
			}
		}

IL_0061:
		{
			IL2CPP_LEAVE(0x74, FINALLY_0066);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0066;
	}

FINALLY_0066:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2198401511((Enumerator_t3586889763 *)(&V_2), /*hidden argument*/Enumerator_Dispose_m2198401511_RuntimeMethod_var);
		IL2CPP_END_FINALLY(102)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(102)
	{
		IL2CPP_JUMP_TBL(0x74, IL_0074)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0074:
	{
		ObjectU5BU5D_t2843939325* L_15 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)((int32_t)21)));
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral3070787003);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral3070787003);
		ObjectU5BU5D_t2843939325* L_16 = L_15;
		Nullable_1_t378540539  L_17 = __this->get_ID_2();
		Nullable_1_t378540539  L_18 = L_17;
		RuntimeObject * L_19 = Box(Nullable_1_t378540539_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_19);
		ObjectU5BU5D_t2843939325* L_20 = L_16;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteral3159449611);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3159449611);
		ObjectU5BU5D_t2843939325* L_21 = L_20;
		String_t* L_22 = __this->get_Name_0();
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_22);
		ObjectU5BU5D_t2843939325* L_23 = L_21;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteral992829410);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral992829410);
		ObjectU5BU5D_t2843939325* L_24 = L_23;
		String_t* L_25 = __this->get_Description_1();
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_25);
		ObjectU5BU5D_t2843939325* L_26 = L_24;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, _stringLiteral1247249208);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)_stringLiteral1247249208);
		ObjectU5BU5D_t2843939325* L_27 = L_26;
		Nullable_1_t378540539  L_28 = __this->get_TemplateID_3();
		Nullable_1_t378540539  L_29 = L_28;
		RuntimeObject * L_30 = Box(Nullable_1_t378540539_il2cpp_TypeInfo_var, &L_29);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_30);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)L_30);
		ObjectU5BU5D_t2843939325* L_31 = L_27;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, _stringLiteral2912928911);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject *)_stringLiteral2912928911);
		ObjectU5BU5D_t2843939325* L_32 = L_31;
		Nullable_1_t4282624060  L_33 = __this->get_SkillzDifficulty_4();
		Nullable_1_t4282624060  L_34 = L_33;
		RuntimeObject * L_35 = Box(Nullable_1_t4282624060_il2cpp_TypeInfo_var, &L_34);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_35);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject *)L_35);
		ObjectU5BU5D_t2843939325* L_36 = L_32;
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, _stringLiteral3489731131);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (RuntimeObject *)_stringLiteral3489731131);
		ObjectU5BU5D_t2843939325* L_37 = L_36;
		Nullable_1_t1819850047  L_38 = __this->get_IsCash_7();
		Nullable_1_t1819850047  L_39 = L_38;
		RuntimeObject * L_40 = Box(Nullable_1_t1819850047_il2cpp_TypeInfo_var, &L_39);
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_40);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (RuntimeObject *)L_40);
		ObjectU5BU5D_t2843939325* L_41 = L_37;
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, _stringLiteral1304305895);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (RuntimeObject *)_stringLiteral1304305895);
		ObjectU5BU5D_t2843939325* L_42 = L_41;
		Nullable_1_t378540539  L_43 = __this->get_EntryPoints_8();
		Nullable_1_t378540539  L_44 = L_43;
		RuntimeObject * L_45 = Box(Nullable_1_t378540539_il2cpp_TypeInfo_var, &L_44);
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, L_45);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (RuntimeObject *)L_45);
		ObjectU5BU5D_t2843939325* L_46 = L_42;
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, _stringLiteral3163162291);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (RuntimeObject *)_stringLiteral3163162291);
		ObjectU5BU5D_t2843939325* L_47 = L_46;
		Nullable_1_t3119828856  L_48 = __this->get_EntryCash_9();
		Nullable_1_t3119828856  L_49 = L_48;
		RuntimeObject * L_50 = Box(Nullable_1_t3119828856_il2cpp_TypeInfo_var, &L_49);
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, L_50);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (RuntimeObject *)L_50);
		ObjectU5BU5D_t2843939325* L_51 = L_47;
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, _stringLiteral2305604390);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (RuntimeObject *)_stringLiteral2305604390);
		ObjectU5BU5D_t2843939325* L_52 = L_51;
		String_t* L_53 = V_0;
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, L_53);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (RuntimeObject *)L_53);
		ObjectU5BU5D_t2843939325* L_54 = L_52;
		NullCheck(L_54);
		ArrayElementTypeCheck (L_54, _stringLiteral3806938157);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (RuntimeObject *)_stringLiteral3806938157);
		ObjectU5BU5D_t2843939325* L_55 = L_54;
		Player_t2961656996  L_56 = __this->get_Player_6();
		Player_t2961656996  L_57 = L_56;
		RuntimeObject * L_58 = Box(Player_t2961656996_il2cpp_TypeInfo_var, &L_57);
		NullCheck(L_55);
		ArrayElementTypeCheck (L_55, L_58);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (RuntimeObject *)L_58);
		ObjectU5BU5D_t2843939325* L_59 = L_55;
		NullCheck(L_59);
		ArrayElementTypeCheck (L_59, _stringLiteral3452614643);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)20)), (RuntimeObject *)_stringLiteral3452614643);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_60 = String_Concat_m2971454694(NULL /*static, unused*/, L_59, /*hidden argument*/NULL);
		return L_60;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object SkillzSDK.MiniJSON.Json::Deserialize(System.String)
extern "C"  RuntimeObject * Json_Deserialize_m639621384 (RuntimeObject * __this /* static, unused */, String_t* ___json0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___json0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return NULL;
	}

IL_0008:
	{
		String_t* L_1 = ___json0;
		RuntimeObject * L_2 = Parser_Parse_m579644997(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String SkillzSDK.MiniJSON.Json::Serialize(System.Object)
extern "C"  String_t* Json_Serialize_m338419606 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___obj0;
		String_t* L_1 = Serializer_Serialize_m3997990965(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SkillzSDK.MiniJSON.Json/Parser::.ctor(System.String)
extern "C"  void Parser__ctor_m2872727206 (Parser_t744090300 * __this, String_t* ___jsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser__ctor_m2872727206_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___jsonString0;
		StringReader_t3465604688 * L_1 = (StringReader_t3465604688 *)il2cpp_codegen_object_new(StringReader_t3465604688_il2cpp_TypeInfo_var);
		StringReader__ctor_m126993932(L_1, L_0, /*hidden argument*/NULL);
		__this->set_json_1(L_1);
		return;
	}
}
// System.Boolean SkillzSDK.MiniJSON.Json/Parser::IsWordBreak(System.Char)
extern "C"  bool Parser_IsWordBreak_m502866020 (RuntimeObject * __this /* static, unused */, Il2CppChar ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_IsWordBreak_m502866020_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		Il2CppChar L_0 = ___c0;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_1 = Char_IsWhiteSpace_m2148390798(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		Il2CppChar L_2 = ___c0;
		NullCheck(_stringLiteral1482762766);
		int32_t L_3 = String_IndexOf_m363431711(_stringLiteral1482762766, L_2, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 1;
	}

IL_001f:
	{
		return (bool)G_B3_0;
	}
}
// System.Object SkillzSDK.MiniJSON.Json/Parser::Parse(System.String)
extern "C"  RuntimeObject * Parser_Parse_m579644997 (RuntimeObject * __this /* static, unused */, String_t* ___jsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_Parse_m579644997_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Parser_t744090300 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___jsonString0;
		Parser_t744090300 * L_1 = (Parser_t744090300 *)il2cpp_codegen_object_new(Parser_t744090300_il2cpp_TypeInfo_var);
		Parser__ctor_m2872727206(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		Parser_t744090300 * L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject * L_3 = Parser_ParseValue_m3476452396(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		IL2CPP_LEAVE(0x20, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		{
			Parser_t744090300 * L_4 = V_0;
			if (!L_4)
			{
				goto IL_001f;
			}
		}

IL_0019:
		{
			Parser_t744090300 * L_5 = V_0;
			NullCheck(L_5);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_5);
		}

IL_001f:
		{
			IL2CPP_END_FINALLY(19)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_JUMP_TBL(0x20, IL_0020)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0020:
	{
		RuntimeObject * L_6 = V_1;
		return L_6;
	}
}
// System.Void SkillzSDK.MiniJSON.Json/Parser::Dispose()
extern "C"  void Parser_Dispose_m2340866990 (Parser_t744090300 * __this, const RuntimeMethod* method)
{
	{
		StringReader_t3465604688 * L_0 = __this->get_json_1();
		NullCheck(L_0);
		TextReader_Dispose_m4253712522(L_0, /*hidden argument*/NULL);
		__this->set_json_1((StringReader_t3465604688 *)NULL);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> SkillzSDK.MiniJSON.Json/Parser::ParseObject()
extern "C"  Dictionary_2_t2865362463 * Parser_ParseObject_m2337980612 (Parser_t744090300 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseObject_m2337980612_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t2865362463 * V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		Dictionary_2_t2865362463 * L_0 = (Dictionary_2_t2865362463 *)il2cpp_codegen_object_new(Dictionary_2_t2865362463_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3962145734(L_0, /*hidden argument*/Dictionary_2__ctor_m3962145734_RuntimeMethod_var);
		V_0 = L_0;
		StringReader_t3465604688 * L_1 = __this->get_json_1();
		NullCheck(L_1);
		VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.IO.TextReader::Read() */, L_1);
	}

IL_0012:
	{
		int32_t L_2 = Parser_get_NextToken_m3456563509(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0037;
			}
			case 1:
			{
				goto IL_002b;
			}
			case 2:
			{
				goto IL_003e;
			}
		}
	}

IL_002b:
	{
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) == ((int32_t)6)))
		{
			goto IL_0039;
		}
	}
	{
		goto IL_0040;
	}

IL_0037:
	{
		return (Dictionary_2_t2865362463 *)NULL;
	}

IL_0039:
	{
		goto IL_0012;
	}

IL_003e:
	{
		Dictionary_2_t2865362463 * L_5 = V_0;
		return L_5;
	}

IL_0040:
	{
		String_t* L_6 = Parser_ParseString_m2447585359(__this, /*hidden argument*/NULL);
		V_2 = L_6;
		String_t* L_7 = V_2;
		if (L_7)
		{
			goto IL_004f;
		}
	}
	{
		return (Dictionary_2_t2865362463 *)NULL;
	}

IL_004f:
	{
		int32_t L_8 = Parser_get_NextToken_m3456563509(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_8) == ((int32_t)5)))
		{
			goto IL_005d;
		}
	}
	{
		return (Dictionary_2_t2865362463 *)NULL;
	}

IL_005d:
	{
		StringReader_t3465604688 * L_9 = __this->get_json_1();
		NullCheck(L_9);
		VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.IO.TextReader::Read() */, L_9);
		Dictionary_2_t2865362463 * L_10 = V_0;
		String_t* L_11 = V_2;
		RuntimeObject * L_12 = Parser_ParseValue_m3476452396(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Dictionary_2_set_Item_m2329160973(L_10, L_11, L_12, /*hidden argument*/Dictionary_2_set_Item_m2329160973_RuntimeMethod_var);
		goto IL_007b;
	}

IL_007b:
	{
		goto IL_0012;
	}
}
// System.Collections.Generic.List`1<System.Object> SkillzSDK.MiniJSON.Json/Parser::ParseArray()
extern "C"  List_1_t257213610 * Parser_ParseArray_m452367317 (Parser_t744090300 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseArray_m452367317_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t257213610 * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	{
		List_1_t257213610 * L_0 = (List_1_t257213610 *)il2cpp_codegen_object_new(List_1_t257213610_il2cpp_TypeInfo_var);
		List_1__ctor_m2321703786(L_0, /*hidden argument*/List_1__ctor_m2321703786_RuntimeMethod_var);
		V_0 = L_0;
		StringReader_t3465604688 * L_1 = __this->get_json_1();
		NullCheck(L_1);
		VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.IO.TextReader::Read() */, L_1);
		V_1 = (bool)1;
		goto IL_0061;
	}

IL_0019:
	{
		int32_t L_2 = Parser_get_NextToken_m3456563509(__this, /*hidden argument*/NULL);
		V_2 = L_2;
		int32_t L_3 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)4)))
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_0034;
			}
			case 2:
			{
				goto IL_0041;
			}
		}
	}

IL_0034:
	{
		int32_t L_4 = V_2;
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		goto IL_004d;
	}

IL_003f:
	{
		return (List_1_t257213610 *)NULL;
	}

IL_0041:
	{
		goto IL_0061;
	}

IL_0046:
	{
		V_1 = (bool)0;
		goto IL_0061;
	}

IL_004d:
	{
		int32_t L_5 = V_2;
		RuntimeObject * L_6 = Parser_ParseByToken_m3089833922(__this, L_5, /*hidden argument*/NULL);
		V_3 = L_6;
		List_1_t257213610 * L_7 = V_0;
		RuntimeObject * L_8 = V_3;
		NullCheck(L_7);
		List_1_Add_m3338814081(L_7, L_8, /*hidden argument*/List_1_Add_m3338814081_RuntimeMethod_var);
		goto IL_0061;
	}

IL_0061:
	{
		bool L_9 = V_1;
		if (L_9)
		{
			goto IL_0019;
		}
	}
	{
		List_1_t257213610 * L_10 = V_0;
		return L_10;
	}
}
// System.Object SkillzSDK.MiniJSON.Json/Parser::ParseValue()
extern "C"  RuntimeObject * Parser_ParseValue_m3476452396 (Parser_t744090300 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = Parser_get_NextToken_m3456563509(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		RuntimeObject * L_2 = Parser_ParseByToken_m3089833922(__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object SkillzSDK.MiniJSON.Json/Parser::ParseByToken(SkillzSDK.MiniJSON.Json/Parser/TOKEN)
extern "C"  RuntimeObject * Parser_ParseByToken_m3089833922 (Parser_t744090300 * __this, int32_t ___token0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseByToken_m3089833922_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___token0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)7)))
		{
			case 0:
			{
				goto IL_0035;
			}
			case 1:
			{
				goto IL_003c;
			}
			case 2:
			{
				goto IL_0051;
			}
			case 3:
			{
				goto IL_0058;
			}
			case 4:
			{
				goto IL_005f;
			}
		}
	}
	{
		int32_t L_1 = ___token0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0043;
			}
			case 1:
			{
				goto IL_0061;
			}
			case 2:
			{
				goto IL_004a;
			}
		}
	}
	{
		goto IL_0061;
	}

IL_0035:
	{
		String_t* L_2 = Parser_ParseString_m2447585359(__this, /*hidden argument*/NULL);
		return L_2;
	}

IL_003c:
	{
		RuntimeObject * L_3 = Parser_ParseNumber_m2559473348(__this, /*hidden argument*/NULL);
		return L_3;
	}

IL_0043:
	{
		Dictionary_2_t2865362463 * L_4 = Parser_ParseObject_m2337980612(__this, /*hidden argument*/NULL);
		return L_4;
	}

IL_004a:
	{
		List_1_t257213610 * L_5 = Parser_ParseArray_m452367317(__this, /*hidden argument*/NULL);
		return L_5;
	}

IL_0051:
	{
		bool L_6 = ((bool)1);
		RuntimeObject * L_7 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_6);
		return L_7;
	}

IL_0058:
	{
		bool L_8 = ((bool)0);
		RuntimeObject * L_9 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_8);
		return L_9;
	}

IL_005f:
	{
		return NULL;
	}

IL_0061:
	{
		return NULL;
	}
}
// System.String SkillzSDK.MiniJSON.Json/Parser::ParseString()
extern "C"  String_t* Parser_ParseString_m2447585359 (Parser_t744090300 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseString_m2447585359_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	bool V_2 = false;
	CharU5BU5D_t3528271667* V_3 = NULL;
	int32_t V_4 = 0;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		StringReader_t3465604688 * L_1 = __this->get_json_1();
		NullCheck(L_1);
		VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.IO.TextReader::Read() */, L_1);
		V_2 = (bool)1;
		goto IL_0166;
	}

IL_0019:
	{
		StringReader_t3465604688 * L_2 = __this->get_json_1();
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 System.IO.TextReader::Peek() */, L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_0031;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_016c;
	}

IL_0031:
	{
		Il2CppChar L_4 = Parser_get_NextChar_m3195442849(__this, /*hidden argument*/NULL);
		V_1 = L_4;
		Il2CppChar L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)34))))
		{
			goto IL_004d;
		}
	}
	{
		Il2CppChar L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)92))))
		{
			goto IL_0054;
		}
	}
	{
		goto IL_0159;
	}

IL_004d:
	{
		V_2 = (bool)0;
		goto IL_0166;
	}

IL_0054:
	{
		StringReader_t3465604688 * L_7 = __this->get_json_1();
		NullCheck(L_7);
		int32_t L_8 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 System.IO.TextReader::Peek() */, L_7);
		if ((!(((uint32_t)L_8) == ((uint32_t)(-1)))))
		{
			goto IL_006c;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_0166;
	}

IL_006c:
	{
		Il2CppChar L_9 = Parser_get_NextChar_m3195442849(__this, /*hidden argument*/NULL);
		V_1 = L_9;
		Il2CppChar L_10 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)((int32_t)114))))
		{
			case 0:
			{
				goto IL_00f7;
			}
			case 1:
			{
				goto IL_008c;
			}
			case 2:
			{
				goto IL_0105;
			}
			case 3:
			{
				goto IL_0113;
			}
		}
	}

IL_008c:
	{
		Il2CppChar L_11 = V_1;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)34))))
		{
			goto IL_00c1;
		}
	}
	{
		Il2CppChar L_12 = V_1;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)47))))
		{
			goto IL_00c1;
		}
	}
	{
		Il2CppChar L_13 = V_1;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)92))))
		{
			goto IL_00c1;
		}
	}
	{
		Il2CppChar L_14 = V_1;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)98))))
		{
			goto IL_00ce;
		}
	}
	{
		Il2CppChar L_15 = V_1;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)102))))
		{
			goto IL_00db;
		}
	}
	{
		Il2CppChar L_16 = V_1;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)110))))
		{
			goto IL_00e9;
		}
	}
	{
		goto IL_0154;
	}

IL_00c1:
	{
		StringBuilder_t * L_17 = V_0;
		Il2CppChar L_18 = V_1;
		NullCheck(L_17);
		StringBuilder_Append_m2383614642(L_17, L_18, /*hidden argument*/NULL);
		goto IL_0154;
	}

IL_00ce:
	{
		StringBuilder_t * L_19 = V_0;
		NullCheck(L_19);
		StringBuilder_Append_m2383614642(L_19, 8, /*hidden argument*/NULL);
		goto IL_0154;
	}

IL_00db:
	{
		StringBuilder_t * L_20 = V_0;
		NullCheck(L_20);
		StringBuilder_Append_m2383614642(L_20, ((int32_t)12), /*hidden argument*/NULL);
		goto IL_0154;
	}

IL_00e9:
	{
		StringBuilder_t * L_21 = V_0;
		NullCheck(L_21);
		StringBuilder_Append_m2383614642(L_21, ((int32_t)10), /*hidden argument*/NULL);
		goto IL_0154;
	}

IL_00f7:
	{
		StringBuilder_t * L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_Append_m2383614642(L_22, ((int32_t)13), /*hidden argument*/NULL);
		goto IL_0154;
	}

IL_0105:
	{
		StringBuilder_t * L_23 = V_0;
		NullCheck(L_23);
		StringBuilder_Append_m2383614642(L_23, ((int32_t)9), /*hidden argument*/NULL);
		goto IL_0154;
	}

IL_0113:
	{
		V_3 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)4));
		V_4 = 0;
		goto IL_0132;
	}

IL_0122:
	{
		CharU5BU5D_t3528271667* L_24 = V_3;
		int32_t L_25 = V_4;
		Il2CppChar L_26 = Parser_get_NextChar_m3195442849(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (Il2CppChar)L_26);
		int32_t L_27 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_0132:
	{
		int32_t L_28 = V_4;
		if ((((int32_t)L_28) < ((int32_t)4)))
		{
			goto IL_0122;
		}
	}
	{
		StringBuilder_t * L_29 = V_0;
		CharU5BU5D_t3528271667* L_30 = V_3;
		String_t* L_31 = String_CreateString_m2818852475(NULL, L_30, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int32_t L_32 = Convert_ToInt32_m391894676(NULL /*static, unused*/, L_31, ((int32_t)16), /*hidden argument*/NULL);
		NullCheck(L_29);
		StringBuilder_Append_m2383614642(L_29, (((int32_t)((uint16_t)L_32))), /*hidden argument*/NULL);
		goto IL_0154;
	}

IL_0154:
	{
		goto IL_0166;
	}

IL_0159:
	{
		StringBuilder_t * L_33 = V_0;
		Il2CppChar L_34 = V_1;
		NullCheck(L_33);
		StringBuilder_Append_m2383614642(L_33, L_34, /*hidden argument*/NULL);
		goto IL_0166;
	}

IL_0166:
	{
		bool L_35 = V_2;
		if (L_35)
		{
			goto IL_0019;
		}
	}

IL_016c:
	{
		StringBuilder_t * L_36 = V_0;
		NullCheck(L_36);
		String_t* L_37 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_36);
		return L_37;
	}
}
// System.Object SkillzSDK.MiniJSON.Json/Parser::ParseNumber()
extern "C"  RuntimeObject * Parser_ParseNumber_m2559473348 (Parser_t744090300 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseNumber_m2559473348_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int64_t V_1 = 0;
	double V_2 = 0.0;
	{
		String_t* L_0 = Parser_get_NextWord_m2019659234(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2 = String_IndexOf_m363431711(L_1, ((int32_t)46), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_4 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		Int64_TryParse_m3606398488(NULL /*static, unused*/, L_3, ((int32_t)511), L_4, (int64_t*)(&V_1), /*hidden argument*/NULL);
		int64_t L_5 = V_1;
		int64_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &L_6);
		return L_7;
	}

IL_002f:
	{
		String_t* L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_9 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		Double_TryParse_m623190659(NULL /*static, unused*/, L_8, ((int32_t)511), L_9, (double*)(&V_2), /*hidden argument*/NULL);
		double L_10 = V_2;
		double L_11 = L_10;
		RuntimeObject * L_12 = Box(Double_t594665363_il2cpp_TypeInfo_var, &L_11);
		return L_12;
	}
}
// System.Void SkillzSDK.MiniJSON.Json/Parser::EatWhitespace()
extern "C"  void Parser_EatWhitespace_m1572341284 (Parser_t744090300 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_EatWhitespace_m1572341284_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_0027;
	}

IL_0005:
	{
		StringReader_t3465604688 * L_0 = __this->get_json_1();
		NullCheck(L_0);
		VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.IO.TextReader::Read() */, L_0);
		StringReader_t3465604688 * L_1 = __this->get_json_1();
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 System.IO.TextReader::Peek() */, L_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0027;
		}
	}
	{
		goto IL_0037;
	}

IL_0027:
	{
		Il2CppChar L_3 = Parser_get_PeekChar_m1352524934(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_4 = Char_IsWhiteSpace_m2148390798(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0005;
		}
	}

IL_0037:
	{
		return;
	}
}
// System.Char SkillzSDK.MiniJSON.Json/Parser::get_PeekChar()
extern "C"  Il2CppChar Parser_get_PeekChar_m1352524934 (Parser_t744090300 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_get_PeekChar_m1352524934_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringReader_t3465604688 * L_0 = __this->get_json_1();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 System.IO.TextReader::Peek() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		Il2CppChar L_2 = Convert_ToChar_m4189066566(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Char SkillzSDK.MiniJSON.Json/Parser::get_NextChar()
extern "C"  Il2CppChar Parser_get_NextChar_m3195442849 (Parser_t744090300 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_get_NextChar_m3195442849_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringReader_t3465604688 * L_0 = __this->get_json_1();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.IO.TextReader::Read() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		Il2CppChar L_2 = Convert_ToChar_m4189066566(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String SkillzSDK.MiniJSON.Json/Parser::get_NextWord()
extern "C"  String_t* Parser_get_NextWord_m2019659234 (Parser_t744090300 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_get_NextWord_m2019659234_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_002e;
	}

IL_000b:
	{
		StringBuilder_t * L_1 = V_0;
		Il2CppChar L_2 = Parser_get_NextChar_m3195442849(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_Append_m2383614642(L_1, L_2, /*hidden argument*/NULL);
		StringReader_t3465604688 * L_3 = __this->get_json_1();
		NullCheck(L_3);
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 System.IO.TextReader::Peek() */, L_3);
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_002e;
		}
	}
	{
		goto IL_003e;
	}

IL_002e:
	{
		Il2CppChar L_5 = Parser_get_PeekChar_m1352524934(__this, /*hidden argument*/NULL);
		bool L_6 = Parser_IsWordBreak_m502866020(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_000b;
		}
	}

IL_003e:
	{
		StringBuilder_t * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
		return L_8;
	}
}
// SkillzSDK.MiniJSON.Json/Parser/TOKEN SkillzSDK.MiniJSON.Json/Parser::get_NextToken()
extern "C"  int32_t Parser_get_NextToken_m3456563509 (Parser_t744090300 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_get_NextToken_m3456563509_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	String_t* V_1 = NULL;
	{
		Parser_EatWhitespace_m1572341284(__this, /*hidden argument*/NULL);
		StringReader_t3465604688 * L_0 = __this->get_json_1();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 System.IO.TextReader::Peek() */, L_0);
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0019;
		}
	}
	{
		return (int32_t)(0);
	}

IL_0019:
	{
		Il2CppChar L_2 = Parser_get_PeekChar_m1352524934(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		Il2CppChar L_3 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)((int32_t)44))))
		{
			case 0:
			{
				goto IL_00bc;
			}
			case 1:
			{
				goto IL_00ce;
			}
			case 2:
			{
				goto IL_0065;
			}
			case 3:
			{
				goto IL_0065;
			}
			case 4:
			{
				goto IL_00ce;
			}
			case 5:
			{
				goto IL_00ce;
			}
			case 6:
			{
				goto IL_00ce;
			}
			case 7:
			{
				goto IL_00ce;
			}
			case 8:
			{
				goto IL_00ce;
			}
			case 9:
			{
				goto IL_00ce;
			}
			case 10:
			{
				goto IL_00ce;
			}
			case 11:
			{
				goto IL_00ce;
			}
			case 12:
			{
				goto IL_00ce;
			}
			case 13:
			{
				goto IL_00ce;
			}
			case 14:
			{
				goto IL_00cc;
			}
		}
	}

IL_0065:
	{
		Il2CppChar L_4 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)((int32_t)91))))
		{
			case 0:
			{
				goto IL_00ac;
			}
			case 1:
			{
				goto IL_007a;
			}
			case 2:
			{
				goto IL_00ae;
			}
		}
	}

IL_007a:
	{
		Il2CppChar L_5 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)((int32_t)123))))
		{
			case 0:
			{
				goto IL_009c;
			}
			case 1:
			{
				goto IL_008f;
			}
			case 2:
			{
				goto IL_009e;
			}
		}
	}

IL_008f:
	{
		Il2CppChar L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)34))))
		{
			goto IL_00ca;
		}
	}
	{
		goto IL_00d0;
	}

IL_009c:
	{
		return (int32_t)(1);
	}

IL_009e:
	{
		StringReader_t3465604688 * L_7 = __this->get_json_1();
		NullCheck(L_7);
		VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.IO.TextReader::Read() */, L_7);
		return (int32_t)(2);
	}

IL_00ac:
	{
		return (int32_t)(3);
	}

IL_00ae:
	{
		StringReader_t3465604688 * L_8 = __this->get_json_1();
		NullCheck(L_8);
		VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.IO.TextReader::Read() */, L_8);
		return (int32_t)(4);
	}

IL_00bc:
	{
		StringReader_t3465604688 * L_9 = __this->get_json_1();
		NullCheck(L_9);
		VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.IO.TextReader::Read() */, L_9);
		return (int32_t)(6);
	}

IL_00ca:
	{
		return (int32_t)(7);
	}

IL_00cc:
	{
		return (int32_t)(5);
	}

IL_00ce:
	{
		return (int32_t)(8);
	}

IL_00d0:
	{
		String_t* L_10 = Parser_get_NextWord_m2019659234(__this, /*hidden argument*/NULL);
		V_1 = L_10;
		String_t* L_11 = V_1;
		if (!L_11)
		{
			goto IL_011b;
		}
	}
	{
		String_t* L_12 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_13 = String_op_Equality_m920492651(NULL /*static, unused*/, L_12, _stringLiteral3875954633, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0112;
		}
	}
	{
		String_t* L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_15 = String_op_Equality_m920492651(NULL /*static, unused*/, L_14, _stringLiteral4002445229, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0115;
		}
	}
	{
		String_t* L_16 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_17 = String_op_Equality_m920492651(NULL /*static, unused*/, L_16, _stringLiteral1202628576, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_0118;
		}
	}
	{
		goto IL_011b;
	}

IL_0112:
	{
		return (int32_t)(((int32_t)10));
	}

IL_0115:
	{
		return (int32_t)(((int32_t)9));
	}

IL_0118:
	{
		return (int32_t)(((int32_t)11));
	}

IL_011b:
	{
		return (int32_t)(0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SkillzSDK.MiniJSON.Json/Serializer::.ctor()
extern "C"  void Serializer__ctor_m3762600030 (Serializer_t2308540583 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer__ctor_m3762600030_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_0, /*hidden argument*/NULL);
		__this->set_builder_0(L_0);
		return;
	}
}
// System.String SkillzSDK.MiniJSON.Json/Serializer::Serialize(System.Object)
extern "C"  String_t* Serializer_Serialize_m3997990965 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_Serialize_m3997990965_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Serializer_t2308540583 * V_0 = NULL;
	{
		Serializer_t2308540583 * L_0 = (Serializer_t2308540583 *)il2cpp_codegen_object_new(Serializer_t2308540583_il2cpp_TypeInfo_var);
		Serializer__ctor_m3762600030(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Serializer_t2308540583 * L_1 = V_0;
		RuntimeObject * L_2 = ___obj0;
		NullCheck(L_1);
		Serializer_SerializeValue_m686405948(L_1, L_2, /*hidden argument*/NULL);
		Serializer_t2308540583 * L_3 = V_0;
		NullCheck(L_3);
		StringBuilder_t * L_4 = L_3->get_builder_0();
		NullCheck(L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		return L_5;
	}
}
// System.Void SkillzSDK.MiniJSON.Json/Serializer::SerializeValue(System.Object)
extern "C"  void Serializer_SerializeValue_m686405948 (Serializer_t2308540583 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeValue_m686405948_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t * G_B7_0 = NULL;
	StringBuilder_t * G_B6_0 = NULL;
	String_t* G_B8_0 = NULL;
	StringBuilder_t * G_B8_1 = NULL;
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		StringBuilder_t * L_1 = __this->get_builder_0();
		NullCheck(L_1);
		StringBuilder_Append_m1965104174(L_1, _stringLiteral1202628576, /*hidden argument*/NULL);
		goto IL_00c6;
	}

IL_001c:
	{
		RuntimeObject * L_2 = ___value0;
		String_t* L_3 = ((String_t*)IsInstSealed((RuntimeObject*)L_2, String_t_il2cpp_TypeInfo_var));
		V_2 = L_3;
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_4 = V_2;
		Serializer_SerializeString_m4252171944(__this, L_4, /*hidden argument*/NULL);
		goto IL_00c6;
	}

IL_0035:
	{
		RuntimeObject * L_5 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_5, Boolean_t97287965_il2cpp_TypeInfo_var)))
		{
			goto IL_006b;
		}
	}
	{
		StringBuilder_t * L_6 = __this->get_builder_0();
		RuntimeObject * L_7 = ___value0;
		G_B6_0 = L_6;
		if (!((*(bool*)((bool*)UnBox(L_7, Boolean_t97287965_il2cpp_TypeInfo_var)))))
		{
			G_B7_0 = L_6;
			goto IL_005b;
		}
	}
	{
		G_B8_0 = _stringLiteral4002445229;
		G_B8_1 = G_B6_0;
		goto IL_0060;
	}

IL_005b:
	{
		G_B8_0 = _stringLiteral3875954633;
		G_B8_1 = G_B7_0;
	}

IL_0060:
	{
		NullCheck(G_B8_1);
		StringBuilder_Append_m1965104174(G_B8_1, G_B8_0, /*hidden argument*/NULL);
		goto IL_00c6;
	}

IL_006b:
	{
		RuntimeObject * L_8 = ___value0;
		RuntimeObject* L_9 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, IList_t2094931216_il2cpp_TypeInfo_var));
		V_0 = L_9;
		if (!L_9)
		{
			goto IL_0084;
		}
	}
	{
		RuntimeObject* L_10 = V_0;
		Serializer_SerializeArray_m1201005993(__this, L_10, /*hidden argument*/NULL);
		goto IL_00c6;
	}

IL_0084:
	{
		RuntimeObject * L_11 = ___value0;
		RuntimeObject* L_12 = ((RuntimeObject*)IsInst((RuntimeObject*)L_11, IDictionary_t1363984059_il2cpp_TypeInfo_var));
		V_1 = L_12;
		if (!L_12)
		{
			goto IL_009d;
		}
	}
	{
		RuntimeObject* L_13 = V_1;
		Serializer_SerializeObject_m3682694325(__this, L_13, /*hidden argument*/NULL);
		goto IL_00c6;
	}

IL_009d:
	{
		RuntimeObject * L_14 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_14, Char_t3634460470_il2cpp_TypeInfo_var)))
		{
			goto IL_00bf;
		}
	}
	{
		RuntimeObject * L_15 = ___value0;
		String_t* L_16 = String_CreateString_m1262864254(NULL, ((*(Il2CppChar*)((Il2CppChar*)UnBox(L_15, Char_t3634460470_il2cpp_TypeInfo_var)))), 1, /*hidden argument*/NULL);
		Serializer_SerializeString_m4252171944(__this, L_16, /*hidden argument*/NULL);
		goto IL_00c6;
	}

IL_00bf:
	{
		RuntimeObject * L_17 = ___value0;
		Serializer_SerializeOther_m1045354682(__this, L_17, /*hidden argument*/NULL);
	}

IL_00c6:
	{
		return;
	}
}
// System.Void SkillzSDK.MiniJSON.Json/Serializer::SerializeObject(System.Collections.IDictionary)
extern "C"  void Serializer_SerializeObject_m3682694325 (Serializer_t2308540583 * __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeObject_m3682694325_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (bool)1;
		StringBuilder_t * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_Append_m2383614642(L_0, ((int32_t)123), /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___obj0;
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.ICollection System.Collections.IDictionary::get_Keys() */, IDictionary_t1363984059_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, L_2);
		V_2 = L_3;
	}

IL_001c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0065;
		}

IL_0021:
		{
			RuntimeObject* L_4 = V_2;
			NullCheck(L_4);
			RuntimeObject * L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_4);
			V_1 = L_5;
			bool L_6 = V_0;
			if (L_6)
			{
				goto IL_003c;
			}
		}

IL_002e:
		{
			StringBuilder_t * L_7 = __this->get_builder_0();
			NullCheck(L_7);
			StringBuilder_Append_m2383614642(L_7, ((int32_t)44), /*hidden argument*/NULL);
		}

IL_003c:
		{
			RuntimeObject * L_8 = V_1;
			NullCheck(L_8);
			String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
			Serializer_SerializeString_m4252171944(__this, L_9, /*hidden argument*/NULL);
			StringBuilder_t * L_10 = __this->get_builder_0();
			NullCheck(L_10);
			StringBuilder_Append_m2383614642(L_10, ((int32_t)58), /*hidden argument*/NULL);
			RuntimeObject* L_11 = ___obj0;
			RuntimeObject * L_12 = V_1;
			NullCheck(L_11);
			RuntimeObject * L_13 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t1363984059_il2cpp_TypeInfo_var, L_11, L_12);
			Serializer_SerializeValue_m686405948(__this, L_13, /*hidden argument*/NULL);
			V_0 = (bool)0;
		}

IL_0065:
		{
			RuntimeObject* L_14 = V_2;
			NullCheck(L_14);
			bool L_15 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_14);
			if (L_15)
			{
				goto IL_0021;
			}
		}

IL_0070:
		{
			IL2CPP_LEAVE(0x89, FINALLY_0075);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0075;
	}

FINALLY_0075:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_16 = V_2;
			RuntimeObject* L_17 = ((RuntimeObject*)IsInst((RuntimeObject*)L_16, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			V_3 = L_17;
			if (!L_17)
			{
				goto IL_0088;
			}
		}

IL_0082:
		{
			RuntimeObject* L_18 = V_3;
			NullCheck(L_18);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_18);
		}

IL_0088:
		{
			IL2CPP_END_FINALLY(117)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(117)
	{
		IL2CPP_JUMP_TBL(0x89, IL_0089)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0089:
	{
		StringBuilder_t * L_19 = __this->get_builder_0();
		NullCheck(L_19);
		StringBuilder_Append_m2383614642(L_19, ((int32_t)125), /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzSDK.MiniJSON.Json/Serializer::SerializeArray(System.Collections.IList)
extern "C"  void Serializer_SerializeArray_m1201005993 (Serializer_t2308540583 * __this, RuntimeObject* ___anArray0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeArray_m1201005993_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		StringBuilder_t * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_Append_m2383614642(L_0, ((int32_t)91), /*hidden argument*/NULL);
		V_0 = (bool)1;
		RuntimeObject* L_1 = ___anArray0;
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, L_1);
		V_2 = L_2;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0040;
		}

IL_001c:
		{
			RuntimeObject* L_3 = V_2;
			NullCheck(L_3);
			RuntimeObject * L_4 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_3);
			V_1 = L_4;
			bool L_5 = V_0;
			if (L_5)
			{
				goto IL_0037;
			}
		}

IL_0029:
		{
			StringBuilder_t * L_6 = __this->get_builder_0();
			NullCheck(L_6);
			StringBuilder_Append_m2383614642(L_6, ((int32_t)44), /*hidden argument*/NULL);
		}

IL_0037:
		{
			RuntimeObject * L_7 = V_1;
			Serializer_SerializeValue_m686405948(__this, L_7, /*hidden argument*/NULL);
			V_0 = (bool)0;
		}

IL_0040:
		{
			RuntimeObject* L_8 = V_2;
			NullCheck(L_8);
			bool L_9 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_8);
			if (L_9)
			{
				goto IL_001c;
			}
		}

IL_004b:
		{
			IL2CPP_LEAVE(0x64, FINALLY_0050);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0050;
	}

FINALLY_0050:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_10 = V_2;
			RuntimeObject* L_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_10, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			V_3 = L_11;
			if (!L_11)
			{
				goto IL_0063;
			}
		}

IL_005d:
		{
			RuntimeObject* L_12 = V_3;
			NullCheck(L_12);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_12);
		}

IL_0063:
		{
			IL2CPP_END_FINALLY(80)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(80)
	{
		IL2CPP_JUMP_TBL(0x64, IL_0064)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0064:
	{
		StringBuilder_t * L_13 = __this->get_builder_0();
		NullCheck(L_13);
		StringBuilder_Append_m2383614642(L_13, ((int32_t)93), /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzSDK.MiniJSON.Json/Serializer::SerializeString(System.String)
extern "C"  void Serializer_SerializeString_m4252171944 (Serializer_t2308540583 * __this, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeString_m4252171944_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t3528271667* V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	CharU5BU5D_t3528271667* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		StringBuilder_t * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_Append_m2383614642(L_0, ((int32_t)34), /*hidden argument*/NULL);
		String_t* L_1 = ___str0;
		NullCheck(L_1);
		CharU5BU5D_t3528271667* L_2 = String_ToCharArray_m1492846834(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		CharU5BU5D_t3528271667* L_3 = V_0;
		V_2 = L_3;
		V_3 = 0;
		goto IL_014f;
	}

IL_001e:
	{
		CharU5BU5D_t3528271667* L_4 = V_2;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint16_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		Il2CppChar L_8 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)8)))
		{
			case 0:
			{
				goto IL_0083;
			}
			case 1:
			{
				goto IL_00db;
			}
			case 2:
			{
				goto IL_00af;
			}
			case 3:
			{
				goto IL_0042;
			}
			case 4:
			{
				goto IL_0099;
			}
			case 5:
			{
				goto IL_00c5;
			}
		}
	}

IL_0042:
	{
		Il2CppChar L_9 = V_1;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)34))))
		{
			goto IL_0057;
		}
	}
	{
		Il2CppChar L_10 = V_1;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)92))))
		{
			goto IL_006d;
		}
	}
	{
		goto IL_00f1;
	}

IL_0057:
	{
		StringBuilder_t * L_11 = __this->get_builder_0();
		NullCheck(L_11);
		StringBuilder_Append_m1965104174(L_11, _stringLiteral3450386420, /*hidden argument*/NULL);
		goto IL_014b;
	}

IL_006d:
	{
		StringBuilder_t * L_12 = __this->get_builder_0();
		NullCheck(L_12);
		StringBuilder_Append_m1965104174(L_12, _stringLiteral3458119668, /*hidden argument*/NULL);
		goto IL_014b;
	}

IL_0083:
	{
		StringBuilder_t * L_13 = __this->get_builder_0();
		NullCheck(L_13);
		StringBuilder_Append_m1965104174(L_13, _stringLiteral3454580724, /*hidden argument*/NULL);
		goto IL_014b;
	}

IL_0099:
	{
		StringBuilder_t * L_14 = __this->get_builder_0();
		NullCheck(L_14);
		StringBuilder_Append_m1965104174(L_14, _stringLiteral3454318580, /*hidden argument*/NULL);
		goto IL_014b;
	}

IL_00af:
	{
		StringBuilder_t * L_15 = __this->get_builder_0();
		NullCheck(L_15);
		StringBuilder_Append_m1965104174(L_15, _stringLiteral3454842868, /*hidden argument*/NULL);
		goto IL_014b;
	}

IL_00c5:
	{
		StringBuilder_t * L_16 = __this->get_builder_0();
		NullCheck(L_16);
		StringBuilder_Append_m1965104174(L_16, _stringLiteral3455629300, /*hidden argument*/NULL);
		goto IL_014b;
	}

IL_00db:
	{
		StringBuilder_t * L_17 = __this->get_builder_0();
		NullCheck(L_17);
		StringBuilder_Append_m1965104174(L_17, _stringLiteral3455498228, /*hidden argument*/NULL);
		goto IL_014b;
	}

IL_00f1:
	{
		Il2CppChar L_18 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int32_t L_19 = Convert_ToInt32_m1876369743(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		V_4 = L_19;
		int32_t L_20 = V_4;
		if ((((int32_t)L_20) < ((int32_t)((int32_t)32))))
		{
			goto IL_011d;
		}
	}
	{
		int32_t L_21 = V_4;
		if ((((int32_t)L_21) > ((int32_t)((int32_t)126))))
		{
			goto IL_011d;
		}
	}
	{
		StringBuilder_t * L_22 = __this->get_builder_0();
		Il2CppChar L_23 = V_1;
		NullCheck(L_22);
		StringBuilder_Append_m2383614642(L_22, L_23, /*hidden argument*/NULL);
		goto IL_0146;
	}

IL_011d:
	{
		StringBuilder_t * L_24 = __this->get_builder_0();
		NullCheck(L_24);
		StringBuilder_Append_m1965104174(L_24, _stringLiteral3455432692, /*hidden argument*/NULL);
		StringBuilder_t * L_25 = __this->get_builder_0();
		String_t* L_26 = Int32_ToString_m372259452((int32_t*)(&V_4), _stringLiteral3451303896, /*hidden argument*/NULL);
		NullCheck(L_25);
		StringBuilder_Append_m1965104174(L_25, L_26, /*hidden argument*/NULL);
	}

IL_0146:
	{
		goto IL_014b;
	}

IL_014b:
	{
		int32_t L_27 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_014f:
	{
		int32_t L_28 = V_3;
		CharU5BU5D_t3528271667* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_29)->max_length)))))))
		{
			goto IL_001e;
		}
	}
	{
		StringBuilder_t * L_30 = __this->get_builder_0();
		NullCheck(L_30);
		StringBuilder_Append_m2383614642(L_30, ((int32_t)34), /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzSDK.MiniJSON.Json/Serializer::SerializeOther(System.Object)
extern "C"  void Serializer_SerializeOther_m1045354682 (Serializer_t2308540583 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeOther_m1045354682_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	double V_1 = 0.0;
	{
		RuntimeObject * L_0 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Single_t1397266774_il2cpp_TypeInfo_var)))
		{
			goto IL_0034;
		}
	}
	{
		StringBuilder_t * L_1 = __this->get_builder_0();
		RuntimeObject * L_2 = ___value0;
		V_0 = ((*(float*)((float*)UnBox(L_2, Single_t1397266774_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_3 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_4 = Single_ToString_m543431371((float*)(&V_0), _stringLiteral3452614638, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_Append_m1965104174(L_1, L_4, /*hidden argument*/NULL);
		goto IL_00e9;
	}

IL_0034:
	{
		RuntimeObject * L_5 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_5, Int32_t2950945753_il2cpp_TypeInfo_var)))
		{
			goto IL_008c;
		}
	}
	{
		RuntimeObject * L_6 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_6, UInt32_t2560061978_il2cpp_TypeInfo_var)))
		{
			goto IL_008c;
		}
	}
	{
		RuntimeObject * L_7 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_7, Int64_t3736567304_il2cpp_TypeInfo_var)))
		{
			goto IL_008c;
		}
	}
	{
		RuntimeObject * L_8 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_8, SByte_t1669577662_il2cpp_TypeInfo_var)))
		{
			goto IL_008c;
		}
	}
	{
		RuntimeObject * L_9 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_9, Byte_t1134296376_il2cpp_TypeInfo_var)))
		{
			goto IL_008c;
		}
	}
	{
		RuntimeObject * L_10 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_10, Int16_t2552820387_il2cpp_TypeInfo_var)))
		{
			goto IL_008c;
		}
	}
	{
		RuntimeObject * L_11 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_11, UInt16_t2177724958_il2cpp_TypeInfo_var)))
		{
			goto IL_008c;
		}
	}
	{
		RuntimeObject * L_12 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_12, UInt64_t4134040092_il2cpp_TypeInfo_var)))
		{
			goto IL_009e;
		}
	}

IL_008c:
	{
		StringBuilder_t * L_13 = __this->get_builder_0();
		RuntimeObject * L_14 = ___value0;
		NullCheck(L_13);
		StringBuilder_Append_m1640838743(L_13, L_14, /*hidden argument*/NULL);
		goto IL_00e9;
	}

IL_009e:
	{
		RuntimeObject * L_15 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_15, Double_t594665363_il2cpp_TypeInfo_var)))
		{
			goto IL_00b4;
		}
	}
	{
		RuntimeObject * L_16 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_16, Decimal_t2948259380_il2cpp_TypeInfo_var)))
		{
			goto IL_00dd;
		}
	}

IL_00b4:
	{
		StringBuilder_t * L_17 = __this->get_builder_0();
		RuntimeObject * L_18 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		double L_19 = Convert_ToDouble_m4025515304(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		V_1 = L_19;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_20 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_21 = Double_ToString_m1051753975((double*)(&V_1), _stringLiteral3452614638, L_20, /*hidden argument*/NULL);
		NullCheck(L_17);
		StringBuilder_Append_m1965104174(L_17, L_21, /*hidden argument*/NULL);
		goto IL_00e9;
	}

IL_00dd:
	{
		RuntimeObject * L_22 = ___value0;
		NullCheck(L_22);
		String_t* L_23 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_22);
		Serializer_SerializeString_m4252171944(__this, L_23, /*hidden argument*/NULL);
	}

IL_00e9:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: SkillzSDK.Player
extern "C" void Player_t2961656996_marshal_pinvoke(const Player_t2961656996& unmarshaled, Player_t2961656996_marshaled_pinvoke& marshaled)
{
	Exception_t* ___ID_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'ID' of type 'Player'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___ID_1Exception, NULL, NULL);
}
extern "C" void Player_t2961656996_marshal_pinvoke_back(const Player_t2961656996_marshaled_pinvoke& marshaled, Player_t2961656996& unmarshaled)
{
	Exception_t* ___ID_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'ID' of type 'Player'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___ID_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: SkillzSDK.Player
extern "C" void Player_t2961656996_marshal_pinvoke_cleanup(Player_t2961656996_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: SkillzSDK.Player
extern "C" void Player_t2961656996_marshal_com(const Player_t2961656996& unmarshaled, Player_t2961656996_marshaled_com& marshaled)
{
	Exception_t* ___ID_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'ID' of type 'Player'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___ID_1Exception, NULL, NULL);
}
extern "C" void Player_t2961656996_marshal_com_back(const Player_t2961656996_marshaled_com& marshaled, Player_t2961656996& unmarshaled)
{
	Exception_t* ___ID_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'ID' of type 'Player'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___ID_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: SkillzSDK.Player
extern "C" void Player_t2961656996_marshal_com_cleanup(Player_t2961656996_marshaled_com& marshaled)
{
}
// System.Void SkillzSDK.Player::.ctor(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void Player__ctor_m2866643626 (Player_t2961656996 * __this, Dictionary_2_t2865362463 * ___playerJSON0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player__ctor_m2866643626_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2865362463 * L_0 = ___playerJSON0;
		Nullable_1_t4282624060  L_1 = SkillzExtensions_SafeGetUintValue_m475157154(NULL /*static, unused*/, L_0, _stringLiteral3454449607, /*hidden argument*/NULL);
		__this->set_ID_1(L_1);
		Dictionary_2_t2865362463 * L_2 = ___playerJSON0;
		String_t* L_3 = SkillzExtensions_SafeGetStringValue_m3748395908(NULL /*static, unused*/, L_2, _stringLiteral2186314903, /*hidden argument*/NULL);
		__this->set_DisplayName_0(L_3);
		Dictionary_2_t2865362463 * L_4 = ___playerJSON0;
		String_t* L_5 = SkillzExtensions_SafeGetStringValue_m3748395908(NULL /*static, unused*/, L_4, _stringLiteral3226725044, /*hidden argument*/NULL);
		__this->set_AvatarURL_2(L_5);
		Dictionary_2_t2865362463 * L_6 = ___playerJSON0;
		String_t* L_7 = SkillzExtensions_SafeGetStringValue_m3748395908(NULL /*static, unused*/, L_6, _stringLiteral241366642, /*hidden argument*/NULL);
		__this->set_FlagURL_3(L_7);
		return;
	}
}
extern "C"  void Player__ctor_m2866643626_AdjustorThunk (RuntimeObject * __this, Dictionary_2_t2865362463 * ___playerJSON0, const RuntimeMethod* method)
{
	Player_t2961656996 * _thisAdjusted = reinterpret_cast<Player_t2961656996 *>(__this + 1);
	Player__ctor_m2866643626(_thisAdjusted, ___playerJSON0, method);
}
// System.String SkillzSDK.Player::ToString()
extern "C"  String_t* Player_ToString_m4275545513 (Player_t2961656996 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_ToString_m4275545513_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9)));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral3435626159);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral3435626159);
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		Nullable_1_t4282624060  L_2 = __this->get_ID_1();
		Nullable_1_t4282624060  L_3 = L_2;
		RuntimeObject * L_4 = Box(Nullable_1_t4282624060_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_4);
		ObjectU5BU5D_t2843939325* L_5 = L_1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral3969381551);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3969381551);
		ObjectU5BU5D_t2843939325* L_6 = L_5;
		String_t* L_7 = __this->get_DisplayName_0();
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_7);
		ObjectU5BU5D_t2843939325* L_8 = L_6;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral3320620591);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral3320620591);
		ObjectU5BU5D_t2843939325* L_9 = L_8;
		String_t* L_10 = __this->get_AvatarURL_2();
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_10);
		ObjectU5BU5D_t2843939325* L_11 = L_9;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral1025240796);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)_stringLiteral1025240796);
		ObjectU5BU5D_t2843939325* L_12 = L_11;
		String_t* L_13 = __this->get_FlagURL_3();
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)L_13);
		ObjectU5BU5D_t2843939325* L_14 = L_12;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral3452614643);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject *)_stringLiteral3452614643);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Concat_m2971454694(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		return L_15;
	}
}
extern "C"  String_t* Player_ToString_m4275545513_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Player_t2961656996 * _thisAdjusted = reinterpret_cast<Player_t2961656996 *>(__this + 1);
	return Player_ToString_m4275545513(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SkillzSDK.SkillzDelegateBase::.ctor()
extern "C"  void SkillzDelegateBase__ctor_m68325689 (SkillzDelegateBase_t1468035564 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzSDK.SkillzDelegateBase::OnSkillzWillExit()
extern "C"  void SkillzDelegateBase_OnSkillzWillExit_m837407121 (SkillzDelegateBase_t1468035564 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void SkillzSDK.SkillzDelegateBase::OnSkillzWillLaunch()
extern "C"  void SkillzDelegateBase_OnSkillzWillLaunch_m260941272 (SkillzDelegateBase_t1468035564 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void SkillzSDK.SkillzDelegateBase::OnSkillzLaunchCompleted()
extern "C"  void SkillzDelegateBase_OnSkillzLaunchCompleted_m2614855244 (SkillzDelegateBase_t1468035564 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void SkillzSDK.SkillzDelegateBase::OnTournamentAborted()
extern "C"  void SkillzDelegateBase_OnTournamentAborted_m3723129145 (SkillzDelegateBase_t1468035564 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SkillzSDK.SkillzDelegateTurnBased::.ctor()
extern "C"  void SkillzDelegateTurnBased__ctor_m793564165 (SkillzDelegateTurnBased_t453936421 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzSDK.SkillzDelegateTurnBased::OnTurnEnd()
extern "C"  void SkillzDelegateTurnBased_OnTurnEnd_m406958881 (SkillzDelegateTurnBased_t453936421 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void SkillzSDK.SkillzDelegateTurnBased::OnTurnBasedReviewWillBegin(SkillzSDK.TurnBasedMatch)
extern "C"  void SkillzDelegateTurnBased_OnTurnBasedReviewWillBegin_m3420370723 (SkillzDelegateTurnBased_t453936421 * __this, TurnBasedMatch_t2355453244 * ___matchInfo0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void SkillzSDK.SkillzDelegateTurnBased::OnReviewEnd()
extern "C"  void SkillzDelegateTurnBased_OnReviewEnd_m908142611 (SkillzDelegateTurnBased_t453936421 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SkillzSDK.TurnBasedMatch::.ctor(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void TurnBasedMatch__ctor_m2093759627 (TurnBasedMatch_t2355453244 * __this, Dictionary_2_t2865362463 * ___matchInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TurnBasedMatch__ctor_m2093759627_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	List_1_t257213610 * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	Enumerator_t2146457487  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Dictionary_2_t2865362463 * V_4 = NULL;
	TurnBasedRound_t1233799461  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t2865362463 * L_0 = ___matchInfo0;
		Match__ctor_m3021370963(__this, L_0, /*hidden argument*/NULL);
		Dictionary_2_t2865362463 * L_1 = ___matchInfo0;
		Nullable_1_t1819850047  L_2 = SkillzExtensions_SafeGetBoolValue_m2039874569(NULL /*static, unused*/, L_1, _stringLiteral2905464034, /*hidden argument*/NULL);
		__this->set_IsMatchOver_14(L_2);
		Dictionary_2_t2865362463 * L_3 = ___matchInfo0;
		Nullable_1_t1166124571  L_4 = SkillzExtensions_SafeGetUnixDateTimeValue_m2661374245(NULL /*static, unused*/, L_3, _stringLiteral1291135618, /*hidden argument*/NULL);
		__this->set_TimeTournamentBegan_12(L_4);
		Dictionary_2_t2865362463 * L_5 = ___matchInfo0;
		Nullable_1_t1166124571  L_6 = SkillzExtensions_SafeGetUnixDateTimeValue_m2661374245(NULL /*static, unused*/, L_5, _stringLiteral62147769, /*hidden argument*/NULL);
		__this->set_TimeLastTurnCompleted_13(L_6);
		Dictionary_2_t2865362463 * L_7 = ___matchInfo0;
		Nullable_1_t4282624060  L_8 = SkillzExtensions_SafeGetUintValue_m475157154(NULL /*static, unused*/, L_7, _stringLiteral2172021066, /*hidden argument*/NULL);
		__this->set_PrizeZ_10(L_8);
		Dictionary_2_t2865362463 * L_9 = ___matchInfo0;
		Nullable_1_t2317227445  L_10 = SkillzExtensions_SafeGetDoubleValue_m1033428401(NULL /*static, unused*/, L_9, _stringLiteral3431335447, /*hidden argument*/NULL);
		__this->set_PrizeCash_11(L_10);
		Dictionary_2_t2865362463 * L_11 = ___matchInfo0;
		Nullable_1_t378540539  L_12 = SkillzExtensions_SafeGetIntValue_m2048183163(NULL /*static, unused*/, L_11, _stringLiteral2035437214, /*hidden argument*/NULL);
		__this->set_CurrentTurnIndex_16(L_12);
		List_1_t2705874203 * L_13 = (List_1_t2705874203 *)il2cpp_codegen_object_new(List_1_t2705874203_il2cpp_TypeInfo_var);
		List_1__ctor_m402830882(L_13, /*hidden argument*/List_1__ctor_m402830882_RuntimeMethod_var);
		__this->set_Rounds_15(L_13);
		Dictionary_2_t2865362463 * L_14 = ___matchInfo0;
		RuntimeObject * L_15 = SkillzExtensions_SafeGetValue_m1149006436(NULL /*static, unused*/, L_14, _stringLiteral2119036461, /*hidden argument*/NULL);
		V_0 = L_15;
		RuntimeObject * L_16 = V_0;
		if (!L_16)
		{
			goto IL_0112;
		}
	}
	{
		RuntimeObject * L_17 = V_0;
		NullCheck(L_17);
		Type_t * L_18 = Object_GetType_m88164663(L_17, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_19 = { reinterpret_cast<intptr_t> (List_1_t257213610_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_18) == ((RuntimeObject*)(Type_t *)L_20))))
		{
			goto IL_0112;
		}
	}
	{
		RuntimeObject * L_21 = V_0;
		V_1 = ((List_1_t257213610 *)CastclassClass((RuntimeObject*)L_21, List_1_t257213610_il2cpp_TypeInfo_var));
		List_1_t257213610 * L_22 = V_1;
		NullCheck(L_22);
		Enumerator_t2146457487  L_23 = List_1_GetEnumerator_m2930774921(L_22, /*hidden argument*/List_1_GetEnumerator_m2930774921_RuntimeMethod_var);
		V_3 = L_23;
	}

IL_00ad:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00f3;
		}

IL_00b2:
		{
			RuntimeObject * L_24 = Enumerator_get_Current_m470245444((Enumerator_t2146457487 *)(&V_3), /*hidden argument*/Enumerator_get_Current_m470245444_RuntimeMethod_var);
			V_2 = L_24;
			RuntimeObject * L_25 = V_2;
			if (!L_25)
			{
				goto IL_00f3;
			}
		}

IL_00c0:
		{
			RuntimeObject * L_26 = V_2;
			NullCheck(L_26);
			Type_t * L_27 = Object_GetType_m88164663(L_26, /*hidden argument*/NULL);
			RuntimeTypeHandle_t3027515415  L_28 = { reinterpret_cast<intptr_t> (Dictionary_2_t2865362463_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_29 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
			if ((!(((RuntimeObject*)(Type_t *)L_27) == ((RuntimeObject*)(Type_t *)L_29))))
			{
				goto IL_00f3;
			}
		}

IL_00d5:
		{
			RuntimeObject * L_30 = V_2;
			V_4 = ((Dictionary_2_t2865362463 *)CastclassClass((RuntimeObject*)L_30, Dictionary_2_t2865362463_il2cpp_TypeInfo_var));
			Dictionary_2_t2865362463 * L_31 = V_4;
			TurnBasedRound__ctor_m164100429((TurnBasedRound_t1233799461 *)(&V_5), L_31, /*hidden argument*/NULL);
			List_1_t2705874203 * L_32 = __this->get_Rounds_15();
			TurnBasedRound_t1233799461  L_33 = V_5;
			NullCheck(L_32);
			List_1_Add_m1731145970(L_32, L_33, /*hidden argument*/List_1_Add_m1731145970_RuntimeMethod_var);
		}

IL_00f3:
		{
			bool L_34 = Enumerator_MoveNext_m2142368520((Enumerator_t2146457487 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m2142368520_RuntimeMethod_var);
			if (L_34)
			{
				goto IL_00b2;
			}
		}

IL_00ff:
		{
			IL2CPP_LEAVE(0x112, FINALLY_0104);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0104;
	}

FINALLY_0104:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3007748546((Enumerator_t2146457487 *)(&V_3), /*hidden argument*/Enumerator_Dispose_m3007748546_RuntimeMethod_var);
		IL2CPP_END_FINALLY(260)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(260)
	{
		IL2CPP_JUMP_TBL(0x112, IL_0112)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0112:
	{
		Dictionary_2_t2865362463 * L_35 = ___matchInfo0;
		ContinuedTurnBasedMatch_t3764673362  L_36;
		memset(&L_36, 0, sizeof(L_36));
		ContinuedTurnBasedMatch__ctor_m3686691244((&L_36), L_35, /*hidden argument*/NULL);
		Nullable_1_t1192268148  L_37;
		memset(&L_37, 0, sizeof(L_37));
		Nullable_1__ctor_m3660700179((&L_37), L_36, /*hidden argument*/Nullable_1__ctor_m3660700179_RuntimeMethod_var);
		__this->set_ContinueMatchData_17(L_37);
		return;
	}
}
// System.String SkillzSDK.TurnBasedMatch::ToString()
extern "C"  String_t* TurnBasedMatch_ToString_m3968764345 (TurnBasedMatch_t2355453244 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TurnBasedMatch_ToString_m3968764345_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	KeyValuePair_2_t4030379155  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Enumerator_t3586889763  V_2;
	memset(&V_2, 0, sizeof(V_2));
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	TurnBasedRound_t1233799461  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Enumerator_t300150784  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		V_0 = L_0;
		Dictionary_2_t1632706988 * L_1 = ((Match_t1925635937 *)__this)->get_GameParams_5();
		NullCheck(L_1);
		Enumerator_t3586889763  L_2 = Dictionary_2_GetEnumerator_m260861070(L_1, /*hidden argument*/Dictionary_2_GetEnumerator_m260861070_RuntimeMethod_var);
		V_2 = L_2;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0055;
		}

IL_0017:
		{
			KeyValuePair_2_t4030379155  L_3 = Enumerator_get_Current_m2519371089((Enumerator_t3586889763 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m2519371089_RuntimeMethod_var);
			V_1 = L_3;
			String_t* L_4 = V_0;
			V_3 = L_4;
			StringU5BU5D_t1281789340* L_5 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)5));
			String_t* L_6 = V_3;
			NullCheck(L_5);
			ArrayElementTypeCheck (L_5, L_6);
			(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_6);
			StringU5BU5D_t1281789340* L_7 = L_5;
			NullCheck(L_7);
			ArrayElementTypeCheck (L_7, _stringLiteral3452614528);
			(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral3452614528);
			StringU5BU5D_t1281789340* L_8 = L_7;
			String_t* L_9 = KeyValuePair_2_get_Key_m3980750512((KeyValuePair_2_t4030379155 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m3980750512_RuntimeMethod_var);
			NullCheck(L_8);
			ArrayElementTypeCheck (L_8, L_9);
			(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_9);
			StringU5BU5D_t1281789340* L_10 = L_8;
			NullCheck(L_10);
			ArrayElementTypeCheck (L_10, _stringLiteral3450517398);
			(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral3450517398);
			StringU5BU5D_t1281789340* L_11 = L_10;
			String_t* L_12 = KeyValuePair_2_get_Value_m2243990694((KeyValuePair_2_t4030379155 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m2243990694_RuntimeMethod_var);
			NullCheck(L_11);
			ArrayElementTypeCheck (L_11, L_12);
			(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_12);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_13 = String_Concat_m1809518182(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
			V_0 = L_13;
		}

IL_0055:
		{
			bool L_14 = Enumerator_MoveNext_m1175750522((Enumerator_t3586889763 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m1175750522_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_0017;
			}
		}

IL_0061:
		{
			IL2CPP_LEAVE(0x74, FINALLY_0066);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0066;
	}

FINALLY_0066:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2198401511((Enumerator_t3586889763 *)(&V_2), /*hidden argument*/Enumerator_Dispose_m2198401511_RuntimeMethod_var);
		IL2CPP_END_FINALLY(102)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(102)
	{
		IL2CPP_JUMP_TBL(0x74, IL_0074)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0074:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		V_4 = L_15;
		List_1_t2705874203 * L_16 = __this->get_Rounds_15();
		NullCheck(L_16);
		Enumerator_t300150784  L_17 = List_1_GetEnumerator_m4100385154(L_16, /*hidden argument*/List_1_GetEnumerator_m4100385154_RuntimeMethod_var);
		V_6 = L_17;
	}

IL_0088:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00c4;
		}

IL_008d:
		{
			TurnBasedRound_t1233799461  L_18 = Enumerator_get_Current_m3229262329((Enumerator_t300150784 *)(&V_6), /*hidden argument*/Enumerator_get_Current_m3229262329_RuntimeMethod_var);
			V_5 = L_18;
			String_t* L_19 = V_4;
			V_3 = L_19;
			ObjectU5BU5D_t2843939325* L_20 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4));
			String_t* L_21 = V_3;
			NullCheck(L_20);
			ArrayElementTypeCheck (L_20, L_21);
			(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_21);
			ObjectU5BU5D_t2843939325* L_22 = L_20;
			NullCheck(L_22);
			ArrayElementTypeCheck (L_22, _stringLiteral3452614613);
			(L_22)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral3452614613);
			ObjectU5BU5D_t2843939325* L_23 = L_22;
			TurnBasedRound_t1233799461  L_24 = V_5;
			TurnBasedRound_t1233799461  L_25 = L_24;
			RuntimeObject * L_26 = Box(TurnBasedRound_t1233799461_il2cpp_TypeInfo_var, &L_25);
			NullCheck(L_23);
			ArrayElementTypeCheck (L_23, L_26);
			(L_23)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_26);
			ObjectU5BU5D_t2843939325* L_27 = L_23;
			NullCheck(L_27);
			ArrayElementTypeCheck (L_27, _stringLiteral3450517459);
			(L_27)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteral3450517459);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_28 = String_Concat_m2971454694(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
			V_4 = L_28;
		}

IL_00c4:
		{
			bool L_29 = Enumerator_MoveNext_m3624477067((Enumerator_t300150784 *)(&V_6), /*hidden argument*/Enumerator_MoveNext_m3624477067_RuntimeMethod_var);
			if (L_29)
			{
				goto IL_008d;
			}
		}

IL_00d0:
		{
			IL2CPP_LEAVE(0xE3, FINALLY_00d5);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00d5;
	}

FINALLY_00d5:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m1156375690((Enumerator_t300150784 *)(&V_6), /*hidden argument*/Enumerator_Dispose_m1156375690_RuntimeMethod_var);
		IL2CPP_END_FINALLY(213)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(213)
	{
		IL2CPP_JUMP_TBL(0xE3, IL_00e3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00e3:
	{
		ObjectU5BU5D_t2843939325* L_30 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)((int32_t)37)));
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, _stringLiteral995527479);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral995527479);
		ObjectU5BU5D_t2843939325* L_31 = L_30;
		Nullable_1_t378540539  L_32 = ((Match_t1925635937 *)__this)->get_ID_2();
		Nullable_1_t378540539  L_33 = L_32;
		RuntimeObject * L_34 = Box(Nullable_1_t378540539_il2cpp_TypeInfo_var, &L_33);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_34);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_34);
		ObjectU5BU5D_t2843939325* L_35 = L_31;
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, _stringLiteral3159449611);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3159449611);
		ObjectU5BU5D_t2843939325* L_36 = L_35;
		String_t* L_37 = ((Match_t1925635937 *)__this)->get_Name_0();
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_37);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_37);
		ObjectU5BU5D_t2843939325* L_38 = L_36;
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, _stringLiteral992829410);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral992829410);
		ObjectU5BU5D_t2843939325* L_39 = L_38;
		String_t* L_40 = ((Match_t1925635937 *)__this)->get_Description_1();
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_40);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_40);
		ObjectU5BU5D_t2843939325* L_41 = L_39;
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, _stringLiteral1247249208);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)_stringLiteral1247249208);
		ObjectU5BU5D_t2843939325* L_42 = L_41;
		Nullable_1_t378540539  L_43 = ((Match_t1925635937 *)__this)->get_TemplateID_3();
		Nullable_1_t378540539  L_44 = L_43;
		RuntimeObject * L_45 = Box(Nullable_1_t378540539_il2cpp_TypeInfo_var, &L_44);
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, L_45);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)L_45);
		ObjectU5BU5D_t2843939325* L_46 = L_42;
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, _stringLiteral2912928911);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject *)_stringLiteral2912928911);
		ObjectU5BU5D_t2843939325* L_47 = L_46;
		Nullable_1_t4282624060  L_48 = ((Match_t1925635937 *)__this)->get_SkillzDifficulty_4();
		Nullable_1_t4282624060  L_49 = L_48;
		RuntimeObject * L_50 = Box(Nullable_1_t4282624060_il2cpp_TypeInfo_var, &L_49);
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, L_50);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject *)L_50);
		ObjectU5BU5D_t2843939325* L_51 = L_47;
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, _stringLiteral3489731131);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (RuntimeObject *)_stringLiteral3489731131);
		ObjectU5BU5D_t2843939325* L_52 = L_51;
		Nullable_1_t1819850047  L_53 = ((Match_t1925635937 *)__this)->get_IsCash_7();
		Nullable_1_t1819850047  L_54 = L_53;
		RuntimeObject * L_55 = Box(Nullable_1_t1819850047_il2cpp_TypeInfo_var, &L_54);
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, L_55);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (RuntimeObject *)L_55);
		ObjectU5BU5D_t2843939325* L_56 = L_52;
		NullCheck(L_56);
		ArrayElementTypeCheck (L_56, _stringLiteral1304305895);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (RuntimeObject *)_stringLiteral1304305895);
		ObjectU5BU5D_t2843939325* L_57 = L_56;
		Nullable_1_t378540539  L_58 = ((Match_t1925635937 *)__this)->get_EntryPoints_8();
		Nullable_1_t378540539  L_59 = L_58;
		RuntimeObject * L_60 = Box(Nullable_1_t378540539_il2cpp_TypeInfo_var, &L_59);
		NullCheck(L_57);
		ArrayElementTypeCheck (L_57, L_60);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (RuntimeObject *)L_60);
		ObjectU5BU5D_t2843939325* L_61 = L_57;
		NullCheck(L_61);
		ArrayElementTypeCheck (L_61, _stringLiteral3163162291);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (RuntimeObject *)_stringLiteral3163162291);
		ObjectU5BU5D_t2843939325* L_62 = L_61;
		Nullable_1_t3119828856  L_63 = ((Match_t1925635937 *)__this)->get_EntryCash_9();
		Nullable_1_t3119828856  L_64 = L_63;
		RuntimeObject * L_65 = Box(Nullable_1_t3119828856_il2cpp_TypeInfo_var, &L_64);
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, L_65);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (RuntimeObject *)L_65);
		ObjectU5BU5D_t2843939325* L_66 = L_62;
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, _stringLiteral2305604390);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (RuntimeObject *)_stringLiteral2305604390);
		ObjectU5BU5D_t2843939325* L_67 = L_66;
		String_t* L_68 = V_0;
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, L_68);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (RuntimeObject *)L_68);
		ObjectU5BU5D_t2843939325* L_69 = L_67;
		NullCheck(L_69);
		ArrayElementTypeCheck (L_69, _stringLiteral3806938157);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (RuntimeObject *)_stringLiteral3806938157);
		ObjectU5BU5D_t2843939325* L_70 = L_69;
		Player_t2961656996  L_71 = ((Match_t1925635937 *)__this)->get_Player_6();
		Player_t2961656996  L_72 = L_71;
		RuntimeObject * L_73 = Box(Player_t2961656996_il2cpp_TypeInfo_var, &L_72);
		NullCheck(L_70);
		ArrayElementTypeCheck (L_70, L_73);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (RuntimeObject *)L_73);
		ObjectU5BU5D_t2843939325* L_74 = L_70;
		NullCheck(L_74);
		ArrayElementTypeCheck (L_74, _stringLiteral1571535424);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)20)), (RuntimeObject *)_stringLiteral1571535424);
		ObjectU5BU5D_t2843939325* L_75 = L_74;
		Nullable_1_t4282624060  L_76 = __this->get_PrizeZ_10();
		Nullable_1_t4282624060  L_77 = L_76;
		RuntimeObject * L_78 = Box(Nullable_1_t4282624060_il2cpp_TypeInfo_var, &L_77);
		NullCheck(L_75);
		ArrayElementTypeCheck (L_75, L_78);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)21)), (RuntimeObject *)L_78);
		ObjectU5BU5D_t2843939325* L_79 = L_75;
		NullCheck(L_79);
		ArrayElementTypeCheck (L_79, _stringLiteral1686285278);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)22)), (RuntimeObject *)_stringLiteral1686285278);
		ObjectU5BU5D_t2843939325* L_80 = L_79;
		Nullable_1_t2317227445  L_81 = __this->get_PrizeCash_11();
		Nullable_1_t2317227445  L_82 = L_81;
		RuntimeObject * L_83 = Box(Nullable_1_t2317227445_il2cpp_TypeInfo_var, &L_82);
		NullCheck(L_80);
		ArrayElementTypeCheck (L_80, L_83);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)23)), (RuntimeObject *)L_83);
		ObjectU5BU5D_t2843939325* L_84 = L_80;
		NullCheck(L_84);
		ArrayElementTypeCheck (L_84, _stringLiteral3276876123);
		(L_84)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)24)), (RuntimeObject *)_stringLiteral3276876123);
		ObjectU5BU5D_t2843939325* L_85 = L_84;
		Nullable_1_t1166124571  L_86 = __this->get_TimeTournamentBegan_12();
		Nullable_1_t1166124571  L_87 = L_86;
		RuntimeObject * L_88 = Box(Nullable_1_t1166124571_il2cpp_TypeInfo_var, &L_87);
		NullCheck(L_85);
		ArrayElementTypeCheck (L_85, L_88);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)25)), (RuntimeObject *)L_88);
		ObjectU5BU5D_t2843939325* L_89 = L_85;
		NullCheck(L_89);
		ArrayElementTypeCheck (L_89, _stringLiteral4246042434);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)26)), (RuntimeObject *)_stringLiteral4246042434);
		ObjectU5BU5D_t2843939325* L_90 = L_89;
		Nullable_1_t1166124571  L_91 = __this->get_TimeLastTurnCompleted_13();
		Nullable_1_t1166124571  L_92 = L_91;
		RuntimeObject * L_93 = Box(Nullable_1_t1166124571_il2cpp_TypeInfo_var, &L_92);
		NullCheck(L_90);
		ArrayElementTypeCheck (L_90, L_93);
		(L_90)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)27)), (RuntimeObject *)L_93);
		ObjectU5BU5D_t2843939325* L_94 = L_90;
		NullCheck(L_94);
		ArrayElementTypeCheck (L_94, _stringLiteral2022270018);
		(L_94)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)28)), (RuntimeObject *)_stringLiteral2022270018);
		ObjectU5BU5D_t2843939325* L_95 = L_94;
		Nullable_1_t1819850047  L_96 = __this->get_IsMatchOver_14();
		Nullable_1_t1819850047  L_97 = L_96;
		RuntimeObject * L_98 = Box(Nullable_1_t1819850047_il2cpp_TypeInfo_var, &L_97);
		NullCheck(L_95);
		ArrayElementTypeCheck (L_95, L_98);
		(L_95)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)29)), (RuntimeObject *)L_98);
		ObjectU5BU5D_t2843939325* L_99 = L_95;
		NullCheck(L_99);
		ArrayElementTypeCheck (L_99, _stringLiteral2416228878);
		(L_99)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)30)), (RuntimeObject *)_stringLiteral2416228878);
		ObjectU5BU5D_t2843939325* L_100 = L_99;
		String_t* L_101 = V_4;
		NullCheck(L_100);
		ArrayElementTypeCheck (L_100, L_101);
		(L_100)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)31)), (RuntimeObject *)L_101);
		ObjectU5BU5D_t2843939325* L_102 = L_100;
		NullCheck(L_102);
		ArrayElementTypeCheck (L_102, _stringLiteral218638185);
		(L_102)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)32)), (RuntimeObject *)_stringLiteral218638185);
		ObjectU5BU5D_t2843939325* L_103 = L_102;
		Nullable_1_t378540539  L_104 = __this->get_CurrentTurnIndex_16();
		Nullable_1_t378540539  L_105 = L_104;
		RuntimeObject * L_106 = Box(Nullable_1_t378540539_il2cpp_TypeInfo_var, &L_105);
		NullCheck(L_103);
		ArrayElementTypeCheck (L_103, L_106);
		(L_103)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)33)), (RuntimeObject *)L_106);
		ObjectU5BU5D_t2843939325* L_107 = L_103;
		NullCheck(L_107);
		ArrayElementTypeCheck (L_107, _stringLiteral1800660722);
		(L_107)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)34)), (RuntimeObject *)_stringLiteral1800660722);
		ObjectU5BU5D_t2843939325* L_108 = L_107;
		Nullable_1_t1192268148  L_109 = __this->get_ContinueMatchData_17();
		Nullable_1_t1192268148  L_110 = L_109;
		RuntimeObject * L_111 = Box(Nullable_1_t1192268148_il2cpp_TypeInfo_var, &L_110);
		NullCheck(L_108);
		ArrayElementTypeCheck (L_108, L_111);
		(L_108)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)35)), (RuntimeObject *)L_111);
		ObjectU5BU5D_t2843939325* L_112 = L_108;
		NullCheck(L_112);
		ArrayElementTypeCheck (L_112, _stringLiteral3452614643);
		(L_112)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)36)), (RuntimeObject *)_stringLiteral3452614643);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_113 = String_Concat_m2971454694(NULL /*static, unused*/, L_112, /*hidden argument*/NULL);
		return L_113;
	}
}
// System.UInt32 SkillzSDK.TurnBasedMatch::get_PlayerID()
extern "C"  uint32_t TurnBasedMatch_get_PlayerID_m740634712 (TurnBasedMatch_t2355453244 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TurnBasedMatch_get_PlayerID_m740634712_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Player_t2961656996  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Nullable_1_t4282624060  V_1;
	memset(&V_1, 0, sizeof(V_1));
	uint32_t G_B3_0 = 0;
	{
		Player_t2961656996  L_0 = ((Match_t1925635937 *)__this)->get_Player_6();
		V_0 = L_0;
		Nullable_1_t4282624060  L_1 = (&V_0)->get_ID_1();
		V_1 = L_1;
		bool L_2 = Nullable_1_get_HasValue_m1763782828((Nullable_1_t4282624060 *)(&V_1), /*hidden argument*/Nullable_1_get_HasValue_m1763782828_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		uint32_t L_3 = Nullable_1_get_Value_m1994738269((Nullable_1_t4282624060 *)(&V_1), /*hidden argument*/Nullable_1_get_Value_m1994738269_RuntimeMethod_var);
		G_B3_0 = L_3;
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = ((uint32_t)(0));
	}

IL_0028:
	{
		return G_B3_0;
	}
}
// System.String SkillzSDK.TurnBasedMatch::get_PlayerDisplayName()
extern "C"  String_t* TurnBasedMatch_get_PlayerDisplayName_m280910283 (TurnBasedMatch_t2355453244 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TurnBasedMatch_get_PlayerDisplayName_m280910283_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Player_t2961656996  V_0;
	memset(&V_0, 0, sizeof(V_0));
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		Player_t2961656996  L_0 = ((Match_t1925635937 *)__this)->get_Player_6();
		V_0 = L_0;
		String_t* L_1 = (&V_0)->get_DisplayName_0();
		String_t* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B2_0 = L_3;
	}

IL_001a:
	{
		return G_B2_0;
	}
}
// System.String SkillzSDK.TurnBasedMatch::get_PlayerAvatarURL()
extern "C"  String_t* TurnBasedMatch_get_PlayerAvatarURL_m536938902 (TurnBasedMatch_t2355453244 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TurnBasedMatch_get_PlayerAvatarURL_m536938902_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Player_t2961656996  V_0;
	memset(&V_0, 0, sizeof(V_0));
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		Player_t2961656996  L_0 = ((Match_t1925635937 *)__this)->get_Player_6();
		V_0 = L_0;
		String_t* L_1 = (&V_0)->get_AvatarURL_2();
		String_t* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B2_0 = L_3;
	}

IL_001a:
	{
		return G_B2_0;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> SkillzSDK.TurnBasedMatch::get_TournamentParams()
extern "C"  Dictionary_2_t1632706988 * TurnBasedMatch_get_TournamentParams_m1029545071 (TurnBasedMatch_t2355453244 * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t1632706988 * L_0 = ((Match_t1925635937 *)__this)->get_GameParams_5();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: SkillzSDK.TurnBasedRound
extern "C" void TurnBasedRound_t1233799461_marshal_pinvoke(const TurnBasedRound_t1233799461& unmarshaled, TurnBasedRound_t1233799461_marshaled_pinvoke& marshaled)
{
	Exception_t* ___OpponentRoundScore_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'OpponentRoundScore' of type 'TurnBasedRound'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___OpponentRoundScore_1Exception, NULL, NULL);
}
extern "C" void TurnBasedRound_t1233799461_marshal_pinvoke_back(const TurnBasedRound_t1233799461_marshaled_pinvoke& marshaled, TurnBasedRound_t1233799461& unmarshaled)
{
	Exception_t* ___OpponentRoundScore_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'OpponentRoundScore' of type 'TurnBasedRound'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___OpponentRoundScore_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: SkillzSDK.TurnBasedRound
extern "C" void TurnBasedRound_t1233799461_marshal_pinvoke_cleanup(TurnBasedRound_t1233799461_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: SkillzSDK.TurnBasedRound
extern "C" void TurnBasedRound_t1233799461_marshal_com(const TurnBasedRound_t1233799461& unmarshaled, TurnBasedRound_t1233799461_marshaled_com& marshaled)
{
	Exception_t* ___OpponentRoundScore_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'OpponentRoundScore' of type 'TurnBasedRound'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___OpponentRoundScore_1Exception, NULL, NULL);
}
extern "C" void TurnBasedRound_t1233799461_marshal_com_back(const TurnBasedRound_t1233799461_marshaled_com& marshaled, TurnBasedRound_t1233799461& unmarshaled)
{
	Exception_t* ___OpponentRoundScore_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'OpponentRoundScore' of type 'TurnBasedRound'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___OpponentRoundScore_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: SkillzSDK.TurnBasedRound
extern "C" void TurnBasedRound_t1233799461_marshal_com_cleanup(TurnBasedRound_t1233799461_marshaled_com& marshaled)
{
}
// System.Void SkillzSDK.TurnBasedRound::.ctor(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void TurnBasedRound__ctor_m164100429 (TurnBasedRound_t1233799461 * __this, Dictionary_2_t2865362463 * ___dict0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TurnBasedRound__ctor_m164100429_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t4282624060  V_0;
	memset(&V_0, 0, sizeof(V_0));
	uint32_t V_1 = 0;
	{
		Dictionary_2_t2865362463 * L_0 = ___dict0;
		Nullable_1_t2317227445  L_1 = SkillzExtensions_SafeGetDoubleValue_m1033428401(NULL /*static, unused*/, L_0, _stringLiteral1936663027, /*hidden argument*/NULL);
		__this->set_OpponentRoundScore_1(L_1);
		Dictionary_2_t2865362463 * L_2 = ___dict0;
		Nullable_1_t2317227445  L_3 = SkillzExtensions_SafeGetDoubleValue_m1033428401(NULL /*static, unused*/, L_2, _stringLiteral1003644178, /*hidden argument*/NULL);
		__this->set_MyRoundScore_2(L_3);
		Dictionary_2_t2865362463 * L_4 = ___dict0;
		Nullable_1_t4282624060  L_5 = SkillzExtensions_SafeGetUintValue_m475157154(NULL /*static, unused*/, L_4, _stringLiteral2513803938, /*hidden argument*/NULL);
		V_0 = L_5;
		bool L_6 = Nullable_1_get_HasValue_m1763782828((Nullable_1_t4282624060 *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_m1763782828_RuntimeMethod_var);
		if (!((((int32_t)L_6) == ((int32_t)0))? 1 : 0))
		{
			goto IL_0049;
		}
	}
	{
		__this->set_Outcome_0(3);
		goto IL_00ac;
	}

IL_0049:
	{
		bool L_7 = Nullable_1_get_HasValue_m1763782828((Nullable_1_t4282624060 *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_m1763782828_RuntimeMethod_var);
		if (!L_7)
		{
			goto IL_00a0;
		}
	}
	{
		uint32_t L_8 = Nullable_1_get_Value_m1994738269((Nullable_1_t4282624060 *)(&V_0), /*hidden argument*/Nullable_1_get_Value_m1994738269_RuntimeMethod_var);
		V_1 = L_8;
		uint32_t L_9 = V_1;
		switch (L_9)
		{
			case 0:
			{
				goto IL_007c;
			}
			case 1:
			{
				goto IL_0088;
			}
			case 2:
			{
				goto IL_0094;
			}
			case 3:
			{
				goto IL_00a0;
			}
			case 4:
			{
				goto IL_00a0;
			}
		}
	}
	{
		goto IL_00a0;
	}

IL_007c:
	{
		__this->set_Outcome_0(0);
		goto IL_00ac;
	}

IL_0088:
	{
		__this->set_Outcome_0(1);
		goto IL_00ac;
	}

IL_0094:
	{
		__this->set_Outcome_0(2);
		goto IL_00ac;
	}

IL_00a0:
	{
		__this->set_Outcome_0(3);
		goto IL_00ac;
	}

IL_00ac:
	{
		return;
	}
}
extern "C"  void TurnBasedRound__ctor_m164100429_AdjustorThunk (RuntimeObject * __this, Dictionary_2_t2865362463 * ___dict0, const RuntimeMethod* method)
{
	TurnBasedRound_t1233799461 * _thisAdjusted = reinterpret_cast<TurnBasedRound_t1233799461 *>(__this + 1);
	TurnBasedRound__ctor_m164100429(_thisAdjusted, ___dict0, method);
}
// System.String SkillzSDK.TurnBasedRound::ToString()
extern "C"  String_t* TurnBasedRound_ToString_m2659950938 (TurnBasedRound_t1233799461 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TurnBasedRound_ToString_m2659950938_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)7));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral1490736252);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral1490736252);
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		Nullable_1_t2317227445  L_2 = __this->get_MyRoundScore_2();
		Nullable_1_t2317227445  L_3 = L_2;
		RuntimeObject * L_4 = Box(Nullable_1_t2317227445_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_4);
		ObjectU5BU5D_t2843939325* L_5 = L_1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral1388720723);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral1388720723);
		ObjectU5BU5D_t2843939325* L_6 = L_5;
		Nullable_1_t2317227445  L_7 = __this->get_OpponentRoundScore_1();
		Nullable_1_t2317227445  L_8 = L_7;
		RuntimeObject * L_9 = Box(Nullable_1_t2317227445_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_9);
		ObjectU5BU5D_t2843939325* L_10 = L_6;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral1125965648);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral1125965648);
		ObjectU5BU5D_t2843939325* L_11 = L_10;
		int32_t L_12 = __this->get_Outcome_0();
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(TurnBasedRoundOutcome_t235959152_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_14);
		ObjectU5BU5D_t2843939325* L_15 = L_11;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral3452614643);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)_stringLiteral3452614643);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Concat_m2971454694(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		return L_16;
	}
}
extern "C"  String_t* TurnBasedRound_ToString_m2659950938_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TurnBasedRound_t1233799461 * _thisAdjusted = reinterpret_cast<TurnBasedRound_t1233799461 *>(__this + 1);
	return TurnBasedRound_ToString_m2659950938(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif

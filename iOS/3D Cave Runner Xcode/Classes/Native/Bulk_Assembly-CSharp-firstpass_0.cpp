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
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
// SkillzSDK.Match
struct Match_t1925635937;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2865362463;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// UnityEngine.jvalue[]
struct jvalueU5BU5D_t578373866;
// SkillzSyncDelegate
struct SkillzSyncDelegate_t3579437812;
// Skillz/SkillzSyncProxy
struct SkillzSyncProxy_t2138768546;
// SkillzSDK.Player
struct Player_t2961656996;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_t2835824643;
// SkillzAbstractDelegate
struct SkillzAbstractDelegate_t639866310;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Object
struct Object_t631007953;
// SkillzMatchDelegate
struct SkillzMatchDelegate_t1381117504;
// System.Collections.Generic.List`1<SkillzSDK.Player>
struct List_1_t138764442;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// SkillzDelegate
struct SkillzDelegate_t3178178617;
// SkillzGameController
struct SkillzGameController_t3579252314;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// SkillzSDK.Api/VoidFP
struct VoidFP_t530139871;
// System.Delegate
struct Delegate_t1188392813;
// SkillzSDK.Api/IntPtrIntFP
struct IntPtrIntFP_t2813787974;
// SkillzSDK.Api/IntFP
struct IntFP_t1593217519;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// SkillzSDK.Api/MonoPInvokeCallbackAttribute
struct MonoPInvokeCallbackAttribute_t921095372;
// System.Type
struct Type_t;
// System.Attribute
struct Attribute_t861562559;
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
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.Collections.DictionaryEntry>
struct Transform_1_t132201056;
// SkillzSDK.Player[]
struct PlayerU5BU5D_t1785092173;
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
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.Collections.DictionaryEntry>
struct Transform_1_t1694351041;
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
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Int32
struct Int32_t2950945753;
// System.Void
struct Void_t1185182177;
// System.Byte
struct Byte_t1134296376;
// System.Double
struct Double_t594665363;
// System.UInt16
struct UInt16_t2177724958;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
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
extern RuntimeClass* Skillz_t1424191382_il2cpp_TypeInfo_var;
extern RuntimeClass* Match_t1925635937_il2cpp_TypeInfo_var;
extern const RuntimeMethod* AndroidJavaObject_CallStatic_TisString_t_m3599693027_RuntimeMethod_var;
extern String_t* _stringLiteral3120542996;
extern const uint32_t Skillz_GetMatchInfo_m351177124_MetadataUsageId;
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
extern String_t* _stringLiteral4204234082;
extern const uint32_t Skillz_SDKVersionShort_m1202112188_MetadataUsageId;
extern String_t* _stringLiteral3068533840;
extern const uint32_t Skillz_CurrentUserDisplayName_m1258831207_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2071914064;
extern String_t* _stringLiteral1231028711;
extern const uint32_t Skillz_setSkillzBackgroundMusic_m2288222941_MetadataUsageId;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern const RuntimeMethod* AndroidJavaObject_CallStatic_TisSingle_t1397266774_m2173456096_RuntimeMethod_var;
extern String_t* _stringLiteral2069817105;
extern String_t* _stringLiteral2675847904;
extern const uint32_t Skillz_getSkillzMusicVolume_m743705644_MetadataUsageId;
extern String_t* _stringLiteral460057046;
extern String_t* _stringLiteral1956176189;
extern const uint32_t Skillz_setSkillzMusicVolume_m3180222924_MetadataUsageId;
extern String_t* _stringLiteral3068111761;
extern String_t* _stringLiteral3162833584;
extern const uint32_t Skillz_getSFXVolume_m3592534853_MetadataUsageId;
extern String_t* _stringLiteral470776398;
extern String_t* _stringLiteral3068129781;
extern const uint32_t Skillz_setSFXVolume_m3264333098_MetadataUsageId;
extern String_t* _stringLiteral1630648035;
extern String_t* _stringLiteral3345609349;
extern String_t* _stringLiteral1264353676;
extern const uint32_t Skillz_SendData_m3159625681_MetadataUsageId;
extern String_t* _stringLiteral1235229777;
extern const uint32_t Skillz_IsMatchCompleted_m1442108200_MetadataUsageId;
extern const RuntimeMethod* AndroidJavaObject_CallStatic_TisInt32_t2950945753_m1426675528_RuntimeMethod_var;
extern String_t* _stringLiteral3986384634;
extern const uint32_t Skillz_GetConnectedPlayerCount_m2460278925_MetadataUsageId;
extern const RuntimeMethod* AndroidJavaObject_CallStatic_TisInt64_t3736567304_m1757219269_RuntimeMethod_var;
extern String_t* _stringLiteral1802116773;
extern const uint32_t Skillz_GetCurrentPlayerId_m2424405514_MetadataUsageId;
extern String_t* _stringLiteral3807698887;
extern const uint32_t Skillz_GetCurrentOpponentPlayerId_m2381905733_MetadataUsageId;
extern const RuntimeMethod* AndroidJavaObject_CallStatic_TisDouble_t594665363_m3845568371_RuntimeMethod_var;
extern String_t* _stringLiteral2560603216;
extern const uint32_t Skillz_GetServerTime_m3202136002_MetadataUsageId;
extern RuntimeClass* Int64_t3736567304_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2814291660;
extern String_t* _stringLiteral2367320213;
extern const uint32_t Skillz_GetTimeLeftForReconnection_m1331472929_MetadataUsageId;
extern RuntimeClass* SkillzSyncProxy_t2138768546_il2cpp_TypeInfo_var;
extern const uint32_t Skillz_InitializeSyncDelegate_m2992133130_MetadataUsageId;
extern String_t* _stringLiteral314030647;
extern const uint32_t Skillz_registerSyncDelegate_m929502207_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t2865362463_il2cpp_TypeInfo_var;
extern RuntimeClass* Convert_t2465617642_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt32_t2560061978_il2cpp_TypeInfo_var;
extern RuntimeClass* Player_t2961656996_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m3962145734_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m825500632_RuntimeMethod_var;
extern String_t* _stringLiteral4280219408;
extern String_t* _stringLiteral2262471439;
extern String_t* _stringLiteral747066607;
extern String_t* _stringLiteral734034891;
extern String_t* _stringLiteral3984581373;
extern String_t* _stringLiteral754182868;
extern String_t* _stringLiteral3398431868;
extern String_t* _stringLiteral1668385234;
extern String_t* _stringLiteral1396822555;
extern String_t* _stringLiteral1364997218;
extern String_t* _stringLiteral2322706829;
extern String_t* _stringLiteral306455953;
extern const uint32_t Skillz_GetPlayer_m263335444_MetadataUsageId;
extern RuntimeClass* AndroidJavaClass_t32045322_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2747799586;
extern const uint32_t Skillz_GetSkillz_m1754260856_MetadataUsageId;
extern String_t* _stringLiteral1451431999;
extern const uint32_t Skillz_GetSkillzSync_m102960867_MetadataUsageId;
extern String_t* _stringLiteral1893531713;
extern const uint32_t Skillz_GetSkillzAudio_m4066960576_MetadataUsageId;
extern const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t4131667876_m1414442298_RuntimeMethod_var;
extern String_t* _stringLiteral2149247999;
extern String_t* _stringLiteral3452315504;
extern const uint32_t Skillz_GetCurrentActivity_m1705205339_MetadataUsageId;
extern const uint32_t Skillz_DeserializeJSONToDictionary_m2136858648_MetadataUsageId;
extern const RuntimeMethod* AndroidJavaObject_Call_TisSingle_t1397266774_m1436156811_RuntimeMethod_var;
extern String_t* _stringLiteral4294067722;
extern String_t* _stringLiteral1778944692;
extern const uint32_t Random_Value_m3600019517_MetadataUsageId;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern const uint32_t Random_InsideUnitSphere_m1723542434_MetadataUsageId;
extern const uint32_t Random_InsideUnitCircle_m3376432988_MetadataUsageId;
extern const uint32_t Random_OnUnitSphere_m2777744284_MetadataUsageId;
extern const uint32_t Random_RotationUniform_m1635932153_MetadataUsageId;
extern RuntimeClass* AndroidJavaProxy_t2835824643_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1133916606;
extern const uint32_t SkillzSyncProxy__ctor_m354518947_MetadataUsageId;
extern RuntimeClass* SkillzSyncDelegate_t3579437812_il2cpp_TypeInfo_var;
extern const uint32_t SkillzSyncProxy_onMatchCompleted_m251078732_MetadataUsageId;
extern const RuntimeMethod* AndroidJavaObject_Get_TisAndroidJavaObject_t4131667876_m3437237260_RuntimeMethod_var;
extern const RuntimeMethod* AndroidJNIHelper_ConvertFromJNIArray_TisByteU5BU5D_t4116647657_m1893096774_RuntimeMethod_var;
extern String_t* _stringLiteral2019848579;
extern const uint32_t SkillzSyncProxy_onDidReceiveData_m2333881804_MetadataUsageId;
extern const uint32_t SkillzSyncProxy_onOpponentHasLostConnection_m403658838_MetadataUsageId;
extern const uint32_t SkillzSyncProxy_onOpponentHasReconnected_m93369378_MetadataUsageId;
extern const uint32_t SkillzSyncProxy_onOpponentHasLeftMatch_m2427420861_MetadataUsageId;
extern const uint32_t SkillzSyncProxy_onCurrentPlayerHasLostConnection_m1080622717_MetadataUsageId;
extern const uint32_t SkillzSyncProxy_onCurrentPlayerHasReconnected_m3945526112_MetadataUsageId;
extern const uint32_t SkillzSyncProxy_onCurrentPlayerHasLeftMatch_m3098723618_MetadataUsageId;
extern RuntimeClass* SkillzAbstractDelegate_t639866310_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern const uint32_t SkillzAbstractDelegate_Awake_m1536840064_MetadataUsageId;
extern String_t* _stringLiteral1518127339;
extern String_t* _stringLiteral3875954633;
extern String_t* _stringLiteral4002445229;
extern String_t* _stringLiteral69044786;
extern String_t* _stringLiteral817137886;
extern String_t* _stringLiteral2902724446;
extern const uint32_t SkillzAbstractDelegate_AndroidInitialize_m1349047341_MetadataUsageId;
extern const uint32_t SkillzAbstractDelegate_GetSkillzPreferences_m1629139633_MetadataUsageId;
extern const uint32_t SkillzAbstractDelegate_GetCurrentActivity_m771874125_MetadataUsageId;
extern const uint32_t SkillzAbstractDelegate_DeserializeJSONToDictionary_m3288828646_MetadataUsageId;
extern const RuntimeMethod* List_1_GetEnumerator_m1712187495_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m115699280_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m2073364093_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m733067215_RuntimeMethod_var;
extern const uint32_t SkillzCrossPlatform_GetPlayer_m1150102054_MetadataUsageId;
extern String_t* _stringLiteral1653696771;
extern const uint32_t SkillzCrossPlatform_setSkillzBackgroundMusic_m1600628885_MetadataUsageId;
extern String_t* _stringLiteral2013662720;
extern const uint32_t SkillzCrossPlatform_getSkillzMusicVolume_m3386035777_MetadataUsageId;
extern String_t* _stringLiteral715190641;
extern const uint32_t SkillzCrossPlatform_setSkillzMusicVolume_m2937436182_MetadataUsageId;
extern String_t* _stringLiteral2786782033;
extern const uint32_t SkillzCrossPlatform_getSFXVolume_m3166619612_MetadataUsageId;
extern String_t* _stringLiteral2354804696;
extern const uint32_t SkillzCrossPlatform_setSFXVolume_m3149349838_MetadataUsageId;
extern const uint32_t SkillzCrossPlatform_GetSkillz_m1312181533_MetadataUsageId;
extern const uint32_t Random_InsideUnitSphere_m3158642049_MetadataUsageId;
extern const uint32_t Random_InsideUnitCircle_m1205585536_MetadataUsageId;
extern const uint32_t Random_OnUnitSphere_m1681403655_MetadataUsageId;
extern const uint32_t Random_RotationUniform_m2440073649_MetadataUsageId;
extern const uint32_t SkillzDelegate__ctor_m2676049584_MetadataUsageId;
extern RuntimeClass* SkillzDelegate_t3178178617_il2cpp_TypeInfo_var;
extern const uint32_t SkillzDelegate_AssignSkillzDelegate_m1630244260_MetadataUsageId;
extern const uint32_t SkillzDelegate_AssignSkillzDelegate_m1393046629_MetadataUsageId;
extern RuntimeClass* SkillzMatchDelegate_t1381117504_il2cpp_TypeInfo_var;
extern const uint32_t SkillzDelegate_OnMatchWillBegin_m3811917252_MetadataUsageId;
extern const uint32_t SkillzDelegate_OnSkillzWillExit_m4049406625_MetadataUsageId;
extern String_t* _stringLiteral62725234;
extern const uint32_t SkillzGameController_OnMatchWillBegin_m343002965_MetadataUsageId;
extern String_t* _stringLiteral2707269980;
extern const uint32_t SkillzGameController_OnSkillzWillExit_m3605742181_MetadataUsageId;
extern RuntimeClass* Marshal_t1757017490_il2cpp_TypeInfo_var;
extern const uint32_t Api_GetPlayer_m3941638088_MetadataUsageId;
extern const uint32_t Api_get_SDKVersionShort_m3300381882_MetadataUsageId;
extern String_t* _stringLiteral3573203357;
extern String_t* _stringLiteral3443696199;
extern String_t* _stringLiteral1330767061;
extern const uint32_t Api_Initialize_m1562849269_MetadataUsageId;
extern String_t* _stringLiteral2996089877;
extern const uint32_t Api_LaunchSkillz_m3695930818_MetadataUsageId;
extern RuntimeClass* Api_t3979125197_il2cpp_TypeInfo_var;
extern const uint32_t Api_AbortGame_m1087523040_MetadataUsageId;
extern const uint32_t Api_FinishTournament_m2922484481_MetadataUsageId;
extern const uint32_t Api_FinishTournament_m3112126626_MetadataUsageId;
extern const uint32_t Api_FinishTournament_m3069090011_MetadataUsageId;
extern RuntimeClass* TurnBasedRoundOutcome_t235959152_il2cpp_TypeInfo_var;
extern RuntimeClass* TurnBasedMatchOutcome_t1929616948_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral4011663913;
extern String_t* _stringLiteral2594243837;
extern const uint32_t Api_FinishTurn_m1359245850_MetadataUsageId;
extern const uint32_t Api_GetMatchRules_m1004458514_MetadataUsageId;
extern const uint32_t Api_GetMatchInfo_m3194907896_MetadataUsageId;
extern String_t* _stringLiteral2576486197;
extern const uint32_t Api_InitializeSyncDelegate_m3298977276_MetadataUsageId;
extern const uint32_t Api_onOpponentHasLostConnection_m2105192804_MetadataUsageId;
extern const uint32_t Api_onOpponentHasReconnected_m1415751927_MetadataUsageId;
extern const uint32_t Api_onOpponentHasLeftMatch_m1439901582_MetadataUsageId;
extern const uint32_t Api_onCurrentPlayerHasLostConnection_m1013680920_MetadataUsageId;
extern const uint32_t Api_onCurrentPlayerHasReconnected_m372574391_MetadataUsageId;
extern const uint32_t Api_onCurrentPlayerHasLeftMatch_m2836739900_MetadataUsageId;
extern RuntimeClass* ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Api_onDidReceiveData_m1898136842_RuntimeMethod_var;
extern const uint32_t Api_onDidReceiveData_m1898136842_MetadataUsageId;
extern const uint32_t Api_onMatchCompleted_m2950294816_MetadataUsageId;
extern RuntimeClass* VoidFP_t530139871_il2cpp_TypeInfo_var;
extern RuntimeClass* IntPtrIntFP_t2813787974_il2cpp_TypeInfo_var;
extern RuntimeClass* IntFP_t1593217519_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Api_onMatchCompleted_m2950294816_RuntimeMethod_var;
extern const RuntimeMethod* Api_onOpponentHasLostConnection_m2105192804_RuntimeMethod_var;
extern const RuntimeMethod* Api_onOpponentHasReconnected_m1415751927_RuntimeMethod_var;
extern const RuntimeMethod* Api_onOpponentHasLeftMatch_m1439901582_RuntimeMethod_var;
extern const RuntimeMethod* Api_onCurrentPlayerHasLostConnection_m1013680920_RuntimeMethod_var;
extern const RuntimeMethod* Api_onCurrentPlayerHasReconnected_m372574391_RuntimeMethod_var;
extern const RuntimeMethod* Api_onCurrentPlayerHasLeftMatch_m2836739900_RuntimeMethod_var;
extern String_t* _stringLiteral3066886670;
extern const uint32_t Api_AssignSyncDelegateFunctions_m1182359800_MetadataUsageId;
extern String_t* _stringLiteral619873164;
extern const uint32_t Api_setSkillzBackgroundMusic_m628192280_MetadataUsageId;
extern String_t* _stringLiteral679680572;
extern const uint32_t Api_getSkillzMusicVolume_m1583083845_MetadataUsageId;
extern String_t* _stringLiteral1220058643;
extern const uint32_t Api_setSkillzMusicVolume_m1647961181_MetadataUsageId;
extern String_t* _stringLiteral1762095029;
extern const uint32_t Api_getSFXVolume_m2121641713_MetadataUsageId;
extern String_t* _stringLiteral2951223259;
extern const uint32_t Api_setSFXVolume_m1465432439_MetadataUsageId;
extern const uint32_t Api_DeserializeJSONToDictionary_m2968966310_MetadataUsageId;
extern RuntimeClass* UInt64_t4134040092_il2cpp_TypeInfo_var;
extern const uint32_t IntFP_BeginInvoke_m2323997238_MetadataUsageId;
extern RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
extern const uint32_t IntPtrIntFP_BeginInvoke_m1788294272_MetadataUsageId;
extern const uint32_t Random_InsideUnitSphere_m1273973450_MetadataUsageId;
extern const uint32_t Random_InsideUnitCircle_m1942269933_MetadataUsageId;
extern const uint32_t Random_OnUnitSphere_m1006952296_MetadataUsageId;
extern const uint32_t Random_RotationUniform_m2406981108_MetadataUsageId;
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
extern const RuntimeType* Dictionary_2_t2865362463_0_0_0_var;
extern RuntimeClass* List_1_t138764442_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t257213610_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t1632706988_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Nullable_1__ctor_m2775392932_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_get_Value_m1177098500_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m4000051712_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m2930774921_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m470245444_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2966409634_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m2142368520_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m3007748546_RuntimeMethod_var;
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
extern String_t* _stringLiteral2615978513;
extern String_t* _stringLiteral380567987;
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
extern String_t* _stringLiteral2849815024;
extern String_t* _stringLiteral1304305895;
extern String_t* _stringLiteral3163162291;
extern String_t* _stringLiteral2305604390;
extern String_t* _stringLiteral3806938157;
extern String_t* _stringLiteral3452614643;
extern const uint32_t Match_ToString_m1621100561_MetadataUsageId;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* DictionaryEntry_t3123975638_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern const uint32_t Match_HashtableToDictionary_m417548842_MetadataUsageId;
extern RuntimeClass* StringReader_t3465604688_il2cpp_TypeInfo_var;
extern const uint32_t Parser__ctor_m2872727206_MetadataUsageId;
extern RuntimeClass* Char_t3634460470_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1482762766;
extern const uint32_t Parser_IsWordBreak_m502866020_MetadataUsageId;
extern RuntimeClass* Parser_t744090300_il2cpp_TypeInfo_var;
extern const uint32_t Parser_Parse_m579644997_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_set_Item_m2329160973_RuntimeMethod_var;
extern const uint32_t Parser_ParseObject_m2337980612_MetadataUsageId;
extern const RuntimeMethod* List_1__ctor_m2321703786_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m3338814081_RuntimeMethod_var;
extern const uint32_t Parser_ParseArray_m452367317_MetadataUsageId;
extern const uint32_t Parser_ParseByToken_m3089833922_MetadataUsageId;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern RuntimeClass* CharU5BU5D_t3528271667_il2cpp_TypeInfo_var;
extern const uint32_t Parser_ParseString_m2447585359_MetadataUsageId;
extern RuntimeClass* CultureInfo_t4157843068_il2cpp_TypeInfo_var;
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
extern RuntimeClass* SByte_t1669577662_il2cpp_TypeInfo_var;
extern RuntimeClass* Byte_t1134296376_il2cpp_TypeInfo_var;
extern RuntimeClass* Int16_t2552820387_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt16_t2177724958_il2cpp_TypeInfo_var;
extern RuntimeClass* Decimal_t2948259380_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3452614638;
extern const uint32_t Serializer_SerializeOther_m1045354682_MetadataUsageId;
extern const RuntimeMethod* Nullable_1_get_HasValue_m1763782828_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_get_Value_m1994738269_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1__ctor_m3249847592_RuntimeMethod_var;
extern String_t* _stringLiteral2186314903;
extern String_t* _stringLiteral3226725044;
extern String_t* _stringLiteral241366642;
extern const uint32_t Player__ctor_m2866643626_MetadataUsageId;
extern RuntimeClass* Nullable_1_t1561634878_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3435626159;
extern String_t* _stringLiteral3969381551;
extern String_t* _stringLiteral3320620591;
extern String_t* _stringLiteral1025240796;
extern const uint32_t Player_ToString_m4275545513_MetadataUsageId;
extern const uint32_t UnmanagedArray__ctor_m1850023207_MetadataUsageId;
extern const uint32_t UnmanagedArray_System_IDisposable_Dispose_m3667934263_MetadataUsageId;

struct ObjectU5BU5D_t2843939325;
struct ByteU5BU5D_t4116647657;
struct jvalueU5BU5D_t578373866;
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
#ifndef U3CMODULEU3E_T692745543_H
#define U3CMODULEU3E_T692745543_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745543 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745543_H
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
	ObjectU5BU5D_t2843939325* ____items_0;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_2;

public:
	inline static int32_t get_offset_of__items_0() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____items_0)); }
	inline ObjectU5BU5D_t2843939325* get__items_0() const { return ____items_0; }
	inline ObjectU5BU5D_t2843939325** get_address_of__items_0() { return &____items_0; }
	inline void set__items_0(ObjectU5BU5D_t2843939325* value)
	{
		____items_0 = value;
		Il2CppCodeGenWriteBarrier((&____items_0), value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}
};

struct List_1_t257213610_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ObjectU5BU5D_t2843939325* ___EmptyArray_3;

public:
	inline static int32_t get_offset_of_EmptyArray_3() { return static_cast<int32_t>(offsetof(List_1_t257213610_StaticFields, ___EmptyArray_3)); }
	inline ObjectU5BU5D_t2843939325* get_EmptyArray_3() const { return ___EmptyArray_3; }
	inline ObjectU5BU5D_t2843939325** get_address_of_EmptyArray_3() { return &___EmptyArray_3; }
	inline void set_EmptyArray_3(ObjectU5BU5D_t2843939325* value)
	{
		___EmptyArray_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T257213610_H
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
#ifndef ATTRIBUTE_T861562559_H
#define ATTRIBUTE_T861562559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t861562559  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T861562559_H
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

struct Api_t3979125197_StaticFields
{
public:
	// SkillzSDK.Match SkillzSDK.Api::_matchInfo
	Match_t1925635937 * ____matchInfo_0;
	// SkillzSyncDelegate SkillzSDK.Api::_syncMessageHandler
	RuntimeObject* ____syncMessageHandler_1;

public:
	inline static int32_t get_offset_of__matchInfo_0() { return static_cast<int32_t>(offsetof(Api_t3979125197_StaticFields, ____matchInfo_0)); }
	inline Match_t1925635937 * get__matchInfo_0() const { return ____matchInfo_0; }
	inline Match_t1925635937 ** get_address_of__matchInfo_0() { return &____matchInfo_0; }
	inline void set__matchInfo_0(Match_t1925635937 * value)
	{
		____matchInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&____matchInfo_0), value);
	}

	inline static int32_t get_offset_of__syncMessageHandler_1() { return static_cast<int32_t>(offsetof(Api_t3979125197_StaticFields, ____syncMessageHandler_1)); }
	inline RuntimeObject* get__syncMessageHandler_1() const { return ____syncMessageHandler_1; }
	inline RuntimeObject** get_address_of__syncMessageHandler_1() { return &____syncMessageHandler_1; }
	inline void set__syncMessageHandler_1(RuntimeObject* value)
	{
		____syncMessageHandler_1 = value;
		Il2CppCodeGenWriteBarrier((&____syncMessageHandler_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // API_T3979125197_H
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
#ifndef LIST_1_T138764442_H
#define LIST_1_T138764442_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<SkillzSDK.Player>
struct  List_1_t138764442  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PlayerU5BU5D_t1785092173* ____items_0;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_2;

public:
	inline static int32_t get_offset_of__items_0() { return static_cast<int32_t>(offsetof(List_1_t138764442, ____items_0)); }
	inline PlayerU5BU5D_t1785092173* get__items_0() const { return ____items_0; }
	inline PlayerU5BU5D_t1785092173** get_address_of__items_0() { return &____items_0; }
	inline void set__items_0(PlayerU5BU5D_t1785092173* value)
	{
		____items_0 = value;
		Il2CppCodeGenWriteBarrier((&____items_0), value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(List_1_t138764442, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(List_1_t138764442, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}
};

struct List_1_t138764442_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	PlayerU5BU5D_t1785092173* ___EmptyArray_3;

public:
	inline static int32_t get_offset_of_EmptyArray_3() { return static_cast<int32_t>(offsetof(List_1_t138764442_StaticFields, ___EmptyArray_3)); }
	inline PlayerU5BU5D_t1785092173* get_EmptyArray_3() const { return ___EmptyArray_3; }
	inline PlayerU5BU5D_t1785092173** get_address_of_EmptyArray_3() { return &___EmptyArray_3; }
	inline void set_EmptyArray_3(PlayerU5BU5D_t1785092173* value)
	{
		___EmptyArray_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T138764442_H
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

struct Skillz_t1424191382_StaticFields
{
public:
	// SkillzSyncDelegate Skillz::_syncMessageHandler
	RuntimeObject* ____syncMessageHandler_0;
	// SkillzSDK.Match Skillz::_matchInfo
	Match_t1925635937 * ____matchInfo_1;

public:
	inline static int32_t get_offset_of__syncMessageHandler_0() { return static_cast<int32_t>(offsetof(Skillz_t1424191382_StaticFields, ____syncMessageHandler_0)); }
	inline RuntimeObject* get__syncMessageHandler_0() const { return ____syncMessageHandler_0; }
	inline RuntimeObject** get_address_of__syncMessageHandler_0() { return &____syncMessageHandler_0; }
	inline void set__syncMessageHandler_0(RuntimeObject* value)
	{
		____syncMessageHandler_0 = value;
		Il2CppCodeGenWriteBarrier((&____syncMessageHandler_0), value);
	}

	inline static int32_t get_offset_of__matchInfo_1() { return static_cast<int32_t>(offsetof(Skillz_t1424191382_StaticFields, ____matchInfo_1)); }
	inline Match_t1925635937 * get__matchInfo_1() const { return ____matchInfo_1; }
	inline Match_t1925635937 ** get_address_of__matchInfo_1() { return &____matchInfo_1; }
	inline void set__matchInfo_1(Match_t1925635937 * value)
	{
		____matchInfo_1 = value;
		Il2CppCodeGenWriteBarrier((&____matchInfo_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SKILLZ_T1424191382_H
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
#ifndef DICTIONARYENTRY_T3123975638_H
#define DICTIONARYENTRY_T3123975638_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.DictionaryEntry
struct  DictionaryEntry_t3123975638 
{
public:
	// System.Object System.Collections.DictionaryEntry::_key
	RuntimeObject * ____key_0;
	// System.Object System.Collections.DictionaryEntry::_value
	RuntimeObject * ____value_1;

public:
	inline static int32_t get_offset_of__key_0() { return static_cast<int32_t>(offsetof(DictionaryEntry_t3123975638, ____key_0)); }
	inline RuntimeObject * get__key_0() const { return ____key_0; }
	inline RuntimeObject ** get_address_of__key_0() { return &____key_0; }
	inline void set__key_0(RuntimeObject * value)
	{
		____key_0 = value;
		Il2CppCodeGenWriteBarrier((&____key_0), value);
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(DictionaryEntry_t3123975638, ____value_1)); }
	inline RuntimeObject * get__value_1() const { return ____value_1; }
	inline RuntimeObject ** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(RuntimeObject * value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier((&____value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t3123975638_marshaled_pinvoke
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
// Native definition for COM marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t3123975638_marshaled_com
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
#endif // DICTIONARYENTRY_T3123975638_H
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
#ifndef NULLABLE_1_T1561634878_H
#define NULLABLE_1_T1561634878_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.UInt64>
struct  Nullable_1_t1561634878 
{
public:
	// T System.Nullable`1::value
	uint64_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1561634878, ___value_0)); }
	inline uint64_t get_value_0() const { return ___value_0; }
	inline uint64_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(uint64_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1561634878, ___has_value_1)); }
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
#endif // NULLABLE_1_T1561634878_H
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
#ifndef MONOPINVOKECALLBACKATTRIBUTE_T921095372_H
#define MONOPINVOKECALLBACKATTRIBUTE_T921095372_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SkillzSDK.Api/MonoPInvokeCallbackAttribute
struct  MonoPInvokeCallbackAttribute_t921095372  : public Attribute_t861562559
{
public:
	// System.Type SkillzSDK.Api/MonoPInvokeCallbackAttribute::type
	Type_t * ___type_0;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(MonoPInvokeCallbackAttribute_t921095372, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOPINVOKECALLBACKATTRIBUTE_T921095372_H
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
#ifndef ENUMERATOR_T2028008319_H
#define ENUMERATOR_T2028008319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<SkillzSDK.Player>
struct  Enumerator_t2028008319 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t138764442 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Player_t2961656996 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2028008319, ___l_0)); }
	inline List_1_t138764442 * get_l_0() const { return ___l_0; }
	inline List_1_t138764442 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t138764442 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2028008319, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2028008319, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2028008319, ___current_3)); }
	inline Player_t2961656996 * get_current_3() const { return ___current_3; }
	inline Player_t2961656996 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Player_t2961656996 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2028008319_H
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
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef PLAYER_T2961656996_H
#define PLAYER_T2961656996_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SkillzSDK.Player
struct  Player_t2961656996  : public RuntimeObject
{
public:
	// System.String SkillzSDK.Player::DisplayName
	String_t* ___DisplayName_0;
	// System.Nullable`1<System.UInt64> SkillzSDK.Player::ID
	Nullable_1_t1561634878  ___ID_1;
	// System.Nullable`1<System.UInt64> SkillzSDK.Player::TournamentPlayerID
	Nullable_1_t1561634878  ___TournamentPlayerID_2;
	// System.String SkillzSDK.Player::AvatarURL
	String_t* ___AvatarURL_3;
	// System.String SkillzSDK.Player::FlagURL
	String_t* ___FlagURL_4;
	// System.Boolean SkillzSDK.Player::IsCurrentPlayer
	bool ___IsCurrentPlayer_5;

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
	inline Nullable_1_t1561634878  get_ID_1() const { return ___ID_1; }
	inline Nullable_1_t1561634878 * get_address_of_ID_1() { return &___ID_1; }
	inline void set_ID_1(Nullable_1_t1561634878  value)
	{
		___ID_1 = value;
	}

	inline static int32_t get_offset_of_TournamentPlayerID_2() { return static_cast<int32_t>(offsetof(Player_t2961656996, ___TournamentPlayerID_2)); }
	inline Nullable_1_t1561634878  get_TournamentPlayerID_2() const { return ___TournamentPlayerID_2; }
	inline Nullable_1_t1561634878 * get_address_of_TournamentPlayerID_2() { return &___TournamentPlayerID_2; }
	inline void set_TournamentPlayerID_2(Nullable_1_t1561634878  value)
	{
		___TournamentPlayerID_2 = value;
	}

	inline static int32_t get_offset_of_AvatarURL_3() { return static_cast<int32_t>(offsetof(Player_t2961656996, ___AvatarURL_3)); }
	inline String_t* get_AvatarURL_3() const { return ___AvatarURL_3; }
	inline String_t** get_address_of_AvatarURL_3() { return &___AvatarURL_3; }
	inline void set_AvatarURL_3(String_t* value)
	{
		___AvatarURL_3 = value;
		Il2CppCodeGenWriteBarrier((&___AvatarURL_3), value);
	}

	inline static int32_t get_offset_of_FlagURL_4() { return static_cast<int32_t>(offsetof(Player_t2961656996, ___FlagURL_4)); }
	inline String_t* get_FlagURL_4() const { return ___FlagURL_4; }
	inline String_t** get_address_of_FlagURL_4() { return &___FlagURL_4; }
	inline void set_FlagURL_4(String_t* value)
	{
		___FlagURL_4 = value;
		Il2CppCodeGenWriteBarrier((&___FlagURL_4), value);
	}

	inline static int32_t get_offset_of_IsCurrentPlayer_5() { return static_cast<int32_t>(offsetof(Player_t2961656996, ___IsCurrentPlayer_5)); }
	inline bool get_IsCurrentPlayer_5() const { return ___IsCurrentPlayer_5; }
	inline bool* get_address_of_IsCurrentPlayer_5() { return &___IsCurrentPlayer_5; }
	inline void set_IsCurrentPlayer_5(bool value)
	{
		___IsCurrentPlayer_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYER_T2961656996_H
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
#ifndef JVALUE_T1372148875_H
#define JVALUE_T1372148875_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.jvalue
struct  jvalue_t1372148875 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Boolean UnityEngine.jvalue::z
			bool ___z_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			bool ___z_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.jvalue::b
			uint8_t ___b_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___b_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Char UnityEngine.jvalue::c
			Il2CppChar ___c_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			Il2CppChar ___c_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 UnityEngine.jvalue::s
			int16_t ___s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.jvalue::i
			int32_t ___i_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 UnityEngine.jvalue::j
			int64_t ___j_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single UnityEngine.jvalue::f
			float ___f_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double UnityEngine.jvalue::d
			double ___d_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.IntPtr UnityEngine.jvalue::l
			intptr_t ___l_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_8_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_z_0() { return static_cast<int32_t>(offsetof(jvalue_t1372148875, ___z_0)); }
	inline bool get_z_0() const { return ___z_0; }
	inline bool* get_address_of_z_0() { return &___z_0; }
	inline void set_z_0(bool value)
	{
		___z_0 = value;
	}

	inline static int32_t get_offset_of_b_1() { return static_cast<int32_t>(offsetof(jvalue_t1372148875, ___b_1)); }
	inline uint8_t get_b_1() const { return ___b_1; }
	inline uint8_t* get_address_of_b_1() { return &___b_1; }
	inline void set_b_1(uint8_t value)
	{
		___b_1 = value;
	}

	inline static int32_t get_offset_of_c_2() { return static_cast<int32_t>(offsetof(jvalue_t1372148875, ___c_2)); }
	inline Il2CppChar get_c_2() const { return ___c_2; }
	inline Il2CppChar* get_address_of_c_2() { return &___c_2; }
	inline void set_c_2(Il2CppChar value)
	{
		___c_2 = value;
	}

	inline static int32_t get_offset_of_s_3() { return static_cast<int32_t>(offsetof(jvalue_t1372148875, ___s_3)); }
	inline int16_t get_s_3() const { return ___s_3; }
	inline int16_t* get_address_of_s_3() { return &___s_3; }
	inline void set_s_3(int16_t value)
	{
		___s_3 = value;
	}

	inline static int32_t get_offset_of_i_4() { return static_cast<int32_t>(offsetof(jvalue_t1372148875, ___i_4)); }
	inline int32_t get_i_4() const { return ___i_4; }
	inline int32_t* get_address_of_i_4() { return &___i_4; }
	inline void set_i_4(int32_t value)
	{
		___i_4 = value;
	}

	inline static int32_t get_offset_of_j_5() { return static_cast<int32_t>(offsetof(jvalue_t1372148875, ___j_5)); }
	inline int64_t get_j_5() const { return ___j_5; }
	inline int64_t* get_address_of_j_5() { return &___j_5; }
	inline void set_j_5(int64_t value)
	{
		___j_5 = value;
	}

	inline static int32_t get_offset_of_f_6() { return static_cast<int32_t>(offsetof(jvalue_t1372148875, ___f_6)); }
	inline float get_f_6() const { return ___f_6; }
	inline float* get_address_of_f_6() { return &___f_6; }
	inline void set_f_6(float value)
	{
		___f_6 = value;
	}

	inline static int32_t get_offset_of_d_7() { return static_cast<int32_t>(offsetof(jvalue_t1372148875, ___d_7)); }
	inline double get_d_7() const { return ___d_7; }
	inline double* get_address_of_d_7() { return &___d_7; }
	inline void set_d_7(double value)
	{
		___d_7 = value;
	}

	inline static int32_t get_offset_of_l_8() { return static_cast<int32_t>(offsetof(jvalue_t1372148875, ___l_8)); }
	inline intptr_t get_l_8() const { return ___l_8; }
	inline intptr_t* get_address_of_l_8() { return &___l_8; }
	inline void set_l_8(intptr_t value)
	{
		___l_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.jvalue
struct jvalue_t1372148875_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___b_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___b_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_8_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.jvalue
struct jvalue_t1372148875_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___b_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___b_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_8_forAlignmentOnly;
		};
	};
};
#endif // JVALUE_T1372148875_H
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
	// System.Nullable`1<System.Boolean> SkillzSDK.Match::IsCash
	Nullable_1_t1819850047  ___IsCash_5;
	// System.Nullable`1<System.Int32> SkillzSDK.Match::EntryPoints
	Nullable_1_t378540539  ___EntryPoints_6;
	// System.Nullable`1<System.Single> SkillzSDK.Match::EntryCash
	Nullable_1_t3119828856  ___EntryCash_7;
	// System.Boolean SkillzSDK.Match::IsSynchronous
	bool ___IsSynchronous_8;
	// System.Collections.Generic.List`1<SkillzSDK.Player> SkillzSDK.Match::Players
	List_1_t138764442 * ___Players_9;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> SkillzSDK.Match::GameParams
	Dictionary_2_t1632706988 * ___GameParams_10;

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

	inline static int32_t get_offset_of_IsCash_5() { return static_cast<int32_t>(offsetof(Match_t1925635937, ___IsCash_5)); }
	inline Nullable_1_t1819850047  get_IsCash_5() const { return ___IsCash_5; }
	inline Nullable_1_t1819850047 * get_address_of_IsCash_5() { return &___IsCash_5; }
	inline void set_IsCash_5(Nullable_1_t1819850047  value)
	{
		___IsCash_5 = value;
	}

	inline static int32_t get_offset_of_EntryPoints_6() { return static_cast<int32_t>(offsetof(Match_t1925635937, ___EntryPoints_6)); }
	inline Nullable_1_t378540539  get_EntryPoints_6() const { return ___EntryPoints_6; }
	inline Nullable_1_t378540539 * get_address_of_EntryPoints_6() { return &___EntryPoints_6; }
	inline void set_EntryPoints_6(Nullable_1_t378540539  value)
	{
		___EntryPoints_6 = value;
	}

	inline static int32_t get_offset_of_EntryCash_7() { return static_cast<int32_t>(offsetof(Match_t1925635937, ___EntryCash_7)); }
	inline Nullable_1_t3119828856  get_EntryCash_7() const { return ___EntryCash_7; }
	inline Nullable_1_t3119828856 * get_address_of_EntryCash_7() { return &___EntryCash_7; }
	inline void set_EntryCash_7(Nullable_1_t3119828856  value)
	{
		___EntryCash_7 = value;
	}

	inline static int32_t get_offset_of_IsSynchronous_8() { return static_cast<int32_t>(offsetof(Match_t1925635937, ___IsSynchronous_8)); }
	inline bool get_IsSynchronous_8() const { return ___IsSynchronous_8; }
	inline bool* get_address_of_IsSynchronous_8() { return &___IsSynchronous_8; }
	inline void set_IsSynchronous_8(bool value)
	{
		___IsSynchronous_8 = value;
	}

	inline static int32_t get_offset_of_Players_9() { return static_cast<int32_t>(offsetof(Match_t1925635937, ___Players_9)); }
	inline List_1_t138764442 * get_Players_9() const { return ___Players_9; }
	inline List_1_t138764442 ** get_address_of_Players_9() { return &___Players_9; }
	inline void set_Players_9(List_1_t138764442 * value)
	{
		___Players_9 = value;
		Il2CppCodeGenWriteBarrier((&___Players_9), value);
	}

	inline static int32_t get_offset_of_GameParams_10() { return static_cast<int32_t>(offsetof(Match_t1925635937, ___GameParams_10)); }
	inline Dictionary_2_t1632706988 * get_GameParams_10() const { return ___GameParams_10; }
	inline Dictionary_2_t1632706988 ** get_address_of_GameParams_10() { return &___GameParams_10; }
	inline void set_GameParams_10(Dictionary_2_t1632706988 * value)
	{
		___GameParams_10 = value;
		Il2CppCodeGenWriteBarrier((&___GameParams_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATCH_T1925635937_H
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
#ifndef ANDROIDJAVAPROXY_T2835824643_H
#define ANDROIDJAVAPROXY_T2835824643_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AndroidJavaProxy
struct  AndroidJavaProxy_t2835824643  : public RuntimeObject
{
public:
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_t32045322 * ___javaInterface_0;
	// UnityEngine.AndroidJavaObject UnityEngine.AndroidJavaProxy::proxyObject
	AndroidJavaObject_t4131667876 * ___proxyObject_1;

public:
	inline static int32_t get_offset_of_javaInterface_0() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_t2835824643, ___javaInterface_0)); }
	inline AndroidJavaClass_t32045322 * get_javaInterface_0() const { return ___javaInterface_0; }
	inline AndroidJavaClass_t32045322 ** get_address_of_javaInterface_0() { return &___javaInterface_0; }
	inline void set_javaInterface_0(AndroidJavaClass_t32045322 * value)
	{
		___javaInterface_0 = value;
		Il2CppCodeGenWriteBarrier((&___javaInterface_0), value);
	}

	inline static int32_t get_offset_of_proxyObject_1() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_t2835824643, ___proxyObject_1)); }
	inline AndroidJavaObject_t4131667876 * get_proxyObject_1() const { return ___proxyObject_1; }
	inline AndroidJavaObject_t4131667876 ** get_address_of_proxyObject_1() { return &___proxyObject_1; }
	inline void set_proxyObject_1(AndroidJavaObject_t4131667876 * value)
	{
		___proxyObject_1 = value;
		Il2CppCodeGenWriteBarrier((&___proxyObject_1), value);
	}
};

struct AndroidJavaProxy_t2835824643_StaticFields
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t3225273728 * ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;

public:
	inline static int32_t get_offset_of_s_JavaLangSystemClass_2() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_t2835824643_StaticFields, ___s_JavaLangSystemClass_2)); }
	inline GlobalJavaObjectRef_t3225273728 * get_s_JavaLangSystemClass_2() const { return ___s_JavaLangSystemClass_2; }
	inline GlobalJavaObjectRef_t3225273728 ** get_address_of_s_JavaLangSystemClass_2() { return &___s_JavaLangSystemClass_2; }
	inline void set_s_JavaLangSystemClass_2(GlobalJavaObjectRef_t3225273728 * value)
	{
		___s_JavaLangSystemClass_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_JavaLangSystemClass_2), value);
	}

	inline static int32_t get_offset_of_s_HashCodeMethodID_3() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_t2835824643_StaticFields, ___s_HashCodeMethodID_3)); }
	inline intptr_t get_s_HashCodeMethodID_3() const { return ___s_HashCodeMethodID_3; }
	inline intptr_t* get_address_of_s_HashCodeMethodID_3() { return &___s_HashCodeMethodID_3; }
	inline void set_s_HashCodeMethodID_3(intptr_t value)
	{
		___s_HashCodeMethodID_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANDROIDJAVAPROXY_T2835824643_H
#ifndef UNMANAGEDARRAY_T473089838_H
#define UNMANAGEDARRAY_T473089838_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SkillzSDK.UnmanagedArray
struct  UnmanagedArray_t473089838 
{
public:
	// System.IntPtr SkillzSDK.UnmanagedArray::dataIntPtr
	intptr_t ___dataIntPtr_0;
	// System.UInt64 SkillzSDK.UnmanagedArray::dataLength
	uint64_t ___dataLength_1;

public:
	inline static int32_t get_offset_of_dataIntPtr_0() { return static_cast<int32_t>(offsetof(UnmanagedArray_t473089838, ___dataIntPtr_0)); }
	inline intptr_t get_dataIntPtr_0() const { return ___dataIntPtr_0; }
	inline intptr_t* get_address_of_dataIntPtr_0() { return &___dataIntPtr_0; }
	inline void set_dataIntPtr_0(intptr_t value)
	{
		___dataIntPtr_0 = value;
	}

	inline static int32_t get_offset_of_dataLength_1() { return static_cast<int32_t>(offsetof(UnmanagedArray_t473089838, ___dataLength_1)); }
	inline uint64_t get_dataLength_1() const { return ___dataLength_1; }
	inline uint64_t* get_address_of_dataLength_1() { return &___dataLength_1; }
	inline void set_dataLength_1(uint64_t value)
	{
		___dataLength_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNMANAGEDARRAY_T473089838_H
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
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
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
#ifndef SKILLZSYNCPROXY_T2138768546_H
#define SKILLZSYNCPROXY_T2138768546_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Skillz/SkillzSyncProxy
struct  SkillzSyncProxy_t2138768546  : public AndroidJavaProxy_t2835824643
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SKILLZSYNCPROXY_T2138768546_H
#ifndef VOIDFP_T530139871_H
#define VOIDFP_T530139871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SkillzSDK.Api/VoidFP
struct  VoidFP_t530139871  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOIDFP_T530139871_H
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
#ifndef INTFP_T1593217519_H
#define INTFP_T1593217519_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SkillzSDK.Api/IntFP
struct  IntFP_t1593217519  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTFP_T1593217519_H
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
#ifndef INTPTRINTFP_T2813787974_H
#define INTPTRINTFP_T2813787974_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SkillzSDK.Api/IntPtrIntFP
struct  IntPtrIntFP_t2813787974  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTRINTFP_T2813787974_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
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
#ifndef SKILLZGAMECONTROLLER_T3579252314_H
#define SKILLZGAMECONTROLLER_T3579252314_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SkillzGameController
struct  SkillzGameController_t3579252314  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SKILLZGAMECONTROLLER_T3579252314_H
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
#ifndef SKILLZABSTRACTDELEGATE_T639866310_H
#define SKILLZABSTRACTDELEGATE_T639866310_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SkillzAbstractDelegate
struct  SkillzAbstractDelegate_t639866310  : public MonoBehaviour_t3962482529
{
public:
	// System.Int32 SkillzAbstractDelegate::GameID
	int32_t ___GameID_2;
	// SkillzSDK.Environment SkillzAbstractDelegate::SkillzEnvironment
	int32_t ___SkillzEnvironment_3;

public:
	inline static int32_t get_offset_of_GameID_2() { return static_cast<int32_t>(offsetof(SkillzAbstractDelegate_t639866310, ___GameID_2)); }
	inline int32_t get_GameID_2() const { return ___GameID_2; }
	inline int32_t* get_address_of_GameID_2() { return &___GameID_2; }
	inline void set_GameID_2(int32_t value)
	{
		___GameID_2 = value;
	}

	inline static int32_t get_offset_of_SkillzEnvironment_3() { return static_cast<int32_t>(offsetof(SkillzAbstractDelegate_t639866310, ___SkillzEnvironment_3)); }
	inline int32_t get_SkillzEnvironment_3() const { return ___SkillzEnvironment_3; }
	inline int32_t* get_address_of_SkillzEnvironment_3() { return &___SkillzEnvironment_3; }
	inline void set_SkillzEnvironment_3(int32_t value)
	{
		___SkillzEnvironment_3 = value;
	}
};

struct SkillzAbstractDelegate_t639866310_StaticFields
{
public:
	// System.Boolean SkillzAbstractDelegate::initializedYet
	bool ___initializedYet_4;

public:
	inline static int32_t get_offset_of_initializedYet_4() { return static_cast<int32_t>(offsetof(SkillzAbstractDelegate_t639866310_StaticFields, ___initializedYet_4)); }
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
#endif // SKILLZABSTRACTDELEGATE_T639866310_H
#ifndef SKILLZDELEGATE_T3178178617_H
#define SKILLZDELEGATE_T3178178617_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SkillzDelegate
struct  SkillzDelegate_t3178178617  : public SkillzAbstractDelegate_t639866310
{
public:

public:
};

struct SkillzDelegate_t3178178617_StaticFields
{
public:
	// SkillzMatchDelegate SkillzDelegate::_delegate
	RuntimeObject* ____delegate_5;
	// SkillzSyncDelegate SkillzDelegate::_syncDelegate
	RuntimeObject* ____syncDelegate_6;

public:
	inline static int32_t get_offset_of__delegate_5() { return static_cast<int32_t>(offsetof(SkillzDelegate_t3178178617_StaticFields, ____delegate_5)); }
	inline RuntimeObject* get__delegate_5() const { return ____delegate_5; }
	inline RuntimeObject** get_address_of__delegate_5() { return &____delegate_5; }
	inline void set__delegate_5(RuntimeObject* value)
	{
		____delegate_5 = value;
		Il2CppCodeGenWriteBarrier((&____delegate_5), value);
	}

	inline static int32_t get_offset_of__syncDelegate_6() { return static_cast<int32_t>(offsetof(SkillzDelegate_t3178178617_StaticFields, ____syncDelegate_6)); }
	inline RuntimeObject* get__syncDelegate_6() const { return ____syncDelegate_6; }
	inline RuntimeObject** get_address_of__syncDelegate_6() { return &____syncDelegate_6; }
	inline void set__syncDelegate_6(RuntimeObject* value)
	{
		____syncDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((&____syncDelegate_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SKILLZDELEGATE_T3178178617_H
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
// System.Byte[]
struct ByteU5BU5D_t4116647657  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.jvalue[]
struct jvalueU5BU5D_t578373866  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) jvalue_t1372148875  m_Items[1];

public:
	inline jvalue_t1372148875  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline jvalue_t1372148875 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, jvalue_t1372148875  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline jvalue_t1372148875  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline jvalue_t1372148875 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, jvalue_t1372148875  value)
	{
		m_Items[index] = value;
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


// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR bool AndroidJavaObject_CallStatic_TisBoolean_t97287965_m4111307719_gshared (AndroidJavaObject_t4131667876 * __this, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_CallStatic_TisRuntimeObject_m1663918964_gshared (AndroidJavaObject_t4131667876 * __this, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Object>(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_Call_TisRuntimeObject_m3865839649_gshared (AndroidJavaObject_t4131667876 * __this, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR bool AndroidJavaObject_Call_TisBoolean_t97287965_m948263851_gshared (AndroidJavaObject_t4131667876 * __this, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Single>(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR float AndroidJavaObject_CallStatic_TisSingle_t1397266774_m2173456096_gshared (AndroidJavaObject_t4131667876 * __this, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Int32>(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_CallStatic_TisInt32_t2950945753_m1426675528_gshared (AndroidJavaObject_t4131667876 * __this, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Int64>(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR int64_t AndroidJavaObject_CallStatic_TisInt64_t3736567304_m1757219269_gshared (AndroidJavaObject_t4131667876 * __this, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Double>(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR double AndroidJavaObject_CallStatic_TisDouble_t594665363_m3845568371_gshared (AndroidJavaObject_t4131667876 * __this, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m518943619_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_m2387223709_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_GetStatic_TisRuntimeObject_m3787108634_gshared (AndroidJavaObject_t4131667876 * __this, String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Single>(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR float AndroidJavaObject_Call_TisSingle_t1397266774_m1436156811_gshared (AndroidJavaObject_t4131667876 * __this, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Get<System.Object>(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_Get_TisRuntimeObject_m2717364471_gshared (AndroidJavaObject_t4131667876 * __this, String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJNIHelper::ConvertFromJNIArray<System.Object>(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_m2594144086_gshared (RuntimeObject * __this /* static, unused */, intptr_t p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m2278349286_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m2714930061_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Boolean>::.ctor(!0)
extern "C" IL2CPP_METHOD_ATTR void Nullable_1__ctor_m269558965_gshared (Nullable_1_t1819850047 * __this, bool p0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Double>::get_HasValue()
extern "C" IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m1700900799_gshared (Nullable_1_t2317227445 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Double>::get_Value()
extern "C" IL2CPP_METHOD_ATTR double Nullable_1_get_Value_m3507161817_gshared (Nullable_1_t2317227445 * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.DateTime>::.ctor(!0)
extern "C" IL2CPP_METHOD_ATTR void Nullable_1__ctor_m3556066642_gshared (Nullable_1_t1166124571 * __this, DateTime_t3738529785  p0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Double>::.ctor(!0)
extern "C" IL2CPP_METHOD_ATTR void Nullable_1__ctor_m1383724426_gshared (Nullable_1_t2317227445 * __this, double p0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
extern "C" IL2CPP_METHOD_ATTR void Nullable_1__ctor_m3556133687_gshared (Nullable_1_t378540539 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.UInt32>::.ctor(!0)
extern "C" IL2CPP_METHOD_ATTR void Nullable_1__ctor_m2245710918_gshared (Nullable_1_t4282624060 * __this, uint32_t p0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Single>::.ctor(!0)
extern "C" IL2CPP_METHOD_ATTR void Nullable_1__ctor_m2775392932_gshared (Nullable_1_t3119828856 * __this, float p0, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Boolean>::get_Value()
extern "C" IL2CPP_METHOD_ATTR bool Nullable_1_get_Value_m1177098500_gshared (Nullable_1_t1819850047 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t2086727927  Dictionary_2_GetEnumerator_m3278257048_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR KeyValuePair_2_t2530217319  Enumerator_get_Current_m2655181939_gshared (Enumerator_t2086727927 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m3464904234_gshared (KeyValuePair_2_t2530217319 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_m1328507389_gshared (KeyValuePair_2_t2530217319 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m1107569389_gshared (Enumerator_t2086727927 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m3885012575_gshared (Enumerator_t2086727927 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m3474379962_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.UInt32>::get_HasValue()
extern "C" IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m1763782828_gshared (Nullable_1_t4282624060 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.UInt32>::get_Value()
extern "C" IL2CPP_METHOD_ATTR uint32_t Nullable_1_get_Value_m1994738269_gshared (Nullable_1_t4282624060 * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.UInt64>::.ctor(!0)
extern "C" IL2CPP_METHOD_ATTR void Nullable_1__ctor_m3249847592_gshared (Nullable_1_t1561634878 * __this, uint64_t p0, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
extern "C" IL2CPP_METHOD_ATTR float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String GameSceneManager::GetPrevScene()
extern "C" IL2CPP_METHOD_ATTR String_t* GameSceneManager_GetPrevScene_m2997470641 (GameSceneManager_t2999297734 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
extern "C" IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m1758133949 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_m389913383 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_m2101271233 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// UnityEngine.AndroidJavaClass Skillz::GetSkillz()
extern "C" IL2CPP_METHOD_ATTR AndroidJavaClass_t32045322 * Skillz_GetSkillz_m1754260856 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.AndroidJavaObject Skillz::GetCurrentActivity()
extern "C" IL2CPP_METHOD_ATTR AndroidJavaObject_t4131667876 * Skillz_GetCurrentActivity_m1705205339 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::CallStatic(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_m2922144688 (AndroidJavaObject_t4131667876 * __this, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
#define AndroidJavaObject_CallStatic_TisBoolean_t97287965_m4111307719(__this, p0, p1, method) ((  bool (*) (AndroidJavaObject_t4131667876 *, String_t*, ObjectU5BU5D_t2843939325*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisBoolean_t97287965_m4111307719_gshared)(__this, p0, p1, method)
// System.Void System.Collections.Hashtable::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Hashtable__ctor_m1815022027 (Hashtable_t1853889766 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
#define AndroidJavaObject_CallStatic_TisAndroidJavaObject_t4131667876_m2031442458(__this, p0, p1, method) ((  AndroidJavaObject_t4131667876 * (*) (AndroidJavaObject_t4131667876 *, String_t*, ObjectU5BU5D_t2843939325*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_m1663918964_gshared)(__this, p0, p1, method)
// !!0 UnityEngine.AndroidJavaObject::Call<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
#define AndroidJavaObject_Call_TisAndroidJavaObject_t4131667876_m2649654213(__this, p0, p1, method) ((  AndroidJavaObject_t4131667876 * (*) (AndroidJavaObject_t4131667876 *, String_t*, ObjectU5BU5D_t2843939325*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_m3865839649_gshared)(__this, p0, p1, method)
// !!0 UnityEngine.AndroidJavaObject::Call<System.String>(System.String,System.Object[])
#define AndroidJavaObject_Call_TisString_t_m1899832687(__this, p0, p1, method) ((  String_t* (*) (AndroidJavaObject_t4131667876 *, String_t*, ObjectU5BU5D_t2843939325*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_m3865839649_gshared)(__this, p0, p1, method)
// !!0 UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
#define AndroidJavaObject_Call_TisBoolean_t97287965_m948263851(__this, p0, p1, method) ((  bool (*) (AndroidJavaObject_t4131667876 *, String_t*, ObjectU5BU5D_t2843939325*, const RuntimeMethod*))AndroidJavaObject_Call_TisBoolean_t97287965_m948263851_gshared)(__this, p0, p1, method)
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.String>(System.String,System.Object[])
#define AndroidJavaObject_CallStatic_TisString_t_m3599693027(__this, p0, p1, method) ((  String_t* (*) (AndroidJavaObject_t4131667876 *, String_t*, ObjectU5BU5D_t2843939325*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_m1663918964_gshared)(__this, p0, p1, method)
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Skillz::DeserializeJSONToDictionary(System.String)
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t2865362463 * Skillz_DeserializeJSONToDictionary_m2136858648 (RuntimeObject * __this /* static, unused */, String_t* ___jsonString0, const RuntimeMethod* method);
// System.Void SkillzSDK.Match::.ctor(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" IL2CPP_METHOD_ATTR void Match__ctor_m3021370963 (Match_t1925635937 * __this, Dictionary_2_t2865362463 * ___jsonData0, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m3828648572 (AndroidJavaObject_t4131667876 * __this, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// System.String System.Single::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Single_ToString_m3947131094 (float* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// UnityEngine.AndroidJavaClass Skillz::GetSkillzAudio()
extern "C" IL2CPP_METHOD_ATTR AndroidJavaClass_t32045322 * Skillz_GetSkillzAudio_m4066960576 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Single>(System.String,System.Object[])
#define AndroidJavaObject_CallStatic_TisSingle_t1397266774_m2173456096(__this, p0, p1, method) ((  float (*) (AndroidJavaObject_t4131667876 *, String_t*, ObjectU5BU5D_t2843939325*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisSingle_t1397266774_m2173456096_gshared)(__this, p0, p1, method)
// System.String System.String::Concat(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNI::FindClass(System.String)
extern "C" IL2CPP_METHOD_ATTR intptr_t AndroidJNI_FindClass_m1172671139 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNI::GetStaticMethodID(System.IntPtr,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetStaticMethodID_m3888866449 (RuntimeObject * __this /* static, unused */, intptr_t p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// UnityEngine.jvalue[] UnityEngine.AndroidJNIHelper::CreateJNIArgArray(System.Object[])
extern "C" IL2CPP_METHOD_ATTR jvalueU5BU5D_t578373866* AndroidJNIHelper_CreateJNIArgArray_m3056127197 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJNI::CallStaticVoidMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C" IL2CPP_METHOD_ATTR void AndroidJNI_CallStaticVoidMethod_m586868889 (RuntimeObject * __this /* static, unused */, intptr_t p0, intptr_t p1, jvalueU5BU5D_t578373866* p2, const RuntimeMethod* method);
// UnityEngine.AndroidJavaClass Skillz::GetSkillzSync()
extern "C" IL2CPP_METHOD_ATTR AndroidJavaClass_t32045322 * Skillz_GetSkillzSync_m102960867 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Int32>(System.String,System.Object[])
#define AndroidJavaObject_CallStatic_TisInt32_t2950945753_m1426675528(__this, p0, p1, method) ((  int32_t (*) (AndroidJavaObject_t4131667876 *, String_t*, ObjectU5BU5D_t2843939325*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisInt32_t2950945753_m1426675528_gshared)(__this, p0, p1, method)
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Int64>(System.String,System.Object[])
#define AndroidJavaObject_CallStatic_TisInt64_t3736567304_m1757219269(__this, p0, p1, method) ((  int64_t (*) (AndroidJavaObject_t4131667876 *, String_t*, ObjectU5BU5D_t2843939325*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisInt64_t3736567304_m1757219269_gshared)(__this, p0, p1, method)
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Double>(System.String,System.Object[])
#define AndroidJavaObject_CallStatic_TisDouble_t594665363_m3845568371(__this, p0, p1, method) ((  double (*) (AndroidJavaObject_t4131667876 *, String_t*, ObjectU5BU5D_t2843939325*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisDouble_t594665363_m3845568371_gshared)(__this, p0, p1, method)
// System.Int64 UnityEngine.AndroidJNI::CallStaticLongMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C" IL2CPP_METHOD_ATTR int64_t AndroidJNI_CallStaticLongMethod_m1210090420 (RuntimeObject * __this /* static, unused */, intptr_t p0, intptr_t p1, jvalueU5BU5D_t578373866* p2, const RuntimeMethod* method);
// System.Void Skillz/SkillzSyncProxy::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SkillzSyncProxy__ctor_m354518947 (SkillzSyncProxy_t2138768546 * __this, const RuntimeMethod* method);
// System.Void Skillz::registerSyncDelegate(Skillz/SkillzSyncProxy)
extern "C" IL2CPP_METHOD_ATTR void Skillz_registerSyncDelegate_m929502207 (RuntimeObject * __this /* static, unused */, SkillzSyncProxy_t2138768546 * ___skillzSyncDelegate0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
#define Dictionary_2__ctor_m3962145734(__this, method) ((  void (*) (Dictionary_2_t2865362463 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1)
#define Dictionary_2_Add_m825500632(__this, p0, p1, method) ((  void (*) (Dictionary_2_t2865362463 *, String_t*, RuntimeObject *, const RuntimeMethod*))Dictionary_2_Add_m2387223709_gshared)(__this, p0, p1, method)
// System.UInt32 System.Convert::ToUInt32(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR uint32_t Convert_ToUInt32_m4185155480 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t p1, const RuntimeMethod* method);
// System.String System.Boolean::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m2664721875 (bool* __this, const RuntimeMethod* method);
// System.Void SkillzSDK.Player::.ctor(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" IL2CPP_METHOD_ATTR void Player__ctor_m2866643626 (Player_t2961656996 * __this, Dictionary_2_t2865362463 * ___playerJSON0, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_m366853020 (AndroidJavaClass_t32045322 * __this, String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
#define AndroidJavaObject_GetStatic_TisAndroidJavaObject_t4131667876_m1414442298(__this, p0, method) ((  AndroidJavaObject_t4131667876 * (*) (AndroidJavaObject_t4131667876 *, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m3787108634_gshared)(__this, p0, method)
// System.Object SkillzSDK.MiniJSON.Json::Deserialize(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Json_Deserialize_m639621384 (RuntimeObject * __this /* static, unused */, String_t* ___json0, const RuntimeMethod* method);
// System.Boolean Skillz::IsMatchInProgress()
extern "C" IL2CPP_METHOD_ATTR bool Skillz_IsMatchInProgress_m3063185030 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Single>(System.String,System.Object[])
#define AndroidJavaObject_Call_TisSingle_t1397266774_m1436156811(__this, p0, p1, method) ((  float (*) (AndroidJavaObject_t4131667876 *, String_t*, ObjectU5BU5D_t2843939325*, const RuntimeMethod*))AndroidJavaObject_Call_TisSingle_t1397266774_m1436156811_gshared)(__this, p0, p1, method)
// System.Single UnityEngine.Random::get_value()
extern "C" IL2CPP_METHOD_ATTR float Random_get_value_m3115885645 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Single Skillz/Random::Value()
extern "C" IL2CPP_METHOD_ATTR float Random_Value_m3600019517 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Quaternion__ctor_m435141806 (Quaternion_t2301928331 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method);
// UnityEngine.Quaternion Skillz/Random::RotationUniform()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Random_RotationUniform_m1635932153 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m545570009 (AndroidJavaProxy_t2835824643 * __this, String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Get<UnityEngine.AndroidJavaObject>(System.String)
#define AndroidJavaObject_Get_TisAndroidJavaObject_t4131667876_m3437237260(__this, p0, method) ((  AndroidJavaObject_t4131667876 * (*) (AndroidJavaObject_t4131667876 *, String_t*, const RuntimeMethod*))AndroidJavaObject_Get_TisRuntimeObject_m2717364471_gshared)(__this, p0, method)
// System.IntPtr UnityEngine.AndroidJavaObject::GetRawObject()
extern "C" IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject_GetRawObject_m1869424478 (AndroidJavaObject_t4131667876 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJNIHelper::ConvertFromJNIArray<System.Byte[]>(System.IntPtr)
#define AndroidJNIHelper_ConvertFromJNIArray_TisByteU5BU5D_t4116647657_m1893096774(__this /* static, unused */, p0, method) ((  ByteU5BU5D_t4116647657* (*) (RuntimeObject * /* static, unused */, intptr_t, const RuntimeMethod*))AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_m2594144086_gshared)(__this /* static, unused */, p0, method)
// System.UInt64 System.Convert::ToUInt64(System.Int64)
extern "C" IL2CPP_METHOD_ATTR uint64_t Convert_ToUInt64_m409548990 (RuntimeObject * __this /* static, unused */, int64_t p0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m166252750 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Int32_ToString_m141394615 (int32_t* __this, const RuntimeMethod* method);
// System.Void SkillzSDK.Api::Initialize(System.String,SkillzSDK.Environment)
extern "C" IL2CPP_METHOD_ATTR void Api_Initialize_m1562849269 (RuntimeObject * __this /* static, unused */, String_t* ___gameId0, int32_t ___environment1, const RuntimeMethod* method);
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
extern "C" IL2CPP_METHOD_ATTR int32_t Application_get_platform_m2150679437 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// UnityEngine.AndroidJavaClass SkillzAbstractDelegate::GetSkillzPreferences()
extern "C" IL2CPP_METHOD_ATTR AndroidJavaClass_t32045322 * SkillzAbstractDelegate_GetSkillzPreferences_m1629139633 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.AndroidJavaObject SkillzAbstractDelegate::GetCurrentActivity()
extern "C" IL2CPP_METHOD_ATTR AndroidJavaObject_t4131667876 * SkillzAbstractDelegate_GetCurrentActivity_m771874125 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogWarning_m3752629331 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void SkillzDelegate::AssignSkillzDelegate(SkillzMatchDelegate)
extern "C" IL2CPP_METHOD_ATTR void SkillzDelegate_AssignSkillzDelegate_m1630244260 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___skillzDelegate0, const RuntimeMethod* method);
// System.Void SkillzSDK.Api::LaunchSkillz()
extern "C" IL2CPP_METHOD_ATTR void Api_LaunchSkillz_m3695930818 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void SkillzDelegate::AssignSkillzDelegate(SkillzSyncDelegate)
extern "C" IL2CPP_METHOD_ATTR void SkillzDelegate_AssignSkillzDelegate_m1393046629 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___skillzSyncDelegate0, const RuntimeMethod* method);
// System.Boolean SkillzSDK.Api::get_IsTournamentInProgress()
extern "C" IL2CPP_METHOD_ATTR bool Api_get_IsTournamentInProgress_m2522558358 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Collections.Hashtable SkillzSDK.Api::GetMatchRules()
extern "C" IL2CPP_METHOD_ATTR Hashtable_t1853889766 * Api_GetMatchRules_m1004458514 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// SkillzSDK.Match SkillzSDK.Api::GetMatchInfo()
extern "C" IL2CPP_METHOD_ATTR Match_t1925635937 * Api_GetMatchInfo_m3194907896 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void SkillzSDK.Api::AbortGame()
extern "C" IL2CPP_METHOD_ATTR void Api_AbortGame_m1087523040 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Single System.Single::Parse(System.String)
extern "C" IL2CPP_METHOD_ATTR float Single_Parse_m364357836 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void SkillzSDK.Api::UpdatePlayerScore(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Api_UpdatePlayerScore_m3917494721 (RuntimeObject * __this /* static, unused */, float ___currentScoreForPlayer0, const RuntimeMethod* method);
// System.Void SkillzSDK.Api::UpdatePlayerScore(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Api_UpdatePlayerScore_m2639514829 (RuntimeObject * __this /* static, unused */, int32_t ___currentScoreForPlayer0, const RuntimeMethod* method);
// System.Void SkillzSDK.Api::FinishTournament(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Api_FinishTournament_m3112126626 (RuntimeObject * __this /* static, unused */, float ___score0, const RuntimeMethod* method);
// System.Void SkillzSDK.Api::FinishTournament(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Api_FinishTournament_m2922484481 (RuntimeObject * __this /* static, unused */, int32_t ___score0, const RuntimeMethod* method);
// System.String SkillzSDK.Api::get_SDKVersionShort()
extern "C" IL2CPP_METHOD_ATTR String_t* Api_get_SDKVersionShort_m3300381882 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// SkillzSDK.Player SkillzSDK.Api::GetPlayer()
extern "C" IL2CPP_METHOD_ATTR Player_t2961656996 * Api_GetPlayer_m3941638088 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// SkillzSDK.Match SkillzCrossPlatform::GetMatchInfo()
extern "C" IL2CPP_METHOD_ATTR Match_t1925635937 * SkillzCrossPlatform_GetMatchInfo_m2901789180 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<SkillzSDK.Player>::GetEnumerator()
#define List_1_GetEnumerator_m1712187495(__this, method) ((  Enumerator_t2028008319  (*) (List_1_t138764442 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<SkillzSDK.Player>::get_Current()
#define Enumerator_get_Current_m115699280(__this, method) ((  Player_t2961656996 * (*) (Enumerator_t2028008319 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<SkillzSDK.Player>::MoveNext()
#define Enumerator_MoveNext_m2073364093(__this, method) ((  bool (*) (Enumerator_t2028008319 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<SkillzSDK.Player>::Dispose()
#define Enumerator_Dispose_m733067215(__this, method) ((  void (*) (Enumerator_t2028008319 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Void SkillzSDK.Api::AddMetadataForMatchInProgress(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Api_AddMetadataForMatchInProgress_m3539437012 (RuntimeObject * __this /* static, unused */, String_t* ___metadataJson0, bool ___forMatchInProgress1, const RuntimeMethod* method);
// System.Void SkillzSDK.Api::setSkillzBackgroundMusic(System.String)
extern "C" IL2CPP_METHOD_ATTR void Api_setSkillzBackgroundMusic_m628192280 (RuntimeObject * __this /* static, unused */, String_t* ___fileName0, const RuntimeMethod* method);
// System.Single SkillzSDK.Api::getSkillzMusicVolume()
extern "C" IL2CPP_METHOD_ATTR float Api_getSkillzMusicVolume_m1583083845 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void SkillzSDK.Api::setSkillzMusicVolume(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Api_setSkillzMusicVolume_m1647961181 (RuntimeObject * __this /* static, unused */, float ___volume0, const RuntimeMethod* method);
// System.Single SkillzSDK.Api::getSFXVolume()
extern "C" IL2CPP_METHOD_ATTR float Api_getSFXVolume_m2121641713 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void SkillzSDK.Api::setSFXVolume(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Api_setSFXVolume_m1465432439 (RuntimeObject * __this /* static, unused */, float ___volume0, const RuntimeMethod* method);
// System.Void SkillzSDK.Api::SendData(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void Api_SendData_m1108896310 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___data0, const RuntimeMethod* method);
// System.Boolean SkillzSDK.Api::IsMatchCompleted()
extern "C" IL2CPP_METHOD_ATTR bool Api_IsMatchCompleted_m2508831252 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 SkillzSDK.Api::ConnectedPlayerCount()
extern "C" IL2CPP_METHOD_ATTR int32_t Api_ConnectedPlayerCount_m128605996 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.UInt64 SkillzSDK.Api::CurrentPlayerId()
extern "C" IL2CPP_METHOD_ATTR uint64_t Api_CurrentPlayerId_m3066158680 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.UInt64 SkillzSDK.Api::CurrentOpponentPlayerId()
extern "C" IL2CPP_METHOD_ATTR uint64_t Api_CurrentOpponentPlayerId_m95968456 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.UInt64 SkillzSDK.Api::GetServerTime()
extern "C" IL2CPP_METHOD_ATTR uint64_t Api_GetServerTime_m4231984796 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 SkillzSDK.Api::ReconnectTimeLeftForPlayer(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR int32_t Api_ReconnectTimeLeftForPlayer_m3531880109 (RuntimeObject * __this /* static, unused */, uint64_t ___playerId0, const RuntimeMethod* method);
// System.Boolean SkillzCrossPlatform::IsMatchInProgress()
extern "C" IL2CPP_METHOD_ATTR bool SkillzCrossPlatform_IsMatchInProgress_m3051185731 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Single SkillzSDK.Api::_getRandomFloat()
extern "C" IL2CPP_METHOD_ATTR float Api__getRandomFloat_m745272966 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Single SkillzCrossPlatform/Random::Value()
extern "C" IL2CPP_METHOD_ATTR float Random_Value_m919656150 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Quaternion SkillzCrossPlatform/Random::RotationUniform()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Random_RotationUniform_m2440073649 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void SkillzAbstractDelegate::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SkillzAbstractDelegate__ctor_m3304752999 (SkillzAbstractDelegate_t639866310 * __this, const RuntimeMethod* method);
// System.Void SkillzSDK.Api::InitializeSyncDelegate(SkillzSyncDelegate)
extern "C" IL2CPP_METHOD_ATTR void Api_InitializeSyncDelegate_m3298977276 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___messageHandler0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.Object> SkillzAbstractDelegate::DeserializeJSONToDictionary(System.String)
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t2865362463 * SkillzAbstractDelegate_DeserializeJSONToDictionary_m3288828646 (RuntimeObject * __this /* static, unused */, String_t* ___jsonString0, const RuntimeMethod* method);
// System.Void SkillzSDK.Api::onOpponentHasLostConnection(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR void Api_onOpponentHasLostConnection_m2105192804 (RuntimeObject * __this /* static, unused */, uint64_t ___playerId0, const RuntimeMethod* method);
// System.Void SkillzSDK.Api::onOpponentHasReconnected(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR void Api_onOpponentHasReconnected_m1415751927 (RuntimeObject * __this /* static, unused */, uint64_t ___playerId0, const RuntimeMethod* method);
// System.Void SkillzSDK.Api::onOpponentHasLeftMatch(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR void Api_onOpponentHasLeftMatch_m1439901582 (RuntimeObject * __this /* static, unused */, uint64_t ___playerId0, const RuntimeMethod* method);
// System.Void SkillzSDK.Api::onCurrentPlayerHasLostConnection()
extern "C" IL2CPP_METHOD_ATTR void Api_onCurrentPlayerHasLostConnection_m1013680920 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void SkillzSDK.Api::onCurrentPlayerHasReconnected()
extern "C" IL2CPP_METHOD_ATTR void Api_onCurrentPlayerHasReconnected_m372574391 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void SkillzSDK.Api::onCurrentPlayerHasLeftMatch()
extern "C" IL2CPP_METHOD_ATTR void Api_onCurrentPlayerHasLeftMatch_m2836739900 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void SkillzSDK.Api::onDidReceiveData(System.IntPtr,System.UInt64)
extern "C" IL2CPP_METHOD_ATTR void Api_onDidReceiveData_m1898136842 (RuntimeObject * __this /* static, unused */, intptr_t ___value0, uint64_t ___length1, const RuntimeMethod* method);
// System.Void SkillzSDK.Api::onMatchCompleted()
extern "C" IL2CPP_METHOD_ATTR void Api_onMatchCompleted_m2950294816 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 SkillzSDK.Api::_tournamentIsInProgress()
extern "C" IL2CPP_METHOD_ATTR int32_t Api__tournamentIsInProgress_m3775620099 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.IntPtr SkillzSDK.Api::_player()
extern "C" IL2CPP_METHOD_ATTR intptr_t Api__player_m1362132540 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAnsi(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR String_t* Marshal_PtrToStringAnsi_m2474145239 (RuntimeObject * __this /* static, unused */, intptr_t p0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.Object> SkillzSDK.Api::DeserializeJSONToDictionary(System.String)
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t2865362463 * Api_DeserializeJSONToDictionary_m2968966310 (RuntimeObject * __this /* static, unused */, String_t* ___jsonString0, const RuntimeMethod* method);
// System.IntPtr SkillzSDK.Api::_SDKShortVersion()
extern "C" IL2CPP_METHOD_ATTR intptr_t Api__SDKShortVersion_m2578248954 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void SkillzSDK.Api::_skillzInitForGameIdAndEnvironment(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void Api__skillzInitForGameIdAndEnvironment_m3192474511 (RuntimeObject * __this /* static, unused */, String_t* ___gameId0, String_t* ___environment1, const RuntimeMethod* method);
// System.Void SkillzSDK.Api::_launchSkillz()
extern "C" IL2CPP_METHOD_ATTR void Api__launchSkillz_m664158212 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void SkillzSDK.Api::_updatePlayersCurrentScore(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Api__updatePlayersCurrentScore_m246008890 (RuntimeObject * __this /* static, unused */, float ___score0, const RuntimeMethod* method);
// System.Void SkillzSDK.Api::_updatePlayersCurrentStringScore(System.String)
extern "C" IL2CPP_METHOD_ATTR void Api__updatePlayersCurrentStringScore_m4005077211 (RuntimeObject * __this /* static, unused */, String_t* ___score0, const RuntimeMethod* method);
// System.Void SkillzSDK.Api::_updatePlayersCurrentIntScore(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Api__updatePlayersCurrentIntScore_m3021323692 (RuntimeObject * __this /* static, unused */, int32_t ___score0, const RuntimeMethod* method);
// System.Void SkillzSDK.Api::_notifyPlayerAbortWithCompletion()
extern "C" IL2CPP_METHOD_ATTR void Api__notifyPlayerAbortWithCompletion_m960311694 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void SkillzSDK.Api::_displayTournamentResultsWithScore(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Api__displayTournamentResultsWithScore_m3315146318 (RuntimeObject * __this /* static, unused */, int32_t ___score0, const RuntimeMethod* method);
// System.Void SkillzSDK.Api::_displayTournamentResultsWithFloatScore(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Api__displayTournamentResultsWithFloatScore_m1284634361 (RuntimeObject * __this /* static, unused */, float ___score0, const RuntimeMethod* method);
// System.Void SkillzSDK.Api::_displayTournamentResultsWithStringScore(System.String)
extern "C" IL2CPP_METHOD_ATTR void Api__displayTournamentResultsWithStringScore_m2296794800 (RuntimeObject * __this /* static, unused */, String_t* ___score0, const RuntimeMethod* method);
// System.Void SkillzSDK.Api::FinishTurn(System.String,SkillzSDK.TurnBasedRoundOutcome,SkillzSDK.TurnBasedMatchOutcome,System.String,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Api_FinishTurn_m1359245850 (RuntimeObject * __this /* static, unused */, String_t* ___gameData0, int32_t ___roundOutcome1, int32_t ___matchOutcome2, String_t* ___playerTurnScore3, float ___playerTotalScore4, float ___opponentTotalScore5, const RuntimeMethod* method);
// System.Void SkillzSDK.Api::_completeTurnWithGameData(System.String,System.String,System.Single,System.Single,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void Api__completeTurnWithGameData_m1632710802 (RuntimeObject * __this /* static, unused */, String_t* ___gameData0, String_t* ___score1, float ___playerCurrentTotalScore2, float ___opponentCurrentTotalScore3, String_t* ___roundOutcome4, String_t* ___matchOutcome5, const RuntimeMethod* method);
// System.Void SkillzSDK.Api::_finishReviewingCurrentGameState()
extern "C" IL2CPP_METHOD_ATTR void Api__finishReviewingCurrentGameState_m376951918 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 SkillzSDK.Api::_setAsyncTurnReviewDisabled()
extern "C" IL2CPP_METHOD_ATTR int32_t Api__setAsyncTurnReviewDisabled_m1148959024 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void SkillzSDK.Api::_addMetadataForMatchInProgress(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Api__addMetadataForMatchInProgress_m3365956122 (RuntimeObject * __this /* static, unused */, String_t* ___metadataJson0, bool ___forMatchInProgress1, const RuntimeMethod* method);
// System.Int32 SkillzSDK.Api::_getRandomNumber()
extern "C" IL2CPP_METHOD_ATTR int32_t Api__getRandomNumber_m626801295 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 SkillzSDK.Api::_getRandomNumberWithMinAndMax(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Api__getRandomNumberWithMinAndMax_m679981106 (RuntimeObject * __this /* static, unused */, int32_t ___min0, int32_t ___max1, const RuntimeMethod* method);
// System.Void SkillzSDK.Api::_showSDKVersionInfo()
extern "C" IL2CPP_METHOD_ATTR void Api__showSDKVersionInfo_m2617811748 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.IntPtr SkillzSDK.Api::_getMatchRules()
extern "C" IL2CPP_METHOD_ATTR intptr_t Api__getMatchRules_m768486371 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Collections.Hashtable::.ctor(System.Collections.IDictionary)
extern "C" IL2CPP_METHOD_ATTR void Hashtable__ctor_m2112858046 (Hashtable_t1853889766 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.IntPtr SkillzSDK.Api::_getMatchInfo()
extern "C" IL2CPP_METHOD_ATTR intptr_t Api__getMatchInfo_m2337796399 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void SkillzSDK.Api::AssignSyncDelegateFunctions()
extern "C" IL2CPP_METHOD_ATTR void Api_AssignSyncDelegateFunctions_m1182359800 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void SkillzSDK.UnmanagedArray::.ctor(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void UnmanagedArray__ctor_m1850023207 (UnmanagedArray_t473089838 * __this, ByteU5BU5D_t4116647657* ___data0, const RuntimeMethod* method);
// System.IntPtr SkillzSDK.UnmanagedArray::get_IntPtr()
extern "C" IL2CPP_METHOD_ATTR intptr_t UnmanagedArray_get_IntPtr_m2046982699 (UnmanagedArray_t473089838 * __this, const RuntimeMethod* method);
// System.UInt64 SkillzSDK.UnmanagedArray::get_Length()
extern "C" IL2CPP_METHOD_ATTR uint64_t UnmanagedArray_get_Length_m2351073396 (UnmanagedArray_t473089838 * __this, const RuntimeMethod* method);
// System.Void SkillzSDK.Api::_sendData(System.IntPtr,System.UInt64)
extern "C" IL2CPP_METHOD_ATTR void Api__sendData_m792227317 (RuntimeObject * __this /* static, unused */, intptr_t ___value0, uint64_t ___length1, const RuntimeMethod* method);
// System.Void SkillzSDK.UnmanagedArray::System.IDisposable.Dispose()
extern "C" IL2CPP_METHOD_ATTR void UnmanagedArray_System_IDisposable_Dispose_m3667934263 (UnmanagedArray_t473089838 * __this, const RuntimeMethod* method);
// System.Boolean SkillzSDK.Api::_isMatchCompleted()
extern "C" IL2CPP_METHOD_ATTR bool Api__isMatchCompleted_m3255659469 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 SkillzSDK.Api::_connectedPlayerCount()
extern "C" IL2CPP_METHOD_ATTR int32_t Api__connectedPlayerCount_m1353591401 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.UInt64 SkillzSDK.Api::_currentPlayerId()
extern "C" IL2CPP_METHOD_ATTR uint64_t Api__currentPlayerId_m3944569893 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.UInt64 SkillzSDK.Api::_currentOpponentPlayerId()
extern "C" IL2CPP_METHOD_ATTR uint64_t Api__currentOpponentPlayerId_m3146369036 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.UInt64 SkillzSDK.Api::_getServerTime()
extern "C" IL2CPP_METHOD_ATTR uint64_t Api__getServerTime_m3965035565 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 SkillzSDK.Api::_reconnectTimeLeftForPlayer(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR int32_t Api__reconnectTimeLeftForPlayer_m3248060915 (RuntimeObject * __this /* static, unused */, uint64_t ___playerId0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Marshal_Copy_m1222846562 (RuntimeObject * __this /* static, unused */, intptr_t p0, ByteU5BU5D_t4116647657* p1, int32_t p2, int32_t p3, const RuntimeMethod* method);
// System.Void SkillzSDK.Api/VoidFP::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void VoidFP__ctor_m95988028 (VoidFP_t530139871 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.Marshal::GetFunctionPointerForDelegate(System.Delegate)
extern "C" IL2CPP_METHOD_ATTR intptr_t Marshal_GetFunctionPointerForDelegate_m3926782411 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, const RuntimeMethod* method);
// System.Void SkillzSDK.Api::_assignOnMatchCompletedFunc(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Api__assignOnMatchCompletedFunc_m471762344 (RuntimeObject * __this /* static, unused */, intptr_t ___funcPtr0, const RuntimeMethod* method);
// System.Void SkillzSDK.Api/IntPtrIntFP::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void IntPtrIntFP__ctor_m919571878 (IntPtrIntFP_t2813787974 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void SkillzSDK.Api::_assignOnDidReceiveDataFunc(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Api__assignOnDidReceiveDataFunc_m1288969172 (RuntimeObject * __this /* static, unused */, intptr_t ___funcPtr0, const RuntimeMethod* method);
// System.Void SkillzSDK.Api/IntFP::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void IntFP__ctor_m3225314397 (IntFP_t1593217519 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void SkillzSDK.Api::_assignOnOpponentHasLostConnectionFunc(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Api__assignOnOpponentHasLostConnectionFunc_m3724441159 (RuntimeObject * __this /* static, unused */, intptr_t ___funcPtr0, const RuntimeMethod* method);
// System.Void SkillzSDK.Api::_assignOnOpponentHasReconnectedFunc(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Api__assignOnOpponentHasReconnectedFunc_m1605869870 (RuntimeObject * __this /* static, unused */, intptr_t ___funcPtr0, const RuntimeMethod* method);
// System.Void SkillzSDK.Api::_assignOnOpponentHasLeftMatchFunc(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Api__assignOnOpponentHasLeftMatchFunc_m3279437057 (RuntimeObject * __this /* static, unused */, intptr_t ___funcPtr0, const RuntimeMethod* method);
// System.Void SkillzSDK.Api::_assignOnCurrentPlayerHasLostConnectionFunc(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Api__assignOnCurrentPlayerHasLostConnectionFunc_m2707933677 (RuntimeObject * __this /* static, unused */, intptr_t ___funcPtr0, const RuntimeMethod* method);
// System.Void SkillzSDK.Api::_assignOnCurrentPlayerHasReconnectedFunc(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Api__assignOnCurrentPlayerHasReconnectedFunc_m2565823719 (RuntimeObject * __this /* static, unused */, intptr_t ___funcPtr0, const RuntimeMethod* method);
// System.Void SkillzSDK.Api::_assignOnCurrentPlayerHasLeftMatchFunc(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Api__assignOnCurrentPlayerHasLeftMatchFunc_m1300170528 (RuntimeObject * __this /* static, unused */, intptr_t ___funcPtr0, const RuntimeMethod* method);
// System.Void SkillzSDK.Api::_setSkillzBackgroundMusic(System.String)
extern "C" IL2CPP_METHOD_ATTR void Api__setSkillzBackgroundMusic_m3226946192 (RuntimeObject * __this /* static, unused */, String_t* ___filePath0, const RuntimeMethod* method);
// System.Single SkillzSDK.Api::_getSkillzMusicVolume()
extern "C" IL2CPP_METHOD_ATTR float Api__getSkillzMusicVolume_m3880318224 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void SkillzSDK.Api::_setSkillzMusicVolume(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Api__setSkillzMusicVolume_m20115881 (RuntimeObject * __this /* static, unused */, float ___volume0, const RuntimeMethod* method);
// System.Single SkillzSDK.Api::_getSFXVolume()
extern "C" IL2CPP_METHOD_ATTR float Api__getSFXVolume_m2909607583 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void SkillzSDK.Api::_setSFXVolume(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Api__setSFXVolume_m741456116 (RuntimeObject * __this /* static, unused */, float ___volume0, const RuntimeMethod* method);
// System.Void SkillzSDK.Api/IntFP::Invoke(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR void IntFP_Invoke_m1926321814 (IntFP_t1593217519 * __this, uint64_t ___playerId0, const RuntimeMethod* method);
// System.Void SkillzSDK.Api/IntPtrIntFP::Invoke(System.IntPtr,System.UInt64)
extern "C" IL2CPP_METHOD_ATTR void IntPtrIntFP_Invoke_m2182212509 (IntPtrIntFP_t2813787974 * __this, intptr_t ___value0, uint64_t ___length1, const RuntimeMethod* method);
// System.Void System.Attribute::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Attribute__ctor_m1529526131 (Attribute_t861562559 * __this, const RuntimeMethod* method);
// System.Single SkillzSDK.Api/Random::Value()
extern "C" IL2CPP_METHOD_ATTR float Random_Value_m3937663143 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Quaternion SkillzSDK.Api/Random::RotationUniform()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Random_RotationUniform_m2406981108 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void SkillzSDK.Api/VoidFP::Invoke()
extern "C" IL2CPP_METHOD_ATTR void VoidFP_Invoke_m1981215275 (VoidFP_t530139871 * __this, const RuntimeMethod* method);
// System.String SkillzSDK.Extensions.SkillzExtensions::SafeGetStringValue(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* SkillzExtensions_SafeGetStringValue_m3748395908 (RuntimeObject * __this /* static, unused */, Dictionary_2_t2865362463 * ___dict0, String_t* ___key1, const RuntimeMethod* method);
// System.Nullable`1<System.Boolean> SkillzSDK.Helpers::SafeBoolParse(System.String,System.String,System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR Nullable_1_t1819850047  Helpers_SafeBoolParse_m4269993608 (RuntimeObject * __this /* static, unused */, String_t* ___str0, String_t* ___trueStr1, String_t* ___falseStr2, String_t* ___trueInt3, String_t* ___falseInt4, const RuntimeMethod* method);
// System.Nullable`1<System.Double> SkillzSDK.Helpers::SafeDoubleParse(System.String)
extern "C" IL2CPP_METHOD_ATTR Nullable_1_t2317227445  Helpers_SafeDoubleParse_m3716186029 (RuntimeObject * __this /* static, unused */, String_t* ___str0, const RuntimeMethod* method);
// System.Nullable`1<System.Double> SkillzSDK.Extensions.SkillzExtensions::SafeGetDoubleValue(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
extern "C" IL2CPP_METHOD_ATTR Nullable_1_t2317227445  SkillzExtensions_SafeGetDoubleValue_m1033428401 (RuntimeObject * __this /* static, unused */, Dictionary_2_t2865362463 * ___dict0, String_t* ___key1, const RuntimeMethod* method);
// System.Nullable`1<System.DateTime> SkillzSDK.Helpers::SafeParseUnixTime(System.Nullable`1<System.Double>)
extern "C" IL2CPP_METHOD_ATTR Nullable_1_t1166124571  Helpers_SafeParseUnixTime_m1673506953 (RuntimeObject * __this /* static, unused */, Nullable_1_t2317227445  ___unixTime0, const RuntimeMethod* method);
// System.Nullable`1<System.Int32> SkillzSDK.Helpers::SafeIntParse(System.String)
extern "C" IL2CPP_METHOD_ATTR Nullable_1_t378540539  Helpers_SafeIntParse_m1084147332 (RuntimeObject * __this /* static, unused */, String_t* ___str0, const RuntimeMethod* method);
// System.Nullable`1<System.UInt32> SkillzSDK.Helpers::SafeUintParse(System.String)
extern "C" IL2CPP_METHOD_ATTR Nullable_1_t4282624060  Helpers_SafeUintParse_m2387950348 (RuntimeObject * __this /* static, unused */, String_t* ___str0, const RuntimeMethod* method);
// System.Object SkillzSDK.Extensions.SkillzExtensions::SafeGetValue(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * SkillzExtensions_SafeGetValue_m1149006436 (RuntimeObject * __this /* static, unused */, Dictionary_2_t2865362463 * ___dict0, String_t* ___key1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0)
#define Dictionary_2_ContainsKey_m1520683221(__this, p0, method) ((  bool (*) (Dictionary_2_t2865362463 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m2278349286_gshared)(__this, p0, method)
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0)
#define Dictionary_2_get_Item_m3179620279(__this, p0, method) ((  RuntimeObject * (*) (Dictionary_2_t2865362463 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m2714930061_gshared)(__this, p0, method)
// System.Void System.Nullable`1<System.Boolean>::.ctor(!0)
#define Nullable_1__ctor_m269558965(__this, p0, method) ((  void (*) (Nullable_1_t1819850047 *, bool, const RuntimeMethod*))Nullable_1__ctor_m269558965_gshared)(__this, p0, method)
// System.Boolean System.Nullable`1<System.Double>::get_HasValue()
#define Nullable_1_get_HasValue_m1700900799(__this, method) ((  bool (*) (Nullable_1_t2317227445 *, const RuntimeMethod*))Nullable_1_get_HasValue_m1700900799_gshared)(__this, method)
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.DateTimeKind)
extern "C" IL2CPP_METHOD_ATTR void DateTime__ctor_m2956360140 (DateTime_t3738529785 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, int32_t p4, int32_t p5, int32_t p6, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Double>::get_Value()
#define Nullable_1_get_Value_m3507161817(__this, method) ((  double (*) (Nullable_1_t2317227445 *, const RuntimeMethod*))Nullable_1_get_Value_m3507161817_gshared)(__this, method)
// System.DateTime System.DateTime::AddSeconds(System.Double)
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  DateTime_AddSeconds_m332574389 (DateTime_t3738529785 * __this, double p0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.DateTime>::.ctor(!0)
#define Nullable_1__ctor_m3556066642(__this, p0, method) ((  void (*) (Nullable_1_t1166124571 *, DateTime_t3738529785 , const RuntimeMethod*))Nullable_1__ctor_m3556066642_gshared)(__this, p0, method)
// System.Boolean System.Double::TryParse(System.String,System.Double&)
extern "C" IL2CPP_METHOD_ATTR bool Double_TryParse_m3021978240 (RuntimeObject * __this /* static, unused */, String_t* p0, double* p1, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Double>::.ctor(!0)
#define Nullable_1__ctor_m1383724426(__this, p0, method) ((  void (*) (Nullable_1_t2317227445 *, double, const RuntimeMethod*))Nullable_1__ctor_m1383724426_gshared)(__this, p0, method)
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR bool Int32_TryParse_m2404707562 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t* p1, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
#define Nullable_1__ctor_m3556133687(__this, p0, method) ((  void (*) (Nullable_1_t378540539 *, int32_t, const RuntimeMethod*))Nullable_1__ctor_m3556133687_gshared)(__this, p0, method)
// System.Boolean System.UInt32::TryParse(System.String,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR bool UInt32_TryParse_m2819179361 (RuntimeObject * __this /* static, unused */, String_t* p0, uint32_t* p1, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.UInt32>::.ctor(!0)
#define Nullable_1__ctor_m2245710918(__this, p0, method) ((  void (*) (Nullable_1_t4282624060 *, uint32_t, const RuntimeMethod*))Nullable_1__ctor_m2245710918_gshared)(__this, p0, method)
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Single>::.ctor(!0)
#define Nullable_1__ctor_m2775392932(__this, p0, method) ((  void (*) (Nullable_1_t3119828856 *, float, const RuntimeMethod*))Nullable_1__ctor_m2775392932_gshared)(__this, p0, method)
// System.Nullable`1<System.Int32> SkillzSDK.Extensions.SkillzExtensions::SafeGetIntValue(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
extern "C" IL2CPP_METHOD_ATTR Nullable_1_t378540539  SkillzExtensions_SafeGetIntValue_m2048183163 (RuntimeObject * __this /* static, unused */, Dictionary_2_t2865362463 * ___dict0, String_t* ___key1, const RuntimeMethod* method);
// System.Nullable`1<System.Boolean> SkillzSDK.Extensions.SkillzExtensions::SafeGetBoolValue(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
extern "C" IL2CPP_METHOD_ATTR Nullable_1_t1819850047  SkillzExtensions_SafeGetBoolValue_m2039874569 (RuntimeObject * __this /* static, unused */, Dictionary_2_t2865362463 * ___dict0, String_t* ___key1, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Boolean>::get_Value()
#define Nullable_1_get_Value_m1177098500(__this, method) ((  bool (*) (Nullable_1_t1819850047 *, const RuntimeMethod*))Nullable_1_get_Value_m1177098500_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<SkillzSDK.Player>::.ctor()
#define List_1__ctor_m4000051712(__this, method) ((  void (*) (List_1_t138764442 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
#define List_1_GetEnumerator_m2930774921(__this, method) ((  Enumerator_t2146457487  (*) (List_1_t257213610 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
#define Enumerator_get_Current_m470245444(__this, method) ((  RuntimeObject * (*) (Enumerator_t2146457487 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<SkillzSDK.Player>::Add(!0)
#define List_1_Add_m2966409634(__this, p0, method) ((  void (*) (List_1_t138764442 *, Player_t2961656996 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
#define Enumerator_MoveNext_m2142368520(__this, method) ((  bool (*) (Enumerator_t2146457487 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
#define Enumerator_Dispose_m3007748546(__this, method) ((  void (*) (Enumerator_t2146457487 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
#define Dictionary_2__ctor_m4291560139(__this, method) ((  void (*) (Dictionary_2_t1632706988 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Type System.Object::GetType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Object_GetType_m88164663 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method);
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
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m1809518182 (RuntimeObject * __this /* static, unused */, StringU5BU5D_t1281789340* p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::MoveNext()
#define Enumerator_MoveNext_m1175750522(__this, method) ((  bool (*) (Enumerator_t3586889763 *, const RuntimeMethod*))Enumerator_MoveNext_m1107569389_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::Dispose()
#define Enumerator_Dispose_m2198401511(__this, method) ((  void (*) (Enumerator_t3586889763 *, const RuntimeMethod*))Enumerator_Dispose_m3885012575_gshared)(__this, method)
// System.String System.String::Concat(System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m2971454694 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method);
// System.Object System.Collections.DictionaryEntry::get_Key()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * DictionaryEntry_get_Key_m3117378551 (DictionaryEntry_t3123975638 * __this, const RuntimeMethod* method);
// System.Object System.Collections.DictionaryEntry::get_Value()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * DictionaryEntry_get_Value_m618120527 (DictionaryEntry_t3123975638 * __this, const RuntimeMethod* method);
// System.Object SkillzSDK.MiniJSON.Json/Parser::Parse(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Parser_Parse_m579644997 (RuntimeObject * __this /* static, unused */, String_t* ___jsonString0, const RuntimeMethod* method);
// System.String SkillzSDK.MiniJSON.Json/Serializer::Serialize(System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* Serializer_Serialize_m3997990965 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.IO.StringReader::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void StringReader__ctor_m126993932 (StringReader_t3465604688 * __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean System.Char::IsWhiteSpace(System.Char)
extern "C" IL2CPP_METHOD_ATTR bool Char_IsWhiteSpace_m2148390798 (RuntimeObject * __this /* static, unused */, Il2CppChar p0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char)
extern "C" IL2CPP_METHOD_ATTR int32_t String_IndexOf_m363431711 (String_t* __this, Il2CppChar p0, const RuntimeMethod* method);
// System.Void SkillzSDK.MiniJSON.Json/Parser::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Parser__ctor_m2872727206 (Parser_t744090300 * __this, String_t* ___jsonString0, const RuntimeMethod* method);
// System.Object SkillzSDK.MiniJSON.Json/Parser::ParseValue()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseValue_m3476452396 (Parser_t744090300 * __this, const RuntimeMethod* method);
// System.Void System.IO.TextReader::Dispose()
extern "C" IL2CPP_METHOD_ATTR void TextReader_Dispose_m4253712522 (TextReader_t283511965 * __this, const RuntimeMethod* method);
// SkillzSDK.MiniJSON.Json/Parser/TOKEN SkillzSDK.MiniJSON.Json/Parser::get_NextToken()
extern "C" IL2CPP_METHOD_ATTR int32_t Parser_get_NextToken_m3456563509 (Parser_t744090300 * __this, const RuntimeMethod* method);
// System.String SkillzSDK.MiniJSON.Json/Parser::ParseString()
extern "C" IL2CPP_METHOD_ATTR String_t* Parser_ParseString_m2447585359 (Parser_t744090300 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1)
#define Dictionary_2_set_Item_m2329160973(__this, p0, p1, method) ((  void (*) (Dictionary_2_t2865362463 *, String_t*, RuntimeObject *, const RuntimeMethod*))Dictionary_2_set_Item_m3474379962_gshared)(__this, p0, p1, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
#define List_1__ctor_m2321703786(__this, method) ((  void (*) (List_1_t257213610 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Object SkillzSDK.MiniJSON.Json/Parser::ParseByToken(SkillzSDK.MiniJSON.Json/Parser/TOKEN)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseByToken_m3089833922 (Parser_t744090300 * __this, int32_t ___token0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
#define List_1_Add_m3338814081(__this, p0, method) ((  void (*) (List_1_t257213610 *, RuntimeObject *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Object SkillzSDK.MiniJSON.Json/Parser::ParseNumber()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseNumber_m2559473348 (Parser_t744090300 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.Object> SkillzSDK.MiniJSON.Json/Parser::ParseObject()
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t2865362463 * Parser_ParseObject_m2337980612 (Parser_t744090300 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<System.Object> SkillzSDK.MiniJSON.Json/Parser::ParseArray()
extern "C" IL2CPP_METHOD_ATTR List_1_t257213610 * Parser_ParseArray_m452367317 (Parser_t744090300 * __this, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
extern "C" IL2CPP_METHOD_ATTR void StringBuilder__ctor_m3121283359 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Char SkillzSDK.MiniJSON.Json/Parser::get_NextChar()
extern "C" IL2CPP_METHOD_ATTR Il2CppChar Parser_get_NextChar_m3195442849 (Parser_t744090300 * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m2383614642 (StringBuilder_t * __this, Il2CppChar p0, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_CreateString_m2818852475 (String_t* __this, CharU5BU5D_t3528271667* ___val0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m391894676 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t p1, const RuntimeMethod* method);
// System.String SkillzSDK.MiniJSON.Json/Parser::get_NextWord()
extern "C" IL2CPP_METHOD_ATTR String_t* Parser_get_NextWord_m2019659234 (Parser_t744090300 * __this, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
extern "C" IL2CPP_METHOD_ATTR CultureInfo_t4157843068 * CultureInfo_get_InvariantCulture_m3532445182 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean System.Int64::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Int64&)
extern "C" IL2CPP_METHOD_ATTR bool Int64_TryParse_m3606398488 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t p1, RuntimeObject* p2, int64_t* p3, const RuntimeMethod* method);
// System.Boolean System.Double::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Double&)
extern "C" IL2CPP_METHOD_ATTR bool Double_TryParse_m623190659 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t p1, RuntimeObject* p2, double* p3, const RuntimeMethod* method);
// System.Char SkillzSDK.MiniJSON.Json/Parser::get_PeekChar()
extern "C" IL2CPP_METHOD_ATTR Il2CppChar Parser_get_PeekChar_m1352524934 (Parser_t744090300 * __this, const RuntimeMethod* method);
// System.Char System.Convert::ToChar(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar Convert_ToChar_m4189066566 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Boolean SkillzSDK.MiniJSON.Json/Parser::IsWordBreak(System.Char)
extern "C" IL2CPP_METHOD_ATTR bool Parser_IsWordBreak_m502866020 (RuntimeObject * __this /* static, unused */, Il2CppChar ___c0, const RuntimeMethod* method);
// System.Void SkillzSDK.MiniJSON.Json/Parser::EatWhitespace()
extern "C" IL2CPP_METHOD_ATTR void Parser_EatWhitespace_m1572341284 (Parser_t744090300 * __this, const RuntimeMethod* method);
// System.Void SkillzSDK.MiniJSON.Json/Serializer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Serializer__ctor_m3762600030 (Serializer_t2308540583 * __this, const RuntimeMethod* method);
// System.Void SkillzSDK.MiniJSON.Json/Serializer::SerializeValue(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Serializer_SerializeValue_m686405948 (Serializer_t2308540583 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1965104174 (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Void SkillzSDK.MiniJSON.Json/Serializer::SerializeString(System.String)
extern "C" IL2CPP_METHOD_ATTR void Serializer_SerializeString_m4252171944 (Serializer_t2308540583 * __this, String_t* ___str0, const RuntimeMethod* method);
// System.Void SkillzSDK.MiniJSON.Json/Serializer::SerializeArray(System.Collections.IList)
extern "C" IL2CPP_METHOD_ATTR void Serializer_SerializeArray_m1201005993 (Serializer_t2308540583 * __this, RuntimeObject* ___anArray0, const RuntimeMethod* method);
// System.Void SkillzSDK.MiniJSON.Json/Serializer::SerializeObject(System.Collections.IDictionary)
extern "C" IL2CPP_METHOD_ATTR void Serializer_SerializeObject_m3682694325 (Serializer_t2308540583 * __this, RuntimeObject* ___obj0, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_CreateString_m1262864254 (String_t* __this, Il2CppChar ___c0, int32_t ___count1, const RuntimeMethod* method);
// System.Void SkillzSDK.MiniJSON.Json/Serializer::SerializeOther(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Serializer_SerializeOther_m1045354682 (Serializer_t2308540583 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Char[] System.String::ToCharArray()
extern "C" IL2CPP_METHOD_ATTR CharU5BU5D_t3528271667* String_ToCharArray_m1492846834 (String_t* __this, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.Char)
extern "C" IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m1876369743 (RuntimeObject * __this /* static, unused */, Il2CppChar p0, const RuntimeMethod* method);
// System.String System.Int32::ToString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Int32_ToString_m372259452 (int32_t* __this, String_t* p0, const RuntimeMethod* method);
// System.String System.Single::ToString(System.String,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* Single_ToString_m543431371 (float* __this, String_t* p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1640838743 (StringBuilder_t * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Double System.Convert::ToDouble(System.Object)
extern "C" IL2CPP_METHOD_ATTR double Convert_ToDouble_m4025515304 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.String System.Double::ToString(System.String,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* Double_ToString_m1051753975 (double* __this, String_t* p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.Nullable`1<System.UInt32> SkillzSDK.Extensions.SkillzExtensions::SafeGetUintValue(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
extern "C" IL2CPP_METHOD_ATTR Nullable_1_t4282624060  SkillzExtensions_SafeGetUintValue_m475157154 (RuntimeObject * __this /* static, unused */, Dictionary_2_t2865362463 * ___dict0, String_t* ___key1, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.UInt32>::get_HasValue()
#define Nullable_1_get_HasValue_m1763782828(__this, method) ((  bool (*) (Nullable_1_t4282624060 *, const RuntimeMethod*))Nullable_1_get_HasValue_m1763782828_gshared)(__this, method)
// !0 System.Nullable`1<System.UInt32>::get_Value()
#define Nullable_1_get_Value_m1994738269(__this, method) ((  uint32_t (*) (Nullable_1_t4282624060 *, const RuntimeMethod*))Nullable_1_get_Value_m1994738269_gshared)(__this, method)
// System.Void System.Nullable`1<System.UInt64>::.ctor(!0)
#define Nullable_1__ctor_m3249847592(__this, p0, method) ((  void (*) (Nullable_1_t1561634878 *, uint64_t, const RuntimeMethod*))Nullable_1__ctor_m3249847592_gshared)(__this, p0, method)
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t Marshal_SizeOf_m973108693 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.Int32)
extern "C" IL2CPP_METHOD_ATTR intptr_t Marshal_AllocHGlobal_m491131085 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.Byte[],System.Int32,System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Marshal_Copy_m1562111546 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* p0, int32_t p1, intptr_t p2, int32_t p3, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::FreeHGlobal(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Marshal_FreeHGlobal_m1757369653 (RuntimeObject * __this /* static, unused */, intptr_t p0, const RuntimeMethod* method);
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
extern "C" IL2CPP_METHOD_ATTR void GameSceneManager__ctor_m568675883 (GameSceneManager_t2999297734 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameSceneManager::Update()
extern "C" IL2CPP_METHOD_ATTR void GameSceneManager_Update_m3694737365 (GameSceneManager_t2999297734 * __this, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR void GameSceneManager_OnApplicationPause_m2616752940 (GameSceneManager_t2999297734 * __this, bool ___isPaused0, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR String_t* GameSceneManager_GetPrevScene_m2997470641 (GameSceneManager_t2999297734 * __this, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR void GameSceneManager_SetPrevScene_m3694103869 (RuntimeObject * __this /* static, unused */, String_t* ___scene0, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR void GameSceneManager__cctor_m4189588096 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR void Skillz_Launch_m3673327423 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR bool Skillz_IsMatchInProgress_m3063185030 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR Hashtable_t1853889766 * Skillz_GetMatchRules_m2415021141 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
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
// SkillzSDK.Match Skillz::GetMatchInfo()
extern "C" IL2CPP_METHOD_ATTR Match_t1925635937 * Skillz_GetMatchInfo_m351177124 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Skillz_GetMatchInfo_m351177124_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Dictionary_2_t2865362463 * V_1 = NULL;
	{
		Match_t1925635937 * L_0 = ((Skillz_t1424191382_StaticFields*)il2cpp_codegen_static_fields_for(Skillz_t1424191382_il2cpp_TypeInfo_var))->get__matchInfo_1();
		if (L_0)
		{
			goto IL_003a;
		}
	}
	{
		AndroidJavaClass_t32045322 * L_1 = Skillz_GetSkillz_m1754260856(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_2 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		AndroidJavaObject_t4131667876 * L_3 = Skillz_GetCurrentActivity_m1705205339(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_1);
		String_t* L_4 = AndroidJavaObject_CallStatic_TisString_t_m3599693027(L_1, _stringLiteral3120542996, L_2, /*hidden argument*/AndroidJavaObject_CallStatic_TisString_t_m3599693027_RuntimeMethod_var);
		V_0 = L_4;
		String_t* L_5 = V_0;
		Dictionary_2_t2865362463 * L_6 = Skillz_DeserializeJSONToDictionary_m2136858648(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		Dictionary_2_t2865362463 * L_7 = V_1;
		Match_t1925635937 * L_8 = (Match_t1925635937 *)il2cpp_codegen_object_new(Match_t1925635937_il2cpp_TypeInfo_var);
		Match__ctor_m3021370963(L_8, L_7, /*hidden argument*/NULL);
		((Skillz_t1424191382_StaticFields*)il2cpp_codegen_static_fields_for(Skillz_t1424191382_il2cpp_TypeInfo_var))->set__matchInfo_1(L_8);
	}

IL_003a:
	{
		Match_t1925635937 * L_9 = ((Skillz_t1424191382_StaticFields*)il2cpp_codegen_static_fields_for(Skillz_t1424191382_il2cpp_TypeInfo_var))->get__matchInfo_1();
		return L_9;
	}
}
// System.Void Skillz::AbortMatch()
extern "C" IL2CPP_METHOD_ATTR void Skillz_AbortMatch_m566335097 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
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
		((Skillz_t1424191382_StaticFields*)il2cpp_codegen_static_fields_for(Skillz_t1424191382_il2cpp_TypeInfo_var))->set__matchInfo_1((Match_t1925635937 *)NULL);
		return;
	}
}
// System.Void Skillz::UpdatePlayersCurrentScore(System.String)
extern "C" IL2CPP_METHOD_ATTR void Skillz_UpdatePlayersCurrentScore_m257371438 (RuntimeObject * __this /* static, unused */, String_t* ___score0, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR void Skillz_UpdatePlayersCurrentScore_m3743257856 (RuntimeObject * __this /* static, unused */, int32_t ___score0, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR void Skillz_UpdatePlayersCurrentScore_m2959754337 (RuntimeObject * __this /* static, unused */, float ___score0, const RuntimeMethod* method)
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
		String_t* L_1 = Single_ToString_m3947131094((&___score0), /*hidden argument*/NULL);
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
extern "C" IL2CPP_METHOD_ATTR void Skillz_ReportScore_m3895707234 (RuntimeObject * __this /* static, unused */, String_t* ___score0, const RuntimeMethod* method)
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
		((Skillz_t1424191382_StaticFields*)il2cpp_codegen_static_fields_for(Skillz_t1424191382_il2cpp_TypeInfo_var))->set__matchInfo_1((Match_t1925635937 *)NULL);
		return;
	}
}
// System.Void Skillz::ReportScore(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Skillz_ReportScore_m2273239404 (RuntimeObject * __this /* static, unused */, int32_t ___score0, const RuntimeMethod* method)
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
		((Skillz_t1424191382_StaticFields*)il2cpp_codegen_static_fields_for(Skillz_t1424191382_il2cpp_TypeInfo_var))->set__matchInfo_1((Match_t1925635937 *)NULL);
		return;
	}
}
// System.Void Skillz::ReportScore(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Skillz_ReportScore_m1217323751 (RuntimeObject * __this /* static, unused */, float ___score0, const RuntimeMethod* method)
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
		String_t* L_1 = Single_ToString_m3947131094((&___score0), /*hidden argument*/NULL);
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
		((Skillz_t1424191382_StaticFields*)il2cpp_codegen_static_fields_for(Skillz_t1424191382_il2cpp_TypeInfo_var))->set__matchInfo_1((Match_t1925635937 *)NULL);
		return;
	}
}
// System.Void Skillz::AddMetadataForMatchInProgress(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Skillz_AddMetadataForMatchInProgress_m2758983296 (RuntimeObject * __this /* static, unused */, String_t* ___metadataJson0, bool ___isMatchInProgress1, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR String_t* Skillz_SDKVersionShort_m1202112188 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR String_t* Skillz_CurrentUserDisplayName_m1258831207 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
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
// System.Void Skillz::setSkillzBackgroundMusic(System.String)
extern "C" IL2CPP_METHOD_ATTR void Skillz_setSkillzBackgroundMusic_m2288222941 (RuntimeObject * __this /* static, unused */, String_t* ___fileName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Skillz_setSkillzBackgroundMusic_m2288222941_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___fileName0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2071914064, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		AndroidJavaClass_t32045322 * L_2 = Skillz_GetSkillzAudio_m4066960576(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_3 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		String_t* L_4 = ___fileName0;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		NullCheck(L_2);
		AndroidJavaObject_CallStatic_m2922144688(L_2, _stringLiteral1231028711, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Single Skillz::getSkillzMusicVolume()
extern "C" IL2CPP_METHOD_ATTR float Skillz_getSkillzMusicVolume_m743705644 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Skillz_getSkillzMusicVolume_m743705644_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		AndroidJavaClass_t32045322 * L_0 = Skillz_GetSkillzAudio_m4066960576(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		float L_1 = AndroidJavaObject_CallStatic_TisSingle_t1397266774_m2173456096(L_0, _stringLiteral2069817105, ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/AndroidJavaObject_CallStatic_TisSingle_t1397266774_m2173456096_RuntimeMethod_var);
		V_0 = L_1;
		float L_2 = V_0;
		float L_3 = L_2;
		RuntimeObject * L_4 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral2675847904, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		float L_6 = V_0;
		return L_6;
	}
}
// System.Void Skillz::setSkillzMusicVolume(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Skillz_setSkillzMusicVolume_m3180222924 (RuntimeObject * __this /* static, unused */, float ___volume0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Skillz_setSkillzMusicVolume_m3180222924_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___volume0;
		float L_1 = L_0;
		RuntimeObject * L_2 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral460057046, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		AndroidJavaClass_t32045322 * L_4 = Skillz_GetSkillzAudio_m4066960576(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_5 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		float L_6 = ___volume0;
		float L_7 = L_6;
		RuntimeObject * L_8 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		NullCheck(L_4);
		AndroidJavaObject_CallStatic_m2922144688(L_4, _stringLiteral1956176189, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Single Skillz::getSFXVolume()
extern "C" IL2CPP_METHOD_ATTR float Skillz_getSFXVolume_m3592534853 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Skillz_getSFXVolume_m3592534853_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		AndroidJavaClass_t32045322 * L_0 = Skillz_GetSkillzAudio_m4066960576(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		float L_1 = AndroidJavaObject_CallStatic_TisSingle_t1397266774_m2173456096(L_0, _stringLiteral3068111761, ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/AndroidJavaObject_CallStatic_TisSingle_t1397266774_m2173456096_RuntimeMethod_var);
		V_0 = L_1;
		float L_2 = V_0;
		float L_3 = L_2;
		RuntimeObject * L_4 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral3162833584, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		float L_6 = V_0;
		return L_6;
	}
}
// System.Void Skillz::setSFXVolume(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Skillz_setSFXVolume_m3264333098 (RuntimeObject * __this /* static, unused */, float ___volume0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Skillz_setSFXVolume_m3264333098_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___volume0;
		float L_1 = L_0;
		RuntimeObject * L_2 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral470776398, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		AndroidJavaClass_t32045322 * L_4 = Skillz_GetSkillzAudio_m4066960576(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_5 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		float L_6 = ___volume0;
		float L_7 = L_6;
		RuntimeObject * L_8 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		NullCheck(L_4);
		AndroidJavaObject_CallStatic_m2922144688(L_4, _stringLiteral3068129781, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Skillz::SendData(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void Skillz_SendData_m3159625681 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Skillz_SendData_m3159625681_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	intptr_t V_1;
	memset(&V_1, 0, sizeof(V_1));
	ObjectU5BU5D_t2843939325* V_2 = NULL;
	jvalueU5BU5D_t578373866* V_3 = NULL;
	{
		intptr_t L_0 = AndroidJNI_FindClass_m1172671139(NULL /*static, unused*/, _stringLiteral1630648035, /*hidden argument*/NULL);
		V_0 = L_0;
		intptr_t L_1 = V_0;
		intptr_t L_2 = AndroidJNI_GetStaticMethodID_m3888866449(NULL /*static, unused*/, L_1, _stringLiteral3345609349, _stringLiteral1264353676, /*hidden argument*/NULL);
		V_1 = L_2;
		V_2 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		ObjectU5BU5D_t2843939325* L_3 = V_2;
		ByteU5BU5D_t4116647657* L_4 = ___data0;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_t2843939325* L_5 = V_2;
		jvalueU5BU5D_t578373866* L_6 = AndroidJNIHelper_CreateJNIArgArray_m3056127197(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		V_3 = L_6;
		intptr_t L_7 = V_0;
		intptr_t L_8 = V_1;
		jvalueU5BU5D_t578373866* L_9 = V_3;
		AndroidJNI_CallStaticVoidMethod_m586868889(NULL /*static, unused*/, L_7, L_8, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Skillz::IsMatchCompleted()
extern "C" IL2CPP_METHOD_ATTR bool Skillz_IsMatchCompleted_m1442108200 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Skillz_IsMatchCompleted_m1442108200_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		AndroidJavaClass_t32045322 * L_0 = Skillz_GetSkillzSync_m102960867(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = AndroidJavaObject_CallStatic_TisBoolean_t97287965_m4111307719(L_0, _stringLiteral1235229777, ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/AndroidJavaObject_CallStatic_TisBoolean_t97287965_m4111307719_RuntimeMethod_var);
		V_0 = L_1;
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Skillz::GetConnectedPlayerCount()
extern "C" IL2CPP_METHOD_ATTR int32_t Skillz_GetConnectedPlayerCount_m2460278925 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Skillz_GetConnectedPlayerCount_m2460278925_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		AndroidJavaClass_t32045322 * L_0 = Skillz_GetSkillzSync_m102960867(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = AndroidJavaObject_CallStatic_TisInt32_t2950945753_m1426675528(L_0, _stringLiteral3986384634, ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/AndroidJavaObject_CallStatic_TisInt32_t2950945753_m1426675528_RuntimeMethod_var);
		V_0 = L_1;
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.UInt64 Skillz::GetCurrentPlayerId()
extern "C" IL2CPP_METHOD_ATTR uint64_t Skillz_GetCurrentPlayerId_m2424405514 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Skillz_GetCurrentPlayerId_m2424405514_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	{
		AndroidJavaClass_t32045322 * L_0 = Skillz_GetSkillzSync_m102960867(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int64_t L_1 = AndroidJavaObject_CallStatic_TisInt64_t3736567304_m1757219269(L_0, _stringLiteral1802116773, ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/AndroidJavaObject_CallStatic_TisInt64_t3736567304_m1757219269_RuntimeMethod_var);
		V_0 = L_1;
		uint64_t L_2 = V_0;
		return L_2;
	}
}
// System.UInt64 Skillz::GetCurrentOpponentPlayerId()
extern "C" IL2CPP_METHOD_ATTR uint64_t Skillz_GetCurrentOpponentPlayerId_m2381905733 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Skillz_GetCurrentOpponentPlayerId_m2381905733_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	{
		AndroidJavaClass_t32045322 * L_0 = Skillz_GetSkillzSync_m102960867(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int64_t L_1 = AndroidJavaObject_CallStatic_TisInt64_t3736567304_m1757219269(L_0, _stringLiteral3807698887, ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/AndroidJavaObject_CallStatic_TisInt64_t3736567304_m1757219269_RuntimeMethod_var);
		V_0 = L_1;
		uint64_t L_2 = V_0;
		return L_2;
	}
}
// System.Double Skillz::GetServerTime()
extern "C" IL2CPP_METHOD_ATTR double Skillz_GetServerTime_m3202136002 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Skillz_GetServerTime_m3202136002_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		AndroidJavaClass_t32045322 * L_0 = Skillz_GetSkillzSync_m102960867(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		double L_1 = AndroidJavaObject_CallStatic_TisDouble_t594665363_m3845568371(L_0, _stringLiteral2560603216, ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/AndroidJavaObject_CallStatic_TisDouble_t594665363_m3845568371_RuntimeMethod_var);
		V_0 = L_1;
		double L_2 = V_0;
		return L_2;
	}
}
// System.Int64 Skillz::GetTimeLeftForReconnection(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR int64_t Skillz_GetTimeLeftForReconnection_m1331472929 (RuntimeObject * __this /* static, unused */, uint64_t ___playerId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Skillz_GetTimeLeftForReconnection_m1331472929_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	intptr_t V_1;
	memset(&V_1, 0, sizeof(V_1));
	ObjectU5BU5D_t2843939325* V_2 = NULL;
	jvalueU5BU5D_t578373866* V_3 = NULL;
	int64_t V_4 = 0;
	{
		intptr_t L_0 = AndroidJNI_FindClass_m1172671139(NULL /*static, unused*/, _stringLiteral1630648035, /*hidden argument*/NULL);
		V_0 = L_0;
		intptr_t L_1 = V_0;
		intptr_t L_2 = AndroidJNI_GetStaticMethodID_m3888866449(NULL /*static, unused*/, L_1, _stringLiteral2814291660, _stringLiteral2367320213, /*hidden argument*/NULL);
		V_1 = L_2;
		V_2 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		ObjectU5BU5D_t2843939325* L_3 = V_2;
		uint64_t L_4 = ___playerId0;
		int64_t L_5 = ((int64_t)L_4);
		RuntimeObject * L_6 = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_6);
		ObjectU5BU5D_t2843939325* L_7 = V_2;
		jvalueU5BU5D_t578373866* L_8 = AndroidJNIHelper_CreateJNIArgArray_m3056127197(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		intptr_t L_9 = V_0;
		intptr_t L_10 = V_1;
		jvalueU5BU5D_t578373866* L_11 = V_3;
		int64_t L_12 = AndroidJNI_CallStaticLongMethod_m1210090420(NULL /*static, unused*/, L_9, L_10, L_11, /*hidden argument*/NULL);
		V_4 = L_12;
		int64_t L_13 = V_4;
		return L_13;
	}
}
// System.Void Skillz::InitializeSyncDelegate(SkillzSyncDelegate)
extern "C" IL2CPP_METHOD_ATTR void Skillz_InitializeSyncDelegate_m2992133130 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___messageHandler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Skillz_InitializeSyncDelegate_m2992133130_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SkillzSyncProxy_t2138768546 * V_0 = NULL;
	{
		SkillzSyncProxy_t2138768546 * L_0 = (SkillzSyncProxy_t2138768546 *)il2cpp_codegen_object_new(SkillzSyncProxy_t2138768546_il2cpp_TypeInfo_var);
		SkillzSyncProxy__ctor_m354518947(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		SkillzSyncProxy_t2138768546 * L_1 = V_0;
		Skillz_registerSyncDelegate_m929502207(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		RuntimeObject* L_2 = ___messageHandler0;
		((Skillz_t1424191382_StaticFields*)il2cpp_codegen_static_fields_for(Skillz_t1424191382_il2cpp_TypeInfo_var))->set__syncMessageHandler_0(L_2);
		return;
	}
}
// System.Void Skillz::registerSyncDelegate(Skillz/SkillzSyncProxy)
extern "C" IL2CPP_METHOD_ATTR void Skillz_registerSyncDelegate_m929502207 (RuntimeObject * __this /* static, unused */, SkillzSyncProxy_t2138768546 * ___skillzSyncDelegate0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Skillz_registerSyncDelegate_m929502207_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AndroidJavaClass_t32045322 * L_0 = Skillz_GetSkillzSync_m102960867(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_1 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2));
		SkillzSyncProxy_t2138768546 * L_2 = ___skillzSyncDelegate0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t2843939325* L_3 = L_1;
		AndroidJavaObject_t4131667876 * L_4 = Skillz_GetCurrentActivity_m1705205339(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_4);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m2922144688(L_0, _stringLiteral314030647, L_3, /*hidden argument*/NULL);
		return;
	}
}
// SkillzSDK.Player Skillz::GetPlayer()
extern "C" IL2CPP_METHOD_ATTR Player_t2961656996 * Skillz_GetPlayer_m263335444 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Skillz_GetPlayer_m263335444_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t4131667876 * V_0 = NULL;
	Dictionary_2_t2865362463 * V_1 = NULL;
	bool V_2 = false;
	Player_t2961656996 * V_3 = NULL;
	{
		AndroidJavaClass_t32045322 * L_0 = Skillz_GetSkillz_m1754260856(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_1 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		AndroidJavaObject_t4131667876 * L_2 = Skillz_GetCurrentActivity_m1705205339(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		NullCheck(L_0);
		AndroidJavaObject_t4131667876 * L_3 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t4131667876_m2031442458(L_0, _stringLiteral4280219408, L_1, /*hidden argument*/AndroidJavaObject_CallStatic_TisAndroidJavaObject_t4131667876_m2031442458_RuntimeMethod_var);
		V_0 = L_3;
		Dictionary_2_t2865362463 * L_4 = (Dictionary_2_t2865362463 *)il2cpp_codegen_object_new(Dictionary_2_t2865362463_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3962145734(L_4, /*hidden argument*/Dictionary_2__ctor_m3962145734_RuntimeMethod_var);
		V_1 = L_4;
		Dictionary_2_t2865362463 * L_5 = V_1;
		AndroidJavaObject_t4131667876 * L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = AndroidJavaObject_Call_TisString_t_m1899832687(L_6, _stringLiteral747066607, ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/AndroidJavaObject_Call_TisString_t_m1899832687_RuntimeMethod_var);
		NullCheck(L_5);
		Dictionary_2_Add_m825500632(L_5, _stringLiteral2262471439, L_7, /*hidden argument*/Dictionary_2_Add_m825500632_RuntimeMethod_var);
		Dictionary_2_t2865362463 * L_8 = V_1;
		AndroidJavaObject_t4131667876 * L_9 = V_0;
		NullCheck(L_9);
		String_t* L_10 = AndroidJavaObject_Call_TisString_t_m1899832687(L_9, _stringLiteral3984581373, ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/AndroidJavaObject_Call_TisString_t_m1899832687_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		uint32_t L_11 = Convert_ToUInt32_m4185155480(NULL /*static, unused*/, L_10, ((int32_t)10), /*hidden argument*/NULL);
		uint32_t L_12 = L_11;
		RuntimeObject * L_13 = Box(UInt32_t2560061978_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_8);
		Dictionary_2_Add_m825500632(L_8, _stringLiteral734034891, L_13, /*hidden argument*/Dictionary_2_Add_m825500632_RuntimeMethod_var);
		Dictionary_2_t2865362463 * L_14 = V_1;
		AndroidJavaObject_t4131667876 * L_15 = V_0;
		NullCheck(L_15);
		String_t* L_16 = AndroidJavaObject_Call_TisString_t_m1899832687(L_15, _stringLiteral3398431868, ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/AndroidJavaObject_Call_TisString_t_m1899832687_RuntimeMethod_var);
		NullCheck(L_14);
		Dictionary_2_Add_m825500632(L_14, _stringLiteral754182868, L_16, /*hidden argument*/Dictionary_2_Add_m825500632_RuntimeMethod_var);
		Dictionary_2_t2865362463 * L_17 = V_1;
		AndroidJavaObject_t4131667876 * L_18 = V_0;
		NullCheck(L_18);
		String_t* L_19 = AndroidJavaObject_Call_TisString_t_m1899832687(L_18, _stringLiteral1396822555, ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/AndroidJavaObject_Call_TisString_t_m1899832687_RuntimeMethod_var);
		NullCheck(L_17);
		Dictionary_2_Add_m825500632(L_17, _stringLiteral1668385234, L_19, /*hidden argument*/Dictionary_2_Add_m825500632_RuntimeMethod_var);
		Dictionary_2_t2865362463 * L_20 = V_1;
		AndroidJavaObject_t4131667876 * L_21 = V_0;
		NullCheck(L_21);
		String_t* L_22 = AndroidJavaObject_Call_TisString_t_m1899832687(L_21, _stringLiteral2322706829, ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/AndroidJavaObject_Call_TisString_t_m1899832687_RuntimeMethod_var);
		NullCheck(L_20);
		Dictionary_2_Add_m825500632(L_20, _stringLiteral1364997218, L_22, /*hidden argument*/Dictionary_2_Add_m825500632_RuntimeMethod_var);
		Dictionary_2_t2865362463 * L_23 = V_1;
		AndroidJavaObject_t4131667876 * L_24 = V_0;
		NullCheck(L_24);
		bool L_25 = AndroidJavaObject_Call_TisBoolean_t97287965_m948263851(L_24, _stringLiteral306455953, ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/AndroidJavaObject_Call_TisBoolean_t97287965_m948263851_RuntimeMethod_var);
		V_2 = L_25;
		String_t* L_26 = Boolean_ToString_m2664721875((&V_2), /*hidden argument*/NULL);
		NullCheck(L_23);
		Dictionary_2_Add_m825500632(L_23, _stringLiteral306455953, L_26, /*hidden argument*/Dictionary_2_Add_m825500632_RuntimeMethod_var);
		Dictionary_2_t2865362463 * L_27 = V_1;
		Player_t2961656996 * L_28 = (Player_t2961656996 *)il2cpp_codegen_object_new(Player_t2961656996_il2cpp_TypeInfo_var);
		Player__ctor_m2866643626(L_28, L_27, /*hidden argument*/NULL);
		V_3 = L_28;
		Player_t2961656996 * L_29 = V_3;
		return L_29;
	}
}
// UnityEngine.AndroidJavaClass Skillz::GetSkillz()
extern "C" IL2CPP_METHOD_ATTR AndroidJavaClass_t32045322 * Skillz_GetSkillz_m1754260856 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
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
// UnityEngine.AndroidJavaClass Skillz::GetSkillzSync()
extern "C" IL2CPP_METHOD_ATTR AndroidJavaClass_t32045322 * Skillz_GetSkillzSync_m102960867 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Skillz_GetSkillzSync_m102960867_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AndroidJavaClass_t32045322 * L_0 = (AndroidJavaClass_t32045322 *)il2cpp_codegen_object_new(AndroidJavaClass_t32045322_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_m366853020(L_0, _stringLiteral1451431999, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.AndroidJavaClass Skillz::GetSkillzAudio()
extern "C" IL2CPP_METHOD_ATTR AndroidJavaClass_t32045322 * Skillz_GetSkillzAudio_m4066960576 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Skillz_GetSkillzAudio_m4066960576_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AndroidJavaClass_t32045322 * L_0 = (AndroidJavaClass_t32045322 *)il2cpp_codegen_object_new(AndroidJavaClass_t32045322_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_m366853020(L_0, _stringLiteral1893531713, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.AndroidJavaObject Skillz::GetCurrentActivity()
extern "C" IL2CPP_METHOD_ATTR AndroidJavaObject_t4131667876 * Skillz_GetCurrentActivity_m1705205339 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
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
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Skillz::DeserializeJSONToDictionary(System.String)
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t2865362463 * Skillz_DeserializeJSONToDictionary_m2136858648 (RuntimeObject * __this /* static, unused */, String_t* ___jsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Skillz_DeserializeJSONToDictionary_m2136858648_MetadataUsageId);
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
// System.Single Skillz/Random::Value()
extern "C" IL2CPP_METHOD_ATTR float Random_Value_m3600019517 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Random_InsideUnitSphere_m1723542434 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Random_InsideUnitCircle_m3376432988 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Random_OnUnitSphere_m2777744284 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Random_RotationUniform_m1635932153 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Random_Rotation_m3055737740 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		Quaternion_t2301928331  L_0 = Random_RotationUniform_m1635932153(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Single Skillz/Random::Range(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Random_Range_m2803966720 (RuntimeObject * __this /* static, unused */, float ___min0, float ___max1, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR int32_t Random_Range_m1159738737 (RuntimeObject * __this /* static, unused */, int32_t ___min0, int32_t ___max1, const RuntimeMethod* method)
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
// System.Void Skillz/SkillzSyncProxy::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SkillzSyncProxy__ctor_m354518947 (SkillzSyncProxy_t2138768546 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkillzSyncProxy__ctor_m354518947_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AndroidJavaProxy_t2835824643_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m545570009(__this, _stringLiteral1133916606, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Skillz/SkillzSyncProxy::onMatchCompleted()
extern "C" IL2CPP_METHOD_ATTR void SkillzSyncProxy_onMatchCompleted_m251078732 (SkillzSyncProxy_t2138768546 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkillzSyncProxy_onMatchCompleted_m251078732_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((Skillz_t1424191382_StaticFields*)il2cpp_codegen_static_fields_for(Skillz_t1424191382_il2cpp_TypeInfo_var))->get__syncMessageHandler_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void SkillzSyncDelegate::OnMatchCompleted() */, SkillzSyncDelegate_t3579437812_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void Skillz/SkillzSyncProxy::onDidReceiveData(UnityEngine.AndroidJavaObject)
extern "C" IL2CPP_METHOD_ATTR void SkillzSyncProxy_onDidReceiveData_m2333881804 (SkillzSyncProxy_t2138768546 * __this, AndroidJavaObject_t4131667876 * ___dataReceived0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkillzSyncProxy_onDidReceiveData_m2333881804_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t4131667876 * V_0 = NULL;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	{
		AndroidJavaObject_t4131667876 * L_0 = ___dataReceived0;
		NullCheck(L_0);
		AndroidJavaObject_t4131667876 * L_1 = AndroidJavaObject_Get_TisAndroidJavaObject_t4131667876_m3437237260(L_0, _stringLiteral2019848579, /*hidden argument*/AndroidJavaObject_Get_TisAndroidJavaObject_t4131667876_m3437237260_RuntimeMethod_var);
		V_0 = L_1;
		AndroidJavaObject_t4131667876 * L_2 = V_0;
		NullCheck(L_2);
		intptr_t L_3 = AndroidJavaObject_GetRawObject_m1869424478(L_2, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_4 = AndroidJNIHelper_ConvertFromJNIArray_TisByteU5BU5D_t4116647657_m1893096774(NULL /*static, unused*/, L_3, /*hidden argument*/AndroidJNIHelper_ConvertFromJNIArray_TisByteU5BU5D_t4116647657_m1893096774_RuntimeMethod_var);
		V_1 = L_4;
		RuntimeObject* L_5 = ((Skillz_t1424191382_StaticFields*)il2cpp_codegen_static_fields_for(Skillz_t1424191382_il2cpp_TypeInfo_var))->get__syncMessageHandler_0();
		ByteU5BU5D_t4116647657* L_6 = V_1;
		NullCheck(L_5);
		InterfaceActionInvoker1< ByteU5BU5D_t4116647657* >::Invoke(1 /* System.Void SkillzSyncDelegate::OnDidReceiveData(System.Byte[]) */, SkillzSyncDelegate_t3579437812_il2cpp_TypeInfo_var, L_5, L_6);
		return;
	}
}
// System.Void Skillz/SkillzSyncProxy::onOpponentHasLostConnection(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void SkillzSyncProxy_onOpponentHasLostConnection_m403658838 (SkillzSyncProxy_t2138768546 * __this, int64_t ___playerId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkillzSyncProxy_onOpponentHasLostConnection_m403658838_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	{
		int64_t L_0 = ___playerId0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		uint64_t L_1 = Convert_ToUInt64_m409548990(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject* L_2 = ((Skillz_t1424191382_StaticFields*)il2cpp_codegen_static_fields_for(Skillz_t1424191382_il2cpp_TypeInfo_var))->get__syncMessageHandler_0();
		uint64_t L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< uint64_t >::Invoke(5 /* System.Void SkillzSyncDelegate::OnOpponentHasLostConnection(System.UInt64) */, SkillzSyncDelegate_t3579437812_il2cpp_TypeInfo_var, L_2, L_3);
		return;
	}
}
// System.Void Skillz/SkillzSyncProxy::onOpponentHasReconnected(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void SkillzSyncProxy_onOpponentHasReconnected_m93369378 (SkillzSyncProxy_t2138768546 * __this, int64_t ___playerId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkillzSyncProxy_onOpponentHasReconnected_m93369378_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	{
		int64_t L_0 = ___playerId0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		uint64_t L_1 = Convert_ToUInt64_m409548990(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject* L_2 = ((Skillz_t1424191382_StaticFields*)il2cpp_codegen_static_fields_for(Skillz_t1424191382_il2cpp_TypeInfo_var))->get__syncMessageHandler_0();
		uint64_t L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< uint64_t >::Invoke(6 /* System.Void SkillzSyncDelegate::OnOpponentHasReconnected(System.UInt64) */, SkillzSyncDelegate_t3579437812_il2cpp_TypeInfo_var, L_2, L_3);
		return;
	}
}
// System.Void Skillz/SkillzSyncProxy::onOpponentHasLeftMatch(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void SkillzSyncProxy_onOpponentHasLeftMatch_m2427420861 (SkillzSyncProxy_t2138768546 * __this, int64_t ___playerId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkillzSyncProxy_onOpponentHasLeftMatch_m2427420861_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	{
		int64_t L_0 = ___playerId0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		uint64_t L_1 = Convert_ToUInt64_m409548990(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject* L_2 = ((Skillz_t1424191382_StaticFields*)il2cpp_codegen_static_fields_for(Skillz_t1424191382_il2cpp_TypeInfo_var))->get__syncMessageHandler_0();
		uint64_t L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< uint64_t >::Invoke(7 /* System.Void SkillzSyncDelegate::OnOpponentHasLeftMatch(System.UInt64) */, SkillzSyncDelegate_t3579437812_il2cpp_TypeInfo_var, L_2, L_3);
		return;
	}
}
// System.Void Skillz/SkillzSyncProxy::onCurrentPlayerHasLostConnection()
extern "C" IL2CPP_METHOD_ATTR void SkillzSyncProxy_onCurrentPlayerHasLostConnection_m1080622717 (SkillzSyncProxy_t2138768546 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkillzSyncProxy_onCurrentPlayerHasLostConnection_m1080622717_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((Skillz_t1424191382_StaticFields*)il2cpp_codegen_static_fields_for(Skillz_t1424191382_il2cpp_TypeInfo_var))->get__syncMessageHandler_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void SkillzSyncDelegate::OnCurrentPlayerHasLostConnection() */, SkillzSyncDelegate_t3579437812_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void Skillz/SkillzSyncProxy::onCurrentPlayerHasReconnected()
extern "C" IL2CPP_METHOD_ATTR void SkillzSyncProxy_onCurrentPlayerHasReconnected_m3945526112 (SkillzSyncProxy_t2138768546 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkillzSyncProxy_onCurrentPlayerHasReconnected_m3945526112_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((Skillz_t1424191382_StaticFields*)il2cpp_codegen_static_fields_for(Skillz_t1424191382_il2cpp_TypeInfo_var))->get__syncMessageHandler_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void SkillzSyncDelegate::OnCurrentPlayerHasReconnected() */, SkillzSyncDelegate_t3579437812_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void Skillz/SkillzSyncProxy::onCurrentPlayerHasLeftMatch()
extern "C" IL2CPP_METHOD_ATTR void SkillzSyncProxy_onCurrentPlayerHasLeftMatch_m3098723618 (SkillzSyncProxy_t2138768546 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkillzSyncProxy_onCurrentPlayerHasLeftMatch_m3098723618_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((Skillz_t1424191382_StaticFields*)il2cpp_codegen_static_fields_for(Skillz_t1424191382_il2cpp_TypeInfo_var))->get__syncMessageHandler_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(4 /* System.Void SkillzSyncDelegate::OnCurrentPlayerHasLeftMatch() */, SkillzSyncDelegate_t3579437812_il2cpp_TypeInfo_var, L_0);
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
// System.Void SkillzAbstractDelegate::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SkillzAbstractDelegate__ctor_m3304752999 (SkillzAbstractDelegate_t639866310 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzAbstractDelegate::Awake()
extern "C" IL2CPP_METHOD_ATTR void SkillzAbstractDelegate_Awake_m1536840064 (SkillzAbstractDelegate_t639866310 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkillzAbstractDelegate_Awake_m1536840064_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SkillzAbstractDelegate_t639866310_il2cpp_TypeInfo_var);
		bool L_0 = ((SkillzAbstractDelegate_t639866310_StaticFields*)il2cpp_codegen_static_fields_for(SkillzAbstractDelegate_t639866310_il2cpp_TypeInfo_var))->get_initializedYet_4();
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
		IL2CPP_RUNTIME_CLASS_INIT(SkillzAbstractDelegate_t639866310_il2cpp_TypeInfo_var);
		((SkillzAbstractDelegate_t639866310_StaticFields*)il2cpp_codegen_static_fields_for(SkillzAbstractDelegate_t639866310_il2cpp_TypeInfo_var))->set_initializedYet_4((bool)1);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m166252750(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		int32_t* L_2 = __this->get_address_of_GameID_2();
		String_t* L_3 = Int32_ToString_m141394615(L_2, /*hidden argument*/NULL);
		int32_t L_4 = __this->get_SkillzEnvironment_3();
		Api_Initialize_m1562849269(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzAbstractDelegate::AndroidInitialize(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void SkillzAbstractDelegate_AndroidInitialize_m1349047341 (RuntimeObject * __this /* static, unused */, String_t* ___gameId0, String_t* ___environment1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkillzAbstractDelegate_AndroidInitialize_m1349047341_MetadataUsageId);
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
		IL2CPP_RUNTIME_CLASS_INIT(SkillzAbstractDelegate_t639866310_il2cpp_TypeInfo_var);
		AndroidJavaClass_t32045322 * L_3 = SkillzAbstractDelegate_GetSkillzPreferences_m1629139633(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_4 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2));
		AndroidJavaObject_t4131667876 * L_5 = SkillzAbstractDelegate_GetCurrentActivity_m771874125(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		AndroidJavaClass_t32045322 * L_8 = SkillzAbstractDelegate_GetSkillzPreferences_m1629139633(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_9 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2));
		AndroidJavaObject_t4131667876 * L_10 = SkillzAbstractDelegate_GetCurrentActivity_m771874125(NULL /*static, unused*/, /*hidden argument*/NULL);
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
// UnityEngine.AndroidJavaClass SkillzAbstractDelegate::GetSkillzPreferences()
extern "C" IL2CPP_METHOD_ATTR AndroidJavaClass_t32045322 * SkillzAbstractDelegate_GetSkillzPreferences_m1629139633 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkillzAbstractDelegate_GetSkillzPreferences_m1629139633_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AndroidJavaClass_t32045322 * L_0 = (AndroidJavaClass_t32045322 *)il2cpp_codegen_object_new(AndroidJavaClass_t32045322_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_m366853020(L_0, _stringLiteral2747799586, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.AndroidJavaObject SkillzAbstractDelegate::GetCurrentActivity()
extern "C" IL2CPP_METHOD_ATTR AndroidJavaObject_t4131667876 * SkillzAbstractDelegate_GetCurrentActivity_m771874125 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkillzAbstractDelegate_GetCurrentActivity_m771874125_MetadataUsageId);
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
// System.Collections.Generic.Dictionary`2<System.String,System.Object> SkillzAbstractDelegate::DeserializeJSONToDictionary(System.String)
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t2865362463 * SkillzAbstractDelegate_DeserializeJSONToDictionary_m3288828646 (RuntimeObject * __this /* static, unused */, String_t* ___jsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkillzAbstractDelegate_DeserializeJSONToDictionary_m3288828646_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___jsonString0;
		RuntimeObject * L_1 = Json_Deserialize_m639621384(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return ((Dictionary_2_t2865362463 *)IsInstClass((RuntimeObject*)L_1, Dictionary_2_t2865362463_il2cpp_TypeInfo_var));
	}
}
// System.Void SkillzAbstractDelegate::.cctor()
extern "C" IL2CPP_METHOD_ATTR void SkillzAbstractDelegate__cctor_m3348283228 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
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
// System.Void SkillzCrossPlatform::LaunchSkillz(SkillzMatchDelegate)
extern "C" IL2CPP_METHOD_ATTR void SkillzCrossPlatform_LaunchSkillz_m3057435107 (RuntimeObject * __this /* static, unused */, RuntimeObject* ____matchDelegate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ____matchDelegate0;
		SkillzDelegate_AssignSkillzDelegate_m1630244260(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Api_LaunchSkillz_m3695930818(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzCrossPlatform::LaunchSkillz(SkillzSyncDelegate)
extern "C" IL2CPP_METHOD_ATTR void SkillzCrossPlatform_LaunchSkillz_m3539382890 (RuntimeObject * __this /* static, unused */, RuntimeObject* ____syncMatchDelegate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ____syncMatchDelegate0;
		SkillzDelegate_AssignSkillzDelegate_m1393046629(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Api_LaunchSkillz_m3695930818(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SkillzCrossPlatform::IsMatchInProgress()
extern "C" IL2CPP_METHOD_ATTR bool SkillzCrossPlatform_IsMatchInProgress_m3051185731 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		bool L_0 = Api_get_IsTournamentInProgress_m2522558358(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Collections.Hashtable SkillzCrossPlatform::GetMatchRules()
extern "C" IL2CPP_METHOD_ATTR Hashtable_t1853889766 * SkillzCrossPlatform_GetMatchRules_m659662059 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		Hashtable_t1853889766 * L_0 = Api_GetMatchRules_m1004458514(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// SkillzSDK.Match SkillzCrossPlatform::GetMatchInfo()
extern "C" IL2CPP_METHOD_ATTR Match_t1925635937 * SkillzCrossPlatform_GetMatchInfo_m2901789180 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		Match_t1925635937 * L_0 = Api_GetMatchInfo_m3194907896(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void SkillzCrossPlatform::AbortMatch()
extern "C" IL2CPP_METHOD_ATTR void SkillzCrossPlatform_AbortMatch_m3288244518 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		Api_AbortGame_m1087523040(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzCrossPlatform::UpdatePlayersCurrentScore(System.String)
extern "C" IL2CPP_METHOD_ATTR void SkillzCrossPlatform_UpdatePlayersCurrentScore_m3697324461 (RuntimeObject * __this /* static, unused */, String_t* ___score0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___score0;
		float L_1 = Single_Parse_m364357836(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Api_UpdatePlayerScore_m3917494721(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzCrossPlatform::UpdatePlayersCurrentScore(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void SkillzCrossPlatform_UpdatePlayersCurrentScore_m2714058276 (RuntimeObject * __this /* static, unused */, int32_t ___score0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___score0;
		Api_UpdatePlayerScore_m2639514829(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzCrossPlatform::UpdatePlayersCurrentScore(System.Single)
extern "C" IL2CPP_METHOD_ATTR void SkillzCrossPlatform_UpdatePlayersCurrentScore_m1554176879 (RuntimeObject * __this /* static, unused */, float ___score0, const RuntimeMethod* method)
{
	{
		float L_0 = ___score0;
		Api_UpdatePlayerScore_m3917494721(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzCrossPlatform::ReportFinalScore(System.String)
extern "C" IL2CPP_METHOD_ATTR void SkillzCrossPlatform_ReportFinalScore_m3670549424 (RuntimeObject * __this /* static, unused */, String_t* ___score0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___score0;
		float L_1 = Single_Parse_m364357836(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Api_FinishTournament_m3112126626(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzCrossPlatform::ReportFinalScore(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void SkillzCrossPlatform_ReportFinalScore_m3641759666 (RuntimeObject * __this /* static, unused */, int32_t ___score0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___score0;
		Api_FinishTournament_m2922484481(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzCrossPlatform::ReportFinalScore(System.Single)
extern "C" IL2CPP_METHOD_ATTR void SkillzCrossPlatform_ReportFinalScore_m2115713365 (RuntimeObject * __this /* static, unused */, float ___score0, const RuntimeMethod* method)
{
	{
		float L_0 = ___score0;
		Api_FinishTournament_m3112126626(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String SkillzCrossPlatform::SDKVersionShort()
extern "C" IL2CPP_METHOD_ATTR String_t* SkillzCrossPlatform_SDKVersionShort_m2867820836 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		String_t* L_0 = Api_get_SDKVersionShort_m3300381882(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String SkillzCrossPlatform::CurrentUserDisplayName()
extern "C" IL2CPP_METHOD_ATTR String_t* SkillzCrossPlatform_CurrentUserDisplayName_m2290825413 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		Player_t2961656996 * L_0 = Api_GetPlayer_m3941638088(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = L_0->get_DisplayName_0();
		return L_1;
	}
}
// SkillzSDK.Player SkillzCrossPlatform::GetPlayer()
extern "C" IL2CPP_METHOD_ATTR Player_t2961656996 * SkillzCrossPlatform_GetPlayer_m1150102054 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkillzCrossPlatform_GetPlayer_m1150102054_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Match_t1925635937 * V_0 = NULL;
	Player_t2961656996 * V_1 = NULL;
	Enumerator_t2028008319  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Player_t2961656996 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Match_t1925635937 * L_0 = SkillzCrossPlatform_GetMatchInfo_m2901789180(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		Match_t1925635937 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_005b;
		}
	}
	{
		Match_t1925635937 * L_2 = V_0;
		NullCheck(L_2);
		List_1_t138764442 * L_3 = L_2->get_Players_9();
		NullCheck(L_3);
		Enumerator_t2028008319  L_4 = List_1_GetEnumerator_m1712187495(L_3, /*hidden argument*/List_1_GetEnumerator_m1712187495_RuntimeMethod_var);
		V_2 = L_4;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0037;
		}

IL_001d:
		{
			Player_t2961656996 * L_5 = Enumerator_get_Current_m115699280((&V_2), /*hidden argument*/Enumerator_get_Current_m115699280_RuntimeMethod_var);
			V_1 = L_5;
			Player_t2961656996 * L_6 = V_1;
			NullCheck(L_6);
			bool L_7 = L_6->get_IsCurrentPlayer_5();
			if (!L_7)
			{
				goto IL_0037;
			}
		}

IL_0030:
		{
			Player_t2961656996 * L_8 = V_1;
			V_3 = L_8;
			IL2CPP_LEAVE(0x63, FINALLY_0048);
		}

IL_0037:
		{
			bool L_9 = Enumerator_MoveNext_m2073364093((&V_2), /*hidden argument*/Enumerator_MoveNext_m2073364093_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_001d;
			}
		}

IL_0043:
		{
			IL2CPP_LEAVE(0x56, FINALLY_0048);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0048;
	}

FINALLY_0048:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m733067215((&V_2), /*hidden argument*/Enumerator_Dispose_m733067215_RuntimeMethod_var);
		IL2CPP_END_FINALLY(72)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(72)
	{
		IL2CPP_JUMP_TBL(0x63, IL_0063)
		IL2CPP_JUMP_TBL(0x56, IL_0056)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0056:
	{
		goto IL_0061;
	}

IL_005b:
	{
		Player_t2961656996 * L_10 = Api_GetPlayer_m3941638088(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_10;
	}

IL_0061:
	{
		return (Player_t2961656996 *)NULL;
	}

IL_0063:
	{
		Player_t2961656996 * L_11 = V_3;
		return L_11;
	}
}
// System.Void SkillzCrossPlatform::AddMetadataForMatchInProgress(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SkillzCrossPlatform_AddMetadataForMatchInProgress_m1150526934 (RuntimeObject * __this /* static, unused */, String_t* ___metadataJson0, bool ___forMatchInProgress1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___metadataJson0;
		bool L_1 = ___forMatchInProgress1;
		Api_AddMetadataForMatchInProgress_m3539437012(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzCrossPlatform::setSkillzBackgroundMusic(System.String)
extern "C" IL2CPP_METHOD_ATTR void SkillzCrossPlatform_setSkillzBackgroundMusic_m1600628885 (RuntimeObject * __this /* static, unused */, String_t* ___fileName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkillzCrossPlatform_setSkillzBackgroundMusic_m1600628885_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___fileName0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1653696771, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___fileName0;
		Api_setSkillzBackgroundMusic_m628192280(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Single SkillzCrossPlatform::getSkillzMusicVolume()
extern "C" IL2CPP_METHOD_ATTR float SkillzCrossPlatform_getSkillzMusicVolume_m3386035777 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkillzCrossPlatform_getSkillzMusicVolume_m3386035777_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = Api_getSkillzMusicVolume_m1583083845(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = V_0;
		float L_2 = L_1;
		RuntimeObject * L_3 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral2013662720, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		float L_5 = V_0;
		return L_5;
	}
}
// System.Void SkillzCrossPlatform::setSkillzMusicVolume(System.Single)
extern "C" IL2CPP_METHOD_ATTR void SkillzCrossPlatform_setSkillzMusicVolume_m2937436182 (RuntimeObject * __this /* static, unused */, float ___volume0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkillzCrossPlatform_setSkillzMusicVolume_m2937436182_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___volume0;
		float L_1 = L_0;
		RuntimeObject * L_2 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral715190641, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		float L_4 = ___volume0;
		Api_setSkillzMusicVolume_m1647961181(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Single SkillzCrossPlatform::getSFXVolume()
extern "C" IL2CPP_METHOD_ATTR float SkillzCrossPlatform_getSFXVolume_m3166619612 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkillzCrossPlatform_getSFXVolume_m3166619612_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = Api_getSFXVolume_m2121641713(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = V_0;
		float L_2 = L_1;
		RuntimeObject * L_3 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral2786782033, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		float L_5 = V_0;
		return L_5;
	}
}
// System.Void SkillzCrossPlatform::setSFXVolume(System.Single)
extern "C" IL2CPP_METHOD_ATTR void SkillzCrossPlatform_setSFXVolume_m3149349838 (RuntimeObject * __this /* static, unused */, float ___volume0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkillzCrossPlatform_setSFXVolume_m3149349838_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___volume0;
		float L_1 = L_0;
		RuntimeObject * L_2 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral2354804696, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		float L_4 = ___volume0;
		Api_setSFXVolume_m1465432439(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzCrossPlatform::SendData(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void SkillzCrossPlatform_SendData_m2680242818 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___data0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = ___data0;
		Api_SendData_m1108896310(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SkillzCrossPlatform::IsMatchCompleted()
extern "C" IL2CPP_METHOD_ATTR bool SkillzCrossPlatform_IsMatchCompleted_m2047215809 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		bool L_0 = Api_IsMatchCompleted_m2508831252(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 SkillzCrossPlatform::GetConnectedPlayerCount()
extern "C" IL2CPP_METHOD_ATTR int32_t SkillzCrossPlatform_GetConnectedPlayerCount_m2165755449 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		int32_t L_0 = Api_ConnectedPlayerCount_m128605996(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.UInt64 SkillzCrossPlatform::GetCurrentPlayerId()
extern "C" IL2CPP_METHOD_ATTR uint64_t SkillzCrossPlatform_GetCurrentPlayerId_m2708954017 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = Api_CurrentPlayerId_m3066158680(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.UInt64 SkillzCrossPlatform::GetCurrentOpponentPlayerId()
extern "C" IL2CPP_METHOD_ATTR uint64_t SkillzCrossPlatform_GetCurrentOpponentPlayerId_m1948832453 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = Api_CurrentOpponentPlayerId_m95968456(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Double SkillzCrossPlatform::GetServerTime()
extern "C" IL2CPP_METHOD_ATTR double SkillzCrossPlatform_GetServerTime_m2668484788 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = Api_GetServerTime_m4231984796(NULL /*static, unused*/, /*hidden argument*/NULL);
		return (((double)((double)(((double)((uint64_t)L_0))))));
	}
}
// System.Int64 SkillzCrossPlatform::GetTimeLeftForReconnection(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR int64_t SkillzCrossPlatform_GetTimeLeftForReconnection_m2847311785 (RuntimeObject * __this /* static, unused */, uint64_t ___playerId0, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = ___playerId0;
		int32_t L_1 = Api_ReconnectTimeLeftForPlayer_m3531880109(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return (((int64_t)((int64_t)L_1)));
	}
}
// UnityEngine.AndroidJavaClass SkillzCrossPlatform::GetSkillz()
extern "C" IL2CPP_METHOD_ATTR AndroidJavaClass_t32045322 * SkillzCrossPlatform_GetSkillz_m1312181533 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
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
// System.Single SkillzCrossPlatform/Random::Value()
extern "C" IL2CPP_METHOD_ATTR float Random_Value_m919656150 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Random_InsideUnitSphere_m3158642049 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Random_InsideUnitCircle_m1205585536 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Random_OnUnitSphere_m1681403655 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Random_RotationUniform_m2440073649 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Random_Rotation_m3135877901 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		Quaternion_t2301928331  L_0 = Random_RotationUniform_m2440073649(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Single SkillzCrossPlatform/Random::Range(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Random_Range_m34752324 (RuntimeObject * __this /* static, unused */, float ___min0, float ___max1, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR int32_t Random_Range_m135660526 (RuntimeObject * __this /* static, unused */, int32_t ___min0, int32_t ___max1, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR void SkillzDelegate__ctor_m2676049584 (SkillzDelegate_t3178178617 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkillzDelegate__ctor_m2676049584_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SkillzAbstractDelegate_t639866310_il2cpp_TypeInfo_var);
		SkillzAbstractDelegate__ctor_m3304752999(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzDelegate::AssignSkillzDelegate(SkillzMatchDelegate)
extern "C" IL2CPP_METHOD_ATTR void SkillzDelegate_AssignSkillzDelegate_m1630244260 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___skillzDelegate0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkillzDelegate_AssignSkillzDelegate_m1630244260_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___skillzDelegate0;
		((SkillzDelegate_t3178178617_StaticFields*)il2cpp_codegen_static_fields_for(SkillzDelegate_t3178178617_il2cpp_TypeInfo_var))->set__delegate_5(L_0);
		return;
	}
}
// System.Void SkillzDelegate::AssignSkillzDelegate(SkillzSyncDelegate)
extern "C" IL2CPP_METHOD_ATTR void SkillzDelegate_AssignSkillzDelegate_m1393046629 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___skillzSyncDelegate0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkillzDelegate_AssignSkillzDelegate_m1393046629_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___skillzSyncDelegate0;
		((SkillzDelegate_t3178178617_StaticFields*)il2cpp_codegen_static_fields_for(SkillzDelegate_t3178178617_il2cpp_TypeInfo_var))->set__syncDelegate_6(L_0);
		RuntimeObject* L_1 = ___skillzSyncDelegate0;
		Api_InitializeSyncDelegate_m3298977276(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzDelegate::OnMatchWillBegin(System.String)
extern "C" IL2CPP_METHOD_ATTR void SkillzDelegate_OnMatchWillBegin_m3811917252 (SkillzDelegate_t3178178617 * __this, String_t* ___matchInfoJsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkillzDelegate_OnMatchWillBegin_m3811917252_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t2865362463 * V_0 = NULL;
	Match_t1925635937 * V_1 = NULL;
	{
		String_t* L_0 = ___matchInfoJsonString0;
		IL2CPP_RUNTIME_CLASS_INIT(SkillzAbstractDelegate_t639866310_il2cpp_TypeInfo_var);
		Dictionary_2_t2865362463 * L_1 = SkillzAbstractDelegate_DeserializeJSONToDictionary_m3288828646(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Dictionary_2_t2865362463 * L_2 = V_0;
		Match_t1925635937 * L_3 = (Match_t1925635937 *)il2cpp_codegen_object_new(Match_t1925635937_il2cpp_TypeInfo_var);
		Match__ctor_m3021370963(L_3, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject* L_4 = ((SkillzDelegate_t3178178617_StaticFields*)il2cpp_codegen_static_fields_for(SkillzDelegate_t3178178617_il2cpp_TypeInfo_var))->get__delegate_5();
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		RuntimeObject* L_5 = ((SkillzDelegate_t3178178617_StaticFields*)il2cpp_codegen_static_fields_for(SkillzDelegate_t3178178617_il2cpp_TypeInfo_var))->get__delegate_5();
		Match_t1925635937 * L_6 = V_1;
		NullCheck(L_5);
		InterfaceActionInvoker1< Match_t1925635937 * >::Invoke(0 /* System.Void SkillzMatchDelegate::OnMatchWillBegin(SkillzSDK.Match) */, SkillzMatchDelegate_t1381117504_il2cpp_TypeInfo_var, L_5, L_6);
		goto IL_0033;
	}

IL_0028:
	{
		RuntimeObject* L_7 = ((SkillzDelegate_t3178178617_StaticFields*)il2cpp_codegen_static_fields_for(SkillzDelegate_t3178178617_il2cpp_TypeInfo_var))->get__syncDelegate_6();
		Match_t1925635937 * L_8 = V_1;
		NullCheck(L_7);
		InterfaceActionInvoker1< Match_t1925635937 * >::Invoke(0 /* System.Void SkillzMatchDelegate::OnMatchWillBegin(SkillzSDK.Match) */, SkillzMatchDelegate_t1381117504_il2cpp_TypeInfo_var, L_7, L_8);
	}

IL_0033:
	{
		return;
	}
}
// System.Void SkillzDelegate::OnSkillzWillExit()
extern "C" IL2CPP_METHOD_ATTR void SkillzDelegate_OnSkillzWillExit_m4049406625 (SkillzDelegate_t3178178617 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkillzDelegate_OnSkillzWillExit_m4049406625_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((SkillzDelegate_t3178178617_StaticFields*)il2cpp_codegen_static_fields_for(SkillzDelegate_t3178178617_il2cpp_TypeInfo_var))->get__delegate_5();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_1 = ((SkillzDelegate_t3178178617_StaticFields*)il2cpp_codegen_static_fields_for(SkillzDelegate_t3178178617_il2cpp_TypeInfo_var))->get__delegate_5();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(1 /* System.Void SkillzMatchDelegate::OnSkillzWillExit() */, SkillzMatchDelegate_t1381117504_il2cpp_TypeInfo_var, L_1);
		goto IL_0023;
	}

IL_0019:
	{
		RuntimeObject* L_2 = ((SkillzDelegate_t3178178617_StaticFields*)il2cpp_codegen_static_fields_for(SkillzDelegate_t3178178617_il2cpp_TypeInfo_var))->get__syncDelegate_6();
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(1 /* System.Void SkillzMatchDelegate::OnSkillzWillExit() */, SkillzMatchDelegate_t1381117504_il2cpp_TypeInfo_var, L_2);
	}

IL_0023:
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
// System.Void SkillzGameController::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SkillzGameController__ctor_m3569188081 (SkillzGameController_t3579252314 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzGameController::OnMatchWillBegin(SkillzSDK.Match)
extern "C" IL2CPP_METHOD_ATTR void SkillzGameController_OnMatchWillBegin_m343002965 (SkillzGameController_t3579252314 * __this, Match_t1925635937 * ___matchInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkillzGameController_OnMatchWillBegin_m343002965_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral62725234, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzGameController::OnSkillzWillExit()
extern "C" IL2CPP_METHOD_ATTR void SkillzGameController_OnSkillzWillExit_m3605742181 (SkillzGameController_t3579252314 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkillzGameController_OnSkillzWillExit_m3605742181_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral2707269980, /*hidden argument*/NULL);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Api_onOpponentHasLostConnection_m2105192804(uint64_t ___playerId0)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	Api_onOpponentHasLostConnection_m2105192804(NULL, ___playerId0, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Api_onOpponentHasReconnected_m1415751927(uint64_t ___playerId0)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	Api_onOpponentHasReconnected_m1415751927(NULL, ___playerId0, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Api_onOpponentHasLeftMatch_m1439901582(uint64_t ___playerId0)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	Api_onOpponentHasLeftMatch_m1439901582(NULL, ___playerId0, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Api_onCurrentPlayerHasLostConnection_m1013680920()
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	Api_onCurrentPlayerHasLostConnection_m1013680920(NULL, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Api_onCurrentPlayerHasReconnected_m372574391()
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	Api_onCurrentPlayerHasReconnected_m372574391(NULL, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Api_onCurrentPlayerHasLeftMatch_m2836739900()
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	Api_onCurrentPlayerHasLeftMatch_m2836739900(NULL, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Api_onDidReceiveData_m1898136842(intptr_t ___value0, uint64_t ___length1)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	Api_onDidReceiveData_m1898136842(NULL, ___value0, ___length1, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Api_onMatchCompleted_m2950294816()
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	Api_onMatchCompleted_m2950294816(NULL, NULL);

}
extern "C" void DEFAULT_CALL _addMetadataForMatchInProgress(char*, int32_t);
// System.Void SkillzSDK.Api::_addMetadataForMatchInProgress(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Api__addMetadataForMatchInProgress_m3365956122 (RuntimeObject * __this /* static, unused */, String_t* ___metadataJson0, bool ___forMatchInProgress1, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR int32_t Api__getRandomNumber_m626801295 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_getRandomNumber)();

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL _getRandomNumberWithMinAndMax(int32_t, int32_t);
// System.Int32 SkillzSDK.Api::_getRandomNumberWithMinAndMax(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Api__getRandomNumberWithMinAndMax_m679981106 (RuntimeObject * __this /* static, unused */, int32_t ___min0, int32_t ___max1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_getRandomNumberWithMinAndMax)(___min0, ___max1);

	return returnValue;
}
extern "C" void DEFAULT_CALL _skillzInitForGameIdAndEnvironment(char*, char*);
// System.Void SkillzSDK.Api::_skillzInitForGameIdAndEnvironment(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void Api__skillzInitForGameIdAndEnvironment_m3192474511 (RuntimeObject * __this /* static, unused */, String_t* ___gameId0, String_t* ___environment1, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR int32_t Api__tournamentIsInProgress_m3775620099 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_tournamentIsInProgress)();

	return returnValue;
}
extern "C" intptr_t DEFAULT_CALL _player();
// System.IntPtr SkillzSDK.Api::_player()
extern "C" IL2CPP_METHOD_ATTR intptr_t Api__player_m1362132540 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(_player)();

	return returnValue;
}
extern "C" intptr_t DEFAULT_CALL _SDKShortVersion();
// System.IntPtr SkillzSDK.Api::_SDKShortVersion()
extern "C" IL2CPP_METHOD_ATTR intptr_t Api__SDKShortVersion_m2578248954 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(_SDKShortVersion)();

	return returnValue;
}
extern "C" void DEFAULT_CALL _showSDKVersionInfo();
// System.Void SkillzSDK.Api::_showSDKVersionInfo()
extern "C" IL2CPP_METHOD_ATTR void Api__showSDKVersionInfo_m2617811748 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_showSDKVersionInfo)();

}
extern "C" intptr_t DEFAULT_CALL _getMatchRules();
// System.IntPtr SkillzSDK.Api::_getMatchRules()
extern "C" IL2CPP_METHOD_ATTR intptr_t Api__getMatchRules_m768486371 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(_getMatchRules)();

	return returnValue;
}
extern "C" intptr_t DEFAULT_CALL _getMatchInfo();
// System.IntPtr SkillzSDK.Api::_getMatchInfo()
extern "C" IL2CPP_METHOD_ATTR intptr_t Api__getMatchInfo_m2337796399 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(_getMatchInfo)();

	return returnValue;
}
extern "C" void DEFAULT_CALL _launchSkillz();
// System.Void SkillzSDK.Api::_launchSkillz()
extern "C" IL2CPP_METHOD_ATTR void Api__launchSkillz_m664158212 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_launchSkillz)();

}
extern "C" void DEFAULT_CALL _displayTournamentResultsWithScore(int32_t);
// System.Void SkillzSDK.Api::_displayTournamentResultsWithScore(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Api__displayTournamentResultsWithScore_m3315146318 (RuntimeObject * __this /* static, unused */, int32_t ___score0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_displayTournamentResultsWithScore)(___score0);

}
extern "C" void DEFAULT_CALL _displayTournamentResultsWithFloatScore(float);
// System.Void SkillzSDK.Api::_displayTournamentResultsWithFloatScore(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Api__displayTournamentResultsWithFloatScore_m1284634361 (RuntimeObject * __this /* static, unused */, float ___score0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_displayTournamentResultsWithFloatScore)(___score0);

}
extern "C" void DEFAULT_CALL _displayTournamentResultsWithStringScore(char*);
// System.Void SkillzSDK.Api::_displayTournamentResultsWithStringScore(System.String)
extern "C" IL2CPP_METHOD_ATTR void Api__displayTournamentResultsWithStringScore_m2296794800 (RuntimeObject * __this /* static, unused */, String_t* ___score0, const RuntimeMethod* method)
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
extern "C" int32_t DEFAULT_CALL _setAsyncTurnReviewDisabled();
// System.Int32 SkillzSDK.Api::_setAsyncTurnReviewDisabled()
extern "C" IL2CPP_METHOD_ATTR int32_t Api__setAsyncTurnReviewDisabled_m1148959024 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_setAsyncTurnReviewDisabled)();

	return returnValue;
}
extern "C" void DEFAULT_CALL _completeTurnWithGameData(char*, char*, float, float, char*, char*);
// System.Void SkillzSDK.Api::_completeTurnWithGameData(System.String,System.String,System.Single,System.Single,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void Api__completeTurnWithGameData_m1632710802 (RuntimeObject * __this /* static, unused */, String_t* ___gameData0, String_t* ___score1, float ___playerCurrentTotalScore2, float ___opponentCurrentTotalScore3, String_t* ___roundOutcome4, String_t* ___matchOutcome5, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR void Api__finishReviewingCurrentGameState_m376951918 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_finishReviewingCurrentGameState)();

}
extern "C" void DEFAULT_CALL _notifyPlayerAbortWithCompletion();
// System.Void SkillzSDK.Api::_notifyPlayerAbortWithCompletion()
extern "C" IL2CPP_METHOD_ATTR void Api__notifyPlayerAbortWithCompletion_m960311694 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_notifyPlayerAbortWithCompletion)();

}
extern "C" void DEFAULT_CALL _updatePlayersCurrentScore(float);
// System.Void SkillzSDK.Api::_updatePlayersCurrentScore(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Api__updatePlayersCurrentScore_m246008890 (RuntimeObject * __this /* static, unused */, float ___score0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_updatePlayersCurrentScore)(___score0);

}
extern "C" void DEFAULT_CALL _updatePlayersCurrentStringScore(char*);
// System.Void SkillzSDK.Api::_updatePlayersCurrentStringScore(System.String)
extern "C" IL2CPP_METHOD_ATTR void Api__updatePlayersCurrentStringScore_m4005077211 (RuntimeObject * __this /* static, unused */, String_t* ___score0, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR void Api__updatePlayersCurrentIntScore_m3021323692 (RuntimeObject * __this /* static, unused */, int32_t ___score0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_updatePlayersCurrentIntScore)(___score0);

}
extern "C" float DEFAULT_CALL _getRandomFloat();
// System.Single SkillzSDK.Api::_getRandomFloat()
extern "C" IL2CPP_METHOD_ATTR float Api__getRandomFloat_m745272966 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef float (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	float returnValue = reinterpret_cast<PInvokeFunc>(_getRandomFloat)();

	return returnValue;
}
extern "C" void DEFAULT_CALL _setSkillzBackgroundMusic(char*);
// System.Void SkillzSDK.Api::_setSkillzBackgroundMusic(System.String)
extern "C" IL2CPP_METHOD_ATTR void Api__setSkillzBackgroundMusic_m3226946192 (RuntimeObject * __this /* static, unused */, String_t* ___filePath0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___filePath0' to native representation
	char* ____filePath0_marshaled = NULL;
	____filePath0_marshaled = il2cpp_codegen_marshal_string(___filePath0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_setSkillzBackgroundMusic)(____filePath0_marshaled);

	// Marshaling cleanup of parameter '___filePath0' native representation
	il2cpp_codegen_marshal_free(____filePath0_marshaled);
	____filePath0_marshaled = NULL;

}
extern "C" void DEFAULT_CALL _setSFXVolume(float);
// System.Void SkillzSDK.Api::_setSFXVolume(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Api__setSFXVolume_m741456116 (RuntimeObject * __this /* static, unused */, float ___volume0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_setSFXVolume)(___volume0);

}
extern "C" void DEFAULT_CALL _setSkillzMusicVolume(float);
// System.Void SkillzSDK.Api::_setSkillzMusicVolume(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Api__setSkillzMusicVolume_m20115881 (RuntimeObject * __this /* static, unused */, float ___volume0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_setSkillzMusicVolume)(___volume0);

}
extern "C" float DEFAULT_CALL _getSFXVolume();
// System.Single SkillzSDK.Api::_getSFXVolume()
extern "C" IL2CPP_METHOD_ATTR float Api__getSFXVolume_m2909607583 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef float (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	float returnValue = reinterpret_cast<PInvokeFunc>(_getSFXVolume)();

	return returnValue;
}
extern "C" float DEFAULT_CALL _getSkillzMusicVolume();
// System.Single SkillzSDK.Api::_getSkillzMusicVolume()
extern "C" IL2CPP_METHOD_ATTR float Api__getSkillzMusicVolume_m3880318224 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef float (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	float returnValue = reinterpret_cast<PInvokeFunc>(_getSkillzMusicVolume)();

	return returnValue;
}
extern "C" void DEFAULT_CALL _sendData(intptr_t, uint64_t);
// System.Void SkillzSDK.Api::_sendData(System.IntPtr,System.UInt64)
extern "C" IL2CPP_METHOD_ATTR void Api__sendData_m792227317 (RuntimeObject * __this /* static, unused */, intptr_t ___value0, uint64_t ___length1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint64_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_sendData)(___value0, ___length1);

}
extern "C" int32_t DEFAULT_CALL _isMatchCompleted();
// System.Boolean SkillzSDK.Api::_isMatchCompleted()
extern "C" IL2CPP_METHOD_ATTR bool Api__isMatchCompleted_m3255659469 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_isMatchCompleted)();

	return static_cast<bool>(returnValue);
}
extern "C" int32_t DEFAULT_CALL _connectedPlayerCount();
// System.Int32 SkillzSDK.Api::_connectedPlayerCount()
extern "C" IL2CPP_METHOD_ATTR int32_t Api__connectedPlayerCount_m1353591401 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_connectedPlayerCount)();

	return returnValue;
}
extern "C" uint64_t DEFAULT_CALL _currentPlayerId();
// System.UInt64 SkillzSDK.Api::_currentPlayerId()
extern "C" IL2CPP_METHOD_ATTR uint64_t Api__currentPlayerId_m3944569893 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef uint64_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	uint64_t returnValue = reinterpret_cast<PInvokeFunc>(_currentPlayerId)();

	return returnValue;
}
extern "C" uint64_t DEFAULT_CALL _currentOpponentPlayerId();
// System.UInt64 SkillzSDK.Api::_currentOpponentPlayerId()
extern "C" IL2CPP_METHOD_ATTR uint64_t Api__currentOpponentPlayerId_m3146369036 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef uint64_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	uint64_t returnValue = reinterpret_cast<PInvokeFunc>(_currentOpponentPlayerId)();

	return returnValue;
}
extern "C" uint64_t DEFAULT_CALL _getServerTime();
// System.UInt64 SkillzSDK.Api::_getServerTime()
extern "C" IL2CPP_METHOD_ATTR uint64_t Api__getServerTime_m3965035565 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef uint64_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	uint64_t returnValue = reinterpret_cast<PInvokeFunc>(_getServerTime)();

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL _reconnectTimeLeftForPlayer(uint64_t);
// System.Int32 SkillzSDK.Api::_reconnectTimeLeftForPlayer(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR int32_t Api__reconnectTimeLeftForPlayer_m3248060915 (RuntimeObject * __this /* static, unused */, uint64_t ___playerId0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (uint64_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_reconnectTimeLeftForPlayer)(___playerId0);

	return returnValue;
}
extern "C" void DEFAULT_CALL _assignOnCurrentPlayerHasReconnectedFunc(intptr_t);
// System.Void SkillzSDK.Api::_assignOnCurrentPlayerHasReconnectedFunc(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Api__assignOnCurrentPlayerHasReconnectedFunc_m2565823719 (RuntimeObject * __this /* static, unused */, intptr_t ___funcPtr0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_assignOnCurrentPlayerHasReconnectedFunc)(___funcPtr0);

}
extern "C" void DEFAULT_CALL _assignOnCurrentPlayerHasLostConnectionFunc(intptr_t);
// System.Void SkillzSDK.Api::_assignOnCurrentPlayerHasLostConnectionFunc(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Api__assignOnCurrentPlayerHasLostConnectionFunc_m2707933677 (RuntimeObject * __this /* static, unused */, intptr_t ___funcPtr0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_assignOnCurrentPlayerHasLostConnectionFunc)(___funcPtr0);

}
extern "C" void DEFAULT_CALL _assignOnCurrentPlayerHasLeftMatchFunc(intptr_t);
// System.Void SkillzSDK.Api::_assignOnCurrentPlayerHasLeftMatchFunc(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Api__assignOnCurrentPlayerHasLeftMatchFunc_m1300170528 (RuntimeObject * __this /* static, unused */, intptr_t ___funcPtr0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_assignOnCurrentPlayerHasLeftMatchFunc)(___funcPtr0);

}
extern "C" void DEFAULT_CALL _assignOnOpponentHasReconnectedFunc(intptr_t);
// System.Void SkillzSDK.Api::_assignOnOpponentHasReconnectedFunc(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Api__assignOnOpponentHasReconnectedFunc_m1605869870 (RuntimeObject * __this /* static, unused */, intptr_t ___funcPtr0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_assignOnOpponentHasReconnectedFunc)(___funcPtr0);

}
extern "C" void DEFAULT_CALL _assignOnOpponentHasLostConnectionFunc(intptr_t);
// System.Void SkillzSDK.Api::_assignOnOpponentHasLostConnectionFunc(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Api__assignOnOpponentHasLostConnectionFunc_m3724441159 (RuntimeObject * __this /* static, unused */, intptr_t ___funcPtr0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_assignOnOpponentHasLostConnectionFunc)(___funcPtr0);

}
extern "C" void DEFAULT_CALL _assignOnOpponentHasLeftMatchFunc(intptr_t);
// System.Void SkillzSDK.Api::_assignOnOpponentHasLeftMatchFunc(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Api__assignOnOpponentHasLeftMatchFunc_m3279437057 (RuntimeObject * __this /* static, unused */, intptr_t ___funcPtr0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_assignOnOpponentHasLeftMatchFunc)(___funcPtr0);

}
extern "C" void DEFAULT_CALL _assignOnDidReceiveDataFunc(intptr_t);
// System.Void SkillzSDK.Api::_assignOnDidReceiveDataFunc(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Api__assignOnDidReceiveDataFunc_m1288969172 (RuntimeObject * __this /* static, unused */, intptr_t ___funcPtr0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_assignOnDidReceiveDataFunc)(___funcPtr0);

}
extern "C" void DEFAULT_CALL _assignOnMatchCompletedFunc(intptr_t);
// System.Void SkillzSDK.Api::_assignOnMatchCompletedFunc(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Api__assignOnMatchCompletedFunc_m471762344 (RuntimeObject * __this /* static, unused */, intptr_t ___funcPtr0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_assignOnMatchCompletedFunc)(___funcPtr0);

}
// System.Boolean SkillzSDK.Api::get_IsTournamentInProgress()
extern "C" IL2CPP_METHOD_ATTR bool Api_get_IsTournamentInProgress_m2522558358 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR String_t* Api_get_CurrentUserDisplayName_m403866726 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		Player_t2961656996 * L_0 = Api_GetPlayer_m3941638088(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = L_0->get_DisplayName_0();
		return L_1;
	}
}
// SkillzSDK.Player SkillzSDK.Api::GetPlayer()
extern "C" IL2CPP_METHOD_ATTR Player_t2961656996 * Api_GetPlayer_m3941638088 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Api_GetPlayer_m3941638088_MetadataUsageId);
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
		Player_t2961656996 * L_5 = (Player_t2961656996 *)il2cpp_codegen_object_new(Player_t2961656996_il2cpp_TypeInfo_var);
		Player__ctor_m2866643626(L_5, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.String SkillzSDK.Api::get_SDKVersionShort()
extern "C" IL2CPP_METHOD_ATTR String_t* Api_get_SDKVersionShort_m3300381882 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR void Api_Initialize_m1562849269 (RuntimeObject * __this /* static, unused */, String_t* ___gameId0, int32_t ___environment1, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR void Api_LaunchSkillz_m3695930818 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR void Api_UpdatePlayerScore_m3917494721 (RuntimeObject * __this /* static, unused */, float ___currentScoreForPlayer0, const RuntimeMethod* method)
{
	{
		float L_0 = ___currentScoreForPlayer0;
		Api__updatePlayersCurrentScore_m246008890(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzSDK.Api::UpdatePlayerScore(System.String)
extern "C" IL2CPP_METHOD_ATTR void Api_UpdatePlayerScore_m3418103691 (RuntimeObject * __this /* static, unused */, String_t* ___currentScoreForPlayer0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___currentScoreForPlayer0;
		Api__updatePlayersCurrentStringScore_m4005077211(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzSDK.Api::UpdatePlayerScore(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Api_UpdatePlayerScore_m2639514829 (RuntimeObject * __this /* static, unused */, int32_t ___currentScoreForPlayer0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___currentScoreForPlayer0;
		Api__updatePlayersCurrentIntScore_m3021323692(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzSDK.Api::AbortGame()
extern "C" IL2CPP_METHOD_ATTR void Api_AbortGame_m1087523040 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Api_AbortGame_m1087523040_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Api__notifyPlayerAbortWithCompletion_m960311694(NULL /*static, unused*/, /*hidden argument*/NULL);
		((Api_t3979125197_StaticFields*)il2cpp_codegen_static_fields_for(Api_t3979125197_il2cpp_TypeInfo_var))->set__matchInfo_0((Match_t1925635937 *)NULL);
		return;
	}
}
// System.Void SkillzSDK.Api::FinishTournament(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Api_FinishTournament_m2922484481 (RuntimeObject * __this /* static, unused */, int32_t ___score0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Api_FinishTournament_m2922484481_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___score0;
		Api__displayTournamentResultsWithScore_m3315146318(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		((Api_t3979125197_StaticFields*)il2cpp_codegen_static_fields_for(Api_t3979125197_il2cpp_TypeInfo_var))->set__matchInfo_0((Match_t1925635937 *)NULL);
		return;
	}
}
// System.Void SkillzSDK.Api::FinishTournament(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Api_FinishTournament_m3112126626 (RuntimeObject * __this /* static, unused */, float ___score0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Api_FinishTournament_m3112126626_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___score0;
		Api__displayTournamentResultsWithFloatScore_m1284634361(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		((Api_t3979125197_StaticFields*)il2cpp_codegen_static_fields_for(Api_t3979125197_il2cpp_TypeInfo_var))->set__matchInfo_0((Match_t1925635937 *)NULL);
		return;
	}
}
// System.Void SkillzSDK.Api::FinishTournament(System.String)
extern "C" IL2CPP_METHOD_ATTR void Api_FinishTournament_m3069090011 (RuntimeObject * __this /* static, unused */, String_t* ___score0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Api_FinishTournament_m3069090011_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___score0;
		Api__displayTournamentResultsWithStringScore_m2296794800(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		((Api_t3979125197_StaticFields*)il2cpp_codegen_static_fields_for(Api_t3979125197_il2cpp_TypeInfo_var))->set__matchInfo_0((Match_t1925635937 *)NULL);
		return;
	}
}
// System.Void SkillzSDK.Api::FinishTurn(System.String,SkillzSDK.TurnBasedRoundOutcome,SkillzSDK.TurnBasedMatchOutcome)
extern "C" IL2CPP_METHOD_ATTR void Api_FinishTurn_m3247793548 (RuntimeObject * __this /* static, unused */, String_t* ___gameData0, int32_t ___roundOutcome1, int32_t ___matchOutcome2, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR void Api_FinishTurn_m1359245850 (RuntimeObject * __this /* static, unused */, String_t* ___gameData0, int32_t ___roundOutcome1, int32_t ___matchOutcome2, String_t* ___playerTurnScore3, float ___playerTotalScore4, float ___opponentTotalScore5, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR void Api_FinishReviewingTurn_m2951052610 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		Api__finishReviewingCurrentGameState_m376951918(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzSDK.Api::SetAsyncTurnReviewDisabled()
extern "C" IL2CPP_METHOD_ATTR void Api_SetAsyncTurnReviewDisabled_m2907381303 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		Api__setAsyncTurnReviewDisabled_m1148959024(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzSDK.Api::AddMetadataForMatchInProgress(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Api_AddMetadataForMatchInProgress_m3539437012 (RuntimeObject * __this /* static, unused */, String_t* ___metadataJson0, bool ___forMatchInProgress1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___metadataJson0;
		bool L_1 = ___forMatchInProgress1;
		Api__addMetadataForMatchInProgress_m3365956122(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 SkillzSDK.Api::GetRandomNumber()
extern "C" IL2CPP_METHOD_ATTR int32_t Api_GetRandomNumber_m3472583166 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		int32_t L_0 = Api__getRandomNumber_m626801295(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 SkillzSDK.Api::GetRandomNumber(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Api_GetRandomNumber_m1864709087 (RuntimeObject * __this /* static, unused */, int32_t ___min0, int32_t ___max1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___min0;
		int32_t L_1 = ___max1;
		int32_t L_2 = Api__getRandomNumberWithMinAndMax_m679981106(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void SkillzSDK.Api::PrintSDKVersionInfo()
extern "C" IL2CPP_METHOD_ATTR void Api_PrintSDKVersionInfo_m321791972 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		Api__showSDKVersionInfo_m2617811748(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Hashtable SkillzSDK.Api::GetMatchRules()
extern "C" IL2CPP_METHOD_ATTR Hashtable_t1853889766 * Api_GetMatchRules_m1004458514 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
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
// SkillzSDK.Match SkillzSDK.Api::GetMatchInfo()
extern "C" IL2CPP_METHOD_ATTR Match_t1925635937 * Api_GetMatchInfo_m3194907896 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Api_GetMatchInfo_m3194907896_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Dictionary_2_t2865362463 * V_1 = NULL;
	{
		Match_t1925635937 * L_0 = ((Api_t3979125197_StaticFields*)il2cpp_codegen_static_fields_for(Api_t3979125197_il2cpp_TypeInfo_var))->get__matchInfo_0();
		if (L_0)
		{
			goto IL_0027;
		}
	}
	{
		intptr_t L_1 = Api__getMatchInfo_m2337796399(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		String_t* L_2 = Marshal_PtrToStringAnsi_m2474145239(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		Dictionary_2_t2865362463 * L_4 = Api_DeserializeJSONToDictionary_m2968966310(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		Dictionary_2_t2865362463 * L_5 = V_1;
		Match_t1925635937 * L_6 = (Match_t1925635937 *)il2cpp_codegen_object_new(Match_t1925635937_il2cpp_TypeInfo_var);
		Match__ctor_m3021370963(L_6, L_5, /*hidden argument*/NULL);
		((Api_t3979125197_StaticFields*)il2cpp_codegen_static_fields_for(Api_t3979125197_il2cpp_TypeInfo_var))->set__matchInfo_0(L_6);
	}

IL_0027:
	{
		Match_t1925635937 * L_7 = ((Api_t3979125197_StaticFields*)il2cpp_codegen_static_fields_for(Api_t3979125197_il2cpp_TypeInfo_var))->get__matchInfo_0();
		return L_7;
	}
}
// System.Void SkillzSDK.Api::InitializeSyncDelegate(SkillzSyncDelegate)
extern "C" IL2CPP_METHOD_ATTR void Api_InitializeSyncDelegate_m3298977276 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___messageHandler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Api_InitializeSyncDelegate_m3298977276_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, _stringLiteral2576486197, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___messageHandler0;
		((Api_t3979125197_StaticFields*)il2cpp_codegen_static_fields_for(Api_t3979125197_il2cpp_TypeInfo_var))->set__syncMessageHandler_1(L_0);
		Api_AssignSyncDelegateFunctions_m1182359800(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzSDK.Api::SendData(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void Api_SendData_m1108896310 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___data0, const RuntimeMethod* method)
{
	UnmanagedArray_t473089838  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ByteU5BU5D_t4116647657* L_0 = ___data0;
		UnmanagedArray__ctor_m1850023207((&V_0), L_0, /*hidden argument*/NULL);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		intptr_t L_1 = UnmanagedArray_get_IntPtr_m2046982699((&V_0), /*hidden argument*/NULL);
		uint64_t L_2 = UnmanagedArray_get_Length_m2351073396((&V_0), /*hidden argument*/NULL);
		Api__sendData_m792227317(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x2E, FINALLY_0020);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0020;
	}

FINALLY_0020:
	{ // begin finally (depth: 1)
		UnmanagedArray_System_IDisposable_Dispose_m3667934263((&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(32)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(32)
	{
		IL2CPP_JUMP_TBL(0x2E, IL_002e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002e:
	{
		return;
	}
}
// System.Boolean SkillzSDK.Api::IsMatchCompleted()
extern "C" IL2CPP_METHOD_ATTR bool Api_IsMatchCompleted_m2508831252 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		bool L_0 = Api__isMatchCompleted_m3255659469(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 SkillzSDK.Api::ConnectedPlayerCount()
extern "C" IL2CPP_METHOD_ATTR int32_t Api_ConnectedPlayerCount_m128605996 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		int32_t L_0 = Api__connectedPlayerCount_m1353591401(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.UInt64 SkillzSDK.Api::CurrentPlayerId()
extern "C" IL2CPP_METHOD_ATTR uint64_t Api_CurrentPlayerId_m3066158680 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = Api__currentPlayerId_m3944569893(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.UInt64 SkillzSDK.Api::CurrentOpponentPlayerId()
extern "C" IL2CPP_METHOD_ATTR uint64_t Api_CurrentOpponentPlayerId_m95968456 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = Api__currentOpponentPlayerId_m3146369036(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.UInt64 SkillzSDK.Api::GetServerTime()
extern "C" IL2CPP_METHOD_ATTR uint64_t Api_GetServerTime_m4231984796 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = Api__getServerTime_m3965035565(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 SkillzSDK.Api::ReconnectTimeLeftForPlayer(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR int32_t Api_ReconnectTimeLeftForPlayer_m3531880109 (RuntimeObject * __this /* static, unused */, uint64_t ___playerId0, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = ___playerId0;
		int32_t L_1 = Api__reconnectTimeLeftForPlayer_m3248060915(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void SkillzSDK.Api::onOpponentHasLostConnection(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR void Api_onOpponentHasLostConnection_m2105192804 (RuntimeObject * __this /* static, unused */, uint64_t ___playerId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Api_onOpponentHasLostConnection_m2105192804_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((Api_t3979125197_StaticFields*)il2cpp_codegen_static_fields_for(Api_t3979125197_il2cpp_TypeInfo_var))->get__syncMessageHandler_1();
		uint64_t L_1 = ___playerId0;
		NullCheck(L_0);
		InterfaceActionInvoker1< uint64_t >::Invoke(5 /* System.Void SkillzSyncDelegate::OnOpponentHasLostConnection(System.UInt64) */, SkillzSyncDelegate_t3579437812_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Void SkillzSDK.Api::onOpponentHasReconnected(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR void Api_onOpponentHasReconnected_m1415751927 (RuntimeObject * __this /* static, unused */, uint64_t ___playerId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Api_onOpponentHasReconnected_m1415751927_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((Api_t3979125197_StaticFields*)il2cpp_codegen_static_fields_for(Api_t3979125197_il2cpp_TypeInfo_var))->get__syncMessageHandler_1();
		uint64_t L_1 = ___playerId0;
		NullCheck(L_0);
		InterfaceActionInvoker1< uint64_t >::Invoke(6 /* System.Void SkillzSyncDelegate::OnOpponentHasReconnected(System.UInt64) */, SkillzSyncDelegate_t3579437812_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Void SkillzSDK.Api::onOpponentHasLeftMatch(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR void Api_onOpponentHasLeftMatch_m1439901582 (RuntimeObject * __this /* static, unused */, uint64_t ___playerId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Api_onOpponentHasLeftMatch_m1439901582_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((Api_t3979125197_StaticFields*)il2cpp_codegen_static_fields_for(Api_t3979125197_il2cpp_TypeInfo_var))->get__syncMessageHandler_1();
		uint64_t L_1 = ___playerId0;
		NullCheck(L_0);
		InterfaceActionInvoker1< uint64_t >::Invoke(7 /* System.Void SkillzSyncDelegate::OnOpponentHasLeftMatch(System.UInt64) */, SkillzSyncDelegate_t3579437812_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Void SkillzSDK.Api::onCurrentPlayerHasLostConnection()
extern "C" IL2CPP_METHOD_ATTR void Api_onCurrentPlayerHasLostConnection_m1013680920 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Api_onCurrentPlayerHasLostConnection_m1013680920_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((Api_t3979125197_StaticFields*)il2cpp_codegen_static_fields_for(Api_t3979125197_il2cpp_TypeInfo_var))->get__syncMessageHandler_1();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void SkillzSyncDelegate::OnCurrentPlayerHasLostConnection() */, SkillzSyncDelegate_t3579437812_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void SkillzSDK.Api::onCurrentPlayerHasReconnected()
extern "C" IL2CPP_METHOD_ATTR void Api_onCurrentPlayerHasReconnected_m372574391 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Api_onCurrentPlayerHasReconnected_m372574391_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((Api_t3979125197_StaticFields*)il2cpp_codegen_static_fields_for(Api_t3979125197_il2cpp_TypeInfo_var))->get__syncMessageHandler_1();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void SkillzSyncDelegate::OnCurrentPlayerHasReconnected() */, SkillzSyncDelegate_t3579437812_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void SkillzSDK.Api::onCurrentPlayerHasLeftMatch()
extern "C" IL2CPP_METHOD_ATTR void Api_onCurrentPlayerHasLeftMatch_m2836739900 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Api_onCurrentPlayerHasLeftMatch_m2836739900_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((Api_t3979125197_StaticFields*)il2cpp_codegen_static_fields_for(Api_t3979125197_il2cpp_TypeInfo_var))->get__syncMessageHandler_1();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(4 /* System.Void SkillzSyncDelegate::OnCurrentPlayerHasLeftMatch() */, SkillzSyncDelegate_t3579437812_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void SkillzSDK.Api::onDidReceiveData(System.IntPtr,System.UInt64)
extern "C" IL2CPP_METHOD_ATTR void Api_onDidReceiveData_m1898136842 (RuntimeObject * __this /* static, unused */, intptr_t ___value0, uint64_t ___length1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Api_onDidReceiveData_m1898136842_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	{
		uint64_t L_0 = ___length1;
		if ((uint64_t)(L_0) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(),Api_onDidReceiveData_m1898136842_RuntimeMethod_var);
		V_0 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)(((intptr_t)L_0))));
		intptr_t L_1 = ___value0;
		ByteU5BU5D_t4116647657* L_2 = V_0;
		uint64_t L_3 = ___length1;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		Marshal_Copy_m1222846562(NULL /*static, unused*/, L_1, L_2, 0, (((int32_t)((int32_t)L_3))), /*hidden argument*/NULL);
		RuntimeObject* L_4 = ((Api_t3979125197_StaticFields*)il2cpp_codegen_static_fields_for(Api_t3979125197_il2cpp_TypeInfo_var))->get__syncMessageHandler_1();
		ByteU5BU5D_t4116647657* L_5 = V_0;
		NullCheck(L_4);
		InterfaceActionInvoker1< ByteU5BU5D_t4116647657* >::Invoke(1 /* System.Void SkillzSyncDelegate::OnDidReceiveData(System.Byte[]) */, SkillzSyncDelegate_t3579437812_il2cpp_TypeInfo_var, L_4, L_5);
		return;
	}
}
// System.Void SkillzSDK.Api::onMatchCompleted()
extern "C" IL2CPP_METHOD_ATTR void Api_onMatchCompleted_m2950294816 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Api_onMatchCompleted_m2950294816_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((Api_t3979125197_StaticFields*)il2cpp_codegen_static_fields_for(Api_t3979125197_il2cpp_TypeInfo_var))->get__syncMessageHandler_1();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void SkillzSyncDelegate::OnMatchCompleted() */, SkillzSyncDelegate_t3579437812_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void SkillzSDK.Api::AssignSyncDelegateFunctions()
extern "C" IL2CPP_METHOD_ATTR void Api_AssignSyncDelegateFunctions_m1182359800 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Api_AssignSyncDelegateFunctions_m1182359800_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	VoidFP_t530139871 * V_0 = NULL;
	intptr_t V_1;
	memset(&V_1, 0, sizeof(V_1));
	IntPtrIntFP_t2813787974 * V_2 = NULL;
	intptr_t V_3;
	memset(&V_3, 0, sizeof(V_3));
	IntFP_t1593217519 * V_4 = NULL;
	intptr_t V_5;
	memset(&V_5, 0, sizeof(V_5));
	IntFP_t1593217519 * V_6 = NULL;
	intptr_t V_7;
	memset(&V_7, 0, sizeof(V_7));
	IntFP_t1593217519 * V_8 = NULL;
	intptr_t V_9;
	memset(&V_9, 0, sizeof(V_9));
	VoidFP_t530139871 * V_10 = NULL;
	intptr_t V_11;
	memset(&V_11, 0, sizeof(V_11));
	VoidFP_t530139871 * V_12 = NULL;
	intptr_t V_13;
	memset(&V_13, 0, sizeof(V_13));
	VoidFP_t530139871 * V_14 = NULL;
	intptr_t V_15;
	memset(&V_15, 0, sizeof(V_15));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, _stringLiteral3066886670, /*hidden argument*/NULL);
		intptr_t L_0 = (intptr_t)Api_onMatchCompleted_m2950294816_RuntimeMethod_var;
		VoidFP_t530139871 * L_1 = (VoidFP_t530139871 *)il2cpp_codegen_object_new(VoidFP_t530139871_il2cpp_TypeInfo_var);
		VoidFP__ctor_m95988028(L_1, NULL, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		VoidFP_t530139871 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		intptr_t L_3 = Marshal_GetFunctionPointerForDelegate_m3926782411(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		intptr_t L_4 = V_1;
		Api__assignOnMatchCompletedFunc_m471762344(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		intptr_t L_5 = (intptr_t)Api_onDidReceiveData_m1898136842_RuntimeMethod_var;
		IntPtrIntFP_t2813787974 * L_6 = (IntPtrIntFP_t2813787974 *)il2cpp_codegen_object_new(IntPtrIntFP_t2813787974_il2cpp_TypeInfo_var);
		IntPtrIntFP__ctor_m919571878(L_6, NULL, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		IntPtrIntFP_t2813787974 * L_7 = V_2;
		intptr_t L_8 = Marshal_GetFunctionPointerForDelegate_m3926782411(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		intptr_t L_9 = V_3;
		Api__assignOnDidReceiveDataFunc_m1288969172(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		intptr_t L_10 = (intptr_t)Api_onOpponentHasLostConnection_m2105192804_RuntimeMethod_var;
		IntFP_t1593217519 * L_11 = (IntFP_t1593217519 *)il2cpp_codegen_object_new(IntFP_t1593217519_il2cpp_TypeInfo_var);
		IntFP__ctor_m3225314397(L_11, NULL, L_10, /*hidden argument*/NULL);
		V_4 = L_11;
		IntFP_t1593217519 * L_12 = V_4;
		intptr_t L_13 = Marshal_GetFunctionPointerForDelegate_m3926782411(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		V_5 = L_13;
		intptr_t L_14 = V_5;
		Api__assignOnOpponentHasLostConnectionFunc_m3724441159(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		intptr_t L_15 = (intptr_t)Api_onOpponentHasReconnected_m1415751927_RuntimeMethod_var;
		IntFP_t1593217519 * L_16 = (IntFP_t1593217519 *)il2cpp_codegen_object_new(IntFP_t1593217519_il2cpp_TypeInfo_var);
		IntFP__ctor_m3225314397(L_16, NULL, L_15, /*hidden argument*/NULL);
		V_6 = L_16;
		IntFP_t1593217519 * L_17 = V_6;
		intptr_t L_18 = Marshal_GetFunctionPointerForDelegate_m3926782411(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		V_7 = L_18;
		intptr_t L_19 = V_7;
		Api__assignOnOpponentHasReconnectedFunc_m1605869870(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		intptr_t L_20 = (intptr_t)Api_onOpponentHasLeftMatch_m1439901582_RuntimeMethod_var;
		IntFP_t1593217519 * L_21 = (IntFP_t1593217519 *)il2cpp_codegen_object_new(IntFP_t1593217519_il2cpp_TypeInfo_var);
		IntFP__ctor_m3225314397(L_21, NULL, L_20, /*hidden argument*/NULL);
		V_8 = L_21;
		IntFP_t1593217519 * L_22 = V_8;
		intptr_t L_23 = Marshal_GetFunctionPointerForDelegate_m3926782411(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		V_9 = L_23;
		intptr_t L_24 = V_9;
		Api__assignOnOpponentHasLeftMatchFunc_m3279437057(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		intptr_t L_25 = (intptr_t)Api_onCurrentPlayerHasLostConnection_m1013680920_RuntimeMethod_var;
		VoidFP_t530139871 * L_26 = (VoidFP_t530139871 *)il2cpp_codegen_object_new(VoidFP_t530139871_il2cpp_TypeInfo_var);
		VoidFP__ctor_m95988028(L_26, NULL, L_25, /*hidden argument*/NULL);
		V_10 = L_26;
		VoidFP_t530139871 * L_27 = V_10;
		intptr_t L_28 = Marshal_GetFunctionPointerForDelegate_m3926782411(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		V_11 = L_28;
		intptr_t L_29 = V_11;
		Api__assignOnCurrentPlayerHasLostConnectionFunc_m2707933677(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		intptr_t L_30 = (intptr_t)Api_onCurrentPlayerHasReconnected_m372574391_RuntimeMethod_var;
		VoidFP_t530139871 * L_31 = (VoidFP_t530139871 *)il2cpp_codegen_object_new(VoidFP_t530139871_il2cpp_TypeInfo_var);
		VoidFP__ctor_m95988028(L_31, NULL, L_30, /*hidden argument*/NULL);
		V_12 = L_31;
		VoidFP_t530139871 * L_32 = V_12;
		intptr_t L_33 = Marshal_GetFunctionPointerForDelegate_m3926782411(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		V_13 = L_33;
		intptr_t L_34 = V_13;
		Api__assignOnCurrentPlayerHasReconnectedFunc_m2565823719(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
		intptr_t L_35 = (intptr_t)Api_onCurrentPlayerHasLeftMatch_m2836739900_RuntimeMethod_var;
		VoidFP_t530139871 * L_36 = (VoidFP_t530139871 *)il2cpp_codegen_object_new(VoidFP_t530139871_il2cpp_TypeInfo_var);
		VoidFP__ctor_m95988028(L_36, NULL, L_35, /*hidden argument*/NULL);
		V_14 = L_36;
		VoidFP_t530139871 * L_37 = V_14;
		intptr_t L_38 = Marshal_GetFunctionPointerForDelegate_m3926782411(NULL /*static, unused*/, L_37, /*hidden argument*/NULL);
		V_15 = L_38;
		intptr_t L_39 = V_15;
		Api__assignOnCurrentPlayerHasLeftMatchFunc_m1300170528(NULL /*static, unused*/, L_39, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzSDK.Api::setSkillzBackgroundMusic(System.String)
extern "C" IL2CPP_METHOD_ATTR void Api_setSkillzBackgroundMusic_m628192280 (RuntimeObject * __this /* static, unused */, String_t* ___fileName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Api_setSkillzBackgroundMusic_m628192280_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___fileName0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral619873164, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___fileName0;
		Api__setSkillzBackgroundMusic_m3226946192(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Single SkillzSDK.Api::getSkillzMusicVolume()
extern "C" IL2CPP_METHOD_ATTR float Api_getSkillzMusicVolume_m1583083845 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Api_getSkillzMusicVolume_m1583083845_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = Api__getSkillzMusicVolume_m3880318224(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = V_0;
		float L_2 = L_1;
		RuntimeObject * L_3 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral679680572, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		float L_5 = V_0;
		return L_5;
	}
}
// System.Void SkillzSDK.Api::setSkillzMusicVolume(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Api_setSkillzMusicVolume_m1647961181 (RuntimeObject * __this /* static, unused */, float ___volume0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Api_setSkillzMusicVolume_m1647961181_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___volume0;
		float L_1 = L_0;
		RuntimeObject * L_2 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral1220058643, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		float L_4 = ___volume0;
		Api__setSkillzMusicVolume_m20115881(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Single SkillzSDK.Api::getSFXVolume()
extern "C" IL2CPP_METHOD_ATTR float Api_getSFXVolume_m2121641713 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Api_getSFXVolume_m2121641713_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = Api__getSFXVolume_m2909607583(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = V_0;
		float L_2 = L_1;
		RuntimeObject * L_3 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral1762095029, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		float L_5 = V_0;
		return L_5;
	}
}
// System.Void SkillzSDK.Api::setSFXVolume(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Api_setSFXVolume_m1465432439 (RuntimeObject * __this /* static, unused */, float ___volume0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Api_setSFXVolume_m1465432439_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___volume0;
		float L_1 = L_0;
		RuntimeObject * L_2 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral2951223259, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		float L_4 = ___volume0;
		Api__setSFXVolume_m741456116(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> SkillzSDK.Api::DeserializeJSONToDictionary(System.String)
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t2865362463 * Api_DeserializeJSONToDictionary_m2968966310 (RuntimeObject * __this /* static, unused */, String_t* ___jsonString0, const RuntimeMethod* method)
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
extern "C"  void DelegatePInvokeWrapper_IntFP_t1593217519 (IntFP_t1593217519 * __this, uint64_t ___playerId0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(uint64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___playerId0);

}
// System.Void SkillzSDK.Api/IntFP::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void IntFP__ctor_m3225314397 (IntFP_t1593217519 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void SkillzSDK.Api/IntFP::Invoke(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR void IntFP_Invoke_m1926321814 (IntFP_t1593217519 * __this, uint64_t ___playerId0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		IntFP_Invoke_m1926321814((IntFP_t1593217519 *)__this->get_prev_9(), ___playerId0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, uint64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___playerId0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, uint64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___playerId0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< uint64_t >::Invoke(targetMethod, targetThis, ___playerId0);
					else
						GenericVirtActionInvoker1< uint64_t >::Invoke(targetMethod, targetThis, ___playerId0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< uint64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___playerId0);
					else
						VirtActionInvoker1< uint64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___playerId0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, uint64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___playerId0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult SkillzSDK.Api/IntFP::BeginInvoke(System.UInt64,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IntFP_BeginInvoke_m2323997238 (IntFP_t1593217519 * __this, uint64_t ___playerId0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IntFP_BeginInvoke_m2323997238_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UInt64_t4134040092_il2cpp_TypeInfo_var, &___playerId0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void SkillzSDK.Api/IntFP::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void IntFP_EndInvoke_m944068297 (IntFP_t1593217519 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_IntPtrIntFP_t2813787974 (IntPtrIntFP_t2813787974 * __this, intptr_t ___value0, uint64_t ___length1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, uint64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___value0, ___length1);

}
// System.Void SkillzSDK.Api/IntPtrIntFP::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void IntPtrIntFP__ctor_m919571878 (IntPtrIntFP_t2813787974 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void SkillzSDK.Api/IntPtrIntFP::Invoke(System.IntPtr,System.UInt64)
extern "C" IL2CPP_METHOD_ATTR void IntPtrIntFP_Invoke_m2182212509 (IntPtrIntFP_t2813787974 * __this, intptr_t ___value0, uint64_t ___length1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		IntPtrIntFP_Invoke_m2182212509((IntPtrIntFP_t2813787974 *)__this->get_prev_9(), ___value0, ___length1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, intptr_t, uint64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___value0, ___length1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, intptr_t, uint64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___value0, ___length1, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, uint64_t >::Invoke(targetMethod, targetThis, ___value0, ___length1);
					else
						GenericVirtActionInvoker2< intptr_t, uint64_t >::Invoke(targetMethod, targetThis, ___value0, ___length1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, uint64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___value0, ___length1);
					else
						VirtActionInvoker2< intptr_t, uint64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___value0, ___length1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, uint64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___value0, ___length1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult SkillzSDK.Api/IntPtrIntFP::BeginInvoke(System.IntPtr,System.UInt64,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IntPtrIntFP_BeginInvoke_m1788294272 (IntPtrIntFP_t2813787974 * __this, intptr_t ___value0, uint64_t ___length1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IntPtrIntFP_BeginInvoke_m1788294272_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___value0);
	__d_args[1] = Box(UInt64_t4134040092_il2cpp_TypeInfo_var, &___length1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void SkillzSDK.Api/IntPtrIntFP::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void IntPtrIntFP_EndInvoke_m2151682975 (IntPtrIntFP_t2813787974 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SkillzSDK.Api/MonoPInvokeCallbackAttribute::.ctor(System.Type)
extern "C" IL2CPP_METHOD_ATTR void MonoPInvokeCallbackAttribute__ctor_m2587159963 (MonoPInvokeCallbackAttribute_t921095372 * __this, Type_t * ___t0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m1529526131(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___t0;
		__this->set_type_0(L_0);
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
// System.Single SkillzSDK.Api/Random::Value()
extern "C" IL2CPP_METHOD_ATTR float Random_Value_m3937663143 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Random_InsideUnitSphere_m1273973450 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Random_InsideUnitCircle_m1942269933 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Random_OnUnitSphere_m1006952296 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Random_RotationUniform_m2406981108 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Random_Rotation_m4052302809 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		Quaternion_t2301928331  L_0 = Random_RotationUniform_m2406981108(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Single SkillzSDK.Api/Random::Range(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Random_Range_m3260912103 (RuntimeObject * __this /* static, unused */, float ___min0, float ___max1, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR int32_t Random_Range_m1954521421 (RuntimeObject * __this /* static, unused */, int32_t ___min0, int32_t ___max1, const RuntimeMethod* method)
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
extern "C"  void DelegatePInvokeWrapper_VoidFP_t530139871 (VoidFP_t530139871 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void SkillzSDK.Api/VoidFP::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void VoidFP__ctor_m95988028 (VoidFP_t530139871 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void SkillzSDK.Api/VoidFP::Invoke()
extern "C" IL2CPP_METHOD_ATTR void VoidFP_Invoke_m1981215275 (VoidFP_t530139871 * __this, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		VoidFP_Invoke_m1981215275((VoidFP_t530139871 *)__this->get_prev_9(), method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 0)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult SkillzSDK.Api/VoidFP::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* VoidFP_BeginInvoke_m3064221 (VoidFP_t530139871 * __this, AsyncCallback_t3962456242 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void SkillzSDK.Api/VoidFP::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void VoidFP_EndInvoke_m2515749220 (VoidFP_t530139871 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
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
extern "C" IL2CPP_METHOD_ATTR Nullable_1_t1819850047  SkillzExtensions_SafeGetBoolValue_m2039874569 (RuntimeObject * __this /* static, unused */, Dictionary_2_t2865362463 * ___dict0, String_t* ___key1, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR Nullable_1_t2317227445  SkillzExtensions_SafeGetDoubleValue_m1033428401 (RuntimeObject * __this /* static, unused */, Dictionary_2_t2865362463 * ___dict0, String_t* ___key1, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR Nullable_1_t1166124571  SkillzExtensions_SafeGetUnixDateTimeValue_m2661374245 (RuntimeObject * __this /* static, unused */, Dictionary_2_t2865362463 * ___dict0, String_t* ___key1, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR Nullable_1_t378540539  SkillzExtensions_SafeGetIntValue_m2048183163 (RuntimeObject * __this /* static, unused */, Dictionary_2_t2865362463 * ___dict0, String_t* ___key1, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR Nullable_1_t4282624060  SkillzExtensions_SafeGetUintValue_m475157154 (RuntimeObject * __this /* static, unused */, Dictionary_2_t2865362463 * ___dict0, String_t* ___key1, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR String_t* SkillzExtensions_SafeGetStringValue_m3748395908 (RuntimeObject * __this /* static, unused */, Dictionary_2_t2865362463 * ___dict0, String_t* ___key1, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * SkillzExtensions_SafeGetValue_m1149006436 (RuntimeObject * __this /* static, unused */, Dictionary_2_t2865362463 * ___dict0, String_t* ___key1, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR Nullable_1_t1819850047  Helpers_SafeBoolParse_m4269993608 (RuntimeObject * __this /* static, unused */, String_t* ___str0, String_t* ___trueStr1, String_t* ___falseStr2, String_t* ___trueInt3, String_t* ___falseInt4, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR Nullable_1_t1166124571  Helpers_SafeParseUnixTime_m1673506953 (RuntimeObject * __this /* static, unused */, Nullable_1_t2317227445  ___unixTime0, const RuntimeMethod* method)
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
		bool L_0 = Nullable_1_get_HasValue_m1700900799((&___unixTime0), /*hidden argument*/Nullable_1_get_HasValue_m1700900799_RuntimeMethod_var);
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
		DateTime__ctor_m2956360140((&V_1), ((int32_t)1970), 1, 1, 0, 0, 0, 1, /*hidden argument*/NULL);
		double L_2 = Nullable_1_get_Value_m3507161817((&___unixTime0), /*hidden argument*/Nullable_1_get_Value_m3507161817_RuntimeMethod_var);
		DateTime_t3738529785  L_3 = DateTime_AddSeconds_m332574389((&V_1), L_2, /*hidden argument*/NULL);
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
extern "C" IL2CPP_METHOD_ATTR Nullable_1_t2317227445  Helpers_SafeDoubleParse_m3716186029 (RuntimeObject * __this /* static, unused */, String_t* ___str0, const RuntimeMethod* method)
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
		bool L_1 = Double_TryParse_m3021978240(NULL /*static, unused*/, L_0, (&V_0), /*hidden argument*/NULL);
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
extern "C" IL2CPP_METHOD_ATTR Nullable_1_t378540539  Helpers_SafeIntParse_m1084147332 (RuntimeObject * __this /* static, unused */, String_t* ___str0, const RuntimeMethod* method)
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
		bool L_1 = Int32_TryParse_m2404707562(NULL /*static, unused*/, L_0, (&V_0), /*hidden argument*/NULL);
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
extern "C" IL2CPP_METHOD_ATTR Nullable_1_t4282624060  Helpers_SafeUintParse_m2387950348 (RuntimeObject * __this /* static, unused */, String_t* ___str0, const RuntimeMethod* method)
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
		bool L_1 = UInt32_TryParse_m2819179361(NULL /*static, unused*/, L_0, (&V_0), /*hidden argument*/NULL);
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
extern "C" IL2CPP_METHOD_ATTR void Match__ctor_m3021370963 (Match_t1925635937 * __this, Dictionary_2_t2865362463 * ___jsonData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Match__ctor_m3021370963_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t2317227445  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Nullable_1_t1819850047  V_1;
	memset(&V_1, 0, sizeof(V_1));
	RuntimeObject * V_2 = NULL;
	List_1_t257213610 * V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	Enumerator_t2146457487  V_5;
	memset(&V_5, 0, sizeof(V_5));
	RuntimeObject * V_6 = NULL;
	KeyValuePair_2_t968067334  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Enumerator_t524577942  V_8;
	memset(&V_8, 0, sizeof(V_8));
	String_t* V_9 = NULL;
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
		double L_4 = Nullable_1_get_Value_m3507161817((&V_0), /*hidden argument*/Nullable_1_get_Value_m3507161817_RuntimeMethod_var);
		Nullable_1_t3119828856  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Nullable_1__ctor_m2775392932((&L_5), (((float)((float)L_4))), /*hidden argument*/Nullable_1__ctor_m2775392932_RuntimeMethod_var);
		__this->set_EntryCash_7(L_5);
		Dictionary_2_t2865362463 * L_6 = ___jsonData0;
		Nullable_1_t378540539  L_7 = SkillzExtensions_SafeGetIntValue_m2048183163(NULL /*static, unused*/, L_6, _stringLiteral1839984739, /*hidden argument*/NULL);
		__this->set_EntryPoints_6(L_7);
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
		__this->set_IsCash_5(L_15);
		Dictionary_2_t2865362463 * L_16 = ___jsonData0;
		Nullable_1_t1819850047  L_17 = SkillzExtensions_SafeGetBoolValue_m2039874569(NULL /*static, unused*/, L_16, _stringLiteral2615978513, /*hidden argument*/NULL);
		V_1 = L_17;
		bool L_18 = Nullable_1_get_Value_m1177098500((&V_1), /*hidden argument*/Nullable_1_get_Value_m1177098500_RuntimeMethod_var);
		__this->set_IsSynchronous_8(L_18);
		Dictionary_2_t2865362463 * L_19 = ___jsonData0;
		RuntimeObject * L_20 = SkillzExtensions_SafeGetValue_m1149006436(NULL /*static, unused*/, L_19, _stringLiteral380567987, /*hidden argument*/NULL);
		V_2 = L_20;
		List_1_t138764442 * L_21 = (List_1_t138764442 *)il2cpp_codegen_object_new(List_1_t138764442_il2cpp_TypeInfo_var);
		List_1__ctor_m4000051712(L_21, /*hidden argument*/List_1__ctor_m4000051712_RuntimeMethod_var);
		__this->set_Players_9(L_21);
		RuntimeObject * L_22 = V_2;
		V_3 = ((List_1_t257213610 *)CastclassClass((RuntimeObject*)L_22, List_1_t257213610_il2cpp_TypeInfo_var));
		List_1_t257213610 * L_23 = V_3;
		NullCheck(L_23);
		Enumerator_t2146457487  L_24 = List_1_GetEnumerator_m2930774921(L_23, /*hidden argument*/List_1_GetEnumerator_m2930774921_RuntimeMethod_var);
		V_5 = L_24;
	}

IL_00ca:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00ef;
		}

IL_00cf:
		{
			RuntimeObject * L_25 = Enumerator_get_Current_m470245444((&V_5), /*hidden argument*/Enumerator_get_Current_m470245444_RuntimeMethod_var);
			V_4 = L_25;
			List_1_t138764442 * L_26 = __this->get_Players_9();
			RuntimeObject * L_27 = V_4;
			Player_t2961656996 * L_28 = (Player_t2961656996 *)il2cpp_codegen_object_new(Player_t2961656996_il2cpp_TypeInfo_var);
			Player__ctor_m2866643626(L_28, ((Dictionary_2_t2865362463 *)CastclassClass((RuntimeObject*)L_27, Dictionary_2_t2865362463_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			NullCheck(L_26);
			List_1_Add_m2966409634(L_26, L_28, /*hidden argument*/List_1_Add_m2966409634_RuntimeMethod_var);
		}

IL_00ef:
		{
			bool L_29 = Enumerator_MoveNext_m2142368520((&V_5), /*hidden argument*/Enumerator_MoveNext_m2142368520_RuntimeMethod_var);
			if (L_29)
			{
				goto IL_00cf;
			}
		}

IL_00fb:
		{
			IL2CPP_LEAVE(0x10E, FINALLY_0100);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0100;
	}

FINALLY_0100:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3007748546((&V_5), /*hidden argument*/Enumerator_Dispose_m3007748546_RuntimeMethod_var);
		IL2CPP_END_FINALLY(256)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(256)
	{
		IL2CPP_JUMP_TBL(0x10E, IL_010e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_010e:
	{
		Dictionary_2_t1632706988 * L_30 = (Dictionary_2_t1632706988 *)il2cpp_codegen_object_new(Dictionary_2_t1632706988_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4291560139(L_30, /*hidden argument*/Dictionary_2__ctor_m4291560139_RuntimeMethod_var);
		__this->set_GameParams_10(L_30);
		Dictionary_2_t2865362463 * L_31 = ___jsonData0;
		RuntimeObject * L_32 = SkillzExtensions_SafeGetValue_m1149006436(NULL /*static, unused*/, L_31, _stringLiteral135315692, /*hidden argument*/NULL);
		V_6 = L_32;
		RuntimeObject * L_33 = V_6;
		if (!L_33)
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject * L_34 = V_6;
		NullCheck(L_34);
		Type_t * L_35 = Object_GetType_m88164663(L_34, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_36 = { reinterpret_cast<intptr_t> (Dictionary_2_t2865362463_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_37 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_36, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_35) == ((RuntimeObject*)(Type_t *)L_37))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject * L_38 = V_6;
		NullCheck(((Dictionary_2_t2865362463 *)CastclassClass((RuntimeObject*)L_38, Dictionary_2_t2865362463_il2cpp_TypeInfo_var)));
		Enumerator_t524577942  L_39 = Dictionary_2_GetEnumerator_m788364790(((Dictionary_2_t2865362463 *)CastclassClass((RuntimeObject*)L_38, Dictionary_2_t2865362463_il2cpp_TypeInfo_var)), /*hidden argument*/Dictionary_2_GetEnumerator_m788364790_RuntimeMethod_var);
		V_8 = L_39;
	}

IL_0151:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01ba;
		}

IL_0156:
		{
			KeyValuePair_2_t968067334  L_40 = Enumerator_get_Current_m687346582((&V_8), /*hidden argument*/Enumerator_get_Current_m687346582_RuntimeMethod_var);
			V_7 = L_40;
			RuntimeObject * L_41 = KeyValuePair_2_get_Value_m436157746((&V_7), /*hidden argument*/KeyValuePair_2_get_Value_m436157746_RuntimeMethod_var);
			if (L_41)
			{
				goto IL_0170;
			}
		}

IL_016b:
		{
			goto IL_01ba;
		}

IL_0170:
		{
			RuntimeObject * L_42 = KeyValuePair_2_get_Value_m436157746((&V_7), /*hidden argument*/KeyValuePair_2_get_Value_m436157746_RuntimeMethod_var);
			NullCheck(L_42);
			String_t* L_43 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_42);
			V_9 = L_43;
			String_t* L_44 = KeyValuePair_2_get_Key_m1405741725((&V_7), /*hidden argument*/KeyValuePair_2_get_Key_m1405741725_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_45 = String_op_Equality_m920492651(NULL /*static, unused*/, L_44, _stringLiteral2293145220, /*hidden argument*/NULL);
			if (!L_45)
			{
				goto IL_01a6;
			}
		}

IL_0194:
		{
			String_t* L_46 = V_9;
			Nullable_1_t4282624060  L_47 = Helpers_SafeUintParse_m2387950348(NULL /*static, unused*/, L_46, /*hidden argument*/NULL);
			__this->set_SkillzDifficulty_4(L_47);
			goto IL_01ba;
		}

IL_01a6:
		{
			Dictionary_2_t1632706988 * L_48 = __this->get_GameParams_10();
			String_t* L_49 = KeyValuePair_2_get_Key_m1405741725((&V_7), /*hidden argument*/KeyValuePair_2_get_Key_m1405741725_RuntimeMethod_var);
			String_t* L_50 = V_9;
			NullCheck(L_48);
			Dictionary_2_Add_m2958530770(L_48, L_49, L_50, /*hidden argument*/Dictionary_2_Add_m2958530770_RuntimeMethod_var);
		}

IL_01ba:
		{
			bool L_51 = Enumerator_MoveNext_m597713471((&V_8), /*hidden argument*/Enumerator_MoveNext_m597713471_RuntimeMethod_var);
			if (L_51)
			{
				goto IL_0156;
			}
		}

IL_01c6:
		{
			IL2CPP_LEAVE(0x1D9, FINALLY_01cb);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01cb;
	}

FINALLY_01cb:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2607424534((&V_8), /*hidden argument*/Enumerator_Dispose_m2607424534_RuntimeMethod_var);
		IL2CPP_END_FINALLY(459)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(459)
	{
		IL2CPP_JUMP_TBL(0x1D9, IL_01d9)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_01d9:
	{
		return;
	}
}
// System.String SkillzSDK.Match::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Match_ToString_m1621100561 (Match_t1925635937 * __this, const RuntimeMethod* method)
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
		Dictionary_2_t1632706988 * L_1 = __this->get_GameParams_10();
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
			KeyValuePair_2_t4030379155  L_3 = Enumerator_get_Current_m2519371089((&V_2), /*hidden argument*/Enumerator_get_Current_m2519371089_RuntimeMethod_var);
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
			String_t* L_9 = KeyValuePair_2_get_Key_m3980750512((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m3980750512_RuntimeMethod_var);
			NullCheck(L_8);
			ArrayElementTypeCheck (L_8, L_9);
			(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_9);
			StringU5BU5D_t1281789340* L_10 = L_8;
			NullCheck(L_10);
			ArrayElementTypeCheck (L_10, _stringLiteral3450517398);
			(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral3450517398);
			StringU5BU5D_t1281789340* L_11 = L_10;
			String_t* L_12 = KeyValuePair_2_get_Value_m2243990694((&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m2243990694_RuntimeMethod_var);
			NullCheck(L_11);
			ArrayElementTypeCheck (L_11, L_12);
			(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_12);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_13 = String_Concat_m1809518182(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
			V_0 = L_13;
		}

IL_0055:
		{
			bool L_14 = Enumerator_MoveNext_m1175750522((&V_2), /*hidden argument*/Enumerator_MoveNext_m1175750522_RuntimeMethod_var);
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
		Enumerator_Dispose_m2198401511((&V_2), /*hidden argument*/Enumerator_Dispose_m2198401511_RuntimeMethod_var);
		IL2CPP_END_FINALLY(102)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(102)
	{
		IL2CPP_JUMP_TBL(0x74, IL_0074)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0074:
	{
		ObjectU5BU5D_t2843939325* L_15 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)((int32_t)23)));
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
		Nullable_1_t1819850047  L_38 = __this->get_IsCash_5();
		Nullable_1_t1819850047  L_39 = L_38;
		RuntimeObject * L_40 = Box(Nullable_1_t1819850047_il2cpp_TypeInfo_var, &L_39);
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_40);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (RuntimeObject *)L_40);
		ObjectU5BU5D_t2843939325* L_41 = L_37;
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, _stringLiteral2849815024);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (RuntimeObject *)_stringLiteral2849815024);
		ObjectU5BU5D_t2843939325* L_42 = L_41;
		bool L_43 = __this->get_IsSynchronous_8();
		bool L_44 = L_43;
		RuntimeObject * L_45 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_44);
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, L_45);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (RuntimeObject *)L_45);
		ObjectU5BU5D_t2843939325* L_46 = L_42;
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, _stringLiteral1304305895);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (RuntimeObject *)_stringLiteral1304305895);
		ObjectU5BU5D_t2843939325* L_47 = L_46;
		Nullable_1_t378540539  L_48 = __this->get_EntryPoints_6();
		Nullable_1_t378540539  L_49 = L_48;
		RuntimeObject * L_50 = Box(Nullable_1_t378540539_il2cpp_TypeInfo_var, &L_49);
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, L_50);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (RuntimeObject *)L_50);
		ObjectU5BU5D_t2843939325* L_51 = L_47;
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, _stringLiteral3163162291);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (RuntimeObject *)_stringLiteral3163162291);
		ObjectU5BU5D_t2843939325* L_52 = L_51;
		Nullable_1_t3119828856  L_53 = __this->get_EntryCash_7();
		Nullable_1_t3119828856  L_54 = L_53;
		RuntimeObject * L_55 = Box(Nullable_1_t3119828856_il2cpp_TypeInfo_var, &L_54);
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, L_55);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (RuntimeObject *)L_55);
		ObjectU5BU5D_t2843939325* L_56 = L_52;
		NullCheck(L_56);
		ArrayElementTypeCheck (L_56, _stringLiteral2305604390);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (RuntimeObject *)_stringLiteral2305604390);
		ObjectU5BU5D_t2843939325* L_57 = L_56;
		String_t* L_58 = V_0;
		NullCheck(L_57);
		ArrayElementTypeCheck (L_57, L_58);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (RuntimeObject *)L_58);
		ObjectU5BU5D_t2843939325* L_59 = L_57;
		NullCheck(L_59);
		ArrayElementTypeCheck (L_59, _stringLiteral3806938157);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)20)), (RuntimeObject *)_stringLiteral3806938157);
		ObjectU5BU5D_t2843939325* L_60 = L_59;
		List_1_t138764442 * L_61 = __this->get_Players_9();
		NullCheck(L_60);
		ArrayElementTypeCheck (L_60, L_61);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)21)), (RuntimeObject *)L_61);
		ObjectU5BU5D_t2843939325* L_62 = L_60;
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, _stringLiteral3452614643);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)22)), (RuntimeObject *)_stringLiteral3452614643);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_63 = String_Concat_m2971454694(NULL /*static, unused*/, L_62, /*hidden argument*/NULL);
		return L_63;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> SkillzSDK.Match::HashtableToDictionary(System.Collections.Hashtable)
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t1632706988 * Match_HashtableToDictionary_m417548842 (RuntimeObject * __this /* static, unused */, Hashtable_t1853889766 * ___gameParamsHashTable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Match_HashtableToDictionary_m417548842_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t1632706988 * V_0 = NULL;
	DictionaryEntry_t3123975638  V_1;
	memset(&V_1, 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t1632706988 * L_0 = (Dictionary_2_t1632706988 *)il2cpp_codegen_object_new(Dictionary_2_t1632706988_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4291560139(L_0, /*hidden argument*/Dictionary_2__ctor_m4291560139_RuntimeMethod_var);
		V_0 = L_0;
		Hashtable_t1853889766 * L_1 = ___gameParamsHashTable0;
		NullCheck(L_1);
		RuntimeObject* L_2 = VirtFuncInvoker0< RuntimeObject* >::Invoke(26 /* System.Collections.IDictionaryEnumerator System.Collections.Hashtable::GetEnumerator() */, L_1);
		V_2 = L_2;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003c;
		}

IL_0012:
		{
			RuntimeObject* L_3 = V_2;
			NullCheck(L_3);
			RuntimeObject * L_4 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_3);
			V_1 = ((*(DictionaryEntry_t3123975638 *)((DictionaryEntry_t3123975638 *)UnBox(L_4, DictionaryEntry_t3123975638_il2cpp_TypeInfo_var))));
			Dictionary_2_t1632706988 * L_5 = V_0;
			RuntimeObject * L_6 = DictionaryEntry_get_Key_m3117378551((&V_1), /*hidden argument*/NULL);
			RuntimeObject * L_7 = DictionaryEntry_get_Value_m618120527((&V_1), /*hidden argument*/NULL);
			NullCheck(L_5);
			Dictionary_2_Add_m2958530770(L_5, ((String_t*)CastclassSealed((RuntimeObject*)L_6, String_t_il2cpp_TypeInfo_var)), ((String_t*)CastclassSealed((RuntimeObject*)L_7, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/Dictionary_2_Add_m2958530770_RuntimeMethod_var);
		}

IL_003c:
		{
			RuntimeObject* L_8 = V_2;
			NullCheck(L_8);
			bool L_9 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_8);
			if (L_9)
			{
				goto IL_0012;
			}
		}

IL_0047:
		{
			IL2CPP_LEAVE(0x60, FINALLY_004c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004c;
	}

FINALLY_004c:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_10 = V_2;
			RuntimeObject* L_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_10, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			V_3 = L_11;
			if (!L_11)
			{
				goto IL_005f;
			}
		}

IL_0059:
		{
			RuntimeObject* L_12 = V_3;
			NullCheck(L_12);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_12);
		}

IL_005f:
		{
			IL2CPP_END_FINALLY(76)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(76)
	{
		IL2CPP_JUMP_TBL(0x60, IL_0060)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0060:
	{
		Dictionary_2_t1632706988 * L_13 = V_0;
		return L_13;
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
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Json_Deserialize_m639621384 (RuntimeObject * __this /* static, unused */, String_t* ___json0, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR String_t* Json_Serialize_m338419606 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR void Parser__ctor_m2872727206 (Parser_t744090300 * __this, String_t* ___jsonString0, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR bool Parser_IsWordBreak_m502866020 (RuntimeObject * __this /* static, unused */, Il2CppChar ___c0, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Parser_Parse_m579644997 (RuntimeObject * __this /* static, unused */, String_t* ___jsonString0, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR void Parser_Dispose_m2340866990 (Parser_t744090300 * __this, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t2865362463 * Parser_ParseObject_m2337980612 (Parser_t744090300 * __this, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR List_1_t257213610 * Parser_ParseArray_m452367317 (Parser_t744090300 * __this, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseValue_m3476452396 (Parser_t744090300 * __this, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseByToken_m3089833922 (Parser_t744090300 * __this, int32_t ___token0, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR String_t* Parser_ParseString_m2447585359 (Parser_t744090300 * __this, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseNumber_m2559473348 (Parser_t744090300 * __this, const RuntimeMethod* method)
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
		Int64_TryParse_m3606398488(NULL /*static, unused*/, L_3, ((int32_t)511), L_4, (&V_1), /*hidden argument*/NULL);
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
		Double_TryParse_m623190659(NULL /*static, unused*/, L_8, ((int32_t)511), L_9, (&V_2), /*hidden argument*/NULL);
		double L_10 = V_2;
		double L_11 = L_10;
		RuntimeObject * L_12 = Box(Double_t594665363_il2cpp_TypeInfo_var, &L_11);
		return L_12;
	}
}
// System.Void SkillzSDK.MiniJSON.Json/Parser::EatWhitespace()
extern "C" IL2CPP_METHOD_ATTR void Parser_EatWhitespace_m1572341284 (Parser_t744090300 * __this, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR Il2CppChar Parser_get_PeekChar_m1352524934 (Parser_t744090300 * __this, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR Il2CppChar Parser_get_NextChar_m3195442849 (Parser_t744090300 * __this, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR String_t* Parser_get_NextWord_m2019659234 (Parser_t744090300 * __this, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR int32_t Parser_get_NextToken_m3456563509 (Parser_t744090300 * __this, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR void Serializer__ctor_m3762600030 (Serializer_t2308540583 * __this, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR String_t* Serializer_Serialize_m3997990965 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR void Serializer_SerializeValue_m686405948 (Serializer_t2308540583 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR void Serializer_SerializeObject_m3682694325 (Serializer_t2308540583 * __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR void Serializer_SerializeArray_m1201005993 (Serializer_t2308540583 * __this, RuntimeObject* ___anArray0, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR void Serializer_SerializeString_m4252171944 (Serializer_t2308540583 * __this, String_t* ___str0, const RuntimeMethod* method)
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
		String_t* L_26 = Int32_ToString_m372259452((&V_4), _stringLiteral3451303896, /*hidden argument*/NULL);
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
extern "C" IL2CPP_METHOD_ATTR void Serializer_SerializeOther_m1045354682 (Serializer_t2308540583 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
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
		String_t* L_4 = Single_ToString_m543431371((&V_0), _stringLiteral3452614638, L_3, /*hidden argument*/NULL);
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
		String_t* L_21 = Double_ToString_m1051753975((&V_1), _stringLiteral3452614638, L_20, /*hidden argument*/NULL);
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
// System.Void SkillzSDK.Player::.ctor(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" IL2CPP_METHOD_ATTR void Player__ctor_m2866643626 (Player_t2961656996 * __this, Dictionary_2_t2865362463 * ___playerJSON0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player__ctor_m2866643626_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t4282624060  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Nullable_1_t1561634878  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Nullable_1_t1819850047  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Nullable_1_t4282624060  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Player_t2961656996 * G_B2_0 = NULL;
	Player_t2961656996 * G_B1_0 = NULL;
	Nullable_1_t1561634878  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	Player_t2961656996 * G_B3_1 = NULL;
	Player_t2961656996 * G_B5_0 = NULL;
	Player_t2961656996 * G_B4_0 = NULL;
	Nullable_1_t1561634878  G_B6_0;
	memset(&G_B6_0, 0, sizeof(G_B6_0));
	Player_t2961656996 * G_B6_1 = NULL;
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		Dictionary_2_t2865362463 * L_0 = ___playerJSON0;
		Nullable_1_t4282624060  L_1 = SkillzExtensions_SafeGetUintValue_m475157154(NULL /*static, unused*/, L_0, _stringLiteral3454449607, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = Nullable_1_get_HasValue_m1763782828((&V_0), /*hidden argument*/Nullable_1_get_HasValue_m1763782828_RuntimeMethod_var);
		G_B1_0 = __this;
		if (!L_2)
		{
			G_B2_0 = __this;
			goto IL_0031;
		}
	}
	{
		uint32_t L_3 = Nullable_1_get_Value_m1994738269((&V_0), /*hidden argument*/Nullable_1_get_Value_m1994738269_RuntimeMethod_var);
		Nullable_1_t1561634878  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Nullable_1__ctor_m3249847592((&L_4), (((int64_t)((uint64_t)L_3))), /*hidden argument*/Nullable_1__ctor_m3249847592_RuntimeMethod_var);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		goto IL_003a;
	}

IL_0031:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_t1561634878 ));
		Nullable_1_t1561634878  L_5 = V_1;
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
	}

IL_003a:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_ID_1(G_B3_0);
		Dictionary_2_t2865362463 * L_6 = ___playerJSON0;
		String_t* L_7 = SkillzExtensions_SafeGetStringValue_m3748395908(NULL /*static, unused*/, L_6, _stringLiteral2186314903, /*hidden argument*/NULL);
		__this->set_DisplayName_0(L_7);
		Dictionary_2_t2865362463 * L_8 = ___playerJSON0;
		String_t* L_9 = SkillzExtensions_SafeGetStringValue_m3748395908(NULL /*static, unused*/, L_8, _stringLiteral3226725044, /*hidden argument*/NULL);
		__this->set_AvatarURL_3(L_9);
		Dictionary_2_t2865362463 * L_10 = ___playerJSON0;
		String_t* L_11 = SkillzExtensions_SafeGetStringValue_m3748395908(NULL /*static, unused*/, L_10, _stringLiteral241366642, /*hidden argument*/NULL);
		__this->set_FlagURL_4(L_11);
		Dictionary_2_t2865362463 * L_12 = ___playerJSON0;
		Nullable_1_t1819850047  L_13 = SkillzExtensions_SafeGetBoolValue_m2039874569(NULL /*static, unused*/, L_12, _stringLiteral306455953, /*hidden argument*/NULL);
		V_2 = L_13;
		bool L_14 = Nullable_1_get_Value_m1177098500((&V_2), /*hidden argument*/Nullable_1_get_Value_m1177098500_RuntimeMethod_var);
		__this->set_IsCurrentPlayer_5(L_14);
		Dictionary_2_t2865362463 * L_15 = ___playerJSON0;
		Nullable_1_t4282624060  L_16 = SkillzExtensions_SafeGetUintValue_m475157154(NULL /*static, unused*/, L_15, _stringLiteral1364997218, /*hidden argument*/NULL);
		V_3 = L_16;
		bool L_17 = Nullable_1_get_HasValue_m1763782828((&V_3), /*hidden argument*/Nullable_1_get_HasValue_m1763782828_RuntimeMethod_var);
		G_B4_0 = __this;
		if (!L_17)
		{
			G_B5_0 = __this;
			goto IL_00b6;
		}
	}
	{
		uint32_t L_18 = Nullable_1_get_Value_m1994738269((&V_3), /*hidden argument*/Nullable_1_get_Value_m1994738269_RuntimeMethod_var);
		Nullable_1_t1561634878  L_19;
		memset(&L_19, 0, sizeof(L_19));
		Nullable_1__ctor_m3249847592((&L_19), (((int64_t)((uint64_t)L_18))), /*hidden argument*/Nullable_1__ctor_m3249847592_RuntimeMethod_var);
		G_B6_0 = L_19;
		G_B6_1 = G_B4_0;
		goto IL_00bf;
	}

IL_00b6:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_t1561634878 ));
		Nullable_1_t1561634878  L_20 = V_1;
		G_B6_0 = L_20;
		G_B6_1 = G_B5_0;
	}

IL_00bf:
	{
		NullCheck(G_B6_1);
		G_B6_1->set_TournamentPlayerID_2(G_B6_0);
		return;
	}
}
// System.String SkillzSDK.Player::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Player_ToString_m4275545513 (Player_t2961656996 * __this, const RuntimeMethod* method)
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
		Nullable_1_t1561634878  L_2 = __this->get_ID_1();
		Nullable_1_t1561634878  L_3 = L_2;
		RuntimeObject * L_4 = Box(Nullable_1_t1561634878_il2cpp_TypeInfo_var, &L_3);
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
		String_t* L_10 = __this->get_AvatarURL_3();
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_10);
		ObjectU5BU5D_t2843939325* L_11 = L_9;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral1025240796);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)_stringLiteral1025240796);
		ObjectU5BU5D_t2843939325* L_12 = L_11;
		String_t* L_13 = __this->get_FlagURL_4();
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SkillzSDK.UnmanagedArray::.ctor(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void UnmanagedArray__ctor_m1850023207 (UnmanagedArray_t473089838 * __this, ByteU5BU5D_t4116647657* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnmanagedArray__ctor_m1850023207_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_t4116647657* L_0 = ___data0;
		NullCheck(L_0);
		__this->set_dataLength_1((((int64_t)((int64_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))))));
		ByteU5BU5D_t4116647657* L_1 = ___data0;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint8_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		uint8_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_4);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		int32_t L_6 = Marshal_SizeOf_m973108693(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_7 = ___data0;
		NullCheck(L_7);
		intptr_t L_8 = Marshal_AllocHGlobal_m491131085(NULL /*static, unused*/, ((int32_t)il2cpp_codegen_multiply((int32_t)L_6, (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_7)->max_length)))))), /*hidden argument*/NULL);
		__this->set_dataIntPtr_0(L_8);
		ByteU5BU5D_t4116647657* L_9 = ___data0;
		intptr_t L_10 = __this->get_dataIntPtr_0();
		ByteU5BU5D_t4116647657* L_11 = ___data0;
		NullCheck(L_11);
		Marshal_Copy_m1562111546(NULL /*static, unused*/, L_9, 0, L_10, (((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length)))), /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void UnmanagedArray__ctor_m1850023207_AdjustorThunk (RuntimeObject * __this, ByteU5BU5D_t4116647657* ___data0, const RuntimeMethod* method)
{
	UnmanagedArray_t473089838 * _thisAdjusted = reinterpret_cast<UnmanagedArray_t473089838 *>(__this + 1);
	UnmanagedArray__ctor_m1850023207(_thisAdjusted, ___data0, method);
}
// System.IntPtr SkillzSDK.UnmanagedArray::get_IntPtr()
extern "C" IL2CPP_METHOD_ATTR intptr_t UnmanagedArray_get_IntPtr_m2046982699 (UnmanagedArray_t473089838 * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_dataIntPtr_0();
		return L_0;
	}
}
extern "C"  intptr_t UnmanagedArray_get_IntPtr_m2046982699_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	UnmanagedArray_t473089838 * _thisAdjusted = reinterpret_cast<UnmanagedArray_t473089838 *>(__this + 1);
	return UnmanagedArray_get_IntPtr_m2046982699(_thisAdjusted, method);
}
// System.UInt64 SkillzSDK.UnmanagedArray::get_Length()
extern "C" IL2CPP_METHOD_ATTR uint64_t UnmanagedArray_get_Length_m2351073396 (UnmanagedArray_t473089838 * __this, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = __this->get_dataLength_1();
		return L_0;
	}
}
extern "C"  uint64_t UnmanagedArray_get_Length_m2351073396_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	UnmanagedArray_t473089838 * _thisAdjusted = reinterpret_cast<UnmanagedArray_t473089838 *>(__this + 1);
	return UnmanagedArray_get_Length_m2351073396(_thisAdjusted, method);
}
// System.Void SkillzSDK.UnmanagedArray::System.IDisposable.Dispose()
extern "C" IL2CPP_METHOD_ATTR void UnmanagedArray_System_IDisposable_Dispose_m3667934263 (UnmanagedArray_t473089838 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnmanagedArray_System_IDisposable_Dispose_m3667934263_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_dataIntPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_m1757369653(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void UnmanagedArray_System_IDisposable_Dispose_m3667934263_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	UnmanagedArray_t473089838 * _thisAdjusted = reinterpret_cast<UnmanagedArray_t473089838 *>(__this + 1);
	UnmanagedArray_System_IDisposable_Dispose_m3667934263(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

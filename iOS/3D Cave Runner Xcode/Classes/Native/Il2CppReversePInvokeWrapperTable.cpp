#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.Void
struct Void_tDB81A15FA2AB53E2401A76B745D215397B29F783;




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
#ifndef VALUETYPE_T1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_H
#define VALUETYPE_T1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_marshaled_com
{
};
#endif // VALUETYPE_T1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_H
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
#ifndef VOID_TDB81A15FA2AB53E2401A76B745D215397B29F783_H
#define VOID_TDB81A15FA2AB53E2401A76B745D215397B29F783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_tDB81A15FA2AB53E2401A76B745D215397B29F783 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_TDB81A15FA2AB53E2401A76B745D215397B29F783_H



extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Api_onOpponentHasLostConnection_mCF11A33594A0379C0F1EE7D34D280C98783D5895(uint64_t ___playerId0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Api_onOpponentHasReconnected_m19A084A0E1FA87E055801AA510E98A9FD5CA0BF3(uint64_t ___playerId0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Api_onOpponentHasLeftMatch_mD3D541C09EA21168D9582573DA04B97D4083A76A(uint64_t ___playerId0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Api_onCurrentPlayerHasLostConnection_m6FF973ABDF646F761F299A7614AA1278E5429506();
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Api_onCurrentPlayerHasReconnected_m6B1F78F7B210C0F177D63238E660D5D48A036102();
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Api_onCurrentPlayerHasLeftMatch_m52D7794C64C52D2735F9B099DBC2194A2526BC40();
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Api_onDidReceiveData_m07A541C9D8F54A191667D46BBDADE092B9E64849(intptr_t ___value0, uint64_t ___length1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Api_onMatchCompleted_m0ED033C3694C1A8F3F1437200D1DCCF3687A504D();
extern const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[8] = 
{
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_Api_onOpponentHasLostConnection_mCF11A33594A0379C0F1EE7D34D280C98783D5895),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_Api_onOpponentHasReconnected_m19A084A0E1FA87E055801AA510E98A9FD5CA0BF3),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_Api_onOpponentHasLeftMatch_mD3D541C09EA21168D9582573DA04B97D4083A76A),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_Api_onCurrentPlayerHasLostConnection_m6FF973ABDF646F761F299A7614AA1278E5429506),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_Api_onCurrentPlayerHasReconnected_m6B1F78F7B210C0F177D63238E660D5D48A036102),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_Api_onCurrentPlayerHasLeftMatch_m52D7794C64C52D2735F9B099DBC2194A2526BC40),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_Api_onDidReceiveData_m07A541C9D8F54A191667D46BBDADE092B9E64849),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_Api_onMatchCompleted_m0ED033C3694C1A8F3F1437200D1DCCF3687A504D),
};

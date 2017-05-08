#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Type
struct Type_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityScript.Lang.UnityRuntimeServices
struct  UnityRuntimeServices_t3303336867  : public Il2CppObject
{
public:

public:
};

struct UnityRuntimeServices_t3303336867_StaticFields
{
public:
	// System.Collections.IEnumerator UnityScript.Lang.UnityRuntimeServices::EmptyEnumerator
	Il2CppObject * ___EmptyEnumerator_0;
	// System.Type UnityScript.Lang.UnityRuntimeServices::EnumeratorType
	Type_t * ___EnumeratorType_1;
	// System.Boolean UnityScript.Lang.UnityRuntimeServices::Initialized
	bool ___Initialized_2;

public:
	inline static int32_t get_offset_of_EmptyEnumerator_0() { return static_cast<int32_t>(offsetof(UnityRuntimeServices_t3303336867_StaticFields, ___EmptyEnumerator_0)); }
	inline Il2CppObject * get_EmptyEnumerator_0() const { return ___EmptyEnumerator_0; }
	inline Il2CppObject ** get_address_of_EmptyEnumerator_0() { return &___EmptyEnumerator_0; }
	inline void set_EmptyEnumerator_0(Il2CppObject * value)
	{
		___EmptyEnumerator_0 = value;
		Il2CppCodeGenWriteBarrier(&___EmptyEnumerator_0, value);
	}

	inline static int32_t get_offset_of_EnumeratorType_1() { return static_cast<int32_t>(offsetof(UnityRuntimeServices_t3303336867_StaticFields, ___EnumeratorType_1)); }
	inline Type_t * get_EnumeratorType_1() const { return ___EnumeratorType_1; }
	inline Type_t ** get_address_of_EnumeratorType_1() { return &___EnumeratorType_1; }
	inline void set_EnumeratorType_1(Type_t * value)
	{
		___EnumeratorType_1 = value;
		Il2CppCodeGenWriteBarrier(&___EnumeratorType_1, value);
	}

	inline static int32_t get_offset_of_Initialized_2() { return static_cast<int32_t>(offsetof(UnityRuntimeServices_t3303336867_StaticFields, ___Initialized_2)); }
	inline bool get_Initialized_2() const { return ___Initialized_2; }
	inline bool* get_address_of_Initialized_2() { return &___Initialized_2; }
	inline void set_Initialized_2(bool value)
	{
		___Initialized_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

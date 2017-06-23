#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.IList
struct IList_t3321498491;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityScript.Lang.ListUpdateableEnumerator
struct  ListUpdateableEnumerator_t2462779323  : public Il2CppObject
{
public:
	// System.Collections.IList UnityScript.Lang.ListUpdateableEnumerator::_list
	Il2CppObject * ____list_0;
	// System.Int32 UnityScript.Lang.ListUpdateableEnumerator::_current
	int32_t ____current_1;

public:
	inline static int32_t get_offset_of__list_0() { return static_cast<int32_t>(offsetof(ListUpdateableEnumerator_t2462779323, ____list_0)); }
	inline Il2CppObject * get__list_0() const { return ____list_0; }
	inline Il2CppObject ** get_address_of__list_0() { return &____list_0; }
	inline void set__list_0(Il2CppObject * value)
	{
		____list_0 = value;
		Il2CppCodeGenWriteBarrier(&____list_0, value);
	}

	inline static int32_t get_offset_of__current_1() { return static_cast<int32_t>(offsetof(ListUpdateableEnumerator_t2462779323, ____current_1)); }
	inline int32_t get__current_1() const { return ____current_1; }
	inline int32_t* get_address_of__current_1() { return &____current_1; }
	inline void set__current_1(int32_t value)
	{
		____current_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

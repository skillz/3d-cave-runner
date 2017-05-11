#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Flow
struct  Flow_t4087105484  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Flow::Offset
	float ___Offset_2;
	// System.Single Flow::CurrentOffset
	float ___CurrentOffset_3;

public:
	inline static int32_t get_offset_of_Offset_2() { return static_cast<int32_t>(offsetof(Flow_t4087105484, ___Offset_2)); }
	inline float get_Offset_2() const { return ___Offset_2; }
	inline float* get_address_of_Offset_2() { return &___Offset_2; }
	inline void set_Offset_2(float value)
	{
		___Offset_2 = value;
	}

	inline static int32_t get_offset_of_CurrentOffset_3() { return static_cast<int32_t>(offsetof(Flow_t4087105484, ___CurrentOffset_3)); }
	inline float get_CurrentOffset_3() const { return ___CurrentOffset_3; }
	inline float* get_address_of_CurrentOffset_3() { return &___CurrentOffset_3; }
	inline void set_CurrentOffset_3(float value)
	{
		___CurrentOffset_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

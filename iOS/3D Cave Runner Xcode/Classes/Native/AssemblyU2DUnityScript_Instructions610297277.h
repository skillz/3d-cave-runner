#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.GUISkin
struct GUISkin_t1436893342;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Instructions
struct  Instructions_t610297277  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GUISkin Instructions::GUIskin
	GUISkin_t1436893342 * ___GUIskin_2;
	// System.Single Instructions::originalWidth
	float ___originalWidth_3;
	// System.Single Instructions::originalHeight
	float ___originalHeight_4;
	// UnityEngine.Vector3 Instructions::scale
	Vector3_t2243707580  ___scale_5;

public:
	inline static int32_t get_offset_of_GUIskin_2() { return static_cast<int32_t>(offsetof(Instructions_t610297277, ___GUIskin_2)); }
	inline GUISkin_t1436893342 * get_GUIskin_2() const { return ___GUIskin_2; }
	inline GUISkin_t1436893342 ** get_address_of_GUIskin_2() { return &___GUIskin_2; }
	inline void set_GUIskin_2(GUISkin_t1436893342 * value)
	{
		___GUIskin_2 = value;
		Il2CppCodeGenWriteBarrier(&___GUIskin_2, value);
	}

	inline static int32_t get_offset_of_originalWidth_3() { return static_cast<int32_t>(offsetof(Instructions_t610297277, ___originalWidth_3)); }
	inline float get_originalWidth_3() const { return ___originalWidth_3; }
	inline float* get_address_of_originalWidth_3() { return &___originalWidth_3; }
	inline void set_originalWidth_3(float value)
	{
		___originalWidth_3 = value;
	}

	inline static int32_t get_offset_of_originalHeight_4() { return static_cast<int32_t>(offsetof(Instructions_t610297277, ___originalHeight_4)); }
	inline float get_originalHeight_4() const { return ___originalHeight_4; }
	inline float* get_address_of_originalHeight_4() { return &___originalHeight_4; }
	inline void set_originalHeight_4(float value)
	{
		___originalHeight_4 = value;
	}

	inline static int32_t get_offset_of_scale_5() { return static_cast<int32_t>(offsetof(Instructions_t610297277, ___scale_5)); }
	inline Vector3_t2243707580  get_scale_5() const { return ___scale_5; }
	inline Vector3_t2243707580 * get_address_of_scale_5() { return &___scale_5; }
	inline void set_scale_5(Vector3_t2243707580  value)
	{
		___scale_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

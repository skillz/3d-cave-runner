#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Step
struct  Step_t3105875202  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioClip Step::StepSound
	AudioClip_t1932558630 * ___StepSound_2;
	// UnityEngine.Transform Step::TrailEffect
	Transform_t3275118058 * ___TrailEffect_3;
	// UnityEngine.Transform Step::TrailEffectCopy
	Transform_t3275118058 * ___TrailEffectCopy_4;
	// System.Boolean Step::OneShot
	bool ___OneShot_5;
	// System.Boolean Step::OneShotState
	bool ___OneShotState_6;
	// System.Boolean Step::AbsolutePosition
	bool ___AbsolutePosition_7;
	// UnityEngine.Vector3 Step::EffectPosition
	Vector3_t2243707580  ___EffectPosition_8;
	// System.Boolean Step::StepState
	bool ___StepState_9;
	// System.Int32 Step::CameraShake
	int32_t ___CameraShake_10;

public:
	inline static int32_t get_offset_of_StepSound_2() { return static_cast<int32_t>(offsetof(Step_t3105875202, ___StepSound_2)); }
	inline AudioClip_t1932558630 * get_StepSound_2() const { return ___StepSound_2; }
	inline AudioClip_t1932558630 ** get_address_of_StepSound_2() { return &___StepSound_2; }
	inline void set_StepSound_2(AudioClip_t1932558630 * value)
	{
		___StepSound_2 = value;
		Il2CppCodeGenWriteBarrier(&___StepSound_2, value);
	}

	inline static int32_t get_offset_of_TrailEffect_3() { return static_cast<int32_t>(offsetof(Step_t3105875202, ___TrailEffect_3)); }
	inline Transform_t3275118058 * get_TrailEffect_3() const { return ___TrailEffect_3; }
	inline Transform_t3275118058 ** get_address_of_TrailEffect_3() { return &___TrailEffect_3; }
	inline void set_TrailEffect_3(Transform_t3275118058 * value)
	{
		___TrailEffect_3 = value;
		Il2CppCodeGenWriteBarrier(&___TrailEffect_3, value);
	}

	inline static int32_t get_offset_of_TrailEffectCopy_4() { return static_cast<int32_t>(offsetof(Step_t3105875202, ___TrailEffectCopy_4)); }
	inline Transform_t3275118058 * get_TrailEffectCopy_4() const { return ___TrailEffectCopy_4; }
	inline Transform_t3275118058 ** get_address_of_TrailEffectCopy_4() { return &___TrailEffectCopy_4; }
	inline void set_TrailEffectCopy_4(Transform_t3275118058 * value)
	{
		___TrailEffectCopy_4 = value;
		Il2CppCodeGenWriteBarrier(&___TrailEffectCopy_4, value);
	}

	inline static int32_t get_offset_of_OneShot_5() { return static_cast<int32_t>(offsetof(Step_t3105875202, ___OneShot_5)); }
	inline bool get_OneShot_5() const { return ___OneShot_5; }
	inline bool* get_address_of_OneShot_5() { return &___OneShot_5; }
	inline void set_OneShot_5(bool value)
	{
		___OneShot_5 = value;
	}

	inline static int32_t get_offset_of_OneShotState_6() { return static_cast<int32_t>(offsetof(Step_t3105875202, ___OneShotState_6)); }
	inline bool get_OneShotState_6() const { return ___OneShotState_6; }
	inline bool* get_address_of_OneShotState_6() { return &___OneShotState_6; }
	inline void set_OneShotState_6(bool value)
	{
		___OneShotState_6 = value;
	}

	inline static int32_t get_offset_of_AbsolutePosition_7() { return static_cast<int32_t>(offsetof(Step_t3105875202, ___AbsolutePosition_7)); }
	inline bool get_AbsolutePosition_7() const { return ___AbsolutePosition_7; }
	inline bool* get_address_of_AbsolutePosition_7() { return &___AbsolutePosition_7; }
	inline void set_AbsolutePosition_7(bool value)
	{
		___AbsolutePosition_7 = value;
	}

	inline static int32_t get_offset_of_EffectPosition_8() { return static_cast<int32_t>(offsetof(Step_t3105875202, ___EffectPosition_8)); }
	inline Vector3_t2243707580  get_EffectPosition_8() const { return ___EffectPosition_8; }
	inline Vector3_t2243707580 * get_address_of_EffectPosition_8() { return &___EffectPosition_8; }
	inline void set_EffectPosition_8(Vector3_t2243707580  value)
	{
		___EffectPosition_8 = value;
	}

	inline static int32_t get_offset_of_StepState_9() { return static_cast<int32_t>(offsetof(Step_t3105875202, ___StepState_9)); }
	inline bool get_StepState_9() const { return ___StepState_9; }
	inline bool* get_address_of_StepState_9() { return &___StepState_9; }
	inline void set_StepState_9(bool value)
	{
		___StepState_9 = value;
	}

	inline static int32_t get_offset_of_CameraShake_10() { return static_cast<int32_t>(offsetof(Step_t3105875202, ___CameraShake_10)); }
	inline int32_t get_CameraShake_10() const { return ___CameraShake_10; }
	inline int32_t* get_address_of_CameraShake_10() { return &___CameraShake_10; }
	inline void set_CameraShake_10(int32_t value)
	{
		___CameraShake_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

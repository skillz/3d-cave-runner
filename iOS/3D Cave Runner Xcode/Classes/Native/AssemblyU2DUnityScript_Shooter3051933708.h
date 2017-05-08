#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Shooter
struct  Shooter_t3051933708  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Shooter::Player
	GameObject_t1756533147 * ___Player_2;
	// UnityEngine.Transform Shooter::ShotObject
	Transform_t3275118058 * ___ShotObject_3;
	// UnityEngine.Transform Shooter::ShotObjectCopy
	Transform_t3275118058 * ___ShotObjectCopy_4;
	// UnityEngine.Transform Shooter::HitEffect
	Transform_t3275118058 * ___HitEffect_5;
	// System.Single Shooter::ShotSpeed
	float ___ShotSpeed_6;
	// System.Single Shooter::ShotRate
	float ___ShotRate_7;
	// System.Single Shooter::ShotTime
	float ___ShotTime_8;
	// UnityEngine.Vector3 Shooter::ShotOffset
	Vector3_t2243707580  ___ShotOffset_9;
	// System.Single Shooter::DestroyAfter
	float ___DestroyAfter_10;

public:
	inline static int32_t get_offset_of_Player_2() { return static_cast<int32_t>(offsetof(Shooter_t3051933708, ___Player_2)); }
	inline GameObject_t1756533147 * get_Player_2() const { return ___Player_2; }
	inline GameObject_t1756533147 ** get_address_of_Player_2() { return &___Player_2; }
	inline void set_Player_2(GameObject_t1756533147 * value)
	{
		___Player_2 = value;
		Il2CppCodeGenWriteBarrier(&___Player_2, value);
	}

	inline static int32_t get_offset_of_ShotObject_3() { return static_cast<int32_t>(offsetof(Shooter_t3051933708, ___ShotObject_3)); }
	inline Transform_t3275118058 * get_ShotObject_3() const { return ___ShotObject_3; }
	inline Transform_t3275118058 ** get_address_of_ShotObject_3() { return &___ShotObject_3; }
	inline void set_ShotObject_3(Transform_t3275118058 * value)
	{
		___ShotObject_3 = value;
		Il2CppCodeGenWriteBarrier(&___ShotObject_3, value);
	}

	inline static int32_t get_offset_of_ShotObjectCopy_4() { return static_cast<int32_t>(offsetof(Shooter_t3051933708, ___ShotObjectCopy_4)); }
	inline Transform_t3275118058 * get_ShotObjectCopy_4() const { return ___ShotObjectCopy_4; }
	inline Transform_t3275118058 ** get_address_of_ShotObjectCopy_4() { return &___ShotObjectCopy_4; }
	inline void set_ShotObjectCopy_4(Transform_t3275118058 * value)
	{
		___ShotObjectCopy_4 = value;
		Il2CppCodeGenWriteBarrier(&___ShotObjectCopy_4, value);
	}

	inline static int32_t get_offset_of_HitEffect_5() { return static_cast<int32_t>(offsetof(Shooter_t3051933708, ___HitEffect_5)); }
	inline Transform_t3275118058 * get_HitEffect_5() const { return ___HitEffect_5; }
	inline Transform_t3275118058 ** get_address_of_HitEffect_5() { return &___HitEffect_5; }
	inline void set_HitEffect_5(Transform_t3275118058 * value)
	{
		___HitEffect_5 = value;
		Il2CppCodeGenWriteBarrier(&___HitEffect_5, value);
	}

	inline static int32_t get_offset_of_ShotSpeed_6() { return static_cast<int32_t>(offsetof(Shooter_t3051933708, ___ShotSpeed_6)); }
	inline float get_ShotSpeed_6() const { return ___ShotSpeed_6; }
	inline float* get_address_of_ShotSpeed_6() { return &___ShotSpeed_6; }
	inline void set_ShotSpeed_6(float value)
	{
		___ShotSpeed_6 = value;
	}

	inline static int32_t get_offset_of_ShotRate_7() { return static_cast<int32_t>(offsetof(Shooter_t3051933708, ___ShotRate_7)); }
	inline float get_ShotRate_7() const { return ___ShotRate_7; }
	inline float* get_address_of_ShotRate_7() { return &___ShotRate_7; }
	inline void set_ShotRate_7(float value)
	{
		___ShotRate_7 = value;
	}

	inline static int32_t get_offset_of_ShotTime_8() { return static_cast<int32_t>(offsetof(Shooter_t3051933708, ___ShotTime_8)); }
	inline float get_ShotTime_8() const { return ___ShotTime_8; }
	inline float* get_address_of_ShotTime_8() { return &___ShotTime_8; }
	inline void set_ShotTime_8(float value)
	{
		___ShotTime_8 = value;
	}

	inline static int32_t get_offset_of_ShotOffset_9() { return static_cast<int32_t>(offsetof(Shooter_t3051933708, ___ShotOffset_9)); }
	inline Vector3_t2243707580  get_ShotOffset_9() const { return ___ShotOffset_9; }
	inline Vector3_t2243707580 * get_address_of_ShotOffset_9() { return &___ShotOffset_9; }
	inline void set_ShotOffset_9(Vector3_t2243707580  value)
	{
		___ShotOffset_9 = value;
	}

	inline static int32_t get_offset_of_DestroyAfter_10() { return static_cast<int32_t>(offsetof(Shooter_t3051933708, ___DestroyAfter_10)); }
	inline float get_DestroyAfter_10() const { return ___DestroyAfter_10; }
	inline float* get_address_of_DestroyAfter_10() { return &___DestroyAfter_10; }
	inline void set_DestroyAfter_10(float value)
	{
		___DestroyAfter_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

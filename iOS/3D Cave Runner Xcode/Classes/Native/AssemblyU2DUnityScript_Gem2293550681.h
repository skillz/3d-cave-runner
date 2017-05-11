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
// GameController
struct GameController_t3607102586;
// Collector
struct Collector_t237117861;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gem
struct  Gem_t2293550681  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Gem::GameController
	GameObject_t1756533147 * ___GameController_2;
	// UnityEngine.GameObject Gem::Player
	GameObject_t1756533147 * ___Player_3;
	// GameController Gem::gController
	GameController_t3607102586 * ___gController_4;
	// Collector Gem::collector
	Collector_t237117861 * ___collector_5;
	// System.Single Gem::SpinSpeed
	float ___SpinSpeed_6;
	// System.Int32 Gem::Value
	int32_t ___Value_7;
	// System.Single Gem::PickupRange
	float ___PickupRange_8;
	// UnityEngine.Transform Gem::PickupEffect
	Transform_t3275118058 * ___PickupEffect_9;
	// UnityEngine.Transform Gem::PickUpEffectCopy
	Transform_t3275118058 * ___PickUpEffectCopy_10;

public:
	inline static int32_t get_offset_of_GameController_2() { return static_cast<int32_t>(offsetof(Gem_t2293550681, ___GameController_2)); }
	inline GameObject_t1756533147 * get_GameController_2() const { return ___GameController_2; }
	inline GameObject_t1756533147 ** get_address_of_GameController_2() { return &___GameController_2; }
	inline void set_GameController_2(GameObject_t1756533147 * value)
	{
		___GameController_2 = value;
		Il2CppCodeGenWriteBarrier(&___GameController_2, value);
	}

	inline static int32_t get_offset_of_Player_3() { return static_cast<int32_t>(offsetof(Gem_t2293550681, ___Player_3)); }
	inline GameObject_t1756533147 * get_Player_3() const { return ___Player_3; }
	inline GameObject_t1756533147 ** get_address_of_Player_3() { return &___Player_3; }
	inline void set_Player_3(GameObject_t1756533147 * value)
	{
		___Player_3 = value;
		Il2CppCodeGenWriteBarrier(&___Player_3, value);
	}

	inline static int32_t get_offset_of_gController_4() { return static_cast<int32_t>(offsetof(Gem_t2293550681, ___gController_4)); }
	inline GameController_t3607102586 * get_gController_4() const { return ___gController_4; }
	inline GameController_t3607102586 ** get_address_of_gController_4() { return &___gController_4; }
	inline void set_gController_4(GameController_t3607102586 * value)
	{
		___gController_4 = value;
		Il2CppCodeGenWriteBarrier(&___gController_4, value);
	}

	inline static int32_t get_offset_of_collector_5() { return static_cast<int32_t>(offsetof(Gem_t2293550681, ___collector_5)); }
	inline Collector_t237117861 * get_collector_5() const { return ___collector_5; }
	inline Collector_t237117861 ** get_address_of_collector_5() { return &___collector_5; }
	inline void set_collector_5(Collector_t237117861 * value)
	{
		___collector_5 = value;
		Il2CppCodeGenWriteBarrier(&___collector_5, value);
	}

	inline static int32_t get_offset_of_SpinSpeed_6() { return static_cast<int32_t>(offsetof(Gem_t2293550681, ___SpinSpeed_6)); }
	inline float get_SpinSpeed_6() const { return ___SpinSpeed_6; }
	inline float* get_address_of_SpinSpeed_6() { return &___SpinSpeed_6; }
	inline void set_SpinSpeed_6(float value)
	{
		___SpinSpeed_6 = value;
	}

	inline static int32_t get_offset_of_Value_7() { return static_cast<int32_t>(offsetof(Gem_t2293550681, ___Value_7)); }
	inline int32_t get_Value_7() const { return ___Value_7; }
	inline int32_t* get_address_of_Value_7() { return &___Value_7; }
	inline void set_Value_7(int32_t value)
	{
		___Value_7 = value;
	}

	inline static int32_t get_offset_of_PickupRange_8() { return static_cast<int32_t>(offsetof(Gem_t2293550681, ___PickupRange_8)); }
	inline float get_PickupRange_8() const { return ___PickupRange_8; }
	inline float* get_address_of_PickupRange_8() { return &___PickupRange_8; }
	inline void set_PickupRange_8(float value)
	{
		___PickupRange_8 = value;
	}

	inline static int32_t get_offset_of_PickupEffect_9() { return static_cast<int32_t>(offsetof(Gem_t2293550681, ___PickupEffect_9)); }
	inline Transform_t3275118058 * get_PickupEffect_9() const { return ___PickupEffect_9; }
	inline Transform_t3275118058 ** get_address_of_PickupEffect_9() { return &___PickupEffect_9; }
	inline void set_PickupEffect_9(Transform_t3275118058 * value)
	{
		___PickupEffect_9 = value;
		Il2CppCodeGenWriteBarrier(&___PickupEffect_9, value);
	}

	inline static int32_t get_offset_of_PickUpEffectCopy_10() { return static_cast<int32_t>(offsetof(Gem_t2293550681, ___PickUpEffectCopy_10)); }
	inline Transform_t3275118058 * get_PickUpEffectCopy_10() const { return ___PickUpEffectCopy_10; }
	inline Transform_t3275118058 ** get_address_of_PickUpEffectCopy_10() { return &___PickUpEffectCopy_10; }
	inline void set_PickUpEffectCopy_10(Transform_t3275118058 * value)
	{
		___PickUpEffectCopy_10 = value;
		Il2CppCodeGenWriteBarrier(&___PickUpEffectCopy_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

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
// UnityEngine.AudioClip
struct AudioClip_t1932558630;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Shake
struct  Shake_t3938682490  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Shake::Player
	GameObject_t1756533147 * ___Player_2;
	// UnityEngine.Vector3 Shake::InitPos
	Vector3_t2243707580  ___InitPos_3;
	// System.Int32 Shake::Shake
	int32_t ___Shake_4;
	// UnityEngine.Transform Shake::DebrisEffect
	Transform_t3275118058 * ___DebrisEffect_5;
	// UnityEngine.AudioClip Shake::RumbleSound
	AudioClip_t1932558630 * ___RumbleSound_6;
	// System.Boolean Shake::KeepInitialPosition
	bool ___KeepInitialPosition_7;
	// System.Int32 Shake::ShakeDecay
	int32_t ___ShakeDecay_8;
	// System.Boolean Shake::shaking
	bool ___shaking_9;

public:
	inline static int32_t get_offset_of_Player_2() { return static_cast<int32_t>(offsetof(Shake_t3938682490, ___Player_2)); }
	inline GameObject_t1756533147 * get_Player_2() const { return ___Player_2; }
	inline GameObject_t1756533147 ** get_address_of_Player_2() { return &___Player_2; }
	inline void set_Player_2(GameObject_t1756533147 * value)
	{
		___Player_2 = value;
		Il2CppCodeGenWriteBarrier(&___Player_2, value);
	}

	inline static int32_t get_offset_of_InitPos_3() { return static_cast<int32_t>(offsetof(Shake_t3938682490, ___InitPos_3)); }
	inline Vector3_t2243707580  get_InitPos_3() const { return ___InitPos_3; }
	inline Vector3_t2243707580 * get_address_of_InitPos_3() { return &___InitPos_3; }
	inline void set_InitPos_3(Vector3_t2243707580  value)
	{
		___InitPos_3 = value;
	}

	inline static int32_t get_offset_of_Shake_4() { return static_cast<int32_t>(offsetof(Shake_t3938682490, ___Shake_4)); }
	inline int32_t get_Shake_4() const { return ___Shake_4; }
	inline int32_t* get_address_of_Shake_4() { return &___Shake_4; }
	inline void set_Shake_4(int32_t value)
	{
		___Shake_4 = value;
	}

	inline static int32_t get_offset_of_DebrisEffect_5() { return static_cast<int32_t>(offsetof(Shake_t3938682490, ___DebrisEffect_5)); }
	inline Transform_t3275118058 * get_DebrisEffect_5() const { return ___DebrisEffect_5; }
	inline Transform_t3275118058 ** get_address_of_DebrisEffect_5() { return &___DebrisEffect_5; }
	inline void set_DebrisEffect_5(Transform_t3275118058 * value)
	{
		___DebrisEffect_5 = value;
		Il2CppCodeGenWriteBarrier(&___DebrisEffect_5, value);
	}

	inline static int32_t get_offset_of_RumbleSound_6() { return static_cast<int32_t>(offsetof(Shake_t3938682490, ___RumbleSound_6)); }
	inline AudioClip_t1932558630 * get_RumbleSound_6() const { return ___RumbleSound_6; }
	inline AudioClip_t1932558630 ** get_address_of_RumbleSound_6() { return &___RumbleSound_6; }
	inline void set_RumbleSound_6(AudioClip_t1932558630 * value)
	{
		___RumbleSound_6 = value;
		Il2CppCodeGenWriteBarrier(&___RumbleSound_6, value);
	}

	inline static int32_t get_offset_of_KeepInitialPosition_7() { return static_cast<int32_t>(offsetof(Shake_t3938682490, ___KeepInitialPosition_7)); }
	inline bool get_KeepInitialPosition_7() const { return ___KeepInitialPosition_7; }
	inline bool* get_address_of_KeepInitialPosition_7() { return &___KeepInitialPosition_7; }
	inline void set_KeepInitialPosition_7(bool value)
	{
		___KeepInitialPosition_7 = value;
	}

	inline static int32_t get_offset_of_ShakeDecay_8() { return static_cast<int32_t>(offsetof(Shake_t3938682490, ___ShakeDecay_8)); }
	inline int32_t get_ShakeDecay_8() const { return ___ShakeDecay_8; }
	inline int32_t* get_address_of_ShakeDecay_8() { return &___ShakeDecay_8; }
	inline void set_ShakeDecay_8(int32_t value)
	{
		___ShakeDecay_8 = value;
	}

	inline static int32_t get_offset_of_shaking_9() { return static_cast<int32_t>(offsetof(Shake_t3938682490, ___shaking_9)); }
	inline bool get_shaking_9() const { return ___shaking_9; }
	inline bool* get_address_of_shaking_9() { return &___shaking_9; }
	inline void set_shaking_9(bool value)
	{
		___shaking_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

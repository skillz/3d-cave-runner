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

// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.Transform
struct Transform_t3275118058;
// PlayerControls
struct PlayerControls_t1008173349;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Obstacle
struct  Obstacle_t1396786087  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Obstacle::Player
	GameObject_t1756533147 * ___Player_2;
	// System.Single Obstacle::SpeedChange
	float ___SpeedChange_3;
	// System.Single Obstacle::SpeedChangeModifier
	float ___SpeedChangeModifier_4;
	// System.Single Obstacle::TurnSpeedChange
	float ___TurnSpeedChange_5;
	// UnityEngine.Vector3 Obstacle::Bounce
	Vector3_t2243707580  ___Bounce_6;
	// System.Single Obstacle::JumpChange
	float ___JumpChange_7;
	// System.Single Obstacle::JumpChangeTime
	float ___JumpChangeTime_8;
	// System.String Obstacle::HitAnimation
	String_t* ___HitAnimation_9;
	// System.Single Obstacle::HitAnimationTime
	float ___HitAnimationTime_10;
	// System.Boolean Obstacle::AnimateObstacle
	bool ___AnimateObstacle_11;
	// System.Boolean Obstacle::HitPlayer
	bool ___HitPlayer_12;
	// UnityEngine.AudioClip Obstacle::HitSound
	AudioClip_t1932558630 * ___HitSound_13;
	// System.Boolean Obstacle::StickToPlayer
	bool ___StickToPlayer_14;
	// System.Boolean Obstacle::StuckToPlayer
	bool ___StuckToPlayer_15;
	// System.Single Obstacle::StickTime
	float ___StickTime_16;
	// UnityEngine.Transform Obstacle::DisperseEffect
	Transform_t3275118058 * ___DisperseEffect_17;
	// System.Boolean Obstacle::LookAtPlayer
	bool ___LookAtPlayer_18;
	// UnityEngine.Vector3 Obstacle::Rotation
	Vector3_t2243707580  ___Rotation_19;
	// UnityEngine.Vector3 Obstacle::Offset
	Vector3_t2243707580  ___Offset_20;
	// PlayerControls Obstacle::kPlayerControls
	PlayerControls_t1008173349 * ___kPlayerControls_21;

public:
	inline static int32_t get_offset_of_Player_2() { return static_cast<int32_t>(offsetof(Obstacle_t1396786087, ___Player_2)); }
	inline GameObject_t1756533147 * get_Player_2() const { return ___Player_2; }
	inline GameObject_t1756533147 ** get_address_of_Player_2() { return &___Player_2; }
	inline void set_Player_2(GameObject_t1756533147 * value)
	{
		___Player_2 = value;
		Il2CppCodeGenWriteBarrier(&___Player_2, value);
	}

	inline static int32_t get_offset_of_SpeedChange_3() { return static_cast<int32_t>(offsetof(Obstacle_t1396786087, ___SpeedChange_3)); }
	inline float get_SpeedChange_3() const { return ___SpeedChange_3; }
	inline float* get_address_of_SpeedChange_3() { return &___SpeedChange_3; }
	inline void set_SpeedChange_3(float value)
	{
		___SpeedChange_3 = value;
	}

	inline static int32_t get_offset_of_SpeedChangeModifier_4() { return static_cast<int32_t>(offsetof(Obstacle_t1396786087, ___SpeedChangeModifier_4)); }
	inline float get_SpeedChangeModifier_4() const { return ___SpeedChangeModifier_4; }
	inline float* get_address_of_SpeedChangeModifier_4() { return &___SpeedChangeModifier_4; }
	inline void set_SpeedChangeModifier_4(float value)
	{
		___SpeedChangeModifier_4 = value;
	}

	inline static int32_t get_offset_of_TurnSpeedChange_5() { return static_cast<int32_t>(offsetof(Obstacle_t1396786087, ___TurnSpeedChange_5)); }
	inline float get_TurnSpeedChange_5() const { return ___TurnSpeedChange_5; }
	inline float* get_address_of_TurnSpeedChange_5() { return &___TurnSpeedChange_5; }
	inline void set_TurnSpeedChange_5(float value)
	{
		___TurnSpeedChange_5 = value;
	}

	inline static int32_t get_offset_of_Bounce_6() { return static_cast<int32_t>(offsetof(Obstacle_t1396786087, ___Bounce_6)); }
	inline Vector3_t2243707580  get_Bounce_6() const { return ___Bounce_6; }
	inline Vector3_t2243707580 * get_address_of_Bounce_6() { return &___Bounce_6; }
	inline void set_Bounce_6(Vector3_t2243707580  value)
	{
		___Bounce_6 = value;
	}

	inline static int32_t get_offset_of_JumpChange_7() { return static_cast<int32_t>(offsetof(Obstacle_t1396786087, ___JumpChange_7)); }
	inline float get_JumpChange_7() const { return ___JumpChange_7; }
	inline float* get_address_of_JumpChange_7() { return &___JumpChange_7; }
	inline void set_JumpChange_7(float value)
	{
		___JumpChange_7 = value;
	}

	inline static int32_t get_offset_of_JumpChangeTime_8() { return static_cast<int32_t>(offsetof(Obstacle_t1396786087, ___JumpChangeTime_8)); }
	inline float get_JumpChangeTime_8() const { return ___JumpChangeTime_8; }
	inline float* get_address_of_JumpChangeTime_8() { return &___JumpChangeTime_8; }
	inline void set_JumpChangeTime_8(float value)
	{
		___JumpChangeTime_8 = value;
	}

	inline static int32_t get_offset_of_HitAnimation_9() { return static_cast<int32_t>(offsetof(Obstacle_t1396786087, ___HitAnimation_9)); }
	inline String_t* get_HitAnimation_9() const { return ___HitAnimation_9; }
	inline String_t** get_address_of_HitAnimation_9() { return &___HitAnimation_9; }
	inline void set_HitAnimation_9(String_t* value)
	{
		___HitAnimation_9 = value;
		Il2CppCodeGenWriteBarrier(&___HitAnimation_9, value);
	}

	inline static int32_t get_offset_of_HitAnimationTime_10() { return static_cast<int32_t>(offsetof(Obstacle_t1396786087, ___HitAnimationTime_10)); }
	inline float get_HitAnimationTime_10() const { return ___HitAnimationTime_10; }
	inline float* get_address_of_HitAnimationTime_10() { return &___HitAnimationTime_10; }
	inline void set_HitAnimationTime_10(float value)
	{
		___HitAnimationTime_10 = value;
	}

	inline static int32_t get_offset_of_AnimateObstacle_11() { return static_cast<int32_t>(offsetof(Obstacle_t1396786087, ___AnimateObstacle_11)); }
	inline bool get_AnimateObstacle_11() const { return ___AnimateObstacle_11; }
	inline bool* get_address_of_AnimateObstacle_11() { return &___AnimateObstacle_11; }
	inline void set_AnimateObstacle_11(bool value)
	{
		___AnimateObstacle_11 = value;
	}

	inline static int32_t get_offset_of_HitPlayer_12() { return static_cast<int32_t>(offsetof(Obstacle_t1396786087, ___HitPlayer_12)); }
	inline bool get_HitPlayer_12() const { return ___HitPlayer_12; }
	inline bool* get_address_of_HitPlayer_12() { return &___HitPlayer_12; }
	inline void set_HitPlayer_12(bool value)
	{
		___HitPlayer_12 = value;
	}

	inline static int32_t get_offset_of_HitSound_13() { return static_cast<int32_t>(offsetof(Obstacle_t1396786087, ___HitSound_13)); }
	inline AudioClip_t1932558630 * get_HitSound_13() const { return ___HitSound_13; }
	inline AudioClip_t1932558630 ** get_address_of_HitSound_13() { return &___HitSound_13; }
	inline void set_HitSound_13(AudioClip_t1932558630 * value)
	{
		___HitSound_13 = value;
		Il2CppCodeGenWriteBarrier(&___HitSound_13, value);
	}

	inline static int32_t get_offset_of_StickToPlayer_14() { return static_cast<int32_t>(offsetof(Obstacle_t1396786087, ___StickToPlayer_14)); }
	inline bool get_StickToPlayer_14() const { return ___StickToPlayer_14; }
	inline bool* get_address_of_StickToPlayer_14() { return &___StickToPlayer_14; }
	inline void set_StickToPlayer_14(bool value)
	{
		___StickToPlayer_14 = value;
	}

	inline static int32_t get_offset_of_StuckToPlayer_15() { return static_cast<int32_t>(offsetof(Obstacle_t1396786087, ___StuckToPlayer_15)); }
	inline bool get_StuckToPlayer_15() const { return ___StuckToPlayer_15; }
	inline bool* get_address_of_StuckToPlayer_15() { return &___StuckToPlayer_15; }
	inline void set_StuckToPlayer_15(bool value)
	{
		___StuckToPlayer_15 = value;
	}

	inline static int32_t get_offset_of_StickTime_16() { return static_cast<int32_t>(offsetof(Obstacle_t1396786087, ___StickTime_16)); }
	inline float get_StickTime_16() const { return ___StickTime_16; }
	inline float* get_address_of_StickTime_16() { return &___StickTime_16; }
	inline void set_StickTime_16(float value)
	{
		___StickTime_16 = value;
	}

	inline static int32_t get_offset_of_DisperseEffect_17() { return static_cast<int32_t>(offsetof(Obstacle_t1396786087, ___DisperseEffect_17)); }
	inline Transform_t3275118058 * get_DisperseEffect_17() const { return ___DisperseEffect_17; }
	inline Transform_t3275118058 ** get_address_of_DisperseEffect_17() { return &___DisperseEffect_17; }
	inline void set_DisperseEffect_17(Transform_t3275118058 * value)
	{
		___DisperseEffect_17 = value;
		Il2CppCodeGenWriteBarrier(&___DisperseEffect_17, value);
	}

	inline static int32_t get_offset_of_LookAtPlayer_18() { return static_cast<int32_t>(offsetof(Obstacle_t1396786087, ___LookAtPlayer_18)); }
	inline bool get_LookAtPlayer_18() const { return ___LookAtPlayer_18; }
	inline bool* get_address_of_LookAtPlayer_18() { return &___LookAtPlayer_18; }
	inline void set_LookAtPlayer_18(bool value)
	{
		___LookAtPlayer_18 = value;
	}

	inline static int32_t get_offset_of_Rotation_19() { return static_cast<int32_t>(offsetof(Obstacle_t1396786087, ___Rotation_19)); }
	inline Vector3_t2243707580  get_Rotation_19() const { return ___Rotation_19; }
	inline Vector3_t2243707580 * get_address_of_Rotation_19() { return &___Rotation_19; }
	inline void set_Rotation_19(Vector3_t2243707580  value)
	{
		___Rotation_19 = value;
	}

	inline static int32_t get_offset_of_Offset_20() { return static_cast<int32_t>(offsetof(Obstacle_t1396786087, ___Offset_20)); }
	inline Vector3_t2243707580  get_Offset_20() const { return ___Offset_20; }
	inline Vector3_t2243707580 * get_address_of_Offset_20() { return &___Offset_20; }
	inline void set_Offset_20(Vector3_t2243707580  value)
	{
		___Offset_20 = value;
	}

	inline static int32_t get_offset_of_kPlayerControls_21() { return static_cast<int32_t>(offsetof(Obstacle_t1396786087, ___kPlayerControls_21)); }
	inline PlayerControls_t1008173349 * get_kPlayerControls_21() const { return ___kPlayerControls_21; }
	inline PlayerControls_t1008173349 ** get_address_of_kPlayerControls_21() { return &___kPlayerControls_21; }
	inline void set_kPlayerControls_21(PlayerControls_t1008173349 * value)
	{
		___kPlayerControls_21 = value;
		Il2CppCodeGenWriteBarrier(&___kPlayerControls_21, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

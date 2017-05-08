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
// PlatformCreator
struct PlatformCreator_t1903924313;
// PlayerControls
struct PlayerControls_t1008173349;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Platform
struct  Platform_t358478341  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Platform::Player
	GameObject_t1756533147 * ___Player_2;
	// UnityEngine.GameObject Platform::PlatformCreator
	GameObject_t1756533147 * ___PlatformCreator_3;
	// System.Single Platform::PlatformSpeed
	float ___PlatformSpeed_4;
	// System.Int32 Platform::obstacleIndex
	int32_t ___obstacleIndex_5;
	// System.Boolean Platform::CreatedPlatform
	bool ___CreatedPlatform_6;
	// System.Int32 Platform::SectionLength
	int32_t ___SectionLength_7;
	// System.Int32 Platform::PlatformLength
	int32_t ___PlatformLength_8;
	// PlatformCreator Platform::kPlatformCreator
	PlatformCreator_t1903924313 * ___kPlatformCreator_9;
	// PlayerControls Platform::kPlayerControls
	PlayerControls_t1008173349 * ___kPlayerControls_10;

public:
	inline static int32_t get_offset_of_Player_2() { return static_cast<int32_t>(offsetof(Platform_t358478341, ___Player_2)); }
	inline GameObject_t1756533147 * get_Player_2() const { return ___Player_2; }
	inline GameObject_t1756533147 ** get_address_of_Player_2() { return &___Player_2; }
	inline void set_Player_2(GameObject_t1756533147 * value)
	{
		___Player_2 = value;
		Il2CppCodeGenWriteBarrier(&___Player_2, value);
	}

	inline static int32_t get_offset_of_PlatformCreator_3() { return static_cast<int32_t>(offsetof(Platform_t358478341, ___PlatformCreator_3)); }
	inline GameObject_t1756533147 * get_PlatformCreator_3() const { return ___PlatformCreator_3; }
	inline GameObject_t1756533147 ** get_address_of_PlatformCreator_3() { return &___PlatformCreator_3; }
	inline void set_PlatformCreator_3(GameObject_t1756533147 * value)
	{
		___PlatformCreator_3 = value;
		Il2CppCodeGenWriteBarrier(&___PlatformCreator_3, value);
	}

	inline static int32_t get_offset_of_PlatformSpeed_4() { return static_cast<int32_t>(offsetof(Platform_t358478341, ___PlatformSpeed_4)); }
	inline float get_PlatformSpeed_4() const { return ___PlatformSpeed_4; }
	inline float* get_address_of_PlatformSpeed_4() { return &___PlatformSpeed_4; }
	inline void set_PlatformSpeed_4(float value)
	{
		___PlatformSpeed_4 = value;
	}

	inline static int32_t get_offset_of_obstacleIndex_5() { return static_cast<int32_t>(offsetof(Platform_t358478341, ___obstacleIndex_5)); }
	inline int32_t get_obstacleIndex_5() const { return ___obstacleIndex_5; }
	inline int32_t* get_address_of_obstacleIndex_5() { return &___obstacleIndex_5; }
	inline void set_obstacleIndex_5(int32_t value)
	{
		___obstacleIndex_5 = value;
	}

	inline static int32_t get_offset_of_CreatedPlatform_6() { return static_cast<int32_t>(offsetof(Platform_t358478341, ___CreatedPlatform_6)); }
	inline bool get_CreatedPlatform_6() const { return ___CreatedPlatform_6; }
	inline bool* get_address_of_CreatedPlatform_6() { return &___CreatedPlatform_6; }
	inline void set_CreatedPlatform_6(bool value)
	{
		___CreatedPlatform_6 = value;
	}

	inline static int32_t get_offset_of_SectionLength_7() { return static_cast<int32_t>(offsetof(Platform_t358478341, ___SectionLength_7)); }
	inline int32_t get_SectionLength_7() const { return ___SectionLength_7; }
	inline int32_t* get_address_of_SectionLength_7() { return &___SectionLength_7; }
	inline void set_SectionLength_7(int32_t value)
	{
		___SectionLength_7 = value;
	}

	inline static int32_t get_offset_of_PlatformLength_8() { return static_cast<int32_t>(offsetof(Platform_t358478341, ___PlatformLength_8)); }
	inline int32_t get_PlatformLength_8() const { return ___PlatformLength_8; }
	inline int32_t* get_address_of_PlatformLength_8() { return &___PlatformLength_8; }
	inline void set_PlatformLength_8(int32_t value)
	{
		___PlatformLength_8 = value;
	}

	inline static int32_t get_offset_of_kPlatformCreator_9() { return static_cast<int32_t>(offsetof(Platform_t358478341, ___kPlatformCreator_9)); }
	inline PlatformCreator_t1903924313 * get_kPlatformCreator_9() const { return ___kPlatformCreator_9; }
	inline PlatformCreator_t1903924313 ** get_address_of_kPlatformCreator_9() { return &___kPlatformCreator_9; }
	inline void set_kPlatformCreator_9(PlatformCreator_t1903924313 * value)
	{
		___kPlatformCreator_9 = value;
		Il2CppCodeGenWriteBarrier(&___kPlatformCreator_9, value);
	}

	inline static int32_t get_offset_of_kPlayerControls_10() { return static_cast<int32_t>(offsetof(Platform_t358478341, ___kPlayerControls_10)); }
	inline PlayerControls_t1008173349 * get_kPlayerControls_10() const { return ___kPlayerControls_10; }
	inline PlayerControls_t1008173349 ** get_address_of_kPlayerControls_10() { return &___kPlayerControls_10; }
	inline void set_kPlayerControls_10(PlayerControls_t1008173349 * value)
	{
		___kPlayerControls_10 = value;
		Il2CppCodeGenWriteBarrier(&___kPlayerControls_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

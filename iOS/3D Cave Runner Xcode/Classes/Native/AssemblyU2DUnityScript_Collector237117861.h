#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityScript.Lang.Array
struct Array_t1396575355;
// PlatformCreator
struct PlatformCreator_t1903924313;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Collector
struct  Collector_t237117861  : public MonoBehaviour_t1158329972
{
public:
	// UnityScript.Lang.Array Collector::gems
	Array_t1396575355 * ___gems_2;
	// System.Int32 Collector::gemKinds
	int32_t ___gemKinds_3;
	// UnityScript.Lang.Array Collector::obstacles
	Array_t1396575355 * ___obstacles_4;
	// System.Int32 Collector::obstacleKinds
	int32_t ___obstacleKinds_5;
	// UnityScript.Lang.Array Collector::sections
	Array_t1396575355 * ___sections_6;
	// PlatformCreator Collector::kPC
	PlatformCreator_t1903924313 * ___kPC_7;
	// UnityEngine.GameObject Collector::Shadow
	GameObject_t1756533147 * ___Shadow_8;

public:
	inline static int32_t get_offset_of_gems_2() { return static_cast<int32_t>(offsetof(Collector_t237117861, ___gems_2)); }
	inline Array_t1396575355 * get_gems_2() const { return ___gems_2; }
	inline Array_t1396575355 ** get_address_of_gems_2() { return &___gems_2; }
	inline void set_gems_2(Array_t1396575355 * value)
	{
		___gems_2 = value;
		Il2CppCodeGenWriteBarrier(&___gems_2, value);
	}

	inline static int32_t get_offset_of_gemKinds_3() { return static_cast<int32_t>(offsetof(Collector_t237117861, ___gemKinds_3)); }
	inline int32_t get_gemKinds_3() const { return ___gemKinds_3; }
	inline int32_t* get_address_of_gemKinds_3() { return &___gemKinds_3; }
	inline void set_gemKinds_3(int32_t value)
	{
		___gemKinds_3 = value;
	}

	inline static int32_t get_offset_of_obstacles_4() { return static_cast<int32_t>(offsetof(Collector_t237117861, ___obstacles_4)); }
	inline Array_t1396575355 * get_obstacles_4() const { return ___obstacles_4; }
	inline Array_t1396575355 ** get_address_of_obstacles_4() { return &___obstacles_4; }
	inline void set_obstacles_4(Array_t1396575355 * value)
	{
		___obstacles_4 = value;
		Il2CppCodeGenWriteBarrier(&___obstacles_4, value);
	}

	inline static int32_t get_offset_of_obstacleKinds_5() { return static_cast<int32_t>(offsetof(Collector_t237117861, ___obstacleKinds_5)); }
	inline int32_t get_obstacleKinds_5() const { return ___obstacleKinds_5; }
	inline int32_t* get_address_of_obstacleKinds_5() { return &___obstacleKinds_5; }
	inline void set_obstacleKinds_5(int32_t value)
	{
		___obstacleKinds_5 = value;
	}

	inline static int32_t get_offset_of_sections_6() { return static_cast<int32_t>(offsetof(Collector_t237117861, ___sections_6)); }
	inline Array_t1396575355 * get_sections_6() const { return ___sections_6; }
	inline Array_t1396575355 ** get_address_of_sections_6() { return &___sections_6; }
	inline void set_sections_6(Array_t1396575355 * value)
	{
		___sections_6 = value;
		Il2CppCodeGenWriteBarrier(&___sections_6, value);
	}

	inline static int32_t get_offset_of_kPC_7() { return static_cast<int32_t>(offsetof(Collector_t237117861, ___kPC_7)); }
	inline PlatformCreator_t1903924313 * get_kPC_7() const { return ___kPC_7; }
	inline PlatformCreator_t1903924313 ** get_address_of_kPC_7() { return &___kPC_7; }
	inline void set_kPC_7(PlatformCreator_t1903924313 * value)
	{
		___kPC_7 = value;
		Il2CppCodeGenWriteBarrier(&___kPC_7, value);
	}

	inline static int32_t get_offset_of_Shadow_8() { return static_cast<int32_t>(offsetof(Collector_t237117861, ___Shadow_8)); }
	inline GameObject_t1756533147 * get_Shadow_8() const { return ___Shadow_8; }
	inline GameObject_t1756533147 ** get_address_of_Shadow_8() { return &___Shadow_8; }
	inline void set_Shadow_8(GameObject_t1756533147 * value)
	{
		___Shadow_8 = value;
		Il2CppCodeGenWriteBarrier(&___Shadow_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

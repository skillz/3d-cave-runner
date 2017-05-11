#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Bat
struct  Bat_t4262919249  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector2 Bat::OrbitDistanceRange
	Vector2_t2243707579  ___OrbitDistanceRange_2;
	// UnityEngine.Vector2 Bat::OrbitSpeedRange
	Vector2_t2243707579  ___OrbitSpeedRange_3;
	// System.Single Bat::OrbitSpeed
	float ___OrbitSpeed_4;
	// System.Int32 Bat::FlightDirection
	int32_t ___FlightDirection_5;
	// UnityEngine.Vector3 Bat::PrevPos
	Vector3_t2243707580  ___PrevPos_6;

public:
	inline static int32_t get_offset_of_OrbitDistanceRange_2() { return static_cast<int32_t>(offsetof(Bat_t4262919249, ___OrbitDistanceRange_2)); }
	inline Vector2_t2243707579  get_OrbitDistanceRange_2() const { return ___OrbitDistanceRange_2; }
	inline Vector2_t2243707579 * get_address_of_OrbitDistanceRange_2() { return &___OrbitDistanceRange_2; }
	inline void set_OrbitDistanceRange_2(Vector2_t2243707579  value)
	{
		___OrbitDistanceRange_2 = value;
	}

	inline static int32_t get_offset_of_OrbitSpeedRange_3() { return static_cast<int32_t>(offsetof(Bat_t4262919249, ___OrbitSpeedRange_3)); }
	inline Vector2_t2243707579  get_OrbitSpeedRange_3() const { return ___OrbitSpeedRange_3; }
	inline Vector2_t2243707579 * get_address_of_OrbitSpeedRange_3() { return &___OrbitSpeedRange_3; }
	inline void set_OrbitSpeedRange_3(Vector2_t2243707579  value)
	{
		___OrbitSpeedRange_3 = value;
	}

	inline static int32_t get_offset_of_OrbitSpeed_4() { return static_cast<int32_t>(offsetof(Bat_t4262919249, ___OrbitSpeed_4)); }
	inline float get_OrbitSpeed_4() const { return ___OrbitSpeed_4; }
	inline float* get_address_of_OrbitSpeed_4() { return &___OrbitSpeed_4; }
	inline void set_OrbitSpeed_4(float value)
	{
		___OrbitSpeed_4 = value;
	}

	inline static int32_t get_offset_of_FlightDirection_5() { return static_cast<int32_t>(offsetof(Bat_t4262919249, ___FlightDirection_5)); }
	inline int32_t get_FlightDirection_5() const { return ___FlightDirection_5; }
	inline int32_t* get_address_of_FlightDirection_5() { return &___FlightDirection_5; }
	inline void set_FlightDirection_5(int32_t value)
	{
		___FlightDirection_5 = value;
	}

	inline static int32_t get_offset_of_PrevPos_6() { return static_cast<int32_t>(offsetof(Bat_t4262919249, ___PrevPos_6)); }
	inline Vector3_t2243707580  get_PrevPos_6() const { return ___PrevPos_6; }
	inline Vector3_t2243707580 * get_address_of_PrevPos_6() { return &___PrevPos_6; }
	inline void set_PrevPos_6(Vector3_t2243707580  value)
	{
		___PrevPos_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

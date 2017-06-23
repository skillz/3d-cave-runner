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
// PlayerControls
struct PlayerControls_t1008173349;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tunnel
struct  Tunnel_t3920944030  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Tunnel::InitialSpeed
	float ___InitialSpeed_2;
	// System.Int32 Tunnel::TunnelLength
	int32_t ___TunnelLength_3;
	// UnityEngine.GameObject Tunnel::Player
	GameObject_t1756533147 * ___Player_4;
	// PlayerControls Tunnel::pControls
	PlayerControls_t1008173349 * ___pControls_5;
	// System.Single Tunnel::TunnelSpeed
	float ___TunnelSpeed_6;
	// UnityEngine.Vector3 Tunnel::InitPos
	Vector3_t2243707580  ___InitPos_7;
	// System.Single Tunnel::DistancePassed
	float ___DistancePassed_8;

public:
	inline static int32_t get_offset_of_InitialSpeed_2() { return static_cast<int32_t>(offsetof(Tunnel_t3920944030, ___InitialSpeed_2)); }
	inline float get_InitialSpeed_2() const { return ___InitialSpeed_2; }
	inline float* get_address_of_InitialSpeed_2() { return &___InitialSpeed_2; }
	inline void set_InitialSpeed_2(float value)
	{
		___InitialSpeed_2 = value;
	}

	inline static int32_t get_offset_of_TunnelLength_3() { return static_cast<int32_t>(offsetof(Tunnel_t3920944030, ___TunnelLength_3)); }
	inline int32_t get_TunnelLength_3() const { return ___TunnelLength_3; }
	inline int32_t* get_address_of_TunnelLength_3() { return &___TunnelLength_3; }
	inline void set_TunnelLength_3(int32_t value)
	{
		___TunnelLength_3 = value;
	}

	inline static int32_t get_offset_of_Player_4() { return static_cast<int32_t>(offsetof(Tunnel_t3920944030, ___Player_4)); }
	inline GameObject_t1756533147 * get_Player_4() const { return ___Player_4; }
	inline GameObject_t1756533147 ** get_address_of_Player_4() { return &___Player_4; }
	inline void set_Player_4(GameObject_t1756533147 * value)
	{
		___Player_4 = value;
		Il2CppCodeGenWriteBarrier(&___Player_4, value);
	}

	inline static int32_t get_offset_of_pControls_5() { return static_cast<int32_t>(offsetof(Tunnel_t3920944030, ___pControls_5)); }
	inline PlayerControls_t1008173349 * get_pControls_5() const { return ___pControls_5; }
	inline PlayerControls_t1008173349 ** get_address_of_pControls_5() { return &___pControls_5; }
	inline void set_pControls_5(PlayerControls_t1008173349 * value)
	{
		___pControls_5 = value;
		Il2CppCodeGenWriteBarrier(&___pControls_5, value);
	}

	inline static int32_t get_offset_of_TunnelSpeed_6() { return static_cast<int32_t>(offsetof(Tunnel_t3920944030, ___TunnelSpeed_6)); }
	inline float get_TunnelSpeed_6() const { return ___TunnelSpeed_6; }
	inline float* get_address_of_TunnelSpeed_6() { return &___TunnelSpeed_6; }
	inline void set_TunnelSpeed_6(float value)
	{
		___TunnelSpeed_6 = value;
	}

	inline static int32_t get_offset_of_InitPos_7() { return static_cast<int32_t>(offsetof(Tunnel_t3920944030, ___InitPos_7)); }
	inline Vector3_t2243707580  get_InitPos_7() const { return ___InitPos_7; }
	inline Vector3_t2243707580 * get_address_of_InitPos_7() { return &___InitPos_7; }
	inline void set_InitPos_7(Vector3_t2243707580  value)
	{
		___InitPos_7 = value;
	}

	inline static int32_t get_offset_of_DistancePassed_8() { return static_cast<int32_t>(offsetof(Tunnel_t3920944030, ___DistancePassed_8)); }
	inline float get_DistancePassed_8() const { return ___DistancePassed_8; }
	inline float* get_address_of_DistancePassed_8() { return &___DistancePassed_8; }
	inline void set_DistancePassed_8(float value)
	{
		___DistancePassed_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

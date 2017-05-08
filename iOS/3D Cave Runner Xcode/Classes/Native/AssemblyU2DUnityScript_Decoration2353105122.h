#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform[]
struct TransformU5BU5D_t3764228911;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Decoration
struct  Decoration_t2353105122  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform[] Decoration::DecorObject
	TransformU5BU5D_t3764228911* ___DecorObject_2;
	// UnityEngine.Transform Decoration::DecorObjectCopy
	Transform_t3275118058 * ___DecorObjectCopy_3;
	// UnityEngine.Vector2 Decoration::RotationRangeX
	Vector2_t2243707579  ___RotationRangeX_4;
	// UnityEngine.Vector2 Decoration::RotationRangeY
	Vector2_t2243707579  ___RotationRangeY_5;
	// UnityEngine.Vector2 Decoration::RotationRangeZ
	Vector2_t2243707579  ___RotationRangeZ_6;
	// System.Single Decoration::EmptyChance
	float ___EmptyChance_7;

public:
	inline static int32_t get_offset_of_DecorObject_2() { return static_cast<int32_t>(offsetof(Decoration_t2353105122, ___DecorObject_2)); }
	inline TransformU5BU5D_t3764228911* get_DecorObject_2() const { return ___DecorObject_2; }
	inline TransformU5BU5D_t3764228911** get_address_of_DecorObject_2() { return &___DecorObject_2; }
	inline void set_DecorObject_2(TransformU5BU5D_t3764228911* value)
	{
		___DecorObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___DecorObject_2, value);
	}

	inline static int32_t get_offset_of_DecorObjectCopy_3() { return static_cast<int32_t>(offsetof(Decoration_t2353105122, ___DecorObjectCopy_3)); }
	inline Transform_t3275118058 * get_DecorObjectCopy_3() const { return ___DecorObjectCopy_3; }
	inline Transform_t3275118058 ** get_address_of_DecorObjectCopy_3() { return &___DecorObjectCopy_3; }
	inline void set_DecorObjectCopy_3(Transform_t3275118058 * value)
	{
		___DecorObjectCopy_3 = value;
		Il2CppCodeGenWriteBarrier(&___DecorObjectCopy_3, value);
	}

	inline static int32_t get_offset_of_RotationRangeX_4() { return static_cast<int32_t>(offsetof(Decoration_t2353105122, ___RotationRangeX_4)); }
	inline Vector2_t2243707579  get_RotationRangeX_4() const { return ___RotationRangeX_4; }
	inline Vector2_t2243707579 * get_address_of_RotationRangeX_4() { return &___RotationRangeX_4; }
	inline void set_RotationRangeX_4(Vector2_t2243707579  value)
	{
		___RotationRangeX_4 = value;
	}

	inline static int32_t get_offset_of_RotationRangeY_5() { return static_cast<int32_t>(offsetof(Decoration_t2353105122, ___RotationRangeY_5)); }
	inline Vector2_t2243707579  get_RotationRangeY_5() const { return ___RotationRangeY_5; }
	inline Vector2_t2243707579 * get_address_of_RotationRangeY_5() { return &___RotationRangeY_5; }
	inline void set_RotationRangeY_5(Vector2_t2243707579  value)
	{
		___RotationRangeY_5 = value;
	}

	inline static int32_t get_offset_of_RotationRangeZ_6() { return static_cast<int32_t>(offsetof(Decoration_t2353105122, ___RotationRangeZ_6)); }
	inline Vector2_t2243707579  get_RotationRangeZ_6() const { return ___RotationRangeZ_6; }
	inline Vector2_t2243707579 * get_address_of_RotationRangeZ_6() { return &___RotationRangeZ_6; }
	inline void set_RotationRangeZ_6(Vector2_t2243707579  value)
	{
		___RotationRangeZ_6 = value;
	}

	inline static int32_t get_offset_of_EmptyChance_7() { return static_cast<int32_t>(offsetof(Decoration_t2353105122, ___EmptyChance_7)); }
	inline float get_EmptyChance_7() const { return ___EmptyChance_7; }
	inline float* get_address_of_EmptyChance_7() { return &___EmptyChance_7; }
	inline void set_EmptyChance_7(float value)
	{
		___EmptyChance_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

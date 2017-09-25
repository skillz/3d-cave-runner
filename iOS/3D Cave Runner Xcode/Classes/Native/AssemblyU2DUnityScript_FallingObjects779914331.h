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
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// UnityEngine.Transform[]
struct TransformU5BU5D_t3764228911;
// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FallingObjects
struct  FallingObjects_t779914331  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform[] FallingObjects::Objects
	TransformU5BU5D_t3764228911* ___Objects_2;
	// UnityEngine.Transform FallingObjects::ObjectCopy
	Transform_t3275118058 * ___ObjectCopy_3;
	// UnityEngine.Vector3 FallingObjects::FallSpeed
	Vector3_t2243707580  ___FallSpeed_4;
	// UnityEngine.Vector2 FallingObjects::CreationRate
	Vector2_t2243707579  ___CreationRate_5;
	// System.Single FallingObjects::CurrentCreationRate
	float ___CurrentCreationRate_6;
	// System.Single FallingObjects::CreationTime
	float ___CreationTime_7;
	// UnityEngine.Vector2 FallingObjects::DestroyAfter
	Vector2_t2243707579  ___DestroyAfter_8;
	// System.Single FallingObjects::CurrentDestroyAfter
	float ___CurrentDestroyAfter_9;
	// UnityEngine.Vector3 FallingObjects::CreationArea
	Vector3_t2243707580  ___CreationArea_10;

public:
	inline static int32_t get_offset_of_Objects_2() { return static_cast<int32_t>(offsetof(FallingObjects_t779914331, ___Objects_2)); }
	inline TransformU5BU5D_t3764228911* get_Objects_2() const { return ___Objects_2; }
	inline TransformU5BU5D_t3764228911** get_address_of_Objects_2() { return &___Objects_2; }
	inline void set_Objects_2(TransformU5BU5D_t3764228911* value)
	{
		___Objects_2 = value;
		Il2CppCodeGenWriteBarrier(&___Objects_2, value);
	}

	inline static int32_t get_offset_of_ObjectCopy_3() { return static_cast<int32_t>(offsetof(FallingObjects_t779914331, ___ObjectCopy_3)); }
	inline Transform_t3275118058 * get_ObjectCopy_3() const { return ___ObjectCopy_3; }
	inline Transform_t3275118058 ** get_address_of_ObjectCopy_3() { return &___ObjectCopy_3; }
	inline void set_ObjectCopy_3(Transform_t3275118058 * value)
	{
		___ObjectCopy_3 = value;
		Il2CppCodeGenWriteBarrier(&___ObjectCopy_3, value);
	}

	inline static int32_t get_offset_of_FallSpeed_4() { return static_cast<int32_t>(offsetof(FallingObjects_t779914331, ___FallSpeed_4)); }
	inline Vector3_t2243707580  get_FallSpeed_4() const { return ___FallSpeed_4; }
	inline Vector3_t2243707580 * get_address_of_FallSpeed_4() { return &___FallSpeed_4; }
	inline void set_FallSpeed_4(Vector3_t2243707580  value)
	{
		___FallSpeed_4 = value;
	}

	inline static int32_t get_offset_of_CreationRate_5() { return static_cast<int32_t>(offsetof(FallingObjects_t779914331, ___CreationRate_5)); }
	inline Vector2_t2243707579  get_CreationRate_5() const { return ___CreationRate_5; }
	inline Vector2_t2243707579 * get_address_of_CreationRate_5() { return &___CreationRate_5; }
	inline void set_CreationRate_5(Vector2_t2243707579  value)
	{
		___CreationRate_5 = value;
	}

	inline static int32_t get_offset_of_CurrentCreationRate_6() { return static_cast<int32_t>(offsetof(FallingObjects_t779914331, ___CurrentCreationRate_6)); }
	inline float get_CurrentCreationRate_6() const { return ___CurrentCreationRate_6; }
	inline float* get_address_of_CurrentCreationRate_6() { return &___CurrentCreationRate_6; }
	inline void set_CurrentCreationRate_6(float value)
	{
		___CurrentCreationRate_6 = value;
	}

	inline static int32_t get_offset_of_CreationTime_7() { return static_cast<int32_t>(offsetof(FallingObjects_t779914331, ___CreationTime_7)); }
	inline float get_CreationTime_7() const { return ___CreationTime_7; }
	inline float* get_address_of_CreationTime_7() { return &___CreationTime_7; }
	inline void set_CreationTime_7(float value)
	{
		___CreationTime_7 = value;
	}

	inline static int32_t get_offset_of_DestroyAfter_8() { return static_cast<int32_t>(offsetof(FallingObjects_t779914331, ___DestroyAfter_8)); }
	inline Vector2_t2243707579  get_DestroyAfter_8() const { return ___DestroyAfter_8; }
	inline Vector2_t2243707579 * get_address_of_DestroyAfter_8() { return &___DestroyAfter_8; }
	inline void set_DestroyAfter_8(Vector2_t2243707579  value)
	{
		___DestroyAfter_8 = value;
	}

	inline static int32_t get_offset_of_CurrentDestroyAfter_9() { return static_cast<int32_t>(offsetof(FallingObjects_t779914331, ___CurrentDestroyAfter_9)); }
	inline float get_CurrentDestroyAfter_9() const { return ___CurrentDestroyAfter_9; }
	inline float* get_address_of_CurrentDestroyAfter_9() { return &___CurrentDestroyAfter_9; }
	inline void set_CurrentDestroyAfter_9(float value)
	{
		___CurrentDestroyAfter_9 = value;
	}

	inline static int32_t get_offset_of_CreationArea_10() { return static_cast<int32_t>(offsetof(FallingObjects_t779914331, ___CreationArea_10)); }
	inline Vector3_t2243707580  get_CreationArea_10() const { return ___CreationArea_10; }
	inline Vector3_t2243707580 * get_address_of_CreationArea_10() { return &___CreationArea_10; }
	inline void set_CreationArea_10(Vector3_t2243707580  value)
	{
		___CreationArea_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

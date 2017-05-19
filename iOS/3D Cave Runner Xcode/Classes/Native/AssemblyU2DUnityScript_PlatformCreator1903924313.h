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

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Transform[]
struct TransformU5BU5D_t3764228911;
// Collector
struct Collector_t237117861;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlatformCreator
struct  PlatformCreator_t1903924313  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject PlatformCreator::Player
	GameObject_t1756533147 * ___Player_2;
	// System.Int32 PlatformCreator::NumberOfPlatforms
	int32_t ___NumberOfPlatforms_3;
	// System.Int32 PlatformCreator::PlatformIndex
	int32_t ___PlatformIndex_4;
	// UnityEngine.Transform PlatformCreator::NewPlatform
	Transform_t3275118058 * ___NewPlatform_5;
	// UnityEngine.Transform PlatformCreator::NewPlatformCopy
	Transform_t3275118058 * ___NewPlatformCopy_6;
	// System.Int32 PlatformCreator::SectionLength
	int32_t ___SectionLength_7;
	// UnityEngine.Transform[] PlatformCreator::SectionEdge
	TransformU5BU5D_t3764228911* ___SectionEdge_8;
	// UnityEngine.Transform[] PlatformCreator::SectionMiddle
	TransformU5BU5D_t3764228911* ___SectionMiddle_9;
	// System.Int32 PlatformCreator::SectionIndex
	int32_t ___SectionIndex_10;
	// UnityEngine.GameObject PlatformCreator::SectionCopy
	GameObject_t1756533147 * ___SectionCopy_11;
	// UnityEngine.Vector2 PlatformCreator::PlatformWidthRange
	Vector2_t2243707579  ___PlatformWidthRange_12;
	// System.Single PlatformCreator::PlatformWidth
	float ___PlatformWidth_13;
	// UnityEngine.Vector2 PlatformCreator::PlatformLengthRange
	Vector2_t2243707579  ___PlatformLengthRange_14;
	// System.Int32 PlatformCreator::PlatformLength
	int32_t ___PlatformLength_15;
	// System.Int32 PlatformCreator::PlatformOldLength
	int32_t ___PlatformOldLength_16;
	// UnityEngine.Vector2 PlatformCreator::PlatformHeightRange
	Vector2_t2243707579  ___PlatformHeightRange_17;
	// System.Int32 PlatformCreator::PlatformHeight
	int32_t ___PlatformHeight_18;
	// UnityEngine.Vector2 PlatformCreator::PlatformGapRange
	Vector2_t2243707579  ___PlatformGapRange_19;
	// System.Int32 PlatformCreator::PlatformGap
	int32_t ___PlatformGap_20;
	// UnityEngine.Vector2 PlatformCreator::PlatformRotateRange
	Vector2_t2243707579  ___PlatformRotateRange_21;
	// System.Int32 PlatformCreator::PlatformRotate
	int32_t ___PlatformRotate_22;
	// UnityEngine.Vector2 PlatformCreator::PlatformShiftRange
	Vector2_t2243707579  ___PlatformShiftRange_23;
	// System.Single PlatformCreator::PlatformShift
	float ___PlatformShift_24;
	// UnityEngine.Transform[] PlatformCreator::Gem
	TransformU5BU5D_t3764228911* ___Gem_25;
	// UnityEngine.GameObject PlatformCreator::GemCopy
	GameObject_t1756533147 * ___GemCopy_26;
	// System.Int32 PlatformCreator::GemIndex
	int32_t ___GemIndex_27;
	// System.Int32 PlatformCreator::GemShift
	int32_t ___GemShift_28;
	// System.Single PlatformCreator::GemRate
	float ___GemRate_29;
	// UnityEngine.Transform[] PlatformCreator::Obstacle
	TransformU5BU5D_t3764228911* ___Obstacle_30;
	// UnityEngine.GameObject PlatformCreator::ObstacleCopy
	GameObject_t1756533147 * ___ObstacleCopy_31;
	// System.Single PlatformCreator::ObstacleRate
	float ___ObstacleRate_32;
	// System.Int32 PlatformCreator::TotalPlatformLength
	int32_t ___TotalPlatformLength_33;
	// System.Int32 PlatformCreator::GemTrail
	int32_t ___GemTrail_34;
	// UnityEngine.Vector2 PlatformCreator::GemTrailRange
	Vector2_t2243707579  ___GemTrailRange_35;
	// Collector PlatformCreator::collector
	Collector_t237117861 * ___collector_36;

public:
	inline static int32_t get_offset_of_Player_2() { return static_cast<int32_t>(offsetof(PlatformCreator_t1903924313, ___Player_2)); }
	inline GameObject_t1756533147 * get_Player_2() const { return ___Player_2; }
	inline GameObject_t1756533147 ** get_address_of_Player_2() { return &___Player_2; }
	inline void set_Player_2(GameObject_t1756533147 * value)
	{
		___Player_2 = value;
		Il2CppCodeGenWriteBarrier(&___Player_2, value);
	}

	inline static int32_t get_offset_of_NumberOfPlatforms_3() { return static_cast<int32_t>(offsetof(PlatformCreator_t1903924313, ___NumberOfPlatforms_3)); }
	inline int32_t get_NumberOfPlatforms_3() const { return ___NumberOfPlatforms_3; }
	inline int32_t* get_address_of_NumberOfPlatforms_3() { return &___NumberOfPlatforms_3; }
	inline void set_NumberOfPlatforms_3(int32_t value)
	{
		___NumberOfPlatforms_3 = value;
	}

	inline static int32_t get_offset_of_PlatformIndex_4() { return static_cast<int32_t>(offsetof(PlatformCreator_t1903924313, ___PlatformIndex_4)); }
	inline int32_t get_PlatformIndex_4() const { return ___PlatformIndex_4; }
	inline int32_t* get_address_of_PlatformIndex_4() { return &___PlatformIndex_4; }
	inline void set_PlatformIndex_4(int32_t value)
	{
		___PlatformIndex_4 = value;
	}

	inline static int32_t get_offset_of_NewPlatform_5() { return static_cast<int32_t>(offsetof(PlatformCreator_t1903924313, ___NewPlatform_5)); }
	inline Transform_t3275118058 * get_NewPlatform_5() const { return ___NewPlatform_5; }
	inline Transform_t3275118058 ** get_address_of_NewPlatform_5() { return &___NewPlatform_5; }
	inline void set_NewPlatform_5(Transform_t3275118058 * value)
	{
		___NewPlatform_5 = value;
		Il2CppCodeGenWriteBarrier(&___NewPlatform_5, value);
	}

	inline static int32_t get_offset_of_NewPlatformCopy_6() { return static_cast<int32_t>(offsetof(PlatformCreator_t1903924313, ___NewPlatformCopy_6)); }
	inline Transform_t3275118058 * get_NewPlatformCopy_6() const { return ___NewPlatformCopy_6; }
	inline Transform_t3275118058 ** get_address_of_NewPlatformCopy_6() { return &___NewPlatformCopy_6; }
	inline void set_NewPlatformCopy_6(Transform_t3275118058 * value)
	{
		___NewPlatformCopy_6 = value;
		Il2CppCodeGenWriteBarrier(&___NewPlatformCopy_6, value);
	}

	inline static int32_t get_offset_of_SectionLength_7() { return static_cast<int32_t>(offsetof(PlatformCreator_t1903924313, ___SectionLength_7)); }
	inline int32_t get_SectionLength_7() const { return ___SectionLength_7; }
	inline int32_t* get_address_of_SectionLength_7() { return &___SectionLength_7; }
	inline void set_SectionLength_7(int32_t value)
	{
		___SectionLength_7 = value;
	}

	inline static int32_t get_offset_of_SectionEdge_8() { return static_cast<int32_t>(offsetof(PlatformCreator_t1903924313, ___SectionEdge_8)); }
	inline TransformU5BU5D_t3764228911* get_SectionEdge_8() const { return ___SectionEdge_8; }
	inline TransformU5BU5D_t3764228911** get_address_of_SectionEdge_8() { return &___SectionEdge_8; }
	inline void set_SectionEdge_8(TransformU5BU5D_t3764228911* value)
	{
		___SectionEdge_8 = value;
		Il2CppCodeGenWriteBarrier(&___SectionEdge_8, value);
	}

	inline static int32_t get_offset_of_SectionMiddle_9() { return static_cast<int32_t>(offsetof(PlatformCreator_t1903924313, ___SectionMiddle_9)); }
	inline TransformU5BU5D_t3764228911* get_SectionMiddle_9() const { return ___SectionMiddle_9; }
	inline TransformU5BU5D_t3764228911** get_address_of_SectionMiddle_9() { return &___SectionMiddle_9; }
	inline void set_SectionMiddle_9(TransformU5BU5D_t3764228911* value)
	{
		___SectionMiddle_9 = value;
		Il2CppCodeGenWriteBarrier(&___SectionMiddle_9, value);
	}

	inline static int32_t get_offset_of_SectionIndex_10() { return static_cast<int32_t>(offsetof(PlatformCreator_t1903924313, ___SectionIndex_10)); }
	inline int32_t get_SectionIndex_10() const { return ___SectionIndex_10; }
	inline int32_t* get_address_of_SectionIndex_10() { return &___SectionIndex_10; }
	inline void set_SectionIndex_10(int32_t value)
	{
		___SectionIndex_10 = value;
	}

	inline static int32_t get_offset_of_SectionCopy_11() { return static_cast<int32_t>(offsetof(PlatformCreator_t1903924313, ___SectionCopy_11)); }
	inline GameObject_t1756533147 * get_SectionCopy_11() const { return ___SectionCopy_11; }
	inline GameObject_t1756533147 ** get_address_of_SectionCopy_11() { return &___SectionCopy_11; }
	inline void set_SectionCopy_11(GameObject_t1756533147 * value)
	{
		___SectionCopy_11 = value;
		Il2CppCodeGenWriteBarrier(&___SectionCopy_11, value);
	}

	inline static int32_t get_offset_of_PlatformWidthRange_12() { return static_cast<int32_t>(offsetof(PlatformCreator_t1903924313, ___PlatformWidthRange_12)); }
	inline Vector2_t2243707579  get_PlatformWidthRange_12() const { return ___PlatformWidthRange_12; }
	inline Vector2_t2243707579 * get_address_of_PlatformWidthRange_12() { return &___PlatformWidthRange_12; }
	inline void set_PlatformWidthRange_12(Vector2_t2243707579  value)
	{
		___PlatformWidthRange_12 = value;
	}

	inline static int32_t get_offset_of_PlatformWidth_13() { return static_cast<int32_t>(offsetof(PlatformCreator_t1903924313, ___PlatformWidth_13)); }
	inline float get_PlatformWidth_13() const { return ___PlatformWidth_13; }
	inline float* get_address_of_PlatformWidth_13() { return &___PlatformWidth_13; }
	inline void set_PlatformWidth_13(float value)
	{
		___PlatformWidth_13 = value;
	}

	inline static int32_t get_offset_of_PlatformLengthRange_14() { return static_cast<int32_t>(offsetof(PlatformCreator_t1903924313, ___PlatformLengthRange_14)); }
	inline Vector2_t2243707579  get_PlatformLengthRange_14() const { return ___PlatformLengthRange_14; }
	inline Vector2_t2243707579 * get_address_of_PlatformLengthRange_14() { return &___PlatformLengthRange_14; }
	inline void set_PlatformLengthRange_14(Vector2_t2243707579  value)
	{
		___PlatformLengthRange_14 = value;
	}

	inline static int32_t get_offset_of_PlatformLength_15() { return static_cast<int32_t>(offsetof(PlatformCreator_t1903924313, ___PlatformLength_15)); }
	inline int32_t get_PlatformLength_15() const { return ___PlatformLength_15; }
	inline int32_t* get_address_of_PlatformLength_15() { return &___PlatformLength_15; }
	inline void set_PlatformLength_15(int32_t value)
	{
		___PlatformLength_15 = value;
	}

	inline static int32_t get_offset_of_PlatformOldLength_16() { return static_cast<int32_t>(offsetof(PlatformCreator_t1903924313, ___PlatformOldLength_16)); }
	inline int32_t get_PlatformOldLength_16() const { return ___PlatformOldLength_16; }
	inline int32_t* get_address_of_PlatformOldLength_16() { return &___PlatformOldLength_16; }
	inline void set_PlatformOldLength_16(int32_t value)
	{
		___PlatformOldLength_16 = value;
	}

	inline static int32_t get_offset_of_PlatformHeightRange_17() { return static_cast<int32_t>(offsetof(PlatformCreator_t1903924313, ___PlatformHeightRange_17)); }
	inline Vector2_t2243707579  get_PlatformHeightRange_17() const { return ___PlatformHeightRange_17; }
	inline Vector2_t2243707579 * get_address_of_PlatformHeightRange_17() { return &___PlatformHeightRange_17; }
	inline void set_PlatformHeightRange_17(Vector2_t2243707579  value)
	{
		___PlatformHeightRange_17 = value;
	}

	inline static int32_t get_offset_of_PlatformHeight_18() { return static_cast<int32_t>(offsetof(PlatformCreator_t1903924313, ___PlatformHeight_18)); }
	inline int32_t get_PlatformHeight_18() const { return ___PlatformHeight_18; }
	inline int32_t* get_address_of_PlatformHeight_18() { return &___PlatformHeight_18; }
	inline void set_PlatformHeight_18(int32_t value)
	{
		___PlatformHeight_18 = value;
	}

	inline static int32_t get_offset_of_PlatformGapRange_19() { return static_cast<int32_t>(offsetof(PlatformCreator_t1903924313, ___PlatformGapRange_19)); }
	inline Vector2_t2243707579  get_PlatformGapRange_19() const { return ___PlatformGapRange_19; }
	inline Vector2_t2243707579 * get_address_of_PlatformGapRange_19() { return &___PlatformGapRange_19; }
	inline void set_PlatformGapRange_19(Vector2_t2243707579  value)
	{
		___PlatformGapRange_19 = value;
	}

	inline static int32_t get_offset_of_PlatformGap_20() { return static_cast<int32_t>(offsetof(PlatformCreator_t1903924313, ___PlatformGap_20)); }
	inline int32_t get_PlatformGap_20() const { return ___PlatformGap_20; }
	inline int32_t* get_address_of_PlatformGap_20() { return &___PlatformGap_20; }
	inline void set_PlatformGap_20(int32_t value)
	{
		___PlatformGap_20 = value;
	}

	inline static int32_t get_offset_of_PlatformRotateRange_21() { return static_cast<int32_t>(offsetof(PlatformCreator_t1903924313, ___PlatformRotateRange_21)); }
	inline Vector2_t2243707579  get_PlatformRotateRange_21() const { return ___PlatformRotateRange_21; }
	inline Vector2_t2243707579 * get_address_of_PlatformRotateRange_21() { return &___PlatformRotateRange_21; }
	inline void set_PlatformRotateRange_21(Vector2_t2243707579  value)
	{
		___PlatformRotateRange_21 = value;
	}

	inline static int32_t get_offset_of_PlatformRotate_22() { return static_cast<int32_t>(offsetof(PlatformCreator_t1903924313, ___PlatformRotate_22)); }
	inline int32_t get_PlatformRotate_22() const { return ___PlatformRotate_22; }
	inline int32_t* get_address_of_PlatformRotate_22() { return &___PlatformRotate_22; }
	inline void set_PlatformRotate_22(int32_t value)
	{
		___PlatformRotate_22 = value;
	}

	inline static int32_t get_offset_of_PlatformShiftRange_23() { return static_cast<int32_t>(offsetof(PlatformCreator_t1903924313, ___PlatformShiftRange_23)); }
	inline Vector2_t2243707579  get_PlatformShiftRange_23() const { return ___PlatformShiftRange_23; }
	inline Vector2_t2243707579 * get_address_of_PlatformShiftRange_23() { return &___PlatformShiftRange_23; }
	inline void set_PlatformShiftRange_23(Vector2_t2243707579  value)
	{
		___PlatformShiftRange_23 = value;
	}

	inline static int32_t get_offset_of_PlatformShift_24() { return static_cast<int32_t>(offsetof(PlatformCreator_t1903924313, ___PlatformShift_24)); }
	inline float get_PlatformShift_24() const { return ___PlatformShift_24; }
	inline float* get_address_of_PlatformShift_24() { return &___PlatformShift_24; }
	inline void set_PlatformShift_24(float value)
	{
		___PlatformShift_24 = value;
	}

	inline static int32_t get_offset_of_Gem_25() { return static_cast<int32_t>(offsetof(PlatformCreator_t1903924313, ___Gem_25)); }
	inline TransformU5BU5D_t3764228911* get_Gem_25() const { return ___Gem_25; }
	inline TransformU5BU5D_t3764228911** get_address_of_Gem_25() { return &___Gem_25; }
	inline void set_Gem_25(TransformU5BU5D_t3764228911* value)
	{
		___Gem_25 = value;
		Il2CppCodeGenWriteBarrier(&___Gem_25, value);
	}

	inline static int32_t get_offset_of_GemCopy_26() { return static_cast<int32_t>(offsetof(PlatformCreator_t1903924313, ___GemCopy_26)); }
	inline GameObject_t1756533147 * get_GemCopy_26() const { return ___GemCopy_26; }
	inline GameObject_t1756533147 ** get_address_of_GemCopy_26() { return &___GemCopy_26; }
	inline void set_GemCopy_26(GameObject_t1756533147 * value)
	{
		___GemCopy_26 = value;
		Il2CppCodeGenWriteBarrier(&___GemCopy_26, value);
	}

	inline static int32_t get_offset_of_GemIndex_27() { return static_cast<int32_t>(offsetof(PlatformCreator_t1903924313, ___GemIndex_27)); }
	inline int32_t get_GemIndex_27() const { return ___GemIndex_27; }
	inline int32_t* get_address_of_GemIndex_27() { return &___GemIndex_27; }
	inline void set_GemIndex_27(int32_t value)
	{
		___GemIndex_27 = value;
	}

	inline static int32_t get_offset_of_GemShift_28() { return static_cast<int32_t>(offsetof(PlatformCreator_t1903924313, ___GemShift_28)); }
	inline int32_t get_GemShift_28() const { return ___GemShift_28; }
	inline int32_t* get_address_of_GemShift_28() { return &___GemShift_28; }
	inline void set_GemShift_28(int32_t value)
	{
		___GemShift_28 = value;
	}

	inline static int32_t get_offset_of_GemRate_29() { return static_cast<int32_t>(offsetof(PlatformCreator_t1903924313, ___GemRate_29)); }
	inline float get_GemRate_29() const { return ___GemRate_29; }
	inline float* get_address_of_GemRate_29() { return &___GemRate_29; }
	inline void set_GemRate_29(float value)
	{
		___GemRate_29 = value;
	}

	inline static int32_t get_offset_of_Obstacle_30() { return static_cast<int32_t>(offsetof(PlatformCreator_t1903924313, ___Obstacle_30)); }
	inline TransformU5BU5D_t3764228911* get_Obstacle_30() const { return ___Obstacle_30; }
	inline TransformU5BU5D_t3764228911** get_address_of_Obstacle_30() { return &___Obstacle_30; }
	inline void set_Obstacle_30(TransformU5BU5D_t3764228911* value)
	{
		___Obstacle_30 = value;
		Il2CppCodeGenWriteBarrier(&___Obstacle_30, value);
	}

	inline static int32_t get_offset_of_ObstacleCopy_31() { return static_cast<int32_t>(offsetof(PlatformCreator_t1903924313, ___ObstacleCopy_31)); }
	inline GameObject_t1756533147 * get_ObstacleCopy_31() const { return ___ObstacleCopy_31; }
	inline GameObject_t1756533147 ** get_address_of_ObstacleCopy_31() { return &___ObstacleCopy_31; }
	inline void set_ObstacleCopy_31(GameObject_t1756533147 * value)
	{
		___ObstacleCopy_31 = value;
		Il2CppCodeGenWriteBarrier(&___ObstacleCopy_31, value);
	}

	inline static int32_t get_offset_of_ObstacleRate_32() { return static_cast<int32_t>(offsetof(PlatformCreator_t1903924313, ___ObstacleRate_32)); }
	inline float get_ObstacleRate_32() const { return ___ObstacleRate_32; }
	inline float* get_address_of_ObstacleRate_32() { return &___ObstacleRate_32; }
	inline void set_ObstacleRate_32(float value)
	{
		___ObstacleRate_32 = value;
	}

	inline static int32_t get_offset_of_TotalPlatformLength_33() { return static_cast<int32_t>(offsetof(PlatformCreator_t1903924313, ___TotalPlatformLength_33)); }
	inline int32_t get_TotalPlatformLength_33() const { return ___TotalPlatformLength_33; }
	inline int32_t* get_address_of_TotalPlatformLength_33() { return &___TotalPlatformLength_33; }
	inline void set_TotalPlatformLength_33(int32_t value)
	{
		___TotalPlatformLength_33 = value;
	}

	inline static int32_t get_offset_of_GemTrail_34() { return static_cast<int32_t>(offsetof(PlatformCreator_t1903924313, ___GemTrail_34)); }
	inline int32_t get_GemTrail_34() const { return ___GemTrail_34; }
	inline int32_t* get_address_of_GemTrail_34() { return &___GemTrail_34; }
	inline void set_GemTrail_34(int32_t value)
	{
		___GemTrail_34 = value;
	}

	inline static int32_t get_offset_of_GemTrailRange_35() { return static_cast<int32_t>(offsetof(PlatformCreator_t1903924313, ___GemTrailRange_35)); }
	inline Vector2_t2243707579  get_GemTrailRange_35() const { return ___GemTrailRange_35; }
	inline Vector2_t2243707579 * get_address_of_GemTrailRange_35() { return &___GemTrailRange_35; }
	inline void set_GemTrailRange_35(Vector2_t2243707579  value)
	{
		___GemTrailRange_35 = value;
	}

	inline static int32_t get_offset_of_collector_36() { return static_cast<int32_t>(offsetof(PlatformCreator_t1903924313, ___collector_36)); }
	inline Collector_t237117861 * get_collector_36() const { return ___collector_36; }
	inline Collector_t237117861 ** get_address_of_collector_36() { return &___collector_36; }
	inline void set_collector_36(Collector_t237117861 * value)
	{
		___collector_36 = value;
		Il2CppCodeGenWriteBarrier(&___collector_36, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

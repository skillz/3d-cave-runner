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
// PlayerControls
struct PlayerControls_t1008173349;
// PlatformCreator
struct PlatformCreator_t1903924313;
// UnityEngine.GUISkin
struct GUISkin_t1436893342;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController
struct  GameController_t3607102586  : public MonoBehaviour_t1158329972
{
public:
	// System.Single GameController::originalWidth
	float ___originalWidth_2;
	// System.Single GameController::originalHeight
	float ___originalHeight_3;
	// UnityEngine.Vector3 GameController::scale
	Vector3_t2243707580  ___scale_4;
	// UnityEngine.GameObject GameController::Player
	GameObject_t1756533147 * ___Player_5;
	// UnityEngine.GameObject GameController::PlatformCreator
	GameObject_t1756533147 * ___PlatformCreator_6;
	// PlayerControls GameController::pControls
	PlayerControls_t1008173349 * ___pControls_7;
	// PlatformCreator GameController::pCreator
	PlatformCreator_t1903924313 * ___pCreator_8;
	// UnityEngine.GUISkin GameController::GUIskin
	GUISkin_t1436893342 * ___GUIskin_9;
	// UnityEngine.GUISkin GameController::GUIskinLarge
	GUISkin_t1436893342 * ___GUIskinLarge_10;
	// UnityEngine.Texture2D GameController::Gems
	Texture2D_t3542995729 * ___Gems_11;
	// System.Int32 GameController::CurrentLevel
	int32_t ___CurrentLevel_12;
	// System.Int32 GameController::DistanceToLevelUp
	int32_t ___DistanceToLevelUp_13;
	// System.String[] GameController::LevelUpText
	StringU5BU5D_t1642385972* ___LevelUpText_14;
	// System.String GameController::CurrentLevelUpText
	String_t* ___CurrentLevelUpText_15;
	// System.Boolean GameController::LevelUp
	bool ___LevelUp_16;
	// System.Int32 GameController::LevelUpRumble
	int32_t ___LevelUpRumble_17;
	// System.Single GameController::MaxSpeedChange
	float ___MaxSpeedChange_18;
	// System.Single GameController::PlatformWidthChange
	float ___PlatformWidthChange_19;
	// System.Single GameController::PlatformLengthChange
	float ___PlatformLengthChange_20;
	// System.Single GameController::PlatformHeightChange
	float ___PlatformHeightChange_21;
	// System.Single GameController::PlatformGapChange
	float ___PlatformGapChange_22;
	// System.Single GameController::PlatformRotateChange
	float ___PlatformRotateChange_23;
	// System.Single GameController::PlatformShiftChange
	float ___PlatformShiftChange_24;
	// System.Single GameController::ObstacleRateChange
	float ___ObstacleRateChange_25;
	// System.Single GameController::GemRateChange
	float ___GemRateChange_26;
	// System.Single GameController::LevelUpPosX
	float ___LevelUpPosX_27;
	// System.Single GameController::TotalDistance
	float ___TotalDistance_28;
	// System.Single GameController::LastLevelDistance
	float ___LastLevelDistance_29;
	// System.Single GameController::TotalGems
	float ___TotalGems_30;
	// System.Boolean GameController::showScoreOnScreen
	bool ___showScoreOnScreen_31;

public:
	inline static int32_t get_offset_of_originalWidth_2() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___originalWidth_2)); }
	inline float get_originalWidth_2() const { return ___originalWidth_2; }
	inline float* get_address_of_originalWidth_2() { return &___originalWidth_2; }
	inline void set_originalWidth_2(float value)
	{
		___originalWidth_2 = value;
	}

	inline static int32_t get_offset_of_originalHeight_3() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___originalHeight_3)); }
	inline float get_originalHeight_3() const { return ___originalHeight_3; }
	inline float* get_address_of_originalHeight_3() { return &___originalHeight_3; }
	inline void set_originalHeight_3(float value)
	{
		___originalHeight_3 = value;
	}

	inline static int32_t get_offset_of_scale_4() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___scale_4)); }
	inline Vector3_t2243707580  get_scale_4() const { return ___scale_4; }
	inline Vector3_t2243707580 * get_address_of_scale_4() { return &___scale_4; }
	inline void set_scale_4(Vector3_t2243707580  value)
	{
		___scale_4 = value;
	}

	inline static int32_t get_offset_of_Player_5() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___Player_5)); }
	inline GameObject_t1756533147 * get_Player_5() const { return ___Player_5; }
	inline GameObject_t1756533147 ** get_address_of_Player_5() { return &___Player_5; }
	inline void set_Player_5(GameObject_t1756533147 * value)
	{
		___Player_5 = value;
		Il2CppCodeGenWriteBarrier(&___Player_5, value);
	}

	inline static int32_t get_offset_of_PlatformCreator_6() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___PlatformCreator_6)); }
	inline GameObject_t1756533147 * get_PlatformCreator_6() const { return ___PlatformCreator_6; }
	inline GameObject_t1756533147 ** get_address_of_PlatformCreator_6() { return &___PlatformCreator_6; }
	inline void set_PlatformCreator_6(GameObject_t1756533147 * value)
	{
		___PlatformCreator_6 = value;
		Il2CppCodeGenWriteBarrier(&___PlatformCreator_6, value);
	}

	inline static int32_t get_offset_of_pControls_7() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___pControls_7)); }
	inline PlayerControls_t1008173349 * get_pControls_7() const { return ___pControls_7; }
	inline PlayerControls_t1008173349 ** get_address_of_pControls_7() { return &___pControls_7; }
	inline void set_pControls_7(PlayerControls_t1008173349 * value)
	{
		___pControls_7 = value;
		Il2CppCodeGenWriteBarrier(&___pControls_7, value);
	}

	inline static int32_t get_offset_of_pCreator_8() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___pCreator_8)); }
	inline PlatformCreator_t1903924313 * get_pCreator_8() const { return ___pCreator_8; }
	inline PlatformCreator_t1903924313 ** get_address_of_pCreator_8() { return &___pCreator_8; }
	inline void set_pCreator_8(PlatformCreator_t1903924313 * value)
	{
		___pCreator_8 = value;
		Il2CppCodeGenWriteBarrier(&___pCreator_8, value);
	}

	inline static int32_t get_offset_of_GUIskin_9() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___GUIskin_9)); }
	inline GUISkin_t1436893342 * get_GUIskin_9() const { return ___GUIskin_9; }
	inline GUISkin_t1436893342 ** get_address_of_GUIskin_9() { return &___GUIskin_9; }
	inline void set_GUIskin_9(GUISkin_t1436893342 * value)
	{
		___GUIskin_9 = value;
		Il2CppCodeGenWriteBarrier(&___GUIskin_9, value);
	}

	inline static int32_t get_offset_of_GUIskinLarge_10() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___GUIskinLarge_10)); }
	inline GUISkin_t1436893342 * get_GUIskinLarge_10() const { return ___GUIskinLarge_10; }
	inline GUISkin_t1436893342 ** get_address_of_GUIskinLarge_10() { return &___GUIskinLarge_10; }
	inline void set_GUIskinLarge_10(GUISkin_t1436893342 * value)
	{
		___GUIskinLarge_10 = value;
		Il2CppCodeGenWriteBarrier(&___GUIskinLarge_10, value);
	}

	inline static int32_t get_offset_of_Gems_11() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___Gems_11)); }
	inline Texture2D_t3542995729 * get_Gems_11() const { return ___Gems_11; }
	inline Texture2D_t3542995729 ** get_address_of_Gems_11() { return &___Gems_11; }
	inline void set_Gems_11(Texture2D_t3542995729 * value)
	{
		___Gems_11 = value;
		Il2CppCodeGenWriteBarrier(&___Gems_11, value);
	}

	inline static int32_t get_offset_of_CurrentLevel_12() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___CurrentLevel_12)); }
	inline int32_t get_CurrentLevel_12() const { return ___CurrentLevel_12; }
	inline int32_t* get_address_of_CurrentLevel_12() { return &___CurrentLevel_12; }
	inline void set_CurrentLevel_12(int32_t value)
	{
		___CurrentLevel_12 = value;
	}

	inline static int32_t get_offset_of_DistanceToLevelUp_13() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___DistanceToLevelUp_13)); }
	inline int32_t get_DistanceToLevelUp_13() const { return ___DistanceToLevelUp_13; }
	inline int32_t* get_address_of_DistanceToLevelUp_13() { return &___DistanceToLevelUp_13; }
	inline void set_DistanceToLevelUp_13(int32_t value)
	{
		___DistanceToLevelUp_13 = value;
	}

	inline static int32_t get_offset_of_LevelUpText_14() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___LevelUpText_14)); }
	inline StringU5BU5D_t1642385972* get_LevelUpText_14() const { return ___LevelUpText_14; }
	inline StringU5BU5D_t1642385972** get_address_of_LevelUpText_14() { return &___LevelUpText_14; }
	inline void set_LevelUpText_14(StringU5BU5D_t1642385972* value)
	{
		___LevelUpText_14 = value;
		Il2CppCodeGenWriteBarrier(&___LevelUpText_14, value);
	}

	inline static int32_t get_offset_of_CurrentLevelUpText_15() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___CurrentLevelUpText_15)); }
	inline String_t* get_CurrentLevelUpText_15() const { return ___CurrentLevelUpText_15; }
	inline String_t** get_address_of_CurrentLevelUpText_15() { return &___CurrentLevelUpText_15; }
	inline void set_CurrentLevelUpText_15(String_t* value)
	{
		___CurrentLevelUpText_15 = value;
		Il2CppCodeGenWriteBarrier(&___CurrentLevelUpText_15, value);
	}

	inline static int32_t get_offset_of_LevelUp_16() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___LevelUp_16)); }
	inline bool get_LevelUp_16() const { return ___LevelUp_16; }
	inline bool* get_address_of_LevelUp_16() { return &___LevelUp_16; }
	inline void set_LevelUp_16(bool value)
	{
		___LevelUp_16 = value;
	}

	inline static int32_t get_offset_of_LevelUpRumble_17() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___LevelUpRumble_17)); }
	inline int32_t get_LevelUpRumble_17() const { return ___LevelUpRumble_17; }
	inline int32_t* get_address_of_LevelUpRumble_17() { return &___LevelUpRumble_17; }
	inline void set_LevelUpRumble_17(int32_t value)
	{
		___LevelUpRumble_17 = value;
	}

	inline static int32_t get_offset_of_MaxSpeedChange_18() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___MaxSpeedChange_18)); }
	inline float get_MaxSpeedChange_18() const { return ___MaxSpeedChange_18; }
	inline float* get_address_of_MaxSpeedChange_18() { return &___MaxSpeedChange_18; }
	inline void set_MaxSpeedChange_18(float value)
	{
		___MaxSpeedChange_18 = value;
	}

	inline static int32_t get_offset_of_PlatformWidthChange_19() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___PlatformWidthChange_19)); }
	inline float get_PlatformWidthChange_19() const { return ___PlatformWidthChange_19; }
	inline float* get_address_of_PlatformWidthChange_19() { return &___PlatformWidthChange_19; }
	inline void set_PlatformWidthChange_19(float value)
	{
		___PlatformWidthChange_19 = value;
	}

	inline static int32_t get_offset_of_PlatformLengthChange_20() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___PlatformLengthChange_20)); }
	inline float get_PlatformLengthChange_20() const { return ___PlatformLengthChange_20; }
	inline float* get_address_of_PlatformLengthChange_20() { return &___PlatformLengthChange_20; }
	inline void set_PlatformLengthChange_20(float value)
	{
		___PlatformLengthChange_20 = value;
	}

	inline static int32_t get_offset_of_PlatformHeightChange_21() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___PlatformHeightChange_21)); }
	inline float get_PlatformHeightChange_21() const { return ___PlatformHeightChange_21; }
	inline float* get_address_of_PlatformHeightChange_21() { return &___PlatformHeightChange_21; }
	inline void set_PlatformHeightChange_21(float value)
	{
		___PlatformHeightChange_21 = value;
	}

	inline static int32_t get_offset_of_PlatformGapChange_22() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___PlatformGapChange_22)); }
	inline float get_PlatformGapChange_22() const { return ___PlatformGapChange_22; }
	inline float* get_address_of_PlatformGapChange_22() { return &___PlatformGapChange_22; }
	inline void set_PlatformGapChange_22(float value)
	{
		___PlatformGapChange_22 = value;
	}

	inline static int32_t get_offset_of_PlatformRotateChange_23() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___PlatformRotateChange_23)); }
	inline float get_PlatformRotateChange_23() const { return ___PlatformRotateChange_23; }
	inline float* get_address_of_PlatformRotateChange_23() { return &___PlatformRotateChange_23; }
	inline void set_PlatformRotateChange_23(float value)
	{
		___PlatformRotateChange_23 = value;
	}

	inline static int32_t get_offset_of_PlatformShiftChange_24() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___PlatformShiftChange_24)); }
	inline float get_PlatformShiftChange_24() const { return ___PlatformShiftChange_24; }
	inline float* get_address_of_PlatformShiftChange_24() { return &___PlatformShiftChange_24; }
	inline void set_PlatformShiftChange_24(float value)
	{
		___PlatformShiftChange_24 = value;
	}

	inline static int32_t get_offset_of_ObstacleRateChange_25() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___ObstacleRateChange_25)); }
	inline float get_ObstacleRateChange_25() const { return ___ObstacleRateChange_25; }
	inline float* get_address_of_ObstacleRateChange_25() { return &___ObstacleRateChange_25; }
	inline void set_ObstacleRateChange_25(float value)
	{
		___ObstacleRateChange_25 = value;
	}

	inline static int32_t get_offset_of_GemRateChange_26() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___GemRateChange_26)); }
	inline float get_GemRateChange_26() const { return ___GemRateChange_26; }
	inline float* get_address_of_GemRateChange_26() { return &___GemRateChange_26; }
	inline void set_GemRateChange_26(float value)
	{
		___GemRateChange_26 = value;
	}

	inline static int32_t get_offset_of_LevelUpPosX_27() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___LevelUpPosX_27)); }
	inline float get_LevelUpPosX_27() const { return ___LevelUpPosX_27; }
	inline float* get_address_of_LevelUpPosX_27() { return &___LevelUpPosX_27; }
	inline void set_LevelUpPosX_27(float value)
	{
		___LevelUpPosX_27 = value;
	}

	inline static int32_t get_offset_of_TotalDistance_28() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___TotalDistance_28)); }
	inline float get_TotalDistance_28() const { return ___TotalDistance_28; }
	inline float* get_address_of_TotalDistance_28() { return &___TotalDistance_28; }
	inline void set_TotalDistance_28(float value)
	{
		___TotalDistance_28 = value;
	}

	inline static int32_t get_offset_of_LastLevelDistance_29() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___LastLevelDistance_29)); }
	inline float get_LastLevelDistance_29() const { return ___LastLevelDistance_29; }
	inline float* get_address_of_LastLevelDistance_29() { return &___LastLevelDistance_29; }
	inline void set_LastLevelDistance_29(float value)
	{
		___LastLevelDistance_29 = value;
	}

	inline static int32_t get_offset_of_TotalGems_30() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___TotalGems_30)); }
	inline float get_TotalGems_30() const { return ___TotalGems_30; }
	inline float* get_address_of_TotalGems_30() { return &___TotalGems_30; }
	inline void set_TotalGems_30(float value)
	{
		___TotalGems_30 = value;
	}

	inline static int32_t get_offset_of_showScoreOnScreen_31() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___showScoreOnScreen_31)); }
	inline bool get_showScoreOnScreen_31() const { return ___showScoreOnScreen_31; }
	inline bool* get_address_of_showScoreOnScreen_31() { return &___showScoreOnScreen_31; }
	inline void set_showScoreOnScreen_31(bool value)
	{
		___showScoreOnScreen_31 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

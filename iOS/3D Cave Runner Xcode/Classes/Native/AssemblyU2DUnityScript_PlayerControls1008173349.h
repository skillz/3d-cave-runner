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
// GameController
struct GameController_t3607102586;
// PlatformCreator
struct PlatformCreator_t1903924313;
// UnityEngine.Transform
struct Transform_t3275118058;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.GUISkin
struct GUISkin_t1436893342;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerControls
struct  PlayerControls_t1008173349  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject PlayerControls::PlatformCreator
	GameObject_t1756533147 * ___PlatformCreator_2;
	// UnityEngine.GameObject PlayerControls::GameController
	GameObject_t1756533147 * ___GameController_3;
	// GameController PlayerControls::gController
	GameController_t3607102586 * ___gController_4;
	// PlatformCreator PlayerControls::pCreator
	PlatformCreator_t1903924313 * ___pCreator_5;
	// System.Single PlayerControls::Speed
	float ___Speed_6;
	// System.Single PlayerControls::MaxSpeed
	float ___MaxSpeed_7;
	// System.Single PlayerControls::Acceleration
	float ___Acceleration_8;
	// UnityEngine.Transform PlayerControls::SpeedEffect
	Transform_t3275118058 * ___SpeedEffect_9;
	// System.Single PlayerControls::JumpPower
	float ___JumpPower_10;
	// System.Single PlayerControls::TurningSpeed
	float ___TurningSpeed_11;
	// System.Single PlayerControls::TurnDamping
	float ___TurnDamping_12;
	// System.String PlayerControls::HitAnimation
	String_t* ___HitAnimation_13;
	// System.Single PlayerControls::HitAnimationTime
	float ___HitAnimationTime_14;
	// System.Single PlayerControls::MovementLimits
	float ___MovementLimits_15;
	// UnityEngine.Transform PlayerControls::PuffEffect
	Transform_t3275118058 * ___PuffEffect_16;
	// System.Object PlayerControls::PuffEffectCopy
	Il2CppObject * ___PuffEffectCopy_17;
	// UnityEngine.Transform PlayerControls::TrailEffect
	Transform_t3275118058 * ___TrailEffect_18;
	// System.Object PlayerControls::TrailEffectCopy
	Il2CppObject * ___TrailEffectCopy_19;
	// UnityEngine.Vector3 PlayerControls::InitPos
	Vector3_t2243707580  ___InitPos_20;
	// UnityEngine.Vector3 PlayerControls::PlayerPos
	Vector3_t2243707580  ___PlayerPos_21;
	// System.Boolean PlayerControls::FellOff
	bool ___FellOff_22;
	// System.Single PlayerControls::FellOffTime
	float ___FellOffTime_23;
	// System.Int32 PlayerControls::JumpState
	int32_t ___JumpState_24;
	// UnityEngine.Transform PlayerControls::CustomCursor
	Transform_t3275118058 * ___CustomCursor_25;
	// UnityEngine.AudioClip PlayerControls::JumpSound
	AudioClip_t1932558630 * ___JumpSound_26;
	// UnityEngine.AudioClip PlayerControls::FallSound
	AudioClip_t1932558630 * ___FallSound_27;
	// UnityEngine.AudioClip PlayerControls::StepSound
	AudioClip_t1932558630 * ___StepSound_28;
	// UnityEngine.AudioClip PlayerControls::CrashSound
	AudioClip_t1932558630 * ___CrashSound_29;
	// System.Single PlayerControls::CameraFollowSpeed
	float ___CameraFollowSpeed_30;
	// System.Single PlayerControls::JumpChange
	float ___JumpChange_31;
	// System.Single PlayerControls::JumpChangeTime
	float ___JumpChangeTime_32;
	// UnityEngine.Quaternion PlayerControls::calibrationQuaternion
	Quaternion_t4030073918  ___calibrationQuaternion_33;
	// UnityEngine.Vector3 PlayerControls::currentAcc
	Vector3_t2243707580  ___currentAcc_34;
	// System.Single PlayerControls::accSpeed
	float ___accSpeed_35;
	// UnityEngine.GameObject PlayerControls::lastTouchedPlatform
	GameObject_t1756533147 * ___lastTouchedPlatform_36;
	// System.Boolean PlayerControls::playedFallSound
	bool ___playedFallSound_37;
	// System.Boolean PlayerControls::showAdScreen
	bool ___showAdScreen_38;
	// System.Single PlayerControls::originalWidth
	float ___originalWidth_39;
	// System.Single PlayerControls::originalHeight
	float ___originalHeight_40;
	// UnityEngine.GUISkin PlayerControls::GUIskin
	GUISkin_t1436893342 * ___GUIskin_41;
	// UnityEngine.Texture2D PlayerControls::image
	Texture2D_t3542995729 * ___image_42;
	// System.String PlayerControls::adImageURL
	String_t* ___adImageURL_43;
	// System.String PlayerControls::adWebServiceURL
	String_t* ___adWebServiceURL_44;
	// System.Boolean PlayerControls::isDead
	bool ___isDead_45;
	// System.Boolean PlayerControls::useImageIntoTexture
	bool ___useImageIntoTexture_46;
	// UnityEngine.Texture2D PlayerControls::adImage
	Texture2D_t3542995729 * ___adImage_47;
	// System.String PlayerControls::imgUrl
	String_t* ___imgUrl_48;

public:
	inline static int32_t get_offset_of_PlatformCreator_2() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___PlatformCreator_2)); }
	inline GameObject_t1756533147 * get_PlatformCreator_2() const { return ___PlatformCreator_2; }
	inline GameObject_t1756533147 ** get_address_of_PlatformCreator_2() { return &___PlatformCreator_2; }
	inline void set_PlatformCreator_2(GameObject_t1756533147 * value)
	{
		___PlatformCreator_2 = value;
		Il2CppCodeGenWriteBarrier(&___PlatformCreator_2, value);
	}

	inline static int32_t get_offset_of_GameController_3() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___GameController_3)); }
	inline GameObject_t1756533147 * get_GameController_3() const { return ___GameController_3; }
	inline GameObject_t1756533147 ** get_address_of_GameController_3() { return &___GameController_3; }
	inline void set_GameController_3(GameObject_t1756533147 * value)
	{
		___GameController_3 = value;
		Il2CppCodeGenWriteBarrier(&___GameController_3, value);
	}

	inline static int32_t get_offset_of_gController_4() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___gController_4)); }
	inline GameController_t3607102586 * get_gController_4() const { return ___gController_4; }
	inline GameController_t3607102586 ** get_address_of_gController_4() { return &___gController_4; }
	inline void set_gController_4(GameController_t3607102586 * value)
	{
		___gController_4 = value;
		Il2CppCodeGenWriteBarrier(&___gController_4, value);
	}

	inline static int32_t get_offset_of_pCreator_5() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___pCreator_5)); }
	inline PlatformCreator_t1903924313 * get_pCreator_5() const { return ___pCreator_5; }
	inline PlatformCreator_t1903924313 ** get_address_of_pCreator_5() { return &___pCreator_5; }
	inline void set_pCreator_5(PlatformCreator_t1903924313 * value)
	{
		___pCreator_5 = value;
		Il2CppCodeGenWriteBarrier(&___pCreator_5, value);
	}

	inline static int32_t get_offset_of_Speed_6() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___Speed_6)); }
	inline float get_Speed_6() const { return ___Speed_6; }
	inline float* get_address_of_Speed_6() { return &___Speed_6; }
	inline void set_Speed_6(float value)
	{
		___Speed_6 = value;
	}

	inline static int32_t get_offset_of_MaxSpeed_7() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___MaxSpeed_7)); }
	inline float get_MaxSpeed_7() const { return ___MaxSpeed_7; }
	inline float* get_address_of_MaxSpeed_7() { return &___MaxSpeed_7; }
	inline void set_MaxSpeed_7(float value)
	{
		___MaxSpeed_7 = value;
	}

	inline static int32_t get_offset_of_Acceleration_8() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___Acceleration_8)); }
	inline float get_Acceleration_8() const { return ___Acceleration_8; }
	inline float* get_address_of_Acceleration_8() { return &___Acceleration_8; }
	inline void set_Acceleration_8(float value)
	{
		___Acceleration_8 = value;
	}

	inline static int32_t get_offset_of_SpeedEffect_9() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___SpeedEffect_9)); }
	inline Transform_t3275118058 * get_SpeedEffect_9() const { return ___SpeedEffect_9; }
	inline Transform_t3275118058 ** get_address_of_SpeedEffect_9() { return &___SpeedEffect_9; }
	inline void set_SpeedEffect_9(Transform_t3275118058 * value)
	{
		___SpeedEffect_9 = value;
		Il2CppCodeGenWriteBarrier(&___SpeedEffect_9, value);
	}

	inline static int32_t get_offset_of_JumpPower_10() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___JumpPower_10)); }
	inline float get_JumpPower_10() const { return ___JumpPower_10; }
	inline float* get_address_of_JumpPower_10() { return &___JumpPower_10; }
	inline void set_JumpPower_10(float value)
	{
		___JumpPower_10 = value;
	}

	inline static int32_t get_offset_of_TurningSpeed_11() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___TurningSpeed_11)); }
	inline float get_TurningSpeed_11() const { return ___TurningSpeed_11; }
	inline float* get_address_of_TurningSpeed_11() { return &___TurningSpeed_11; }
	inline void set_TurningSpeed_11(float value)
	{
		___TurningSpeed_11 = value;
	}

	inline static int32_t get_offset_of_TurnDamping_12() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___TurnDamping_12)); }
	inline float get_TurnDamping_12() const { return ___TurnDamping_12; }
	inline float* get_address_of_TurnDamping_12() { return &___TurnDamping_12; }
	inline void set_TurnDamping_12(float value)
	{
		___TurnDamping_12 = value;
	}

	inline static int32_t get_offset_of_HitAnimation_13() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___HitAnimation_13)); }
	inline String_t* get_HitAnimation_13() const { return ___HitAnimation_13; }
	inline String_t** get_address_of_HitAnimation_13() { return &___HitAnimation_13; }
	inline void set_HitAnimation_13(String_t* value)
	{
		___HitAnimation_13 = value;
		Il2CppCodeGenWriteBarrier(&___HitAnimation_13, value);
	}

	inline static int32_t get_offset_of_HitAnimationTime_14() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___HitAnimationTime_14)); }
	inline float get_HitAnimationTime_14() const { return ___HitAnimationTime_14; }
	inline float* get_address_of_HitAnimationTime_14() { return &___HitAnimationTime_14; }
	inline void set_HitAnimationTime_14(float value)
	{
		___HitAnimationTime_14 = value;
	}

	inline static int32_t get_offset_of_MovementLimits_15() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___MovementLimits_15)); }
	inline float get_MovementLimits_15() const { return ___MovementLimits_15; }
	inline float* get_address_of_MovementLimits_15() { return &___MovementLimits_15; }
	inline void set_MovementLimits_15(float value)
	{
		___MovementLimits_15 = value;
	}

	inline static int32_t get_offset_of_PuffEffect_16() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___PuffEffect_16)); }
	inline Transform_t3275118058 * get_PuffEffect_16() const { return ___PuffEffect_16; }
	inline Transform_t3275118058 ** get_address_of_PuffEffect_16() { return &___PuffEffect_16; }
	inline void set_PuffEffect_16(Transform_t3275118058 * value)
	{
		___PuffEffect_16 = value;
		Il2CppCodeGenWriteBarrier(&___PuffEffect_16, value);
	}

	inline static int32_t get_offset_of_PuffEffectCopy_17() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___PuffEffectCopy_17)); }
	inline Il2CppObject * get_PuffEffectCopy_17() const { return ___PuffEffectCopy_17; }
	inline Il2CppObject ** get_address_of_PuffEffectCopy_17() { return &___PuffEffectCopy_17; }
	inline void set_PuffEffectCopy_17(Il2CppObject * value)
	{
		___PuffEffectCopy_17 = value;
		Il2CppCodeGenWriteBarrier(&___PuffEffectCopy_17, value);
	}

	inline static int32_t get_offset_of_TrailEffect_18() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___TrailEffect_18)); }
	inline Transform_t3275118058 * get_TrailEffect_18() const { return ___TrailEffect_18; }
	inline Transform_t3275118058 ** get_address_of_TrailEffect_18() { return &___TrailEffect_18; }
	inline void set_TrailEffect_18(Transform_t3275118058 * value)
	{
		___TrailEffect_18 = value;
		Il2CppCodeGenWriteBarrier(&___TrailEffect_18, value);
	}

	inline static int32_t get_offset_of_TrailEffectCopy_19() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___TrailEffectCopy_19)); }
	inline Il2CppObject * get_TrailEffectCopy_19() const { return ___TrailEffectCopy_19; }
	inline Il2CppObject ** get_address_of_TrailEffectCopy_19() { return &___TrailEffectCopy_19; }
	inline void set_TrailEffectCopy_19(Il2CppObject * value)
	{
		___TrailEffectCopy_19 = value;
		Il2CppCodeGenWriteBarrier(&___TrailEffectCopy_19, value);
	}

	inline static int32_t get_offset_of_InitPos_20() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___InitPos_20)); }
	inline Vector3_t2243707580  get_InitPos_20() const { return ___InitPos_20; }
	inline Vector3_t2243707580 * get_address_of_InitPos_20() { return &___InitPos_20; }
	inline void set_InitPos_20(Vector3_t2243707580  value)
	{
		___InitPos_20 = value;
	}

	inline static int32_t get_offset_of_PlayerPos_21() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___PlayerPos_21)); }
	inline Vector3_t2243707580  get_PlayerPos_21() const { return ___PlayerPos_21; }
	inline Vector3_t2243707580 * get_address_of_PlayerPos_21() { return &___PlayerPos_21; }
	inline void set_PlayerPos_21(Vector3_t2243707580  value)
	{
		___PlayerPos_21 = value;
	}

	inline static int32_t get_offset_of_FellOff_22() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___FellOff_22)); }
	inline bool get_FellOff_22() const { return ___FellOff_22; }
	inline bool* get_address_of_FellOff_22() { return &___FellOff_22; }
	inline void set_FellOff_22(bool value)
	{
		___FellOff_22 = value;
	}

	inline static int32_t get_offset_of_FellOffTime_23() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___FellOffTime_23)); }
	inline float get_FellOffTime_23() const { return ___FellOffTime_23; }
	inline float* get_address_of_FellOffTime_23() { return &___FellOffTime_23; }
	inline void set_FellOffTime_23(float value)
	{
		___FellOffTime_23 = value;
	}

	inline static int32_t get_offset_of_JumpState_24() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___JumpState_24)); }
	inline int32_t get_JumpState_24() const { return ___JumpState_24; }
	inline int32_t* get_address_of_JumpState_24() { return &___JumpState_24; }
	inline void set_JumpState_24(int32_t value)
	{
		___JumpState_24 = value;
	}

	inline static int32_t get_offset_of_CustomCursor_25() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___CustomCursor_25)); }
	inline Transform_t3275118058 * get_CustomCursor_25() const { return ___CustomCursor_25; }
	inline Transform_t3275118058 ** get_address_of_CustomCursor_25() { return &___CustomCursor_25; }
	inline void set_CustomCursor_25(Transform_t3275118058 * value)
	{
		___CustomCursor_25 = value;
		Il2CppCodeGenWriteBarrier(&___CustomCursor_25, value);
	}

	inline static int32_t get_offset_of_JumpSound_26() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___JumpSound_26)); }
	inline AudioClip_t1932558630 * get_JumpSound_26() const { return ___JumpSound_26; }
	inline AudioClip_t1932558630 ** get_address_of_JumpSound_26() { return &___JumpSound_26; }
	inline void set_JumpSound_26(AudioClip_t1932558630 * value)
	{
		___JumpSound_26 = value;
		Il2CppCodeGenWriteBarrier(&___JumpSound_26, value);
	}

	inline static int32_t get_offset_of_FallSound_27() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___FallSound_27)); }
	inline AudioClip_t1932558630 * get_FallSound_27() const { return ___FallSound_27; }
	inline AudioClip_t1932558630 ** get_address_of_FallSound_27() { return &___FallSound_27; }
	inline void set_FallSound_27(AudioClip_t1932558630 * value)
	{
		___FallSound_27 = value;
		Il2CppCodeGenWriteBarrier(&___FallSound_27, value);
	}

	inline static int32_t get_offset_of_StepSound_28() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___StepSound_28)); }
	inline AudioClip_t1932558630 * get_StepSound_28() const { return ___StepSound_28; }
	inline AudioClip_t1932558630 ** get_address_of_StepSound_28() { return &___StepSound_28; }
	inline void set_StepSound_28(AudioClip_t1932558630 * value)
	{
		___StepSound_28 = value;
		Il2CppCodeGenWriteBarrier(&___StepSound_28, value);
	}

	inline static int32_t get_offset_of_CrashSound_29() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___CrashSound_29)); }
	inline AudioClip_t1932558630 * get_CrashSound_29() const { return ___CrashSound_29; }
	inline AudioClip_t1932558630 ** get_address_of_CrashSound_29() { return &___CrashSound_29; }
	inline void set_CrashSound_29(AudioClip_t1932558630 * value)
	{
		___CrashSound_29 = value;
		Il2CppCodeGenWriteBarrier(&___CrashSound_29, value);
	}

	inline static int32_t get_offset_of_CameraFollowSpeed_30() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___CameraFollowSpeed_30)); }
	inline float get_CameraFollowSpeed_30() const { return ___CameraFollowSpeed_30; }
	inline float* get_address_of_CameraFollowSpeed_30() { return &___CameraFollowSpeed_30; }
	inline void set_CameraFollowSpeed_30(float value)
	{
		___CameraFollowSpeed_30 = value;
	}

	inline static int32_t get_offset_of_JumpChange_31() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___JumpChange_31)); }
	inline float get_JumpChange_31() const { return ___JumpChange_31; }
	inline float* get_address_of_JumpChange_31() { return &___JumpChange_31; }
	inline void set_JumpChange_31(float value)
	{
		___JumpChange_31 = value;
	}

	inline static int32_t get_offset_of_JumpChangeTime_32() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___JumpChangeTime_32)); }
	inline float get_JumpChangeTime_32() const { return ___JumpChangeTime_32; }
	inline float* get_address_of_JumpChangeTime_32() { return &___JumpChangeTime_32; }
	inline void set_JumpChangeTime_32(float value)
	{
		___JumpChangeTime_32 = value;
	}

	inline static int32_t get_offset_of_calibrationQuaternion_33() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___calibrationQuaternion_33)); }
	inline Quaternion_t4030073918  get_calibrationQuaternion_33() const { return ___calibrationQuaternion_33; }
	inline Quaternion_t4030073918 * get_address_of_calibrationQuaternion_33() { return &___calibrationQuaternion_33; }
	inline void set_calibrationQuaternion_33(Quaternion_t4030073918  value)
	{
		___calibrationQuaternion_33 = value;
	}

	inline static int32_t get_offset_of_currentAcc_34() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___currentAcc_34)); }
	inline Vector3_t2243707580  get_currentAcc_34() const { return ___currentAcc_34; }
	inline Vector3_t2243707580 * get_address_of_currentAcc_34() { return &___currentAcc_34; }
	inline void set_currentAcc_34(Vector3_t2243707580  value)
	{
		___currentAcc_34 = value;
	}

	inline static int32_t get_offset_of_accSpeed_35() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___accSpeed_35)); }
	inline float get_accSpeed_35() const { return ___accSpeed_35; }
	inline float* get_address_of_accSpeed_35() { return &___accSpeed_35; }
	inline void set_accSpeed_35(float value)
	{
		___accSpeed_35 = value;
	}

	inline static int32_t get_offset_of_lastTouchedPlatform_36() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___lastTouchedPlatform_36)); }
	inline GameObject_t1756533147 * get_lastTouchedPlatform_36() const { return ___lastTouchedPlatform_36; }
	inline GameObject_t1756533147 ** get_address_of_lastTouchedPlatform_36() { return &___lastTouchedPlatform_36; }
	inline void set_lastTouchedPlatform_36(GameObject_t1756533147 * value)
	{
		___lastTouchedPlatform_36 = value;
		Il2CppCodeGenWriteBarrier(&___lastTouchedPlatform_36, value);
	}

	inline static int32_t get_offset_of_playedFallSound_37() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___playedFallSound_37)); }
	inline bool get_playedFallSound_37() const { return ___playedFallSound_37; }
	inline bool* get_address_of_playedFallSound_37() { return &___playedFallSound_37; }
	inline void set_playedFallSound_37(bool value)
	{
		___playedFallSound_37 = value;
	}

	inline static int32_t get_offset_of_showAdScreen_38() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___showAdScreen_38)); }
	inline bool get_showAdScreen_38() const { return ___showAdScreen_38; }
	inline bool* get_address_of_showAdScreen_38() { return &___showAdScreen_38; }
	inline void set_showAdScreen_38(bool value)
	{
		___showAdScreen_38 = value;
	}

	inline static int32_t get_offset_of_originalWidth_39() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___originalWidth_39)); }
	inline float get_originalWidth_39() const { return ___originalWidth_39; }
	inline float* get_address_of_originalWidth_39() { return &___originalWidth_39; }
	inline void set_originalWidth_39(float value)
	{
		___originalWidth_39 = value;
	}

	inline static int32_t get_offset_of_originalHeight_40() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___originalHeight_40)); }
	inline float get_originalHeight_40() const { return ___originalHeight_40; }
	inline float* get_address_of_originalHeight_40() { return &___originalHeight_40; }
	inline void set_originalHeight_40(float value)
	{
		___originalHeight_40 = value;
	}

	inline static int32_t get_offset_of_GUIskin_41() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___GUIskin_41)); }
	inline GUISkin_t1436893342 * get_GUIskin_41() const { return ___GUIskin_41; }
	inline GUISkin_t1436893342 ** get_address_of_GUIskin_41() { return &___GUIskin_41; }
	inline void set_GUIskin_41(GUISkin_t1436893342 * value)
	{
		___GUIskin_41 = value;
		Il2CppCodeGenWriteBarrier(&___GUIskin_41, value);
	}

	inline static int32_t get_offset_of_image_42() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___image_42)); }
	inline Texture2D_t3542995729 * get_image_42() const { return ___image_42; }
	inline Texture2D_t3542995729 ** get_address_of_image_42() { return &___image_42; }
	inline void set_image_42(Texture2D_t3542995729 * value)
	{
		___image_42 = value;
		Il2CppCodeGenWriteBarrier(&___image_42, value);
	}

	inline static int32_t get_offset_of_adImageURL_43() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___adImageURL_43)); }
	inline String_t* get_adImageURL_43() const { return ___adImageURL_43; }
	inline String_t** get_address_of_adImageURL_43() { return &___adImageURL_43; }
	inline void set_adImageURL_43(String_t* value)
	{
		___adImageURL_43 = value;
		Il2CppCodeGenWriteBarrier(&___adImageURL_43, value);
	}

	inline static int32_t get_offset_of_adWebServiceURL_44() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___adWebServiceURL_44)); }
	inline String_t* get_adWebServiceURL_44() const { return ___adWebServiceURL_44; }
	inline String_t** get_address_of_adWebServiceURL_44() { return &___adWebServiceURL_44; }
	inline void set_adWebServiceURL_44(String_t* value)
	{
		___adWebServiceURL_44 = value;
		Il2CppCodeGenWriteBarrier(&___adWebServiceURL_44, value);
	}

	inline static int32_t get_offset_of_isDead_45() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___isDead_45)); }
	inline bool get_isDead_45() const { return ___isDead_45; }
	inline bool* get_address_of_isDead_45() { return &___isDead_45; }
	inline void set_isDead_45(bool value)
	{
		___isDead_45 = value;
	}

	inline static int32_t get_offset_of_useImageIntoTexture_46() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___useImageIntoTexture_46)); }
	inline bool get_useImageIntoTexture_46() const { return ___useImageIntoTexture_46; }
	inline bool* get_address_of_useImageIntoTexture_46() { return &___useImageIntoTexture_46; }
	inline void set_useImageIntoTexture_46(bool value)
	{
		___useImageIntoTexture_46 = value;
	}

	inline static int32_t get_offset_of_adImage_47() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___adImage_47)); }
	inline Texture2D_t3542995729 * get_adImage_47() const { return ___adImage_47; }
	inline Texture2D_t3542995729 ** get_address_of_adImage_47() { return &___adImage_47; }
	inline void set_adImage_47(Texture2D_t3542995729 * value)
	{
		___adImage_47 = value;
		Il2CppCodeGenWriteBarrier(&___adImage_47, value);
	}

	inline static int32_t get_offset_of_imgUrl_48() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___imgUrl_48)); }
	inline String_t* get_imgUrl_48() const { return ___imgUrl_48; }
	inline String_t** get_address_of_imgUrl_48() { return &___imgUrl_48; }
	inline void set_imgUrl_48(String_t* value)
	{
		___imgUrl_48 = value;
		Il2CppCodeGenWriteBarrier(&___imgUrl_48, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

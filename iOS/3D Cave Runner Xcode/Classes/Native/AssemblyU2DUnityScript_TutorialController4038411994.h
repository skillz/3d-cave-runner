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
#include "UnityEngine_UnityEngine_Rect3681755626.h"

// UnityEngine.GUISkin
struct GUISkin_t1436893342;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;
// PlayerControls
struct PlayerControls_t1008173349;
// PlatformCreator
struct PlatformCreator_t1903924313;
// GameController
struct GameController_t3607102586;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityScript.Lang.Array
struct Array_t1396575355;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TutorialController
struct  TutorialController_t4038411994  : public MonoBehaviour_t1158329972
{
public:
	// System.Single TutorialController::originalWidth
	float ___originalWidth_2;
	// System.Single TutorialController::originalHeight
	float ___originalHeight_3;
	// UnityEngine.Vector3 TutorialController::scale
	Vector3_t2243707580  ___scale_4;
	// System.Int32 TutorialController::ButtonHeight
	int32_t ___ButtonHeight_5;
	// System.Int32 TutorialController::ButtonWidth
	int32_t ___ButtonWidth_6;
	// System.Int32 TutorialController::boxWidth
	int32_t ___boxWidth_7;
	// System.Int32 TutorialController::boxHeight
	int32_t ___boxHeight_8;
	// System.Int32 TutorialController::smallBoxHeight
	int32_t ___smallBoxHeight_9;
	// System.Int32 TutorialController::smallBoxWidth
	int32_t ___smallBoxWidth_10;
	// UnityEngine.Rect TutorialController::bigTextRect
	Rect_t3681755626  ___bigTextRect_11;
	// UnityEngine.Rect TutorialController::lowerTextRect
	Rect_t3681755626  ___lowerTextRect_12;
	// UnityEngine.Rect TutorialController::leftButtonRect
	Rect_t3681755626  ___leftButtonRect_13;
	// UnityEngine.Rect TutorialController::rightButtonRect
	Rect_t3681755626  ___rightButtonRect_14;
	// UnityEngine.Rect TutorialController::goButtonRect
	Rect_t3681755626  ___goButtonRect_15;
	// UnityEngine.Rect TutorialController::okButtonRect
	Rect_t3681755626  ___okButtonRect_16;
	// UnityEngine.Rect TutorialController::gemScoreRect
	Rect_t3681755626  ___gemScoreRect_17;
	// UnityEngine.Rect TutorialController::obstacleDescRect
	Rect_t3681755626  ___obstacleDescRect_18;
	// UnityEngine.GUISkin TutorialController::GUIskin
	GUISkin_t1436893342 * ___GUIskin_19;
	// UnityEngine.GUISkin TutorialController::GUISkin2
	GUISkin_t1436893342 * ___GUISkin2_20;
	// System.Single TutorialController::deltaPosX
	float ___deltaPosX_21;
	// System.Int32 TutorialController::obstaclesCount
	int32_t ___obstaclesCount_22;
	// System.Int32 TutorialController::gemsNeeded
	int32_t ___gemsNeeded_23;
	// System.Single TutorialController::playerTutorialSpeed
	float ___playerTutorialSpeed_24;
	// System.String TutorialController::initialTutorialText
	String_t* ___initialTutorialText_25;
	// System.String TutorialController::jumpTutorialText
	String_t* ___jumpTutorialText_26;
	// System.String TutorialController::moveTutorialText
	String_t* ___moveTutorialText_27;
	// System.String TutorialController::obstacleTutorialText
	String_t* ___obstacleTutorialText_28;
	// System.String TutorialController::scoringTutorialText
	String_t* ___scoringTutorialText_29;
	// System.String TutorialController::exitTutorialText
	String_t* ___exitTutorialText_30;
	// System.String TutorialController::finishedTutorialText
	String_t* ___finishedTutorialText_31;
	// System.String[] TutorialController::obstacleInfo
	StringU5BU5D_t1642385972* ___obstacleInfo_32;
	// System.Int32 TutorialController::tutorialState
	int32_t ___tutorialState_33;
	// System.Boolean TutorialController::activateElements
	bool ___activateElements_34;
	// PlayerControls TutorialController::player
	PlayerControls_t1008173349 * ___player_35;
	// PlatformCreator TutorialController::platformCreator
	PlatformCreator_t1903924313 * ___platformCreator_36;
	// GameController TutorialController::gameController
	GameController_t3607102586 * ___gameController_37;
	// UnityEngine.GameObject TutorialController::collector
	GameObject_t1756533147 * ___collector_38;
	// UnityEngine.GameObject[] TutorialController::tunnel
	GameObjectU5BU5D_t3057952154* ___tunnel_39;
	// System.Single TutorialController::originalGemRate
	float ___originalGemRate_40;
	// System.Single TutorialController::originalObstacleRate
	float ___originalObstacleRate_41;
	// System.Single TutorialController::originalGemRateChange
	float ___originalGemRateChange_42;
	// System.Single TutorialController::originalObstacleRateChange
	float ___originalObstacleRateChange_43;
	// System.Single TutorialController::originalPlayerSpeed
	float ___originalPlayerSpeed_44;
	// UnityEngine.Transform TutorialController::obstaclePlatform
	Transform_t3275118058 * ___obstaclePlatform_45;
	// System.Int32 TutorialController::obstacleIndex
	int32_t ___obstacleIndex_46;
	// UnityScript.Lang.Array TutorialController::platformObstacleList
	Array_t1396575355 * ___platformObstacleList_47;
	// System.Int32 TutorialController::deferredIndex
	int32_t ___deferredIndex_48;
	// System.Boolean TutorialController::firstMoveScreenStep
	bool ___firstMoveScreenStep_49;
	// System.Boolean TutorialController::firstObstacleScreenStep
	bool ___firstObstacleScreenStep_50;
	// System.Boolean TutorialController::firstScoreScreenStep
	bool ___firstScoreScreenStep_51;
	// System.Boolean TutorialController::lastFinishScreenStep
	bool ___lastFinishScreenStep_52;
	// UnityEngine.GameObject[] TutorialController::inactivePlatforms
	GameObjectU5BU5D_t3057952154* ___inactivePlatforms_53;

public:
	inline static int32_t get_offset_of_originalWidth_2() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___originalWidth_2)); }
	inline float get_originalWidth_2() const { return ___originalWidth_2; }
	inline float* get_address_of_originalWidth_2() { return &___originalWidth_2; }
	inline void set_originalWidth_2(float value)
	{
		___originalWidth_2 = value;
	}

	inline static int32_t get_offset_of_originalHeight_3() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___originalHeight_3)); }
	inline float get_originalHeight_3() const { return ___originalHeight_3; }
	inline float* get_address_of_originalHeight_3() { return &___originalHeight_3; }
	inline void set_originalHeight_3(float value)
	{
		___originalHeight_3 = value;
	}

	inline static int32_t get_offset_of_scale_4() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___scale_4)); }
	inline Vector3_t2243707580  get_scale_4() const { return ___scale_4; }
	inline Vector3_t2243707580 * get_address_of_scale_4() { return &___scale_4; }
	inline void set_scale_4(Vector3_t2243707580  value)
	{
		___scale_4 = value;
	}

	inline static int32_t get_offset_of_ButtonHeight_5() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___ButtonHeight_5)); }
	inline int32_t get_ButtonHeight_5() const { return ___ButtonHeight_5; }
	inline int32_t* get_address_of_ButtonHeight_5() { return &___ButtonHeight_5; }
	inline void set_ButtonHeight_5(int32_t value)
	{
		___ButtonHeight_5 = value;
	}

	inline static int32_t get_offset_of_ButtonWidth_6() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___ButtonWidth_6)); }
	inline int32_t get_ButtonWidth_6() const { return ___ButtonWidth_6; }
	inline int32_t* get_address_of_ButtonWidth_6() { return &___ButtonWidth_6; }
	inline void set_ButtonWidth_6(int32_t value)
	{
		___ButtonWidth_6 = value;
	}

	inline static int32_t get_offset_of_boxWidth_7() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___boxWidth_7)); }
	inline int32_t get_boxWidth_7() const { return ___boxWidth_7; }
	inline int32_t* get_address_of_boxWidth_7() { return &___boxWidth_7; }
	inline void set_boxWidth_7(int32_t value)
	{
		___boxWidth_7 = value;
	}

	inline static int32_t get_offset_of_boxHeight_8() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___boxHeight_8)); }
	inline int32_t get_boxHeight_8() const { return ___boxHeight_8; }
	inline int32_t* get_address_of_boxHeight_8() { return &___boxHeight_8; }
	inline void set_boxHeight_8(int32_t value)
	{
		___boxHeight_8 = value;
	}

	inline static int32_t get_offset_of_smallBoxHeight_9() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___smallBoxHeight_9)); }
	inline int32_t get_smallBoxHeight_9() const { return ___smallBoxHeight_9; }
	inline int32_t* get_address_of_smallBoxHeight_9() { return &___smallBoxHeight_9; }
	inline void set_smallBoxHeight_9(int32_t value)
	{
		___smallBoxHeight_9 = value;
	}

	inline static int32_t get_offset_of_smallBoxWidth_10() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___smallBoxWidth_10)); }
	inline int32_t get_smallBoxWidth_10() const { return ___smallBoxWidth_10; }
	inline int32_t* get_address_of_smallBoxWidth_10() { return &___smallBoxWidth_10; }
	inline void set_smallBoxWidth_10(int32_t value)
	{
		___smallBoxWidth_10 = value;
	}

	inline static int32_t get_offset_of_bigTextRect_11() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___bigTextRect_11)); }
	inline Rect_t3681755626  get_bigTextRect_11() const { return ___bigTextRect_11; }
	inline Rect_t3681755626 * get_address_of_bigTextRect_11() { return &___bigTextRect_11; }
	inline void set_bigTextRect_11(Rect_t3681755626  value)
	{
		___bigTextRect_11 = value;
	}

	inline static int32_t get_offset_of_lowerTextRect_12() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___lowerTextRect_12)); }
	inline Rect_t3681755626  get_lowerTextRect_12() const { return ___lowerTextRect_12; }
	inline Rect_t3681755626 * get_address_of_lowerTextRect_12() { return &___lowerTextRect_12; }
	inline void set_lowerTextRect_12(Rect_t3681755626  value)
	{
		___lowerTextRect_12 = value;
	}

	inline static int32_t get_offset_of_leftButtonRect_13() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___leftButtonRect_13)); }
	inline Rect_t3681755626  get_leftButtonRect_13() const { return ___leftButtonRect_13; }
	inline Rect_t3681755626 * get_address_of_leftButtonRect_13() { return &___leftButtonRect_13; }
	inline void set_leftButtonRect_13(Rect_t3681755626  value)
	{
		___leftButtonRect_13 = value;
	}

	inline static int32_t get_offset_of_rightButtonRect_14() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___rightButtonRect_14)); }
	inline Rect_t3681755626  get_rightButtonRect_14() const { return ___rightButtonRect_14; }
	inline Rect_t3681755626 * get_address_of_rightButtonRect_14() { return &___rightButtonRect_14; }
	inline void set_rightButtonRect_14(Rect_t3681755626  value)
	{
		___rightButtonRect_14 = value;
	}

	inline static int32_t get_offset_of_goButtonRect_15() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___goButtonRect_15)); }
	inline Rect_t3681755626  get_goButtonRect_15() const { return ___goButtonRect_15; }
	inline Rect_t3681755626 * get_address_of_goButtonRect_15() { return &___goButtonRect_15; }
	inline void set_goButtonRect_15(Rect_t3681755626  value)
	{
		___goButtonRect_15 = value;
	}

	inline static int32_t get_offset_of_okButtonRect_16() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___okButtonRect_16)); }
	inline Rect_t3681755626  get_okButtonRect_16() const { return ___okButtonRect_16; }
	inline Rect_t3681755626 * get_address_of_okButtonRect_16() { return &___okButtonRect_16; }
	inline void set_okButtonRect_16(Rect_t3681755626  value)
	{
		___okButtonRect_16 = value;
	}

	inline static int32_t get_offset_of_gemScoreRect_17() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___gemScoreRect_17)); }
	inline Rect_t3681755626  get_gemScoreRect_17() const { return ___gemScoreRect_17; }
	inline Rect_t3681755626 * get_address_of_gemScoreRect_17() { return &___gemScoreRect_17; }
	inline void set_gemScoreRect_17(Rect_t3681755626  value)
	{
		___gemScoreRect_17 = value;
	}

	inline static int32_t get_offset_of_obstacleDescRect_18() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___obstacleDescRect_18)); }
	inline Rect_t3681755626  get_obstacleDescRect_18() const { return ___obstacleDescRect_18; }
	inline Rect_t3681755626 * get_address_of_obstacleDescRect_18() { return &___obstacleDescRect_18; }
	inline void set_obstacleDescRect_18(Rect_t3681755626  value)
	{
		___obstacleDescRect_18 = value;
	}

	inline static int32_t get_offset_of_GUIskin_19() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___GUIskin_19)); }
	inline GUISkin_t1436893342 * get_GUIskin_19() const { return ___GUIskin_19; }
	inline GUISkin_t1436893342 ** get_address_of_GUIskin_19() { return &___GUIskin_19; }
	inline void set_GUIskin_19(GUISkin_t1436893342 * value)
	{
		___GUIskin_19 = value;
		Il2CppCodeGenWriteBarrier(&___GUIskin_19, value);
	}

	inline static int32_t get_offset_of_GUISkin2_20() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___GUISkin2_20)); }
	inline GUISkin_t1436893342 * get_GUISkin2_20() const { return ___GUISkin2_20; }
	inline GUISkin_t1436893342 ** get_address_of_GUISkin2_20() { return &___GUISkin2_20; }
	inline void set_GUISkin2_20(GUISkin_t1436893342 * value)
	{
		___GUISkin2_20 = value;
		Il2CppCodeGenWriteBarrier(&___GUISkin2_20, value);
	}

	inline static int32_t get_offset_of_deltaPosX_21() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___deltaPosX_21)); }
	inline float get_deltaPosX_21() const { return ___deltaPosX_21; }
	inline float* get_address_of_deltaPosX_21() { return &___deltaPosX_21; }
	inline void set_deltaPosX_21(float value)
	{
		___deltaPosX_21 = value;
	}

	inline static int32_t get_offset_of_obstaclesCount_22() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___obstaclesCount_22)); }
	inline int32_t get_obstaclesCount_22() const { return ___obstaclesCount_22; }
	inline int32_t* get_address_of_obstaclesCount_22() { return &___obstaclesCount_22; }
	inline void set_obstaclesCount_22(int32_t value)
	{
		___obstaclesCount_22 = value;
	}

	inline static int32_t get_offset_of_gemsNeeded_23() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___gemsNeeded_23)); }
	inline int32_t get_gemsNeeded_23() const { return ___gemsNeeded_23; }
	inline int32_t* get_address_of_gemsNeeded_23() { return &___gemsNeeded_23; }
	inline void set_gemsNeeded_23(int32_t value)
	{
		___gemsNeeded_23 = value;
	}

	inline static int32_t get_offset_of_playerTutorialSpeed_24() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___playerTutorialSpeed_24)); }
	inline float get_playerTutorialSpeed_24() const { return ___playerTutorialSpeed_24; }
	inline float* get_address_of_playerTutorialSpeed_24() { return &___playerTutorialSpeed_24; }
	inline void set_playerTutorialSpeed_24(float value)
	{
		___playerTutorialSpeed_24 = value;
	}

	inline static int32_t get_offset_of_initialTutorialText_25() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___initialTutorialText_25)); }
	inline String_t* get_initialTutorialText_25() const { return ___initialTutorialText_25; }
	inline String_t** get_address_of_initialTutorialText_25() { return &___initialTutorialText_25; }
	inline void set_initialTutorialText_25(String_t* value)
	{
		___initialTutorialText_25 = value;
		Il2CppCodeGenWriteBarrier(&___initialTutorialText_25, value);
	}

	inline static int32_t get_offset_of_jumpTutorialText_26() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___jumpTutorialText_26)); }
	inline String_t* get_jumpTutorialText_26() const { return ___jumpTutorialText_26; }
	inline String_t** get_address_of_jumpTutorialText_26() { return &___jumpTutorialText_26; }
	inline void set_jumpTutorialText_26(String_t* value)
	{
		___jumpTutorialText_26 = value;
		Il2CppCodeGenWriteBarrier(&___jumpTutorialText_26, value);
	}

	inline static int32_t get_offset_of_moveTutorialText_27() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___moveTutorialText_27)); }
	inline String_t* get_moveTutorialText_27() const { return ___moveTutorialText_27; }
	inline String_t** get_address_of_moveTutorialText_27() { return &___moveTutorialText_27; }
	inline void set_moveTutorialText_27(String_t* value)
	{
		___moveTutorialText_27 = value;
		Il2CppCodeGenWriteBarrier(&___moveTutorialText_27, value);
	}

	inline static int32_t get_offset_of_obstacleTutorialText_28() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___obstacleTutorialText_28)); }
	inline String_t* get_obstacleTutorialText_28() const { return ___obstacleTutorialText_28; }
	inline String_t** get_address_of_obstacleTutorialText_28() { return &___obstacleTutorialText_28; }
	inline void set_obstacleTutorialText_28(String_t* value)
	{
		___obstacleTutorialText_28 = value;
		Il2CppCodeGenWriteBarrier(&___obstacleTutorialText_28, value);
	}

	inline static int32_t get_offset_of_scoringTutorialText_29() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___scoringTutorialText_29)); }
	inline String_t* get_scoringTutorialText_29() const { return ___scoringTutorialText_29; }
	inline String_t** get_address_of_scoringTutorialText_29() { return &___scoringTutorialText_29; }
	inline void set_scoringTutorialText_29(String_t* value)
	{
		___scoringTutorialText_29 = value;
		Il2CppCodeGenWriteBarrier(&___scoringTutorialText_29, value);
	}

	inline static int32_t get_offset_of_exitTutorialText_30() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___exitTutorialText_30)); }
	inline String_t* get_exitTutorialText_30() const { return ___exitTutorialText_30; }
	inline String_t** get_address_of_exitTutorialText_30() { return &___exitTutorialText_30; }
	inline void set_exitTutorialText_30(String_t* value)
	{
		___exitTutorialText_30 = value;
		Il2CppCodeGenWriteBarrier(&___exitTutorialText_30, value);
	}

	inline static int32_t get_offset_of_finishedTutorialText_31() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___finishedTutorialText_31)); }
	inline String_t* get_finishedTutorialText_31() const { return ___finishedTutorialText_31; }
	inline String_t** get_address_of_finishedTutorialText_31() { return &___finishedTutorialText_31; }
	inline void set_finishedTutorialText_31(String_t* value)
	{
		___finishedTutorialText_31 = value;
		Il2CppCodeGenWriteBarrier(&___finishedTutorialText_31, value);
	}

	inline static int32_t get_offset_of_obstacleInfo_32() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___obstacleInfo_32)); }
	inline StringU5BU5D_t1642385972* get_obstacleInfo_32() const { return ___obstacleInfo_32; }
	inline StringU5BU5D_t1642385972** get_address_of_obstacleInfo_32() { return &___obstacleInfo_32; }
	inline void set_obstacleInfo_32(StringU5BU5D_t1642385972* value)
	{
		___obstacleInfo_32 = value;
		Il2CppCodeGenWriteBarrier(&___obstacleInfo_32, value);
	}

	inline static int32_t get_offset_of_tutorialState_33() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___tutorialState_33)); }
	inline int32_t get_tutorialState_33() const { return ___tutorialState_33; }
	inline int32_t* get_address_of_tutorialState_33() { return &___tutorialState_33; }
	inline void set_tutorialState_33(int32_t value)
	{
		___tutorialState_33 = value;
	}

	inline static int32_t get_offset_of_activateElements_34() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___activateElements_34)); }
	inline bool get_activateElements_34() const { return ___activateElements_34; }
	inline bool* get_address_of_activateElements_34() { return &___activateElements_34; }
	inline void set_activateElements_34(bool value)
	{
		___activateElements_34 = value;
	}

	inline static int32_t get_offset_of_player_35() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___player_35)); }
	inline PlayerControls_t1008173349 * get_player_35() const { return ___player_35; }
	inline PlayerControls_t1008173349 ** get_address_of_player_35() { return &___player_35; }
	inline void set_player_35(PlayerControls_t1008173349 * value)
	{
		___player_35 = value;
		Il2CppCodeGenWriteBarrier(&___player_35, value);
	}

	inline static int32_t get_offset_of_platformCreator_36() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___platformCreator_36)); }
	inline PlatformCreator_t1903924313 * get_platformCreator_36() const { return ___platformCreator_36; }
	inline PlatformCreator_t1903924313 ** get_address_of_platformCreator_36() { return &___platformCreator_36; }
	inline void set_platformCreator_36(PlatformCreator_t1903924313 * value)
	{
		___platformCreator_36 = value;
		Il2CppCodeGenWriteBarrier(&___platformCreator_36, value);
	}

	inline static int32_t get_offset_of_gameController_37() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___gameController_37)); }
	inline GameController_t3607102586 * get_gameController_37() const { return ___gameController_37; }
	inline GameController_t3607102586 ** get_address_of_gameController_37() { return &___gameController_37; }
	inline void set_gameController_37(GameController_t3607102586 * value)
	{
		___gameController_37 = value;
		Il2CppCodeGenWriteBarrier(&___gameController_37, value);
	}

	inline static int32_t get_offset_of_collector_38() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___collector_38)); }
	inline GameObject_t1756533147 * get_collector_38() const { return ___collector_38; }
	inline GameObject_t1756533147 ** get_address_of_collector_38() { return &___collector_38; }
	inline void set_collector_38(GameObject_t1756533147 * value)
	{
		___collector_38 = value;
		Il2CppCodeGenWriteBarrier(&___collector_38, value);
	}

	inline static int32_t get_offset_of_tunnel_39() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___tunnel_39)); }
	inline GameObjectU5BU5D_t3057952154* get_tunnel_39() const { return ___tunnel_39; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_tunnel_39() { return &___tunnel_39; }
	inline void set_tunnel_39(GameObjectU5BU5D_t3057952154* value)
	{
		___tunnel_39 = value;
		Il2CppCodeGenWriteBarrier(&___tunnel_39, value);
	}

	inline static int32_t get_offset_of_originalGemRate_40() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___originalGemRate_40)); }
	inline float get_originalGemRate_40() const { return ___originalGemRate_40; }
	inline float* get_address_of_originalGemRate_40() { return &___originalGemRate_40; }
	inline void set_originalGemRate_40(float value)
	{
		___originalGemRate_40 = value;
	}

	inline static int32_t get_offset_of_originalObstacleRate_41() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___originalObstacleRate_41)); }
	inline float get_originalObstacleRate_41() const { return ___originalObstacleRate_41; }
	inline float* get_address_of_originalObstacleRate_41() { return &___originalObstacleRate_41; }
	inline void set_originalObstacleRate_41(float value)
	{
		___originalObstacleRate_41 = value;
	}

	inline static int32_t get_offset_of_originalGemRateChange_42() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___originalGemRateChange_42)); }
	inline float get_originalGemRateChange_42() const { return ___originalGemRateChange_42; }
	inline float* get_address_of_originalGemRateChange_42() { return &___originalGemRateChange_42; }
	inline void set_originalGemRateChange_42(float value)
	{
		___originalGemRateChange_42 = value;
	}

	inline static int32_t get_offset_of_originalObstacleRateChange_43() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___originalObstacleRateChange_43)); }
	inline float get_originalObstacleRateChange_43() const { return ___originalObstacleRateChange_43; }
	inline float* get_address_of_originalObstacleRateChange_43() { return &___originalObstacleRateChange_43; }
	inline void set_originalObstacleRateChange_43(float value)
	{
		___originalObstacleRateChange_43 = value;
	}

	inline static int32_t get_offset_of_originalPlayerSpeed_44() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___originalPlayerSpeed_44)); }
	inline float get_originalPlayerSpeed_44() const { return ___originalPlayerSpeed_44; }
	inline float* get_address_of_originalPlayerSpeed_44() { return &___originalPlayerSpeed_44; }
	inline void set_originalPlayerSpeed_44(float value)
	{
		___originalPlayerSpeed_44 = value;
	}

	inline static int32_t get_offset_of_obstaclePlatform_45() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___obstaclePlatform_45)); }
	inline Transform_t3275118058 * get_obstaclePlatform_45() const { return ___obstaclePlatform_45; }
	inline Transform_t3275118058 ** get_address_of_obstaclePlatform_45() { return &___obstaclePlatform_45; }
	inline void set_obstaclePlatform_45(Transform_t3275118058 * value)
	{
		___obstaclePlatform_45 = value;
		Il2CppCodeGenWriteBarrier(&___obstaclePlatform_45, value);
	}

	inline static int32_t get_offset_of_obstacleIndex_46() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___obstacleIndex_46)); }
	inline int32_t get_obstacleIndex_46() const { return ___obstacleIndex_46; }
	inline int32_t* get_address_of_obstacleIndex_46() { return &___obstacleIndex_46; }
	inline void set_obstacleIndex_46(int32_t value)
	{
		___obstacleIndex_46 = value;
	}

	inline static int32_t get_offset_of_platformObstacleList_47() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___platformObstacleList_47)); }
	inline Array_t1396575355 * get_platformObstacleList_47() const { return ___platformObstacleList_47; }
	inline Array_t1396575355 ** get_address_of_platformObstacleList_47() { return &___platformObstacleList_47; }
	inline void set_platformObstacleList_47(Array_t1396575355 * value)
	{
		___platformObstacleList_47 = value;
		Il2CppCodeGenWriteBarrier(&___platformObstacleList_47, value);
	}

	inline static int32_t get_offset_of_deferredIndex_48() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___deferredIndex_48)); }
	inline int32_t get_deferredIndex_48() const { return ___deferredIndex_48; }
	inline int32_t* get_address_of_deferredIndex_48() { return &___deferredIndex_48; }
	inline void set_deferredIndex_48(int32_t value)
	{
		___deferredIndex_48 = value;
	}

	inline static int32_t get_offset_of_firstMoveScreenStep_49() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___firstMoveScreenStep_49)); }
	inline bool get_firstMoveScreenStep_49() const { return ___firstMoveScreenStep_49; }
	inline bool* get_address_of_firstMoveScreenStep_49() { return &___firstMoveScreenStep_49; }
	inline void set_firstMoveScreenStep_49(bool value)
	{
		___firstMoveScreenStep_49 = value;
	}

	inline static int32_t get_offset_of_firstObstacleScreenStep_50() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___firstObstacleScreenStep_50)); }
	inline bool get_firstObstacleScreenStep_50() const { return ___firstObstacleScreenStep_50; }
	inline bool* get_address_of_firstObstacleScreenStep_50() { return &___firstObstacleScreenStep_50; }
	inline void set_firstObstacleScreenStep_50(bool value)
	{
		___firstObstacleScreenStep_50 = value;
	}

	inline static int32_t get_offset_of_firstScoreScreenStep_51() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___firstScoreScreenStep_51)); }
	inline bool get_firstScoreScreenStep_51() const { return ___firstScoreScreenStep_51; }
	inline bool* get_address_of_firstScoreScreenStep_51() { return &___firstScoreScreenStep_51; }
	inline void set_firstScoreScreenStep_51(bool value)
	{
		___firstScoreScreenStep_51 = value;
	}

	inline static int32_t get_offset_of_lastFinishScreenStep_52() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___lastFinishScreenStep_52)); }
	inline bool get_lastFinishScreenStep_52() const { return ___lastFinishScreenStep_52; }
	inline bool* get_address_of_lastFinishScreenStep_52() { return &___lastFinishScreenStep_52; }
	inline void set_lastFinishScreenStep_52(bool value)
	{
		___lastFinishScreenStep_52 = value;
	}

	inline static int32_t get_offset_of_inactivePlatforms_53() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___inactivePlatforms_53)); }
	inline GameObjectU5BU5D_t3057952154* get_inactivePlatforms_53() const { return ___inactivePlatforms_53; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_inactivePlatforms_53() { return &___inactivePlatforms_53; }
	inline void set_inactivePlatforms_53(GameObjectU5BU5D_t3057952154* value)
	{
		___inactivePlatforms_53 = value;
		Il2CppCodeGenWriteBarrier(&___inactivePlatforms_53, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

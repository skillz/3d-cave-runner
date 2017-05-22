#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameSceneManager
struct  GameSceneManager_t277739717  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean GameSceneManager::startTimer
	bool ___startTimer_4;
	// System.Single GameSceneManager::timer
	float ___timer_5;

public:
	inline static int32_t get_offset_of_startTimer_4() { return static_cast<int32_t>(offsetof(GameSceneManager_t277739717, ___startTimer_4)); }
	inline bool get_startTimer_4() const { return ___startTimer_4; }
	inline bool* get_address_of_startTimer_4() { return &___startTimer_4; }
	inline void set_startTimer_4(bool value)
	{
		___startTimer_4 = value;
	}

	inline static int32_t get_offset_of_timer_5() { return static_cast<int32_t>(offsetof(GameSceneManager_t277739717, ___timer_5)); }
	inline float get_timer_5() const { return ___timer_5; }
	inline float* get_address_of_timer_5() { return &___timer_5; }
	inline void set_timer_5(float value)
	{
		___timer_5 = value;
	}
};

struct GameSceneManager_t277739717_StaticFields
{
public:
	// System.String GameSceneManager::PREV_SCENE
	String_t* ___PREV_SCENE_2;
	// System.Single GameSceneManager::TIMER_LENGTH
	float ___TIMER_LENGTH_3;

public:
	inline static int32_t get_offset_of_PREV_SCENE_2() { return static_cast<int32_t>(offsetof(GameSceneManager_t277739717_StaticFields, ___PREV_SCENE_2)); }
	inline String_t* get_PREV_SCENE_2() const { return ___PREV_SCENE_2; }
	inline String_t** get_address_of_PREV_SCENE_2() { return &___PREV_SCENE_2; }
	inline void set_PREV_SCENE_2(String_t* value)
	{
		___PREV_SCENE_2 = value;
		Il2CppCodeGenWriteBarrier(&___PREV_SCENE_2, value);
	}

	inline static int32_t get_offset_of_TIMER_LENGTH_3() { return static_cast<int32_t>(offsetof(GameSceneManager_t277739717_StaticFields, ___TIMER_LENGTH_3)); }
	inline float get_TIMER_LENGTH_3() const { return ___TIMER_LENGTH_3; }
	inline float* get_address_of_TIMER_LENGTH_3() { return &___TIMER_LENGTH_3; }
	inline void set_TIMER_LENGTH_3(float value)
	{
		___TIMER_LENGTH_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

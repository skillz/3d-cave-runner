#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// SkillzSDK.SkillzDelegateBase
struct SkillzDelegateBase_t2433258543;
// SkillzSDK.SkillzDelegateTurnBased
struct SkillzDelegateTurnBased_t3217995174;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SkillzSDK.SkillzMessageReceiver
struct  SkillzMessageReceiver_t704596351  : public MonoBehaviour_t1158329972
{
public:
	// SkillzSDK.SkillzDelegateBase SkillzSDK.SkillzMessageReceiver::DelBase
	SkillzDelegateBase_t2433258543 * ___DelBase_2;
	// SkillzSDK.SkillzDelegateTurnBased SkillzSDK.SkillzMessageReceiver::DelTurnBased
	SkillzDelegateTurnBased_t3217995174 * ___DelTurnBased_3;

public:
	inline static int32_t get_offset_of_DelBase_2() { return static_cast<int32_t>(offsetof(SkillzMessageReceiver_t704596351, ___DelBase_2)); }
	inline SkillzDelegateBase_t2433258543 * get_DelBase_2() const { return ___DelBase_2; }
	inline SkillzDelegateBase_t2433258543 ** get_address_of_DelBase_2() { return &___DelBase_2; }
	inline void set_DelBase_2(SkillzDelegateBase_t2433258543 * value)
	{
		___DelBase_2 = value;
		Il2CppCodeGenWriteBarrier(&___DelBase_2, value);
	}

	inline static int32_t get_offset_of_DelTurnBased_3() { return static_cast<int32_t>(offsetof(SkillzMessageReceiver_t704596351, ___DelTurnBased_3)); }
	inline SkillzDelegateTurnBased_t3217995174 * get_DelTurnBased_3() const { return ___DelTurnBased_3; }
	inline SkillzDelegateTurnBased_t3217995174 ** get_address_of_DelTurnBased_3() { return &___DelTurnBased_3; }
	inline void set_DelTurnBased_3(SkillzDelegateTurnBased_t3217995174 * value)
	{
		___DelTurnBased_3 = value;
		Il2CppCodeGenWriteBarrier(&___DelTurnBased_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SkillzSDK.SkillzDelegateBase
struct SkillzDelegateBase_t2433258543;
// SkillzSDK.SkillzDelegateStandard
struct SkillzDelegateStandard_t2914650099;
// SkillzSDK.SkillzDelegateTurnBased
struct SkillzDelegateTurnBased_t3217995174;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

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
	// SkillzSDK.SkillzDelegateStandard SkillzSDK.SkillzMessageReceiver::DelStandard
	SkillzDelegateStandard_t2914650099 * ___DelStandard_3;
	// SkillzSDK.SkillzDelegateTurnBased SkillzSDK.SkillzMessageReceiver::DelTurnBased
	SkillzDelegateTurnBased_t3217995174 * ___DelTurnBased_4;

public:
	inline static int32_t get_offset_of_DelBase_2() { return static_cast<int32_t>(offsetof(SkillzMessageReceiver_t704596351, ___DelBase_2)); }
	inline SkillzDelegateBase_t2433258543 * get_DelBase_2() const { return ___DelBase_2; }
	inline SkillzDelegateBase_t2433258543 ** get_address_of_DelBase_2() { return &___DelBase_2; }
	inline void set_DelBase_2(SkillzDelegateBase_t2433258543 * value)
	{
		___DelBase_2 = value;
		Il2CppCodeGenWriteBarrier(&___DelBase_2, value);
	}

	inline static int32_t get_offset_of_DelStandard_3() { return static_cast<int32_t>(offsetof(SkillzMessageReceiver_t704596351, ___DelStandard_3)); }
	inline SkillzDelegateStandard_t2914650099 * get_DelStandard_3() const { return ___DelStandard_3; }
	inline SkillzDelegateStandard_t2914650099 ** get_address_of_DelStandard_3() { return &___DelStandard_3; }
	inline void set_DelStandard_3(SkillzDelegateStandard_t2914650099 * value)
	{
		___DelStandard_3 = value;
		Il2CppCodeGenWriteBarrier(&___DelStandard_3, value);
	}

	inline static int32_t get_offset_of_DelTurnBased_4() { return static_cast<int32_t>(offsetof(SkillzMessageReceiver_t704596351, ___DelTurnBased_4)); }
	inline SkillzDelegateTurnBased_t3217995174 * get_DelTurnBased_4() const { return ___DelTurnBased_4; }
	inline SkillzDelegateTurnBased_t3217995174 ** get_address_of_DelTurnBased_4() { return &___DelTurnBased_4; }
	inline void set_DelTurnBased_4(SkillzDelegateTurnBased_t3217995174 * value)
	{
		___DelTurnBased_4 = value;
		Il2CppCodeGenWriteBarrier(&___DelTurnBased_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

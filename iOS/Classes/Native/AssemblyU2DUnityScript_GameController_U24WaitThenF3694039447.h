#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Boo_Lang_Boo_Lang_GenericGeneratorEnumerator_1_gen300505933.h"

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// GameController
struct GameController_t3607102586;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController/$WaitThenFinish$73/$
struct  U24_t3694039447  : public GenericGeneratorEnumerator_1_t300505933
{
public:
	// System.Int32 GameController/$WaitThenFinish$73/$::$TotalScore$74
	int32_t ___U24TotalScoreU2474_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GameController/$WaitThenFinish$73/$::$metrics$75
	Dictionary_2_t3943999495 * ___U24metricsU2475_3;
	// GameController GameController/$WaitThenFinish$73/$::$self_$76
	GameController_t3607102586 * ___U24self_U2476_4;

public:
	inline static int32_t get_offset_of_U24TotalScoreU2474_2() { return static_cast<int32_t>(offsetof(U24_t3694039447, ___U24TotalScoreU2474_2)); }
	inline int32_t get_U24TotalScoreU2474_2() const { return ___U24TotalScoreU2474_2; }
	inline int32_t* get_address_of_U24TotalScoreU2474_2() { return &___U24TotalScoreU2474_2; }
	inline void set_U24TotalScoreU2474_2(int32_t value)
	{
		___U24TotalScoreU2474_2 = value;
	}

	inline static int32_t get_offset_of_U24metricsU2475_3() { return static_cast<int32_t>(offsetof(U24_t3694039447, ___U24metricsU2475_3)); }
	inline Dictionary_2_t3943999495 * get_U24metricsU2475_3() const { return ___U24metricsU2475_3; }
	inline Dictionary_2_t3943999495 ** get_address_of_U24metricsU2475_3() { return &___U24metricsU2475_3; }
	inline void set_U24metricsU2475_3(Dictionary_2_t3943999495 * value)
	{
		___U24metricsU2475_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24metricsU2475_3, value);
	}

	inline static int32_t get_offset_of_U24self_U2476_4() { return static_cast<int32_t>(offsetof(U24_t3694039447, ___U24self_U2476_4)); }
	inline GameController_t3607102586 * get_U24self_U2476_4() const { return ___U24self_U2476_4; }
	inline GameController_t3607102586 ** get_address_of_U24self_U2476_4() { return &___U24self_U2476_4; }
	inline void set_U24self_U2476_4(GameController_t3607102586 * value)
	{
		___U24self_U2476_4 = value;
		Il2CppCodeGenWriteBarrier(&___U24self_U2476_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

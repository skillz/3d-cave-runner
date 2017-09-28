#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// UnityEngine.WaitForSeconds
struct WaitForSeconds_t3481400197;
// TutorialController
struct TutorialController_t1763165411;
// System.Void
struct Void_t4064021291;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t326603431;
// ScoreScreen
struct ScoreScreen_t1438327479;
// UnityEngine.Transform[]
struct TransformU5BU5D_t3144966165;
// UnityEngine.Transform
struct Transform_t2932726396;
// UnityEngine.GUISkin
struct GUISkin_t2878378263;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t2750034006;
// PlayerControls
struct PlayerControls_t3288450189;
// PlatformCreator
struct PlatformCreator_t3386403704;
// GameController
struct GameController_t3102368722;
// UnityEngine.GameObject
struct GameObject_t1251625431;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t346896622;
// UnityScript.Lang.Array
struct Array_t2110397784;
// UnityEngine.AudioClip
struct AudioClip_t3179250334;
// UnityEngine.Texture2D
struct Texture2D_t3357108006;
// Collector
struct Collector_t4049649103;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef GENERICGENERATOR_1_T4241642175_H
#define GENERICGENERATOR_1_T4241642175_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boo.Lang.GenericGenerator`1<UnityEngine.WaitForSeconds>
struct  GenericGenerator_1_t4241642175  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICGENERATOR_1_T4241642175_H
#ifndef VALUETYPE_T311507082_H
#define VALUETYPE_T311507082_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t311507082  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t311507082_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t311507082_marshaled_com
{
};
#endif // VALUETYPE_T311507082_H
#ifndef GENERICGENERATORENUMERATOR_1_T2143876637_H
#define GENERICGENERATORENUMERATOR_1_T2143876637_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boo.Lang.GenericGeneratorEnumerator`1<UnityEngine.WaitForSeconds>
struct  GenericGeneratorEnumerator_1_t2143876637  : public RuntimeObject
{
public:
	// T Boo.Lang.GenericGeneratorEnumerator`1::_current
	WaitForSeconds_t3481400197 * ____current_0;
	// System.Int32 Boo.Lang.GenericGeneratorEnumerator`1::_state
	int32_t ____state_1;

public:
	inline static int32_t get_offset_of__current_0() { return static_cast<int32_t>(offsetof(GenericGeneratorEnumerator_1_t2143876637, ____current_0)); }
	inline WaitForSeconds_t3481400197 * get__current_0() const { return ____current_0; }
	inline WaitForSeconds_t3481400197 ** get_address_of__current_0() { return &____current_0; }
	inline void set__current_0(WaitForSeconds_t3481400197 * value)
	{
		____current_0 = value;
		Il2CppCodeGenWriteBarrier((&____current_0), value);
	}

	inline static int32_t get_offset_of__state_1() { return static_cast<int32_t>(offsetof(GenericGeneratorEnumerator_1_t2143876637, ____state_1)); }
	inline int32_t get__state_1() const { return ____state_1; }
	inline int32_t* get_address_of__state_1() { return &____state_1; }
	inline void set__state_1(int32_t value)
	{
		____state_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICGENERATORENUMERATOR_1_T2143876637_H
#ifndef VECTOR2_T3168986486_H
#define VECTOR2_T3168986486_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t3168986486 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t3168986486, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t3168986486, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t3168986486_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t3168986486  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t3168986486  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t3168986486  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t3168986486  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t3168986486  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t3168986486  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t3168986486  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t3168986486  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t3168986486_StaticFields, ___zeroVector_2)); }
	inline Vector2_t3168986486  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t3168986486 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t3168986486  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t3168986486_StaticFields, ___oneVector_3)); }
	inline Vector2_t3168986486  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t3168986486 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t3168986486  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t3168986486_StaticFields, ___upVector_4)); }
	inline Vector2_t3168986486  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t3168986486 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t3168986486  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t3168986486_StaticFields, ___downVector_5)); }
	inline Vector2_t3168986486  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t3168986486 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t3168986486  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t3168986486_StaticFields, ___leftVector_6)); }
	inline Vector2_t3168986486  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t3168986486 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t3168986486  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t3168986486_StaticFields, ___rightVector_7)); }
	inline Vector2_t3168986486  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t3168986486 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t3168986486  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t3168986486_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t3168986486  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t3168986486 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t3168986486  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t3168986486_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t3168986486  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t3168986486 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t3168986486  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T3168986486_H
#ifndef U24_T2763495600_H
#define U24_T2763495600_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TutorialController/$SetDeferred$83/$
struct  U24_t2763495600  : public GenericGeneratorEnumerator_1_t2143876637
{
public:
	// System.Int32 TutorialController/$SetDeferred$83/$::$time$84
	int32_t ___U24timeU2484_2;
	// System.Int32 TutorialController/$SetDeferred$83/$::$index$85
	int32_t ___U24indexU2485_3;
	// TutorialController TutorialController/$SetDeferred$83/$::$self_$86
	TutorialController_t1763165411 * ___U24self_U2486_4;

public:
	inline static int32_t get_offset_of_U24timeU2484_2() { return static_cast<int32_t>(offsetof(U24_t2763495600, ___U24timeU2484_2)); }
	inline int32_t get_U24timeU2484_2() const { return ___U24timeU2484_2; }
	inline int32_t* get_address_of_U24timeU2484_2() { return &___U24timeU2484_2; }
	inline void set_U24timeU2484_2(int32_t value)
	{
		___U24timeU2484_2 = value;
	}

	inline static int32_t get_offset_of_U24indexU2485_3() { return static_cast<int32_t>(offsetof(U24_t2763495600, ___U24indexU2485_3)); }
	inline int32_t get_U24indexU2485_3() const { return ___U24indexU2485_3; }
	inline int32_t* get_address_of_U24indexU2485_3() { return &___U24indexU2485_3; }
	inline void set_U24indexU2485_3(int32_t value)
	{
		___U24indexU2485_3 = value;
	}

	inline static int32_t get_offset_of_U24self_U2486_4() { return static_cast<int32_t>(offsetof(U24_t2763495600, ___U24self_U2486_4)); }
	inline TutorialController_t1763165411 * get_U24self_U2486_4() const { return ___U24self_U2486_4; }
	inline TutorialController_t1763165411 ** get_address_of_U24self_U2486_4() { return &___U24self_U2486_4; }
	inline void set_U24self_U2486_4(TutorialController_t1763165411 * value)
	{
		___U24self_U2486_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24self_U2486_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24_T2763495600_H
#ifndef U24SETDEFERREDU2483_T3290369842_H
#define U24SETDEFERREDU2483_T3290369842_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TutorialController/$SetDeferred$83
struct  U24SetDeferredU2483_t3290369842  : public GenericGenerator_1_t4241642175
{
public:
	// System.Int32 TutorialController/$SetDeferred$83::$time$87
	int32_t ___U24timeU2487_0;
	// System.Int32 TutorialController/$SetDeferred$83::$index$88
	int32_t ___U24indexU2488_1;
	// TutorialController TutorialController/$SetDeferred$83::$self_$89
	TutorialController_t1763165411 * ___U24self_U2489_2;

public:
	inline static int32_t get_offset_of_U24timeU2487_0() { return static_cast<int32_t>(offsetof(U24SetDeferredU2483_t3290369842, ___U24timeU2487_0)); }
	inline int32_t get_U24timeU2487_0() const { return ___U24timeU2487_0; }
	inline int32_t* get_address_of_U24timeU2487_0() { return &___U24timeU2487_0; }
	inline void set_U24timeU2487_0(int32_t value)
	{
		___U24timeU2487_0 = value;
	}

	inline static int32_t get_offset_of_U24indexU2488_1() { return static_cast<int32_t>(offsetof(U24SetDeferredU2483_t3290369842, ___U24indexU2488_1)); }
	inline int32_t get_U24indexU2488_1() const { return ___U24indexU2488_1; }
	inline int32_t* get_address_of_U24indexU2488_1() { return &___U24indexU2488_1; }
	inline void set_U24indexU2488_1(int32_t value)
	{
		___U24indexU2488_1 = value;
	}

	inline static int32_t get_offset_of_U24self_U2489_2() { return static_cast<int32_t>(offsetof(U24SetDeferredU2483_t3290369842, ___U24self_U2489_2)); }
	inline TutorialController_t1763165411 * get_U24self_U2489_2() const { return ___U24self_U2489_2; }
	inline TutorialController_t1763165411 ** get_address_of_U24self_U2489_2() { return &___U24self_U2489_2; }
	inline void set_U24self_U2489_2(TutorialController_t1763165411 * value)
	{
		___U24self_U2489_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24self_U2489_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24SETDEFERREDU2483_T3290369842_H
#ifndef U24_T3279685947_H
#define U24_T3279685947_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TutorialController/$Wait$76/$
struct  U24_t3279685947  : public GenericGeneratorEnumerator_1_t2143876637
{
public:
	// System.Int32 TutorialController/$Wait$76/$::$time$77
	int32_t ___U24timeU2477_2;
	// System.Int32 TutorialController/$Wait$76/$::$nextState$78
	int32_t ___U24nextStateU2478_3;
	// TutorialController TutorialController/$Wait$76/$::$self_$79
	TutorialController_t1763165411 * ___U24self_U2479_4;

public:
	inline static int32_t get_offset_of_U24timeU2477_2() { return static_cast<int32_t>(offsetof(U24_t3279685947, ___U24timeU2477_2)); }
	inline int32_t get_U24timeU2477_2() const { return ___U24timeU2477_2; }
	inline int32_t* get_address_of_U24timeU2477_2() { return &___U24timeU2477_2; }
	inline void set_U24timeU2477_2(int32_t value)
	{
		___U24timeU2477_2 = value;
	}

	inline static int32_t get_offset_of_U24nextStateU2478_3() { return static_cast<int32_t>(offsetof(U24_t3279685947, ___U24nextStateU2478_3)); }
	inline int32_t get_U24nextStateU2478_3() const { return ___U24nextStateU2478_3; }
	inline int32_t* get_address_of_U24nextStateU2478_3() { return &___U24nextStateU2478_3; }
	inline void set_U24nextStateU2478_3(int32_t value)
	{
		___U24nextStateU2478_3 = value;
	}

	inline static int32_t get_offset_of_U24self_U2479_4() { return static_cast<int32_t>(offsetof(U24_t3279685947, ___U24self_U2479_4)); }
	inline TutorialController_t1763165411 * get_U24self_U2479_4() const { return ___U24self_U2479_4; }
	inline TutorialController_t1763165411 ** get_address_of_U24self_U2479_4() { return &___U24self_U2479_4; }
	inline void set_U24self_U2479_4(TutorialController_t1763165411 * value)
	{
		___U24self_U2479_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24self_U2479_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24_T3279685947_H
#ifndef U24WAITU2476_T2127274753_H
#define U24WAITU2476_T2127274753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TutorialController/$Wait$76
struct  U24WaitU2476_t2127274753  : public GenericGenerator_1_t4241642175
{
public:
	// System.Int32 TutorialController/$Wait$76::$time$80
	int32_t ___U24timeU2480_0;
	// System.Int32 TutorialController/$Wait$76::$nextState$81
	int32_t ___U24nextStateU2481_1;
	// TutorialController TutorialController/$Wait$76::$self_$82
	TutorialController_t1763165411 * ___U24self_U2482_2;

public:
	inline static int32_t get_offset_of_U24timeU2480_0() { return static_cast<int32_t>(offsetof(U24WaitU2476_t2127274753, ___U24timeU2480_0)); }
	inline int32_t get_U24timeU2480_0() const { return ___U24timeU2480_0; }
	inline int32_t* get_address_of_U24timeU2480_0() { return &___U24timeU2480_0; }
	inline void set_U24timeU2480_0(int32_t value)
	{
		___U24timeU2480_0 = value;
	}

	inline static int32_t get_offset_of_U24nextStateU2481_1() { return static_cast<int32_t>(offsetof(U24WaitU2476_t2127274753, ___U24nextStateU2481_1)); }
	inline int32_t get_U24nextStateU2481_1() const { return ___U24nextStateU2481_1; }
	inline int32_t* get_address_of_U24nextStateU2481_1() { return &___U24nextStateU2481_1; }
	inline void set_U24nextStateU2481_1(int32_t value)
	{
		___U24nextStateU2481_1 = value;
	}

	inline static int32_t get_offset_of_U24self_U2482_2() { return static_cast<int32_t>(offsetof(U24WaitU2476_t2127274753, ___U24self_U2482_2)); }
	inline TutorialController_t1763165411 * get_U24self_U2482_2() const { return ___U24self_U2482_2; }
	inline TutorialController_t1763165411 ** get_address_of_U24self_U2482_2() { return &___U24self_U2482_2; }
	inline void set_U24self_U2482_2(TutorialController_t1763165411 * value)
	{
		___U24self_U2482_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24self_U2482_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24WAITU2476_T2127274753_H
#ifndef QUATERNION_T752163471_H
#define QUATERNION_T752163471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t752163471 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t752163471, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t752163471, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t752163471, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t752163471, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t752163471_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t752163471  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t752163471_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t752163471  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t752163471 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t752163471  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T752163471_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	IntPtr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline IntPtr_t get_Zero_1() const { return ___Zero_1; }
	inline IntPtr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(IntPtr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef RECT_T3736358849_H
#define RECT_T3736358849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t3736358849 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t3736358849, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t3736358849, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t3736358849, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t3736358849, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T3736358849_H
#ifndef U24_T1282486539_H
#define U24_T1282486539_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScoreScreen/$SubmitScore$72/$
struct  U24_t1282486539  : public GenericGeneratorEnumerator_1_t2143876637
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> ScoreScreen/$SubmitScore$72/$::$metrics$73
	Dictionary_2_t326603431 * ___U24metricsU2473_2;
	// ScoreScreen ScoreScreen/$SubmitScore$72/$::$self_$74
	ScoreScreen_t1438327479 * ___U24self_U2474_3;

public:
	inline static int32_t get_offset_of_U24metricsU2473_2() { return static_cast<int32_t>(offsetof(U24_t1282486539, ___U24metricsU2473_2)); }
	inline Dictionary_2_t326603431 * get_U24metricsU2473_2() const { return ___U24metricsU2473_2; }
	inline Dictionary_2_t326603431 ** get_address_of_U24metricsU2473_2() { return &___U24metricsU2473_2; }
	inline void set_U24metricsU2473_2(Dictionary_2_t326603431 * value)
	{
		___U24metricsU2473_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24metricsU2473_2), value);
	}

	inline static int32_t get_offset_of_U24self_U2474_3() { return static_cast<int32_t>(offsetof(U24_t1282486539, ___U24self_U2474_3)); }
	inline ScoreScreen_t1438327479 * get_U24self_U2474_3() const { return ___U24self_U2474_3; }
	inline ScoreScreen_t1438327479 ** get_address_of_U24self_U2474_3() { return &___U24self_U2474_3; }
	inline void set_U24self_U2474_3(ScoreScreen_t1438327479 * value)
	{
		___U24self_U2474_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24self_U2474_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24_T1282486539_H
#ifndef U24SUBMITSCOREU2472_T1852586166_H
#define U24SUBMITSCOREU2472_T1852586166_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScoreScreen/$SubmitScore$72
struct  U24SubmitScoreU2472_t1852586166  : public GenericGenerator_1_t4241642175
{
public:
	// ScoreScreen ScoreScreen/$SubmitScore$72::$self_$75
	ScoreScreen_t1438327479 * ___U24self_U2475_0;

public:
	inline static int32_t get_offset_of_U24self_U2475_0() { return static_cast<int32_t>(offsetof(U24SubmitScoreU2472_t1852586166, ___U24self_U2475_0)); }
	inline ScoreScreen_t1438327479 * get_U24self_U2475_0() const { return ___U24self_U2475_0; }
	inline ScoreScreen_t1438327479 ** get_address_of_U24self_U2475_0() { return &___U24self_U2475_0; }
	inline void set_U24self_U2475_0(ScoreScreen_t1438327479 * value)
	{
		___U24self_U2475_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24self_U2475_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24SUBMITSCOREU2472_T1852586166_H
#ifndef VECTOR3_T1581017235_H
#define VECTOR3_T1581017235_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t1581017235 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t1581017235, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t1581017235, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t1581017235, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t1581017235_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t1581017235  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t1581017235  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t1581017235  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t1581017235  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t1581017235  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t1581017235  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t1581017235  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t1581017235  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t1581017235  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t1581017235  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t1581017235_StaticFields, ___zeroVector_4)); }
	inline Vector3_t1581017235  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t1581017235 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t1581017235  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t1581017235_StaticFields, ___oneVector_5)); }
	inline Vector3_t1581017235  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t1581017235 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t1581017235  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t1581017235_StaticFields, ___upVector_6)); }
	inline Vector3_t1581017235  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t1581017235 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t1581017235  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t1581017235_StaticFields, ___downVector_7)); }
	inline Vector3_t1581017235  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t1581017235 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t1581017235  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t1581017235_StaticFields, ___leftVector_8)); }
	inline Vector3_t1581017235  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t1581017235 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t1581017235  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t1581017235_StaticFields, ___rightVector_9)); }
	inline Vector3_t1581017235  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t1581017235 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t1581017235  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t1581017235_StaticFields, ___forwardVector_10)); }
	inline Vector3_t1581017235  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t1581017235 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t1581017235  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t1581017235_StaticFields, ___backVector_11)); }
	inline Vector3_t1581017235  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t1581017235 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t1581017235  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t1581017235_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t1581017235  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t1581017235 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t1581017235  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t1581017235_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t1581017235  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t1581017235 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t1581017235  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T1581017235_H
#ifndef OBJECT_T2513205023_H
#define OBJECT_T2513205023_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t2513205023  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	IntPtr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t2513205023, ___m_CachedPtr_0)); }
	inline IntPtr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline IntPtr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(IntPtr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t2513205023_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t2513205023_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t2513205023_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t2513205023_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T2513205023_H
#ifndef COMPONENT_T2008789925_H
#define COMPONENT_T2008789925_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t2008789925  : public Object_t2513205023
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T2008789925_H
#ifndef BEHAVIOUR_T2070390568_H
#define BEHAVIOUR_T2070390568_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t2070390568  : public Component_t2008789925
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T2070390568_H
#ifndef MONOBEHAVIOUR_T4111208580_H
#define MONOBEHAVIOUR_T4111208580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4111208580  : public Behaviour_t2070390568
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T4111208580_H
#ifndef DECORATION_T2811044574_H
#define DECORATION_T2811044574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Decoration
struct  Decoration_t2811044574  : public MonoBehaviour_t4111208580
{
public:
	// UnityEngine.Transform[] Decoration::DecorObject
	TransformU5BU5D_t3144966165* ___DecorObject_2;
	// UnityEngine.Transform Decoration::DecorObjectCopy
	Transform_t2932726396 * ___DecorObjectCopy_3;
	// UnityEngine.Vector2 Decoration::RotationRangeX
	Vector2_t3168986486  ___RotationRangeX_4;
	// UnityEngine.Vector2 Decoration::RotationRangeY
	Vector2_t3168986486  ___RotationRangeY_5;
	// UnityEngine.Vector2 Decoration::RotationRangeZ
	Vector2_t3168986486  ___RotationRangeZ_6;
	// System.Single Decoration::EmptyChance
	float ___EmptyChance_7;

public:
	inline static int32_t get_offset_of_DecorObject_2() { return static_cast<int32_t>(offsetof(Decoration_t2811044574, ___DecorObject_2)); }
	inline TransformU5BU5D_t3144966165* get_DecorObject_2() const { return ___DecorObject_2; }
	inline TransformU5BU5D_t3144966165** get_address_of_DecorObject_2() { return &___DecorObject_2; }
	inline void set_DecorObject_2(TransformU5BU5D_t3144966165* value)
	{
		___DecorObject_2 = value;
		Il2CppCodeGenWriteBarrier((&___DecorObject_2), value);
	}

	inline static int32_t get_offset_of_DecorObjectCopy_3() { return static_cast<int32_t>(offsetof(Decoration_t2811044574, ___DecorObjectCopy_3)); }
	inline Transform_t2932726396 * get_DecorObjectCopy_3() const { return ___DecorObjectCopy_3; }
	inline Transform_t2932726396 ** get_address_of_DecorObjectCopy_3() { return &___DecorObjectCopy_3; }
	inline void set_DecorObjectCopy_3(Transform_t2932726396 * value)
	{
		___DecorObjectCopy_3 = value;
		Il2CppCodeGenWriteBarrier((&___DecorObjectCopy_3), value);
	}

	inline static int32_t get_offset_of_RotationRangeX_4() { return static_cast<int32_t>(offsetof(Decoration_t2811044574, ___RotationRangeX_4)); }
	inline Vector2_t3168986486  get_RotationRangeX_4() const { return ___RotationRangeX_4; }
	inline Vector2_t3168986486 * get_address_of_RotationRangeX_4() { return &___RotationRangeX_4; }
	inline void set_RotationRangeX_4(Vector2_t3168986486  value)
	{
		___RotationRangeX_4 = value;
	}

	inline static int32_t get_offset_of_RotationRangeY_5() { return static_cast<int32_t>(offsetof(Decoration_t2811044574, ___RotationRangeY_5)); }
	inline Vector2_t3168986486  get_RotationRangeY_5() const { return ___RotationRangeY_5; }
	inline Vector2_t3168986486 * get_address_of_RotationRangeY_5() { return &___RotationRangeY_5; }
	inline void set_RotationRangeY_5(Vector2_t3168986486  value)
	{
		___RotationRangeY_5 = value;
	}

	inline static int32_t get_offset_of_RotationRangeZ_6() { return static_cast<int32_t>(offsetof(Decoration_t2811044574, ___RotationRangeZ_6)); }
	inline Vector2_t3168986486  get_RotationRangeZ_6() const { return ___RotationRangeZ_6; }
	inline Vector2_t3168986486 * get_address_of_RotationRangeZ_6() { return &___RotationRangeZ_6; }
	inline void set_RotationRangeZ_6(Vector2_t3168986486  value)
	{
		___RotationRangeZ_6 = value;
	}

	inline static int32_t get_offset_of_EmptyChance_7() { return static_cast<int32_t>(offsetof(Decoration_t2811044574, ___EmptyChance_7)); }
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
#endif // DECORATION_T2811044574_H
#ifndef FLOW_T2950641762_H
#define FLOW_T2950641762_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Flow
struct  Flow_t2950641762  : public MonoBehaviour_t4111208580
{
public:
	// System.Single Flow::Offset
	float ___Offset_2;
	// System.Single Flow::CurrentOffset
	float ___CurrentOffset_3;

public:
	inline static int32_t get_offset_of_Offset_2() { return static_cast<int32_t>(offsetof(Flow_t2950641762, ___Offset_2)); }
	inline float get_Offset_2() const { return ___Offset_2; }
	inline float* get_address_of_Offset_2() { return &___Offset_2; }
	inline void set_Offset_2(float value)
	{
		___Offset_2 = value;
	}

	inline static int32_t get_offset_of_CurrentOffset_3() { return static_cast<int32_t>(offsetof(Flow_t2950641762, ___CurrentOffset_3)); }
	inline float get_CurrentOffset_3() const { return ___CurrentOffset_3; }
	inline float* get_address_of_CurrentOffset_3() { return &___CurrentOffset_3; }
	inline void set_CurrentOffset_3(float value)
	{
		___CurrentOffset_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FLOW_T2950641762_H
#ifndef TUTORIALCONTROLLER_T1763165411_H
#define TUTORIALCONTROLLER_T1763165411_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TutorialController
struct  TutorialController_t1763165411  : public MonoBehaviour_t4111208580
{
public:
	// System.Single TutorialController::originalWidth
	float ___originalWidth_2;
	// System.Single TutorialController::originalHeight
	float ___originalHeight_3;
	// UnityEngine.Vector3 TutorialController::scale
	Vector3_t1581017235  ___scale_4;
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
	Rect_t3736358849  ___bigTextRect_11;
	// UnityEngine.Rect TutorialController::lowerTextRect
	Rect_t3736358849  ___lowerTextRect_12;
	// UnityEngine.Rect TutorialController::leftButtonRect
	Rect_t3736358849  ___leftButtonRect_13;
	// UnityEngine.Rect TutorialController::rightButtonRect
	Rect_t3736358849  ___rightButtonRect_14;
	// UnityEngine.Rect TutorialController::goButtonRect
	Rect_t3736358849  ___goButtonRect_15;
	// UnityEngine.Rect TutorialController::okButtonRect
	Rect_t3736358849  ___okButtonRect_16;
	// UnityEngine.Rect TutorialController::gemScoreRect
	Rect_t3736358849  ___gemScoreRect_17;
	// UnityEngine.Rect TutorialController::obstacleDescRect
	Rect_t3736358849  ___obstacleDescRect_18;
	// UnityEngine.GUISkin TutorialController::GUIskin
	GUISkin_t2878378263 * ___GUIskin_19;
	// UnityEngine.GUISkin TutorialController::GUISkin2
	GUISkin_t2878378263 * ___GUISkin2_20;
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
	StringU5BU5D_t2750034006* ___obstacleInfo_32;
	// System.Int32 TutorialController::tutorialState
	int32_t ___tutorialState_33;
	// System.Boolean TutorialController::activateElements
	bool ___activateElements_34;
	// PlayerControls TutorialController::player
	PlayerControls_t3288450189 * ___player_35;
	// PlatformCreator TutorialController::platformCreator
	PlatformCreator_t3386403704 * ___platformCreator_36;
	// GameController TutorialController::gameController
	GameController_t3102368722 * ___gameController_37;
	// UnityEngine.GameObject TutorialController::collector
	GameObject_t1251625431 * ___collector_38;
	// UnityEngine.GameObject[] TutorialController::tunnel
	GameObjectU5BU5D_t346896622* ___tunnel_39;
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
	Transform_t2932726396 * ___obstaclePlatform_45;
	// System.Int32 TutorialController::obstacleIndex
	int32_t ___obstacleIndex_46;
	// UnityScript.Lang.Array TutorialController::platformObstacleList
	Array_t2110397784 * ___platformObstacleList_47;
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
	GameObjectU5BU5D_t346896622* ___inactivePlatforms_53;

public:
	inline static int32_t get_offset_of_originalWidth_2() { return static_cast<int32_t>(offsetof(TutorialController_t1763165411, ___originalWidth_2)); }
	inline float get_originalWidth_2() const { return ___originalWidth_2; }
	inline float* get_address_of_originalWidth_2() { return &___originalWidth_2; }
	inline void set_originalWidth_2(float value)
	{
		___originalWidth_2 = value;
	}

	inline static int32_t get_offset_of_originalHeight_3() { return static_cast<int32_t>(offsetof(TutorialController_t1763165411, ___originalHeight_3)); }
	inline float get_originalHeight_3() const { return ___originalHeight_3; }
	inline float* get_address_of_originalHeight_3() { return &___originalHeight_3; }
	inline void set_originalHeight_3(float value)
	{
		___originalHeight_3 = value;
	}

	inline static int32_t get_offset_of_scale_4() { return static_cast<int32_t>(offsetof(TutorialController_t1763165411, ___scale_4)); }
	inline Vector3_t1581017235  get_scale_4() const { return ___scale_4; }
	inline Vector3_t1581017235 * get_address_of_scale_4() { return &___scale_4; }
	inline void set_scale_4(Vector3_t1581017235  value)
	{
		___scale_4 = value;
	}

	inline static int32_t get_offset_of_ButtonHeight_5() { return static_cast<int32_t>(offsetof(TutorialController_t1763165411, ___ButtonHeight_5)); }
	inline int32_t get_ButtonHeight_5() const { return ___ButtonHeight_5; }
	inline int32_t* get_address_of_ButtonHeight_5() { return &___ButtonHeight_5; }
	inline void set_ButtonHeight_5(int32_t value)
	{
		___ButtonHeight_5 = value;
	}

	inline static int32_t get_offset_of_ButtonWidth_6() { return static_cast<int32_t>(offsetof(TutorialController_t1763165411, ___ButtonWidth_6)); }
	inline int32_t get_ButtonWidth_6() const { return ___ButtonWidth_6; }
	inline int32_t* get_address_of_ButtonWidth_6() { return &___ButtonWidth_6; }
	inline void set_ButtonWidth_6(int32_t value)
	{
		___ButtonWidth_6 = value;
	}

	inline static int32_t get_offset_of_boxWidth_7() { return static_cast<int32_t>(offsetof(TutorialController_t1763165411, ___boxWidth_7)); }
	inline int32_t get_boxWidth_7() const { return ___boxWidth_7; }
	inline int32_t* get_address_of_boxWidth_7() { return &___boxWidth_7; }
	inline void set_boxWidth_7(int32_t value)
	{
		___boxWidth_7 = value;
	}

	inline static int32_t get_offset_of_boxHeight_8() { return static_cast<int32_t>(offsetof(TutorialController_t1763165411, ___boxHeight_8)); }
	inline int32_t get_boxHeight_8() const { return ___boxHeight_8; }
	inline int32_t* get_address_of_boxHeight_8() { return &___boxHeight_8; }
	inline void set_boxHeight_8(int32_t value)
	{
		___boxHeight_8 = value;
	}

	inline static int32_t get_offset_of_smallBoxHeight_9() { return static_cast<int32_t>(offsetof(TutorialController_t1763165411, ___smallBoxHeight_9)); }
	inline int32_t get_smallBoxHeight_9() const { return ___smallBoxHeight_9; }
	inline int32_t* get_address_of_smallBoxHeight_9() { return &___smallBoxHeight_9; }
	inline void set_smallBoxHeight_9(int32_t value)
	{
		___smallBoxHeight_9 = value;
	}

	inline static int32_t get_offset_of_smallBoxWidth_10() { return static_cast<int32_t>(offsetof(TutorialController_t1763165411, ___smallBoxWidth_10)); }
	inline int32_t get_smallBoxWidth_10() const { return ___smallBoxWidth_10; }
	inline int32_t* get_address_of_smallBoxWidth_10() { return &___smallBoxWidth_10; }
	inline void set_smallBoxWidth_10(int32_t value)
	{
		___smallBoxWidth_10 = value;
	}

	inline static int32_t get_offset_of_bigTextRect_11() { return static_cast<int32_t>(offsetof(TutorialController_t1763165411, ___bigTextRect_11)); }
	inline Rect_t3736358849  get_bigTextRect_11() const { return ___bigTextRect_11; }
	inline Rect_t3736358849 * get_address_of_bigTextRect_11() { return &___bigTextRect_11; }
	inline void set_bigTextRect_11(Rect_t3736358849  value)
	{
		___bigTextRect_11 = value;
	}

	inline static int32_t get_offset_of_lowerTextRect_12() { return static_cast<int32_t>(offsetof(TutorialController_t1763165411, ___lowerTextRect_12)); }
	inline Rect_t3736358849  get_lowerTextRect_12() const { return ___lowerTextRect_12; }
	inline Rect_t3736358849 * get_address_of_lowerTextRect_12() { return &___lowerTextRect_12; }
	inline void set_lowerTextRect_12(Rect_t3736358849  value)
	{
		___lowerTextRect_12 = value;
	}

	inline static int32_t get_offset_of_leftButtonRect_13() { return static_cast<int32_t>(offsetof(TutorialController_t1763165411, ___leftButtonRect_13)); }
	inline Rect_t3736358849  get_leftButtonRect_13() const { return ___leftButtonRect_13; }
	inline Rect_t3736358849 * get_address_of_leftButtonRect_13() { return &___leftButtonRect_13; }
	inline void set_leftButtonRect_13(Rect_t3736358849  value)
	{
		___leftButtonRect_13 = value;
	}

	inline static int32_t get_offset_of_rightButtonRect_14() { return static_cast<int32_t>(offsetof(TutorialController_t1763165411, ___rightButtonRect_14)); }
	inline Rect_t3736358849  get_rightButtonRect_14() const { return ___rightButtonRect_14; }
	inline Rect_t3736358849 * get_address_of_rightButtonRect_14() { return &___rightButtonRect_14; }
	inline void set_rightButtonRect_14(Rect_t3736358849  value)
	{
		___rightButtonRect_14 = value;
	}

	inline static int32_t get_offset_of_goButtonRect_15() { return static_cast<int32_t>(offsetof(TutorialController_t1763165411, ___goButtonRect_15)); }
	inline Rect_t3736358849  get_goButtonRect_15() const { return ___goButtonRect_15; }
	inline Rect_t3736358849 * get_address_of_goButtonRect_15() { return &___goButtonRect_15; }
	inline void set_goButtonRect_15(Rect_t3736358849  value)
	{
		___goButtonRect_15 = value;
	}

	inline static int32_t get_offset_of_okButtonRect_16() { return static_cast<int32_t>(offsetof(TutorialController_t1763165411, ___okButtonRect_16)); }
	inline Rect_t3736358849  get_okButtonRect_16() const { return ___okButtonRect_16; }
	inline Rect_t3736358849 * get_address_of_okButtonRect_16() { return &___okButtonRect_16; }
	inline void set_okButtonRect_16(Rect_t3736358849  value)
	{
		___okButtonRect_16 = value;
	}

	inline static int32_t get_offset_of_gemScoreRect_17() { return static_cast<int32_t>(offsetof(TutorialController_t1763165411, ___gemScoreRect_17)); }
	inline Rect_t3736358849  get_gemScoreRect_17() const { return ___gemScoreRect_17; }
	inline Rect_t3736358849 * get_address_of_gemScoreRect_17() { return &___gemScoreRect_17; }
	inline void set_gemScoreRect_17(Rect_t3736358849  value)
	{
		___gemScoreRect_17 = value;
	}

	inline static int32_t get_offset_of_obstacleDescRect_18() { return static_cast<int32_t>(offsetof(TutorialController_t1763165411, ___obstacleDescRect_18)); }
	inline Rect_t3736358849  get_obstacleDescRect_18() const { return ___obstacleDescRect_18; }
	inline Rect_t3736358849 * get_address_of_obstacleDescRect_18() { return &___obstacleDescRect_18; }
	inline void set_obstacleDescRect_18(Rect_t3736358849  value)
	{
		___obstacleDescRect_18 = value;
	}

	inline static int32_t get_offset_of_GUIskin_19() { return static_cast<int32_t>(offsetof(TutorialController_t1763165411, ___GUIskin_19)); }
	inline GUISkin_t2878378263 * get_GUIskin_19() const { return ___GUIskin_19; }
	inline GUISkin_t2878378263 ** get_address_of_GUIskin_19() { return &___GUIskin_19; }
	inline void set_GUIskin_19(GUISkin_t2878378263 * value)
	{
		___GUIskin_19 = value;
		Il2CppCodeGenWriteBarrier((&___GUIskin_19), value);
	}

	inline static int32_t get_offset_of_GUISkin2_20() { return static_cast<int32_t>(offsetof(TutorialController_t1763165411, ___GUISkin2_20)); }
	inline GUISkin_t2878378263 * get_GUISkin2_20() const { return ___GUISkin2_20; }
	inline GUISkin_t2878378263 ** get_address_of_GUISkin2_20() { return &___GUISkin2_20; }
	inline void set_GUISkin2_20(GUISkin_t2878378263 * value)
	{
		___GUISkin2_20 = value;
		Il2CppCodeGenWriteBarrier((&___GUISkin2_20), value);
	}

	inline static int32_t get_offset_of_deltaPosX_21() { return static_cast<int32_t>(offsetof(TutorialController_t1763165411, ___deltaPosX_21)); }
	inline float get_deltaPosX_21() const { return ___deltaPosX_21; }
	inline float* get_address_of_deltaPosX_21() { return &___deltaPosX_21; }
	inline void set_deltaPosX_21(float value)
	{
		___deltaPosX_21 = value;
	}

	inline static int32_t get_offset_of_obstaclesCount_22() { return static_cast<int32_t>(offsetof(TutorialController_t1763165411, ___obstaclesCount_22)); }
	inline int32_t get_obstaclesCount_22() const { return ___obstaclesCount_22; }
	inline int32_t* get_address_of_obstaclesCount_22() { return &___obstaclesCount_22; }
	inline void set_obstaclesCount_22(int32_t value)
	{
		___obstaclesCount_22 = value;
	}

	inline static int32_t get_offset_of_gemsNeeded_23() { return static_cast<int32_t>(offsetof(TutorialController_t1763165411, ___gemsNeeded_23)); }
	inline int32_t get_gemsNeeded_23() const { return ___gemsNeeded_23; }
	inline int32_t* get_address_of_gemsNeeded_23() { return &___gemsNeeded_23; }
	inline void set_gemsNeeded_23(int32_t value)
	{
		___gemsNeeded_23 = value;
	}

	inline static int32_t get_offset_of_playerTutorialSpeed_24() { return static_cast<int32_t>(offsetof(TutorialController_t1763165411, ___playerTutorialSpeed_24)); }
	inline float get_playerTutorialSpeed_24() const { return ___playerTutorialSpeed_24; }
	inline float* get_address_of_playerTutorialSpeed_24() { return &___playerTutorialSpeed_24; }
	inline void set_playerTutorialSpeed_24(float value)
	{
		___playerTutorialSpeed_24 = value;
	}

	inline static int32_t get_offset_of_initialTutorialText_25() { return static_cast<int32_t>(offsetof(TutorialController_t1763165411, ___initialTutorialText_25)); }
	inline String_t* get_initialTutorialText_25() const { return ___initialTutorialText_25; }
	inline String_t** get_address_of_initialTutorialText_25() { return &___initialTutorialText_25; }
	inline void set_initialTutorialText_25(String_t* value)
	{
		___initialTutorialText_25 = value;
		Il2CppCodeGenWriteBarrier((&___initialTutorialText_25), value);
	}

	inline static int32_t get_offset_of_jumpTutorialText_26() { return static_cast<int32_t>(offsetof(TutorialController_t1763165411, ___jumpTutorialText_26)); }
	inline String_t* get_jumpTutorialText_26() const { return ___jumpTutorialText_26; }
	inline String_t** get_address_of_jumpTutorialText_26() { return &___jumpTutorialText_26; }
	inline void set_jumpTutorialText_26(String_t* value)
	{
		___jumpTutorialText_26 = value;
		Il2CppCodeGenWriteBarrier((&___jumpTutorialText_26), value);
	}

	inline static int32_t get_offset_of_moveTutorialText_27() { return static_cast<int32_t>(offsetof(TutorialController_t1763165411, ___moveTutorialText_27)); }
	inline String_t* get_moveTutorialText_27() const { return ___moveTutorialText_27; }
	inline String_t** get_address_of_moveTutorialText_27() { return &___moveTutorialText_27; }
	inline void set_moveTutorialText_27(String_t* value)
	{
		___moveTutorialText_27 = value;
		Il2CppCodeGenWriteBarrier((&___moveTutorialText_27), value);
	}

	inline static int32_t get_offset_of_obstacleTutorialText_28() { return static_cast<int32_t>(offsetof(TutorialController_t1763165411, ___obstacleTutorialText_28)); }
	inline String_t* get_obstacleTutorialText_28() const { return ___obstacleTutorialText_28; }
	inline String_t** get_address_of_obstacleTutorialText_28() { return &___obstacleTutorialText_28; }
	inline void set_obstacleTutorialText_28(String_t* value)
	{
		___obstacleTutorialText_28 = value;
		Il2CppCodeGenWriteBarrier((&___obstacleTutorialText_28), value);
	}

	inline static int32_t get_offset_of_scoringTutorialText_29() { return static_cast<int32_t>(offsetof(TutorialController_t1763165411, ___scoringTutorialText_29)); }
	inline String_t* get_scoringTutorialText_29() const { return ___scoringTutorialText_29; }
	inline String_t** get_address_of_scoringTutorialText_29() { return &___scoringTutorialText_29; }
	inline void set_scoringTutorialText_29(String_t* value)
	{
		___scoringTutorialText_29 = value;
		Il2CppCodeGenWriteBarrier((&___scoringTutorialText_29), value);
	}

	inline static int32_t get_offset_of_exitTutorialText_30() { return static_cast<int32_t>(offsetof(TutorialController_t1763165411, ___exitTutorialText_30)); }
	inline String_t* get_exitTutorialText_30() const { return ___exitTutorialText_30; }
	inline String_t** get_address_of_exitTutorialText_30() { return &___exitTutorialText_30; }
	inline void set_exitTutorialText_30(String_t* value)
	{
		___exitTutorialText_30 = value;
		Il2CppCodeGenWriteBarrier((&___exitTutorialText_30), value);
	}

	inline static int32_t get_offset_of_finishedTutorialText_31() { return static_cast<int32_t>(offsetof(TutorialController_t1763165411, ___finishedTutorialText_31)); }
	inline String_t* get_finishedTutorialText_31() const { return ___finishedTutorialText_31; }
	inline String_t** get_address_of_finishedTutorialText_31() { return &___finishedTutorialText_31; }
	inline void set_finishedTutorialText_31(String_t* value)
	{
		___finishedTutorialText_31 = value;
		Il2CppCodeGenWriteBarrier((&___finishedTutorialText_31), value);
	}

	inline static int32_t get_offset_of_obstacleInfo_32() { return static_cast<int32_t>(offsetof(TutorialController_t1763165411, ___obstacleInfo_32)); }
	inline StringU5BU5D_t2750034006* get_obstacleInfo_32() const { return ___obstacleInfo_32; }
	inline StringU5BU5D_t2750034006** get_address_of_obstacleInfo_32() { return &___obstacleInfo_32; }
	inline void set_obstacleInfo_32(StringU5BU5D_t2750034006* value)
	{
		___obstacleInfo_32 = value;
		Il2CppCodeGenWriteBarrier((&___obstacleInfo_32), value);
	}

	inline static int32_t get_offset_of_tutorialState_33() { return static_cast<int32_t>(offsetof(TutorialController_t1763165411, ___tutorialState_33)); }
	inline int32_t get_tutorialState_33() const { return ___tutorialState_33; }
	inline int32_t* get_address_of_tutorialState_33() { return &___tutorialState_33; }
	inline void set_tutorialState_33(int32_t value)
	{
		___tutorialState_33 = value;
	}

	inline static int32_t get_offset_of_activateElements_34() { return static_cast<int32_t>(offsetof(TutorialController_t1763165411, ___activateElements_34)); }
	inline bool get_activateElements_34() const { return ___activateElements_34; }
	inline bool* get_address_of_activateElements_34() { return &___activateElements_34; }
	inline void set_activateElements_34(bool value)
	{
		___activateElements_34 = value;
	}

	inline static int32_t get_offset_of_player_35() { return static_cast<int32_t>(offsetof(TutorialController_t1763165411, ___player_35)); }
	inline PlayerControls_t3288450189 * get_player_35() const { return ___player_35; }
	inline PlayerControls_t3288450189 ** get_address_of_player_35() { return &___player_35; }
	inline void set_player_35(PlayerControls_t3288450189 * value)
	{
		___player_35 = value;
		Il2CppCodeGenWriteBarrier((&___player_35), value);
	}

	inline static int32_t get_offset_of_platformCreator_36() { return static_cast<int32_t>(offsetof(TutorialController_t1763165411, ___platformCreator_36)); }
	inline PlatformCreator_t3386403704 * get_platformCreator_36() const { return ___platformCreator_36; }
	inline PlatformCreator_t3386403704 ** get_address_of_platformCreator_36() { return &___platformCreator_36; }
	inline void set_platformCreator_36(PlatformCreator_t3386403704 * value)
	{
		___platformCreator_36 = value;
		Il2CppCodeGenWriteBarrier((&___platformCreator_36), value);
	}

	inline static int32_t get_offset_of_gameController_37() { return static_cast<int32_t>(offsetof(TutorialController_t1763165411, ___gameController_37)); }
	inline GameController_t3102368722 * get_gameController_37() const { return ___gameController_37; }
	inline GameController_t3102368722 ** get_address_of_gameController_37() { return &___gameController_37; }
	inline void set_gameController_37(GameController_t3102368722 * value)
	{
		___gameController_37 = value;
		Il2CppCodeGenWriteBarrier((&___gameController_37), value);
	}

	inline static int32_t get_offset_of_collector_38() { return static_cast<int32_t>(offsetof(TutorialController_t1763165411, ___collector_38)); }
	inline GameObject_t1251625431 * get_collector_38() const { return ___collector_38; }
	inline GameObject_t1251625431 ** get_address_of_collector_38() { return &___collector_38; }
	inline void set_collector_38(GameObject_t1251625431 * value)
	{
		___collector_38 = value;
		Il2CppCodeGenWriteBarrier((&___collector_38), value);
	}

	inline static int32_t get_offset_of_tunnel_39() { return static_cast<int32_t>(offsetof(TutorialController_t1763165411, ___tunnel_39)); }
	inline GameObjectU5BU5D_t346896622* get_tunnel_39() const { return ___tunnel_39; }
	inline GameObjectU5BU5D_t346896622** get_address_of_tunnel_39() { return &___tunnel_39; }
	inline void set_tunnel_39(GameObjectU5BU5D_t346896622* value)
	{
		___tunnel_39 = value;
		Il2CppCodeGenWriteBarrier((&___tunnel_39), value);
	}

	inline static int32_t get_offset_of_originalGemRate_40() { return static_cast<int32_t>(offsetof(TutorialController_t1763165411, ___originalGemRate_40)); }
	inline float get_originalGemRate_40() const { return ___originalGemRate_40; }
	inline float* get_address_of_originalGemRate_40() { return &___originalGemRate_40; }
	inline void set_originalGemRate_40(float value)
	{
		___originalGemRate_40 = value;
	}

	inline static int32_t get_offset_of_originalObstacleRate_41() { return static_cast<int32_t>(offsetof(TutorialController_t1763165411, ___originalObstacleRate_41)); }
	inline float get_originalObstacleRate_41() const { return ___originalObstacleRate_41; }
	inline float* get_address_of_originalObstacleRate_41() { return &___originalObstacleRate_41; }
	inline void set_originalObstacleRate_41(float value)
	{
		___originalObstacleRate_41 = value;
	}

	inline static int32_t get_offset_of_originalGemRateChange_42() { return static_cast<int32_t>(offsetof(TutorialController_t1763165411, ___originalGemRateChange_42)); }
	inline float get_originalGemRateChange_42() const { return ___originalGemRateChange_42; }
	inline float* get_address_of_originalGemRateChange_42() { return &___originalGemRateChange_42; }
	inline void set_originalGemRateChange_42(float value)
	{
		___originalGemRateChange_42 = value;
	}

	inline static int32_t get_offset_of_originalObstacleRateChange_43() { return static_cast<int32_t>(offsetof(TutorialController_t1763165411, ___originalObstacleRateChange_43)); }
	inline float get_originalObstacleRateChange_43() const { return ___originalObstacleRateChange_43; }
	inline float* get_address_of_originalObstacleRateChange_43() { return &___originalObstacleRateChange_43; }
	inline void set_originalObstacleRateChange_43(float value)
	{
		___originalObstacleRateChange_43 = value;
	}

	inline static int32_t get_offset_of_originalPlayerSpeed_44() { return static_cast<int32_t>(offsetof(TutorialController_t1763165411, ___originalPlayerSpeed_44)); }
	inline float get_originalPlayerSpeed_44() const { return ___originalPlayerSpeed_44; }
	inline float* get_address_of_originalPlayerSpeed_44() { return &___originalPlayerSpeed_44; }
	inline void set_originalPlayerSpeed_44(float value)
	{
		___originalPlayerSpeed_44 = value;
	}

	inline static int32_t get_offset_of_obstaclePlatform_45() { return static_cast<int32_t>(offsetof(TutorialController_t1763165411, ___obstaclePlatform_45)); }
	inline Transform_t2932726396 * get_obstaclePlatform_45() const { return ___obstaclePlatform_45; }
	inline Transform_t2932726396 ** get_address_of_obstaclePlatform_45() { return &___obstaclePlatform_45; }
	inline void set_obstaclePlatform_45(Transform_t2932726396 * value)
	{
		___obstaclePlatform_45 = value;
		Il2CppCodeGenWriteBarrier((&___obstaclePlatform_45), value);
	}

	inline static int32_t get_offset_of_obstacleIndex_46() { return static_cast<int32_t>(offsetof(TutorialController_t1763165411, ___obstacleIndex_46)); }
	inline int32_t get_obstacleIndex_46() const { return ___obstacleIndex_46; }
	inline int32_t* get_address_of_obstacleIndex_46() { return &___obstacleIndex_46; }
	inline void set_obstacleIndex_46(int32_t value)
	{
		___obstacleIndex_46 = value;
	}

	inline static int32_t get_offset_of_platformObstacleList_47() { return static_cast<int32_t>(offsetof(TutorialController_t1763165411, ___platformObstacleList_47)); }
	inline Array_t2110397784 * get_platformObstacleList_47() const { return ___platformObstacleList_47; }
	inline Array_t2110397784 ** get_address_of_platformObstacleList_47() { return &___platformObstacleList_47; }
	inline void set_platformObstacleList_47(Array_t2110397784 * value)
	{
		___platformObstacleList_47 = value;
		Il2CppCodeGenWriteBarrier((&___platformObstacleList_47), value);
	}

	inline static int32_t get_offset_of_deferredIndex_48() { return static_cast<int32_t>(offsetof(TutorialController_t1763165411, ___deferredIndex_48)); }
	inline int32_t get_deferredIndex_48() const { return ___deferredIndex_48; }
	inline int32_t* get_address_of_deferredIndex_48() { return &___deferredIndex_48; }
	inline void set_deferredIndex_48(int32_t value)
	{
		___deferredIndex_48 = value;
	}

	inline static int32_t get_offset_of_firstMoveScreenStep_49() { return static_cast<int32_t>(offsetof(TutorialController_t1763165411, ___firstMoveScreenStep_49)); }
	inline bool get_firstMoveScreenStep_49() const { return ___firstMoveScreenStep_49; }
	inline bool* get_address_of_firstMoveScreenStep_49() { return &___firstMoveScreenStep_49; }
	inline void set_firstMoveScreenStep_49(bool value)
	{
		___firstMoveScreenStep_49 = value;
	}

	inline static int32_t get_offset_of_firstObstacleScreenStep_50() { return static_cast<int32_t>(offsetof(TutorialController_t1763165411, ___firstObstacleScreenStep_50)); }
	inline bool get_firstObstacleScreenStep_50() const { return ___firstObstacleScreenStep_50; }
	inline bool* get_address_of_firstObstacleScreenStep_50() { return &___firstObstacleScreenStep_50; }
	inline void set_firstObstacleScreenStep_50(bool value)
	{
		___firstObstacleScreenStep_50 = value;
	}

	inline static int32_t get_offset_of_firstScoreScreenStep_51() { return static_cast<int32_t>(offsetof(TutorialController_t1763165411, ___firstScoreScreenStep_51)); }
	inline bool get_firstScoreScreenStep_51() const { return ___firstScoreScreenStep_51; }
	inline bool* get_address_of_firstScoreScreenStep_51() { return &___firstScoreScreenStep_51; }
	inline void set_firstScoreScreenStep_51(bool value)
	{
		___firstScoreScreenStep_51 = value;
	}

	inline static int32_t get_offset_of_lastFinishScreenStep_52() { return static_cast<int32_t>(offsetof(TutorialController_t1763165411, ___lastFinishScreenStep_52)); }
	inline bool get_lastFinishScreenStep_52() const { return ___lastFinishScreenStep_52; }
	inline bool* get_address_of_lastFinishScreenStep_52() { return &___lastFinishScreenStep_52; }
	inline void set_lastFinishScreenStep_52(bool value)
	{
		___lastFinishScreenStep_52 = value;
	}

	inline static int32_t get_offset_of_inactivePlatforms_53() { return static_cast<int32_t>(offsetof(TutorialController_t1763165411, ___inactivePlatforms_53)); }
	inline GameObjectU5BU5D_t346896622* get_inactivePlatforms_53() const { return ___inactivePlatforms_53; }
	inline GameObjectU5BU5D_t346896622** get_address_of_inactivePlatforms_53() { return &___inactivePlatforms_53; }
	inline void set_inactivePlatforms_53(GameObjectU5BU5D_t346896622* value)
	{
		___inactivePlatforms_53 = value;
		Il2CppCodeGenWriteBarrier((&___inactivePlatforms_53), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TUTORIALCONTROLLER_T1763165411_H
#ifndef TUNNEL_T1959537664_H
#define TUNNEL_T1959537664_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tunnel
struct  Tunnel_t1959537664  : public MonoBehaviour_t4111208580
{
public:
	// System.Single Tunnel::InitialSpeed
	float ___InitialSpeed_2;
	// System.Int32 Tunnel::TunnelLength
	int32_t ___TunnelLength_3;
	// UnityEngine.GameObject Tunnel::Player
	GameObject_t1251625431 * ___Player_4;
	// PlayerControls Tunnel::pControls
	PlayerControls_t3288450189 * ___pControls_5;
	// System.Single Tunnel::TunnelSpeed
	float ___TunnelSpeed_6;
	// UnityEngine.Vector3 Tunnel::InitPos
	Vector3_t1581017235  ___InitPos_7;
	// System.Single Tunnel::DistancePassed
	float ___DistancePassed_8;

public:
	inline static int32_t get_offset_of_InitialSpeed_2() { return static_cast<int32_t>(offsetof(Tunnel_t1959537664, ___InitialSpeed_2)); }
	inline float get_InitialSpeed_2() const { return ___InitialSpeed_2; }
	inline float* get_address_of_InitialSpeed_2() { return &___InitialSpeed_2; }
	inline void set_InitialSpeed_2(float value)
	{
		___InitialSpeed_2 = value;
	}

	inline static int32_t get_offset_of_TunnelLength_3() { return static_cast<int32_t>(offsetof(Tunnel_t1959537664, ___TunnelLength_3)); }
	inline int32_t get_TunnelLength_3() const { return ___TunnelLength_3; }
	inline int32_t* get_address_of_TunnelLength_3() { return &___TunnelLength_3; }
	inline void set_TunnelLength_3(int32_t value)
	{
		___TunnelLength_3 = value;
	}

	inline static int32_t get_offset_of_Player_4() { return static_cast<int32_t>(offsetof(Tunnel_t1959537664, ___Player_4)); }
	inline GameObject_t1251625431 * get_Player_4() const { return ___Player_4; }
	inline GameObject_t1251625431 ** get_address_of_Player_4() { return &___Player_4; }
	inline void set_Player_4(GameObject_t1251625431 * value)
	{
		___Player_4 = value;
		Il2CppCodeGenWriteBarrier((&___Player_4), value);
	}

	inline static int32_t get_offset_of_pControls_5() { return static_cast<int32_t>(offsetof(Tunnel_t1959537664, ___pControls_5)); }
	inline PlayerControls_t3288450189 * get_pControls_5() const { return ___pControls_5; }
	inline PlayerControls_t3288450189 ** get_address_of_pControls_5() { return &___pControls_5; }
	inline void set_pControls_5(PlayerControls_t3288450189 * value)
	{
		___pControls_5 = value;
		Il2CppCodeGenWriteBarrier((&___pControls_5), value);
	}

	inline static int32_t get_offset_of_TunnelSpeed_6() { return static_cast<int32_t>(offsetof(Tunnel_t1959537664, ___TunnelSpeed_6)); }
	inline float get_TunnelSpeed_6() const { return ___TunnelSpeed_6; }
	inline float* get_address_of_TunnelSpeed_6() { return &___TunnelSpeed_6; }
	inline void set_TunnelSpeed_6(float value)
	{
		___TunnelSpeed_6 = value;
	}

	inline static int32_t get_offset_of_InitPos_7() { return static_cast<int32_t>(offsetof(Tunnel_t1959537664, ___InitPos_7)); }
	inline Vector3_t1581017235  get_InitPos_7() const { return ___InitPos_7; }
	inline Vector3_t1581017235 * get_address_of_InitPos_7() { return &___InitPos_7; }
	inline void set_InitPos_7(Vector3_t1581017235  value)
	{
		___InitPos_7 = value;
	}

	inline static int32_t get_offset_of_DistancePassed_8() { return static_cast<int32_t>(offsetof(Tunnel_t1959537664, ___DistancePassed_8)); }
	inline float get_DistancePassed_8() const { return ___DistancePassed_8; }
	inline float* get_address_of_DistancePassed_8() { return &___DistancePassed_8; }
	inline void set_DistancePassed_8(float value)
	{
		___DistancePassed_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TUNNEL_T1959537664_H
#ifndef STEP_T2971935605_H
#define STEP_T2971935605_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Step
struct  Step_t2971935605  : public MonoBehaviour_t4111208580
{
public:
	// UnityEngine.AudioClip Step::StepSound
	AudioClip_t3179250334 * ___StepSound_2;
	// UnityEngine.Transform Step::TrailEffect
	Transform_t2932726396 * ___TrailEffect_3;
	// UnityEngine.Transform Step::TrailEffectCopy
	Transform_t2932726396 * ___TrailEffectCopy_4;
	// System.Boolean Step::OneShot
	bool ___OneShot_5;
	// System.Boolean Step::OneShotState
	bool ___OneShotState_6;
	// System.Boolean Step::AbsolutePosition
	bool ___AbsolutePosition_7;
	// UnityEngine.Vector3 Step::EffectPosition
	Vector3_t1581017235  ___EffectPosition_8;
	// System.Boolean Step::StepState
	bool ___StepState_9;
	// System.Int32 Step::CameraShake
	int32_t ___CameraShake_10;

public:
	inline static int32_t get_offset_of_StepSound_2() { return static_cast<int32_t>(offsetof(Step_t2971935605, ___StepSound_2)); }
	inline AudioClip_t3179250334 * get_StepSound_2() const { return ___StepSound_2; }
	inline AudioClip_t3179250334 ** get_address_of_StepSound_2() { return &___StepSound_2; }
	inline void set_StepSound_2(AudioClip_t3179250334 * value)
	{
		___StepSound_2 = value;
		Il2CppCodeGenWriteBarrier((&___StepSound_2), value);
	}

	inline static int32_t get_offset_of_TrailEffect_3() { return static_cast<int32_t>(offsetof(Step_t2971935605, ___TrailEffect_3)); }
	inline Transform_t2932726396 * get_TrailEffect_3() const { return ___TrailEffect_3; }
	inline Transform_t2932726396 ** get_address_of_TrailEffect_3() { return &___TrailEffect_3; }
	inline void set_TrailEffect_3(Transform_t2932726396 * value)
	{
		___TrailEffect_3 = value;
		Il2CppCodeGenWriteBarrier((&___TrailEffect_3), value);
	}

	inline static int32_t get_offset_of_TrailEffectCopy_4() { return static_cast<int32_t>(offsetof(Step_t2971935605, ___TrailEffectCopy_4)); }
	inline Transform_t2932726396 * get_TrailEffectCopy_4() const { return ___TrailEffectCopy_4; }
	inline Transform_t2932726396 ** get_address_of_TrailEffectCopy_4() { return &___TrailEffectCopy_4; }
	inline void set_TrailEffectCopy_4(Transform_t2932726396 * value)
	{
		___TrailEffectCopy_4 = value;
		Il2CppCodeGenWriteBarrier((&___TrailEffectCopy_4), value);
	}

	inline static int32_t get_offset_of_OneShot_5() { return static_cast<int32_t>(offsetof(Step_t2971935605, ___OneShot_5)); }
	inline bool get_OneShot_5() const { return ___OneShot_5; }
	inline bool* get_address_of_OneShot_5() { return &___OneShot_5; }
	inline void set_OneShot_5(bool value)
	{
		___OneShot_5 = value;
	}

	inline static int32_t get_offset_of_OneShotState_6() { return static_cast<int32_t>(offsetof(Step_t2971935605, ___OneShotState_6)); }
	inline bool get_OneShotState_6() const { return ___OneShotState_6; }
	inline bool* get_address_of_OneShotState_6() { return &___OneShotState_6; }
	inline void set_OneShotState_6(bool value)
	{
		___OneShotState_6 = value;
	}

	inline static int32_t get_offset_of_AbsolutePosition_7() { return static_cast<int32_t>(offsetof(Step_t2971935605, ___AbsolutePosition_7)); }
	inline bool get_AbsolutePosition_7() const { return ___AbsolutePosition_7; }
	inline bool* get_address_of_AbsolutePosition_7() { return &___AbsolutePosition_7; }
	inline void set_AbsolutePosition_7(bool value)
	{
		___AbsolutePosition_7 = value;
	}

	inline static int32_t get_offset_of_EffectPosition_8() { return static_cast<int32_t>(offsetof(Step_t2971935605, ___EffectPosition_8)); }
	inline Vector3_t1581017235  get_EffectPosition_8() const { return ___EffectPosition_8; }
	inline Vector3_t1581017235 * get_address_of_EffectPosition_8() { return &___EffectPosition_8; }
	inline void set_EffectPosition_8(Vector3_t1581017235  value)
	{
		___EffectPosition_8 = value;
	}

	inline static int32_t get_offset_of_StepState_9() { return static_cast<int32_t>(offsetof(Step_t2971935605, ___StepState_9)); }
	inline bool get_StepState_9() const { return ___StepState_9; }
	inline bool* get_address_of_StepState_9() { return &___StepState_9; }
	inline void set_StepState_9(bool value)
	{
		___StepState_9 = value;
	}

	inline static int32_t get_offset_of_CameraShake_10() { return static_cast<int32_t>(offsetof(Step_t2971935605, ___CameraShake_10)); }
	inline int32_t get_CameraShake_10() const { return ___CameraShake_10; }
	inline int32_t* get_address_of_CameraShake_10() { return &___CameraShake_10; }
	inline void set_CameraShake_10(int32_t value)
	{
		___CameraShake_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STEP_T2971935605_H
#ifndef SHAKE_T1680208813_H
#define SHAKE_T1680208813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Shake
struct  Shake_t1680208813  : public MonoBehaviour_t4111208580
{
public:
	// UnityEngine.GameObject Shake::Player
	GameObject_t1251625431 * ___Player_2;
	// UnityEngine.Vector3 Shake::InitPos
	Vector3_t1581017235  ___InitPos_3;
	// System.Int32 Shake::Shake
	int32_t ___Shake_4;
	// UnityEngine.Transform Shake::DebrisEffect
	Transform_t2932726396 * ___DebrisEffect_5;
	// UnityEngine.AudioClip Shake::RumbleSound
	AudioClip_t3179250334 * ___RumbleSound_6;
	// System.Boolean Shake::KeepInitialPosition
	bool ___KeepInitialPosition_7;
	// System.Int32 Shake::ShakeDecay
	int32_t ___ShakeDecay_8;
	// System.Boolean Shake::shaking
	bool ___shaking_9;

public:
	inline static int32_t get_offset_of_Player_2() { return static_cast<int32_t>(offsetof(Shake_t1680208813, ___Player_2)); }
	inline GameObject_t1251625431 * get_Player_2() const { return ___Player_2; }
	inline GameObject_t1251625431 ** get_address_of_Player_2() { return &___Player_2; }
	inline void set_Player_2(GameObject_t1251625431 * value)
	{
		___Player_2 = value;
		Il2CppCodeGenWriteBarrier((&___Player_2), value);
	}

	inline static int32_t get_offset_of_InitPos_3() { return static_cast<int32_t>(offsetof(Shake_t1680208813, ___InitPos_3)); }
	inline Vector3_t1581017235  get_InitPos_3() const { return ___InitPos_3; }
	inline Vector3_t1581017235 * get_address_of_InitPos_3() { return &___InitPos_3; }
	inline void set_InitPos_3(Vector3_t1581017235  value)
	{
		___InitPos_3 = value;
	}

	inline static int32_t get_offset_of_Shake_4() { return static_cast<int32_t>(offsetof(Shake_t1680208813, ___Shake_4)); }
	inline int32_t get_Shake_4() const { return ___Shake_4; }
	inline int32_t* get_address_of_Shake_4() { return &___Shake_4; }
	inline void set_Shake_4(int32_t value)
	{
		___Shake_4 = value;
	}

	inline static int32_t get_offset_of_DebrisEffect_5() { return static_cast<int32_t>(offsetof(Shake_t1680208813, ___DebrisEffect_5)); }
	inline Transform_t2932726396 * get_DebrisEffect_5() const { return ___DebrisEffect_5; }
	inline Transform_t2932726396 ** get_address_of_DebrisEffect_5() { return &___DebrisEffect_5; }
	inline void set_DebrisEffect_5(Transform_t2932726396 * value)
	{
		___DebrisEffect_5 = value;
		Il2CppCodeGenWriteBarrier((&___DebrisEffect_5), value);
	}

	inline static int32_t get_offset_of_RumbleSound_6() { return static_cast<int32_t>(offsetof(Shake_t1680208813, ___RumbleSound_6)); }
	inline AudioClip_t3179250334 * get_RumbleSound_6() const { return ___RumbleSound_6; }
	inline AudioClip_t3179250334 ** get_address_of_RumbleSound_6() { return &___RumbleSound_6; }
	inline void set_RumbleSound_6(AudioClip_t3179250334 * value)
	{
		___RumbleSound_6 = value;
		Il2CppCodeGenWriteBarrier((&___RumbleSound_6), value);
	}

	inline static int32_t get_offset_of_KeepInitialPosition_7() { return static_cast<int32_t>(offsetof(Shake_t1680208813, ___KeepInitialPosition_7)); }
	inline bool get_KeepInitialPosition_7() const { return ___KeepInitialPosition_7; }
	inline bool* get_address_of_KeepInitialPosition_7() { return &___KeepInitialPosition_7; }
	inline void set_KeepInitialPosition_7(bool value)
	{
		___KeepInitialPosition_7 = value;
	}

	inline static int32_t get_offset_of_ShakeDecay_8() { return static_cast<int32_t>(offsetof(Shake_t1680208813, ___ShakeDecay_8)); }
	inline int32_t get_ShakeDecay_8() const { return ___ShakeDecay_8; }
	inline int32_t* get_address_of_ShakeDecay_8() { return &___ShakeDecay_8; }
	inline void set_ShakeDecay_8(int32_t value)
	{
		___ShakeDecay_8 = value;
	}

	inline static int32_t get_offset_of_shaking_9() { return static_cast<int32_t>(offsetof(Shake_t1680208813, ___shaking_9)); }
	inline bool get_shaking_9() const { return ___shaking_9; }
	inline bool* get_address_of_shaking_9() { return &___shaking_9; }
	inline void set_shaking_9(bool value)
	{
		___shaking_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHAKE_T1680208813_H
#ifndef SCORESCREEN_T1438327479_H
#define SCORESCREEN_T1438327479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScoreScreen
struct  ScoreScreen_t1438327479  : public MonoBehaviour_t4111208580
{
public:
	// UnityEngine.GUISkin ScoreScreen::GUIskin
	GUISkin_t2878378263 * ___GUIskin_2;
	// System.Single ScoreScreen::originalWidth
	float ___originalWidth_3;
	// System.Single ScoreScreen::originalHeight
	float ___originalHeight_4;
	// UnityEngine.Vector3 ScoreScreen::scale
	Vector3_t1581017235  ___scale_5;
	// System.Int32 ScoreScreen::smallBoxHeight
	int32_t ___smallBoxHeight_6;
	// System.Int32 ScoreScreen::smallBoxWidth
	int32_t ___smallBoxWidth_7;
	// System.Int32 ScoreScreen::ButtonHeight
	int32_t ___ButtonHeight_8;
	// System.Int32 ScoreScreen::ButtonWidth
	int32_t ___ButtonWidth_9;
	// System.Int32 ScoreScreen::GemValue
	int32_t ___GemValue_10;
	// System.Int32 ScoreScreen::DistanceValue
	int32_t ___DistanceValue_11;
	// System.Single ScoreScreen::TotalDistance
	float ___TotalDistance_12;
	// System.Single ScoreScreen::TotalDistanceCurrent
	float ___TotalDistanceCurrent_13;
	// System.Int32 ScoreScreen::TotalGems
	int32_t ___TotalGems_14;
	// System.Int32 ScoreScreen::TotalGemsCurrent
	int32_t ___TotalGemsCurrent_15;
	// System.Single ScoreScreen::TotalScore
	float ___TotalScore_16;
	// System.Single ScoreScreen::TotalScoreCurrent
	float ___TotalScoreCurrent_17;
	// System.Boolean ScoreScreen::HasSubmittedScore
	bool ___HasSubmittedScore_18;

public:
	inline static int32_t get_offset_of_GUIskin_2() { return static_cast<int32_t>(offsetof(ScoreScreen_t1438327479, ___GUIskin_2)); }
	inline GUISkin_t2878378263 * get_GUIskin_2() const { return ___GUIskin_2; }
	inline GUISkin_t2878378263 ** get_address_of_GUIskin_2() { return &___GUIskin_2; }
	inline void set_GUIskin_2(GUISkin_t2878378263 * value)
	{
		___GUIskin_2 = value;
		Il2CppCodeGenWriteBarrier((&___GUIskin_2), value);
	}

	inline static int32_t get_offset_of_originalWidth_3() { return static_cast<int32_t>(offsetof(ScoreScreen_t1438327479, ___originalWidth_3)); }
	inline float get_originalWidth_3() const { return ___originalWidth_3; }
	inline float* get_address_of_originalWidth_3() { return &___originalWidth_3; }
	inline void set_originalWidth_3(float value)
	{
		___originalWidth_3 = value;
	}

	inline static int32_t get_offset_of_originalHeight_4() { return static_cast<int32_t>(offsetof(ScoreScreen_t1438327479, ___originalHeight_4)); }
	inline float get_originalHeight_4() const { return ___originalHeight_4; }
	inline float* get_address_of_originalHeight_4() { return &___originalHeight_4; }
	inline void set_originalHeight_4(float value)
	{
		___originalHeight_4 = value;
	}

	inline static int32_t get_offset_of_scale_5() { return static_cast<int32_t>(offsetof(ScoreScreen_t1438327479, ___scale_5)); }
	inline Vector3_t1581017235  get_scale_5() const { return ___scale_5; }
	inline Vector3_t1581017235 * get_address_of_scale_5() { return &___scale_5; }
	inline void set_scale_5(Vector3_t1581017235  value)
	{
		___scale_5 = value;
	}

	inline static int32_t get_offset_of_smallBoxHeight_6() { return static_cast<int32_t>(offsetof(ScoreScreen_t1438327479, ___smallBoxHeight_6)); }
	inline int32_t get_smallBoxHeight_6() const { return ___smallBoxHeight_6; }
	inline int32_t* get_address_of_smallBoxHeight_6() { return &___smallBoxHeight_6; }
	inline void set_smallBoxHeight_6(int32_t value)
	{
		___smallBoxHeight_6 = value;
	}

	inline static int32_t get_offset_of_smallBoxWidth_7() { return static_cast<int32_t>(offsetof(ScoreScreen_t1438327479, ___smallBoxWidth_7)); }
	inline int32_t get_smallBoxWidth_7() const { return ___smallBoxWidth_7; }
	inline int32_t* get_address_of_smallBoxWidth_7() { return &___smallBoxWidth_7; }
	inline void set_smallBoxWidth_7(int32_t value)
	{
		___smallBoxWidth_7 = value;
	}

	inline static int32_t get_offset_of_ButtonHeight_8() { return static_cast<int32_t>(offsetof(ScoreScreen_t1438327479, ___ButtonHeight_8)); }
	inline int32_t get_ButtonHeight_8() const { return ___ButtonHeight_8; }
	inline int32_t* get_address_of_ButtonHeight_8() { return &___ButtonHeight_8; }
	inline void set_ButtonHeight_8(int32_t value)
	{
		___ButtonHeight_8 = value;
	}

	inline static int32_t get_offset_of_ButtonWidth_9() { return static_cast<int32_t>(offsetof(ScoreScreen_t1438327479, ___ButtonWidth_9)); }
	inline int32_t get_ButtonWidth_9() const { return ___ButtonWidth_9; }
	inline int32_t* get_address_of_ButtonWidth_9() { return &___ButtonWidth_9; }
	inline void set_ButtonWidth_9(int32_t value)
	{
		___ButtonWidth_9 = value;
	}

	inline static int32_t get_offset_of_GemValue_10() { return static_cast<int32_t>(offsetof(ScoreScreen_t1438327479, ___GemValue_10)); }
	inline int32_t get_GemValue_10() const { return ___GemValue_10; }
	inline int32_t* get_address_of_GemValue_10() { return &___GemValue_10; }
	inline void set_GemValue_10(int32_t value)
	{
		___GemValue_10 = value;
	}

	inline static int32_t get_offset_of_DistanceValue_11() { return static_cast<int32_t>(offsetof(ScoreScreen_t1438327479, ___DistanceValue_11)); }
	inline int32_t get_DistanceValue_11() const { return ___DistanceValue_11; }
	inline int32_t* get_address_of_DistanceValue_11() { return &___DistanceValue_11; }
	inline void set_DistanceValue_11(int32_t value)
	{
		___DistanceValue_11 = value;
	}

	inline static int32_t get_offset_of_TotalDistance_12() { return static_cast<int32_t>(offsetof(ScoreScreen_t1438327479, ___TotalDistance_12)); }
	inline float get_TotalDistance_12() const { return ___TotalDistance_12; }
	inline float* get_address_of_TotalDistance_12() { return &___TotalDistance_12; }
	inline void set_TotalDistance_12(float value)
	{
		___TotalDistance_12 = value;
	}

	inline static int32_t get_offset_of_TotalDistanceCurrent_13() { return static_cast<int32_t>(offsetof(ScoreScreen_t1438327479, ___TotalDistanceCurrent_13)); }
	inline float get_TotalDistanceCurrent_13() const { return ___TotalDistanceCurrent_13; }
	inline float* get_address_of_TotalDistanceCurrent_13() { return &___TotalDistanceCurrent_13; }
	inline void set_TotalDistanceCurrent_13(float value)
	{
		___TotalDistanceCurrent_13 = value;
	}

	inline static int32_t get_offset_of_TotalGems_14() { return static_cast<int32_t>(offsetof(ScoreScreen_t1438327479, ___TotalGems_14)); }
	inline int32_t get_TotalGems_14() const { return ___TotalGems_14; }
	inline int32_t* get_address_of_TotalGems_14() { return &___TotalGems_14; }
	inline void set_TotalGems_14(int32_t value)
	{
		___TotalGems_14 = value;
	}

	inline static int32_t get_offset_of_TotalGemsCurrent_15() { return static_cast<int32_t>(offsetof(ScoreScreen_t1438327479, ___TotalGemsCurrent_15)); }
	inline int32_t get_TotalGemsCurrent_15() const { return ___TotalGemsCurrent_15; }
	inline int32_t* get_address_of_TotalGemsCurrent_15() { return &___TotalGemsCurrent_15; }
	inline void set_TotalGemsCurrent_15(int32_t value)
	{
		___TotalGemsCurrent_15 = value;
	}

	inline static int32_t get_offset_of_TotalScore_16() { return static_cast<int32_t>(offsetof(ScoreScreen_t1438327479, ___TotalScore_16)); }
	inline float get_TotalScore_16() const { return ___TotalScore_16; }
	inline float* get_address_of_TotalScore_16() { return &___TotalScore_16; }
	inline void set_TotalScore_16(float value)
	{
		___TotalScore_16 = value;
	}

	inline static int32_t get_offset_of_TotalScoreCurrent_17() { return static_cast<int32_t>(offsetof(ScoreScreen_t1438327479, ___TotalScoreCurrent_17)); }
	inline float get_TotalScoreCurrent_17() const { return ___TotalScoreCurrent_17; }
	inline float* get_address_of_TotalScoreCurrent_17() { return &___TotalScoreCurrent_17; }
	inline void set_TotalScoreCurrent_17(float value)
	{
		___TotalScoreCurrent_17 = value;
	}

	inline static int32_t get_offset_of_HasSubmittedScore_18() { return static_cast<int32_t>(offsetof(ScoreScreen_t1438327479, ___HasSubmittedScore_18)); }
	inline bool get_HasSubmittedScore_18() const { return ___HasSubmittedScore_18; }
	inline bool* get_address_of_HasSubmittedScore_18() { return &___HasSubmittedScore_18; }
	inline void set_HasSubmittedScore_18(bool value)
	{
		___HasSubmittedScore_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCORESCREEN_T1438327479_H
#ifndef PLAYERCONTROLS_T3288450189_H
#define PLAYERCONTROLS_T3288450189_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerControls
struct  PlayerControls_t3288450189  : public MonoBehaviour_t4111208580
{
public:
	// UnityEngine.GameObject PlayerControls::PlatformCreator
	GameObject_t1251625431 * ___PlatformCreator_2;
	// UnityEngine.GameObject PlayerControls::GameController
	GameObject_t1251625431 * ___GameController_3;
	// GameController PlayerControls::gController
	GameController_t3102368722 * ___gController_4;
	// PlatformCreator PlayerControls::pCreator
	PlatformCreator_t3386403704 * ___pCreator_5;
	// System.Single PlayerControls::Speed
	float ___Speed_6;
	// System.Single PlayerControls::MaxSpeed
	float ___MaxSpeed_7;
	// System.Single PlayerControls::Acceleration
	float ___Acceleration_8;
	// UnityEngine.Transform PlayerControls::SpeedEffect
	Transform_t2932726396 * ___SpeedEffect_9;
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
	Transform_t2932726396 * ___PuffEffect_16;
	// System.Object PlayerControls::PuffEffectCopy
	RuntimeObject * ___PuffEffectCopy_17;
	// UnityEngine.Transform PlayerControls::TrailEffect
	Transform_t2932726396 * ___TrailEffect_18;
	// System.Object PlayerControls::TrailEffectCopy
	RuntimeObject * ___TrailEffectCopy_19;
	// UnityEngine.Vector3 PlayerControls::InitPos
	Vector3_t1581017235  ___InitPos_20;
	// UnityEngine.Vector3 PlayerControls::PlayerPos
	Vector3_t1581017235  ___PlayerPos_21;
	// System.Boolean PlayerControls::FellOff
	bool ___FellOff_22;
	// System.Single PlayerControls::FellOffTime
	float ___FellOffTime_23;
	// System.Int32 PlayerControls::JumpState
	int32_t ___JumpState_24;
	// UnityEngine.Transform PlayerControls::CustomCursor
	Transform_t2932726396 * ___CustomCursor_25;
	// UnityEngine.AudioClip PlayerControls::JumpSound
	AudioClip_t3179250334 * ___JumpSound_26;
	// UnityEngine.AudioClip PlayerControls::FallSound
	AudioClip_t3179250334 * ___FallSound_27;
	// UnityEngine.AudioClip PlayerControls::StepSound
	AudioClip_t3179250334 * ___StepSound_28;
	// UnityEngine.AudioClip PlayerControls::CrashSound
	AudioClip_t3179250334 * ___CrashSound_29;
	// System.Single PlayerControls::CameraFollowSpeed
	float ___CameraFollowSpeed_30;
	// System.Single PlayerControls::JumpChange
	float ___JumpChange_31;
	// System.Single PlayerControls::JumpChangeTime
	float ___JumpChangeTime_32;
	// UnityEngine.Quaternion PlayerControls::calibrationQuaternion
	Quaternion_t752163471  ___calibrationQuaternion_33;
	// UnityEngine.Vector3 PlayerControls::currentAcc
	Vector3_t1581017235  ___currentAcc_34;
	// System.Single PlayerControls::accSpeed
	float ___accSpeed_35;
	// UnityEngine.GameObject PlayerControls::lastTouchedPlatform
	GameObject_t1251625431 * ___lastTouchedPlatform_36;
	// System.Boolean PlayerControls::playedFallSound
	bool ___playedFallSound_37;
	// System.Boolean PlayerControls::showAdScreen
	bool ___showAdScreen_38;
	// System.Single PlayerControls::originalWidth
	float ___originalWidth_39;
	// System.Single PlayerControls::originalHeight
	float ___originalHeight_40;
	// UnityEngine.GUISkin PlayerControls::GUIskin
	GUISkin_t2878378263 * ___GUIskin_41;
	// UnityEngine.Texture2D PlayerControls::image
	Texture2D_t3357108006 * ___image_42;
	// System.String PlayerControls::adImageURL
	String_t* ___adImageURL_43;
	// System.String PlayerControls::adWebServiceURL
	String_t* ___adWebServiceURL_44;
	// System.Boolean PlayerControls::isDead
	bool ___isDead_45;
	// System.Boolean PlayerControls::useImageIntoTexture
	bool ___useImageIntoTexture_46;
	// UnityEngine.Texture2D PlayerControls::adImage
	Texture2D_t3357108006 * ___adImage_47;
	// System.String PlayerControls::imgUrl
	String_t* ___imgUrl_48;

public:
	inline static int32_t get_offset_of_PlatformCreator_2() { return static_cast<int32_t>(offsetof(PlayerControls_t3288450189, ___PlatformCreator_2)); }
	inline GameObject_t1251625431 * get_PlatformCreator_2() const { return ___PlatformCreator_2; }
	inline GameObject_t1251625431 ** get_address_of_PlatformCreator_2() { return &___PlatformCreator_2; }
	inline void set_PlatformCreator_2(GameObject_t1251625431 * value)
	{
		___PlatformCreator_2 = value;
		Il2CppCodeGenWriteBarrier((&___PlatformCreator_2), value);
	}

	inline static int32_t get_offset_of_GameController_3() { return static_cast<int32_t>(offsetof(PlayerControls_t3288450189, ___GameController_3)); }
	inline GameObject_t1251625431 * get_GameController_3() const { return ___GameController_3; }
	inline GameObject_t1251625431 ** get_address_of_GameController_3() { return &___GameController_3; }
	inline void set_GameController_3(GameObject_t1251625431 * value)
	{
		___GameController_3 = value;
		Il2CppCodeGenWriteBarrier((&___GameController_3), value);
	}

	inline static int32_t get_offset_of_gController_4() { return static_cast<int32_t>(offsetof(PlayerControls_t3288450189, ___gController_4)); }
	inline GameController_t3102368722 * get_gController_4() const { return ___gController_4; }
	inline GameController_t3102368722 ** get_address_of_gController_4() { return &___gController_4; }
	inline void set_gController_4(GameController_t3102368722 * value)
	{
		___gController_4 = value;
		Il2CppCodeGenWriteBarrier((&___gController_4), value);
	}

	inline static int32_t get_offset_of_pCreator_5() { return static_cast<int32_t>(offsetof(PlayerControls_t3288450189, ___pCreator_5)); }
	inline PlatformCreator_t3386403704 * get_pCreator_5() const { return ___pCreator_5; }
	inline PlatformCreator_t3386403704 ** get_address_of_pCreator_5() { return &___pCreator_5; }
	inline void set_pCreator_5(PlatformCreator_t3386403704 * value)
	{
		___pCreator_5 = value;
		Il2CppCodeGenWriteBarrier((&___pCreator_5), value);
	}

	inline static int32_t get_offset_of_Speed_6() { return static_cast<int32_t>(offsetof(PlayerControls_t3288450189, ___Speed_6)); }
	inline float get_Speed_6() const { return ___Speed_6; }
	inline float* get_address_of_Speed_6() { return &___Speed_6; }
	inline void set_Speed_6(float value)
	{
		___Speed_6 = value;
	}

	inline static int32_t get_offset_of_MaxSpeed_7() { return static_cast<int32_t>(offsetof(PlayerControls_t3288450189, ___MaxSpeed_7)); }
	inline float get_MaxSpeed_7() const { return ___MaxSpeed_7; }
	inline float* get_address_of_MaxSpeed_7() { return &___MaxSpeed_7; }
	inline void set_MaxSpeed_7(float value)
	{
		___MaxSpeed_7 = value;
	}

	inline static int32_t get_offset_of_Acceleration_8() { return static_cast<int32_t>(offsetof(PlayerControls_t3288450189, ___Acceleration_8)); }
	inline float get_Acceleration_8() const { return ___Acceleration_8; }
	inline float* get_address_of_Acceleration_8() { return &___Acceleration_8; }
	inline void set_Acceleration_8(float value)
	{
		___Acceleration_8 = value;
	}

	inline static int32_t get_offset_of_SpeedEffect_9() { return static_cast<int32_t>(offsetof(PlayerControls_t3288450189, ___SpeedEffect_9)); }
	inline Transform_t2932726396 * get_SpeedEffect_9() const { return ___SpeedEffect_9; }
	inline Transform_t2932726396 ** get_address_of_SpeedEffect_9() { return &___SpeedEffect_9; }
	inline void set_SpeedEffect_9(Transform_t2932726396 * value)
	{
		___SpeedEffect_9 = value;
		Il2CppCodeGenWriteBarrier((&___SpeedEffect_9), value);
	}

	inline static int32_t get_offset_of_JumpPower_10() { return static_cast<int32_t>(offsetof(PlayerControls_t3288450189, ___JumpPower_10)); }
	inline float get_JumpPower_10() const { return ___JumpPower_10; }
	inline float* get_address_of_JumpPower_10() { return &___JumpPower_10; }
	inline void set_JumpPower_10(float value)
	{
		___JumpPower_10 = value;
	}

	inline static int32_t get_offset_of_TurningSpeed_11() { return static_cast<int32_t>(offsetof(PlayerControls_t3288450189, ___TurningSpeed_11)); }
	inline float get_TurningSpeed_11() const { return ___TurningSpeed_11; }
	inline float* get_address_of_TurningSpeed_11() { return &___TurningSpeed_11; }
	inline void set_TurningSpeed_11(float value)
	{
		___TurningSpeed_11 = value;
	}

	inline static int32_t get_offset_of_TurnDamping_12() { return static_cast<int32_t>(offsetof(PlayerControls_t3288450189, ___TurnDamping_12)); }
	inline float get_TurnDamping_12() const { return ___TurnDamping_12; }
	inline float* get_address_of_TurnDamping_12() { return &___TurnDamping_12; }
	inline void set_TurnDamping_12(float value)
	{
		___TurnDamping_12 = value;
	}

	inline static int32_t get_offset_of_HitAnimation_13() { return static_cast<int32_t>(offsetof(PlayerControls_t3288450189, ___HitAnimation_13)); }
	inline String_t* get_HitAnimation_13() const { return ___HitAnimation_13; }
	inline String_t** get_address_of_HitAnimation_13() { return &___HitAnimation_13; }
	inline void set_HitAnimation_13(String_t* value)
	{
		___HitAnimation_13 = value;
		Il2CppCodeGenWriteBarrier((&___HitAnimation_13), value);
	}

	inline static int32_t get_offset_of_HitAnimationTime_14() { return static_cast<int32_t>(offsetof(PlayerControls_t3288450189, ___HitAnimationTime_14)); }
	inline float get_HitAnimationTime_14() const { return ___HitAnimationTime_14; }
	inline float* get_address_of_HitAnimationTime_14() { return &___HitAnimationTime_14; }
	inline void set_HitAnimationTime_14(float value)
	{
		___HitAnimationTime_14 = value;
	}

	inline static int32_t get_offset_of_MovementLimits_15() { return static_cast<int32_t>(offsetof(PlayerControls_t3288450189, ___MovementLimits_15)); }
	inline float get_MovementLimits_15() const { return ___MovementLimits_15; }
	inline float* get_address_of_MovementLimits_15() { return &___MovementLimits_15; }
	inline void set_MovementLimits_15(float value)
	{
		___MovementLimits_15 = value;
	}

	inline static int32_t get_offset_of_PuffEffect_16() { return static_cast<int32_t>(offsetof(PlayerControls_t3288450189, ___PuffEffect_16)); }
	inline Transform_t2932726396 * get_PuffEffect_16() const { return ___PuffEffect_16; }
	inline Transform_t2932726396 ** get_address_of_PuffEffect_16() { return &___PuffEffect_16; }
	inline void set_PuffEffect_16(Transform_t2932726396 * value)
	{
		___PuffEffect_16 = value;
		Il2CppCodeGenWriteBarrier((&___PuffEffect_16), value);
	}

	inline static int32_t get_offset_of_PuffEffectCopy_17() { return static_cast<int32_t>(offsetof(PlayerControls_t3288450189, ___PuffEffectCopy_17)); }
	inline RuntimeObject * get_PuffEffectCopy_17() const { return ___PuffEffectCopy_17; }
	inline RuntimeObject ** get_address_of_PuffEffectCopy_17() { return &___PuffEffectCopy_17; }
	inline void set_PuffEffectCopy_17(RuntimeObject * value)
	{
		___PuffEffectCopy_17 = value;
		Il2CppCodeGenWriteBarrier((&___PuffEffectCopy_17), value);
	}

	inline static int32_t get_offset_of_TrailEffect_18() { return static_cast<int32_t>(offsetof(PlayerControls_t3288450189, ___TrailEffect_18)); }
	inline Transform_t2932726396 * get_TrailEffect_18() const { return ___TrailEffect_18; }
	inline Transform_t2932726396 ** get_address_of_TrailEffect_18() { return &___TrailEffect_18; }
	inline void set_TrailEffect_18(Transform_t2932726396 * value)
	{
		___TrailEffect_18 = value;
		Il2CppCodeGenWriteBarrier((&___TrailEffect_18), value);
	}

	inline static int32_t get_offset_of_TrailEffectCopy_19() { return static_cast<int32_t>(offsetof(PlayerControls_t3288450189, ___TrailEffectCopy_19)); }
	inline RuntimeObject * get_TrailEffectCopy_19() const { return ___TrailEffectCopy_19; }
	inline RuntimeObject ** get_address_of_TrailEffectCopy_19() { return &___TrailEffectCopy_19; }
	inline void set_TrailEffectCopy_19(RuntimeObject * value)
	{
		___TrailEffectCopy_19 = value;
		Il2CppCodeGenWriteBarrier((&___TrailEffectCopy_19), value);
	}

	inline static int32_t get_offset_of_InitPos_20() { return static_cast<int32_t>(offsetof(PlayerControls_t3288450189, ___InitPos_20)); }
	inline Vector3_t1581017235  get_InitPos_20() const { return ___InitPos_20; }
	inline Vector3_t1581017235 * get_address_of_InitPos_20() { return &___InitPos_20; }
	inline void set_InitPos_20(Vector3_t1581017235  value)
	{
		___InitPos_20 = value;
	}

	inline static int32_t get_offset_of_PlayerPos_21() { return static_cast<int32_t>(offsetof(PlayerControls_t3288450189, ___PlayerPos_21)); }
	inline Vector3_t1581017235  get_PlayerPos_21() const { return ___PlayerPos_21; }
	inline Vector3_t1581017235 * get_address_of_PlayerPos_21() { return &___PlayerPos_21; }
	inline void set_PlayerPos_21(Vector3_t1581017235  value)
	{
		___PlayerPos_21 = value;
	}

	inline static int32_t get_offset_of_FellOff_22() { return static_cast<int32_t>(offsetof(PlayerControls_t3288450189, ___FellOff_22)); }
	inline bool get_FellOff_22() const { return ___FellOff_22; }
	inline bool* get_address_of_FellOff_22() { return &___FellOff_22; }
	inline void set_FellOff_22(bool value)
	{
		___FellOff_22 = value;
	}

	inline static int32_t get_offset_of_FellOffTime_23() { return static_cast<int32_t>(offsetof(PlayerControls_t3288450189, ___FellOffTime_23)); }
	inline float get_FellOffTime_23() const { return ___FellOffTime_23; }
	inline float* get_address_of_FellOffTime_23() { return &___FellOffTime_23; }
	inline void set_FellOffTime_23(float value)
	{
		___FellOffTime_23 = value;
	}

	inline static int32_t get_offset_of_JumpState_24() { return static_cast<int32_t>(offsetof(PlayerControls_t3288450189, ___JumpState_24)); }
	inline int32_t get_JumpState_24() const { return ___JumpState_24; }
	inline int32_t* get_address_of_JumpState_24() { return &___JumpState_24; }
	inline void set_JumpState_24(int32_t value)
	{
		___JumpState_24 = value;
	}

	inline static int32_t get_offset_of_CustomCursor_25() { return static_cast<int32_t>(offsetof(PlayerControls_t3288450189, ___CustomCursor_25)); }
	inline Transform_t2932726396 * get_CustomCursor_25() const { return ___CustomCursor_25; }
	inline Transform_t2932726396 ** get_address_of_CustomCursor_25() { return &___CustomCursor_25; }
	inline void set_CustomCursor_25(Transform_t2932726396 * value)
	{
		___CustomCursor_25 = value;
		Il2CppCodeGenWriteBarrier((&___CustomCursor_25), value);
	}

	inline static int32_t get_offset_of_JumpSound_26() { return static_cast<int32_t>(offsetof(PlayerControls_t3288450189, ___JumpSound_26)); }
	inline AudioClip_t3179250334 * get_JumpSound_26() const { return ___JumpSound_26; }
	inline AudioClip_t3179250334 ** get_address_of_JumpSound_26() { return &___JumpSound_26; }
	inline void set_JumpSound_26(AudioClip_t3179250334 * value)
	{
		___JumpSound_26 = value;
		Il2CppCodeGenWriteBarrier((&___JumpSound_26), value);
	}

	inline static int32_t get_offset_of_FallSound_27() { return static_cast<int32_t>(offsetof(PlayerControls_t3288450189, ___FallSound_27)); }
	inline AudioClip_t3179250334 * get_FallSound_27() const { return ___FallSound_27; }
	inline AudioClip_t3179250334 ** get_address_of_FallSound_27() { return &___FallSound_27; }
	inline void set_FallSound_27(AudioClip_t3179250334 * value)
	{
		___FallSound_27 = value;
		Il2CppCodeGenWriteBarrier((&___FallSound_27), value);
	}

	inline static int32_t get_offset_of_StepSound_28() { return static_cast<int32_t>(offsetof(PlayerControls_t3288450189, ___StepSound_28)); }
	inline AudioClip_t3179250334 * get_StepSound_28() const { return ___StepSound_28; }
	inline AudioClip_t3179250334 ** get_address_of_StepSound_28() { return &___StepSound_28; }
	inline void set_StepSound_28(AudioClip_t3179250334 * value)
	{
		___StepSound_28 = value;
		Il2CppCodeGenWriteBarrier((&___StepSound_28), value);
	}

	inline static int32_t get_offset_of_CrashSound_29() { return static_cast<int32_t>(offsetof(PlayerControls_t3288450189, ___CrashSound_29)); }
	inline AudioClip_t3179250334 * get_CrashSound_29() const { return ___CrashSound_29; }
	inline AudioClip_t3179250334 ** get_address_of_CrashSound_29() { return &___CrashSound_29; }
	inline void set_CrashSound_29(AudioClip_t3179250334 * value)
	{
		___CrashSound_29 = value;
		Il2CppCodeGenWriteBarrier((&___CrashSound_29), value);
	}

	inline static int32_t get_offset_of_CameraFollowSpeed_30() { return static_cast<int32_t>(offsetof(PlayerControls_t3288450189, ___CameraFollowSpeed_30)); }
	inline float get_CameraFollowSpeed_30() const { return ___CameraFollowSpeed_30; }
	inline float* get_address_of_CameraFollowSpeed_30() { return &___CameraFollowSpeed_30; }
	inline void set_CameraFollowSpeed_30(float value)
	{
		___CameraFollowSpeed_30 = value;
	}

	inline static int32_t get_offset_of_JumpChange_31() { return static_cast<int32_t>(offsetof(PlayerControls_t3288450189, ___JumpChange_31)); }
	inline float get_JumpChange_31() const { return ___JumpChange_31; }
	inline float* get_address_of_JumpChange_31() { return &___JumpChange_31; }
	inline void set_JumpChange_31(float value)
	{
		___JumpChange_31 = value;
	}

	inline static int32_t get_offset_of_JumpChangeTime_32() { return static_cast<int32_t>(offsetof(PlayerControls_t3288450189, ___JumpChangeTime_32)); }
	inline float get_JumpChangeTime_32() const { return ___JumpChangeTime_32; }
	inline float* get_address_of_JumpChangeTime_32() { return &___JumpChangeTime_32; }
	inline void set_JumpChangeTime_32(float value)
	{
		___JumpChangeTime_32 = value;
	}

	inline static int32_t get_offset_of_calibrationQuaternion_33() { return static_cast<int32_t>(offsetof(PlayerControls_t3288450189, ___calibrationQuaternion_33)); }
	inline Quaternion_t752163471  get_calibrationQuaternion_33() const { return ___calibrationQuaternion_33; }
	inline Quaternion_t752163471 * get_address_of_calibrationQuaternion_33() { return &___calibrationQuaternion_33; }
	inline void set_calibrationQuaternion_33(Quaternion_t752163471  value)
	{
		___calibrationQuaternion_33 = value;
	}

	inline static int32_t get_offset_of_currentAcc_34() { return static_cast<int32_t>(offsetof(PlayerControls_t3288450189, ___currentAcc_34)); }
	inline Vector3_t1581017235  get_currentAcc_34() const { return ___currentAcc_34; }
	inline Vector3_t1581017235 * get_address_of_currentAcc_34() { return &___currentAcc_34; }
	inline void set_currentAcc_34(Vector3_t1581017235  value)
	{
		___currentAcc_34 = value;
	}

	inline static int32_t get_offset_of_accSpeed_35() { return static_cast<int32_t>(offsetof(PlayerControls_t3288450189, ___accSpeed_35)); }
	inline float get_accSpeed_35() const { return ___accSpeed_35; }
	inline float* get_address_of_accSpeed_35() { return &___accSpeed_35; }
	inline void set_accSpeed_35(float value)
	{
		___accSpeed_35 = value;
	}

	inline static int32_t get_offset_of_lastTouchedPlatform_36() { return static_cast<int32_t>(offsetof(PlayerControls_t3288450189, ___lastTouchedPlatform_36)); }
	inline GameObject_t1251625431 * get_lastTouchedPlatform_36() const { return ___lastTouchedPlatform_36; }
	inline GameObject_t1251625431 ** get_address_of_lastTouchedPlatform_36() { return &___lastTouchedPlatform_36; }
	inline void set_lastTouchedPlatform_36(GameObject_t1251625431 * value)
	{
		___lastTouchedPlatform_36 = value;
		Il2CppCodeGenWriteBarrier((&___lastTouchedPlatform_36), value);
	}

	inline static int32_t get_offset_of_playedFallSound_37() { return static_cast<int32_t>(offsetof(PlayerControls_t3288450189, ___playedFallSound_37)); }
	inline bool get_playedFallSound_37() const { return ___playedFallSound_37; }
	inline bool* get_address_of_playedFallSound_37() { return &___playedFallSound_37; }
	inline void set_playedFallSound_37(bool value)
	{
		___playedFallSound_37 = value;
	}

	inline static int32_t get_offset_of_showAdScreen_38() { return static_cast<int32_t>(offsetof(PlayerControls_t3288450189, ___showAdScreen_38)); }
	inline bool get_showAdScreen_38() const { return ___showAdScreen_38; }
	inline bool* get_address_of_showAdScreen_38() { return &___showAdScreen_38; }
	inline void set_showAdScreen_38(bool value)
	{
		___showAdScreen_38 = value;
	}

	inline static int32_t get_offset_of_originalWidth_39() { return static_cast<int32_t>(offsetof(PlayerControls_t3288450189, ___originalWidth_39)); }
	inline float get_originalWidth_39() const { return ___originalWidth_39; }
	inline float* get_address_of_originalWidth_39() { return &___originalWidth_39; }
	inline void set_originalWidth_39(float value)
	{
		___originalWidth_39 = value;
	}

	inline static int32_t get_offset_of_originalHeight_40() { return static_cast<int32_t>(offsetof(PlayerControls_t3288450189, ___originalHeight_40)); }
	inline float get_originalHeight_40() const { return ___originalHeight_40; }
	inline float* get_address_of_originalHeight_40() { return &___originalHeight_40; }
	inline void set_originalHeight_40(float value)
	{
		___originalHeight_40 = value;
	}

	inline static int32_t get_offset_of_GUIskin_41() { return static_cast<int32_t>(offsetof(PlayerControls_t3288450189, ___GUIskin_41)); }
	inline GUISkin_t2878378263 * get_GUIskin_41() const { return ___GUIskin_41; }
	inline GUISkin_t2878378263 ** get_address_of_GUIskin_41() { return &___GUIskin_41; }
	inline void set_GUIskin_41(GUISkin_t2878378263 * value)
	{
		___GUIskin_41 = value;
		Il2CppCodeGenWriteBarrier((&___GUIskin_41), value);
	}

	inline static int32_t get_offset_of_image_42() { return static_cast<int32_t>(offsetof(PlayerControls_t3288450189, ___image_42)); }
	inline Texture2D_t3357108006 * get_image_42() const { return ___image_42; }
	inline Texture2D_t3357108006 ** get_address_of_image_42() { return &___image_42; }
	inline void set_image_42(Texture2D_t3357108006 * value)
	{
		___image_42 = value;
		Il2CppCodeGenWriteBarrier((&___image_42), value);
	}

	inline static int32_t get_offset_of_adImageURL_43() { return static_cast<int32_t>(offsetof(PlayerControls_t3288450189, ___adImageURL_43)); }
	inline String_t* get_adImageURL_43() const { return ___adImageURL_43; }
	inline String_t** get_address_of_adImageURL_43() { return &___adImageURL_43; }
	inline void set_adImageURL_43(String_t* value)
	{
		___adImageURL_43 = value;
		Il2CppCodeGenWriteBarrier((&___adImageURL_43), value);
	}

	inline static int32_t get_offset_of_adWebServiceURL_44() { return static_cast<int32_t>(offsetof(PlayerControls_t3288450189, ___adWebServiceURL_44)); }
	inline String_t* get_adWebServiceURL_44() const { return ___adWebServiceURL_44; }
	inline String_t** get_address_of_adWebServiceURL_44() { return &___adWebServiceURL_44; }
	inline void set_adWebServiceURL_44(String_t* value)
	{
		___adWebServiceURL_44 = value;
		Il2CppCodeGenWriteBarrier((&___adWebServiceURL_44), value);
	}

	inline static int32_t get_offset_of_isDead_45() { return static_cast<int32_t>(offsetof(PlayerControls_t3288450189, ___isDead_45)); }
	inline bool get_isDead_45() const { return ___isDead_45; }
	inline bool* get_address_of_isDead_45() { return &___isDead_45; }
	inline void set_isDead_45(bool value)
	{
		___isDead_45 = value;
	}

	inline static int32_t get_offset_of_useImageIntoTexture_46() { return static_cast<int32_t>(offsetof(PlayerControls_t3288450189, ___useImageIntoTexture_46)); }
	inline bool get_useImageIntoTexture_46() const { return ___useImageIntoTexture_46; }
	inline bool* get_address_of_useImageIntoTexture_46() { return &___useImageIntoTexture_46; }
	inline void set_useImageIntoTexture_46(bool value)
	{
		___useImageIntoTexture_46 = value;
	}

	inline static int32_t get_offset_of_adImage_47() { return static_cast<int32_t>(offsetof(PlayerControls_t3288450189, ___adImage_47)); }
	inline Texture2D_t3357108006 * get_adImage_47() const { return ___adImage_47; }
	inline Texture2D_t3357108006 ** get_address_of_adImage_47() { return &___adImage_47; }
	inline void set_adImage_47(Texture2D_t3357108006 * value)
	{
		___adImage_47 = value;
		Il2CppCodeGenWriteBarrier((&___adImage_47), value);
	}

	inline static int32_t get_offset_of_imgUrl_48() { return static_cast<int32_t>(offsetof(PlayerControls_t3288450189, ___imgUrl_48)); }
	inline String_t* get_imgUrl_48() const { return ___imgUrl_48; }
	inline String_t** get_address_of_imgUrl_48() { return &___imgUrl_48; }
	inline void set_imgUrl_48(String_t* value)
	{
		___imgUrl_48 = value;
		Il2CppCodeGenWriteBarrier((&___imgUrl_48), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERCONTROLS_T3288450189_H
#ifndef PLATFORMCREATOR_T3386403704_H
#define PLATFORMCREATOR_T3386403704_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlatformCreator
struct  PlatformCreator_t3386403704  : public MonoBehaviour_t4111208580
{
public:
	// UnityEngine.GameObject PlatformCreator::Player
	GameObject_t1251625431 * ___Player_2;
	// System.Int32 PlatformCreator::NumberOfPlatforms
	int32_t ___NumberOfPlatforms_3;
	// System.Int32 PlatformCreator::PlatformIndex
	int32_t ___PlatformIndex_4;
	// UnityEngine.Transform PlatformCreator::NewPlatform
	Transform_t2932726396 * ___NewPlatform_5;
	// UnityEngine.Transform PlatformCreator::NewPlatformCopy
	Transform_t2932726396 * ___NewPlatformCopy_6;
	// System.Int32 PlatformCreator::SectionLength
	int32_t ___SectionLength_7;
	// UnityEngine.Transform[] PlatformCreator::SectionEdge
	TransformU5BU5D_t3144966165* ___SectionEdge_8;
	// UnityEngine.Transform[] PlatformCreator::SectionMiddle
	TransformU5BU5D_t3144966165* ___SectionMiddle_9;
	// System.Int32 PlatformCreator::SectionIndex
	int32_t ___SectionIndex_10;
	// UnityEngine.GameObject PlatformCreator::SectionCopy
	GameObject_t1251625431 * ___SectionCopy_11;
	// UnityEngine.Vector2 PlatformCreator::PlatformWidthRange
	Vector2_t3168986486  ___PlatformWidthRange_12;
	// System.Single PlatformCreator::PlatformWidth
	float ___PlatformWidth_13;
	// UnityEngine.Vector2 PlatformCreator::PlatformLengthRange
	Vector2_t3168986486  ___PlatformLengthRange_14;
	// System.Int32 PlatformCreator::PlatformLength
	int32_t ___PlatformLength_15;
	// System.Int32 PlatformCreator::PlatformOldLength
	int32_t ___PlatformOldLength_16;
	// UnityEngine.Vector2 PlatformCreator::PlatformHeightRange
	Vector2_t3168986486  ___PlatformHeightRange_17;
	// System.Int32 PlatformCreator::PlatformHeight
	int32_t ___PlatformHeight_18;
	// UnityEngine.Vector2 PlatformCreator::PlatformGapRange
	Vector2_t3168986486  ___PlatformGapRange_19;
	// System.Int32 PlatformCreator::PlatformGap
	int32_t ___PlatformGap_20;
	// UnityEngine.Vector2 PlatformCreator::PlatformRotateRange
	Vector2_t3168986486  ___PlatformRotateRange_21;
	// System.Int32 PlatformCreator::PlatformRotate
	int32_t ___PlatformRotate_22;
	// UnityEngine.Vector2 PlatformCreator::PlatformShiftRange
	Vector2_t3168986486  ___PlatformShiftRange_23;
	// System.Single PlatformCreator::PlatformShift
	float ___PlatformShift_24;
	// UnityEngine.Transform[] PlatformCreator::Gem
	TransformU5BU5D_t3144966165* ___Gem_25;
	// UnityEngine.GameObject PlatformCreator::GemCopy
	GameObject_t1251625431 * ___GemCopy_26;
	// System.Int32 PlatformCreator::GemIndex
	int32_t ___GemIndex_27;
	// System.Int32 PlatformCreator::GemShift
	int32_t ___GemShift_28;
	// System.Single PlatformCreator::GemRate
	float ___GemRate_29;
	// UnityEngine.Transform[] PlatformCreator::Obstacle
	TransformU5BU5D_t3144966165* ___Obstacle_30;
	// UnityEngine.GameObject PlatformCreator::ObstacleCopy
	GameObject_t1251625431 * ___ObstacleCopy_31;
	// System.Single PlatformCreator::ObstacleRate
	float ___ObstacleRate_32;
	// System.Int32 PlatformCreator::TotalPlatformLength
	int32_t ___TotalPlatformLength_33;
	// System.Int32 PlatformCreator::GemTrail
	int32_t ___GemTrail_34;
	// UnityEngine.Vector2 PlatformCreator::GemTrailRange
	Vector2_t3168986486  ___GemTrailRange_35;
	// Collector PlatformCreator::collector
	Collector_t4049649103 * ___collector_36;

public:
	inline static int32_t get_offset_of_Player_2() { return static_cast<int32_t>(offsetof(PlatformCreator_t3386403704, ___Player_2)); }
	inline GameObject_t1251625431 * get_Player_2() const { return ___Player_2; }
	inline GameObject_t1251625431 ** get_address_of_Player_2() { return &___Player_2; }
	inline void set_Player_2(GameObject_t1251625431 * value)
	{
		___Player_2 = value;
		Il2CppCodeGenWriteBarrier((&___Player_2), value);
	}

	inline static int32_t get_offset_of_NumberOfPlatforms_3() { return static_cast<int32_t>(offsetof(PlatformCreator_t3386403704, ___NumberOfPlatforms_3)); }
	inline int32_t get_NumberOfPlatforms_3() const { return ___NumberOfPlatforms_3; }
	inline int32_t* get_address_of_NumberOfPlatforms_3() { return &___NumberOfPlatforms_3; }
	inline void set_NumberOfPlatforms_3(int32_t value)
	{
		___NumberOfPlatforms_3 = value;
	}

	inline static int32_t get_offset_of_PlatformIndex_4() { return static_cast<int32_t>(offsetof(PlatformCreator_t3386403704, ___PlatformIndex_4)); }
	inline int32_t get_PlatformIndex_4() const { return ___PlatformIndex_4; }
	inline int32_t* get_address_of_PlatformIndex_4() { return &___PlatformIndex_4; }
	inline void set_PlatformIndex_4(int32_t value)
	{
		___PlatformIndex_4 = value;
	}

	inline static int32_t get_offset_of_NewPlatform_5() { return static_cast<int32_t>(offsetof(PlatformCreator_t3386403704, ___NewPlatform_5)); }
	inline Transform_t2932726396 * get_NewPlatform_5() const { return ___NewPlatform_5; }
	inline Transform_t2932726396 ** get_address_of_NewPlatform_5() { return &___NewPlatform_5; }
	inline void set_NewPlatform_5(Transform_t2932726396 * value)
	{
		___NewPlatform_5 = value;
		Il2CppCodeGenWriteBarrier((&___NewPlatform_5), value);
	}

	inline static int32_t get_offset_of_NewPlatformCopy_6() { return static_cast<int32_t>(offsetof(PlatformCreator_t3386403704, ___NewPlatformCopy_6)); }
	inline Transform_t2932726396 * get_NewPlatformCopy_6() const { return ___NewPlatformCopy_6; }
	inline Transform_t2932726396 ** get_address_of_NewPlatformCopy_6() { return &___NewPlatformCopy_6; }
	inline void set_NewPlatformCopy_6(Transform_t2932726396 * value)
	{
		___NewPlatformCopy_6 = value;
		Il2CppCodeGenWriteBarrier((&___NewPlatformCopy_6), value);
	}

	inline static int32_t get_offset_of_SectionLength_7() { return static_cast<int32_t>(offsetof(PlatformCreator_t3386403704, ___SectionLength_7)); }
	inline int32_t get_SectionLength_7() const { return ___SectionLength_7; }
	inline int32_t* get_address_of_SectionLength_7() { return &___SectionLength_7; }
	inline void set_SectionLength_7(int32_t value)
	{
		___SectionLength_7 = value;
	}

	inline static int32_t get_offset_of_SectionEdge_8() { return static_cast<int32_t>(offsetof(PlatformCreator_t3386403704, ___SectionEdge_8)); }
	inline TransformU5BU5D_t3144966165* get_SectionEdge_8() const { return ___SectionEdge_8; }
	inline TransformU5BU5D_t3144966165** get_address_of_SectionEdge_8() { return &___SectionEdge_8; }
	inline void set_SectionEdge_8(TransformU5BU5D_t3144966165* value)
	{
		___SectionEdge_8 = value;
		Il2CppCodeGenWriteBarrier((&___SectionEdge_8), value);
	}

	inline static int32_t get_offset_of_SectionMiddle_9() { return static_cast<int32_t>(offsetof(PlatformCreator_t3386403704, ___SectionMiddle_9)); }
	inline TransformU5BU5D_t3144966165* get_SectionMiddle_9() const { return ___SectionMiddle_9; }
	inline TransformU5BU5D_t3144966165** get_address_of_SectionMiddle_9() { return &___SectionMiddle_9; }
	inline void set_SectionMiddle_9(TransformU5BU5D_t3144966165* value)
	{
		___SectionMiddle_9 = value;
		Il2CppCodeGenWriteBarrier((&___SectionMiddle_9), value);
	}

	inline static int32_t get_offset_of_SectionIndex_10() { return static_cast<int32_t>(offsetof(PlatformCreator_t3386403704, ___SectionIndex_10)); }
	inline int32_t get_SectionIndex_10() const { return ___SectionIndex_10; }
	inline int32_t* get_address_of_SectionIndex_10() { return &___SectionIndex_10; }
	inline void set_SectionIndex_10(int32_t value)
	{
		___SectionIndex_10 = value;
	}

	inline static int32_t get_offset_of_SectionCopy_11() { return static_cast<int32_t>(offsetof(PlatformCreator_t3386403704, ___SectionCopy_11)); }
	inline GameObject_t1251625431 * get_SectionCopy_11() const { return ___SectionCopy_11; }
	inline GameObject_t1251625431 ** get_address_of_SectionCopy_11() { return &___SectionCopy_11; }
	inline void set_SectionCopy_11(GameObject_t1251625431 * value)
	{
		___SectionCopy_11 = value;
		Il2CppCodeGenWriteBarrier((&___SectionCopy_11), value);
	}

	inline static int32_t get_offset_of_PlatformWidthRange_12() { return static_cast<int32_t>(offsetof(PlatformCreator_t3386403704, ___PlatformWidthRange_12)); }
	inline Vector2_t3168986486  get_PlatformWidthRange_12() const { return ___PlatformWidthRange_12; }
	inline Vector2_t3168986486 * get_address_of_PlatformWidthRange_12() { return &___PlatformWidthRange_12; }
	inline void set_PlatformWidthRange_12(Vector2_t3168986486  value)
	{
		___PlatformWidthRange_12 = value;
	}

	inline static int32_t get_offset_of_PlatformWidth_13() { return static_cast<int32_t>(offsetof(PlatformCreator_t3386403704, ___PlatformWidth_13)); }
	inline float get_PlatformWidth_13() const { return ___PlatformWidth_13; }
	inline float* get_address_of_PlatformWidth_13() { return &___PlatformWidth_13; }
	inline void set_PlatformWidth_13(float value)
	{
		___PlatformWidth_13 = value;
	}

	inline static int32_t get_offset_of_PlatformLengthRange_14() { return static_cast<int32_t>(offsetof(PlatformCreator_t3386403704, ___PlatformLengthRange_14)); }
	inline Vector2_t3168986486  get_PlatformLengthRange_14() const { return ___PlatformLengthRange_14; }
	inline Vector2_t3168986486 * get_address_of_PlatformLengthRange_14() { return &___PlatformLengthRange_14; }
	inline void set_PlatformLengthRange_14(Vector2_t3168986486  value)
	{
		___PlatformLengthRange_14 = value;
	}

	inline static int32_t get_offset_of_PlatformLength_15() { return static_cast<int32_t>(offsetof(PlatformCreator_t3386403704, ___PlatformLength_15)); }
	inline int32_t get_PlatformLength_15() const { return ___PlatformLength_15; }
	inline int32_t* get_address_of_PlatformLength_15() { return &___PlatformLength_15; }
	inline void set_PlatformLength_15(int32_t value)
	{
		___PlatformLength_15 = value;
	}

	inline static int32_t get_offset_of_PlatformOldLength_16() { return static_cast<int32_t>(offsetof(PlatformCreator_t3386403704, ___PlatformOldLength_16)); }
	inline int32_t get_PlatformOldLength_16() const { return ___PlatformOldLength_16; }
	inline int32_t* get_address_of_PlatformOldLength_16() { return &___PlatformOldLength_16; }
	inline void set_PlatformOldLength_16(int32_t value)
	{
		___PlatformOldLength_16 = value;
	}

	inline static int32_t get_offset_of_PlatformHeightRange_17() { return static_cast<int32_t>(offsetof(PlatformCreator_t3386403704, ___PlatformHeightRange_17)); }
	inline Vector2_t3168986486  get_PlatformHeightRange_17() const { return ___PlatformHeightRange_17; }
	inline Vector2_t3168986486 * get_address_of_PlatformHeightRange_17() { return &___PlatformHeightRange_17; }
	inline void set_PlatformHeightRange_17(Vector2_t3168986486  value)
	{
		___PlatformHeightRange_17 = value;
	}

	inline static int32_t get_offset_of_PlatformHeight_18() { return static_cast<int32_t>(offsetof(PlatformCreator_t3386403704, ___PlatformHeight_18)); }
	inline int32_t get_PlatformHeight_18() const { return ___PlatformHeight_18; }
	inline int32_t* get_address_of_PlatformHeight_18() { return &___PlatformHeight_18; }
	inline void set_PlatformHeight_18(int32_t value)
	{
		___PlatformHeight_18 = value;
	}

	inline static int32_t get_offset_of_PlatformGapRange_19() { return static_cast<int32_t>(offsetof(PlatformCreator_t3386403704, ___PlatformGapRange_19)); }
	inline Vector2_t3168986486  get_PlatformGapRange_19() const { return ___PlatformGapRange_19; }
	inline Vector2_t3168986486 * get_address_of_PlatformGapRange_19() { return &___PlatformGapRange_19; }
	inline void set_PlatformGapRange_19(Vector2_t3168986486  value)
	{
		___PlatformGapRange_19 = value;
	}

	inline static int32_t get_offset_of_PlatformGap_20() { return static_cast<int32_t>(offsetof(PlatformCreator_t3386403704, ___PlatformGap_20)); }
	inline int32_t get_PlatformGap_20() const { return ___PlatformGap_20; }
	inline int32_t* get_address_of_PlatformGap_20() { return &___PlatformGap_20; }
	inline void set_PlatformGap_20(int32_t value)
	{
		___PlatformGap_20 = value;
	}

	inline static int32_t get_offset_of_PlatformRotateRange_21() { return static_cast<int32_t>(offsetof(PlatformCreator_t3386403704, ___PlatformRotateRange_21)); }
	inline Vector2_t3168986486  get_PlatformRotateRange_21() const { return ___PlatformRotateRange_21; }
	inline Vector2_t3168986486 * get_address_of_PlatformRotateRange_21() { return &___PlatformRotateRange_21; }
	inline void set_PlatformRotateRange_21(Vector2_t3168986486  value)
	{
		___PlatformRotateRange_21 = value;
	}

	inline static int32_t get_offset_of_PlatformRotate_22() { return static_cast<int32_t>(offsetof(PlatformCreator_t3386403704, ___PlatformRotate_22)); }
	inline int32_t get_PlatformRotate_22() const { return ___PlatformRotate_22; }
	inline int32_t* get_address_of_PlatformRotate_22() { return &___PlatformRotate_22; }
	inline void set_PlatformRotate_22(int32_t value)
	{
		___PlatformRotate_22 = value;
	}

	inline static int32_t get_offset_of_PlatformShiftRange_23() { return static_cast<int32_t>(offsetof(PlatformCreator_t3386403704, ___PlatformShiftRange_23)); }
	inline Vector2_t3168986486  get_PlatformShiftRange_23() const { return ___PlatformShiftRange_23; }
	inline Vector2_t3168986486 * get_address_of_PlatformShiftRange_23() { return &___PlatformShiftRange_23; }
	inline void set_PlatformShiftRange_23(Vector2_t3168986486  value)
	{
		___PlatformShiftRange_23 = value;
	}

	inline static int32_t get_offset_of_PlatformShift_24() { return static_cast<int32_t>(offsetof(PlatformCreator_t3386403704, ___PlatformShift_24)); }
	inline float get_PlatformShift_24() const { return ___PlatformShift_24; }
	inline float* get_address_of_PlatformShift_24() { return &___PlatformShift_24; }
	inline void set_PlatformShift_24(float value)
	{
		___PlatformShift_24 = value;
	}

	inline static int32_t get_offset_of_Gem_25() { return static_cast<int32_t>(offsetof(PlatformCreator_t3386403704, ___Gem_25)); }
	inline TransformU5BU5D_t3144966165* get_Gem_25() const { return ___Gem_25; }
	inline TransformU5BU5D_t3144966165** get_address_of_Gem_25() { return &___Gem_25; }
	inline void set_Gem_25(TransformU5BU5D_t3144966165* value)
	{
		___Gem_25 = value;
		Il2CppCodeGenWriteBarrier((&___Gem_25), value);
	}

	inline static int32_t get_offset_of_GemCopy_26() { return static_cast<int32_t>(offsetof(PlatformCreator_t3386403704, ___GemCopy_26)); }
	inline GameObject_t1251625431 * get_GemCopy_26() const { return ___GemCopy_26; }
	inline GameObject_t1251625431 ** get_address_of_GemCopy_26() { return &___GemCopy_26; }
	inline void set_GemCopy_26(GameObject_t1251625431 * value)
	{
		___GemCopy_26 = value;
		Il2CppCodeGenWriteBarrier((&___GemCopy_26), value);
	}

	inline static int32_t get_offset_of_GemIndex_27() { return static_cast<int32_t>(offsetof(PlatformCreator_t3386403704, ___GemIndex_27)); }
	inline int32_t get_GemIndex_27() const { return ___GemIndex_27; }
	inline int32_t* get_address_of_GemIndex_27() { return &___GemIndex_27; }
	inline void set_GemIndex_27(int32_t value)
	{
		___GemIndex_27 = value;
	}

	inline static int32_t get_offset_of_GemShift_28() { return static_cast<int32_t>(offsetof(PlatformCreator_t3386403704, ___GemShift_28)); }
	inline int32_t get_GemShift_28() const { return ___GemShift_28; }
	inline int32_t* get_address_of_GemShift_28() { return &___GemShift_28; }
	inline void set_GemShift_28(int32_t value)
	{
		___GemShift_28 = value;
	}

	inline static int32_t get_offset_of_GemRate_29() { return static_cast<int32_t>(offsetof(PlatformCreator_t3386403704, ___GemRate_29)); }
	inline float get_GemRate_29() const { return ___GemRate_29; }
	inline float* get_address_of_GemRate_29() { return &___GemRate_29; }
	inline void set_GemRate_29(float value)
	{
		___GemRate_29 = value;
	}

	inline static int32_t get_offset_of_Obstacle_30() { return static_cast<int32_t>(offsetof(PlatformCreator_t3386403704, ___Obstacle_30)); }
	inline TransformU5BU5D_t3144966165* get_Obstacle_30() const { return ___Obstacle_30; }
	inline TransformU5BU5D_t3144966165** get_address_of_Obstacle_30() { return &___Obstacle_30; }
	inline void set_Obstacle_30(TransformU5BU5D_t3144966165* value)
	{
		___Obstacle_30 = value;
		Il2CppCodeGenWriteBarrier((&___Obstacle_30), value);
	}

	inline static int32_t get_offset_of_ObstacleCopy_31() { return static_cast<int32_t>(offsetof(PlatformCreator_t3386403704, ___ObstacleCopy_31)); }
	inline GameObject_t1251625431 * get_ObstacleCopy_31() const { return ___ObstacleCopy_31; }
	inline GameObject_t1251625431 ** get_address_of_ObstacleCopy_31() { return &___ObstacleCopy_31; }
	inline void set_ObstacleCopy_31(GameObject_t1251625431 * value)
	{
		___ObstacleCopy_31 = value;
		Il2CppCodeGenWriteBarrier((&___ObstacleCopy_31), value);
	}

	inline static int32_t get_offset_of_ObstacleRate_32() { return static_cast<int32_t>(offsetof(PlatformCreator_t3386403704, ___ObstacleRate_32)); }
	inline float get_ObstacleRate_32() const { return ___ObstacleRate_32; }
	inline float* get_address_of_ObstacleRate_32() { return &___ObstacleRate_32; }
	inline void set_ObstacleRate_32(float value)
	{
		___ObstacleRate_32 = value;
	}

	inline static int32_t get_offset_of_TotalPlatformLength_33() { return static_cast<int32_t>(offsetof(PlatformCreator_t3386403704, ___TotalPlatformLength_33)); }
	inline int32_t get_TotalPlatformLength_33() const { return ___TotalPlatformLength_33; }
	inline int32_t* get_address_of_TotalPlatformLength_33() { return &___TotalPlatformLength_33; }
	inline void set_TotalPlatformLength_33(int32_t value)
	{
		___TotalPlatformLength_33 = value;
	}

	inline static int32_t get_offset_of_GemTrail_34() { return static_cast<int32_t>(offsetof(PlatformCreator_t3386403704, ___GemTrail_34)); }
	inline int32_t get_GemTrail_34() const { return ___GemTrail_34; }
	inline int32_t* get_address_of_GemTrail_34() { return &___GemTrail_34; }
	inline void set_GemTrail_34(int32_t value)
	{
		___GemTrail_34 = value;
	}

	inline static int32_t get_offset_of_GemTrailRange_35() { return static_cast<int32_t>(offsetof(PlatformCreator_t3386403704, ___GemTrailRange_35)); }
	inline Vector2_t3168986486  get_GemTrailRange_35() const { return ___GemTrailRange_35; }
	inline Vector2_t3168986486 * get_address_of_GemTrailRange_35() { return &___GemTrailRange_35; }
	inline void set_GemTrailRange_35(Vector2_t3168986486  value)
	{
		___GemTrailRange_35 = value;
	}

	inline static int32_t get_offset_of_collector_36() { return static_cast<int32_t>(offsetof(PlatformCreator_t3386403704, ___collector_36)); }
	inline Collector_t4049649103 * get_collector_36() const { return ___collector_36; }
	inline Collector_t4049649103 ** get_address_of_collector_36() { return &___collector_36; }
	inline void set_collector_36(Collector_t4049649103 * value)
	{
		___collector_36 = value;
		Il2CppCodeGenWriteBarrier((&___collector_36), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLATFORMCREATOR_T3386403704_H
#ifndef PLATFORM_T1006175244_H
#define PLATFORM_T1006175244_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Platform
struct  Platform_t1006175244  : public MonoBehaviour_t4111208580
{
public:
	// UnityEngine.GameObject Platform::Player
	GameObject_t1251625431 * ___Player_2;
	// UnityEngine.GameObject Platform::PlatformCreator
	GameObject_t1251625431 * ___PlatformCreator_3;
	// System.Single Platform::PlatformSpeed
	float ___PlatformSpeed_4;
	// System.Int32 Platform::obstacleIndex
	int32_t ___obstacleIndex_5;
	// System.Boolean Platform::CreatedPlatform
	bool ___CreatedPlatform_6;
	// System.Int32 Platform::SectionLength
	int32_t ___SectionLength_7;
	// System.Int32 Platform::PlatformLength
	int32_t ___PlatformLength_8;
	// PlatformCreator Platform::kPlatformCreator
	PlatformCreator_t3386403704 * ___kPlatformCreator_9;
	// PlayerControls Platform::kPlayerControls
	PlayerControls_t3288450189 * ___kPlayerControls_10;

public:
	inline static int32_t get_offset_of_Player_2() { return static_cast<int32_t>(offsetof(Platform_t1006175244, ___Player_2)); }
	inline GameObject_t1251625431 * get_Player_2() const { return ___Player_2; }
	inline GameObject_t1251625431 ** get_address_of_Player_2() { return &___Player_2; }
	inline void set_Player_2(GameObject_t1251625431 * value)
	{
		___Player_2 = value;
		Il2CppCodeGenWriteBarrier((&___Player_2), value);
	}

	inline static int32_t get_offset_of_PlatformCreator_3() { return static_cast<int32_t>(offsetof(Platform_t1006175244, ___PlatformCreator_3)); }
	inline GameObject_t1251625431 * get_PlatformCreator_3() const { return ___PlatformCreator_3; }
	inline GameObject_t1251625431 ** get_address_of_PlatformCreator_3() { return &___PlatformCreator_3; }
	inline void set_PlatformCreator_3(GameObject_t1251625431 * value)
	{
		___PlatformCreator_3 = value;
		Il2CppCodeGenWriteBarrier((&___PlatformCreator_3), value);
	}

	inline static int32_t get_offset_of_PlatformSpeed_4() { return static_cast<int32_t>(offsetof(Platform_t1006175244, ___PlatformSpeed_4)); }
	inline float get_PlatformSpeed_4() const { return ___PlatformSpeed_4; }
	inline float* get_address_of_PlatformSpeed_4() { return &___PlatformSpeed_4; }
	inline void set_PlatformSpeed_4(float value)
	{
		___PlatformSpeed_4 = value;
	}

	inline static int32_t get_offset_of_obstacleIndex_5() { return static_cast<int32_t>(offsetof(Platform_t1006175244, ___obstacleIndex_5)); }
	inline int32_t get_obstacleIndex_5() const { return ___obstacleIndex_5; }
	inline int32_t* get_address_of_obstacleIndex_5() { return &___obstacleIndex_5; }
	inline void set_obstacleIndex_5(int32_t value)
	{
		___obstacleIndex_5 = value;
	}

	inline static int32_t get_offset_of_CreatedPlatform_6() { return static_cast<int32_t>(offsetof(Platform_t1006175244, ___CreatedPlatform_6)); }
	inline bool get_CreatedPlatform_6() const { return ___CreatedPlatform_6; }
	inline bool* get_address_of_CreatedPlatform_6() { return &___CreatedPlatform_6; }
	inline void set_CreatedPlatform_6(bool value)
	{
		___CreatedPlatform_6 = value;
	}

	inline static int32_t get_offset_of_SectionLength_7() { return static_cast<int32_t>(offsetof(Platform_t1006175244, ___SectionLength_7)); }
	inline int32_t get_SectionLength_7() const { return ___SectionLength_7; }
	inline int32_t* get_address_of_SectionLength_7() { return &___SectionLength_7; }
	inline void set_SectionLength_7(int32_t value)
	{
		___SectionLength_7 = value;
	}

	inline static int32_t get_offset_of_PlatformLength_8() { return static_cast<int32_t>(offsetof(Platform_t1006175244, ___PlatformLength_8)); }
	inline int32_t get_PlatformLength_8() const { return ___PlatformLength_8; }
	inline int32_t* get_address_of_PlatformLength_8() { return &___PlatformLength_8; }
	inline void set_PlatformLength_8(int32_t value)
	{
		___PlatformLength_8 = value;
	}

	inline static int32_t get_offset_of_kPlatformCreator_9() { return static_cast<int32_t>(offsetof(Platform_t1006175244, ___kPlatformCreator_9)); }
	inline PlatformCreator_t3386403704 * get_kPlatformCreator_9() const { return ___kPlatformCreator_9; }
	inline PlatformCreator_t3386403704 ** get_address_of_kPlatformCreator_9() { return &___kPlatformCreator_9; }
	inline void set_kPlatformCreator_9(PlatformCreator_t3386403704 * value)
	{
		___kPlatformCreator_9 = value;
		Il2CppCodeGenWriteBarrier((&___kPlatformCreator_9), value);
	}

	inline static int32_t get_offset_of_kPlayerControls_10() { return static_cast<int32_t>(offsetof(Platform_t1006175244, ___kPlayerControls_10)); }
	inline PlayerControls_t3288450189 * get_kPlayerControls_10() const { return ___kPlayerControls_10; }
	inline PlayerControls_t3288450189 ** get_address_of_kPlayerControls_10() { return &___kPlayerControls_10; }
	inline void set_kPlayerControls_10(PlayerControls_t3288450189 * value)
	{
		___kPlayerControls_10 = value;
		Il2CppCodeGenWriteBarrier((&___kPlayerControls_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLATFORM_T1006175244_H
#ifndef SHOOTER_T4114374204_H
#define SHOOTER_T4114374204_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Shooter
struct  Shooter_t4114374204  : public MonoBehaviour_t4111208580
{
public:
	// UnityEngine.GameObject Shooter::Player
	GameObject_t1251625431 * ___Player_2;
	// UnityEngine.Transform Shooter::ShotObject
	Transform_t2932726396 * ___ShotObject_3;
	// UnityEngine.Transform Shooter::ShotObjectCopy
	Transform_t2932726396 * ___ShotObjectCopy_4;
	// UnityEngine.Transform Shooter::HitEffect
	Transform_t2932726396 * ___HitEffect_5;
	// System.Single Shooter::ShotSpeed
	float ___ShotSpeed_6;
	// System.Single Shooter::ShotRate
	float ___ShotRate_7;
	// System.Single Shooter::ShotTime
	float ___ShotTime_8;
	// UnityEngine.Vector3 Shooter::ShotOffset
	Vector3_t1581017235  ___ShotOffset_9;
	// System.Single Shooter::DestroyAfter
	float ___DestroyAfter_10;

public:
	inline static int32_t get_offset_of_Player_2() { return static_cast<int32_t>(offsetof(Shooter_t4114374204, ___Player_2)); }
	inline GameObject_t1251625431 * get_Player_2() const { return ___Player_2; }
	inline GameObject_t1251625431 ** get_address_of_Player_2() { return &___Player_2; }
	inline void set_Player_2(GameObject_t1251625431 * value)
	{
		___Player_2 = value;
		Il2CppCodeGenWriteBarrier((&___Player_2), value);
	}

	inline static int32_t get_offset_of_ShotObject_3() { return static_cast<int32_t>(offsetof(Shooter_t4114374204, ___ShotObject_3)); }
	inline Transform_t2932726396 * get_ShotObject_3() const { return ___ShotObject_3; }
	inline Transform_t2932726396 ** get_address_of_ShotObject_3() { return &___ShotObject_3; }
	inline void set_ShotObject_3(Transform_t2932726396 * value)
	{
		___ShotObject_3 = value;
		Il2CppCodeGenWriteBarrier((&___ShotObject_3), value);
	}

	inline static int32_t get_offset_of_ShotObjectCopy_4() { return static_cast<int32_t>(offsetof(Shooter_t4114374204, ___ShotObjectCopy_4)); }
	inline Transform_t2932726396 * get_ShotObjectCopy_4() const { return ___ShotObjectCopy_4; }
	inline Transform_t2932726396 ** get_address_of_ShotObjectCopy_4() { return &___ShotObjectCopy_4; }
	inline void set_ShotObjectCopy_4(Transform_t2932726396 * value)
	{
		___ShotObjectCopy_4 = value;
		Il2CppCodeGenWriteBarrier((&___ShotObjectCopy_4), value);
	}

	inline static int32_t get_offset_of_HitEffect_5() { return static_cast<int32_t>(offsetof(Shooter_t4114374204, ___HitEffect_5)); }
	inline Transform_t2932726396 * get_HitEffect_5() const { return ___HitEffect_5; }
	inline Transform_t2932726396 ** get_address_of_HitEffect_5() { return &___HitEffect_5; }
	inline void set_HitEffect_5(Transform_t2932726396 * value)
	{
		___HitEffect_5 = value;
		Il2CppCodeGenWriteBarrier((&___HitEffect_5), value);
	}

	inline static int32_t get_offset_of_ShotSpeed_6() { return static_cast<int32_t>(offsetof(Shooter_t4114374204, ___ShotSpeed_6)); }
	inline float get_ShotSpeed_6() const { return ___ShotSpeed_6; }
	inline float* get_address_of_ShotSpeed_6() { return &___ShotSpeed_6; }
	inline void set_ShotSpeed_6(float value)
	{
		___ShotSpeed_6 = value;
	}

	inline static int32_t get_offset_of_ShotRate_7() { return static_cast<int32_t>(offsetof(Shooter_t4114374204, ___ShotRate_7)); }
	inline float get_ShotRate_7() const { return ___ShotRate_7; }
	inline float* get_address_of_ShotRate_7() { return &___ShotRate_7; }
	inline void set_ShotRate_7(float value)
	{
		___ShotRate_7 = value;
	}

	inline static int32_t get_offset_of_ShotTime_8() { return static_cast<int32_t>(offsetof(Shooter_t4114374204, ___ShotTime_8)); }
	inline float get_ShotTime_8() const { return ___ShotTime_8; }
	inline float* get_address_of_ShotTime_8() { return &___ShotTime_8; }
	inline void set_ShotTime_8(float value)
	{
		___ShotTime_8 = value;
	}

	inline static int32_t get_offset_of_ShotOffset_9() { return static_cast<int32_t>(offsetof(Shooter_t4114374204, ___ShotOffset_9)); }
	inline Vector3_t1581017235  get_ShotOffset_9() const { return ___ShotOffset_9; }
	inline Vector3_t1581017235 * get_address_of_ShotOffset_9() { return &___ShotOffset_9; }
	inline void set_ShotOffset_9(Vector3_t1581017235  value)
	{
		___ShotOffset_9 = value;
	}

	inline static int32_t get_offset_of_DestroyAfter_10() { return static_cast<int32_t>(offsetof(Shooter_t4114374204, ___DestroyAfter_10)); }
	inline float get_DestroyAfter_10() const { return ___DestroyAfter_10; }
	inline float* get_address_of_DestroyAfter_10() { return &___DestroyAfter_10; }
	inline void set_DestroyAfter_10(float value)
	{
		___DestroyAfter_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHOOTER_T4114374204_H
#ifndef OBSTACLE_T765542605_H
#define OBSTACLE_T765542605_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Obstacle
struct  Obstacle_t765542605  : public MonoBehaviour_t4111208580
{
public:
	// UnityEngine.GameObject Obstacle::Player
	GameObject_t1251625431 * ___Player_2;
	// System.Single Obstacle::SpeedChange
	float ___SpeedChange_3;
	// System.Single Obstacle::SpeedChangeModifier
	float ___SpeedChangeModifier_4;
	// System.Single Obstacle::TurnSpeedChange
	float ___TurnSpeedChange_5;
	// UnityEngine.Vector3 Obstacle::Bounce
	Vector3_t1581017235  ___Bounce_6;
	// System.Single Obstacle::JumpChange
	float ___JumpChange_7;
	// System.Single Obstacle::JumpChangeTime
	float ___JumpChangeTime_8;
	// System.String Obstacle::HitAnimation
	String_t* ___HitAnimation_9;
	// System.Single Obstacle::HitAnimationTime
	float ___HitAnimationTime_10;
	// System.Boolean Obstacle::AnimateObstacle
	bool ___AnimateObstacle_11;
	// System.Boolean Obstacle::HitPlayer
	bool ___HitPlayer_12;
	// UnityEngine.AudioClip Obstacle::HitSound
	AudioClip_t3179250334 * ___HitSound_13;
	// System.Boolean Obstacle::StickToPlayer
	bool ___StickToPlayer_14;
	// System.Boolean Obstacle::StuckToPlayer
	bool ___StuckToPlayer_15;
	// System.Single Obstacle::StickTime
	float ___StickTime_16;
	// UnityEngine.Transform Obstacle::DisperseEffect
	Transform_t2932726396 * ___DisperseEffect_17;
	// System.Boolean Obstacle::LookAtPlayer
	bool ___LookAtPlayer_18;
	// UnityEngine.Vector3 Obstacle::Rotation
	Vector3_t1581017235  ___Rotation_19;
	// UnityEngine.Vector3 Obstacle::Offset
	Vector3_t1581017235  ___Offset_20;
	// PlayerControls Obstacle::kPlayerControls
	PlayerControls_t3288450189 * ___kPlayerControls_21;

public:
	inline static int32_t get_offset_of_Player_2() { return static_cast<int32_t>(offsetof(Obstacle_t765542605, ___Player_2)); }
	inline GameObject_t1251625431 * get_Player_2() const { return ___Player_2; }
	inline GameObject_t1251625431 ** get_address_of_Player_2() { return &___Player_2; }
	inline void set_Player_2(GameObject_t1251625431 * value)
	{
		___Player_2 = value;
		Il2CppCodeGenWriteBarrier((&___Player_2), value);
	}

	inline static int32_t get_offset_of_SpeedChange_3() { return static_cast<int32_t>(offsetof(Obstacle_t765542605, ___SpeedChange_3)); }
	inline float get_SpeedChange_3() const { return ___SpeedChange_3; }
	inline float* get_address_of_SpeedChange_3() { return &___SpeedChange_3; }
	inline void set_SpeedChange_3(float value)
	{
		___SpeedChange_3 = value;
	}

	inline static int32_t get_offset_of_SpeedChangeModifier_4() { return static_cast<int32_t>(offsetof(Obstacle_t765542605, ___SpeedChangeModifier_4)); }
	inline float get_SpeedChangeModifier_4() const { return ___SpeedChangeModifier_4; }
	inline float* get_address_of_SpeedChangeModifier_4() { return &___SpeedChangeModifier_4; }
	inline void set_SpeedChangeModifier_4(float value)
	{
		___SpeedChangeModifier_4 = value;
	}

	inline static int32_t get_offset_of_TurnSpeedChange_5() { return static_cast<int32_t>(offsetof(Obstacle_t765542605, ___TurnSpeedChange_5)); }
	inline float get_TurnSpeedChange_5() const { return ___TurnSpeedChange_5; }
	inline float* get_address_of_TurnSpeedChange_5() { return &___TurnSpeedChange_5; }
	inline void set_TurnSpeedChange_5(float value)
	{
		___TurnSpeedChange_5 = value;
	}

	inline static int32_t get_offset_of_Bounce_6() { return static_cast<int32_t>(offsetof(Obstacle_t765542605, ___Bounce_6)); }
	inline Vector3_t1581017235  get_Bounce_6() const { return ___Bounce_6; }
	inline Vector3_t1581017235 * get_address_of_Bounce_6() { return &___Bounce_6; }
	inline void set_Bounce_6(Vector3_t1581017235  value)
	{
		___Bounce_6 = value;
	}

	inline static int32_t get_offset_of_JumpChange_7() { return static_cast<int32_t>(offsetof(Obstacle_t765542605, ___JumpChange_7)); }
	inline float get_JumpChange_7() const { return ___JumpChange_7; }
	inline float* get_address_of_JumpChange_7() { return &___JumpChange_7; }
	inline void set_JumpChange_7(float value)
	{
		___JumpChange_7 = value;
	}

	inline static int32_t get_offset_of_JumpChangeTime_8() { return static_cast<int32_t>(offsetof(Obstacle_t765542605, ___JumpChangeTime_8)); }
	inline float get_JumpChangeTime_8() const { return ___JumpChangeTime_8; }
	inline float* get_address_of_JumpChangeTime_8() { return &___JumpChangeTime_8; }
	inline void set_JumpChangeTime_8(float value)
	{
		___JumpChangeTime_8 = value;
	}

	inline static int32_t get_offset_of_HitAnimation_9() { return static_cast<int32_t>(offsetof(Obstacle_t765542605, ___HitAnimation_9)); }
	inline String_t* get_HitAnimation_9() const { return ___HitAnimation_9; }
	inline String_t** get_address_of_HitAnimation_9() { return &___HitAnimation_9; }
	inline void set_HitAnimation_9(String_t* value)
	{
		___HitAnimation_9 = value;
		Il2CppCodeGenWriteBarrier((&___HitAnimation_9), value);
	}

	inline static int32_t get_offset_of_HitAnimationTime_10() { return static_cast<int32_t>(offsetof(Obstacle_t765542605, ___HitAnimationTime_10)); }
	inline float get_HitAnimationTime_10() const { return ___HitAnimationTime_10; }
	inline float* get_address_of_HitAnimationTime_10() { return &___HitAnimationTime_10; }
	inline void set_HitAnimationTime_10(float value)
	{
		___HitAnimationTime_10 = value;
	}

	inline static int32_t get_offset_of_AnimateObstacle_11() { return static_cast<int32_t>(offsetof(Obstacle_t765542605, ___AnimateObstacle_11)); }
	inline bool get_AnimateObstacle_11() const { return ___AnimateObstacle_11; }
	inline bool* get_address_of_AnimateObstacle_11() { return &___AnimateObstacle_11; }
	inline void set_AnimateObstacle_11(bool value)
	{
		___AnimateObstacle_11 = value;
	}

	inline static int32_t get_offset_of_HitPlayer_12() { return static_cast<int32_t>(offsetof(Obstacle_t765542605, ___HitPlayer_12)); }
	inline bool get_HitPlayer_12() const { return ___HitPlayer_12; }
	inline bool* get_address_of_HitPlayer_12() { return &___HitPlayer_12; }
	inline void set_HitPlayer_12(bool value)
	{
		___HitPlayer_12 = value;
	}

	inline static int32_t get_offset_of_HitSound_13() { return static_cast<int32_t>(offsetof(Obstacle_t765542605, ___HitSound_13)); }
	inline AudioClip_t3179250334 * get_HitSound_13() const { return ___HitSound_13; }
	inline AudioClip_t3179250334 ** get_address_of_HitSound_13() { return &___HitSound_13; }
	inline void set_HitSound_13(AudioClip_t3179250334 * value)
	{
		___HitSound_13 = value;
		Il2CppCodeGenWriteBarrier((&___HitSound_13), value);
	}

	inline static int32_t get_offset_of_StickToPlayer_14() { return static_cast<int32_t>(offsetof(Obstacle_t765542605, ___StickToPlayer_14)); }
	inline bool get_StickToPlayer_14() const { return ___StickToPlayer_14; }
	inline bool* get_address_of_StickToPlayer_14() { return &___StickToPlayer_14; }
	inline void set_StickToPlayer_14(bool value)
	{
		___StickToPlayer_14 = value;
	}

	inline static int32_t get_offset_of_StuckToPlayer_15() { return static_cast<int32_t>(offsetof(Obstacle_t765542605, ___StuckToPlayer_15)); }
	inline bool get_StuckToPlayer_15() const { return ___StuckToPlayer_15; }
	inline bool* get_address_of_StuckToPlayer_15() { return &___StuckToPlayer_15; }
	inline void set_StuckToPlayer_15(bool value)
	{
		___StuckToPlayer_15 = value;
	}

	inline static int32_t get_offset_of_StickTime_16() { return static_cast<int32_t>(offsetof(Obstacle_t765542605, ___StickTime_16)); }
	inline float get_StickTime_16() const { return ___StickTime_16; }
	inline float* get_address_of_StickTime_16() { return &___StickTime_16; }
	inline void set_StickTime_16(float value)
	{
		___StickTime_16 = value;
	}

	inline static int32_t get_offset_of_DisperseEffect_17() { return static_cast<int32_t>(offsetof(Obstacle_t765542605, ___DisperseEffect_17)); }
	inline Transform_t2932726396 * get_DisperseEffect_17() const { return ___DisperseEffect_17; }
	inline Transform_t2932726396 ** get_address_of_DisperseEffect_17() { return &___DisperseEffect_17; }
	inline void set_DisperseEffect_17(Transform_t2932726396 * value)
	{
		___DisperseEffect_17 = value;
		Il2CppCodeGenWriteBarrier((&___DisperseEffect_17), value);
	}

	inline static int32_t get_offset_of_LookAtPlayer_18() { return static_cast<int32_t>(offsetof(Obstacle_t765542605, ___LookAtPlayer_18)); }
	inline bool get_LookAtPlayer_18() const { return ___LookAtPlayer_18; }
	inline bool* get_address_of_LookAtPlayer_18() { return &___LookAtPlayer_18; }
	inline void set_LookAtPlayer_18(bool value)
	{
		___LookAtPlayer_18 = value;
	}

	inline static int32_t get_offset_of_Rotation_19() { return static_cast<int32_t>(offsetof(Obstacle_t765542605, ___Rotation_19)); }
	inline Vector3_t1581017235  get_Rotation_19() const { return ___Rotation_19; }
	inline Vector3_t1581017235 * get_address_of_Rotation_19() { return &___Rotation_19; }
	inline void set_Rotation_19(Vector3_t1581017235  value)
	{
		___Rotation_19 = value;
	}

	inline static int32_t get_offset_of_Offset_20() { return static_cast<int32_t>(offsetof(Obstacle_t765542605, ___Offset_20)); }
	inline Vector3_t1581017235  get_Offset_20() const { return ___Offset_20; }
	inline Vector3_t1581017235 * get_address_of_Offset_20() { return &___Offset_20; }
	inline void set_Offset_20(Vector3_t1581017235  value)
	{
		___Offset_20 = value;
	}

	inline static int32_t get_offset_of_kPlayerControls_21() { return static_cast<int32_t>(offsetof(Obstacle_t765542605, ___kPlayerControls_21)); }
	inline PlayerControls_t3288450189 * get_kPlayerControls_21() const { return ___kPlayerControls_21; }
	inline PlayerControls_t3288450189 ** get_address_of_kPlayerControls_21() { return &___kPlayerControls_21; }
	inline void set_kPlayerControls_21(PlayerControls_t3288450189 * value)
	{
		___kPlayerControls_21 = value;
		Il2CppCodeGenWriteBarrier((&___kPlayerControls_21), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBSTACLE_T765542605_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1600 = { sizeof (Obstacle_t765542605), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1600[20] = 
{
	Obstacle_t765542605::get_offset_of_Player_2(),
	Obstacle_t765542605::get_offset_of_SpeedChange_3(),
	Obstacle_t765542605::get_offset_of_SpeedChangeModifier_4(),
	Obstacle_t765542605::get_offset_of_TurnSpeedChange_5(),
	Obstacle_t765542605::get_offset_of_Bounce_6(),
	Obstacle_t765542605::get_offset_of_JumpChange_7(),
	Obstacle_t765542605::get_offset_of_JumpChangeTime_8(),
	Obstacle_t765542605::get_offset_of_HitAnimation_9(),
	Obstacle_t765542605::get_offset_of_HitAnimationTime_10(),
	Obstacle_t765542605::get_offset_of_AnimateObstacle_11(),
	Obstacle_t765542605::get_offset_of_HitPlayer_12(),
	Obstacle_t765542605::get_offset_of_HitSound_13(),
	Obstacle_t765542605::get_offset_of_StickToPlayer_14(),
	Obstacle_t765542605::get_offset_of_StuckToPlayer_15(),
	Obstacle_t765542605::get_offset_of_StickTime_16(),
	Obstacle_t765542605::get_offset_of_DisperseEffect_17(),
	Obstacle_t765542605::get_offset_of_LookAtPlayer_18(),
	Obstacle_t765542605::get_offset_of_Rotation_19(),
	Obstacle_t765542605::get_offset_of_Offset_20(),
	Obstacle_t765542605::get_offset_of_kPlayerControls_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1601 = { sizeof (Platform_t1006175244), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1601[9] = 
{
	Platform_t1006175244::get_offset_of_Player_2(),
	Platform_t1006175244::get_offset_of_PlatformCreator_3(),
	Platform_t1006175244::get_offset_of_PlatformSpeed_4(),
	Platform_t1006175244::get_offset_of_obstacleIndex_5(),
	Platform_t1006175244::get_offset_of_CreatedPlatform_6(),
	Platform_t1006175244::get_offset_of_SectionLength_7(),
	Platform_t1006175244::get_offset_of_PlatformLength_8(),
	Platform_t1006175244::get_offset_of_kPlatformCreator_9(),
	Platform_t1006175244::get_offset_of_kPlayerControls_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1602 = { sizeof (PlatformCreator_t3386403704), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1602[35] = 
{
	PlatformCreator_t3386403704::get_offset_of_Player_2(),
	PlatformCreator_t3386403704::get_offset_of_NumberOfPlatforms_3(),
	PlatformCreator_t3386403704::get_offset_of_PlatformIndex_4(),
	PlatformCreator_t3386403704::get_offset_of_NewPlatform_5(),
	PlatformCreator_t3386403704::get_offset_of_NewPlatformCopy_6(),
	PlatformCreator_t3386403704::get_offset_of_SectionLength_7(),
	PlatformCreator_t3386403704::get_offset_of_SectionEdge_8(),
	PlatformCreator_t3386403704::get_offset_of_SectionMiddle_9(),
	PlatformCreator_t3386403704::get_offset_of_SectionIndex_10(),
	PlatformCreator_t3386403704::get_offset_of_SectionCopy_11(),
	PlatformCreator_t3386403704::get_offset_of_PlatformWidthRange_12(),
	PlatformCreator_t3386403704::get_offset_of_PlatformWidth_13(),
	PlatformCreator_t3386403704::get_offset_of_PlatformLengthRange_14(),
	PlatformCreator_t3386403704::get_offset_of_PlatformLength_15(),
	PlatformCreator_t3386403704::get_offset_of_PlatformOldLength_16(),
	PlatformCreator_t3386403704::get_offset_of_PlatformHeightRange_17(),
	PlatformCreator_t3386403704::get_offset_of_PlatformHeight_18(),
	PlatformCreator_t3386403704::get_offset_of_PlatformGapRange_19(),
	PlatformCreator_t3386403704::get_offset_of_PlatformGap_20(),
	PlatformCreator_t3386403704::get_offset_of_PlatformRotateRange_21(),
	PlatformCreator_t3386403704::get_offset_of_PlatformRotate_22(),
	PlatformCreator_t3386403704::get_offset_of_PlatformShiftRange_23(),
	PlatformCreator_t3386403704::get_offset_of_PlatformShift_24(),
	PlatformCreator_t3386403704::get_offset_of_Gem_25(),
	PlatformCreator_t3386403704::get_offset_of_GemCopy_26(),
	PlatformCreator_t3386403704::get_offset_of_GemIndex_27(),
	PlatformCreator_t3386403704::get_offset_of_GemShift_28(),
	PlatformCreator_t3386403704::get_offset_of_GemRate_29(),
	PlatformCreator_t3386403704::get_offset_of_Obstacle_30(),
	PlatformCreator_t3386403704::get_offset_of_ObstacleCopy_31(),
	PlatformCreator_t3386403704::get_offset_of_ObstacleRate_32(),
	PlatformCreator_t3386403704::get_offset_of_TotalPlatformLength_33(),
	PlatformCreator_t3386403704::get_offset_of_GemTrail_34(),
	PlatformCreator_t3386403704::get_offset_of_GemTrailRange_35(),
	PlatformCreator_t3386403704::get_offset_of_collector_36(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1603 = { sizeof (PlayerControls_t3288450189), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1603[47] = 
{
	PlayerControls_t3288450189::get_offset_of_PlatformCreator_2(),
	PlayerControls_t3288450189::get_offset_of_GameController_3(),
	PlayerControls_t3288450189::get_offset_of_gController_4(),
	PlayerControls_t3288450189::get_offset_of_pCreator_5(),
	PlayerControls_t3288450189::get_offset_of_Speed_6(),
	PlayerControls_t3288450189::get_offset_of_MaxSpeed_7(),
	PlayerControls_t3288450189::get_offset_of_Acceleration_8(),
	PlayerControls_t3288450189::get_offset_of_SpeedEffect_9(),
	PlayerControls_t3288450189::get_offset_of_JumpPower_10(),
	PlayerControls_t3288450189::get_offset_of_TurningSpeed_11(),
	PlayerControls_t3288450189::get_offset_of_TurnDamping_12(),
	PlayerControls_t3288450189::get_offset_of_HitAnimation_13(),
	PlayerControls_t3288450189::get_offset_of_HitAnimationTime_14(),
	PlayerControls_t3288450189::get_offset_of_MovementLimits_15(),
	PlayerControls_t3288450189::get_offset_of_PuffEffect_16(),
	PlayerControls_t3288450189::get_offset_of_PuffEffectCopy_17(),
	PlayerControls_t3288450189::get_offset_of_TrailEffect_18(),
	PlayerControls_t3288450189::get_offset_of_TrailEffectCopy_19(),
	PlayerControls_t3288450189::get_offset_of_InitPos_20(),
	PlayerControls_t3288450189::get_offset_of_PlayerPos_21(),
	PlayerControls_t3288450189::get_offset_of_FellOff_22(),
	PlayerControls_t3288450189::get_offset_of_FellOffTime_23(),
	PlayerControls_t3288450189::get_offset_of_JumpState_24(),
	PlayerControls_t3288450189::get_offset_of_CustomCursor_25(),
	PlayerControls_t3288450189::get_offset_of_JumpSound_26(),
	PlayerControls_t3288450189::get_offset_of_FallSound_27(),
	PlayerControls_t3288450189::get_offset_of_StepSound_28(),
	PlayerControls_t3288450189::get_offset_of_CrashSound_29(),
	PlayerControls_t3288450189::get_offset_of_CameraFollowSpeed_30(),
	PlayerControls_t3288450189::get_offset_of_JumpChange_31(),
	PlayerControls_t3288450189::get_offset_of_JumpChangeTime_32(),
	PlayerControls_t3288450189::get_offset_of_calibrationQuaternion_33(),
	PlayerControls_t3288450189::get_offset_of_currentAcc_34(),
	PlayerControls_t3288450189::get_offset_of_accSpeed_35(),
	PlayerControls_t3288450189::get_offset_of_lastTouchedPlatform_36(),
	PlayerControls_t3288450189::get_offset_of_playedFallSound_37(),
	PlayerControls_t3288450189::get_offset_of_showAdScreen_38(),
	PlayerControls_t3288450189::get_offset_of_originalWidth_39(),
	PlayerControls_t3288450189::get_offset_of_originalHeight_40(),
	PlayerControls_t3288450189::get_offset_of_GUIskin_41(),
	PlayerControls_t3288450189::get_offset_of_image_42(),
	PlayerControls_t3288450189::get_offset_of_adImageURL_43(),
	PlayerControls_t3288450189::get_offset_of_adWebServiceURL_44(),
	PlayerControls_t3288450189::get_offset_of_isDead_45(),
	PlayerControls_t3288450189::get_offset_of_useImageIntoTexture_46(),
	PlayerControls_t3288450189::get_offset_of_adImage_47(),
	PlayerControls_t3288450189::get_offset_of_imgUrl_48(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1604 = { sizeof (ScoreScreen_t1438327479), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1604[17] = 
{
	ScoreScreen_t1438327479::get_offset_of_GUIskin_2(),
	ScoreScreen_t1438327479::get_offset_of_originalWidth_3(),
	ScoreScreen_t1438327479::get_offset_of_originalHeight_4(),
	ScoreScreen_t1438327479::get_offset_of_scale_5(),
	ScoreScreen_t1438327479::get_offset_of_smallBoxHeight_6(),
	ScoreScreen_t1438327479::get_offset_of_smallBoxWidth_7(),
	ScoreScreen_t1438327479::get_offset_of_ButtonHeight_8(),
	ScoreScreen_t1438327479::get_offset_of_ButtonWidth_9(),
	ScoreScreen_t1438327479::get_offset_of_GemValue_10(),
	ScoreScreen_t1438327479::get_offset_of_DistanceValue_11(),
	ScoreScreen_t1438327479::get_offset_of_TotalDistance_12(),
	ScoreScreen_t1438327479::get_offset_of_TotalDistanceCurrent_13(),
	ScoreScreen_t1438327479::get_offset_of_TotalGems_14(),
	ScoreScreen_t1438327479::get_offset_of_TotalGemsCurrent_15(),
	ScoreScreen_t1438327479::get_offset_of_TotalScore_16(),
	ScoreScreen_t1438327479::get_offset_of_TotalScoreCurrent_17(),
	ScoreScreen_t1438327479::get_offset_of_HasSubmittedScore_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1605 = { sizeof (U24SubmitScoreU2472_t1852586166), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1605[1] = 
{
	U24SubmitScoreU2472_t1852586166::get_offset_of_U24self_U2475_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1606 = { sizeof (U24_t1282486539), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1606[2] = 
{
	U24_t1282486539::get_offset_of_U24metricsU2473_2(),
	U24_t1282486539::get_offset_of_U24self_U2474_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1607 = { sizeof (Shake_t1680208813), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1607[8] = 
{
	Shake_t1680208813::get_offset_of_Player_2(),
	Shake_t1680208813::get_offset_of_InitPos_3(),
	Shake_t1680208813::get_offset_of_Shake_4(),
	Shake_t1680208813::get_offset_of_DebrisEffect_5(),
	Shake_t1680208813::get_offset_of_RumbleSound_6(),
	Shake_t1680208813::get_offset_of_KeepInitialPosition_7(),
	Shake_t1680208813::get_offset_of_ShakeDecay_8(),
	Shake_t1680208813::get_offset_of_shaking_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1608 = { sizeof (Step_t2971935605), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1608[9] = 
{
	Step_t2971935605::get_offset_of_StepSound_2(),
	Step_t2971935605::get_offset_of_TrailEffect_3(),
	Step_t2971935605::get_offset_of_TrailEffectCopy_4(),
	Step_t2971935605::get_offset_of_OneShot_5(),
	Step_t2971935605::get_offset_of_OneShotState_6(),
	Step_t2971935605::get_offset_of_AbsolutePosition_7(),
	Step_t2971935605::get_offset_of_EffectPosition_8(),
	Step_t2971935605::get_offset_of_StepState_9(),
	Step_t2971935605::get_offset_of_CameraShake_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1609 = { sizeof (Tunnel_t1959537664), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1609[7] = 
{
	Tunnel_t1959537664::get_offset_of_InitialSpeed_2(),
	Tunnel_t1959537664::get_offset_of_TunnelLength_3(),
	Tunnel_t1959537664::get_offset_of_Player_4(),
	Tunnel_t1959537664::get_offset_of_pControls_5(),
	Tunnel_t1959537664::get_offset_of_TunnelSpeed_6(),
	Tunnel_t1959537664::get_offset_of_InitPos_7(),
	Tunnel_t1959537664::get_offset_of_DistancePassed_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1610 = { sizeof (TutorialController_t1763165411), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1610[52] = 
{
	TutorialController_t1763165411::get_offset_of_originalWidth_2(),
	TutorialController_t1763165411::get_offset_of_originalHeight_3(),
	TutorialController_t1763165411::get_offset_of_scale_4(),
	TutorialController_t1763165411::get_offset_of_ButtonHeight_5(),
	TutorialController_t1763165411::get_offset_of_ButtonWidth_6(),
	TutorialController_t1763165411::get_offset_of_boxWidth_7(),
	TutorialController_t1763165411::get_offset_of_boxHeight_8(),
	TutorialController_t1763165411::get_offset_of_smallBoxHeight_9(),
	TutorialController_t1763165411::get_offset_of_smallBoxWidth_10(),
	TutorialController_t1763165411::get_offset_of_bigTextRect_11(),
	TutorialController_t1763165411::get_offset_of_lowerTextRect_12(),
	TutorialController_t1763165411::get_offset_of_leftButtonRect_13(),
	TutorialController_t1763165411::get_offset_of_rightButtonRect_14(),
	TutorialController_t1763165411::get_offset_of_goButtonRect_15(),
	TutorialController_t1763165411::get_offset_of_okButtonRect_16(),
	TutorialController_t1763165411::get_offset_of_gemScoreRect_17(),
	TutorialController_t1763165411::get_offset_of_obstacleDescRect_18(),
	TutorialController_t1763165411::get_offset_of_GUIskin_19(),
	TutorialController_t1763165411::get_offset_of_GUISkin2_20(),
	TutorialController_t1763165411::get_offset_of_deltaPosX_21(),
	TutorialController_t1763165411::get_offset_of_obstaclesCount_22(),
	TutorialController_t1763165411::get_offset_of_gemsNeeded_23(),
	TutorialController_t1763165411::get_offset_of_playerTutorialSpeed_24(),
	TutorialController_t1763165411::get_offset_of_initialTutorialText_25(),
	TutorialController_t1763165411::get_offset_of_jumpTutorialText_26(),
	TutorialController_t1763165411::get_offset_of_moveTutorialText_27(),
	TutorialController_t1763165411::get_offset_of_obstacleTutorialText_28(),
	TutorialController_t1763165411::get_offset_of_scoringTutorialText_29(),
	TutorialController_t1763165411::get_offset_of_exitTutorialText_30(),
	TutorialController_t1763165411::get_offset_of_finishedTutorialText_31(),
	TutorialController_t1763165411::get_offset_of_obstacleInfo_32(),
	TutorialController_t1763165411::get_offset_of_tutorialState_33(),
	TutorialController_t1763165411::get_offset_of_activateElements_34(),
	TutorialController_t1763165411::get_offset_of_player_35(),
	TutorialController_t1763165411::get_offset_of_platformCreator_36(),
	TutorialController_t1763165411::get_offset_of_gameController_37(),
	TutorialController_t1763165411::get_offset_of_collector_38(),
	TutorialController_t1763165411::get_offset_of_tunnel_39(),
	TutorialController_t1763165411::get_offset_of_originalGemRate_40(),
	TutorialController_t1763165411::get_offset_of_originalObstacleRate_41(),
	TutorialController_t1763165411::get_offset_of_originalGemRateChange_42(),
	TutorialController_t1763165411::get_offset_of_originalObstacleRateChange_43(),
	TutorialController_t1763165411::get_offset_of_originalPlayerSpeed_44(),
	TutorialController_t1763165411::get_offset_of_obstaclePlatform_45(),
	TutorialController_t1763165411::get_offset_of_obstacleIndex_46(),
	TutorialController_t1763165411::get_offset_of_platformObstacleList_47(),
	TutorialController_t1763165411::get_offset_of_deferredIndex_48(),
	TutorialController_t1763165411::get_offset_of_firstMoveScreenStep_49(),
	TutorialController_t1763165411::get_offset_of_firstObstacleScreenStep_50(),
	TutorialController_t1763165411::get_offset_of_firstScoreScreenStep_51(),
	TutorialController_t1763165411::get_offset_of_lastFinishScreenStep_52(),
	TutorialController_t1763165411::get_offset_of_inactivePlatforms_53(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1611 = { sizeof (U24WaitU2476_t2127274753), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1611[3] = 
{
	U24WaitU2476_t2127274753::get_offset_of_U24timeU2480_0(),
	U24WaitU2476_t2127274753::get_offset_of_U24nextStateU2481_1(),
	U24WaitU2476_t2127274753::get_offset_of_U24self_U2482_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1612 = { sizeof (U24_t3279685947), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1612[3] = 
{
	U24_t3279685947::get_offset_of_U24timeU2477_2(),
	U24_t3279685947::get_offset_of_U24nextStateU2478_3(),
	U24_t3279685947::get_offset_of_U24self_U2479_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1613 = { sizeof (U24SetDeferredU2483_t3290369842), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1613[3] = 
{
	U24SetDeferredU2483_t3290369842::get_offset_of_U24timeU2487_0(),
	U24SetDeferredU2483_t3290369842::get_offset_of_U24indexU2488_1(),
	U24SetDeferredU2483_t3290369842::get_offset_of_U24self_U2489_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1614 = { sizeof (U24_t2763495600), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1614[3] = 
{
	U24_t2763495600::get_offset_of_U24timeU2484_2(),
	U24_t2763495600::get_offset_of_U24indexU2485_3(),
	U24_t2763495600::get_offset_of_U24self_U2486_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1615 = { sizeof (Decoration_t2811044574), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1615[6] = 
{
	Decoration_t2811044574::get_offset_of_DecorObject_2(),
	Decoration_t2811044574::get_offset_of_DecorObjectCopy_3(),
	Decoration_t2811044574::get_offset_of_RotationRangeX_4(),
	Decoration_t2811044574::get_offset_of_RotationRangeY_5(),
	Decoration_t2811044574::get_offset_of_RotationRangeZ_6(),
	Decoration_t2811044574::get_offset_of_EmptyChance_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1616 = { sizeof (Flow_t2950641762), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1616[2] = 
{
	Flow_t2950641762::get_offset_of_Offset_2(),
	Flow_t2950641762::get_offset_of_CurrentOffset_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1617 = { sizeof (Shooter_t4114374204), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1617[9] = 
{
	Shooter_t4114374204::get_offset_of_Player_2(),
	Shooter_t4114374204::get_offset_of_ShotObject_3(),
	Shooter_t4114374204::get_offset_of_ShotObjectCopy_4(),
	Shooter_t4114374204::get_offset_of_HitEffect_5(),
	Shooter_t4114374204::get_offset_of_ShotSpeed_6(),
	Shooter_t4114374204::get_offset_of_ShotRate_7(),
	Shooter_t4114374204::get_offset_of_ShotTime_8(),
	Shooter_t4114374204::get_offset_of_ShotOffset_9(),
	Shooter_t4114374204::get_offset_of_DestroyAfter_10(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif

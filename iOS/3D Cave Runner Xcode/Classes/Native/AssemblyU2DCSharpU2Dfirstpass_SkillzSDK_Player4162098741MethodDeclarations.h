#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;
// System.String
struct String_t;
// SkillzSDK.Player
struct Player_t4162098741;
struct Player_t4162098741_marshaled_pinvoke;
struct Player_t4162098741_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SkillzSDK_Player4162098741.h"

// System.Void SkillzSDK.Player::.ctor(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void Player__ctor_m627459380 (Player_t4162098741 * __this, Dictionary_2_t309261261 * ___playerJSON0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SkillzSDK.Player::ToString()
extern "C"  String_t* Player_ToString_m557479334 (Player_t4162098741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Player_t4162098741;
struct Player_t4162098741_marshaled_pinvoke;

extern "C" void Player_t4162098741_marshal_pinvoke(const Player_t4162098741& unmarshaled, Player_t4162098741_marshaled_pinvoke& marshaled);
extern "C" void Player_t4162098741_marshal_pinvoke_back(const Player_t4162098741_marshaled_pinvoke& marshaled, Player_t4162098741& unmarshaled);
extern "C" void Player_t4162098741_marshal_pinvoke_cleanup(Player_t4162098741_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Player_t4162098741;
struct Player_t4162098741_marshaled_com;

extern "C" void Player_t4162098741_marshal_com(const Player_t4162098741& unmarshaled, Player_t4162098741_marshaled_com& marshaled);
extern "C" void Player_t4162098741_marshal_com_back(const Player_t4162098741_marshaled_com& marshaled, Player_t4162098741& unmarshaled);
extern "C" void Player_t4162098741_marshal_com_cleanup(Player_t4162098741_marshaled_com& marshaled);

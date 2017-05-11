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

// PlayerControls
struct PlayerControls_t1008173349;
// UnityEngine.Collision
struct Collision_t2876846408;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Collision2876846408.h"

// System.Void PlayerControls::.ctor()
extern "C"  void PlayerControls__ctor_m706045369 (PlayerControls_t1008173349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControls::CalibrateAccelerometer()
extern "C"  void PlayerControls_CalibrateAccelerometer_m378190857 (PlayerControls_t1008173349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PlayerControls::FixAcceleration(UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  PlayerControls_FixAcceleration_m839718627 (PlayerControls_t1008173349 * __this, Vector3_t2243707580  ___acceleration0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControls::Start()
extern "C"  void PlayerControls_Start_m3898187785 (PlayerControls_t1008173349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControls::Update()
extern "C"  void PlayerControls_Update_m3910522470 (PlayerControls_t1008173349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControls::playerRotate()
extern "C"  void PlayerControls_playerRotate_m2354357487 (PlayerControls_t1008173349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControls::OnCollisionEnter(UnityEngine.Collision)
extern "C"  void PlayerControls_OnCollisionEnter_m3538620703 (PlayerControls_t1008173349 * __this, Collision_t2876846408 * ___collision0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PlayerControls::getPlayerPos()
extern "C"  Vector3_t2243707580  PlayerControls_getPlayerPos_m3964709172 (PlayerControls_t1008173349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject PlayerControls::getLastTouchedPlatform()
extern "C"  GameObject_t1756533147 * PlayerControls_getLastTouchedPlatform_m3363440413 (PlayerControls_t1008173349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControls::OnDrawGizmos()
extern "C"  void PlayerControls_OnDrawGizmos_m3957198997 (PlayerControls_t1008173349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControls::EndGameRun()
extern "C"  void PlayerControls_EndGameRun_m952646249 (PlayerControls_t1008173349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControls::Main()
extern "C"  void PlayerControls_Main_m2517130198 (PlayerControls_t1008173349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

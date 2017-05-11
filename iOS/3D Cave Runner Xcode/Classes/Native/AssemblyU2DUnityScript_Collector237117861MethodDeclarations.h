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

// Collector
struct Collector_t237117861;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void Collector::.ctor()
extern "C"  void Collector__ctor_m170618665 (Collector_t237117861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Collector::Start()
extern "C"  void Collector_Start_m2569114113 (Collector_t237117861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Collector::Update()
extern "C"  void Collector_Update_m3632454464 (Collector_t237117861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Collector::GetSection(System.Int32)
extern "C"  GameObject_t1756533147 * Collector_GetSection_m1810727614 (Collector_t237117861 * __this, int32_t ___sectionKind0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Collector::GetGem(System.Int32)
extern "C"  GameObject_t1756533147 * Collector_GetGem_m2545106642 (Collector_t237117861 * __this, int32_t ___gemKind0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Collector::GetObstacle(System.Int32)
extern "C"  GameObject_t1756533147 * Collector_GetObstacle_m1585720666 (Collector_t237117861 * __this, int32_t ___obstacleKind0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Collector::DisposeChildren(UnityEngine.GameObject)
extern "C"  void Collector_DisposeChildren_m1443171121 (Collector_t237117861 * __this, GameObject_t1756533147 * ___kObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Collector::Dispose(UnityEngine.GameObject)
extern "C"  void Collector_Dispose_m4134780802 (Collector_t237117861 * __this, GameObject_t1756533147 * ___kObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Collector::Main()
extern "C"  void Collector_Main_m1799708568 (Collector_t237117861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

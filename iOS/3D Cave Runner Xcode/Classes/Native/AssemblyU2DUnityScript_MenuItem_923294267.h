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
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MenuItem_
struct  MenuItem__t923294267  : public MonoBehaviour_t1158329972
{
public:
	// System.String MenuItem_::MenuItemName
	String_t* ___MenuItemName_2;
	// System.Boolean MenuItem_::LoadLevel
	bool ___LoadLevel_3;
	// System.String MenuItem_::LevelName
	String_t* ___LevelName_4;
	// System.Boolean MenuItem_::LoadComponent
	bool ___LoadComponent_5;
	// UnityEngine.GameObject MenuItem_::LoadedComponent
	GameObject_t1756533147 * ___LoadedComponent_6;
	// System.Boolean MenuItem_::StartSkillz
	bool ___StartSkillz_7;

public:
	inline static int32_t get_offset_of_MenuItemName_2() { return static_cast<int32_t>(offsetof(MenuItem__t923294267, ___MenuItemName_2)); }
	inline String_t* get_MenuItemName_2() const { return ___MenuItemName_2; }
	inline String_t** get_address_of_MenuItemName_2() { return &___MenuItemName_2; }
	inline void set_MenuItemName_2(String_t* value)
	{
		___MenuItemName_2 = value;
		Il2CppCodeGenWriteBarrier(&___MenuItemName_2, value);
	}

	inline static int32_t get_offset_of_LoadLevel_3() { return static_cast<int32_t>(offsetof(MenuItem__t923294267, ___LoadLevel_3)); }
	inline bool get_LoadLevel_3() const { return ___LoadLevel_3; }
	inline bool* get_address_of_LoadLevel_3() { return &___LoadLevel_3; }
	inline void set_LoadLevel_3(bool value)
	{
		___LoadLevel_3 = value;
	}

	inline static int32_t get_offset_of_LevelName_4() { return static_cast<int32_t>(offsetof(MenuItem__t923294267, ___LevelName_4)); }
	inline String_t* get_LevelName_4() const { return ___LevelName_4; }
	inline String_t** get_address_of_LevelName_4() { return &___LevelName_4; }
	inline void set_LevelName_4(String_t* value)
	{
		___LevelName_4 = value;
		Il2CppCodeGenWriteBarrier(&___LevelName_4, value);
	}

	inline static int32_t get_offset_of_LoadComponent_5() { return static_cast<int32_t>(offsetof(MenuItem__t923294267, ___LoadComponent_5)); }
	inline bool get_LoadComponent_5() const { return ___LoadComponent_5; }
	inline bool* get_address_of_LoadComponent_5() { return &___LoadComponent_5; }
	inline void set_LoadComponent_5(bool value)
	{
		___LoadComponent_5 = value;
	}

	inline static int32_t get_offset_of_LoadedComponent_6() { return static_cast<int32_t>(offsetof(MenuItem__t923294267, ___LoadedComponent_6)); }
	inline GameObject_t1756533147 * get_LoadedComponent_6() const { return ___LoadedComponent_6; }
	inline GameObject_t1756533147 ** get_address_of_LoadedComponent_6() { return &___LoadedComponent_6; }
	inline void set_LoadedComponent_6(GameObject_t1756533147 * value)
	{
		___LoadedComponent_6 = value;
		Il2CppCodeGenWriteBarrier(&___LoadedComponent_6, value);
	}

	inline static int32_t get_offset_of_StartSkillz_7() { return static_cast<int32_t>(offsetof(MenuItem__t923294267, ___StartSkillz_7)); }
	inline bool get_StartSkillz_7() const { return ___StartSkillz_7; }
	inline bool* get_address_of_StartSkillz_7() { return &___StartSkillz_7; }
	inline void set_StartSkillz_7(bool value)
	{
		___StartSkillz_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

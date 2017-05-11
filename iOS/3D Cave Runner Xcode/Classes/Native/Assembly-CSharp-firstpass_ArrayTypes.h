#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SkillzSDK_TurnBasedRo994668268.h"

#pragma once
// SkillzSDK.TurnBasedRound[]
struct TurnBasedRoundU5BU5D_t1383807973  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) TurnBasedRound_t994668268  m_Items[1];

public:
	inline TurnBasedRound_t994668268  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TurnBasedRound_t994668268 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TurnBasedRound_t994668268  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TurnBasedRound_t994668268  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TurnBasedRound_t994668268 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TurnBasedRound_t994668268  value)
	{
		m_Items[index] = value;
	}
};

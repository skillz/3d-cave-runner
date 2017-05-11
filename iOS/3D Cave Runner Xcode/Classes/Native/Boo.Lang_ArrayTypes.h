#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey
struct DispatcherKey_t708950850;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
struct Dispatcher_t2240407071;

#include "mscorlib_System_Array3829468939.h"
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_Dispat708950850.h"
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_Dispa2240407071.h"

#pragma once
// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey[]
struct DispatcherKeyU5BU5D_t3576624503  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) DispatcherKey_t708950850 * m_Items[1];

public:
	inline DispatcherKey_t708950850 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DispatcherKey_t708950850 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DispatcherKey_t708950850 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline DispatcherKey_t708950850 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DispatcherKey_t708950850 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DispatcherKey_t708950850 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher[]
struct DispatcherU5BU5D_t2665314950  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Dispatcher_t2240407071 * m_Items[1];

public:
	inline Dispatcher_t2240407071 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Dispatcher_t2240407071 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Dispatcher_t2240407071 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Dispatcher_t2240407071 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Dispatcher_t2240407071 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Dispatcher_t2240407071 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};

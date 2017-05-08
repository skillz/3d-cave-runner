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

// UnityEngine.jvalue
struct jvalue_t3412352577;
struct jvalue_t3412352577_marshaled_pinvoke;
struct jvalue_t3412352577_marshaled_com;

#include "codegen/il2cpp-codegen.h"


// Methods for marshaling
struct jvalue_t3412352577;
struct jvalue_t3412352577_marshaled_pinvoke;

extern "C" void jvalue_t3412352577_marshal_pinvoke(const jvalue_t3412352577& unmarshaled, jvalue_t3412352577_marshaled_pinvoke& marshaled);
extern "C" void jvalue_t3412352577_marshal_pinvoke_back(const jvalue_t3412352577_marshaled_pinvoke& marshaled, jvalue_t3412352577& unmarshaled);
extern "C" void jvalue_t3412352577_marshal_pinvoke_cleanup(jvalue_t3412352577_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct jvalue_t3412352577;
struct jvalue_t3412352577_marshaled_com;

extern "C" void jvalue_t3412352577_marshal_com(const jvalue_t3412352577& unmarshaled, jvalue_t3412352577_marshaled_com& marshaled);
extern "C" void jvalue_t3412352577_marshal_com_back(const jvalue_t3412352577_marshaled_com& marshaled, jvalue_t3412352577& unmarshaled);
extern "C" void jvalue_t3412352577_marshal_com_cleanup(jvalue_t3412352577_marshaled_com& marshaled);

﻿// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_hxd__snd__Effect
#define INC_hxd__snd__Effect
typedef struct _hxd__snd__$Effect *hxd__snd__$Effect;
typedef struct _hxd__snd__Effect *hxd__snd__Effect;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hxd/snd/EffectDriver.h>


struct _hxd__snd__$Effect {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _hxd__snd__Effect {
	hl_type *$type;
	hxd__snd__Effect next;
	int refs;
	double retainTime;
	double lastStamp;
	hxd__snd__EffectDriver driver;
	int priority;
};
#endif


﻿// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_hxd__snd__effect__LowPass
#define INC_hxd__snd__effect__LowPass
typedef struct _hxd__snd__effect__$LowPass *hxd__snd__effect__$LowPass;
typedef struct _hxd__snd__effect__LowPass *hxd__snd__effect__LowPass;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hxd/snd/Effect.h>
#include <hxd/snd/EffectDriver.h>


struct _hxd__snd__effect__$LowPass {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _hxd__snd__effect__LowPass {
	hl_type *$type;
	hxd__snd__Effect next;
	int refs;
	double retainTime;
	double lastStamp;
	hxd__snd__EffectDriver driver;
	int priority;
	double gainHF;
};
#endif


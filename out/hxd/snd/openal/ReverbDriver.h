// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_hxd__snd__openal__ReverbDriver
#define INC_hxd__snd__openal__ReverbDriver
typedef struct _hxd__snd__openal__$ReverbDriver *hxd__snd__openal__$ReverbDriver;
typedef struct _hxd__snd__openal__ReverbDriver *hxd__snd__openal__ReverbDriver;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hxd/snd/EffectDriver.h>
#include <hxd/snd/openal/Driver.h>
#include <hxd/snd/effect/LowPass.h>


struct _hxd__snd__openal__$ReverbDriver {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _hxd__snd__openal__ReverbDriver {
	hl_type *$type;
	hxd__snd__openal__Driver driver;
	int inst;
	int slot;
	hxd__snd__effect__LowPass dryFilter;
	double dryGain;
};
#endif


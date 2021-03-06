// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_hxd__snd__effect__Spatialization
#define INC_hxd__snd__effect__Spatialization
typedef struct _hxd__snd__effect__$Spatialization *hxd__snd__effect__$Spatialization;
typedef struct _hxd__snd__effect__Spatialization *hxd__snd__effect__Spatialization;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hxd/snd/Effect.h>
#include <hxd/snd/EffectDriver.h>
#include <h3d/Vector.h>


struct _hxd__snd__effect__$Spatialization {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _hxd__snd__effect__Spatialization {
	hl_type *$type;
	hxd__snd__Effect next;
	int refs;
	double retainTime;
	double lastStamp;
	hxd__snd__EffectDriver driver;
	int priority;
	h3d__Vector position;
	h3d__Vector velocity;
	h3d__Vector direction;
	double referenceDistance;
	vdynamic* maxDistance;
	vdynamic* fadeDistance;
	double rollOffFactor;
};
#endif


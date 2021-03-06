// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_hxd__snd__openal__Driver
#define INC_hxd__snd__openal__Driver
typedef struct _hxd__snd__openal__$Driver *hxd__snd__openal__$Driver;
typedef struct _hxd__snd__openal__Driver *hxd__snd__openal__Driver;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/natives.h>
#include <haxe/io/Bytes.h>
#include <hxd/snd/openal/SourceHandle.h>
#include <hxd/snd/openal/BufferHandle.h>
#include <h3d/Vector.h>
#include <hxd/snd/SampleFormat.h>
#include <hxd/snd/DriverFeature.h>
#include <hxd/snd/EffectDriver.h>


struct _hxd__snd__openal__$Driver {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _hxd__snd__openal__Driver {
	hl_type *$type;
	alc_device* device;
	alc_context* context;
	int maxAuxiliarySends;
	haxe__io__Bytes tmpBytes;
	vvirtual* f$4;
};
#endif


// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_hxd__snd__OggData
#define INC_hxd__snd__OggData
typedef struct _hxd__snd__$OggData *hxd__snd__$OggData;
typedef struct _hxd__snd__OggData *hxd__snd__OggData;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hxd/snd/Data.h>
#include <hxd/snd/SampleFormat.h>
#include <haxe/io/Bytes.h>
#include <hl/natives.h>


struct _hxd__snd__$OggData {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _hxd__snd__OggData {
	hl_type *$type;
	int samples;
	int samplingRate;
	venum* sampleFormat;
	int channels;
	haxe__io__Bytes bytes;
	fmt_ogg* reader;
	int currentSample;
};
#endif


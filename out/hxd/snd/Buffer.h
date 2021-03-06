// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_hxd__snd__Buffer
#define INC_hxd__snd__Buffer
typedef struct _hxd__snd__$Buffer *hxd__snd__$Buffer;
typedef struct _hxd__snd__Buffer *hxd__snd__Buffer;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hxd/snd/openal/BufferHandle.h>
#include <hxd/res/Sound.h>


struct _hxd__snd__$Buffer {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _hxd__snd__Buffer {
	hl_type *$type;
	hxd__snd__openal__BufferHandle handle;
	hxd__res__Sound sound;
	bool isEnd;
	bool isStream;
	int refs;
	double lastStop;
	int start;
	int end;
	int samples;
	int sampleRate;
};
#endif


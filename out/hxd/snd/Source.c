// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <hxd/snd/Source.h>
#include <hxd/snd/openal/BufferHandle.h>
#include <h3d/Vector.h>
#include <hxd/snd/SampleFormat.h>
#include <hxd/snd/DriverFeature.h>
#include <hxd/snd/EffectDriver.h>
#include <hxd/snd/Manager.h>
hxd__snd__Manager hxd_snd_Manager_get(void);
extern hl_type t$fun_ba44378;
extern hxd__snd__$Source g$_hxd_snd_Source;
extern hl_type t$fun_d9b4cf5;
extern hl_type t$hxd_snd_Buffer;
#include <hl/natives.h>
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);

void hxd_snd_Source_dispose(hxd__snd__Source r0) {
	hxd__snd__openal__SourceHandle r4;
	vvirtual *r2;
	hxd__snd__Manager r3;
	r3 = hxd_snd_Manager_get();
	if( r3 == NULL ) hl_null_access();
	r2 = r3->driver;
	if( r2 == NULL ) hl_null_access();
	r4 = r0->handle;
	if( hl_vfields(r2)[14] ) ((void (*)(vdynamic*,hxd__snd__openal__SourceHandle))hl_vfields(r2)[14])(r2->value,r4); else {
		void *args[] = {r4};
		hl_dyn_call_obj(r2->value,&t$fun_ba44378,2836853/*destroySource*/,args,NULL);
	}
	return;
}

void hxd_snd_Source_new(hxd__snd__Source r0,vvirtual* r1) {
	hxd__snd__openal__SourceHandle r7;
	hxd__snd__$Source r5;
	hl__types__ArrayObj r8;
	hl_type *r10;
	bool r3;
	double r4;
	varray *r9;
	int r2, r6;
	r2 = 0;
	r0->start = r2;
	r3 = false;
	r0->playing = r3;
	r4 = -1.;
	r0->volume = r4;
	r5 = (hxd__snd__$Source)g$_hxd_snd_Source;
	r2 = r5->ID;
	r6 = r2;
	++r2;
	r5->ID = r2;
	r0->id = r6;
	if( r1 == NULL ) hl_null_access();
	if( hl_vfields(r1)[16] ) r7 = ((hxd__snd__openal__SourceHandle (*)(vdynamic*))hl_vfields(r1)[16])(r1->value); else {
		r7 = (hxd__snd__openal__SourceHandle)hl_dyn_call_obj(r1->value,&t$fun_d9b4cf5,344388097/*createSource*/,NULL,NULL);
	}
	r0->handle = r7;
	r10 = &t$hxd_snd_Buffer;
	r2 = 0;
	r9 = hl_alloc_array(r10,r2);
	r8 = hl_types_ArrayObj_alloc(r9);
	r0->buffers = r8;
	return;
}


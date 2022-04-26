﻿// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <hxd/snd/ChannelBase.h>
#include <hxd/snd/Effect.h>
bool hl_BaseType_check(hl__BaseType,vdynamic*);
extern hl_type t$_f64;
extern hl_type t$vrt_eeaf9b6;
#include <hl/natives.h>
extern hl_type t$nul_f64;
extern hl_type t$fun_7b48b4f;
extern hl_type t$vrt_033a2d3;
extern String s$Can_t_add_null_effect;
vdynamic* haxe_Exception_thrown(vdynamic*);
int hl_types_ArrayObj_indexOf(hl__types__ArrayObj,vdynamic*,vdynamic*);
extern String s$3c38786;
int hl_types_ArrayObj_push(hl__types__ArrayObj,vdynamic*);
bool hl_types_ArrayObj_remove(hl__types__ArrayObj,vdynamic*);
extern hl_type t$hxd_snd_Effect;
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);

hxd__snd__Effect hxd_snd_ChannelBase_getEffect(hxd__snd__ChannelBase r0,hl__Class r1) {
	hl__types__ArrayObj r2;
	bool r9;
	hxd__snd__Effect r3, r8;
	vdynamic *r4;
	varray *r7;
	int r5, r6;
	r2 = r0->effects;
	if( r2 ) goto label$1283393_1_4;
	r3 = NULL;
	return r3;
	label$1283393_1_4:
	r5 = 0;
	r2 = r0->effects;
	label$1283393_1_6:
	if( r2 == NULL ) hl_null_access();
	r6 = r2->length;
	if( r5 >= r6 ) goto label$1283393_1_26;
	r6 = r2->length;
	if( ((unsigned)r5) < ((unsigned)r6) ) goto label$1283393_1_14;
	r3 = NULL;
	goto label$1283393_1_17;
	label$1283393_1_14:
	r7 = r2->array;
	r4 = ((vdynamic**)(r7 + 1))[r5];
	r3 = (hxd__snd__Effect)r4;
	label$1283393_1_17:
	++r5;
	r9 = hl_BaseType_check(((hl__BaseType)r1),((vdynamic*)r3));
	if( !r9 ) goto label$1283393_1_22;
	r8 = r3;
	goto label$1283393_1_23;
	label$1283393_1_22:
	r8 = NULL;
	label$1283393_1_23:
	if( !r8 ) goto label$1283393_1_25;
	return r8;
	label$1283393_1_25:
	goto label$1283393_1_6;
	label$1283393_1_26:
	r3 = NULL;
	return r3;
}

double hxd_snd_ChannelBase_set_volume(hxd__snd__ChannelBase r0,double r1) {
	vvirtual *r2;
	r2 = NULL;
	r0->currentFade = r2;
	r0->volume = r1;
	return r1;
}

void hxd_snd_ChannelBase_fadeTo(hxd__snd__ChannelBase r0,double r1,vdynamic* r2,vclosure* r3) {
	vvirtual *r5, *r6;
	double r4;
	if( r2 ) goto label$1283393_3_3;
	r4 = 1.;
	r2 = hl_alloc_dynamic(&t$_f64);
	r2->v.d = r4;
	label$1283393_3_3:
	r5 = hl_alloc_virtual(&t$vrt_eeaf9b6);
	r4 = hl_sys_time();
	if( hl_vfields(r5)[2] ) *(double*)(hl_vfields(r5)[2]) = (double)r4; else hl_dyn_setd(r5->value,-469011757/*start*/,r4);
	if( hl_vfields(r5)[0] ) *(vdynamic**)(hl_vfields(r5)[0]) = (vdynamic*)r2; else hl_dyn_setp(r5->value,344854356/*duration*/,&t$nul_f64,r2);
	r4 = r0->volume;
	if( hl_vfields(r5)[3] ) *(double*)(hl_vfields(r5)[3]) = (double)r4; else hl_dyn_setd(r5->value,-147224745/*startVolume*/,r4);
	if( hl_vfields(r5)[4] ) *(double*)(hl_vfields(r5)[4]) = (double)r1; else hl_dyn_setd(r5->value,467100683/*targetVolume*/,r1);
	if( hl_vfields(r5)[1] ) *(vclosure**)(hl_vfields(r5)[1]) = (vclosure*)r3; else hl_dyn_setp(r5->value,308582529/*onEnd*/,&t$fun_7b48b4f,r3);
	r6 = hl_to_virtual(&t$vrt_033a2d3,(vdynamic*)r5);
	r0->currentFade = r6;
	return;
}

void hxd_snd_ChannelBase_updateCurrentVolume(hxd__snd__ChannelBase r0,double r1) {
	vvirtual *r3;
	vclosure *r7;
	double r4, r5, r6, r8, r9;
	r3 = r0->currentFade;
	if( !r3 ) goto label$1283393_4_26;
	r3 = r0->currentFade;
	if( r3 == NULL ) hl_null_access();
	r5 = hl_vfields(r3)[2] ? (*(double*)(hl_vfields(r3)[2])) : (double)hl_dyn_getd(r3->value,-469011757/*start*/);
	r4 = r1 - r5;
	r6 = hl_vfields(r3)[0] ? (*(double*)(hl_vfields(r3)[0])) : (double)hl_dyn_getd(r3->value,344854356/*duration*/);
	if( !(r4 >= r6) ) goto label$1283393_4_16;
	r5 = hl_vfields(r3)[4] ? (*(double*)(hl_vfields(r3)[4])) : (double)hl_dyn_getd(r3->value,467100683/*targetVolume*/);
	r5 = hxd_snd_ChannelBase_set_volume(r0,r5);
	r7 = hl_vfields(r3)[1] ? (*(vclosure**)(hl_vfields(r3)[1])) : (vclosure*)hl_dyn_getp(r3->value,308582529/*onEnd*/,&t$fun_7b48b4f);
	if( !r7 ) goto label$1283393_4_15;
	r7 = hl_vfields(r3)[1] ? (*(vclosure**)(hl_vfields(r3)[1])) : (vclosure*)hl_dyn_getp(r3->value,308582529/*onEnd*/,&t$fun_7b48b4f);
	if( r7 == NULL ) hl_null_access();
	r7->hasValue ? ((void (*)(vdynamic*))r7->fun)((vdynamic*)r7->value) : ((void (*)(void))r7->fun)();
	label$1283393_4_15:
	goto label$1283393_4_26;
	label$1283393_4_16:
	r5 = hl_vfields(r3)[3] ? (*(double*)(hl_vfields(r3)[3])) : (double)hl_dyn_getd(r3->value,-147224745/*startVolume*/);
	r8 = hl_vfields(r3)[0] ? (*(double*)(hl_vfields(r3)[0])) : (double)hl_dyn_getd(r3->value,344854356/*duration*/);
	r6 = r4 / r8;
	r8 = hl_vfields(r3)[4] ? (*(double*)(hl_vfields(r3)[4])) : (double)hl_dyn_getd(r3->value,467100683/*targetVolume*/);
	r9 = hl_vfields(r3)[3] ? (*(double*)(hl_vfields(r3)[3])) : (double)hl_dyn_getd(r3->value,-147224745/*startVolume*/);
	r8 = r8 - r9;
	r6 = r6 * r8;
	r5 = r5 + r6;
	r5 = hxd_snd_ChannelBase_set_volume(r0,r5);
	r0->currentFade = r3;
	label$1283393_4_26:
	r4 = r0->volume;
	r0->currentVolume = r4;
	return;
}

hxd__snd__Effect hxd_snd_ChannelBase_addEffect(hxd__snd__ChannelBase r0,hxd__snd__Effect r1) {
	String r3;
	hl__types__ArrayObj r5;
	vdynamic *r2, *r6;
	int r4, r7;
	if( r1 ) goto label$1283393_5_4;
	r3 = (String)s$Can_t_add_null_effect;
	r2 = haxe_Exception_thrown(((vdynamic*)r3));
	hl_throw((vdynamic*)r2);
	label$1283393_5_4:
	r5 = r0->effects;
	if( r5 == NULL ) hl_null_access();
	r6 = NULL;
	r4 = hl_types_ArrayObj_indexOf(r5,((vdynamic*)r1),r6);
	r7 = 0;
	if( r4 < r7 ) goto label$1283393_5_13;
	r3 = (String)s$3c38786;
	r2 = haxe_Exception_thrown(((vdynamic*)r3));
	hl_throw((vdynamic*)r2);
	label$1283393_5_13:
	r5 = r0->effects;
	if( r5 == NULL ) hl_null_access();
	r4 = hl_types_ArrayObj_push(r5,((vdynamic*)r1));
	return r1;
}

void hxd_snd_ChannelBase_removeEffect(hxd__snd__ChannelBase r0,hxd__snd__Effect r1) {
	hl__types__ArrayObj r3;
	bool r2;
	r3 = r0->effects;
	if( r3 == NULL ) hl_null_access();
	r2 = hl_types_ArrayObj_remove(r3,((vdynamic*)r1));
	return;
}

void hxd_snd_ChannelBase_new(hxd__snd__ChannelBase r0) {
	hl__types__ArrayObj r2;
	hl_type *r4;
	bool r6;
	double r1;
	int r5;
	varray *r3;
	r1 = 1.;
	r0->volume = r1;
	r4 = &t$hxd_snd_Effect;
	r5 = 0;
	r3 = hl_alloc_array(r4,r5);
	r2 = hl_types_ArrayObj_alloc(r3);
	r0->bindedEffects = r2;
	r4 = &t$hxd_snd_Effect;
	r5 = 0;
	r3 = hl_alloc_array(r4,r5);
	r2 = hl_types_ArrayObj_alloc(r3);
	r0->effects = r2;
	r6 = false;
	r0->mute = r6;
	r1 = 0.;
	r0->priority = r1;
	return;
}


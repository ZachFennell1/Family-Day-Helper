// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <hxd/snd/Channel.h>
#include <hl/natives.h>
#include <hxd/snd/Effect.h>
void hxd_snd_ChannelBase_updateCurrentVolume(hxd__snd__ChannelBase,double);
int hl_types_ArrayObj_push(hl__types__ArrayObj,vdynamic*);
void hxd_snd_Manager_releaseChannel(hxd__snd__Manager,hxd__snd__Channel);
extern hl_type t$fun_aaab881;
extern hl_type t$hxd_res_Sound;
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);
void hxd_snd_ChannelBase_new(hxd__snd__ChannelBase);
extern hxd__snd__$Channel g$_hxd_snd_Channel;

void hxd_snd_Channel_onEnd(hxd__snd__Channel r0) {
	return;
}

double hxd_snd_Channel_set_position(hxd__snd__Channel r0,double r1) {
	bool r3;
	double r2, r4;
	r2 = hl_sys_time();
	r0->lastStamp = r2;
	r3 = true;
	r0->positionChanged = r3;
	r4 = r0->duration;
	if( !(r4 < r1) ) goto label$c4e128d_2_9;
	r2 = r0->duration;
	r1 = r2;
	goto label$c4e128d_2_13;
	label$c4e128d_2_9:
	r4 = 0.;
	if( !(r1 < r4) ) goto label$c4e128d_2_13;
	r2 = 0.;
	r1 = r2;
	label$c4e128d_2_13:
	r0->position = r1;
	return r1;
}

bool hxd_snd_Channel_set_pause(hxd__snd__Channel r0,bool r1) {
	double r2;
	if( r1 ) goto label$c4e128d_3_3;
	r2 = hl_sys_time();
	r0->lastStamp = r2;
	label$c4e128d_3_3:
	r0->pause = r1;
	return r1;
}

void hxd_snd_Channel_updateCurrentVolume(hxd__snd__Channel r0,double r1) {
	hl__types__ArrayObj r13;
	vvirtual *r4, *r5;
	hxd__snd__Manager r11;
	bool r3;
	hxd__snd__Effect r15;
	hxd__snd__SoundGroup r10;
	double r6, r8, r9;
	vdynamic *r16;
	varray *r17;
	int r12, r14;
	hxd__snd__ChannelGroup r7;
	r3 = r0->pause;
	if( !r3 ) goto label$c4e128d_4_9;
	r4 = r0->currentFade;
	if( !r4 ) goto label$c4e128d_4_9;
	r4 = r0->currentFade;
	r5 = NULL;
	r0->currentFade = r5;
	hxd_snd_Channel_updateCurrentVolume(r0,r1);
	r0->currentFade = r4;
	label$c4e128d_4_9:
	hxd_snd_ChannelBase_updateCurrentVolume(((hxd__snd__ChannelBase)r0),r1);
	r7 = r0->channelGroup;
	if( r7 == NULL ) hl_null_access();
	hxd_snd_ChannelBase_updateCurrentVolume(((hxd__snd__ChannelBase)r7),r1);
	r6 = r0->currentVolume;
	r7 = r0->channelGroup;
	if( r7 == NULL ) hl_null_access();
	r8 = r7->currentVolume;
	r10 = r0->soundGroup;
	if( r10 == NULL ) hl_null_access();
	r9 = r10->volume;
	r8 = r8 * r9;
	r6 = r6 * r8;
	r0->currentVolume = r6;
	r11 = r0->manager;
	if( !r11 ) goto label$c4e128d_4_67;
	r12 = 0;
	r7 = r0->channelGroup;
	if( r7 == NULL ) hl_null_access();
	r13 = r7->effects;
	label$c4e128d_4_29:
	if( r13 == NULL ) hl_null_access();
	r14 = r13->length;
	if( r12 >= r14 ) goto label$c4e128d_4_47;
	r14 = r13->length;
	if( ((unsigned)r12) < ((unsigned)r14) ) goto label$c4e128d_4_37;
	r15 = NULL;
	goto label$c4e128d_4_40;
	label$c4e128d_4_37:
	r17 = r13->array;
	r16 = ((vdynamic**)(r17 + 1))[r12];
	r15 = (hxd__snd__Effect)r16;
	label$c4e128d_4_40:
	++r12;
	r6 = r0->currentVolume;
	if( r15 == NULL ) hl_null_access();
	r8 = ((double (*)(hxd__snd__Effect))r15->$type->vobj_proto[1])(r15);
	r6 = r6 * r8;
	r0->currentVolume = r6;
	goto label$c4e128d_4_29;
	label$c4e128d_4_47:
	r12 = 0;
	r13 = r0->effects;
	label$c4e128d_4_49:
	if( r13 == NULL ) hl_null_access();
	r14 = r13->length;
	if( r12 >= r14 ) goto label$c4e128d_4_67;
	r14 = r13->length;
	if( ((unsigned)r12) < ((unsigned)r14) ) goto label$c4e128d_4_57;
	r15 = NULL;
	goto label$c4e128d_4_60;
	label$c4e128d_4_57:
	r17 = r13->array;
	r16 = ((vdynamic**)(r17 + 1))[r12];
	r15 = (hxd__snd__Effect)r16;
	label$c4e128d_4_60:
	++r12;
	r6 = r0->currentVolume;
	if( r15 == NULL ) hl_null_access();
	r8 = ((double (*)(hxd__snd__Effect))r15->$type->vobj_proto[1])(r15);
	r6 = r6 * r8;
	r0->currentVolume = r6;
	goto label$c4e128d_4_49;
	label$c4e128d_4_67:
	return;
}

void hxd_snd_Channel_calcAudibleVolume(hxd__snd__Channel r0,double r1) {
	hl__types__ArrayObj r6;
	hxd__snd__Manager r4;
	hxd__snd__Effect r9;
	double r3;
	vdynamic *r10;
	varray *r11;
	hxd__snd__ChannelGroup r7;
	int r5, r8;
	hxd_snd_Channel_updateCurrentVolume(r0,r1);
	r3 = r0->currentVolume;
	r0->audibleVolume = r3;
	r4 = r0->manager;
	if( !r4 ) goto label$c4e128d_5_45;
	r5 = 0;
	r7 = r0->channelGroup;
	if( r7 == NULL ) hl_null_access();
	r6 = r7->effects;
	label$c4e128d_5_9:
	if( r6 == NULL ) hl_null_access();
	r8 = r6->length;
	if( r5 >= r8 ) goto label$c4e128d_5_26;
	r8 = r6->length;
	if( ((unsigned)r5) < ((unsigned)r8) ) goto label$c4e128d_5_17;
	r9 = NULL;
	goto label$c4e128d_5_20;
	label$c4e128d_5_17:
	r11 = r6->array;
	r10 = ((vdynamic**)(r11 + 1))[r5];
	r9 = (hxd__snd__Effect)r10;
	label$c4e128d_5_20:
	++r5;
	if( r9 == NULL ) hl_null_access();
	r3 = r0->audibleVolume;
	r3 = ((double (*)(hxd__snd__Effect,double))r9->$type->vobj_proto[0])(r9,r3);
	r0->audibleVolume = r3;
	goto label$c4e128d_5_9;
	label$c4e128d_5_26:
	r5 = 0;
	r6 = r0->effects;
	label$c4e128d_5_28:
	if( r6 == NULL ) hl_null_access();
	r8 = r6->length;
	if( r5 >= r8 ) goto label$c4e128d_5_45;
	r8 = r6->length;
	if( ((unsigned)r5) < ((unsigned)r8) ) goto label$c4e128d_5_36;
	r9 = NULL;
	goto label$c4e128d_5_39;
	label$c4e128d_5_36:
	r11 = r6->array;
	r10 = ((vdynamic**)(r11 + 1))[r5];
	r9 = (hxd__snd__Effect)r10;
	label$c4e128d_5_39:
	++r5;
	if( r9 == NULL ) hl_null_access();
	r3 = r0->audibleVolume;
	r3 = ((double (*)(hxd__snd__Effect,double))r9->$type->vobj_proto[0])(r9,r3);
	r0->audibleVolume = r3;
	goto label$c4e128d_5_28;
	label$c4e128d_5_45:
	return;
}

void hxd_snd_Channel_queueSound(hxd__snd__Channel r0,hxd__res__Sound r1) {
	hl__types__ArrayObj r3;
	int r2;
	r3 = r0->queue;
	if( r3 == NULL ) hl_null_access();
	r2 = hl_types_ArrayObj_push(r3,((vdynamic*)r1));
	return;
}

void hxd_snd_Channel_stop(hxd__snd__Channel r0) {
	hxd__snd__Manager r2;
	r2 = r0->manager;
	if( !r2 ) goto label$c4e128d_7_5;
	r2 = r0->manager;
	if( r2 == NULL ) hl_null_access();
	hxd_snd_Manager_releaseChannel(r2,r0);
	label$c4e128d_7_5:
	return;
}

bool hxd_snd_Channel_isReleased(hxd__snd__Channel r0) {
	hxd__snd__Manager r2, r3;
	bool r1;
	r2 = r0->manager;
	r3 = NULL;
	if( r2 == r3 ) goto label$c4e128d_8_5;
	r1 = false;
	goto label$c4e128d_8_6;
	label$c4e128d_8_5:
	r1 = true;
	label$c4e128d_8_6:
	return r1;
}

void hxd_snd_Channel_new(hxd__snd__Channel r0) {
	hl__types__ArrayObj r2;
	hl_type *r4;
	bool r6;
	double r7;
	vclosure *r1;
	hxd__snd__$Channel r9;
	int r5, r10;
	varray *r3;
	r1 = r0->onEnd;
	if( r1 ) goto label$c4e128d_9_4;
	r1 = hl_alloc_closure_ptr(&t$fun_aaab881,hxd_snd_Channel_onEnd,r0);
	r0->onEnd = r1;
	label$c4e128d_9_4:
	r4 = &t$hxd_res_Sound;
	r5 = 0;
	r3 = hl_alloc_array(r4,r5);
	r2 = hl_types_ArrayObj_alloc(r3);
	r0->queue = r2;
	r6 = false;
	r0->positionChanged = r6;
	r6 = false;
	r0->isLoading = r6;
	r6 = false;
	r0->isVirtual = r6;
	r7 = 0.;
	r0->lastStamp = r7;
	r7 = 1.;
	r0->audibleVolume = r7;
	r6 = true;
	r0->allowVirtual = r6;
	r6 = false;
	r0->loop = r6;
	r6 = false;
	r0->pause = r6;
	r7 = 0.;
	r0->position = r7;
	hxd_snd_ChannelBase_new(((hxd__snd__ChannelBase)r0));
	r9 = (hxd__snd__$Channel)g$_hxd_snd_Channel;
	r5 = r9->ID;
	r10 = r5;
	++r5;
	r9->ID = r5;
	r0->id = r10;
	return;
}


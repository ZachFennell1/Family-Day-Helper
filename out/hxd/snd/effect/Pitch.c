﻿// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <hxd/snd/effect/Pitch.h>
extern String s$pitch;
void hxd_snd_Effect_new(hxd__snd__Effect,String);

void hxd_snd_effect_Pitch_new(hxd__snd__effect__Pitch r0,double* r1) {
	String r4;
	double r2;
	if( r1 ) goto label$03fbd2a_1_3;
	r2 = 1.;
	goto label$03fbd2a_1_4;
	label$03fbd2a_1_3:
	r2 = *r1;
	label$03fbd2a_1_4:
	r4 = (String)s$pitch;
	hxd_snd_Effect_new(((hxd__snd__Effect)r0),r4);
	r0->value = r2;
	return;
}


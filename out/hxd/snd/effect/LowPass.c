﻿// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <hxd/snd/effect/LowPass.h>
extern String s$lowpass;
void hxd_snd_Effect_new(hxd__snd__Effect,String);

void hxd_snd_effect_LowPass_new(hxd__snd__effect__LowPass r0) {
	String r2;
	double r4;
	int r3;
	r2 = (String)s$lowpass;
	hxd_snd_Effect_new(((hxd__snd__Effect)r0),r2);
	r3 = 100;
	r0->priority = r3;
	r4 = 1.;
	r0->gainHF = r4;
	return;
}

﻿// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <hxd/Timer.h>
extern hxd__$Timer g$_hxd_Timer;
#include <hl/natives.h>

void hxd_Timer_update() {
	hxd__$Timer r0;
	double r2, r4, r5, r6, r7;
	int r1;
	r0 = (hxd__$Timer)g$_hxd_Timer;
	r1 = r0->frameCount;
	++r1;
	r0->frameCount = r1;
	r2 = hl_sys_time();
	r0 = (hxd__$Timer)g$_hxd_Timer;
	r5 = r0->lastTimeStamp;
	r4 = r2 - r5;
	r0 = (hxd__$Timer)g$_hxd_Timer;
	r0->elapsedTime = r4;
	r0 = (hxd__$Timer)g$_hxd_Timer;
	r0->lastTimeStamp = r2;
	r0 = (hxd__$Timer)g$_hxd_Timer;
	r4 = r0->elapsedTime;
	r0 = (hxd__$Timer)g$_hxd_Timer;
	r5 = r0->maxDeltaTime;
	if( !(r4 < r5) ) goto label$f4e06c0_1_29;
	r0 = (hxd__$Timer)g$_hxd_Timer;
	r4 = r0->elapsedTime;
	r0 = (hxd__$Timer)g$_hxd_Timer;
	r6 = r0->smoothFactor;
	r0 = (hxd__$Timer)g$_hxd_Timer;
	r7 = r0->currentDT;
	r7 = r7 - r4;
	r6 = r6 * r7;
	r5 = r4 + r6;
	r0 = (hxd__$Timer)g$_hxd_Timer;
	r0->currentDT = r5;
	goto label$f4e06c0_1_35;
	label$f4e06c0_1_29:
	r4 = 1.;
	r0 = (hxd__$Timer)g$_hxd_Timer;
	r5 = r0->wantedFPS;
	r4 = r4 / r5;
	r0 = (hxd__$Timer)g$_hxd_Timer;
	r0->elapsedTime = r4;
	label$f4e06c0_1_35:
	r0 = (hxd__$Timer)g$_hxd_Timer;
	r4 = r0->currentDT;
	r0 = (hxd__$Timer)g$_hxd_Timer;
	r0->dt = r4;
	return;
}

double hxd_Timer_get_tmod() {
	hxd__$Timer r1;
	double r0, r2;
	r1 = (hxd__$Timer)g$_hxd_Timer;
	r0 = r1->dt;
	r1 = (hxd__$Timer)g$_hxd_Timer;
	r2 = r1->wantedFPS;
	r0 = r0 * r2;
	return r0;
}

double hxd_Timer_set_tmod(double r0) {
	hxd__$Timer r3;
	double r1, r2;
	r3 = (hxd__$Timer)g$_hxd_Timer;
	r2 = r3->wantedFPS;
	r1 = r0 / r2;
	r3 = (hxd__$Timer)g$_hxd_Timer;
	r3->dt = r1;
	return r0;
}

double hxd_Timer_fps() {
	hxd__$Timer r2;
	double r0, r1;
	r0 = 1.;
	r2 = (hxd__$Timer)g$_hxd_Timer;
	r1 = r2->currentDT;
	r0 = r0 / r1;
	return r0;
}

void hxd_Timer_skip() {
	hxd__$Timer r1;
	double r0;
	r0 = hl_sys_time();
	r1 = (hxd__$Timer)g$_hxd_Timer;
	r1->lastTimeStamp = r0;
	return;
}

void hxd_Timer_reset() {
	hxd__$Timer r1;
	double r0, r2;
	r0 = hl_sys_time();
	r1 = (hxd__$Timer)g$_hxd_Timer;
	r1->lastTimeStamp = r0;
	r0 = 1.;
	r1 = (hxd__$Timer)g$_hxd_Timer;
	r2 = r1->wantedFPS;
	r0 = r0 / r2;
	r1 = (hxd__$Timer)g$_hxd_Timer;
	r1->currentDT = r0;
	r1 = (hxd__$Timer)g$_hxd_Timer;
	r1->dt = r0;
	return;
}

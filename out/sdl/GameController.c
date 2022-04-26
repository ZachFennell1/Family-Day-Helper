﻿// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <sdl/GameController.h>
#include <hl/natives.h>
String String_fromUTF8(vbyte*);

int sdl_GameController_getAxis(sdl__GameController r0,int r1) {
	sdl_gamecontroller *r3;
	int r2;
	r3 = r0->ptr;
	r2 = sdl_gctrl_get_axis(r3,r1);
	return r2;
}

bool sdl_GameController_getButton(sdl__GameController r0,int r1) {
	bool r2;
	sdl_gamecontroller *r3;
	r3 = r0->ptr;
	r2 = sdl_gctrl_get_button(r3,r1);
	return r2;
}

int sdl_GameController_get_id(sdl__GameController r0) {
	sdl_gamecontroller *r2;
	int r1;
	r2 = r0->ptr;
	r1 = sdl_gctrl_get_id(r2);
	return r1;
}

String sdl_GameController_get_name(sdl__GameController r0) {
	String r1;
	sdl_gamecontroller *r3;
	vbyte *r2;
	r3 = r0->ptr;
	r2 = sdl_gctrl_get_name(r3);
	r1 = String_fromUTF8(r2);
	return r1;
}

bool sdl_GameController_rumble(sdl__GameController r0,double r1,int r2) {
	bool r5;
	sdl_gamecontroller *r6;
	int r7, r8;
	sdl_haptic *r4;
	r4 = r0->haptic;
	if( r4 ) goto label$54f5c01_5_19;
	r5 = r0->rumbleInitialized;
	if( r5 ) goto label$54f5c01_5_19;
	r5 = true;
	r0->rumbleInitialized = r5;
	r6 = r0->ptr;
	r4 = sdl_haptic_open(r6);
	r0->haptic = r4;
	r4 = r0->haptic;
	if( !r4 ) goto label$54f5c01_5_19;
	r4 = r0->haptic;
	r7 = sdl_haptic_rumble_init(r4);
	r8 = 0;
	if( r7 == r8 ) goto label$54f5c01_5_19;
	r4 = r0->haptic;
	sdl_haptic_close(r4);
	r4 = NULL;
	r0->haptic = r4;
	label$54f5c01_5_19:
	r4 = r0->haptic;
	if( r4 ) goto label$54f5c01_5_23;
	r5 = false;
	return r5;
	label$54f5c01_5_23:
	r4 = r0->haptic;
	r7 = sdl_haptic_rumble_play(r4,r1,r2);
	r8 = 0;
	if( r7 == r8 ) goto label$54f5c01_5_29;
	r5 = false;
	goto label$54f5c01_5_30;
	label$54f5c01_5_29:
	r5 = true;
	label$54f5c01_5_30:
	return r5;
}

void sdl_GameController_close(sdl__GameController r0) {
	sdl_gamecontroller *r3;
	sdl_haptic *r2;
	r2 = r0->haptic;
	if( !r2 ) goto label$54f5c01_6_4;
	r2 = r0->haptic;
	sdl_haptic_close(r2);
	label$54f5c01_6_4:
	r2 = NULL;
	r0->haptic = r2;
	r3 = r0->ptr;
	sdl_gctrl_close(r3);
	r3 = NULL;
	r0->ptr = r3;
	return;
}

void sdl_GameController_new(sdl__GameController r0,int r1) {
	bool r2;
	sdl_gamecontroller *r3;
	r2 = false;
	r0->rumbleInitialized = r2;
	r3 = sdl_gctrl_open(r1);
	r0->ptr = r3;
	return;
}

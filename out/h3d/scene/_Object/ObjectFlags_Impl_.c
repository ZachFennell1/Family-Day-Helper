﻿// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <h3d/scene/_Object/ObjectFlags_Impl_.h>

int h3d_scene__Object_ObjectFlags_Impl___new(int r0) {
	return r0;
}

int h3d_scene__Object_ObjectFlags_Impl__toInt(int r0) {
	return r0;
}

bool h3d_scene__Object_ObjectFlags_Impl__has(int r0,int r1) {
	bool r2;
	int r3, r4;
	r3 = r0 & r1;
	r4 = 0;
	if( r3 != r4 ) goto label$a117b52_3_5;
	r2 = false;
	goto label$a117b52_3_6;
	label$a117b52_3_5:
	r2 = true;
	label$a117b52_3_6:
	return r2;
}

bool h3d_scene__Object_ObjectFlags_Impl__set(int r0,int r1,bool r2) {
	int r3, r4, r5;
	if( !r2 ) goto label$a117b52_4_3;
	r3 = r0 | r1;
	goto label$a117b52_4_6;
	label$a117b52_4_3:
	r5 = -1;
	r4 = r1 ^ r5;
	r3 = r0 & r4;
	label$a117b52_4_6:
	return r2;
}


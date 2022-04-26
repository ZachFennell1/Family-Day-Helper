﻿// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <h3d/anim/BufferObject.h>
void h3d_anim_AnimatedObject_new(h3d__anim__AnimatedObject,String);
extern hl_type t$h3d_anim_BufferObject;

void h3d_anim_BufferObject_new(h3d__anim__BufferObject r0,String r1,int r2) {
	h3d_anim_AnimatedObject_new(((h3d__anim__AnimatedObject)r0),r1);
	r0->dataOffset = r2;
	return;
}

int h3d_anim_BufferObject_getStride(h3d__anim__BufferObject r0) {
	int r1, r2, r3;
	r1 = 0;
	r2 = r0->layout;
	r3 = 1;
	r2 = r2 & r3;
	r3 = 0;
	if( r2 == r3 ) goto label$26d1a17_2_9;
	r3 = 3;
	r2 = r1 + r3;
	r1 = r2;
	label$26d1a17_2_9:
	r2 = r0->layout;
	r3 = 2;
	r2 = r2 & r3;
	r3 = 0;
	if( r2 == r3 ) goto label$26d1a17_2_17;
	r3 = 3;
	r2 = r1 + r3;
	r1 = r2;
	label$26d1a17_2_17:
	r2 = r0->layout;
	r3 = 4;
	r2 = r2 & r3;
	r3 = 0;
	if( r2 == r3 ) goto label$26d1a17_2_25;
	r3 = 3;
	r2 = r1 + r3;
	r1 = r2;
	label$26d1a17_2_25:
	r2 = r0->layout;
	r3 = 8;
	r2 = r2 & r3;
	r3 = 0;
	if( r2 == r3 ) goto label$26d1a17_2_33;
	r3 = 2;
	r2 = r1 + r3;
	r1 = r2;
	label$26d1a17_2_33:
	r2 = r0->layout;
	r3 = 16;
	r2 = r2 & r3;
	r3 = 0;
	if( r2 == r3 ) goto label$26d1a17_2_39;
	++r1;
	label$26d1a17_2_39:
	r2 = r0->layout;
	r3 = 32;
	r2 = r2 & r3;
	r3 = 0;
	if( r2 == r3 ) goto label$26d1a17_2_45;
	++r1;
	label$26d1a17_2_45:
	return r1;
}

h3d__anim__AnimatedObject h3d_anim_BufferObject_clone(h3d__anim__BufferObject r0) {
	String r2;
	int r3;
	h3d__anim__BufferObject r1;
	r1 = (h3d__anim__BufferObject)hl_alloc_obj(&t$h3d_anim_BufferObject);
	r2 = r0->objectName;
	r3 = r0->dataOffset;
	h3d_anim_BufferObject_new(r1,r2,r3);
	r3 = r0->layout;
	r1->layout = r3;
	r2 = r0->propName;
	r1->propName = r2;
	return ((h3d__anim__AnimatedObject)r1);
}

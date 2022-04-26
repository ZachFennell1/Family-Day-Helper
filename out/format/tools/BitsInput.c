﻿// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <format/tools/BitsInput.h>
extern String s$Bits_error;
vdynamic* haxe_Exception_thrown(vdynamic*);

void format_tools_BitsInput_new(format__tools__BitsInput r0,haxe__io__Input r1) {
	int r2;
	r0->i = r1;
	r2 = 0;
	r0->nbits = r2;
	r2 = 0;
	r0->bits = r2;
	return;
}

int format_tools_BitsInput_readBits(format__tools__BitsInput r0,int r1) {
	String r8;
	haxe__io__Input r7;
	vdynamic *r6;
	int r2, r3, r4, r5, r9;
	r2 = r0->nbits;
	if( r2 < r1 ) goto label$b0702ca_2_13;
	r2 = r0->nbits;
	r2 = r2 - r1;
	r3 = r0->bits;
	r3 = ((unsigned)r3) >> r2;
	r4 = 1;
	r4 = r4 << r1;
	r5 = 1;
	r4 = r4 - r5;
	r3 = r3 & r4;
	r0->nbits = r2;
	return r3;
	label$b0702ca_2_13:
	r7 = r0->i;
	if( r7 == NULL ) hl_null_access();
	r2 = ((int (*)(haxe__io__Input))r7->$type->vobj_proto[0])(r7);
	r3 = r0->nbits;
	r4 = 24;
	if( r3 < r4 ) goto label$b0702ca_2_44;
	r4 = 31;
	if( r4 >= r1 ) goto label$b0702ca_2_24;
	r8 = (String)s$Bits_error;
	r6 = haxe_Exception_thrown(((vdynamic*)r8));
	hl_throw((vdynamic*)r6);
	label$b0702ca_2_24:
	r3 = 8;
	r4 = r0->nbits;
	r3 = r3 + r4;
	r3 = r3 - r1;
	r4 = r0->bits;
	r5 = 1;
	r9 = r0->nbits;
	r5 = r5 << r9;
	r9 = 1;
	r5 = r5 - r9;
	r4 = r4 & r5;
	r9 = 8;
	r9 = r9 - r3;
	r5 = r4 << r9;
	r9 = r2 << r3;
	r5 = r5 | r9;
	r4 = r5;
	r0->bits = r2;
	r0->nbits = r3;
	return r4;
	label$b0702ca_2_44:
	r3 = r0->bits;
	r4 = 8;
	r3 = r3 << r4;
	r3 = r3 | r2;
	r0->bits = r3;
	r3 = r0->nbits;
	r4 = 8;
	r3 = r3 + r4;
	r0->nbits = r3;
	r3 = format_tools_BitsInput_readBits(r0,r1);
	return r3;
}

bool format_tools_BitsInput_readBit(format__tools__BitsInput r0) {
	bool r4;
	haxe__io__Input r3;
	int r1, r2;
	r1 = r0->nbits;
	r2 = 0;
	if( r1 != r2 ) goto label$b0702ca_3_9;
	r3 = r0->i;
	if( r3 == NULL ) hl_null_access();
	r1 = ((int (*)(haxe__io__Input))r3->$type->vobj_proto[0])(r3);
	r0->bits = r1;
	r1 = 8;
	r0->nbits = r1;
	label$b0702ca_3_9:
	r1 = r0->nbits;
	--r1;
	r0->nbits = r1;
	r1 = r0->bits;
	r2 = r0->nbits;
	r1 = ((unsigned)r1) >> r2;
	r2 = 1;
	r1 = r1 & r2;
	r2 = 1;
	if( r1 == r2 ) goto label$b0702ca_3_21;
	r4 = false;
	goto label$b0702ca_3_22;
	label$b0702ca_3_21:
	r4 = true;
	label$b0702ca_3_22:
	return r4;
}

void format_tools_BitsInput_reset(format__tools__BitsInput r0) {
	int r1;
	r1 = 0;
	r0->nbits = r1;
	return;
}


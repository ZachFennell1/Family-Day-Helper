﻿// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <h2d/FontChar.h>
extern hl_type t$h2d_Kerning;
void h2d_Kerning_new(h2d__Kerning,int,double);
extern hl_type t$h2d_FontChar;
h2d__Tile h2d_Tile_clone(h2d__Tile);

void h2d_FontChar_new(h2d__FontChar r0,h2d__Tile r1,double r2) {
	r0->_t = r1;
	r0->width = r2;
	return;
}

void h2d_FontChar_addKerning(h2d__FontChar r0,int r1,int r2) {
	double r4;
	h2d__Kerning r3, r6;
	r3 = (h2d__Kerning)hl_alloc_obj(&t$h2d_Kerning);
	r4 = (double)r2;
	h2d_Kerning_new(r3,r1,r4);
	r6 = r0->kerning;
	r3->next = r6;
	r0->kerning = r3;
	return;
}

double h2d_FontChar_getKerningOffset(h2d__FontChar r0,int r1) {
	double r5;
	h2d__Kerning r2, r3;
	int r4;
	r2 = r0->kerning;
	label$9476bdb_3_1:
	if( !r2 ) goto label$9476bdb_3_11;
	if( r2 == NULL ) hl_null_access();
	r4 = r2->prevChar;
	if( r4 != r1 ) goto label$9476bdb_3_8;
	r5 = r2->offset;
	return r5;
	label$9476bdb_3_8:
	r3 = r2->next;
	r2 = r3;
	goto label$9476bdb_3_1;
	label$9476bdb_3_11:
	r5 = 0.;
	return r5;
}

h2d__FontChar h2d_FontChar_clone(h2d__FontChar r0) {
	h2d__Tile r2;
	h2d__FontChar r1;
	h2d__Kerning r5, r6, r8, r9;
	double r3;
	int r7;
	r1 = (h2d__FontChar)hl_alloc_obj(&t$h2d_FontChar);
	r2 = r0->_t;
	if( r2 == NULL ) hl_null_access();
	r2 = h2d_Tile_clone(r2);
	r3 = r0->width;
	h2d_FontChar_new(r1,r2,r3);
	r5 = r0->kerning;
	if( !r5 ) goto label$9476bdb_4_29;
	r6 = (h2d__Kerning)hl_alloc_obj(&t$h2d_Kerning);
	if( r5 == NULL ) hl_null_access();
	r7 = r5->prevChar;
	r3 = r5->offset;
	h2d_Kerning_new(r6,r7,r3);
	r1->kerning = r6;
	r8 = r5->next;
	r5 = r8;
	label$9476bdb_4_16:
	if( !r5 ) goto label$9476bdb_4_29;
	r8 = (h2d__Kerning)hl_alloc_obj(&t$h2d_Kerning);
	if( r5 == NULL ) hl_null_access();
	r7 = r5->prevChar;
	r3 = r5->offset;
	h2d_Kerning_new(r8,r7,r3);
	if( r6 == NULL ) hl_null_access();
	r6->next = r8;
	r6 = r8;
	r9 = r5->next;
	r5 = r9;
	goto label$9476bdb_4_16;
	label$9476bdb_4_29:
	return r1;
}


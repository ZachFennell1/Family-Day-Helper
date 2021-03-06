// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <hxd/CustomCursor.h>
#include <hxd/BitmapData.h>
#include <hxd/BitmapInnerDataImpl.h>
#include <hl/natives.h>
extern hl_type t$hxd_BitmapData;
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);
extern hl_type t$sdl_cursor;
extern hl_type t$_dyn;
void sdl__Cursor_Cursor_Impl__free(sdl_cursor*);

void hxd_CustomCursor_new(hxd__CustomCursor r0,hl__types__ArrayObj r1,double r2,int r3,int r4) {
	double r5;
	int r6;
	r0->frames = r1;
	r0->speed = r2;
	r0->offsetX = r3;
	r0->offsetY = r4;
	r5 = 1.;
	r5 = r5 / r2;
	r0->frameDelay = r5;
	r5 = 0.;
	r0->frameTime = r5;
	r6 = 0;
	r0->frameIndex = r6;
	return;
}

void hxd_CustomCursor_reset(hxd__CustomCursor r0) {
	double r1;
	int r2;
	r1 = 0.;
	r0->frameTime = r1;
	r2 = 0;
	r0->frameIndex = r2;
	return;
}

int hxd_CustomCursor_update(hxd__CustomCursor r0,double r1) {
	hl__types__ArrayObj r8;
	double r2, r3, r5;
	int r4, r6, r7;
	r2 = r0->frameTime;
	r2 = r2 + r1;
	r3 = r0->frameDelay;
	r4 = r0->frameIndex;
	label$f5fec1b_3_4:
	if( !(r2 >= r3) ) goto label$f5fec1b_3_10;
	r5 = r2 - r3;
	r2 = r5;
	++r4;
	goto label$f5fec1b_3_4;
	label$f5fec1b_3_10:
	r0->frameTime = r2;
	r8 = r0->frames;
	if( r8 == NULL ) hl_null_access();
	r7 = r8->length;
	if( r4 < r7 ) goto label$f5fec1b_3_20;
	r8 = r0->frames;
	if( r8 == NULL ) hl_null_access();
	r7 = r8->length;
	r6 = r7 == 0 ? 0 : r4 % r7;
	r4 = r6;
	label$f5fec1b_3_20:
	r7 = r0->frameIndex;
	if( r4 == r7 ) goto label$f5fec1b_3_24;
	r0->frameIndex = r4;
	return r4;
	label$f5fec1b_3_24:
	r6 = -1;
	return r6;
}

void hxd_CustomCursor_dispose(hxd__CustomCursor r0) {
	hl__types__ArrayObj r3;
	hl_type *r9;
	hxd__BitmapData r5;
	sdl_cursor *r10;
	hxd__BitmapInnerDataImpl r8;
	vdynamic *r6;
	varray *r7;
	int r1, r4;
	r1 = 0;
	r3 = r0->frames;
	label$f5fec1b_4_2:
	if( r3 == NULL ) hl_null_access();
	r4 = r3->length;
	if( r1 >= r4 ) goto label$f5fec1b_4_18;
	r4 = r3->length;
	if( ((unsigned)r1) < ((unsigned)r4) ) goto label$f5fec1b_4_10;
	r5 = NULL;
	goto label$f5fec1b_4_13;
	label$f5fec1b_4_10:
	r7 = r3->array;
	r6 = ((vdynamic**)(r7 + 1))[r1];
	r5 = (hxd__BitmapData)r6;
	label$f5fec1b_4_13:
	++r1;
	if( r5 == NULL ) hl_null_access();
	r8 = NULL;
	r5->data = r8;
	goto label$f5fec1b_4_2;
	label$f5fec1b_4_18:
	r9 = &t$hxd_BitmapData;
	r1 = 0;
	r7 = hl_alloc_array(r9,r1);
	r3 = hl_types_ArrayObj_alloc(r7);
	r0->frames = r3;
	r3 = r0->alloc;
	if( !r3 ) goto label$f5fec1b_4_43;
	r1 = 0;
	r3 = r0->alloc;
	label$f5fec1b_4_27:
	if( r3 == NULL ) hl_null_access();
	r4 = r3->length;
	if( r1 >= r4 ) goto label$f5fec1b_4_41;
	r4 = r3->length;
	if( ((unsigned)r1) < ((unsigned)r4) ) goto label$f5fec1b_4_35;
	r10 = NULL;
	goto label$f5fec1b_4_38;
	label$f5fec1b_4_35:
	r7 = r3->array;
	r6 = ((vdynamic**)(r7 + 1))[r1];
	r10 = (sdl_cursor*)hl_dyn_castp(&r6,&t$_dyn,&t$sdl_cursor);
	label$f5fec1b_4_38:
	++r1;
	sdl__Cursor_Cursor_Impl__free(r10);
	goto label$f5fec1b_4_27;
	label$f5fec1b_4_41:
	r3 = NULL;
	r0->alloc = r3;
	label$f5fec1b_4_43:
	return;
}


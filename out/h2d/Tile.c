﻿// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <h2d/Tile.h>
#include <hl/natives.h>
void h2d_Tile_setTexture(h2d__Tile,h3d__mat__Texture);
extern hl_type t$h2d_Tile;
extern hl_type t$_f64;
void h3d_mat_Texture_dispose(h3d__mat__Texture);
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);
int hl_types_ArrayObj_push(hl__types__ArrayObj,vdynamic*);
extern hl_type t$hl_types_ArrayObj;
String h2d_Tile_toString(h2d__Tile);
extern String s$Tile_;
String String___alloc__(vbyte*,int);
String String___add__(String,String);
extern String s$c0cb5f0;
extern String s$x;
extern String s$853ae90;
extern String s$;
extern String s$9371d7a;
void h3d_mat_Texture_uploadBitmap(h3d__mat__Texture,hxd__BitmapData,int*,int*);
extern hl_type t$_i32;
h3d__mat__Texture h3d_mat_Texture_fromColor(int,vdynamic*);
#include <hxd/BitmapInnerDataImpl.h>
h3d__mat__Texture h3d_mat_Texture_fromBitmap(hxd__BitmapData);
#include <hxd/PixelFormat.h>
int hxd_BitmapData_getPixel(hxd__BitmapData,int,int);
void hl_types_ArrayObj_new(hl__types__ArrayObj);
extern hl_type t$h3d_mat_Texture;
void h3d_mat_Texture_new(h3d__mat__Texture,int,int,hl__types__ArrayObj,venum*);
void hl_types_ArrayObj___expand(hl__types__ArrayObj,int);
vvirtual* h2d_Tile_isEmpty(hxd__BitmapData,int,int,int,int,int);
extern hl_type t$vrt_c71459d;
hxd__Pixels hxd_Pixels_makeSquare(hxd__Pixels,vdynamic*);
h3d__mat__Texture h3d_mat_Texture_fromPixels(hxd__Pixels);
void hxd_Pixels_dispose(hxd__Pixels);
void hxd_BitmapData_setPixel(hxd__BitmapData,int,int,int);
extern hl_type t$vrt_450e512;

int h2d_Tile_get_ix(h2d__Tile r0) {
	double r2;
	int r1;
	r2 = r0->x;
	r1 = hl_math_floor(r2);
	return r1;
}

int h2d_Tile_get_iy(h2d__Tile r0) {
	double r2;
	int r1;
	r2 = r0->y;
	r1 = hl_math_floor(r2);
	return r1;
}

int h2d_Tile_get_iwidth(h2d__Tile r0) {
	double r2, r3;
	int r1, r4;
	r2 = r0->width;
	r3 = r0->x;
	r2 = r2 + r3;
	r1 = hl_math_ceil(r2);
	r2 = r0->x;
	r4 = hl_math_floor(r2);
	r1 = r1 - r4;
	return r1;
}

int h2d_Tile_get_iheight(h2d__Tile r0) {
	double r2, r3;
	int r1, r4;
	r2 = r0->height;
	r3 = r0->y;
	r2 = r2 + r3;
	r1 = hl_math_ceil(r2);
	r2 = r0->y;
	r4 = hl_math_floor(r2);
	r1 = r1 - r4;
	return r1;
}

void h2d_Tile_new(h2d__Tile r0,h3d__mat__Texture r1,double r2,double r3,double r4,double r5,double* r6,double* r7) {
	double r8, r9;
	if( r6 ) goto label$d9e4160_5_3;
	r8 = 0.;
	goto label$d9e4160_5_4;
	label$d9e4160_5_3:
	r8 = *r6;
	label$d9e4160_5_4:
	if( r7 ) goto label$d9e4160_5_7;
	r9 = 0.;
	goto label$d9e4160_5_8;
	label$d9e4160_5_7:
	r9 = *r7;
	label$d9e4160_5_8:
	r0->innerTex = r1;
	r0->x = r2;
	r0->y = r3;
	r0->width = r4;
	r0->height = r5;
	r0->dx = r8;
	r0->dy = r9;
	if( !r1 ) goto label$d9e4160_5_17;
	h2d_Tile_setTexture(r0,r1);
	label$d9e4160_5_17:
	return;
}

h3d__mat__Texture h2d_Tile_getTexture(h2d__Tile r0) {
	h3d__mat__Texture r1;
	r1 = r0->innerTex;
	return r1;
}

bool h2d_Tile_isDisposed(h2d__Tile r0) {
	vvirtual *r2;
	bool r3;
	vclosure *r4, *r5;
	h3d__mat__Texture r1;
	r1 = r0->innerTex;
	if( !r1 ) goto label$d9e4160_7_15;
	r1 = r0->innerTex;
	if( r1 == NULL ) hl_null_access();
	r2 = r1->_t;
	if( r2 ) goto label$d9e4160_7_13;
	r4 = r1->realloc;
	r5 = NULL;
	{ int i = hl_dyn_compare((vdynamic*)r4,(vdynamic*)r5); if( i == 0 ) goto label$d9e4160_7_11; };
	r3 = false;
	goto label$d9e4160_7_12;
	label$d9e4160_7_11:
	r3 = true;
	label$d9e4160_7_12:
	return r3;
	label$d9e4160_7_13:
	r3 = false;
	return r3;
	label$d9e4160_7_15:
	r3 = true;
	return r3;
}

void h2d_Tile_setTexture(h2d__Tile r0,h3d__mat__Texture r1) {
	double r3, r5;
	int r4;
	r0->innerTex = r1;
	if( !r1 ) goto label$d9e4160_8_27;
	r3 = r0->x;
	if( r1 == NULL ) hl_null_access();
	r4 = r1->width;
	r5 = (double)r4;
	r3 = r3 / r5;
	r0->u = r3;
	r3 = r0->y;
	r4 = r1->height;
	r5 = (double)r4;
	r3 = r3 / r5;
	r0->v = r3;
	r3 = r0->x;
	r5 = r0->width;
	r3 = r3 + r5;
	r4 = r1->width;
	r5 = (double)r4;
	r3 = r3 / r5;
	r0->u2 = r3;
	r3 = r0->y;
	r5 = r0->height;
	r3 = r3 + r5;
	r4 = r1->height;
	r5 = (double)r4;
	r3 = r3 / r5;
	r0->v2 = r3;
	label$d9e4160_8_27:
	return;
}

void h2d_Tile_switchTexture(h2d__Tile r0,h2d__Tile r1) {
	h3d__mat__Texture r3;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->innerTex;
	h2d_Tile_setTexture(r0,r3);
	return;
}

h2d__Tile h2d_Tile_sub(h2d__Tile r0,double r1,double r2,double r3,double r4,double* r5,double* r6) {
	h2d__Tile r9;
	double r7, r8, r11, r12, r13, r14;
	h3d__mat__Texture r10;
	if( r5 ) goto label$d9e4160_10_3;
	r7 = 0.;
	goto label$d9e4160_10_4;
	label$d9e4160_10_3:
	r7 = *r5;
	label$d9e4160_10_4:
	if( r6 ) goto label$d9e4160_10_7;
	r8 = 0.;
	goto label$d9e4160_10_8;
	label$d9e4160_10_7:
	r8 = *r6;
	label$d9e4160_10_8:
	r9 = (h2d__Tile)hl_alloc_obj(&t$h2d_Tile);
	r10 = r0->innerTex;
	r11 = r0->x;
	r11 = r11 + r1;
	r12 = r0->y;
	r12 = r12 + r2;
	r13 = r7;
	r5 = &r13;
	r14 = r8;
	r6 = &r14;
	h2d_Tile_new(r9,r10,r11,r12,r3,r4,r5,r6);
	return r9;
}

h2d__Tile h2d_Tile_center(h2d__Tile r0) {
	h2d__Tile r1;
	double r2, r3, r4, r5, r6, r7, r9;
	double *r8, *r10;
	r2 = 0.;
	r3 = 0.;
	r4 = r0->width;
	r5 = r0->height;
	r6 = r0->width;
	r7 = 0.5;
	r6 = r6 * r7;
	r6 = -r6;
	r8 = &r6;
	r7 = r0->height;
	r9 = 0.5;
	r7 = r7 * r9;
	r7 = -r7;
	r10 = &r7;
	r1 = h2d_Tile_sub(r0,r2,r3,r4,r5,r8,r10);
	return r1;
}

void h2d_Tile_setCenterRatio(h2d__Tile r0,vdynamic* r1,vdynamic* r2) {
	double r3, r4;
	if( r1 ) goto label$d9e4160_12_3;
	r3 = 0.5;
	r1 = hl_alloc_dynamic(&t$_f64);
	r1->v.d = r3;
	label$d9e4160_12_3:
	if( r2 ) goto label$d9e4160_12_6;
	r3 = 0.5;
	r2 = hl_alloc_dynamic(&t$_f64);
	r2->v.d = r3;
	label$d9e4160_12_6:
	r3 = r1 ? r1->v.d : 0;
	r4 = r0->width;
	r3 = r3 * r4;
	r3 = -r3;
	r0->dx = r3;
	r3 = r2 ? r2->v.d : 0;
	r4 = r0->height;
	r3 = r3 * r4;
	r3 = -r3;
	r0->dy = r3;
	return;
}

void h2d_Tile_flipX(h2d__Tile r0) {
	double r1, r3, r4;
	r1 = r0->u;
	r3 = r0->u2;
	r0->u = r3;
	r0->u2 = r1;
	r3 = r0->dx;
	r3 = -r3;
	r4 = r0->width;
	r3 = r3 - r4;
	r0->dx = r3;
	return;
}

void h2d_Tile_flipY(h2d__Tile r0) {
	double r1, r3, r4;
	r1 = r0->v;
	r3 = r0->v2;
	r0->v = r3;
	r0->v2 = r1;
	r3 = r0->dy;
	r3 = -r3;
	r4 = r0->height;
	r3 = r3 - r4;
	r0->dy = r3;
	return;
}

void h2d_Tile_setPosition(h2d__Tile r0,double r1,double r2) {
	double r3, r7;
	int r6;
	h3d__mat__Texture r4;
	r0->x = r1;
	r0->y = r2;
	r4 = r0->innerTex;
	if( !r4 ) goto label$d9e4160_15_25;
	if( r4 == NULL ) hl_null_access();
	r6 = r4->width;
	r7 = (double)r6;
	r3 = r1 / r7;
	r0->u = r3;
	r6 = r4->height;
	r7 = (double)r6;
	r3 = r2 / r7;
	r0->v = r3;
	r7 = r0->width;
	r3 = r1 + r7;
	r6 = r4->width;
	r7 = (double)r6;
	r3 = r3 / r7;
	r0->u2 = r3;
	r7 = r0->height;
	r3 = r2 + r7;
	r6 = r4->height;
	r7 = (double)r6;
	r3 = r3 / r7;
	r0->v2 = r3;
	label$d9e4160_15_25:
	return;
}

void h2d_Tile_setSize(h2d__Tile r0,double r1,double r2) {
	double r3, r6;
	int r7;
	h3d__mat__Texture r4;
	r0->width = r1;
	r0->height = r2;
	r4 = r0->innerTex;
	if( !r4 ) goto label$d9e4160_16_17;
	r3 = r0->x;
	r3 = r3 + r1;
	if( r4 == NULL ) hl_null_access();
	r7 = r4->width;
	r6 = (double)r7;
	r3 = r3 / r6;
	r0->u2 = r3;
	r3 = r0->y;
	r3 = r3 + r2;
	r7 = r4->height;
	r6 = (double)r7;
	r3 = r3 / r6;
	r0->v2 = r3;
	label$d9e4160_16_17:
	return;
}

void h2d_Tile_scaleToSize(h2d__Tile r0,double r1,double r2) {
	r0->width = r1;
	r0->height = r2;
	return;
}

void h2d_Tile_scrollDiscrete(h2d__Tile r0,double r1,double r2) {
	double r5, r6, r8;
	int r7;
	h3d__mat__Texture r3;
	r3 = r0->innerTex;
	r5 = r0->u;
	if( r3 == NULL ) hl_null_access();
	r7 = r3->width;
	r8 = (double)r7;
	r6 = r1 / r8;
	r5 = r5 + r6;
	r0->u = r5;
	r5 = r0->v;
	r7 = r3->height;
	r8 = (double)r7;
	r6 = r2 / r8;
	r5 = r5 - r6;
	r0->v = r5;
	r5 = r0->u2;
	r7 = r3->width;
	r8 = (double)r7;
	r6 = r1 / r8;
	r5 = r5 + r6;
	r0->u2 = r5;
	r5 = r0->v2;
	r7 = r3->height;
	r8 = (double)r7;
	r6 = r2 / r8;
	r5 = r5 - r6;
	r0->v2 = r5;
	r5 = r0->u;
	r7 = r3->width;
	r6 = (double)r7;
	r5 = r5 * r6;
	r0->x = r5;
	r5 = r0->v;
	r7 = r3->height;
	r6 = (double)r7;
	r5 = r5 * r6;
	r0->y = r5;
	return;
}

void h2d_Tile_dispose(h2d__Tile r0) {
	h3d__mat__Texture r2;
	r2 = r0->innerTex;
	if( !r2 ) goto label$d9e4160_19_5;
	r2 = r0->innerTex;
	if( r2 == NULL ) hl_null_access();
	h3d_mat_Texture_dispose(r2);
	label$d9e4160_19_5:
	r2 = NULL;
	r0->innerTex = r2;
	return;
}

h2d__Tile h2d_Tile_clone(h2d__Tile r0) {
	h2d__Tile r1;
	double r3, r4, r5, r6, r7, r9;
	double *r8, *r10;
	h3d__mat__Texture r2;
	r1 = (h2d__Tile)hl_alloc_obj(&t$h2d_Tile);
	r2 = NULL;
	r3 = r0->x;
	r4 = r0->y;
	r5 = r0->width;
	r6 = r0->height;
	r7 = r0->dx;
	r8 = &r7;
	r9 = r0->dy;
	r10 = &r9;
	h2d_Tile_new(r1,r2,r3,r4,r5,r6,r8,r10);
	r2 = r0->innerTex;
	r1->innerTex = r2;
	r3 = r0->u;
	r1->u = r3;
	r3 = r0->u2;
	r1->u2 = r3;
	r3 = r0->v;
	r1->v = r3;
	r3 = r0->v2;
	r1->v2 = r3;
	return r1;
}

bool h2d_Tile_get_xFlip(h2d__Tile r0) {
	bool r1;
	double r2, r3;
	r2 = r0->u2;
	r3 = r0->u;
	if( r2 < r3 ) goto label$d9e4160_21_5;
	r1 = false;
	goto label$d9e4160_21_6;
	label$d9e4160_21_5:
	r1 = true;
	label$d9e4160_21_6:
	return r1;
}

bool h2d_Tile_get_yFlip(h2d__Tile r0) {
	bool r1;
	double r2, r3;
	r2 = r0->v2;
	r3 = r0->v;
	if( r2 < r3 ) goto label$d9e4160_22_5;
	r1 = false;
	goto label$d9e4160_22_6;
	label$d9e4160_22_5:
	r1 = true;
	label$d9e4160_22_6:
	return r1;
}

bool h2d_Tile_set_xFlip(h2d__Tile r0,bool r1) {
	bool r3;
	r3 = h2d_Tile_get_xFlip(r0);
	if( r1 == r3 ) goto label$d9e4160_23_3;
	h2d_Tile_flipX(r0);
	label$d9e4160_23_3:
	return r1;
}

bool h2d_Tile_set_yFlip(h2d__Tile r0,bool r1) {
	bool r3;
	r3 = h2d_Tile_get_yFlip(r0);
	if( r1 == r3 ) goto label$d9e4160_24_3;
	h2d_Tile_flipY(r0);
	label$d9e4160_24_3:
	return r1;
}

hl__types__ArrayObj h2d_Tile_split(h2d__Tile r0,int* r1,bool* r2,bool* r3) {
	hl__types__ArrayObj r7;
	hl_type *r9;
	bool r5, r6;
	h2d__Tile r17;
	double r12, r13, r14, r18, r19;
	double *r20, *r21;
	varray *r8;
	int r4, r10, r11, r15, r16;
	if( r1 ) goto label$d9e4160_25_3;
	r4 = 0;
	goto label$d9e4160_25_4;
	label$d9e4160_25_3:
	r4 = *r1;
	label$d9e4160_25_4:
	if( r2 ) goto label$d9e4160_25_7;
	r5 = false;
	goto label$d9e4160_25_8;
	label$d9e4160_25_7:
	r5 = *r2;
	label$d9e4160_25_8:
	if( r3 ) goto label$d9e4160_25_11;
	r6 = false;
	goto label$d9e4160_25_12;
	label$d9e4160_25_11:
	r6 = *r3;
	label$d9e4160_25_12:
	r9 = &t$h2d_Tile;
	r10 = 0;
	r8 = hl_alloc_array(r9,r10);
	r7 = hl_types_ArrayObj_alloc(r8);
	if( !r5 ) goto label$d9e4160_25_53;
	r11 = 0;
	if( r4 != r11 ) goto label$d9e4160_25_24;
	r12 = r0->height;
	r13 = r0->width;
	r12 = r12 / r13;
	r10 = (int)r12;
	r4 = r10;
	label$d9e4160_25_24:
	if( !r6 ) goto label$d9e4160_25_30;
	r13 = r0->height;
	r14 = (double)r4;
	r13 = r13 / r14;
	r12 = r13;
	goto label$d9e4160_25_36;
	label$d9e4160_25_30:
	r13 = r0->height;
	r14 = (double)r4;
	r13 = r13 / r14;
	r10 = (int)r13;
	r14 = (double)r10;
	r12 = r14;
	label$d9e4160_25_36:
	r10 = 0;
	r11 = r4;
	label$d9e4160_25_38:
	if( r10 >= r11 ) goto label$d9e4160_25_52;
	r15 = r10;
	++r10;
	if( r7 == NULL ) hl_null_access();
	r13 = 0.;
	r14 = (double)r15;
	r14 = r14 * r12;
	r18 = r0->width;
	r20 = NULL;
	r21 = NULL;
	r17 = h2d_Tile_sub(r0,r13,r14,r18,r12,r20,r21);
	r16 = hl_types_ArrayObj_push(r7,((vdynamic*)r17));
	goto label$d9e4160_25_38;
	label$d9e4160_25_52:
	goto label$d9e4160_25_88;
	label$d9e4160_25_53:
	r11 = 0;
	if( r4 != r11 ) goto label$d9e4160_25_60;
	r12 = r0->width;
	r13 = r0->height;
	r12 = r12 / r13;
	r10 = (int)r12;
	r4 = r10;
	label$d9e4160_25_60:
	if( !r6 ) goto label$d9e4160_25_66;
	r13 = r0->width;
	r14 = (double)r4;
	r13 = r13 / r14;
	r12 = r13;
	goto label$d9e4160_25_72;
	label$d9e4160_25_66:
	r13 = r0->width;
	r14 = (double)r4;
	r13 = r13 / r14;
	r10 = (int)r13;
	r14 = (double)r10;
	r12 = r14;
	label$d9e4160_25_72:
	r10 = 0;
	r11 = r4;
	label$d9e4160_25_74:
	if( r10 >= r11 ) goto label$d9e4160_25_88;
	r15 = r10;
	++r10;
	if( r7 == NULL ) hl_null_access();
	r13 = (double)r15;
	r13 = r13 * r12;
	r14 = 0.;
	r19 = r0->height;
	r20 = NULL;
	r21 = NULL;
	r17 = h2d_Tile_sub(r0,r13,r14,r12,r19,r20,r21);
	r16 = hl_types_ArrayObj_push(r7,((vdynamic*)r17));
	goto label$d9e4160_25_74;
	label$d9e4160_25_88:
	return r7;
}

hl__types__ArrayObj h2d_Tile_gridFlatten(h2d__Tile r0,double r1,double* r2,double* r3) {
	hl__types__ArrayObj r6;
	hl_type *r8;
	h2d__Tile r19;
	double r4, r5, r10, r11, r15, r20, r21, r22;
	int r9, r12, r13, r14, r16, r17, r18;
	varray *r7;
	if( r2 ) goto label$d9e4160_26_3;
	r4 = 0.;
	goto label$d9e4160_26_4;
	label$d9e4160_26_3:
	r4 = *r2;
	label$d9e4160_26_4:
	if( r3 ) goto label$d9e4160_26_7;
	r5 = 0.;
	goto label$d9e4160_26_8;
	label$d9e4160_26_7:
	r5 = *r3;
	label$d9e4160_26_8:
	r8 = &t$h2d_Tile;
	r9 = 0;
	r7 = hl_alloc_array(r8,r9);
	r6 = hl_types_ArrayObj_alloc(r7);
	r9 = 0;
	r10 = r0->height;
	r10 = r10 / r1;
	r12 = (int)r10;
	label$d9e4160_26_16:
	if( r9 >= r12 ) goto label$d9e4160_26_41;
	r13 = r9;
	++r9;
	r14 = 0;
	r11 = r0->width;
	r11 = r11 / r1;
	r16 = (int)r11;
	label$d9e4160_26_24:
	if( r14 >= r16 ) goto label$d9e4160_26_40;
	r17 = r14;
	++r14;
	if( r6 == NULL ) hl_null_access();
	r15 = (double)r17;
	r15 = r15 * r1;
	r20 = (double)r13;
	r20 = r20 * r1;
	r21 = r4;
	r2 = &r21;
	r22 = r5;
	r3 = &r22;
	r19 = h2d_Tile_sub(r0,r15,r20,r1,r1,r2,r3);
	r18 = hl_types_ArrayObj_push(r6,((vdynamic*)r19));
	goto label$d9e4160_26_24;
	label$d9e4160_26_40:
	goto label$d9e4160_26_16;
	label$d9e4160_26_41:
	return r6;
}

hl__types__ArrayObj h2d_Tile_grid(h2d__Tile r0,double r1,double* r2,double* r3) {
	hl__types__ArrayObj r6, r15;
	hl_type *r8;
	h2d__Tile r20;
	double r4, r5, r10, r11, r16, r21, r22, r23;
	int r9, r12, r13, r14, r17, r18, r19;
	varray *r7;
	if( r2 ) goto label$d9e4160_27_3;
	r4 = 0.;
	goto label$d9e4160_27_4;
	label$d9e4160_27_3:
	r4 = *r2;
	label$d9e4160_27_4:
	if( r3 ) goto label$d9e4160_27_7;
	r5 = 0.;
	goto label$d9e4160_27_8;
	label$d9e4160_27_7:
	r5 = *r3;
	label$d9e4160_27_8:
	r8 = &t$hl_types_ArrayObj;
	r9 = 0;
	r7 = hl_alloc_array(r8,r9);
	r6 = hl_types_ArrayObj_alloc(r7);
	r9 = 0;
	r10 = r0->width;
	r10 = r10 / r1;
	r12 = (int)r10;
	label$d9e4160_27_16:
	if( r9 >= r12 ) goto label$d9e4160_27_47;
	r13 = r9;
	++r9;
	r8 = &t$h2d_Tile;
	r14 = 0;
	r7 = hl_alloc_array(r8,r14);
	r15 = hl_types_ArrayObj_alloc(r7);
	r14 = 0;
	r11 = r0->height;
	r11 = r11 / r1;
	r17 = (int)r11;
	label$d9e4160_27_28:
	if( r14 >= r17 ) goto label$d9e4160_27_44;
	r18 = r14;
	++r14;
	if( r15 == NULL ) hl_null_access();
	r16 = (double)r13;
	r16 = r16 * r1;
	r21 = (double)r18;
	r21 = r21 * r1;
	r22 = r4;
	r2 = &r22;
	r23 = r5;
	r3 = &r23;
	r20 = h2d_Tile_sub(r0,r16,r21,r1,r1,r2,r3);
	r19 = hl_types_ArrayObj_push(r15,((vdynamic*)r20));
	goto label$d9e4160_27_28;
	label$d9e4160_27_44:
	if( r6 == NULL ) hl_null_access();
	r14 = hl_types_ArrayObj_push(r6,((vdynamic*)r15));
	goto label$d9e4160_27_16;
	label$d9e4160_27_47:
	return r6;
}

vbyte* h2d_Tile___string(h2d__Tile r0) {
	String r2;
	vbyte *r1;
	r2 = h2d_Tile_toString(r0);
	if( r2 == NULL ) hl_null_access();
	r1 = r2->bytes;
	return r1;
}

String h2d_Tile_toString(h2d__Tile r0) {
	String r1, r6, r8;
	double r2, r7;
	int *r4;
	vbyte *r5;
	int r3;
	r1 = (String)s$Tile_;
	r2 = r0->x;
	r4 = &r3;
	r5 = hl_ftos(r2,r4);
	r6 = String___alloc__(r5,r3);
	r1 = String___add__(r1,r6);
	r6 = (String)s$c0cb5f0;
	r1 = String___add__(r1,r6);
	r2 = r0->y;
	r4 = &r3;
	r5 = hl_ftos(r2,r4);
	r6 = String___alloc__(r5,r3);
	r1 = String___add__(r1,r6);
	r6 = (String)s$c0cb5f0;
	r1 = String___add__(r1,r6);
	r2 = r0->width;
	r4 = &r3;
	r5 = hl_ftos(r2,r4);
	r6 = String___alloc__(r5,r3);
	r1 = String___add__(r1,r6);
	r6 = (String)s$x;
	r1 = String___add__(r1,r6);
	r2 = r0->height;
	r4 = &r3;
	r5 = hl_ftos(r2,r4);
	r6 = String___alloc__(r5,r3);
	r1 = String___add__(r1,r6);
	r2 = r0->dx;
	r7 = 0.;
	if( r2 != r7 ) goto label$d9e4160_29_33;
	r2 = r0->dy;
	r7 = 0.;
	if( r2 == r7 ) goto label$d9e4160_29_47;
	label$d9e4160_29_33:
	r6 = (String)s$c0cb5f0;
	r2 = r0->dx;
	r4 = &r3;
	r5 = hl_ftos(r2,r4);
	r8 = String___alloc__(r5,r3);
	r6 = String___add__(r6,r8);
	r8 = (String)s$853ae90;
	r6 = String___add__(r6,r8);
	r2 = r0->dy;
	r4 = &r3;
	r5 = hl_ftos(r2,r4);
	r8 = String___alloc__(r5,r3);
	r6 = String___add__(r6,r8);
	goto label$d9e4160_29_48;
	label$d9e4160_29_47:
	r6 = (String)s$;
	label$d9e4160_29_48:
	r1 = String___add__(r1,r6);
	r6 = (String)s$9371d7a;
	r1 = String___add__(r1,r6);
	return r1;
}

void h2d_Tile_upload(h2d__Tile r0,hxd__BitmapData r1) {
	int *r6, *r7;
	h3d__mat__Texture r3;
	int r2, r5;
	r3 = r0->innerTex;
	if( r3 == NULL ) hl_null_access();
	r2 = r3->width;
	r3 = r0->innerTex;
	if( r3 == NULL ) hl_null_access();
	r5 = r3->height;
	r3 = r0->innerTex;
	if( r3 == NULL ) hl_null_access();
	r6 = NULL;
	r7 = NULL;
	h3d_mat_Texture_uploadBitmap(r3,r1,r6,r7);
	return;
}

h2d__Tile h2d_Tile_fromColor(int r0,vdynamic* r1,vdynamic* r2,vdynamic* r3) {
	h2d__Tile r6;
	double r5, r8, r9, r10;
	double *r11, *r12;
	h3d__mat__Texture r7;
	int r4;
	if( r1 ) goto label$d9e4160_31_3;
	r4 = 1;
	r1 = hl_alloc_dynamic(&t$_i32);
	r1->v.i = r4;
	label$d9e4160_31_3:
	if( r2 ) goto label$d9e4160_31_6;
	r4 = 1;
	r2 = hl_alloc_dynamic(&t$_i32);
	r2->v.i = r4;
	label$d9e4160_31_6:
	if( r3 ) goto label$d9e4160_31_9;
	r5 = 1.;
	r3 = hl_alloc_dynamic(&t$_f64);
	r3->v.d = r5;
	label$d9e4160_31_9:
	r6 = (h2d__Tile)hl_alloc_obj(&t$h2d_Tile);
	r7 = h3d_mat_Texture_fromColor(r0,r3);
	r5 = 0.;
	r8 = 0.;
	r9 = 1.;
	r10 = 1.;
	r11 = NULL;
	r12 = NULL;
	h2d_Tile_new(r6,r7,r5,r8,r9,r10,r11,r12);
	r4 = r1 ? r1->v.i : 0;
	r5 = (double)r4;
	r6->width = r5;
	r4 = r2 ? r2->v.i : 0;
	r5 = (double)r4;
	r6->height = r5;
	return r6;
}

h2d__Tile h2d_Tile_fromBitmap(hxd__BitmapData r0) {
	h2d__Tile r3;
	hxd__BitmapInnerDataImpl r7;
	double r4, r5, r8, r9;
	double *r10, *r11;
	int r6;
	h3d__mat__Texture r1;
	r1 = h3d_mat_Texture_fromBitmap(r0);
	r3 = (h2d__Tile)hl_alloc_obj(&t$h2d_Tile);
	r4 = 0.;
	r5 = 0.;
	if( r0 == NULL ) hl_null_access();
	r7 = r0->data;
	if( r7 == NULL ) hl_null_access();
	r6 = r7->width;
	r8 = (double)r6;
	r7 = r0->data;
	if( r7 == NULL ) hl_null_access();
	r6 = r7->height;
	r9 = (double)r6;
	r10 = NULL;
	r11 = NULL;
	h2d_Tile_new(r3,r1,r4,r5,r8,r9,r10,r11);
	return r3;
}

vvirtual* h2d_Tile_autoCut(hxd__BitmapData r0,int r1,vdynamic* r2) {
	vvirtual *r25, *r37;
	hl__types__ArrayObj r9, r13;
	hl_type *r20;
	venum *r14;
	h2d__Tile r29;
	double r15, r16, r22, r30, r31, r32, r33, r35;
	hxd__BitmapInnerDataImpl r6;
	double *r34, *r36;
	vdynamic *r4;
	varray *r19;
	h3d__mat__Texture r12;
	int r5, r7, r8, r10, r11, r17, r18, r21, r23, r24, r26, r27, r28;
	if( r2 ) goto label$d9e4160_33_3;
	r4 = hl_alloc_dynamic(&t$_i32);
	r4->v.i = r1;
	r2 = r4;
	label$d9e4160_33_3:
	if( r0 == NULL ) hl_null_access();
	r6 = r0->data;
	if( r6 == NULL ) hl_null_access();
	r5 = r6->width;
	r7 = 1;
	r5 = r5 - r7;
	r6 = r0->data;
	if( r6 == NULL ) hl_null_access();
	r7 = r6->height;
	r8 = 1;
	r7 = r7 - r8;
	r5 = hxd_BitmapData_getPixel(r0,r5,r7);
	r9 = (hl__types__ArrayObj)hl_alloc_obj(&t$hl_types_ArrayObj);
	hl_types_ArrayObj_new(r9);
	r7 = 1;
	r8 = 1;
	label$d9e4160_33_19:
	if( r0 == NULL ) hl_null_access();
	r6 = r0->data;
	if( r6 == NULL ) hl_null_access();
	r11 = r6->width;
	if( r7 >= r11 ) goto label$d9e4160_33_29;
	r11 = 1;
	r10 = r7 << r11;
	r7 = r10;
	goto label$d9e4160_33_19;
	label$d9e4160_33_29:
	if( r0 == NULL ) hl_null_access();
	r6 = r0->data;
	if( r6 == NULL ) hl_null_access();
	r11 = r6->height;
	if( r8 >= r11 ) goto label$d9e4160_33_39;
	r11 = 1;
	r10 = r8 << r11;
	r8 = r10;
	goto label$d9e4160_33_29;
	label$d9e4160_33_39:
	r12 = (h3d__mat__Texture)hl_alloc_obj(&t$h3d_mat_Texture);
	r13 = NULL;
	r14 = NULL;
	h3d_mat_Texture_new(r12,r7,r8,r13,r14);
	r10 = 0;
	r6 = r0->data;
	if( r6 == NULL ) hl_null_access();
	r11 = r6->height;
	r15 = (double)r11;
	r11 = r2 ? r2->v.i : 0;
	r16 = (double)r11;
	r15 = r15 / r16;
	r11 = (int)r15;
	label$d9e4160_33_52:
	if( r10 >= r11 ) goto label$d9e4160_33_112;
	r17 = r10;
	++r10;
	r20 = &t$h2d_Tile;
	r18 = 0;
	r19 = hl_alloc_array(r20,r18);
	r13 = hl_types_ArrayObj_alloc(r19);
	if( r9 == NULL ) hl_null_access();
	r21 = r9->length;
	if( ((unsigned)r17) < ((unsigned)r21) ) goto label$d9e4160_33_64;
	hl_types_ArrayObj___expand(r9,r17);
	label$d9e4160_33_64:
	r19 = r9->array;
	((hl__types__ArrayObj*)(r19 + 1))[r17] = r13;
	r18 = 0;
	if( r0 == NULL ) hl_null_access();
	r6 = r0->data;
	if( r6 == NULL ) hl_null_access();
	r21 = r6->width;
	r16 = (double)r21;
	r22 = (double)r1;
	r16 = r16 / r22;
	r21 = (int)r16;
	label$d9e4160_33_75:
	if( r18 >= r21 ) goto label$d9e4160_33_111;
	r23 = r18;
	++r18;
	r24 = r23 * r1;
	r27 = r2 ? r2->v.i : 0;
	r26 = r17 * r27;
	r28 = r2 ? r2->v.i : 0;
	r25 = h2d_Tile_isEmpty(r0,r24,r26,r1,r28,r5);
	if( r25 ) goto label$d9e4160_33_86;
	goto label$d9e4160_33_111;
	label$d9e4160_33_86:
	if( r13 == NULL ) hl_null_access();
	r29 = (h2d__Tile)hl_alloc_obj(&t$h2d_Tile);
	r24 = r23 * r1;
	if( r25 == NULL ) hl_null_access();
	r26 = hl_vfields(r25)[0] ? (*(int*)(hl_vfields(r25)[0])) : (int)hl_dyn_geti(r25->value,22420/*dx*/,&t$_i32);
	r24 = r24 + r26;
	r22 = (double)r24;
	r26 = r2 ? r2->v.i : 0;
	r24 = r17 * r26;
	r26 = hl_vfields(r25)[1] ? (*(int*)(hl_vfields(r25)[1])) : (int)hl_dyn_geti(r25->value,22421/*dy*/,&t$_i32);
	r24 = r24 + r26;
	r30 = (double)r24;
	r24 = hl_vfields(r25)[3] ? (*(int*)(hl_vfields(r25)[3])) : (int)hl_dyn_geti(r25->value,119/*w*/,&t$_i32);
	r31 = (double)r24;
	r24 = hl_vfields(r25)[2] ? (*(int*)(hl_vfields(r25)[2])) : (int)hl_dyn_geti(r25->value,104/*h*/,&t$_i32);
	r32 = (double)r24;
	r24 = hl_vfields(r25)[0] ? (*(int*)(hl_vfields(r25)[0])) : (int)hl_dyn_geti(r25->value,22420/*dx*/,&t$_i32);
	r33 = (double)r24;
	r34 = &r33;
	r24 = hl_vfields(r25)[1] ? (*(int*)(hl_vfields(r25)[1])) : (int)hl_dyn_geti(r25->value,22421/*dy*/,&t$_i32);
	r35 = (double)r24;
	r36 = &r35;
	h2d_Tile_new(r29,r12,r22,r30,r31,r32,r34,r36);
	r24 = hl_types_ArrayObj_push(r13,((vdynamic*)r29));
	goto label$d9e4160_33_75;
	label$d9e4160_33_111:
	goto label$d9e4160_33_52;
	label$d9e4160_33_112:
	r29 = (h2d__Tile)hl_alloc_obj(&t$h2d_Tile);
	r15 = 0.;
	r16 = 0.;
	if( r0 == NULL ) hl_null_access();
	r6 = r0->data;
	if( r6 == NULL ) hl_null_access();
	r10 = r6->width;
	r22 = (double)r10;
	r6 = r0->data;
	if( r6 == NULL ) hl_null_access();
	r10 = r6->height;
	r30 = (double)r10;
	r34 = NULL;
	r36 = NULL;
	h2d_Tile_new(r29,r12,r15,r16,r22,r30,r34,r36);
	h2d_Tile_upload(r29,r0);
	r37 = hl_alloc_virtual(&t$vrt_c71459d);
	if( hl_vfields(r37)[0] ) *(h2d__Tile*)(hl_vfields(r37)[0]) = (h2d__Tile)r29; else hl_dyn_setp(r37->value,139868483/*main*/,&t$h2d_Tile,r29);
	if( hl_vfields(r37)[1] ) *(hl__types__ArrayObj*)(hl_vfields(r37)[1]) = (hl__types__ArrayObj)r9; else hl_dyn_setp(r37->value,271908229/*tiles*/,&t$hl_types_ArrayObj,r9);
	return r37;
}

h2d__Tile h2d_Tile_fromTexture(h3d__mat__Texture r0) {
	h2d__Tile r1;
	double r2, r3, r5, r6;
	double *r7, *r8;
	int r4;
	r1 = (h2d__Tile)hl_alloc_obj(&t$h2d_Tile);
	r2 = 0.;
	r3 = 0.;
	if( r0 == NULL ) hl_null_access();
	r4 = r0->width;
	r5 = (double)r4;
	r4 = r0->height;
	r6 = (double)r4;
	r7 = NULL;
	r8 = NULL;
	h2d_Tile_new(r1,r0,r2,r3,r5,r6,r7,r8);
	return r1;
}

h2d__Tile h2d_Tile_fromPixels(hxd__Pixels r0) {
	hxd__Pixels r1;
	bool r2;
	h2d__Tile r6;
	double r7, r8, r10, r11;
	double *r12, *r13;
	vdynamic *r3;
	int r9;
	h3d__mat__Texture r5;
	if( r0 == NULL ) hl_null_access();
	r2 = true;
	r3 = hl_alloc_dynbool(r2);
	r1 = hxd_Pixels_makeSquare(r0,r3);
	r5 = h3d_mat_Texture_fromPixels(r1);
	if( r1 == r0 ) goto label$d9e4160_35_8;
	if( r1 == NULL ) hl_null_access();
	hxd_Pixels_dispose(r1);
	label$d9e4160_35_8:
	r6 = (h2d__Tile)hl_alloc_obj(&t$h2d_Tile);
	r7 = 0.;
	r8 = 0.;
	r9 = r0->width;
	r10 = (double)r9;
	r9 = r0->height;
	r11 = (double)r9;
	r12 = NULL;
	r13 = NULL;
	h2d_Tile_new(r6,r5,r7,r8,r10,r11,r12,r13);
	return r6;
}

vvirtual* h2d_Tile_isEmpty(hxd__BitmapData r0,int r1,int r2,int r3,int r4,int r5) {
	vvirtual *r23;
	bool r6, r22;
	int r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21;
	r6 = true;
	r8 = r3;
	r9 = r4;
	r10 = 0;
	r11 = 0;
	r12 = 0;
	r13 = r3;
	label$d9e4160_36_7:
	if( r12 >= r13 ) goto label$d9e4160_36_52;
	r14 = r12;
	++r12;
	r15 = 0;
	r16 = r4;
	label$d9e4160_36_13:
	if( r15 >= r16 ) goto label$d9e4160_36_51;
	r17 = r15;
	++r15;
	if( r0 == NULL ) hl_null_access();
	r18 = r14 + r1;
	r19 = r17 + r2;
	r18 = hxd_BitmapData_getPixel(r0,r18,r19);
	r20 = -16777216;
	r19 = r18 & r20;
	r20 = 0;
	if( r19 != r20 ) goto label$d9e4160_36_32;
	r20 = 0;
	if( r18 == r20 ) goto label$d9e4160_36_31;
	r19 = r14 + r1;
	r20 = r17 + r2;
	r21 = 0;
	hxd_BitmapData_setPixel(r0,r19,r20,r21);
	label$d9e4160_36_31:
	goto label$d9e4160_36_13;
	label$d9e4160_36_32:
	if( r18 == r5 ) goto label$d9e4160_36_43;
	r22 = false;
	r6 = r22;
	if( r14 >= r8 ) goto label$d9e4160_36_37;
	r8 = r14;
	label$d9e4160_36_37:
	if( r17 >= r9 ) goto label$d9e4160_36_39;
	r9 = r17;
	label$d9e4160_36_39:
	if( r10 >= r14 ) goto label$d9e4160_36_41;
	r10 = r14;
	label$d9e4160_36_41:
	if( r11 >= r17 ) goto label$d9e4160_36_43;
	r11 = r17;
	label$d9e4160_36_43:
	if( r18 != r5 ) goto label$d9e4160_36_50;
	r20 = 0;
	if( r18 == r20 ) goto label$d9e4160_36_50;
	r19 = r14 + r1;
	r20 = r17 + r2;
	r21 = 0;
	hxd_BitmapData_setPixel(r0,r19,r20,r21);
	label$d9e4160_36_50:
	goto label$d9e4160_36_13;
	label$d9e4160_36_51:
	goto label$d9e4160_36_7;
	label$d9e4160_36_52:
	if( !r6 ) goto label$d9e4160_36_55;
	r23 = NULL;
	return r23;
	label$d9e4160_36_55:
	r23 = hl_alloc_virtual(&t$vrt_450e512);
	if( hl_vfields(r23)[0] ) *(int*)(hl_vfields(r23)[0]) = (int)r8; else hl_dyn_seti(r23->value,22420/*dx*/,&t$_i32,r8);
	if( hl_vfields(r23)[1] ) *(int*)(hl_vfields(r23)[1]) = (int)r9; else hl_dyn_seti(r23->value,22421/*dy*/,&t$_i32,r9);
	r12 = r10 - r8;
	r13 = 1;
	r12 = r12 + r13;
	if( hl_vfields(r23)[3] ) *(int*)(hl_vfields(r23)[3]) = (int)r12; else hl_dyn_seti(r23->value,119/*w*/,&t$_i32,r12);
	r12 = r11 - r9;
	r13 = 1;
	r12 = r12 + r13;
	if( hl_vfields(r23)[2] ) *(int*)(hl_vfields(r23)[2]) = (int)r12; else hl_dyn_seti(r23->value,104/*h*/,&t$_i32,r12);
	return r23;
}

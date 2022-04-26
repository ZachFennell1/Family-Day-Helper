﻿// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <h2d/col/Point.h>
#include <hl/natives.h>
String h2d_col_Point_toString(h2d__col__Point);
extern String s$f95b70f;
double hxd_Math_fmt(double);
String String___alloc__(vbyte*,int);
String String___add__(String,String);
extern String s$c0cb5f0;
extern String s$cbb184d;
extern hl_type t$h2d_col_Point;
#include <h2d/col/Matrix.h>
#include <h2d/col/IPoint.h>
extern hl_type t$h2d_col_IPoint;
void h2d_col_IPoint_new(h2d__col__IPoint,int*,int*);

void h2d_col_Point_new(h2d__col__Point r0,double* r1,double* r2) {
	double r3, r4;
	if( r1 ) goto label$0cd5e3f_1_3;
	r3 = 0.;
	goto label$0cd5e3f_1_4;
	label$0cd5e3f_1_3:
	r3 = *r1;
	label$0cd5e3f_1_4:
	if( r2 ) goto label$0cd5e3f_1_7;
	r4 = 0.;
	goto label$0cd5e3f_1_8;
	label$0cd5e3f_1_7:
	r4 = *r2;
	label$0cd5e3f_1_8:
	r0->x = r3;
	r0->y = r4;
	return;
}

double h2d_col_Point_distanceSq(h2d__col__Point r0,h2d__col__Point r1) {
	double r2, r3, r4, r5;
	r2 = r0->x;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->x;
	r2 = r2 - r3;
	r3 = r0->y;
	r4 = r1->y;
	r3 = r3 - r4;
	r4 = r2 * r2;
	r5 = r3 * r3;
	r4 = r4 + r5;
	return r4;
}

double h2d_col_Point_distance(h2d__col__Point r0,h2d__col__Point r1) {
	double r2, r3, r4, r5;
	r2 = r0->x;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->x;
	r2 = r2 - r3;
	r3 = r0->y;
	r4 = r1->y;
	r3 = r3 - r4;
	r4 = r2 * r2;
	r5 = r3 * r3;
	r4 = r4 + r5;
	r4 = hl_math_sqrt(r4);
	return r4;
}

vbyte* h2d_col_Point___string(h2d__col__Point r0) {
	String r2;
	vbyte *r1;
	r2 = h2d_col_Point_toString(r0);
	if( r2 == NULL ) hl_null_access();
	r1 = r2->bytes;
	return r1;
}

String h2d_col_Point_toString(h2d__col__Point r0) {
	String r1, r6;
	double r2;
	int *r4;
	vbyte *r5;
	int r3;
	r1 = (String)s$f95b70f;
	r2 = r0->x;
	r2 = hxd_Math_fmt(r2);
	r4 = &r3;
	r5 = hl_ftos(r2,r4);
	r6 = String___alloc__(r5,r3);
	r1 = String___add__(r1,r6);
	r6 = (String)s$c0cb5f0;
	r1 = String___add__(r1,r6);
	r2 = r0->y;
	r2 = hxd_Math_fmt(r2);
	r4 = &r3;
	r5 = hl_ftos(r2,r4);
	r6 = String___alloc__(r5,r3);
	r1 = String___add__(r1,r6);
	r6 = (String)s$cbb184d;
	r1 = String___add__(r1,r6);
	return r1;
}

h2d__col__Point h2d_col_Point_sub(h2d__col__Point r0,h2d__col__Point r1) {
	h2d__col__Point r2;
	double r3, r4, r6;
	double *r5, *r7;
	r2 = (h2d__col__Point)hl_alloc_obj(&t$h2d_col_Point);
	r3 = r0->x;
	if( r1 == NULL ) hl_null_access();
	r4 = r1->x;
	r3 = r3 - r4;
	r5 = &r3;
	r4 = r0->y;
	r6 = r1->y;
	r4 = r4 - r6;
	r7 = &r4;
	h2d_col_Point_new(r2,r5,r7);
	return r2;
}

h2d__col__Point h2d_col_Point_add(h2d__col__Point r0,h2d__col__Point r1) {
	h2d__col__Point r2;
	double r3, r4, r6;
	double *r5, *r7;
	r2 = (h2d__col__Point)hl_alloc_obj(&t$h2d_col_Point);
	r3 = r0->x;
	if( r1 == NULL ) hl_null_access();
	r4 = r1->x;
	r3 = r3 + r4;
	r5 = &r3;
	r4 = r0->y;
	r6 = r1->y;
	r4 = r4 + r6;
	r7 = &r4;
	h2d_col_Point_new(r2,r5,r7);
	return r2;
}

h2d__col__Point h2d_col_Point_multiply(h2d__col__Point r0,double r1) {
	h2d__col__Point r2;
	double r3, r4;
	double *r5, *r6;
	r2 = (h2d__col__Point)hl_alloc_obj(&t$h2d_col_Point);
	r3 = r0->x;
	r3 = r3 * r1;
	r5 = &r3;
	r4 = r0->y;
	r4 = r4 * r1;
	r6 = &r4;
	h2d_col_Point_new(r2,r5,r6);
	return r2;
}

bool h2d_col_Point_equals(h2d__col__Point r0,h2d__col__Point r1) {
	bool r4;
	double r2, r3;
	r2 = r0->x;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->x;
	if( r2 != r3 ) goto label$0cd5e3f_9_11;
	r2 = r0->y;
	r3 = r1->y;
	if( r2 == r3 ) goto label$0cd5e3f_9_9;
	r4 = false;
	goto label$0cd5e3f_9_10;
	label$0cd5e3f_9_9:
	r4 = true;
	label$0cd5e3f_9_10:
	return r4;
	label$0cd5e3f_9_11:
	r4 = false;
	return r4;
}

double h2d_col_Point_dot(h2d__col__Point r0,h2d__col__Point r1) {
	double r2, r3, r4;
	r2 = r0->x;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->x;
	r2 = r2 * r3;
	r3 = r0->y;
	r4 = r1->y;
	r3 = r3 * r4;
	r2 = r2 + r3;
	return r2;
}

double h2d_col_Point_lengthSq(h2d__col__Point r0) {
	double r1, r2, r3;
	r1 = r0->x;
	r2 = r0->x;
	r1 = r1 * r2;
	r2 = r0->y;
	r3 = r0->y;
	r2 = r2 * r3;
	r1 = r1 + r2;
	return r1;
}

double h2d_col_Point_length(h2d__col__Point r0) {
	double r1, r2, r3;
	r1 = r0->x;
	r2 = r0->x;
	r1 = r1 * r2;
	r2 = r0->y;
	r3 = r0->y;
	r2 = r2 * r3;
	r1 = r1 + r2;
	r1 = hl_math_sqrt(r1);
	return r1;
}

void h2d_col_Point_normalize(h2d__col__Point r0) {
	double r1, r2, r3;
	r1 = r0->x;
	r2 = r0->x;
	r1 = r1 * r2;
	r2 = r0->y;
	r3 = r0->y;
	r2 = r2 * r3;
	r1 = r1 + r2;
	r3 = 1.000000000000000036e-10;
	if( !(r1 < r3) ) goto label$0cd5e3f_13_12;
	r2 = 0.;
	r1 = r2;
	goto label$0cd5e3f_13_16;
	label$0cd5e3f_13_12:
	r2 = 1.;
	r3 = hl_math_sqrt(r1);
	r2 = r2 / r3;
	r1 = r2;
	label$0cd5e3f_13_16:
	r2 = r0->x;
	r2 = r2 * r1;
	r0->x = r2;
	r2 = r0->y;
	r2 = r2 * r1;
	r0->y = r2;
	return;
}

h2d__col__Point h2d_col_Point_normalized(h2d__col__Point r0) {
	h2d__col__Point r5;
	double r1, r2, r3;
	double *r6, *r7;
	r1 = r0->x;
	r2 = r0->x;
	r1 = r1 * r2;
	r2 = r0->y;
	r3 = r0->y;
	r2 = r2 * r3;
	r1 = r1 + r2;
	r3 = 1.000000000000000036e-10;
	if( !(r1 < r3) ) goto label$0cd5e3f_14_12;
	r2 = 0.;
	r1 = r2;
	goto label$0cd5e3f_14_16;
	label$0cd5e3f_14_12:
	r2 = 1.;
	r3 = hl_math_sqrt(r1);
	r2 = r2 / r3;
	r1 = r2;
	label$0cd5e3f_14_16:
	r5 = (h2d__col__Point)hl_alloc_obj(&t$h2d_col_Point);
	r2 = r0->x;
	r2 = r2 * r1;
	r6 = &r2;
	r3 = r0->y;
	r3 = r3 * r1;
	r7 = &r3;
	h2d_col_Point_new(r5,r6,r7);
	return r5;
}

void h2d_col_Point_set(h2d__col__Point r0,double* r1,double* r2) {
	double r3, r4;
	if( r1 ) goto label$0cd5e3f_15_3;
	r3 = 0.;
	goto label$0cd5e3f_15_4;
	label$0cd5e3f_15_3:
	r3 = *r1;
	label$0cd5e3f_15_4:
	if( r2 ) goto label$0cd5e3f_15_7;
	r4 = 0.;
	goto label$0cd5e3f_15_8;
	label$0cd5e3f_15_7:
	r4 = *r2;
	label$0cd5e3f_15_8:
	r0->x = r3;
	r0->y = r4;
	return;
}

void h2d_col_Point_load(h2d__col__Point r0,h2d__col__Point r1) {
	double r2;
	if( r1 == NULL ) hl_null_access();
	r2 = r1->x;
	r0->x = r2;
	r2 = r1->y;
	r0->y = r2;
	return;
}

void h2d_col_Point_scale(h2d__col__Point r0,double r1) {
	double r2;
	r2 = r0->x;
	r2 = r2 * r1;
	r0->x = r2;
	r2 = r0->y;
	r2 = r2 * r1;
	r0->y = r2;
	return;
}

h2d__col__Point h2d_col_Point_clone(h2d__col__Point r0) {
	h2d__col__Point r1;
	double r2, r4;
	double *r3, *r5;
	r1 = (h2d__col__Point)hl_alloc_obj(&t$h2d_col_Point);
	r2 = r0->x;
	r3 = &r2;
	r4 = r0->y;
	r5 = &r4;
	h2d_col_Point_new(r1,r3,r5);
	return r1;
}

double h2d_col_Point_cross(h2d__col__Point r0,h2d__col__Point r1) {
	double r2, r3, r4;
	r2 = r0->x;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->y;
	r2 = r2 * r3;
	r3 = r0->y;
	r4 = r1->x;
	r3 = r3 * r4;
	r2 = r2 - r3;
	return r2;
}

void h2d_col_Point_lerp(h2d__col__Point r0,h2d__col__Point r1,h2d__col__Point r2,double r3) {
	double r4, r6, r7, r8, r9;
	if( r1 == NULL ) hl_null_access();
	r4 = r1->x;
	if( r2 == NULL ) hl_null_access();
	r8 = r2->x;
	r8 = r8 - r4;
	r7 = r3 * r8;
	r6 = r4 + r7;
	r0->x = r6;
	r6 = r1->y;
	r9 = r1->y;
	r9 = r9 - r6;
	r8 = r3 * r9;
	r7 = r6 + r8;
	r0->y = r7;
	return;
}

void h2d_col_Point_transform(h2d__col__Point r0,h2d__col__Matrix r1) {
	double r2, r3, r4, r6;
	if( r1 == NULL ) hl_null_access();
	r2 = r1->a;
	r3 = r0->x;
	r2 = r2 * r3;
	r3 = r1->c;
	r4 = r0->y;
	r3 = r3 * r4;
	r2 = r2 + r3;
	r3 = r1->x;
	r2 = r2 + r3;
	r3 = r1->b;
	r4 = r0->x;
	r3 = r3 * r4;
	r4 = r1->d;
	r6 = r0->y;
	r4 = r4 * r6;
	r3 = r3 + r4;
	r4 = r1->y;
	r3 = r3 + r4;
	r0->x = r2;
	r0->y = r3;
	return;
}

h2d__col__Point h2d_col_Point_transformed(h2d__col__Point r0,h2d__col__Matrix r1) {
	h2d__col__Point r7;
	double r2, r3, r4, r6;
	double *r8, *r9;
	if( r1 == NULL ) hl_null_access();
	r2 = r1->a;
	r3 = r0->x;
	r2 = r2 * r3;
	r3 = r1->c;
	r4 = r0->y;
	r3 = r3 * r4;
	r2 = r2 + r3;
	r3 = r1->x;
	r2 = r2 + r3;
	r3 = r1->b;
	r4 = r0->x;
	r3 = r3 * r4;
	r4 = r1->d;
	r6 = r0->y;
	r4 = r4 * r6;
	r3 = r3 + r4;
	r4 = r1->y;
	r3 = r3 + r4;
	r7 = (h2d__col__Point)hl_alloc_obj(&t$h2d_col_Point);
	r4 = r2;
	r8 = &r4;
	r6 = r3;
	r9 = &r6;
	h2d_col_Point_new(r7,r8,r9);
	return r7;
}

void h2d_col_Point_transform2x2(h2d__col__Point r0,h2d__col__Matrix r1) {
	double r2, r3, r4, r6;
	if( r1 == NULL ) hl_null_access();
	r2 = r1->a;
	r3 = r0->x;
	r2 = r2 * r3;
	r3 = r1->c;
	r4 = r0->y;
	r3 = r3 * r4;
	r2 = r2 + r3;
	r3 = r1->b;
	r4 = r0->x;
	r3 = r3 * r4;
	r4 = r1->d;
	r6 = r0->y;
	r4 = r4 * r6;
	r3 = r3 + r4;
	r0->x = r2;
	r0->y = r3;
	return;
}

h2d__col__Point h2d_col_Point_transformed2x2(h2d__col__Point r0,h2d__col__Matrix r1) {
	h2d__col__Point r7;
	double r2, r3, r4, r6;
	double *r8, *r9;
	if( r1 == NULL ) hl_null_access();
	r2 = r1->a;
	r3 = r0->x;
	r2 = r2 * r3;
	r3 = r1->c;
	r4 = r0->y;
	r3 = r3 * r4;
	r2 = r2 + r3;
	r3 = r1->b;
	r4 = r0->x;
	r3 = r3 * r4;
	r4 = r1->d;
	r6 = r0->y;
	r4 = r4 * r6;
	r3 = r3 + r4;
	r7 = (h2d__col__Point)hl_alloc_obj(&t$h2d_col_Point);
	r4 = r2;
	r8 = &r4;
	r6 = r3;
	r9 = &r6;
	h2d_col_Point_new(r7,r8,r9);
	return r7;
}

h2d__col__IPoint h2d_col_Point_toIPoint(h2d__col__Point r0,double* r1) {
	h2d__col__IPoint r3;
	double r2, r5;
	int *r6, *r8;
	int r4, r7;
	if( r1 ) goto label$0cd5e3f_25_3;
	r2 = 1.;
	goto label$0cd5e3f_25_4;
	label$0cd5e3f_25_3:
	r2 = *r1;
	label$0cd5e3f_25_4:
	r3 = (h2d__col__IPoint)hl_alloc_obj(&t$h2d_col_IPoint);
	r5 = r0->x;
	r5 = r5 * r2;
	r4 = hl_math_round(r5);
	r6 = &r4;
	r5 = r0->y;
	r5 = r5 * r2;
	r7 = hl_math_round(r5);
	r8 = &r7;
	h2d_col_IPoint_new(r3,r6,r8);
	return r3;
}

void h2d_col_Point_rotate(h2d__col__Point r0,double r1) {
	double r2, r4, r5, r6, r7;
	r2 = hl_math_cos(r1);
	r4 = hl_math_sin(r1);
	r5 = r0->x;
	r5 = r5 * r2;
	r6 = r0->y;
	r6 = r6 * r4;
	r5 = r5 - r6;
	r6 = r0->x;
	r6 = r6 * r4;
	r7 = r0->y;
	r7 = r7 * r2;
	r6 = r6 + r7;
	r0->x = r5;
	r0->y = r6;
	return;
}


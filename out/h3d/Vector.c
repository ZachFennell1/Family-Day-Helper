﻿// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <h3d/Vector.h>
#include <hl/natives.h>
extern hl_type t$h3d_Vector;
#include <h3d/Matrix.h>
#include <h3d/col/Point.h>
extern hl_type t$h3d_col_Point;
void h3d_col_Point_new(h3d__col__Point,double*,double*,double*);
String h3d_Vector_toString(h3d__Vector);
extern String s$f95b70f;
double hxd_Math_fmt(double);
String String___alloc__(vbyte*,int);
String String___add__(String,String);
extern String s$c0cb5f0;
extern String s$cbb184d;

void h3d_Vector_new(h3d__Vector r0,double* r1,double* r2,double* r3,double* r4) {
	double r5, r6, r7, r8;
	if( r1 ) goto label$4d7a02f_1_3;
	r5 = 0.;
	goto label$4d7a02f_1_4;
	label$4d7a02f_1_3:
	r5 = *r1;
	label$4d7a02f_1_4:
	if( r2 ) goto label$4d7a02f_1_7;
	r6 = 0.;
	goto label$4d7a02f_1_8;
	label$4d7a02f_1_7:
	r6 = *r2;
	label$4d7a02f_1_8:
	if( r3 ) goto label$4d7a02f_1_11;
	r7 = 0.;
	goto label$4d7a02f_1_12;
	label$4d7a02f_1_11:
	r7 = *r3;
	label$4d7a02f_1_12:
	if( r4 ) goto label$4d7a02f_1_15;
	r8 = 1.;
	goto label$4d7a02f_1_16;
	label$4d7a02f_1_15:
	r8 = *r4;
	label$4d7a02f_1_16:
	r0->x = r5;
	r0->y = r6;
	r0->z = r7;
	r0->w = r8;
	return;
}

double h3d_Vector_distance(h3d__Vector r0,h3d__Vector r1) {
	double r2, r3, r4, r5, r6;
	if( r1 == NULL ) hl_null_access();
	r2 = r1->x;
	r3 = r0->x;
	r2 = r2 - r3;
	r3 = r1->y;
	r4 = r0->y;
	r3 = r3 - r4;
	r4 = r1->z;
	r5 = r0->z;
	r4 = r4 - r5;
	r5 = r2 * r2;
	r6 = r3 * r3;
	r5 = r5 + r6;
	r6 = r4 * r4;
	r5 = r5 + r6;
	r5 = hl_math_sqrt(r5);
	return r5;
}

double h3d_Vector_distanceSq(h3d__Vector r0,h3d__Vector r1) {
	double r2, r3, r4, r5, r6;
	if( r1 == NULL ) hl_null_access();
	r2 = r1->x;
	r3 = r0->x;
	r2 = r2 - r3;
	r3 = r1->y;
	r4 = r0->y;
	r3 = r3 - r4;
	r4 = r1->z;
	r5 = r0->z;
	r4 = r4 - r5;
	r5 = r2 * r2;
	r6 = r3 * r3;
	r5 = r5 + r6;
	r6 = r4 * r4;
	r5 = r5 + r6;
	return r5;
}

h3d__Vector h3d_Vector_sub(h3d__Vector r0,h3d__Vector r1) {
	h3d__Vector r2;
	double r3, r4, r6, r8, r10;
	double *r5, *r7, *r9, *r11;
	r2 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r3 = r0->x;
	if( r1 == NULL ) hl_null_access();
	r4 = r1->x;
	r3 = r3 - r4;
	r5 = &r3;
	r4 = r0->y;
	r6 = r1->y;
	r4 = r4 - r6;
	r7 = &r4;
	r6 = r0->z;
	r8 = r1->z;
	r6 = r6 - r8;
	r9 = &r6;
	r8 = r0->w;
	r10 = r1->w;
	r8 = r8 - r10;
	r11 = &r8;
	h3d_Vector_new(r2,r5,r7,r9,r11);
	return r2;
}

h3d__Vector h3d_Vector_add(h3d__Vector r0,h3d__Vector r1) {
	h3d__Vector r2;
	double r3, r4, r6, r8, r10;
	double *r5, *r7, *r9, *r11;
	r2 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r3 = r0->x;
	if( r1 == NULL ) hl_null_access();
	r4 = r1->x;
	r3 = r3 + r4;
	r5 = &r3;
	r4 = r0->y;
	r6 = r1->y;
	r4 = r4 + r6;
	r7 = &r4;
	r6 = r0->z;
	r8 = r1->z;
	r6 = r6 + r8;
	r9 = &r6;
	r8 = r0->w;
	r10 = r1->w;
	r8 = r8 + r10;
	r11 = &r8;
	h3d_Vector_new(r2,r5,r7,r9,r11);
	return r2;
}

h3d__Vector h3d_Vector_multiply(h3d__Vector r0,double r1) {
	h3d__Vector r2;
	double r3, r4, r6, r8;
	double *r5, *r7, *r9, *r10;
	r2 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r3 = r0->x;
	r3 = r3 * r1;
	r5 = &r3;
	r4 = r0->y;
	r4 = r4 * r1;
	r7 = &r4;
	r6 = r0->z;
	r6 = r6 * r1;
	r9 = &r6;
	r8 = r0->w;
	r10 = &r8;
	h3d_Vector_new(r2,r5,r7,r9,r10);
	return r2;
}

bool h3d_Vector_equals(h3d__Vector r0,h3d__Vector r1) {
	bool r4;
	double r2, r3;
	r2 = r0->x;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->x;
	if( r2 != r3 ) goto label$4d7a02f_7_17;
	r2 = r0->y;
	r3 = r1->y;
	if( r2 != r3 ) goto label$4d7a02f_7_17;
	r2 = r0->z;
	r3 = r1->z;
	if( r2 != r3 ) goto label$4d7a02f_7_17;
	r2 = r0->w;
	r3 = r1->w;
	if( r2 == r3 ) goto label$4d7a02f_7_15;
	r4 = false;
	goto label$4d7a02f_7_16;
	label$4d7a02f_7_15:
	r4 = true;
	label$4d7a02f_7_16:
	return r4;
	label$4d7a02f_7_17:
	r4 = false;
	return r4;
}

h3d__Vector h3d_Vector_cross(h3d__Vector r0,h3d__Vector r1) {
	h3d__Vector r2;
	double r3, r4, r5, r7, r9;
	double *r6, *r8, *r10, *r12;
	int r11;
	r2 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r3 = r0->y;
	if( r1 == NULL ) hl_null_access();
	r4 = r1->z;
	r3 = r3 * r4;
	r4 = r0->z;
	r5 = r1->y;
	r4 = r4 * r5;
	r3 = r3 - r4;
	r6 = &r3;
	r4 = r0->z;
	r5 = r1->x;
	r4 = r4 * r5;
	r5 = r0->x;
	r7 = r1->z;
	r5 = r5 * r7;
	r4 = r4 - r5;
	r8 = &r4;
	r5 = r0->x;
	r7 = r1->y;
	r5 = r5 * r7;
	r7 = r0->y;
	r9 = r1->x;
	r7 = r7 * r9;
	r5 = r5 - r7;
	r10 = &r5;
	r11 = 1;
	r7 = (double)r11;
	r12 = &r7;
	h3d_Vector_new(r2,r6,r8,r10,r12);
	return r2;
}

double h3d_Vector_dot(h3d__Vector r0,h3d__Vector r1) {
	double r2, r3, r4;
	r2 = r0->x;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->x;
	r2 = r2 * r3;
	r3 = r0->y;
	r4 = r1->y;
	r3 = r3 * r4;
	r2 = r2 + r3;
	r3 = r0->z;
	r4 = r1->z;
	r3 = r3 * r4;
	r2 = r2 + r3;
	return r2;
}

double h3d_Vector_lengthSq(h3d__Vector r0) {
	double r1, r2, r3;
	r1 = r0->x;
	r2 = r0->x;
	r1 = r1 * r2;
	r2 = r0->y;
	r3 = r0->y;
	r2 = r2 * r3;
	r1 = r1 + r2;
	r2 = r0->z;
	r3 = r0->z;
	r2 = r2 * r3;
	r1 = r1 + r2;
	return r1;
}

double h3d_Vector_length(h3d__Vector r0) {
	double r1, r2, r3;
	r1 = r0->x;
	r2 = r0->x;
	r1 = r1 * r2;
	r2 = r0->y;
	r3 = r0->y;
	r2 = r2 * r3;
	r1 = r1 + r2;
	r2 = r0->z;
	r3 = r0->z;
	r2 = r2 * r3;
	r1 = r1 + r2;
	r1 = hl_math_sqrt(r1);
	return r1;
}

void h3d_Vector_normalize(h3d__Vector r0) {
	double r1, r2, r3;
	r1 = r0->x;
	r2 = r0->x;
	r1 = r1 * r2;
	r2 = r0->y;
	r3 = r0->y;
	r2 = r2 * r3;
	r1 = r1 + r2;
	r2 = r0->z;
	r3 = r0->z;
	r2 = r2 * r3;
	r1 = r1 + r2;
	r3 = 1.000000000000000036e-10;
	if( !(r1 < r3) ) goto label$4d7a02f_12_16;
	r2 = 0.;
	r1 = r2;
	goto label$4d7a02f_12_20;
	label$4d7a02f_12_16:
	r2 = 1.;
	r3 = hl_math_sqrt(r1);
	r2 = r2 / r3;
	r1 = r2;
	label$4d7a02f_12_20:
	r2 = r0->x;
	r2 = r2 * r1;
	r0->x = r2;
	r2 = r0->y;
	r2 = r2 * r1;
	r0->y = r2;
	r2 = r0->z;
	r2 = r2 * r1;
	r0->z = r2;
	return;
}

h3d__Vector h3d_Vector_normalized(h3d__Vector r0) {
	h3d__Vector r5;
	double r1, r2, r3, r7;
	double *r6, *r8, *r9, *r10;
	r1 = r0->x;
	r2 = r0->x;
	r1 = r1 * r2;
	r2 = r0->y;
	r3 = r0->y;
	r2 = r2 * r3;
	r1 = r1 + r2;
	r2 = r0->z;
	r3 = r0->z;
	r2 = r2 * r3;
	r1 = r1 + r2;
	r3 = 1.000000000000000036e-10;
	if( !(r1 < r3) ) goto label$4d7a02f_13_16;
	r2 = 0.;
	r1 = r2;
	goto label$4d7a02f_13_20;
	label$4d7a02f_13_16:
	r2 = 1.;
	r3 = hl_math_sqrt(r1);
	r2 = r2 / r3;
	r1 = r2;
	label$4d7a02f_13_20:
	r5 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r2 = r0->x;
	r2 = r2 * r1;
	r6 = &r2;
	r3 = r0->y;
	r3 = r3 * r1;
	r8 = &r3;
	r7 = r0->z;
	r7 = r7 * r1;
	r9 = &r7;
	r10 = NULL;
	h3d_Vector_new(r5,r6,r8,r9,r10);
	return r5;
}

void h3d_Vector_set(h3d__Vector r0,double* r1,double* r2,double* r3,double* r4) {
	double r5, r6, r7, r8;
	if( r1 ) goto label$4d7a02f_14_3;
	r5 = 0.;
	goto label$4d7a02f_14_4;
	label$4d7a02f_14_3:
	r5 = *r1;
	label$4d7a02f_14_4:
	if( r2 ) goto label$4d7a02f_14_7;
	r6 = 0.;
	goto label$4d7a02f_14_8;
	label$4d7a02f_14_7:
	r6 = *r2;
	label$4d7a02f_14_8:
	if( r3 ) goto label$4d7a02f_14_11;
	r7 = 0.;
	goto label$4d7a02f_14_12;
	label$4d7a02f_14_11:
	r7 = *r3;
	label$4d7a02f_14_12:
	if( r4 ) goto label$4d7a02f_14_15;
	r8 = 1.;
	goto label$4d7a02f_14_16;
	label$4d7a02f_14_15:
	r8 = *r4;
	label$4d7a02f_14_16:
	r0->x = r5;
	r0->y = r6;
	r0->z = r7;
	r0->w = r8;
	return;
}

void h3d_Vector_load(h3d__Vector r0,h3d__Vector r1) {
	double r2;
	if( r1 == NULL ) hl_null_access();
	r2 = r1->x;
	r0->x = r2;
	r2 = r1->y;
	r0->y = r2;
	r2 = r1->z;
	r0->z = r2;
	r2 = r1->w;
	r0->w = r2;
	return;
}

void h3d_Vector_scale(h3d__Vector r0,double r1) {
	double r2;
	r2 = r0->x;
	r2 = r2 * r1;
	r0->x = r2;
	r2 = r0->y;
	r2 = r2 * r1;
	r0->y = r2;
	r2 = r0->z;
	r2 = r2 * r1;
	r0->z = r2;
	return;
}

void h3d_Vector_lerp(h3d__Vector r0,h3d__Vector r1,h3d__Vector r2,double r3) {
	double r4, r6, r7, r8, r9, r10, r11;
	if( r1 == NULL ) hl_null_access();
	r4 = r1->x;
	if( r2 == NULL ) hl_null_access();
	r8 = r2->x;
	r8 = r8 - r4;
	r7 = r3 * r8;
	r6 = r4 + r7;
	r0->x = r6;
	r6 = r1->y;
	r9 = r2->y;
	r9 = r9 - r6;
	r8 = r3 * r9;
	r7 = r6 + r8;
	r0->y = r7;
	r7 = r1->z;
	r10 = r2->z;
	r10 = r10 - r7;
	r9 = r3 * r10;
	r8 = r7 + r9;
	r0->z = r8;
	r8 = r1->w;
	r11 = r2->w;
	r11 = r11 - r8;
	r10 = r3 * r11;
	r9 = r8 + r10;
	r0->w = r9;
	return;
}

void h3d_Vector_transform(h3d__Vector r0,h3d__Matrix r1) {
	double r2, r3, r4, r6, r7, r8;
	r2 = r0->x;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->_11;
	r2 = r2 * r3;
	r3 = r0->y;
	r4 = r1->_21;
	r3 = r3 * r4;
	r2 = r2 + r3;
	r3 = r0->z;
	r4 = r1->_31;
	r3 = r3 * r4;
	r2 = r2 + r3;
	r3 = r0->w;
	r4 = r1->_41;
	r3 = r3 * r4;
	r2 = r2 + r3;
	r3 = r0->x;
	r4 = r1->_12;
	r3 = r3 * r4;
	r4 = r0->y;
	r6 = r1->_22;
	r4 = r4 * r6;
	r3 = r3 + r4;
	r4 = r0->z;
	r6 = r1->_32;
	r4 = r4 * r6;
	r3 = r3 + r4;
	r4 = r0->w;
	r6 = r1->_42;
	r4 = r4 * r6;
	r3 = r3 + r4;
	r4 = r0->x;
	r6 = r1->_13;
	r4 = r4 * r6;
	r6 = r0->y;
	r7 = r1->_23;
	r6 = r6 * r7;
	r4 = r4 + r6;
	r6 = r0->z;
	r7 = r1->_33;
	r6 = r6 * r7;
	r4 = r4 + r6;
	r6 = r0->w;
	r7 = r1->_43;
	r6 = r6 * r7;
	r4 = r4 + r6;
	r6 = r0->x;
	r7 = r1->_14;
	r6 = r6 * r7;
	r7 = r0->y;
	r8 = r1->_24;
	r7 = r7 * r8;
	r6 = r6 + r7;
	r7 = r0->z;
	r8 = r1->_34;
	r7 = r7 * r8;
	r6 = r6 + r7;
	r7 = r0->w;
	r8 = r1->_44;
	r7 = r7 * r8;
	r6 = r6 + r7;
	r0->x = r2;
	r0->y = r3;
	r0->z = r4;
	r0->w = r6;
	return;
}

h3d__Vector h3d_Vector_transformed(h3d__Vector r0,h3d__Matrix r1) {
	h3d__Vector r9;
	double r2, r3, r4, r6, r7, r8, r12, r14;
	double *r10, *r11, *r13, *r15;
	r2 = r0->x;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->_11;
	r2 = r2 * r3;
	r3 = r0->y;
	r4 = r1->_21;
	r3 = r3 * r4;
	r2 = r2 + r3;
	r3 = r0->z;
	r4 = r1->_31;
	r3 = r3 * r4;
	r2 = r2 + r3;
	r3 = r0->w;
	r4 = r1->_41;
	r3 = r3 * r4;
	r2 = r2 + r3;
	r3 = r0->x;
	r4 = r1->_12;
	r3 = r3 * r4;
	r4 = r0->y;
	r6 = r1->_22;
	r4 = r4 * r6;
	r3 = r3 + r4;
	r4 = r0->z;
	r6 = r1->_32;
	r4 = r4 * r6;
	r3 = r3 + r4;
	r4 = r0->w;
	r6 = r1->_42;
	r4 = r4 * r6;
	r3 = r3 + r4;
	r4 = r0->x;
	r6 = r1->_13;
	r4 = r4 * r6;
	r6 = r0->y;
	r7 = r1->_23;
	r6 = r6 * r7;
	r4 = r4 + r6;
	r6 = r0->z;
	r7 = r1->_33;
	r6 = r6 * r7;
	r4 = r4 + r6;
	r6 = r0->w;
	r7 = r1->_43;
	r6 = r6 * r7;
	r4 = r4 + r6;
	r6 = r0->x;
	r7 = r1->_14;
	r6 = r6 * r7;
	r7 = r0->y;
	r8 = r1->_24;
	r7 = r7 * r8;
	r6 = r6 + r7;
	r7 = r0->z;
	r8 = r1->_34;
	r7 = r7 * r8;
	r6 = r6 + r7;
	r7 = r0->w;
	r8 = r1->_44;
	r7 = r7 * r8;
	r6 = r6 + r7;
	r9 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r7 = r2;
	r10 = &r7;
	r8 = r3;
	r11 = &r8;
	r12 = r4;
	r13 = &r12;
	r14 = r6;
	r15 = &r14;
	h3d_Vector_new(r9,r10,r11,r13,r15);
	return r9;
}

void h3d_Vector_transform3x4(h3d__Vector r0,h3d__Matrix r1) {
	double r2, r3, r4, r6, r7;
	r2 = r0->x;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->_11;
	r2 = r2 * r3;
	r3 = r0->y;
	r4 = r1->_21;
	r3 = r3 * r4;
	r2 = r2 + r3;
	r3 = r0->z;
	r4 = r1->_31;
	r3 = r3 * r4;
	r2 = r2 + r3;
	r3 = r0->w;
	r4 = r1->_41;
	r3 = r3 * r4;
	r2 = r2 + r3;
	r3 = r0->x;
	r4 = r1->_12;
	r3 = r3 * r4;
	r4 = r0->y;
	r6 = r1->_22;
	r4 = r4 * r6;
	r3 = r3 + r4;
	r4 = r0->z;
	r6 = r1->_32;
	r4 = r4 * r6;
	r3 = r3 + r4;
	r4 = r0->w;
	r6 = r1->_42;
	r4 = r4 * r6;
	r3 = r3 + r4;
	r4 = r0->x;
	r6 = r1->_13;
	r4 = r4 * r6;
	r6 = r0->y;
	r7 = r1->_23;
	r6 = r6 * r7;
	r4 = r4 + r6;
	r6 = r0->z;
	r7 = r1->_33;
	r6 = r6 * r7;
	r4 = r4 + r6;
	r6 = r0->w;
	r7 = r1->_43;
	r6 = r6 * r7;
	r4 = r4 + r6;
	r0->x = r2;
	r0->y = r3;
	r0->z = r4;
	return;
}

h3d__Vector h3d_Vector_transformed3x4(h3d__Vector r0,h3d__Matrix r1) {
	h3d__Vector r8;
	double r2, r3, r4, r6, r7, r11;
	double *r9, *r10, *r12, *r13;
	r2 = r0->x;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->_11;
	r2 = r2 * r3;
	r3 = r0->y;
	r4 = r1->_21;
	r3 = r3 * r4;
	r2 = r2 + r3;
	r3 = r0->z;
	r4 = r1->_31;
	r3 = r3 * r4;
	r2 = r2 + r3;
	r3 = r0->w;
	r4 = r1->_41;
	r3 = r3 * r4;
	r2 = r2 + r3;
	r3 = r0->x;
	r4 = r1->_12;
	r3 = r3 * r4;
	r4 = r0->y;
	r6 = r1->_22;
	r4 = r4 * r6;
	r3 = r3 + r4;
	r4 = r0->z;
	r6 = r1->_32;
	r4 = r4 * r6;
	r3 = r3 + r4;
	r4 = r0->w;
	r6 = r1->_42;
	r4 = r4 * r6;
	r3 = r3 + r4;
	r4 = r0->x;
	r6 = r1->_13;
	r4 = r4 * r6;
	r6 = r0->y;
	r7 = r1->_23;
	r6 = r6 * r7;
	r4 = r4 + r6;
	r6 = r0->z;
	r7 = r1->_33;
	r6 = r6 * r7;
	r4 = r4 + r6;
	r6 = r0->w;
	r7 = r1->_43;
	r6 = r6 * r7;
	r4 = r4 + r6;
	r8 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r6 = r2;
	r9 = &r6;
	r7 = r3;
	r10 = &r7;
	r11 = r4;
	r12 = &r11;
	r13 = NULL;
	h3d_Vector_new(r8,r9,r10,r12,r13);
	return r8;
}

void h3d_Vector_transform3x3(h3d__Vector r0,h3d__Matrix r1) {
	double r2, r3, r4, r6, r7;
	r2 = r0->x;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->_11;
	r2 = r2 * r3;
	r3 = r0->y;
	r4 = r1->_21;
	r3 = r3 * r4;
	r2 = r2 + r3;
	r3 = r0->z;
	r4 = r1->_31;
	r3 = r3 * r4;
	r2 = r2 + r3;
	r3 = r0->x;
	r4 = r1->_12;
	r3 = r3 * r4;
	r4 = r0->y;
	r6 = r1->_22;
	r4 = r4 * r6;
	r3 = r3 + r4;
	r4 = r0->z;
	r6 = r1->_32;
	r4 = r4 * r6;
	r3 = r3 + r4;
	r4 = r0->x;
	r6 = r1->_13;
	r4 = r4 * r6;
	r6 = r0->y;
	r7 = r1->_23;
	r6 = r6 * r7;
	r4 = r4 + r6;
	r6 = r0->z;
	r7 = r1->_33;
	r6 = r6 * r7;
	r4 = r4 + r6;
	r0->x = r2;
	r0->y = r3;
	r0->z = r4;
	return;
}

h3d__Vector h3d_Vector_transformed3x3(h3d__Vector r0,h3d__Matrix r1) {
	h3d__Vector r8;
	double r2, r3, r4, r6, r7, r11;
	double *r9, *r10, *r12, *r13;
	r2 = r0->x;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->_11;
	r2 = r2 * r3;
	r3 = r0->y;
	r4 = r1->_21;
	r3 = r3 * r4;
	r2 = r2 + r3;
	r3 = r0->z;
	r4 = r1->_31;
	r3 = r3 * r4;
	r2 = r2 + r3;
	r3 = r0->x;
	r4 = r1->_12;
	r3 = r3 * r4;
	r4 = r0->y;
	r6 = r1->_22;
	r4 = r4 * r6;
	r3 = r3 + r4;
	r4 = r0->z;
	r6 = r1->_32;
	r4 = r4 * r6;
	r3 = r3 + r4;
	r4 = r0->x;
	r6 = r1->_13;
	r4 = r4 * r6;
	r6 = r0->y;
	r7 = r1->_23;
	r6 = r6 * r7;
	r4 = r4 + r6;
	r6 = r0->z;
	r7 = r1->_33;
	r6 = r6 * r7;
	r4 = r4 + r6;
	r8 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r6 = r2;
	r9 = &r6;
	r7 = r3;
	r10 = &r7;
	r11 = r4;
	r12 = &r11;
	r13 = NULL;
	h3d_Vector_new(r8,r9,r10,r12,r13);
	return r8;
}

h3d__Vector h3d_Vector_clone(h3d__Vector r0) {
	h3d__Vector r1;
	double r2, r4, r6, r8;
	double *r3, *r5, *r7, *r9;
	r1 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r2 = r0->x;
	r3 = &r2;
	r4 = r0->y;
	r5 = &r4;
	r6 = r0->z;
	r7 = &r6;
	r8 = r0->w;
	r9 = &r8;
	h3d_Vector_new(r1,r3,r5,r7,r9);
	return r1;
}

h3d__col__Point h3d_Vector_toPoint(h3d__Vector r0) {
	double r2, r4, r6;
	h3d__col__Point r1;
	double *r3, *r5, *r7;
	r1 = (h3d__col__Point)hl_alloc_obj(&t$h3d_col_Point);
	r2 = r0->x;
	r3 = &r2;
	r4 = r0->y;
	r5 = &r4;
	r6 = r0->z;
	r7 = &r6;
	h3d_col_Point_new(r1,r3,r5,r7);
	return r1;
}

vbyte* h3d_Vector___string(h3d__Vector r0) {
	String r2;
	vbyte *r1;
	r2 = h3d_Vector_toString(r0);
	if( r2 == NULL ) hl_null_access();
	r1 = r2->bytes;
	return r1;
}

String h3d_Vector_toString(h3d__Vector r0) {
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
	r6 = (String)s$c0cb5f0;
	r1 = String___add__(r1,r6);
	r2 = r0->z;
	r2 = hxd_Math_fmt(r2);
	r4 = &r3;
	r5 = hl_ftos(r2,r4);
	r6 = String___alloc__(r5,r3);
	r1 = String___add__(r1,r6);
	r6 = (String)s$c0cb5f0;
	r1 = String___add__(r1,r6);
	r2 = r0->w;
	r2 = hxd_Math_fmt(r2);
	r4 = &r3;
	r5 = hl_ftos(r2,r4);
	r6 = String___alloc__(r5,r3);
	r1 = String___add__(r1,r6);
	r6 = (String)s$cbb184d;
	r1 = String___add__(r1,r6);
	return r1;
}

h3d__Vector h3d_Vector_reflect(h3d__Vector r0,h3d__Vector r1) {
	h3d__Vector r5;
	double r2, r3, r4, r6, r9, r11;
	double *r8, *r10, *r12, *r14;
	int r13;
	r2 = 2.;
	r3 = r0->x;
	if( r1 == NULL ) hl_null_access();
	r4 = r1->x;
	r3 = r3 * r4;
	r4 = r0->y;
	r6 = r1->y;
	r4 = r4 * r6;
	r3 = r3 + r4;
	r4 = r0->z;
	r6 = r1->z;
	r4 = r4 * r6;
	r3 = r3 + r4;
	r2 = r2 * r3;
	r5 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r3 = r0->x;
	r6 = r1->x;
	r4 = r2 * r6;
	r3 = r3 - r4;
	r8 = &r3;
	r4 = r0->y;
	r9 = r1->y;
	r6 = r2 * r9;
	r4 = r4 - r6;
	r10 = &r4;
	r6 = r0->z;
	r11 = r1->z;
	r9 = r2 * r11;
	r6 = r6 - r9;
	r12 = &r6;
	r13 = 1;
	r9 = (double)r13;
	r14 = &r9;
	h3d_Vector_new(r5,r8,r10,r12,r14);
	return r5;
}

double h3d_Vector_dot4(h3d__Vector r0,h3d__Vector r1) {
	double r2, r3, r4;
	r2 = r0->x;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->x;
	r2 = r2 * r3;
	r3 = r0->y;
	r4 = r1->y;
	r3 = r3 * r4;
	r2 = r2 + r3;
	r3 = r0->z;
	r4 = r1->z;
	r3 = r3 * r4;
	r2 = r2 + r3;
	r3 = r0->w;
	r4 = r1->w;
	r3 = r3 * r4;
	r2 = r2 + r3;
	return r2;
}

void h3d_Vector_project(h3d__Vector r0,h3d__Matrix r1) {
	double r2, r3, r4, r6, r7, r8, r9;
	r2 = r0->x;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->_11;
	r2 = r2 * r3;
	r3 = r0->y;
	r4 = r1->_21;
	r3 = r3 * r4;
	r2 = r2 + r3;
	r3 = r0->z;
	r4 = r1->_31;
	r3 = r3 * r4;
	r2 = r2 + r3;
	r3 = r0->w;
	r4 = r1->_41;
	r3 = r3 * r4;
	r2 = r2 + r3;
	r3 = r0->x;
	r4 = r1->_12;
	r3 = r3 * r4;
	r4 = r0->y;
	r6 = r1->_22;
	r4 = r4 * r6;
	r3 = r3 + r4;
	r4 = r0->z;
	r6 = r1->_32;
	r4 = r4 * r6;
	r3 = r3 + r4;
	r4 = r0->w;
	r6 = r1->_42;
	r4 = r4 * r6;
	r3 = r3 + r4;
	r4 = r0->x;
	r6 = r1->_13;
	r4 = r4 * r6;
	r6 = r0->y;
	r7 = r1->_23;
	r6 = r6 * r7;
	r4 = r4 + r6;
	r6 = r0->z;
	r7 = r1->_33;
	r6 = r6 * r7;
	r4 = r4 + r6;
	r6 = r0->w;
	r7 = r1->_43;
	r6 = r6 * r7;
	r4 = r4 + r6;
	r6 = 1.;
	r7 = r0->x;
	r8 = r1->_14;
	r7 = r7 * r8;
	r8 = r0->y;
	r9 = r1->_24;
	r8 = r8 * r9;
	r7 = r7 + r8;
	r8 = r0->z;
	r9 = r1->_34;
	r8 = r8 * r9;
	r7 = r7 + r8;
	r8 = r0->w;
	r9 = r1->_44;
	r8 = r8 * r9;
	r7 = r7 + r8;
	r6 = r6 / r7;
	r7 = r2 * r6;
	r0->x = r7;
	r7 = r3 * r6;
	r0->y = r7;
	r7 = r4 * r6;
	r0->z = r7;
	r7 = 1.;
	r0->w = r7;
	return;
}

double h3d_Vector_get_r(h3d__Vector r0) {
	double r1;
	r1 = r0->x;
	return r1;
}

double h3d_Vector_get_g(h3d__Vector r0) {
	double r1;
	r1 = r0->y;
	return r1;
}

double h3d_Vector_get_b(h3d__Vector r0) {
	double r1;
	r1 = r0->z;
	return r1;
}

double h3d_Vector_get_a(h3d__Vector r0) {
	double r1;
	r1 = r0->w;
	return r1;
}

double h3d_Vector_set_r(h3d__Vector r0,double r1) {
	r0->x = r1;
	return r1;
}

double h3d_Vector_set_g(h3d__Vector r0,double r1) {
	r0->y = r1;
	return r1;
}

double h3d_Vector_set_b(h3d__Vector r0,double r1) {
	r0->z = r1;
	return r1;
}

double h3d_Vector_set_a(h3d__Vector r0,double r1) {
	r0->w = r1;
	return r1;
}

void h3d_Vector_setColor(h3d__Vector r0,int r1) {
	double r2, r5;
	int r3, r4;
	r4 = 16;
	r3 = r1 >> r4;
	r4 = 255;
	r3 = r3 & r4;
	r2 = (double)r3;
	r5 = 255.;
	r2 = r2 / r5;
	r0->x = r2;
	r4 = 8;
	r3 = r1 >> r4;
	r4 = 255;
	r3 = r3 & r4;
	r2 = (double)r3;
	r5 = 255.;
	r2 = r2 / r5;
	r0->y = r2;
	r4 = 255;
	r3 = r1 & r4;
	r2 = (double)r3;
	r5 = 255.;
	r2 = r2 / r5;
	r0->z = r2;
	r4 = 24;
	r3 = ((unsigned)r1) >> r4;
	r2 = (double)r3;
	r5 = 255.;
	r2 = r2 / r5;
	r0->w = r2;
	return;
}

void h3d_Vector_makeColor(h3d__Vector r0,double r1,double* r2,double* r3) {
	double r4, r5, r6, r7, r9, r10, r11, r12, r13, r14;
	if( r2 ) goto label$4d7a02f_40_3;
	r4 = 1.;
	goto label$4d7a02f_40_4;
	label$4d7a02f_40_3:
	r4 = *r2;
	label$4d7a02f_40_4:
	if( r3 ) goto label$4d7a02f_40_7;
	r5 = 0.5;
	goto label$4d7a02f_40_8;
	label$4d7a02f_40_7:
	r5 = *r3;
	label$4d7a02f_40_8:
	r7 = 6.283185307179586232;
	r6 = fmod(r1,r7);
	r9 = 0.;
	if( !(r6 >= r9) ) goto label$4d7a02f_40_14;
	r7 = r6;
	goto label$4d7a02f_40_16;
	label$4d7a02f_40_14:
	r9 = 6.283185307179586232;
	r7 = r6 + r9;
	label$4d7a02f_40_16:
	r1 = r7;
	r7 = 2.;
	r7 = r7 * r5;
	r9 = 1.;
	r7 = r7 - r9;
	r9 = 1.;
	r11 = 0.;
	if( !(r7 < r11) ) goto label$4d7a02f_40_26;
	r10 = -r7;
	goto label$4d7a02f_40_27;
	label$4d7a02f_40_26:
	r10 = r7;
	label$4d7a02f_40_27:
	r9 = r9 - r10;
	r9 = r9 * r4;
	r11 = 3.;
	r10 = r1 * r11;
	r11 = 3.141592653589793116;
	r10 = r10 / r11;
	r11 = 2.;
	r10 = fmod(r10,r11);
	r11 = 1.;
	r10 = r10 - r11;
	r12 = 1.;
	r14 = 0.;
	if( !(r10 < r14) ) goto label$4d7a02f_40_42;
	r13 = -r10;
	goto label$4d7a02f_40_43;
	label$4d7a02f_40_42:
	r13 = r10;
	label$4d7a02f_40_43:
	r12 = r12 - r13;
	r11 = r9 * r12;
	r14 = 2.;
	r13 = r9 / r14;
	r12 = r5 - r13;
	r14 = 1.047197551196597631;
	if( !(r1 < r14) ) goto label$4d7a02f_40_55;
	r0->x = r9;
	r0->y = r11;
	r13 = 0.;
	r0->z = r13;
	goto label$4d7a02f_40_87;
	label$4d7a02f_40_55:
	r14 = 2.094395102393195263;
	if( !(r1 < r14) ) goto label$4d7a02f_40_62;
	r0->x = r11;
	r0->y = r9;
	r13 = 0.;
	r0->z = r13;
	goto label$4d7a02f_40_87;
	label$4d7a02f_40_62:
	r14 = 3.141592653589793116;
	if( !(r1 < r14) ) goto label$4d7a02f_40_69;
	r13 = 0.;
	r0->x = r13;
	r0->y = r9;
	r0->z = r11;
	goto label$4d7a02f_40_87;
	label$4d7a02f_40_69:
	r14 = 4.188790204786390525;
	if( !(r1 < r14) ) goto label$4d7a02f_40_76;
	r13 = 0.;
	r0->x = r13;
	r0->y = r11;
	r0->z = r9;
	goto label$4d7a02f_40_87;
	label$4d7a02f_40_76:
	r14 = 5.235987755982988823;
	if( !(r1 < r14) ) goto label$4d7a02f_40_83;
	r0->x = r11;
	r13 = 0.;
	r0->y = r13;
	r0->z = r9;
	goto label$4d7a02f_40_87;
	label$4d7a02f_40_83:
	r0->x = r9;
	r13 = 0.;
	r0->y = r13;
	r0->z = r11;
	label$4d7a02f_40_87:
	r13 = r0->x;
	r13 = r13 + r12;
	r0->x = r13;
	r13 = r0->y;
	r13 = r13 + r12;
	r0->y = r13;
	r13 = r0->z;
	r13 = r13 + r12;
	r0->z = r13;
	r13 = 1.;
	r0->w = r13;
	return;
}

int h3d_Vector_toColor(h3d__Vector r0) {
	double r1, r2, r3, r4, r5, r8, r9, r10, r11, r14, r15, r16, r17, r19, r20, r21, r22;
	int r6, r7, r12, r13, r18;
	r1 = r0->w;
	r2 = 0.;
	r3 = 1.;
	if( !(r1 < r2) ) goto label$4d7a02f_41_6;
	r4 = r2;
	goto label$4d7a02f_41_10;
	label$4d7a02f_41_6:
	if( !(r3 < r1) ) goto label$4d7a02f_41_9;
	r4 = r3;
	goto label$4d7a02f_41_10;
	label$4d7a02f_41_9:
	r4 = r1;
	label$4d7a02f_41_10:
	r5 = 255.;
	r4 = r4 * r5;
	r5 = 0.4989999999999999991;
	r4 = r4 + r5;
	r6 = (int)r4;
	r7 = 24;
	r6 = r6 << r7;
	r5 = r0->x;
	r8 = 0.;
	r9 = 1.;
	if( !(r5 < r8) ) goto label$4d7a02f_41_23;
	r10 = r8;
	goto label$4d7a02f_41_27;
	label$4d7a02f_41_23:
	if( !(r9 < r5) ) goto label$4d7a02f_41_26;
	r10 = r9;
	goto label$4d7a02f_41_27;
	label$4d7a02f_41_26:
	r10 = r5;
	label$4d7a02f_41_27:
	r11 = 255.;
	r10 = r10 * r11;
	r11 = 0.4989999999999999991;
	r10 = r10 + r11;
	r12 = (int)r10;
	r13 = 16;
	r12 = r12 << r13;
	r7 = r6 | r12;
	r11 = r0->y;
	r14 = 0.;
	r15 = 1.;
	if( !(r11 < r14) ) goto label$4d7a02f_41_41;
	r16 = r14;
	goto label$4d7a02f_41_45;
	label$4d7a02f_41_41:
	if( !(r15 < r11) ) goto label$4d7a02f_41_44;
	r16 = r15;
	goto label$4d7a02f_41_45;
	label$4d7a02f_41_44:
	r16 = r11;
	label$4d7a02f_41_45:
	r17 = 255.;
	r16 = r16 * r17;
	r17 = 0.4989999999999999991;
	r16 = r16 + r17;
	r13 = (int)r16;
	r18 = 8;
	r13 = r13 << r18;
	r12 = r7 | r13;
	r17 = r0->z;
	r19 = 0.;
	r20 = 1.;
	if( !(r17 < r19) ) goto label$4d7a02f_41_59;
	r21 = r19;
	goto label$4d7a02f_41_63;
	label$4d7a02f_41_59:
	if( !(r20 < r17) ) goto label$4d7a02f_41_62;
	r21 = r20;
	goto label$4d7a02f_41_63;
	label$4d7a02f_41_62:
	r21 = r17;
	label$4d7a02f_41_63:
	r22 = 255.;
	r21 = r21 * r22;
	r22 = 0.4989999999999999991;
	r21 = r21 + r22;
	r18 = (int)r21;
	r13 = r12 | r18;
	return r13;
}

h3d__Vector h3d_Vector_toColorHSL(h3d__Vector r0) {
	h3d__Vector r19;
	double r1, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18;
	double *r20, *r21, *r22, *r23;
	r1 = r0->x;
	r3 = r0->y;
	if( !(r1 < r3) ) goto label$4d7a02f_42_5;
	r4 = r3;
	goto label$4d7a02f_42_6;
	label$4d7a02f_42_5:
	r4 = r1;
	label$4d7a02f_42_6:
	r5 = r0->z;
	if( !(r4 < r5) ) goto label$4d7a02f_42_10;
	r6 = r5;
	goto label$4d7a02f_42_11;
	label$4d7a02f_42_10:
	r6 = r4;
	label$4d7a02f_42_11:
	r7 = r0->x;
	r8 = r0->y;
	if( !(r8 < r7) ) goto label$4d7a02f_42_16;
	r9 = r8;
	goto label$4d7a02f_42_17;
	label$4d7a02f_42_16:
	r9 = r7;
	label$4d7a02f_42_17:
	r10 = r0->z;
	if( !(r10 < r9) ) goto label$4d7a02f_42_21;
	r11 = r10;
	goto label$4d7a02f_42_22;
	label$4d7a02f_42_21:
	r11 = r9;
	label$4d7a02f_42_22:
	r12 = r6 + r11;
	r13 = 2.;
	r12 = r12 / r13;
	if( r6 != r11 ) goto label$4d7a02f_42_29;
	r14 = 0.;
	r13 = r14;
	goto label$4d7a02f_42_72;
	label$4d7a02f_42_29:
	r15 = r6 - r11;
	r17 = 0.5;
	if( !(r17 < r12) ) goto label$4d7a02f_42_37;
	r17 = 2.;
	r17 = r17 - r6;
	r17 = r17 - r11;
	r16 = r15 / r17;
	goto label$4d7a02f_42_39;
	label$4d7a02f_42_37:
	r17 = r6 + r11;
	r16 = r15 / r17;
	label$4d7a02f_42_39:
	r13 = r16;
	r17 = r0->x;
	if( r6 != r17 ) goto label$4d7a02f_42_54;
	r16 = r0->y;
	r17 = r0->z;
	r16 = r16 - r17;
	r16 = r16 / r15;
	r17 = r0->y;
	r18 = r0->z;
	if( !(r17 < r18) ) goto label$4d7a02f_42_51;
	r17 = 6.;
	goto label$4d7a02f_42_52;
	label$4d7a02f_42_51:
	r17 = 0.;
	label$4d7a02f_42_52:
	r16 = r16 + r17;
	goto label$4d7a02f_42_69;
	label$4d7a02f_42_54:
	r17 = r0->y;
	if( r6 != r17 ) goto label$4d7a02f_42_63;
	r16 = r0->z;
	r17 = r0->x;
	r16 = r16 - r17;
	r16 = r16 / r15;
	r17 = 2.;
	r16 = r16 + r17;
	goto label$4d7a02f_42_69;
	label$4d7a02f_42_63:
	r16 = r0->x;
	r17 = r0->y;
	r16 = r16 - r17;
	r16 = r16 / r15;
	r17 = 4.;
	r16 = r16 + r17;
	label$4d7a02f_42_69:
	r17 = 1.047197551196597631;
	r16 = r16 * r17;
	r14 = r16;
	label$4d7a02f_42_72:
	r19 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r15 = r14;
	r20 = &r15;
	r16 = r13;
	r21 = &r16;
	r17 = r12;
	r22 = &r17;
	r18 = r0->w;
	r23 = &r18;
	h3d_Vector_new(r19,r20,r21,r22,r23);
	return r19;
}

h3d__Vector h3d_Vector_fromColor(int r0,double* r1) {
	h3d__Vector r6;
	double r2, r3, r4, r9, r10, r12;
	double *r11, *r13, *r14;
	int r7, r8;
	if( r1 ) goto label$4d7a02f_43_3;
	r2 = 1.;
	goto label$4d7a02f_43_4;
	label$4d7a02f_43_3:
	r2 = *r1;
	label$4d7a02f_43_4:
	r4 = 255.;
	r3 = r2 / r4;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r8 = 16;
	r7 = r0 >> r8;
	r8 = 255;
	r7 = r7 & r8;
	r4 = (double)r7;
	r4 = r4 * r3;
	r1 = &r4;
	r8 = 8;
	r7 = r0 >> r8;
	r8 = 255;
	r7 = r7 & r8;
	r9 = (double)r7;
	r9 = r9 * r3;
	r11 = &r9;
	r8 = 255;
	r7 = r0 & r8;
	r10 = (double)r7;
	r10 = r10 * r3;
	r13 = &r10;
	r8 = 24;
	r7 = ((unsigned)r0) >> r8;
	r12 = (double)r7;
	r12 = r12 * r3;
	r14 = &r12;
	h3d_Vector_new(r6,r1,r11,r13,r14);
	return r6;
}

h3d__Vector h3d_Vector_fromArray(hl__types__ArrayBytes_Float r0) {
	h3d__Vector r1;
	double r9;
	double *r2, *r3, *r4, *r5;
	vbyte *r10;
	int r7, r8;
	r1 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r2 = NULL;
	r3 = NULL;
	r4 = NULL;
	r5 = NULL;
	h3d_Vector_new(r1,r2,r3,r4,r5);
	if( r0 == NULL ) hl_null_access();
	r7 = r0->length;
	r8 = 0;
	if( r8 >= r7 ) goto label$4d7a02f_44_20;
	r7 = 0;
	r8 = r0->length;
	if( ((unsigned)r7) < ((unsigned)r8) ) goto label$4d7a02f_44_15;
	r9 = 0.;
	goto label$4d7a02f_44_19;
	label$4d7a02f_44_15:
	r10 = r0->bytes;
	r8 = 3;
	r8 = r7 << r8;
	r9 = *(double*)(r10 + r8);
	label$4d7a02f_44_19:
	r1->x = r9;
	label$4d7a02f_44_20:
	r7 = r0->length;
	r8 = 1;
	if( r8 >= r7 ) goto label$4d7a02f_44_33;
	r7 = 1;
	r8 = r0->length;
	if( ((unsigned)r7) < ((unsigned)r8) ) goto label$4d7a02f_44_28;
	r9 = 0.;
	goto label$4d7a02f_44_32;
	label$4d7a02f_44_28:
	r10 = r0->bytes;
	r8 = 3;
	r8 = r7 << r8;
	r9 = *(double*)(r10 + r8);
	label$4d7a02f_44_32:
	r1->y = r9;
	label$4d7a02f_44_33:
	r7 = r0->length;
	r8 = 2;
	if( r8 >= r7 ) goto label$4d7a02f_44_46;
	r7 = 2;
	r8 = r0->length;
	if( ((unsigned)r7) < ((unsigned)r8) ) goto label$4d7a02f_44_41;
	r9 = 0.;
	goto label$4d7a02f_44_45;
	label$4d7a02f_44_41:
	r10 = r0->bytes;
	r8 = 3;
	r8 = r7 << r8;
	r9 = *(double*)(r10 + r8);
	label$4d7a02f_44_45:
	r1->z = r9;
	label$4d7a02f_44_46:
	r7 = r0->length;
	r8 = 3;
	if( r8 >= r7 ) goto label$4d7a02f_44_59;
	r7 = 3;
	r8 = r0->length;
	if( ((unsigned)r7) < ((unsigned)r8) ) goto label$4d7a02f_44_54;
	r9 = 0.;
	goto label$4d7a02f_44_58;
	label$4d7a02f_44_54:
	r10 = r0->bytes;
	r8 = 3;
	r8 = r7 << r8;
	r9 = *(double*)(r10 + r8);
	label$4d7a02f_44_58:
	r1->w = r9;
	label$4d7a02f_44_59:
	return r1;
}

void h3d_Vector_scale3(h3d__Vector r0,double r1) {
	double r2;
	r2 = r0->x;
	r2 = r2 * r1;
	r0->x = r2;
	r2 = r0->y;
	r2 = r2 * r1;
	r0->y = r2;
	r2 = r0->z;
	r2 = r2 * r1;
	r0->z = r2;
	return;
}

double h3d_Vector_dot3(h3d__Vector r0,h3d__Vector r1) {
	double r2, r3, r4;
	r2 = r0->x;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->x;
	r2 = r2 * r3;
	r3 = r0->y;
	r4 = r1->y;
	r3 = r3 * r4;
	r2 = r2 + r3;
	r3 = r0->z;
	r4 = r1->z;
	r3 = r3 * r4;
	r2 = r2 + r3;
	return r2;
}

void h3d_Vector_normalizeFast(h3d__Vector r0) {
	double r1, r2, r3;
	r1 = r0->x;
	r2 = r0->x;
	r1 = r1 * r2;
	r2 = r0->y;
	r3 = r0->y;
	r2 = r2 * r3;
	r1 = r1 + r2;
	r2 = r0->z;
	r3 = r0->z;
	r2 = r2 * r3;
	r1 = r1 + r2;
	r3 = 1.000000000000000036e-10;
	if( !(r1 < r3) ) goto label$4d7a02f_47_16;
	r2 = 0.;
	r1 = r2;
	goto label$4d7a02f_47_20;
	label$4d7a02f_47_16:
	r2 = 1.;
	r3 = hl_math_sqrt(r1);
	r2 = r2 / r3;
	r1 = r2;
	label$4d7a02f_47_20:
	r2 = r0->x;
	r2 = r2 * r1;
	r0->x = r2;
	r2 = r0->y;
	r2 = r2 * r1;
	r0->y = r2;
	r2 = r0->z;
	r2 = r2 * r1;
	r0->z = r2;
	return;
}


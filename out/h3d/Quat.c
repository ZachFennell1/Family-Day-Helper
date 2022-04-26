﻿// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <h3d/Quat.h>
#include <hl/natives.h>
extern hl_type t$h3d_Quat;
#include <h3d/Vector.h>
void h3d_Quat_normalize(h3d__Quat);
#include <h3d/Matrix.h>
h3d__Matrix h3d_Quat_toMatrix(h3d__Quat,h3d__Matrix);
h3d__Vector h3d_Matrix_getEulerAngles(h3d__Matrix);
extern hl_type t$h3d_Vector;
void h3d_Vector_new(h3d__Vector,double*,double*,double*,double*);
extern hl_type t$h3d_Matrix;
void h3d_Matrix_new(h3d__Matrix);
String h3d_Quat_toString(h3d__Quat);
extern String s$f95b70f;
double hxd_Math_fmt(double);
String String___alloc__(vbyte*,int);
String String___add__(String,String);
extern String s$c0cb5f0;
extern String s$cbb184d;

void h3d_Quat_new(h3d__Quat r0,double* r1,double* r2,double* r3,double* r4) {
	double r5, r6, r7, r8;
	if( r1 ) goto label$708e82a_1_3;
	r5 = 0.;
	goto label$708e82a_1_4;
	label$708e82a_1_3:
	r5 = *r1;
	label$708e82a_1_4:
	if( r2 ) goto label$708e82a_1_7;
	r6 = 0.;
	goto label$708e82a_1_8;
	label$708e82a_1_7:
	r6 = *r2;
	label$708e82a_1_8:
	if( r3 ) goto label$708e82a_1_11;
	r7 = 0.;
	goto label$708e82a_1_12;
	label$708e82a_1_11:
	r7 = *r3;
	label$708e82a_1_12:
	if( r4 ) goto label$708e82a_1_15;
	r8 = 1.;
	goto label$708e82a_1_16;
	label$708e82a_1_15:
	r8 = *r4;
	label$708e82a_1_16:
	r0->x = r5;
	r0->y = r6;
	r0->z = r7;
	r0->w = r8;
	return;
}

void h3d_Quat_set(h3d__Quat r0,double r1,double r2,double r3,double r4) {
	r0->x = r1;
	r0->y = r2;
	r0->z = r3;
	r0->w = r4;
	return;
}

void h3d_Quat_identity(h3d__Quat r0) {
	double r1;
	r1 = 0.;
	r0->z = r1;
	r0->y = r1;
	r0->x = r1;
	r1 = 1.;
	r0->w = r1;
	return;
}

double h3d_Quat_lengthSq(h3d__Quat r0) {
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
	r2 = r0->w;
	r3 = r0->w;
	r2 = r2 * r3;
	r1 = r1 + r2;
	return r1;
}

double h3d_Quat_length(h3d__Quat r0) {
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
	r2 = r0->w;
	r3 = r0->w;
	r2 = r2 * r3;
	r1 = r1 + r2;
	r1 = hl_math_sqrt(r1);
	return r1;
}

void h3d_Quat_load(h3d__Quat r0,h3d__Quat r1) {
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

h3d__Quat h3d_Quat_clone(h3d__Quat r0) {
	double r2, r4, r6, r8;
	h3d__Quat r1;
	double *r3, *r5, *r7, *r9;
	r1 = (h3d__Quat)hl_alloc_obj(&t$h3d_Quat);
	r2 = r0->x;
	r3 = &r2;
	r4 = r0->y;
	r5 = &r4;
	r6 = r0->z;
	r7 = &r6;
	r8 = r0->w;
	r9 = &r8;
	h3d_Quat_new(r1,r3,r5,r7,r9);
	return r1;
}

void h3d_Quat_initMoveTo(h3d__Quat r0,h3d__Vector r1,h3d__Vector r2) {
	double r3, r4, r6, r7, r8, r9;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->x;
	if( r2 == NULL ) hl_null_access();
	r4 = r2->x;
	r3 = r3 + r4;
	r4 = r1->y;
	r6 = r2->y;
	r4 = r4 + r6;
	r6 = r1->z;
	r7 = r2->z;
	r6 = r6 + r7;
	r7 = 1.;
	r8 = r3 * r3;
	r9 = r4 * r4;
	r8 = r8 + r9;
	r9 = r6 * r6;
	r8 = r8 + r9;
	r8 = hl_math_sqrt(r8);
	r7 = r7 / r8;
	r8 = r1->y;
	r8 = r8 * r6;
	r9 = r1->z;
	r9 = r9 * r4;
	r8 = r8 - r9;
	r0->x = r8;
	r8 = r1->z;
	r8 = r8 * r3;
	r9 = r1->x;
	r9 = r9 * r6;
	r8 = r8 - r9;
	r0->y = r8;
	r8 = r1->x;
	r8 = r8 * r4;
	r9 = r1->y;
	r9 = r9 * r3;
	r8 = r8 - r9;
	r0->z = r8;
	r8 = r1->x;
	r8 = r8 * r3;
	r9 = r1->y;
	r9 = r9 * r4;
	r8 = r8 + r9;
	r9 = r1->z;
	r9 = r9 * r6;
	r8 = r8 + r9;
	r0->w = r8;
	h3d_Quat_normalize(r0);
	return;
}

void h3d_Quat_initDirection(h3d__Quat r0,h3d__Vector r1) {
	double r2, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r24, r25, r26, r27;
	if( r1 == NULL ) hl_null_access();
	r2 = r1->x;
	r4 = r1->y;
	r5 = r1->z;
	r6 = r1->w;
	r7 = r2 * r2;
	r8 = r4 * r4;
	r7 = r7 + r8;
	r8 = r5 * r5;
	r7 = r7 + r8;
	r9 = 1.000000000000000036e-10;
	if( !(r7 < r9) ) goto label$708e82a_9_15;
	r8 = 0.;
	r7 = r8;
	goto label$708e82a_9_19;
	label$708e82a_9_15:
	r8 = 1.;
	r9 = hl_math_sqrt(r7);
	r8 = r8 / r9;
	r7 = r8;
	label$708e82a_9_19:
	r8 = r2 * r7;
	r9 = r4 * r7;
	r10 = r5 * r7;
	r11 = 1.;
	r12 = -r9;
	r13 = 0.;
	r14 = 1.;
	r15 = r12 * r12;
	r16 = r8 * r8;
	r15 = r15 + r16;
	r16 = r13 * r13;
	r15 = r15 + r16;
	r17 = 1.000000000000000036e-10;
	if( !(r15 < r17) ) goto label$708e82a_9_36;
	r16 = 0.;
	r15 = r16;
	goto label$708e82a_9_40;
	label$708e82a_9_36:
	r16 = 1.;
	r17 = hl_math_sqrt(r15);
	r16 = r16 / r17;
	r15 = r16;
	label$708e82a_9_40:
	r16 = r12 * r15;
	r17 = r8 * r15;
	r18 = r13 * r15;
	r19 = 1.;
	r20 = r16 * r16;
	r21 = r17 * r17;
	r20 = r20 + r21;
	r21 = r18 * r18;
	r20 = r20 + r21;
	r21 = 1.000000000000000036e-10;
	if( !(r20 < r21) ) goto label$708e82a_9_54;
	r16 = r9;
	r17 = r10;
	r18 = r8;
	label$708e82a_9_54:
	r20 = r9 * r18;
	r21 = r10 * r17;
	r20 = r20 - r21;
	r21 = r10 * r16;
	r22 = r8 * r18;
	r21 = r21 - r22;
	r22 = r8 * r17;
	r23 = r9 * r16;
	r22 = r22 - r23;
	r23 = 1.;
	r24 = r8 + r17;
	r24 = r24 + r22;
	r26 = 0.;
	if( !(r26 < r24) ) goto label$708e82a_9_88;
	r26 = 1.;
	r25 = r24 + r26;
	r25 = hl_math_sqrt(r25);
	r26 = 2.;
	r25 = r25 * r26;
	r26 = 1.;
	r26 = r26 / r25;
	r27 = r18 - r21;
	r27 = r27 * r26;
	r0->x = r27;
	r27 = r20 - r10;
	r27 = r27 * r26;
	r0->y = r27;
	r27 = r9 - r16;
	r27 = r27 * r26;
	r0->z = r27;
	r27 = 0.25;
	r27 = r27 * r25;
	r0->w = r27;
	goto label$708e82a_9_156;
	label$708e82a_9_88:
	if( !(r17 < r8) ) goto label$708e82a_9_112;
	if( !(r22 < r8) ) goto label$708e82a_9_112;
	r25 = 1.;
	r25 = r25 + r8;
	r25 = r25 - r17;
	r25 = r25 - r22;
	r25 = hl_math_sqrt(r25);
	r26 = 2.;
	r25 = r25 * r26;
	r26 = 1.;
	r26 = r26 / r25;
	r27 = 0.25;
	r27 = r27 * r25;
	r0->x = r27;
	r27 = r16 + r9;
	r27 = r27 * r26;
	r0->y = r27;
	r27 = r20 + r10;
	r27 = r27 * r26;
	r0->z = r27;
	r27 = r18 - r21;
	r27 = r27 * r26;
	r0->w = r27;
	goto label$708e82a_9_156;
	label$708e82a_9_112:
	if( !(r22 < r17) ) goto label$708e82a_9_135;
	r25 = 1.;
	r25 = r25 + r17;
	r25 = r25 - r8;
	r25 = r25 - r22;
	r25 = hl_math_sqrt(r25);
	r26 = 2.;
	r25 = r25 * r26;
	r26 = 1.;
	r26 = r26 / r25;
	r27 = r16 + r9;
	r27 = r27 * r26;
	r0->x = r27;
	r27 = 0.25;
	r27 = r27 * r25;
	r0->y = r27;
	r27 = r21 + r18;
	r27 = r27 * r26;
	r0->z = r27;
	r27 = r20 - r10;
	r27 = r27 * r26;
	r0->w = r27;
	goto label$708e82a_9_156;
	label$708e82a_9_135:
	r25 = 1.;
	r25 = r25 + r22;
	r25 = r25 - r8;
	r25 = r25 - r17;
	r25 = hl_math_sqrt(r25);
	r26 = 2.;
	r25 = r25 * r26;
	r26 = 1.;
	r26 = r26 / r25;
	r27 = r20 + r10;
	r27 = r27 * r26;
	r0->x = r27;
	r27 = r21 + r18;
	r27 = r27 * r26;
	r0->y = r27;
	r27 = 0.25;
	r27 = r27 * r25;
	r0->z = r27;
	r27 = r9 - r16;
	r27 = r27 * r26;
	r0->w = r27;
	label$708e82a_9_156:
	return;
}

void h3d_Quat_initRotateAxis(h3d__Quat r0,double r1,double r2,double r3,double r4) {
	double r5, r6, r8, r9, r10;
	r6 = 2.;
	r5 = r4 / r6;
	r5 = hl_math_sin(r5);
	r8 = 2.;
	r6 = r4 / r8;
	r6 = hl_math_cos(r6);
	r8 = r1 * r5;
	r0->x = r8;
	r8 = r2 * r5;
	r0->y = r8;
	r8 = r3 * r5;
	r0->z = r8;
	r9 = r1 * r1;
	r10 = r2 * r2;
	r9 = r9 + r10;
	r10 = r3 * r3;
	r9 = r9 + r10;
	r9 = hl_math_sqrt(r9);
	r8 = r6 * r9;
	r0->w = r8;
	h3d_Quat_normalize(r0);
	return;
}

void h3d_Quat_initRotateMatrix(h3d__Quat r0,h3d__Matrix r1) {
	double r2, r3, r5, r6, r7;
	if( r1 == NULL ) hl_null_access();
	r2 = r1->_11;
	r3 = r1->_22;
	r2 = r2 + r3;
	r3 = r1->_33;
	r2 = r2 + r3;
	r5 = 0.;
	if( !(r5 < r2) ) goto label$708e82a_11_34;
	r5 = 1.;
	r3 = r2 + r5;
	r3 = hl_math_sqrt(r3);
	r5 = 2.;
	r3 = r3 * r5;
	r5 = 1.;
	r5 = r5 / r3;
	r6 = r1->_23;
	r7 = r1->_32;
	r6 = r6 - r7;
	r6 = r6 * r5;
	r0->x = r6;
	r6 = r1->_31;
	r7 = r1->_13;
	r6 = r6 - r7;
	r6 = r6 * r5;
	r0->y = r6;
	r6 = r1->_12;
	r7 = r1->_21;
	r6 = r6 - r7;
	r6 = r6 * r5;
	r0->z = r6;
	r6 = 0.25;
	r6 = r6 * r3;
	r0->w = r6;
	goto label$708e82a_11_135;
	label$708e82a_11_34:
	r3 = r1->_11;
	r5 = r1->_22;
	if( !(r5 < r3) ) goto label$708e82a_11_71;
	r3 = r1->_11;
	r5 = r1->_33;
	if( !(r5 < r3) ) goto label$708e82a_11_71;
	r3 = 1.;
	r5 = r1->_11;
	r3 = r3 + r5;
	r5 = r1->_22;
	r3 = r3 - r5;
	r5 = r1->_33;
	r3 = r3 - r5;
	r3 = hl_math_sqrt(r3);
	r5 = 2.;
	r3 = r3 * r5;
	r5 = 1.;
	r5 = r5 / r3;
	r6 = 0.25;
	r6 = r6 * r3;
	r0->x = r6;
	r6 = r1->_21;
	r7 = r1->_12;
	r6 = r6 + r7;
	r6 = r6 * r5;
	r0->y = r6;
	r6 = r1->_31;
	r7 = r1->_13;
	r6 = r6 + r7;
	r6 = r6 * r5;
	r0->z = r6;
	r6 = r1->_23;
	r7 = r1->_32;
	r6 = r6 - r7;
	r6 = r6 * r5;
	r0->w = r6;
	goto label$708e82a_11_135;
	label$708e82a_11_71:
	r3 = r1->_22;
	r5 = r1->_33;
	if( !(r5 < r3) ) goto label$708e82a_11_105;
	r3 = 1.;
	r5 = r1->_22;
	r3 = r3 + r5;
	r5 = r1->_11;
	r3 = r3 - r5;
	r5 = r1->_33;
	r3 = r3 - r5;
	r3 = hl_math_sqrt(r3);
	r5 = 2.;
	r3 = r3 * r5;
	r5 = 1.;
	r5 = r5 / r3;
	r6 = r1->_21;
	r7 = r1->_12;
	r6 = r6 + r7;
	r6 = r6 * r5;
	r0->x = r6;
	r6 = 0.25;
	r6 = r6 * r3;
	r0->y = r6;
	r6 = r1->_32;
	r7 = r1->_23;
	r6 = r6 + r7;
	r6 = r6 * r5;
	r0->z = r6;
	r6 = r1->_31;
	r7 = r1->_13;
	r6 = r6 - r7;
	r6 = r6 * r5;
	r0->w = r6;
	goto label$708e82a_11_135;
	label$708e82a_11_105:
	r3 = 1.;
	r5 = r1->_33;
	r3 = r3 + r5;
	r5 = r1->_11;
	r3 = r3 - r5;
	r5 = r1->_22;
	r3 = r3 - r5;
	r3 = hl_math_sqrt(r3);
	r5 = 2.;
	r3 = r3 * r5;
	r5 = 1.;
	r5 = r5 / r3;
	r6 = r1->_31;
	r7 = r1->_13;
	r6 = r6 + r7;
	r6 = r6 * r5;
	r0->x = r6;
	r6 = r1->_32;
	r7 = r1->_23;
	r6 = r6 + r7;
	r6 = r6 * r5;
	r0->y = r6;
	r6 = 0.25;
	r6 = r6 * r3;
	r0->z = r6;
	r6 = r1->_12;
	r7 = r1->_21;
	r6 = r6 - r7;
	r6 = r6 * r5;
	r0->w = r6;
	label$708e82a_11_135:
	return;
}

void h3d_Quat_normalize(h3d__Quat r0) {
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
	r2 = r0->w;
	r3 = r0->w;
	r2 = r2 * r3;
	r1 = r1 + r2;
	r3 = 1.000000000000000036e-10;
	if( !(r1 < r3) ) goto label$708e82a_12_24;
	r2 = 0.;
	r0->z = r2;
	r0->y = r2;
	r0->x = r2;
	r2 = 1.;
	r0->w = r2;
	goto label$708e82a_12_39;
	label$708e82a_12_24:
	r2 = 1.;
	r3 = hl_math_sqrt(r1);
	r2 = r2 / r3;
	r3 = r0->x;
	r3 = r3 * r2;
	r0->x = r3;
	r3 = r0->y;
	r3 = r3 * r2;
	r0->y = r3;
	r3 = r0->z;
	r3 = r3 * r2;
	r0->z = r3;
	r3 = r0->w;
	r3 = r3 * r2;
	r0->w = r3;
	label$708e82a_12_39:
	return;
}

void h3d_Quat_initRotation(h3d__Quat r0,double r1,double r2,double r3) {
	double r4, r5, r7, r8, r9, r10, r11, r12, r13, r14;
	r5 = 0.5;
	r4 = r1 * r5;
	r4 = hl_math_sin(r4);
	r7 = 0.5;
	r5 = r1 * r7;
	r5 = hl_math_cos(r5);
	r8 = 0.5;
	r7 = r2 * r8;
	r7 = hl_math_sin(r7);
	r9 = 0.5;
	r8 = r2 * r9;
	r8 = hl_math_cos(r8);
	r10 = 0.5;
	r9 = r3 * r10;
	r9 = hl_math_sin(r9);
	r11 = 0.5;
	r10 = r3 * r11;
	r10 = hl_math_cos(r10);
	r11 = r8 * r10;
	r12 = r7 * r9;
	r13 = r4 * r11;
	r14 = r5 * r12;
	r13 = r13 - r14;
	r0->x = r13;
	r13 = r5 * r7;
	r13 = r13 * r10;
	r14 = r4 * r8;
	r14 = r14 * r9;
	r13 = r13 + r14;
	r0->y = r13;
	r13 = r5 * r8;
	r13 = r13 * r9;
	r14 = r4 * r7;
	r14 = r14 * r10;
	r13 = r13 - r14;
	r0->z = r13;
	r13 = r5 * r11;
	r14 = r4 * r12;
	r13 = r13 + r14;
	r0->w = r13;
	return;
}

void h3d_Quat_multiply(h3d__Quat r0,h3d__Quat r1,h3d__Quat r2) {
	double r3, r4, r5, r7, r8, r9;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->x;
	if( r2 == NULL ) hl_null_access();
	r4 = r2->w;
	r3 = r3 * r4;
	r4 = r1->w;
	r5 = r2->x;
	r4 = r4 * r5;
	r3 = r3 + r4;
	r4 = r1->y;
	r5 = r2->z;
	r4 = r4 * r5;
	r3 = r3 + r4;
	r4 = r1->z;
	r5 = r2->y;
	r4 = r4 * r5;
	r3 = r3 - r4;
	r4 = r1->w;
	r5 = r2->y;
	r4 = r4 * r5;
	r5 = r1->x;
	r7 = r2->z;
	r5 = r5 * r7;
	r4 = r4 - r5;
	r5 = r1->y;
	r7 = r2->w;
	r5 = r5 * r7;
	r4 = r4 + r5;
	r5 = r1->z;
	r7 = r2->x;
	r5 = r5 * r7;
	r4 = r4 + r5;
	r5 = r1->w;
	r7 = r2->z;
	r5 = r5 * r7;
	r7 = r1->x;
	r8 = r2->y;
	r7 = r7 * r8;
	r5 = r5 + r7;
	r7 = r1->y;
	r8 = r2->x;
	r7 = r7 * r8;
	r5 = r5 - r7;
	r7 = r1->z;
	r8 = r2->w;
	r7 = r7 * r8;
	r5 = r5 + r7;
	r7 = r1->w;
	r8 = r2->w;
	r7 = r7 * r8;
	r8 = r1->x;
	r9 = r2->x;
	r8 = r8 * r9;
	r7 = r7 - r8;
	r8 = r1->y;
	r9 = r2->y;
	r8 = r8 * r9;
	r7 = r7 - r8;
	r8 = r1->z;
	r9 = r2->z;
	r8 = r8 * r9;
	r7 = r7 - r8;
	r0->x = r3;
	r0->y = r4;
	r0->z = r5;
	r0->w = r7;
	return;
}

h3d__Vector h3d_Quat_toEuler(h3d__Quat r0) {
	h3d__Vector r1;
	h3d__Matrix r2;
	r2 = NULL;
	r2 = h3d_Quat_toMatrix(r0,r2);
	if( r2 == NULL ) hl_null_access();
	r1 = h3d_Matrix_getEulerAngles(r2);
	return r1;
}

void h3d_Quat_lerp(h3d__Quat r0,h3d__Quat r1,h3d__Quat r2,double r3,bool* r4) {
	bool r5;
	double r6, r7, r9, r10, r11, r12;
	if( r4 ) goto label$708e82a_16_3;
	r5 = false;
	goto label$708e82a_16_4;
	label$708e82a_16_3:
	r5 = *r4;
	label$708e82a_16_4:
	r6 = 1.;
	r6 = r6 - r3;
	if( !r5 ) goto label$708e82a_16_28;
	if( r1 == NULL ) hl_null_access();
	r7 = r1->x;
	if( r2 == NULL ) hl_null_access();
	r9 = r2->x;
	r7 = r7 * r9;
	r9 = r1->y;
	r10 = r2->y;
	r9 = r9 * r10;
	r7 = r7 + r9;
	r9 = r1->z;
	r10 = r2->z;
	r9 = r9 * r10;
	r7 = r7 + r9;
	r9 = r1->w;
	r10 = r2->w;
	r9 = r9 * r10;
	r7 = r7 + r9;
	r9 = 0.;
	if( !(r7 < r9) ) goto label$708e82a_16_28;
	r7 = -r3;
	r3 = r7;
	label$708e82a_16_28:
	if( r1 == NULL ) hl_null_access();
	r7 = r1->x;
	r7 = r7 * r6;
	if( r2 == NULL ) hl_null_access();
	r9 = r2->x;
	r9 = r9 * r3;
	r7 = r7 + r9;
	r9 = r1->y;
	r9 = r9 * r6;
	r10 = r2->y;
	r10 = r10 * r3;
	r9 = r9 + r10;
	r10 = r1->z;
	r10 = r10 * r6;
	r11 = r2->z;
	r11 = r11 * r3;
	r10 = r10 + r11;
	r11 = r1->w;
	r11 = r11 * r6;
	r12 = r2->w;
	r12 = r12 * r3;
	r11 = r11 + r12;
	r0->x = r7;
	r0->y = r9;
	r0->z = r10;
	r0->w = r11;
	return;
}

void h3d_Quat_slerp(h3d__Quat r0,h3d__Quat r1,h3d__Quat r2,double r3) {
	double r4, r5, r6, r8, r9, r10, r11, r12, r13, r14;
	int r15;
	if( r1 == NULL ) hl_null_access();
	r4 = r1->x;
	if( r2 == NULL ) hl_null_access();
	r5 = r2->x;
	r4 = r4 * r5;
	r5 = r1->y;
	r6 = r2->y;
	r5 = r5 * r6;
	r4 = r4 + r5;
	r5 = r1->z;
	r6 = r2->z;
	r5 = r5 * r6;
	r4 = r4 + r5;
	r5 = r1->w;
	r6 = r2->w;
	r5 = r5 * r6;
	r4 = r4 + r5;
	r6 = 0.;
	if( !(r4 < r6) ) goto label$708e82a_17_21;
	r5 = -r4;
	goto label$708e82a_17_22;
	label$708e82a_17_21:
	r5 = r4;
	label$708e82a_17_22:
	r6 = 1.;
	if( !(r5 >= r6) ) goto label$708e82a_17_33;
	r5 = r1->x;
	r0->x = r5;
	r5 = r1->y;
	r0->y = r5;
	r5 = r1->z;
	r0->z = r5;
	r5 = r1->w;
	r0->w = r5;
	return;
	label$708e82a_17_33:
	r5 = hl_math_acos(r4);
	r6 = 1.;
	r8 = 1.;
	r9 = r4 * r4;
	r8 = r8 - r9;
	r8 = hl_math_sqrt(r8);
	r6 = r6 / r8;
	r9 = 0.;
	if( !(r6 < r9) ) goto label$708e82a_17_44;
	r8 = -r6;
	goto label$708e82a_17_45;
	label$708e82a_17_44:
	r8 = r6;
	label$708e82a_17_45:
	r9 = 1000.;
	if( !(r9 < r8) ) goto label$708e82a_17_94;
	r8 = 0.5;
	r9 = 1.;
	r9 = r9 - r8;
	r10 = r1->x;
	r11 = r2->x;
	r10 = r10 * r11;
	r11 = r1->y;
	r12 = r2->y;
	r11 = r11 * r12;
	r10 = r10 + r11;
	r11 = r1->z;
	r12 = r2->z;
	r11 = r11 * r12;
	r10 = r10 + r11;
	r11 = r1->w;
	r12 = r2->w;
	r11 = r11 * r12;
	r10 = r10 + r11;
	r11 = 0.;
	if( !(r10 < r11) ) goto label$708e82a_17_69;
	r10 = -r8;
	r8 = r10;
	label$708e82a_17_69:
	r10 = r1->x;
	r10 = r10 * r9;
	r11 = r2->x;
	r11 = r11 * r8;
	r10 = r10 + r11;
	r11 = r1->y;
	r11 = r11 * r9;
	r12 = r2->y;
	r12 = r12 * r8;
	r11 = r11 + r12;
	r12 = r1->z;
	r12 = r12 * r9;
	r13 = r2->z;
	r13 = r13 * r8;
	r12 = r12 + r13;
	r13 = r1->w;
	r13 = r13 * r9;
	r14 = r2->w;
	r14 = r14 * r8;
	r13 = r13 + r14;
	r0->x = r10;
	r0->y = r11;
	r0->z = r12;
	r0->w = r13;
	return;
	label$708e82a_17_94:
	r8 = 1.;
	r8 = r8 - r3;
	r8 = r8 * r5;
	r8 = hl_math_sin(r8);
	r8 = r8 * r6;
	r9 = r3 * r5;
	r9 = hl_math_sin(r9);
	r9 = r9 * r6;
	r11 = 0.;
	if( !(r4 < r11) ) goto label$708e82a_17_106;
	r15 = -1;
	goto label$708e82a_17_107;
	label$708e82a_17_106:
	r15 = 1;
	label$708e82a_17_107:
	r10 = (double)r15;
	r9 = r9 * r10;
	r10 = r1->x;
	r10 = r10 * r8;
	r11 = r2->x;
	r11 = r11 * r9;
	r10 = r10 + r11;
	r0->x = r10;
	r10 = r1->y;
	r10 = r10 * r8;
	r11 = r2->y;
	r11 = r11 * r9;
	r10 = r10 + r11;
	r0->y = r10;
	r10 = r1->z;
	r10 = r10 * r8;
	r11 = r2->z;
	r11 = r11 * r9;
	r10 = r10 + r11;
	r0->z = r10;
	r10 = r1->w;
	r10 = r10 * r8;
	r11 = r2->w;
	r11 = r11 * r9;
	r10 = r10 + r11;
	r0->w = r10;
	return;
}

void h3d_Quat_conjugate(h3d__Quat r0) {
	double r1;
	r1 = r0->x;
	r1 = -r1;
	r0->x = r1;
	r1 = r0->y;
	r1 = -r1;
	r0->y = r1;
	r1 = r0->z;
	r1 = -r1;
	r0->z = r1;
	return;
}

void h3d_Quat_negate(h3d__Quat r0) {
	double r1;
	r1 = r0->x;
	r1 = -r1;
	r0->x = r1;
	r1 = r0->y;
	r1 = -r1;
	r0->y = r1;
	r1 = r0->z;
	r1 = -r1;
	r0->z = r1;
	r1 = r0->w;
	r1 = -r1;
	r0->w = r1;
	return;
}

double h3d_Quat_dot(h3d__Quat r0,h3d__Quat r1) {
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

h3d__Vector h3d_Quat_getDirection(h3d__Quat r0) {
	h3d__Vector r1;
	double r2, r3, r4, r5, r6, r9;
	double *r7, *r8, *r10, *r11;
	r1 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r2 = 1.;
	r3 = 2.;
	r4 = r0->y;
	r5 = r0->y;
	r4 = r4 * r5;
	r5 = r0->z;
	r6 = r0->z;
	r5 = r5 * r6;
	r4 = r4 + r5;
	r3 = r3 * r4;
	r2 = r2 - r3;
	r7 = &r2;
	r3 = 2.;
	r4 = r0->x;
	r5 = r0->y;
	r4 = r4 * r5;
	r5 = r0->z;
	r6 = r0->w;
	r5 = r5 * r6;
	r4 = r4 + r5;
	r3 = r3 * r4;
	r8 = &r3;
	r4 = 2.;
	r5 = r0->x;
	r6 = r0->z;
	r5 = r5 * r6;
	r6 = r0->y;
	r9 = r0->w;
	r6 = r6 * r9;
	r5 = r5 - r6;
	r4 = r4 * r5;
	r10 = &r4;
	r11 = NULL;
	h3d_Vector_new(r1,r7,r8,r10,r11);
	return r1;
}

h3d__Matrix h3d_Quat_toMatrix(h3d__Quat r0,h3d__Matrix r1) {
	double r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15;
	h3d__Matrix r3;
	if( r1 ) goto label$708e82a_22_4;
	r3 = (h3d__Matrix)hl_alloc_obj(&t$h3d_Matrix);
	h3d_Matrix_new(r3);
	r1 = r3;
	label$708e82a_22_4:
	r4 = r0->x;
	r5 = r0->x;
	r4 = r4 * r5;
	r5 = r0->x;
	r6 = r0->y;
	r5 = r5 * r6;
	r6 = r0->x;
	r7 = r0->z;
	r6 = r6 * r7;
	r7 = r0->x;
	r8 = r0->w;
	r7 = r7 * r8;
	r8 = r0->y;
	r9 = r0->y;
	r8 = r8 * r9;
	r9 = r0->y;
	r10 = r0->z;
	r9 = r9 * r10;
	r10 = r0->y;
	r11 = r0->w;
	r10 = r10 * r11;
	r11 = r0->z;
	r12 = r0->z;
	r11 = r11 * r12;
	r12 = r0->z;
	r13 = r0->w;
	r12 = r12 * r13;
	if( r1 == NULL ) hl_null_access();
	r13 = 1.;
	r14 = 2.;
	r15 = r8 + r11;
	r14 = r14 * r15;
	r13 = r13 - r14;
	r1->_11 = r13;
	r13 = 2.;
	r14 = r5 + r12;
	r13 = r13 * r14;
	r1->_12 = r13;
	r13 = 2.;
	r14 = r6 - r10;
	r13 = r13 * r14;
	r1->_13 = r13;
	r13 = 0.;
	r1->_14 = r13;
	r13 = 2.;
	r14 = r5 - r12;
	r13 = r13 * r14;
	r1->_21 = r13;
	r13 = 1.;
	r14 = 2.;
	r15 = r4 + r11;
	r14 = r14 * r15;
	r13 = r13 - r14;
	r1->_22 = r13;
	r13 = 2.;
	r14 = r9 + r7;
	r13 = r13 * r14;
	r1->_23 = r13;
	r13 = 0.;
	r1->_24 = r13;
	r13 = 2.;
	r14 = r6 + r10;
	r13 = r13 * r14;
	r1->_31 = r13;
	r13 = 2.;
	r14 = r9 - r7;
	r13 = r13 * r14;
	r1->_32 = r13;
	r13 = 1.;
	r14 = 2.;
	r15 = r4 + r8;
	r14 = r14 * r15;
	r13 = r13 - r14;
	r1->_33 = r13;
	r13 = 0.;
	r1->_34 = r13;
	r13 = 0.;
	r1->_41 = r13;
	r13 = 0.;
	r1->_42 = r13;
	r13 = 0.;
	r1->_43 = r13;
	r13 = 1.;
	r1->_44 = r13;
	return r1;
}

vbyte* h3d_Quat___string(h3d__Quat r0) {
	String r2;
	vbyte *r1;
	r2 = h3d_Quat_toString(r0);
	if( r2 == NULL ) hl_null_access();
	r1 = r2->bytes;
	return r1;
}

String h3d_Quat_toString(h3d__Quat r0) {
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

// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <h2d/col/IPoint.h>
extern hl_type t$h2d_col_IPoint;
#include <hl/natives.h>
String h2d_col_IPoint_toString(h2d__col__IPoint);
extern String s$f95b70f;
String String___alloc__(vbyte*,int);
String String___add__(String,String);
extern String s$c0cb5f0;
extern String s$cbb184d;
#include <h2d/col/Point.h>
extern hl_type t$h2d_col_Point;
void h2d_col_Point_new(h2d__col__Point,double*,double*);

void h2d_col_IPoint_new(h2d__col__IPoint r0,int* r1,int* r2) {
	int r3, r4;
	if( r1 ) goto label$8694ee6_1_3;
	r3 = 0;
	goto label$8694ee6_1_4;
	label$8694ee6_1_3:
	r3 = *r1;
	label$8694ee6_1_4:
	if( r2 ) goto label$8694ee6_1_7;
	r4 = 0;
	goto label$8694ee6_1_8;
	label$8694ee6_1_7:
	r4 = *r2;
	label$8694ee6_1_8:
	r0->x = r3;
	r0->y = r4;
	return;
}

void h2d_col_IPoint_load(h2d__col__IPoint r0,h2d__col__IPoint r1) {
	int r2;
	if( r1 == NULL ) hl_null_access();
	r2 = r1->x;
	r0->x = r2;
	r2 = r1->y;
	r0->y = r2;
	return;
}

void h2d_col_IPoint_scale(h2d__col__IPoint r0,int r1) {
	int r2;
	r2 = r0->x;
	r2 = r2 * r1;
	r0->x = r2;
	r2 = r0->y;
	r2 = r2 * r1;
	r0->y = r2;
	return;
}

h2d__col__IPoint h2d_col_IPoint_multiply(h2d__col__IPoint r0,int r1) {
	h2d__col__IPoint r2;
	int *r5, *r6;
	int r3, r4;
	r2 = (h2d__col__IPoint)hl_alloc_obj(&t$h2d_col_IPoint);
	r3 = r0->x;
	r3 = r3 * r1;
	r5 = &r3;
	r4 = r0->y;
	r4 = r4 * r1;
	r6 = &r4;
	h2d_col_IPoint_new(r2,r5,r6);
	return r2;
}

int h2d_col_IPoint_distanceSq(h2d__col__IPoint r0,h2d__col__IPoint r1) {
	int r2, r3, r4, r5;
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

double h2d_col_IPoint_distance(h2d__col__IPoint r0,h2d__col__IPoint r1) {
	double r5;
	int r2, r3, r4, r6;
	r2 = r0->x;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->x;
	r2 = r2 - r3;
	r3 = r0->y;
	r4 = r1->y;
	r3 = r3 - r4;
	r4 = r2 * r2;
	r6 = r3 * r3;
	r4 = r4 + r6;
	r5 = (double)r4;
	r5 = hl_math_sqrt(r5);
	return r5;
}

vbyte* h2d_col_IPoint___string(h2d__col__IPoint r0) {
	String r2;
	vbyte *r1;
	r2 = h2d_col_IPoint_toString(r0);
	if( r2 == NULL ) hl_null_access();
	r1 = r2->bytes;
	return r1;
}

String h2d_col_IPoint_toString(h2d__col__IPoint r0) {
	String r1, r5;
	int *r3;
	vbyte *r4;
	int r2;
	r1 = (String)s$f95b70f;
	r2 = r0->x;
	r3 = &r2;
	r4 = hl_itos(r2,r3);
	r5 = String___alloc__(r4,r2);
	r1 = String___add__(r1,r5);
	r5 = (String)s$c0cb5f0;
	r1 = String___add__(r1,r5);
	r2 = r0->y;
	r3 = &r2;
	r4 = hl_itos(r2,r3);
	r5 = String___alloc__(r4,r2);
	r1 = String___add__(r1,r5);
	r5 = (String)s$cbb184d;
	r1 = String___add__(r1,r5);
	return r1;
}

h2d__col__IPoint h2d_col_IPoint_sub(h2d__col__IPoint r0,h2d__col__IPoint r1) {
	h2d__col__IPoint r2;
	int *r5, *r7;
	int r3, r4, r6;
	r2 = (h2d__col__IPoint)hl_alloc_obj(&t$h2d_col_IPoint);
	r3 = r0->x;
	if( r1 == NULL ) hl_null_access();
	r4 = r1->x;
	r3 = r3 - r4;
	r5 = &r3;
	r4 = r0->y;
	r6 = r1->y;
	r4 = r4 - r6;
	r7 = &r4;
	h2d_col_IPoint_new(r2,r5,r7);
	return r2;
}

h2d__col__IPoint h2d_col_IPoint_add(h2d__col__IPoint r0,h2d__col__IPoint r1) {
	h2d__col__IPoint r2;
	int *r5, *r7;
	int r3, r4, r6;
	r2 = (h2d__col__IPoint)hl_alloc_obj(&t$h2d_col_IPoint);
	r3 = r0->x;
	if( r1 == NULL ) hl_null_access();
	r4 = r1->x;
	r3 = r3 + r4;
	r5 = &r3;
	r4 = r0->y;
	r6 = r1->y;
	r4 = r4 + r6;
	r7 = &r4;
	h2d_col_IPoint_new(r2,r5,r7);
	return r2;
}

bool h2d_col_IPoint_equals(h2d__col__IPoint r0,h2d__col__IPoint r1) {
	bool r4;
	int r2, r3;
	r2 = r0->x;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->x;
	if( r2 != r3 ) goto label$8694ee6_11_11;
	r2 = r0->y;
	r3 = r1->y;
	if( r2 == r3 ) goto label$8694ee6_11_9;
	r4 = false;
	goto label$8694ee6_11_10;
	label$8694ee6_11_9:
	r4 = true;
	label$8694ee6_11_10:
	return r4;
	label$8694ee6_11_11:
	r4 = false;
	return r4;
}

int h2d_col_IPoint_dot(h2d__col__IPoint r0,h2d__col__IPoint r1) {
	int r2, r3, r4;
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

int h2d_col_IPoint_lengthSq(h2d__col__IPoint r0) {
	int r1, r2, r3;
	r1 = r0->x;
	r2 = r0->x;
	r1 = r1 * r2;
	r2 = r0->y;
	r3 = r0->y;
	r2 = r2 * r3;
	r1 = r1 + r2;
	return r1;
}

double h2d_col_IPoint_length(h2d__col__IPoint r0) {
	double r1;
	int r2, r3, r4;
	r2 = r0->x;
	r3 = r0->x;
	r2 = r2 * r3;
	r3 = r0->y;
	r4 = r0->y;
	r3 = r3 * r4;
	r2 = r2 + r3;
	r1 = (double)r2;
	r1 = hl_math_sqrt(r1);
	return r1;
}

void h2d_col_IPoint_set(h2d__col__IPoint r0,int* r1,int* r2) {
	int r3, r4;
	if( r1 ) goto label$8694ee6_15_3;
	r3 = 0;
	goto label$8694ee6_15_4;
	label$8694ee6_15_3:
	r3 = *r1;
	label$8694ee6_15_4:
	if( r2 ) goto label$8694ee6_15_7;
	r4 = 0;
	goto label$8694ee6_15_8;
	label$8694ee6_15_7:
	r4 = *r2;
	label$8694ee6_15_8:
	r0->x = r3;
	r0->y = r4;
	return;
}

h2d__col__IPoint h2d_col_IPoint_clone(h2d__col__IPoint r0) {
	h2d__col__IPoint r1;
	int *r3, *r5;
	int r2, r4;
	r1 = (h2d__col__IPoint)hl_alloc_obj(&t$h2d_col_IPoint);
	r2 = r0->x;
	r3 = &r2;
	r4 = r0->y;
	r5 = &r4;
	h2d_col_IPoint_new(r1,r3,r5);
	return r1;
}

int h2d_col_IPoint_cross(h2d__col__IPoint r0,h2d__col__IPoint r1) {
	int r2, r3, r4;
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

h2d__col__Point h2d_col_IPoint_toPoint(h2d__col__IPoint r0,double* r1) {
	h2d__col__Point r3;
	double r2, r4, r6;
	double *r7;
	int r5;
	if( r1 ) goto label$8694ee6_18_3;
	r2 = 1.;
	goto label$8694ee6_18_4;
	label$8694ee6_18_3:
	r2 = *r1;
	label$8694ee6_18_4:
	r3 = (h2d__col__Point)hl_alloc_obj(&t$h2d_col_Point);
	r5 = r0->x;
	r4 = (double)r5;
	r4 = r4 * r2;
	r1 = &r4;
	r5 = r0->y;
	r6 = (double)r5;
	r6 = r6 * r2;
	r7 = &r6;
	h2d_col_Point_new(r3,r1,r7);
	return r3;
}


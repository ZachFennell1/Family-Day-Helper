// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <h2d/col/IBounds.h>
#include <h2d/col/Bounds.h>
extern hl_type t$h2d_col_Bounds;
void h2d_col_Bounds_new(h2d__col__Bounds);
extern hl_type t$h2d_col_IBounds;
extern hl_type t$h2d_col_IPoint;
void h2d_col_IPoint_new(h2d__col__IPoint,int*,int*);
String h2d_col_IBounds_toString(h2d__col__IBounds);
extern String s$f95b70f;
String Std_string(vdynamic*);
String String___add__(String,String);
extern String s$c0cb5f0;
extern String s$cbb184d;

void h2d_col_IBounds_new(h2d__col__IBounds r0) {
	int r1;
	r1 = 2147483647;
	r0->xMin = r1;
	r1 = 2147483647;
	r0->yMin = r1;
	r1 = 0x80000000;
	r0->xMax = r1;
	r1 = 0x80000000;
	r0->yMax = r1;
	return;
}

h2d__col__Bounds h2d_col_IBounds_toBounds(h2d__col__IBounds r0,double* r1) {
	h2d__col__Bounds r11;
	double r2, r3, r5, r7, r9, r10;
	int r4, r8;
	if( r1 ) goto label$444c451_2_3;
	r2 = 1.;
	goto label$444c451_2_4;
	label$444c451_2_3:
	r2 = *r1;
	label$444c451_2_4:
	r4 = r0->xMin;
	r3 = (double)r4;
	r3 = r3 * r2;
	r4 = r0->yMin;
	r5 = (double)r4;
	r5 = r5 * r2;
	r4 = r0->xMax;
	r8 = r0->xMin;
	r4 = r4 - r8;
	r7 = (double)r4;
	r7 = r7 * r2;
	r4 = r0->yMax;
	r8 = r0->yMin;
	r4 = r4 - r8;
	r9 = (double)r4;
	r9 = r9 * r2;
	r11 = (h2d__col__Bounds)hl_alloc_obj(&t$h2d_col_Bounds);
	h2d_col_Bounds_new(r11);
	r11->xMin = r3;
	r11->yMin = r5;
	r10 = r3 + r7;
	r11->xMax = r10;
	r10 = r5 + r9;
	r11->yMax = r10;
	return r11;
}

bool h2d_col_IBounds_intersects(h2d__col__IBounds r0,h2d__col__IBounds r1) {
	bool r2;
	int r3, r4;
	r3 = r0->xMin;
	if( r1 == NULL ) hl_null_access();
	r4 = r1->xMax;
	if( r4 < r3 ) goto label$444c451_3_15;
	r3 = r0->yMin;
	r4 = r1->yMax;
	if( r4 < r3 ) goto label$444c451_3_15;
	r3 = r0->xMax;
	r4 = r1->xMin;
	if( r3 < r4 ) goto label$444c451_3_15;
	r3 = r0->yMax;
	r4 = r1->yMin;
	if( r3 < r4 ) goto label$444c451_3_15;
	r2 = false;
	goto label$444c451_3_16;
	label$444c451_3_15:
	r2 = true;
	label$444c451_3_16:
	r2 = !r2;
	return r2;
}

bool h2d_col_IBounds_contains(h2d__col__IBounds r0,h2d__col__IPoint r1) {
	bool r4;
	int r2, r3;
	if( r1 == NULL ) hl_null_access();
	r2 = r1->x;
	r3 = r0->xMin;
	if( r2 < r3 ) goto label$444c451_4_17;
	r2 = r1->x;
	r3 = r0->xMax;
	if( r2 >= r3 ) goto label$444c451_4_17;
	r2 = r1->y;
	r3 = r0->yMin;
	if( r2 < r3 ) goto label$444c451_4_17;
	r2 = r1->y;
	r3 = r0->yMax;
	if( r2 < r3 ) goto label$444c451_4_15;
	r4 = false;
	goto label$444c451_4_16;
	label$444c451_4_15:
	r4 = true;
	label$444c451_4_16:
	return r4;
	label$444c451_4_17:
	r4 = false;
	return r4;
}

void h2d_col_IBounds_addBounds(h2d__col__IBounds r0,h2d__col__IBounds r1) {
	int r3, r4;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->xMin;
	r4 = r0->xMin;
	if( r3 >= r4 ) goto label$444c451_5_6;
	r3 = r1->xMin;
	r0->xMin = r3;
	label$444c451_5_6:
	r3 = r1->xMax;
	r4 = r0->xMax;
	if( r4 >= r3 ) goto label$444c451_5_11;
	r3 = r1->xMax;
	r0->xMax = r3;
	label$444c451_5_11:
	r3 = r1->yMin;
	r4 = r0->yMin;
	if( r3 >= r4 ) goto label$444c451_5_16;
	r3 = r1->yMin;
	r0->yMin = r3;
	label$444c451_5_16:
	r3 = r1->yMax;
	r4 = r0->yMax;
	if( r4 >= r3 ) goto label$444c451_5_21;
	r3 = r1->yMax;
	r0->yMax = r3;
	label$444c451_5_21:
	return;
}

void h2d_col_IBounds_addPoint(h2d__col__IBounds r0,h2d__col__IPoint r1) {
	int r3, r4;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->x;
	r4 = r0->xMin;
	if( r3 >= r4 ) goto label$444c451_6_6;
	r3 = r1->x;
	r0->xMin = r3;
	label$444c451_6_6:
	r3 = r1->x;
	r4 = r0->xMax;
	if( r4 >= r3 ) goto label$444c451_6_11;
	r3 = r1->x;
	r0->xMax = r3;
	label$444c451_6_11:
	r3 = r1->y;
	r4 = r0->yMin;
	if( r3 >= r4 ) goto label$444c451_6_16;
	r3 = r1->y;
	r0->yMin = r3;
	label$444c451_6_16:
	r3 = r1->y;
	r4 = r0->yMax;
	if( r4 >= r3 ) goto label$444c451_6_21;
	r3 = r1->y;
	r0->yMax = r3;
	label$444c451_6_21:
	return;
}

void h2d_col_IBounds_addPos(h2d__col__IBounds r0,int r1,int r2) {
	int r4;
	r4 = r0->xMin;
	if( r1 >= r4 ) goto label$444c451_7_3;
	r0->xMin = r1;
	label$444c451_7_3:
	r4 = r0->xMax;
	if( r4 >= r1 ) goto label$444c451_7_6;
	r0->xMax = r1;
	label$444c451_7_6:
	r4 = r0->yMin;
	if( r2 >= r4 ) goto label$444c451_7_9;
	r0->yMin = r2;
	label$444c451_7_9:
	r4 = r0->yMax;
	if( r4 >= r2 ) goto label$444c451_7_12;
	r0->yMax = r2;
	label$444c451_7_12:
	return;
}

void h2d_col_IBounds_set(h2d__col__IBounds r0,int r1,int r2,int r3,int r4) {
	int r5;
	r0->xMin = r1;
	r0->yMin = r2;
	r5 = r1 + r3;
	r0->xMax = r5;
	r5 = r2 + r4;
	r0->yMax = r5;
	return;
}

void h2d_col_IBounds_setMin(h2d__col__IBounds r0,h2d__col__IPoint r1) {
	int r2;
	if( r1 == NULL ) hl_null_access();
	r2 = r1->x;
	r0->xMin = r2;
	r2 = r1->y;
	r0->yMin = r2;
	return;
}

void h2d_col_IBounds_setMax(h2d__col__IBounds r0,h2d__col__IPoint r1) {
	int r2;
	if( r1 == NULL ) hl_null_access();
	r2 = r1->x;
	r0->xMax = r2;
	r2 = r1->y;
	r0->yMax = r2;
	return;
}

void h2d_col_IBounds_doIntersect(h2d__col__IBounds r0,h2d__col__IBounds r1) {
	int r2, r4, r5, r6, r7, r8, r9, r10, r11;
	r2 = r0->xMin;
	if( r1 == NULL ) hl_null_access();
	r4 = r1->xMin;
	if( r2 >= r4 ) goto label$444c451_11_6;
	r5 = r4;
	goto label$444c451_11_7;
	label$444c451_11_6:
	r5 = r2;
	label$444c451_11_7:
	r0->xMin = r5;
	r5 = r0->yMin;
	r6 = r1->yMin;
	if( r5 >= r6 ) goto label$444c451_11_13;
	r7 = r6;
	goto label$444c451_11_14;
	label$444c451_11_13:
	r7 = r5;
	label$444c451_11_14:
	r0->yMin = r7;
	r7 = r0->xMax;
	r8 = r1->xMax;
	if( r8 >= r7 ) goto label$444c451_11_20;
	r9 = r8;
	goto label$444c451_11_21;
	label$444c451_11_20:
	r9 = r7;
	label$444c451_11_21:
	r0->xMax = r9;
	r9 = r0->yMax;
	r10 = r1->yMax;
	if( r10 >= r9 ) goto label$444c451_11_27;
	r11 = r10;
	goto label$444c451_11_28;
	label$444c451_11_27:
	r11 = r9;
	label$444c451_11_28:
	r0->yMax = r11;
	return;
}

void h2d_col_IBounds_doUnion(h2d__col__IBounds r0,h2d__col__IBounds r1) {
	int r2, r4, r5, r6, r7, r8, r9, r10, r11;
	r2 = r0->xMin;
	if( r1 == NULL ) hl_null_access();
	r4 = r1->xMin;
	if( r4 >= r2 ) goto label$444c451_12_6;
	r5 = r4;
	goto label$444c451_12_7;
	label$444c451_12_6:
	r5 = r2;
	label$444c451_12_7:
	r0->xMin = r5;
	r5 = r0->yMin;
	r6 = r1->yMin;
	if( r6 >= r5 ) goto label$444c451_12_13;
	r7 = r6;
	goto label$444c451_12_14;
	label$444c451_12_13:
	r7 = r5;
	label$444c451_12_14:
	r0->yMin = r7;
	r7 = r0->xMax;
	r8 = r1->xMax;
	if( r7 >= r8 ) goto label$444c451_12_20;
	r9 = r8;
	goto label$444c451_12_21;
	label$444c451_12_20:
	r9 = r7;
	label$444c451_12_21:
	r0->xMax = r9;
	r9 = r0->yMax;
	r10 = r1->yMax;
	if( r9 >= r10 ) goto label$444c451_12_27;
	r11 = r10;
	goto label$444c451_12_28;
	label$444c451_12_27:
	r11 = r9;
	label$444c451_12_28:
	r0->yMax = r11;
	return;
}

h2d__col__IBounds h2d_col_IBounds_intersection(h2d__col__IBounds r0,h2d__col__IBounds r1) {
	h2d__col__IBounds r2;
	int r4, r5, r6, r7, r8, r9, r10, r11, r12, r13;
	r2 = (h2d__col__IBounds)hl_alloc_obj(&t$h2d_col_IBounds);
	h2d_col_IBounds_new(r2);
	r4 = r0->xMin;
	if( r1 == NULL ) hl_null_access();
	r5 = r1->xMin;
	if( r4 >= r5 ) goto label$444c451_13_8;
	r6 = r5;
	goto label$444c451_13_9;
	label$444c451_13_8:
	r6 = r4;
	label$444c451_13_9:
	r2->xMin = r6;
	r6 = r0->yMin;
	r7 = r1->yMin;
	if( r6 >= r7 ) goto label$444c451_13_15;
	r8 = r7;
	goto label$444c451_13_16;
	label$444c451_13_15:
	r8 = r6;
	label$444c451_13_16:
	r2->yMin = r8;
	r8 = r0->xMax;
	r9 = r1->xMax;
	if( r9 >= r8 ) goto label$444c451_13_22;
	r10 = r9;
	goto label$444c451_13_23;
	label$444c451_13_22:
	r10 = r8;
	label$444c451_13_23:
	r2->xMax = r10;
	r10 = r0->yMax;
	r11 = r1->yMax;
	if( r11 >= r10 ) goto label$444c451_13_29;
	r12 = r11;
	goto label$444c451_13_30;
	label$444c451_13_29:
	r12 = r10;
	label$444c451_13_30:
	r2->yMax = r12;
	r12 = r2->xMax;
	r13 = r2->xMin;
	if( r12 >= r13 ) goto label$444c451_13_36;
	r12 = r2->xMin;
	r2->xMax = r12;
	label$444c451_13_36:
	r12 = r2->yMax;
	r13 = r2->yMin;
	if( r12 >= r13 ) goto label$444c451_13_41;
	r12 = r2->yMin;
	r2->yMax = r12;
	label$444c451_13_41:
	return r2;
}

h2d__col__IBounds h2d_col_IBounds_union(h2d__col__IBounds r0,h2d__col__IBounds r1) {
	h2d__col__IBounds r2;
	int r4, r5, r6, r7, r8, r9, r10, r11, r12;
	r2 = (h2d__col__IBounds)hl_alloc_obj(&t$h2d_col_IBounds);
	h2d_col_IBounds_new(r2);
	r4 = r0->xMin;
	if( r1 == NULL ) hl_null_access();
	r5 = r1->xMin;
	if( r5 >= r4 ) goto label$444c451_14_8;
	r6 = r5;
	goto label$444c451_14_9;
	label$444c451_14_8:
	r6 = r4;
	label$444c451_14_9:
	r2->xMin = r6;
	r6 = r0->yMin;
	r7 = r1->yMin;
	if( r7 >= r6 ) goto label$444c451_14_15;
	r8 = r7;
	goto label$444c451_14_16;
	label$444c451_14_15:
	r8 = r6;
	label$444c451_14_16:
	r2->yMin = r8;
	r8 = r0->xMax;
	r9 = r1->xMax;
	if( r8 >= r9 ) goto label$444c451_14_22;
	r10 = r9;
	goto label$444c451_14_23;
	label$444c451_14_22:
	r10 = r8;
	label$444c451_14_23:
	r2->xMax = r10;
	r10 = r0->yMax;
	r11 = r1->yMax;
	if( r10 >= r11 ) goto label$444c451_14_29;
	r12 = r11;
	goto label$444c451_14_30;
	label$444c451_14_29:
	r12 = r10;
	label$444c451_14_30:
	r2->yMax = r12;
	return r2;
}

void h2d_col_IBounds_load(h2d__col__IBounds r0,h2d__col__IBounds r1) {
	int r2;
	if( r1 == NULL ) hl_null_access();
	r2 = r1->xMin;
	r0->xMin = r2;
	r2 = r1->yMin;
	r0->yMin = r2;
	r2 = r1->xMax;
	r0->xMax = r2;
	r2 = r1->yMax;
	r0->yMax = r2;
	return;
}

void h2d_col_IBounds_offset(h2d__col__IBounds r0,int r1,int r2) {
	int r3;
	r3 = r0->xMin;
	r3 = r3 + r1;
	r0->xMin = r3;
	r3 = r0->xMax;
	r3 = r3 + r1;
	r0->xMax = r3;
	r3 = r0->yMin;
	r3 = r3 + r2;
	r0->yMin = r3;
	r3 = r0->yMax;
	r3 = r3 + r2;
	r0->yMax = r3;
	return;
}

h2d__col__IPoint h2d_col_IBounds_getMin(h2d__col__IBounds r0) {
	h2d__col__IPoint r1;
	int *r3, *r5;
	int r2, r4;
	r1 = (h2d__col__IPoint)hl_alloc_obj(&t$h2d_col_IPoint);
	r2 = r0->xMin;
	r3 = &r2;
	r4 = r0->yMin;
	r5 = &r4;
	h2d_col_IPoint_new(r1,r3,r5);
	return r1;
}

h2d__col__IPoint h2d_col_IBounds_getCenter(h2d__col__IBounds r0) {
	h2d__col__IPoint r1;
	int *r4, *r6;
	int r2, r3, r5;
	r1 = (h2d__col__IPoint)hl_alloc_obj(&t$h2d_col_IPoint);
	r2 = r0->xMin;
	r3 = r0->xMax;
	r2 = r2 + r3;
	r3 = 1;
	r2 = r2 >> r3;
	r4 = &r2;
	r3 = r0->yMin;
	r5 = r0->yMax;
	r3 = r3 + r5;
	r5 = 1;
	r3 = r3 >> r5;
	r6 = &r3;
	h2d_col_IPoint_new(r1,r4,r6);
	return r1;
}

h2d__col__IPoint h2d_col_IBounds_getSize(h2d__col__IBounds r0) {
	h2d__col__IPoint r1;
	int *r4, *r6;
	int r2, r3, r5;
	r1 = (h2d__col__IPoint)hl_alloc_obj(&t$h2d_col_IPoint);
	r2 = r0->xMax;
	r3 = r0->xMin;
	r2 = r2 - r3;
	r4 = &r2;
	r3 = r0->yMax;
	r5 = r0->yMin;
	r3 = r3 - r5;
	r6 = &r3;
	h2d_col_IPoint_new(r1,r4,r6);
	return r1;
}

h2d__col__IPoint h2d_col_IBounds_getMax(h2d__col__IBounds r0) {
	h2d__col__IPoint r1;
	int *r3, *r5;
	int r2, r4;
	r1 = (h2d__col__IPoint)hl_alloc_obj(&t$h2d_col_IPoint);
	r2 = r0->xMax;
	r3 = &r2;
	r4 = r0->yMax;
	r5 = &r4;
	h2d_col_IPoint_new(r1,r3,r5);
	return r1;
}

bool h2d_col_IBounds_isEmpty(h2d__col__IBounds r0) {
	bool r3;
	int r1, r2;
	r1 = r0->xMax;
	r2 = r0->xMin;
	if( r2 >= r1 ) goto label$444c451_21_10;
	r1 = r0->yMax;
	r2 = r0->yMin;
	if( r1 <= r2 ) goto label$444c451_21_8;
	r3 = false;
	goto label$444c451_21_9;
	label$444c451_21_8:
	r3 = true;
	label$444c451_21_9:
	return r3;
	label$444c451_21_10:
	r3 = true;
	return r3;
}

void h2d_col_IBounds_empty(h2d__col__IBounds r0) {
	int r1;
	r1 = 2147483647;
	r0->xMin = r1;
	r1 = 2147483647;
	r0->yMin = r1;
	r1 = 0x80000000;
	r0->xMax = r1;
	r1 = 0x80000000;
	r0->yMax = r1;
	return;
}

void h2d_col_IBounds_all(h2d__col__IBounds r0) {
	int r1;
	r1 = 0x80000000;
	r0->xMin = r1;
	r1 = 0x80000000;
	r0->yMin = r1;
	r1 = 2147483647;
	r0->xMax = r1;
	r1 = 2147483647;
	r0->yMax = r1;
	return;
}

h2d__col__IBounds h2d_col_IBounds_clone(h2d__col__IBounds r0) {
	h2d__col__IBounds r1;
	int r3;
	r1 = (h2d__col__IBounds)hl_alloc_obj(&t$h2d_col_IBounds);
	h2d_col_IBounds_new(r1);
	r3 = r0->xMin;
	r1->xMin = r3;
	r3 = r0->yMin;
	r1->yMin = r3;
	r3 = r0->xMax;
	r1->xMax = r3;
	r3 = r0->yMax;
	r1->yMax = r3;
	return r1;
}

int h2d_col_IBounds_get_x(h2d__col__IBounds r0) {
	int r1;
	r1 = r0->xMin;
	return r1;
}

int h2d_col_IBounds_get_y(h2d__col__IBounds r0) {
	int r1;
	r1 = r0->yMin;
	return r1;
}

int h2d_col_IBounds_set_x(h2d__col__IBounds r0,int r1) {
	int r2, r3, r4;
	r2 = r0->xMax;
	r4 = r0->xMin;
	r3 = r1 - r4;
	r2 = r2 + r3;
	r0->xMax = r2;
	r0->xMin = r1;
	return r1;
}

int h2d_col_IBounds_set_y(h2d__col__IBounds r0,int r1) {
	int r2, r3, r4;
	r2 = r0->yMax;
	r4 = r0->yMin;
	r3 = r1 - r4;
	r2 = r2 + r3;
	r0->yMax = r2;
	r0->yMin = r1;
	return r1;
}

int h2d_col_IBounds_get_width(h2d__col__IBounds r0) {
	int r1, r2;
	r1 = r0->xMax;
	r2 = r0->xMin;
	r1 = r1 - r2;
	return r1;
}

int h2d_col_IBounds_get_height(h2d__col__IBounds r0) {
	int r1, r2;
	r1 = r0->yMax;
	r2 = r0->yMin;
	r1 = r1 - r2;
	return r1;
}

int h2d_col_IBounds_set_width(h2d__col__IBounds r0,int r1) {
	int r2;
	r2 = r0->xMin;
	r2 = r2 + r1;
	r0->xMax = r2;
	return r1;
}

int h2d_col_IBounds_set_height(h2d__col__IBounds r0,int r1) {
	int r2;
	r2 = r0->yMin;
	r2 = r2 + r1;
	r0->yMax = r2;
	return r1;
}

vbyte* h2d_col_IBounds___string(h2d__col__IBounds r0) {
	String r2;
	vbyte *r1;
	r2 = h2d_col_IBounds_toString(r0);
	if( r2 == NULL ) hl_null_access();
	r1 = r2->bytes;
	return r1;
}

String h2d_col_IBounds_toString(h2d__col__IBounds r0) {
	String r1, r2;
	h2d__col__IPoint r3;
	int *r5, *r7;
	int r4, r6, r9, r10, r11;
	r1 = (String)s$f95b70f;
	r3 = (h2d__col__IPoint)hl_alloc_obj(&t$h2d_col_IPoint);
	r4 = r0->xMin;
	r5 = &r4;
	r6 = r0->yMin;
	r7 = &r6;
	h2d_col_IPoint_new(r3,r5,r7);
	r2 = Std_string(((vdynamic*)r3));
	r1 = String___add__(r1,r2);
	r2 = (String)s$c0cb5f0;
	r1 = String___add__(r1,r2);
	r3 = (h2d__col__IPoint)hl_alloc_obj(&t$h2d_col_IPoint);
	r9 = r0->xMax;
	r10 = r0->xMin;
	r9 = r9 - r10;
	r5 = &r9;
	r10 = r0->yMax;
	r11 = r0->yMin;
	r10 = r10 - r11;
	r7 = &r10;
	h2d_col_IPoint_new(r3,r5,r7);
	r2 = Std_string(((vdynamic*)r3));
	r1 = String___add__(r1,r2);
	r2 = (String)s$cbb184d;
	r1 = String___add__(r1,r2);
	return r1;
}

h2d__col__IBounds h2d_col_IBounds_fromValues(int r0,int r1,int r2,int r3) {
	h2d__col__IBounds r4;
	int r6;
	r4 = (h2d__col__IBounds)hl_alloc_obj(&t$h2d_col_IBounds);
	h2d_col_IBounds_new(r4);
	r4->xMin = r0;
	r4->yMin = r1;
	r6 = r0 + r2;
	r4->xMax = r6;
	r6 = r1 + r3;
	r4->yMax = r6;
	return r4;
}

h2d__col__IBounds h2d_col_IBounds_fromPoints(h2d__col__IPoint r0,h2d__col__IPoint r1) {
	h2d__col__IBounds r2;
	int r4;
	r2 = (h2d__col__IBounds)hl_alloc_obj(&t$h2d_col_IBounds);
	h2d_col_IBounds_new(r2);
	if( r0 == NULL ) hl_null_access();
	r4 = r0->x;
	r2->xMin = r4;
	r4 = r0->y;
	r2->yMin = r4;
	if( r1 == NULL ) hl_null_access();
	r4 = r1->x;
	r2->xMax = r4;
	r4 = r1->y;
	r2->yMax = r4;
	return r2;
}


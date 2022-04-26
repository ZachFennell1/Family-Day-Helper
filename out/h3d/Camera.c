﻿// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <h3d/Camera.h>
#include <_std/Math.h>
extern $Math g$_Math;
#include <hl/natives.h>
extern hl_type t$h3d_Camera;
void h3d_Camera_new(h3d__Camera,double*,double*,double*,double*,double*,bool*);
extern hl_type t$h3d_Vector;
void h3d_Vector_new(h3d__Vector,double*,double*,double*,double*);
void h3d_Camera_update(h3d__Camera);
extern hl_type t$h3d_Matrix;
void h3d_Matrix_new(h3d__Matrix);
void h3d_Matrix_initInverse(h3d__Matrix,h3d__Matrix);
#include <h3d/Engine.h>
#include <h3d/col/Ray.h>
extern h3d__$Engine g$_h3d_Engine;
extern hl_type t$h3d_col_Ray;
void h3d_col_Ray_new(h3d__col__Ray);
void h3d_col_Ray_normalize(h3d__col__Ray);
#include <h3d/col/Point.h>
#include <h3d/anim/Animation.h>
extern hl_type t$h3d_scene_Object;
h3d__col__Point h3d_scene_Object_localToGlobal(h3d__scene__Object,h3d__col__Point);
extern String s$FOVY;
void h3d_Camera_makeCameraMatrix(h3d__Camera,h3d__Matrix);
void h3d_Camera_makeFrustumMatrix(h3d__Camera,h3d__Matrix);
void h3d_Matrix_multiply(h3d__Matrix,h3d__Matrix,h3d__Matrix);
void h3d_col_Frustum_loadMatrix(h3d__col__Frustum,h3d__Matrix);
#include <hl/types/ArrayObj.h>
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);
extern hl_type t$h3d_col_Point;
void h3d_col_Point_new(h3d__col__Point,double*,double*,double*);
h3d__Vector h3d_Matrix_getDirection(h3d__Matrix);
void h3d_Matrix_zero(h3d__Matrix);
extern hl_type t$h3d_col_Bounds;
void h3d_col_Bounds_new(h3d__col__Bounds);
void h3d_col_Bounds_load(h3d__col__Bounds,h3d__col__Bounds);
extern hl_type t$vrt_5ebdd1f;
extern hl_type t$h3d_col_Frustum;
void h3d_col_Frustum_new(h3d__col__Frustum,h3d__Matrix);

void h3d_Camera_setFovX(h3d__Camera r0,double r1,double r2) {
	$Math r4;
	double r3, r5, r7, r8;
	r4 = ($Math)g$_Math;
	r3 = r4->PI;
	r5 = 180.;
	r3 = r3 / r5;
	r5 = 2.;
	r8 = 0.5;
	r7 = r1 * r8;
	r7 = r7 * r3;
	r7 = hl_math_tan(r7);
	r7 = r7 / r2;
	r7 = hl_math_atan(r7);
	r5 = r5 * r7;
	r5 = r5 / r3;
	r0->fovY = r5;
	return;
}

double h3d_Camera_getFovX(h3d__Camera r0) {
	$Math r2;
	double r1, r3, r4, r5;
	r2 = ($Math)g$_Math;
	r1 = r2->PI;
	r3 = 180.;
	r1 = r1 / r3;
	r3 = r0->fovY;
	r4 = 0.5;
	r3 = r3 * r4;
	r3 = r3 * r1;
	r3 = hl_math_tan(r3);
	r4 = r0->screenRatio;
	r3 = r3 * r4;
	r3 = hl_math_atan(r3);
	r5 = 2.;
	r4 = r3 * r5;
	r4 = r4 / r1;
	return r4;
}

h3d__Camera h3d_Camera_clone(h3d__Camera r0) {
	bool *r13;
	bool r12;
	h3d__Camera r1;
	h3d__Vector r15, r16, r18, r23;
	double r2, r4, r6, r8, r10, r17, r19, r20, r21, r22, r24, r25, r26, r27, r28, r29, r30;
	double *r3, *r5, *r7, *r9, *r11;
	r1 = (h3d__Camera)hl_alloc_obj(&t$h3d_Camera);
	r2 = r0->fovY;
	r3 = &r2;
	r4 = r0->zoom;
	r5 = &r4;
	r6 = r0->screenRatio;
	r7 = &r6;
	r8 = r0->zNear;
	r9 = &r8;
	r10 = r0->zFar;
	r11 = &r10;
	r12 = r0->rightHanded;
	r13 = &r12;
	h3d_Camera_new(r1,r3,r5,r7,r9,r11,r13);
	r15 = r0->pos;
	r16 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	if( r15 == NULL ) hl_null_access();
	r17 = r15->x;
	r3 = &r17;
	r19 = r15->y;
	r5 = &r19;
	r20 = r15->z;
	r7 = &r20;
	r21 = r15->w;
	r9 = &r21;
	h3d_Vector_new(r16,r3,r5,r7,r9);
	r1->pos = r16;
	r16 = r0->up;
	r18 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	if( r16 == NULL ) hl_null_access();
	r22 = r16->x;
	r3 = &r22;
	r24 = r16->y;
	r5 = &r24;
	r25 = r16->z;
	r7 = &r25;
	r26 = r16->w;
	r9 = &r26;
	h3d_Vector_new(r18,r3,r5,r7,r9);
	r1->up = r18;
	r18 = r0->target;
	r23 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	if( r18 == NULL ) hl_null_access();
	r27 = r18->x;
	r3 = &r27;
	r28 = r18->y;
	r5 = &r28;
	r29 = r18->z;
	r7 = &r29;
	r30 = r18->w;
	r9 = &r30;
	h3d_Vector_new(r23,r3,r5,r7,r9);
	r1->target = r23;
	h3d_Camera_update(r1);
	return r1;
}

h3d__Matrix h3d_Camera_getInverseViewProj(h3d__Camera r0) {
	bool r3;
	h3d__Matrix r2, r4;
	r2 = r0->minv;
	if( r2 ) goto label$4a064be_4_5;
	r2 = (h3d__Matrix)hl_alloc_obj(&t$h3d_Matrix);
	h3d_Matrix_new(r2);
	r0->minv = r2;
	label$4a064be_4_5:
	r3 = r0->needInv;
	if( !r3 ) goto label$4a064be_4_13;
	r2 = r0->minv;
	if( r2 == NULL ) hl_null_access();
	r4 = r0->m;
	h3d_Matrix_initInverse(r2,r4);
	r3 = false;
	r0->needInv = r3;
	label$4a064be_4_13:
	r2 = r0->minv;
	return r2;
}

h3d__Matrix h3d_Camera_getInverseProj(h3d__Camera r0) {
	double r3, r4;
	h3d__Matrix r2, r5;
	r2 = r0->mprojInv;
	if( r2 ) goto label$4a064be_5_9;
	r2 = (h3d__Matrix)hl_alloc_obj(&t$h3d_Matrix);
	h3d_Matrix_new(r2);
	r0->mprojInv = r2;
	r2 = r0->mprojInv;
	if( r2 == NULL ) hl_null_access();
	r3 = 0.;
	r2->_44 = r3;
	label$4a064be_5_9:
	r2 = r0->mprojInv;
	if( r2 == NULL ) hl_null_access();
	r3 = r2->_44;
	r4 = 0.;
	if( r3 != r4 ) goto label$4a064be_5_18;
	r2 = r0->mprojInv;
	if( r2 == NULL ) hl_null_access();
	r5 = r0->mproj;
	h3d_Matrix_initInverse(r2,r5);
	label$4a064be_5_18:
	r2 = r0->mprojInv;
	return r2;
}

h3d__Matrix h3d_Camera_getInverseView(h3d__Camera r0) {
	double r3, r4;
	h3d__Matrix r2, r5;
	r2 = r0->mcamInv;
	if( r2 ) goto label$4a064be_6_9;
	r2 = (h3d__Matrix)hl_alloc_obj(&t$h3d_Matrix);
	h3d_Matrix_new(r2);
	r0->mcamInv = r2;
	r2 = r0->mcamInv;
	if( r2 == NULL ) hl_null_access();
	r3 = 0.;
	r2->_44 = r3;
	label$4a064be_6_9:
	r2 = r0->mcamInv;
	if( r2 == NULL ) hl_null_access();
	r3 = r2->_44;
	r4 = 0.;
	if( r3 != r4 ) goto label$4a064be_6_18;
	r2 = r0->mcamInv;
	if( r2 == NULL ) hl_null_access();
	r5 = r0->mcam;
	h3d_Matrix_initInverse(r2,r5);
	label$4a064be_6_18:
	r2 = r0->mcamInv;
	return r2;
}

void h3d_Camera_setCubeMap(h3d__Camera r0,int r1,h3d__Vector r2) {
	h3d__Vector r8, r10;
	double r9, r11;
	int r3, r5, r6, r7;
	r3 = 0;
	r5 = 0;
	r6 = 0;
	switch(r1) {
		default:
			goto label$4a064be_7_82;
		case 0:
			r7 = 1;
			r3 = r7;
			r8 = r0->up;
			if( r8 == NULL ) hl_null_access();
			r9 = 0.;
			r8->x = r9;
			r9 = 1.;
			r8->y = r9;
			r9 = 0.;
			r8->z = r9;
			r9 = 1.;
			r8->w = r9;
			goto label$4a064be_7_82;
		case 1:
			r7 = -1;
			r3 = r7;
			r8 = r0->up;
			if( r8 == NULL ) hl_null_access();
			r9 = 0.;
			r8->x = r9;
			r9 = 1.;
			r8->y = r9;
			r9 = 0.;
			r8->z = r9;
			r9 = 1.;
			r8->w = r9;
			goto label$4a064be_7_82;
		case 2:
			r7 = 1;
			r5 = r7;
			r8 = r0->up;
			if( r8 == NULL ) hl_null_access();
			r9 = 0.;
			r8->x = r9;
			r9 = 0.;
			r8->y = r9;
			r9 = -1.;
			r8->z = r9;
			r9 = 1.;
			r8->w = r9;
			goto label$4a064be_7_82;
		case 3:
			r7 = -1;
			r5 = r7;
			r8 = r0->up;
			if( r8 == NULL ) hl_null_access();
			r9 = 0.;
			r8->x = r9;
			r9 = 0.;
			r8->y = r9;
			r9 = 1.;
			r8->z = r9;
			r9 = 1.;
			r8->w = r9;
			goto label$4a064be_7_82;
		case 4:
			r7 = 1;
			r6 = r7;
			r8 = r0->up;
			if( r8 == NULL ) hl_null_access();
			r9 = 0.;
			r8->x = r9;
			r9 = 1.;
			r8->y = r9;
			r9 = 0.;
			r8->z = r9;
			r9 = 1.;
			r8->w = r9;
			goto label$4a064be_7_82;
		case 5:
			r7 = -1;
			r6 = r7;
			r8 = r0->up;
			if( r8 == NULL ) hl_null_access();
			r9 = 0.;
			r8->x = r9;
			r9 = 1.;
			r8->y = r9;
			r9 = 0.;
			r8->z = r9;
			r9 = 1.;
			r8->w = r9;
	}
	label$4a064be_7_82:
	if( !r2 ) goto label$4a064be_7_94;
	r8 = r0->pos;
	if( r8 == NULL ) hl_null_access();
	if( r2 == NULL ) hl_null_access();
	r9 = r2->x;
	r8->x = r9;
	r9 = r2->y;
	r8->y = r9;
	r9 = r2->z;
	r8->z = r9;
	r9 = r2->w;
	r8->w = r9;
	label$4a064be_7_94:
	r8 = r0->target;
	if( r8 == NULL ) hl_null_access();
	r10 = r0->pos;
	if( r10 == NULL ) hl_null_access();
	r9 = r10->x;
	r11 = (double)r3;
	r9 = r9 + r11;
	r8->x = r9;
	r10 = r0->pos;
	if( r10 == NULL ) hl_null_access();
	r9 = r10->y;
	r11 = (double)r5;
	r9 = r9 + r11;
	r8->y = r9;
	r10 = r0->pos;
	if( r10 == NULL ) hl_null_access();
	r9 = r10->z;
	r11 = (double)r6;
	r9 = r9 + r11;
	r8->z = r9;
	r9 = 1.;
	r8->w = r9;
	return;
}

h3d__Vector h3d_Camera_unproject(h3d__Camera r0,double r1,double r2,double r3) {
	h3d__Vector r4;
	double r5, r7, r9, r14, r15, r16, r17, r18, r19, r20;
	double *r6, *r8, *r10, *r11;
	h3d__Matrix r13;
	r4 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r5 = r1;
	r6 = &r5;
	r7 = r2;
	r8 = &r7;
	r9 = r3;
	r10 = &r9;
	r11 = NULL;
	h3d_Vector_new(r4,r6,r8,r10,r11);
	r13 = h3d_Camera_getInverseViewProj(r0);
	r14 = r4->x;
	if( r13 == NULL ) hl_null_access();
	r15 = r13->_11;
	r14 = r14 * r15;
	r15 = r4->y;
	r16 = r13->_21;
	r15 = r15 * r16;
	r14 = r14 + r15;
	r15 = r4->z;
	r16 = r13->_31;
	r15 = r15 * r16;
	r14 = r14 + r15;
	r15 = r4->w;
	r16 = r13->_41;
	r15 = r15 * r16;
	r14 = r14 + r15;
	r15 = r4->x;
	r16 = r13->_12;
	r15 = r15 * r16;
	r16 = r4->y;
	r17 = r13->_22;
	r16 = r16 * r17;
	r15 = r15 + r16;
	r16 = r4->z;
	r17 = r13->_32;
	r16 = r16 * r17;
	r15 = r15 + r16;
	r16 = r4->w;
	r17 = r13->_42;
	r16 = r16 * r17;
	r15 = r15 + r16;
	r16 = r4->x;
	r17 = r13->_13;
	r16 = r16 * r17;
	r17 = r4->y;
	r18 = r13->_23;
	r17 = r17 * r18;
	r16 = r16 + r17;
	r17 = r4->z;
	r18 = r13->_33;
	r17 = r17 * r18;
	r16 = r16 + r17;
	r17 = r4->w;
	r18 = r13->_43;
	r17 = r17 * r18;
	r16 = r16 + r17;
	r17 = 1.;
	r18 = r4->x;
	r19 = r13->_14;
	r18 = r18 * r19;
	r19 = r4->y;
	r20 = r13->_24;
	r19 = r19 * r20;
	r18 = r18 + r19;
	r19 = r4->z;
	r20 = r13->_34;
	r19 = r19 * r20;
	r18 = r18 + r19;
	r19 = r4->w;
	r20 = r13->_44;
	r19 = r19 * r20;
	r18 = r18 + r19;
	r17 = r17 / r18;
	r18 = r14 * r17;
	r4->x = r18;
	r18 = r15 * r17;
	r4->y = r18;
	r18 = r16 * r17;
	r4->z = r18;
	r18 = 1.;
	r4->w = r18;
	return r4;
}

h3d__col__Ray h3d_Camera_rayFromScreen(h3d__Camera r0,double r1,double r2,int* r3,int* r4) {
	h3d__Engine r7;
	h3d__Vector r16, r18;
	h3d__$Engine r8;
	h3d__col__Ray r22;
	double r12, r13, r14, r15, r17, r19, r20, r21, r23;
	int r5, r6, r10, r11;
	if( r3 ) goto label$4a064be_9_3;
	r5 = -1;
	goto label$4a064be_9_4;
	label$4a064be_9_3:
	r5 = *r3;
	label$4a064be_9_4:
	if( r4 ) goto label$4a064be_9_7;
	r6 = -1;
	goto label$4a064be_9_8;
	label$4a064be_9_7:
	r6 = *r4;
	label$4a064be_9_8:
	r8 = (h3d__$Engine)g$_h3d_Engine;
	r7 = r8->CURRENT;
	r11 = 0;
	if( r5 >= r11 ) goto label$4a064be_9_15;
	if( r7 == NULL ) hl_null_access();
	r10 = r7->width;
	r5 = r10;
	label$4a064be_9_15:
	r11 = 0;
	if( r6 >= r11 ) goto label$4a064be_9_20;
	if( r7 == NULL ) hl_null_access();
	r10 = r7->height;
	r6 = r10;
	label$4a064be_9_20:
	r13 = (double)r5;
	r12 = r1 / r13;
	r13 = 0.5;
	r12 = r12 - r13;
	r13 = 2.;
	r12 = r12 * r13;
	r13 = 0.5;
	r15 = (double)r6;
	r14 = r2 / r15;
	r13 = r13 - r14;
	r14 = 2.;
	r13 = r13 * r14;
	r17 = 0.;
	r16 = h3d_Camera_unproject(r0,r12,r13,r17);
	if( r16 == NULL ) hl_null_access();
	r14 = r16->x;
	r15 = r16->y;
	r17 = r16->z;
	r21 = 1.;
	r18 = h3d_Camera_unproject(r0,r12,r13,r21);
	if( r18 == NULL ) hl_null_access();
	r19 = r18->x;
	r20 = r18->y;
	r21 = r18->z;
	r22 = (h3d__col__Ray)hl_alloc_obj(&t$h3d_col_Ray);
	h3d_col_Ray_new(r22);
	r22->px = r14;
	r22->py = r15;
	r22->pz = r17;
	r23 = r19 - r14;
	r22->lx = r23;
	r23 = r20 - r15;
	r22->ly = r23;
	r23 = r21 - r17;
	r22->lz = r23;
	h3d_col_Ray_normalize(r22);
	return r22;
}

void h3d_Camera_update(h3d__Camera r0) {
	String r8, r12;
	vvirtual *r2;
	bool r16;
	h3d__col__Frustum r17;
	h3d__Vector r6;
	double r7;
	h3d__col__Point r3, r5;
	vdynamic *r11;
	h3d__anim__Animation r10;
	h3d__Matrix r13, r14, r15;
	h3d__scene__Object r4, r9;
	r2 = r0->follow;
	if( !r2 ) goto label$4a064be_10_66;
	r2 = r0->follow;
	if( r2 == NULL ) hl_null_access();
	r4 = hl_vfields(r2)[0] ? (*(h3d__scene__Object*)(hl_vfields(r2)[0])) : (h3d__scene__Object)hl_dyn_getp(r2->value,5594516/*pos*/,&t$h3d_scene_Object);
	if( r4 == NULL ) hl_null_access();
	r3 = NULL;
	r3 = h3d_scene_Object_localToGlobal(r4,r3);
	r2 = r0->follow;
	if( r2 == NULL ) hl_null_access();
	r4 = hl_vfields(r2)[1] ? (*(h3d__scene__Object*)(hl_vfields(r2)[1])) : (h3d__scene__Object)hl_dyn_getp(r2->value,-420679230/*target*/,&t$h3d_scene_Object);
	if( r4 == NULL ) hl_null_access();
	r5 = NULL;
	r5 = h3d_scene_Object_localToGlobal(r4,r5);
	r6 = r0->pos;
	if( r6 == NULL ) hl_null_access();
	if( r3 == NULL ) hl_null_access();
	r7 = r3->x;
	r6->x = r7;
	r7 = r3->y;
	r6->y = r7;
	r7 = r3->z;
	r6->z = r7;
	r7 = 1.;
	r6->w = r7;
	r6 = r0->target;
	if( r6 == NULL ) hl_null_access();
	if( r5 == NULL ) hl_null_access();
	r7 = r5->x;
	r6->x = r7;
	r7 = r5->y;
	r6->y = r7;
	r7 = r5->z;
	r6->z = r7;
	r7 = 1.;
	r6->w = r7;
	r2 = r0->follow;
	if( r2 == NULL ) hl_null_access();
	r4 = hl_vfields(r2)[0] ? (*(h3d__scene__Object*)(hl_vfields(r2)[0])) : (h3d__scene__Object)hl_dyn_getp(r2->value,5594516/*pos*/,&t$h3d_scene_Object);
	if( r4 == NULL ) hl_null_access();
	r8 = r4->name;
	if( !r8 ) goto label$4a064be_10_66;
	r2 = r0->follow;
	if( r2 == NULL ) hl_null_access();
	r4 = hl_vfields(r2)[0] ? (*(h3d__scene__Object*)(hl_vfields(r2)[0])) : (h3d__scene__Object)hl_dyn_getp(r2->value,5594516/*pos*/,&t$h3d_scene_Object);
	label$4a064be_10_45:
	if( !r4 ) goto label$4a064be_10_66;
	if( r4 == NULL ) hl_null_access();
	r10 = r4->currentAnimation;
	if( !r10 ) goto label$4a064be_10_63;
	r10 = r4->currentAnimation;
	if( r10 == NULL ) hl_null_access();
	r2 = r0->follow;
	if( r2 == NULL ) hl_null_access();
	r9 = hl_vfields(r2)[0] ? (*(h3d__scene__Object*)(hl_vfields(r2)[0])) : (h3d__scene__Object)hl_dyn_getp(r2->value,5594516/*pos*/,&t$h3d_scene_Object);
	if( r9 == NULL ) hl_null_access();
	r8 = r9->name;
	r12 = (String)s$FOVY;
	r11 = ((vdynamic* (*)(h3d__anim__Animation,String,String))r10->$type->vobj_proto[2])(r10,r8,r12);
	if( !r11 ) goto label$4a064be_10_63;
	r7 = r11 ? r11->v.d : 0;
	r0->fovY = r7;
	goto label$4a064be_10_66;
	label$4a064be_10_63:
	r9 = r4->parent;
	r4 = r9;
	goto label$4a064be_10_45;
	label$4a064be_10_66:
	r13 = r0->mcam;
	h3d_Camera_makeCameraMatrix(r0,r13);
	r13 = r0->mproj;
	h3d_Camera_makeFrustumMatrix(r0,r13);
	r13 = r0->m;
	if( r13 == NULL ) hl_null_access();
	r14 = r0->mcam;
	r15 = r0->mproj;
	h3d_Matrix_multiply(r13,r14,r15);
	r16 = true;
	r0->needInv = r16;
	r13 = r0->mcamInv;
	if( !r13 ) goto label$4a064be_10_83;
	r13 = r0->mcamInv;
	if( r13 == NULL ) hl_null_access();
	r7 = 0.;
	r13->_44 = r7;
	label$4a064be_10_83:
	r13 = r0->mprojInv;
	if( !r13 ) goto label$4a064be_10_89;
	r13 = r0->mprojInv;
	if( r13 == NULL ) hl_null_access();
	r7 = 0.;
	r13->_44 = r7;
	label$4a064be_10_89:
	r17 = r0->frustum;
	if( r17 == NULL ) hl_null_access();
	r13 = r0->m;
	h3d_col_Frustum_loadMatrix(r17,r13);
	return;
}

hl__types__ArrayObj h3d_Camera_getFrustumCorners(h3d__Camera r0,double* r1,double* r2) {
	hl__types__ArrayObj r5;
	hl_type *r7;
	h3d__Vector r9;
	double r3, r4, r10, r11;
	int r8;
	varray *r6;
	if( r1 ) goto label$4a064be_11_3;
	r3 = 1.;
	goto label$4a064be_11_4;
	label$4a064be_11_3:
	r3 = *r1;
	label$4a064be_11_4:
	if( r2 ) goto label$4a064be_11_7;
	r4 = 0.;
	goto label$4a064be_11_8;
	label$4a064be_11_7:
	r4 = *r2;
	label$4a064be_11_8:
	r7 = &t$h3d_Vector;
	r8 = 8;
	r6 = hl_alloc_array(r7,r8);
	r10 = -1.;
	r11 = 1.;
	r9 = h3d_Camera_unproject(r0,r10,r11,r4);
	r8 = 0;
	((h3d__Vector*)(r6 + 1))[r8] = r9;
	r10 = 1.;
	r11 = 1.;
	r9 = h3d_Camera_unproject(r0,r10,r11,r4);
	r8 = 1;
	((h3d__Vector*)(r6 + 1))[r8] = r9;
	r10 = 1.;
	r11 = -1.;
	r9 = h3d_Camera_unproject(r0,r10,r11,r4);
	r8 = 2;
	((h3d__Vector*)(r6 + 1))[r8] = r9;
	r10 = -1.;
	r11 = -1.;
	r9 = h3d_Camera_unproject(r0,r10,r11,r4);
	r8 = 3;
	((h3d__Vector*)(r6 + 1))[r8] = r9;
	r10 = -1.;
	r11 = 1.;
	r9 = h3d_Camera_unproject(r0,r10,r11,r3);
	r8 = 4;
	((h3d__Vector*)(r6 + 1))[r8] = r9;
	r10 = 1.;
	r11 = 1.;
	r9 = h3d_Camera_unproject(r0,r10,r11,r3);
	r8 = 5;
	((h3d__Vector*)(r6 + 1))[r8] = r9;
	r10 = 1.;
	r11 = -1.;
	r9 = h3d_Camera_unproject(r0,r10,r11,r3);
	r8 = 6;
	((h3d__Vector*)(r6 + 1))[r8] = r9;
	r10 = -1.;
	r11 = -1.;
	r9 = h3d_Camera_unproject(r0,r10,r11,r3);
	r8 = 7;
	((h3d__Vector*)(r6 + 1))[r8] = r9;
	r5 = hl_types_ArrayObj_alloc(r6);
	return r5;
}

bool h3d_Camera_lostUp(h3d__Camera r0) {
	bool r10;
	h3d__Vector r1, r3;
	double r2, r4, r5, r6, r7, r8, r9;
	r1 = r0->pos;
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
	if( !(r7 < r9) ) goto label$4a064be_12_16;
	r8 = 0.;
	r7 = r8;
	goto label$4a064be_12_20;
	label$4a064be_12_16:
	r8 = 1.;
	r9 = hl_math_sqrt(r7);
	r8 = r8 / r9;
	r7 = r8;
	label$4a064be_12_20:
	r8 = r2 * r7;
	r2 = r8;
	r8 = r4 * r7;
	r4 = r8;
	r8 = r5 * r7;
	r5 = r8;
	r3 = r0->up;
	if( r3 == NULL ) hl_null_access();
	r8 = r3->x;
	r7 = r2 * r8;
	r9 = r3->y;
	r8 = r4 * r9;
	r7 = r7 + r8;
	r9 = r3->z;
	r8 = r5 * r9;
	r7 = r7 + r8;
	r7 = hl_math_abs(r7);
	r8 = 0.9989999999999999991;
	if( r7 > r8 ) goto label$4a064be_12_41;
	r10 = false;
	goto label$4a064be_12_42;
	label$4a064be_12_41:
	r10 = true;
	label$4a064be_12_42:
	return r10;
}

h3d__col__Point h3d_Camera_getViewDirection(h3d__Camera r0,double r1,double r2,double* r3) {
	h3d__col__Point r5;
	double r4, r6, r7, r9, r13, r14, r15, r16, r17;
	double *r8, *r10;
	h3d__Matrix r12;
	if( r3 ) goto label$4a064be_13_3;
	r4 = 0.;
	goto label$4a064be_13_4;
	label$4a064be_13_3:
	r4 = *r3;
	label$4a064be_13_4:
	r5 = (h3d__col__Point)hl_alloc_obj(&t$h3d_col_Point);
	r6 = r1;
	r3 = &r6;
	r7 = r2;
	r8 = &r7;
	r9 = r4;
	r10 = &r9;
	h3d_col_Point_new(r5,r3,r8,r10);
	r12 = r0->mcam;
	r13 = r5->x;
	if( r12 == NULL ) hl_null_access();
	r14 = r12->_11;
	r13 = r13 * r14;
	r14 = r5->y;
	r15 = r12->_21;
	r14 = r14 * r15;
	r13 = r13 + r14;
	r14 = r5->z;
	r15 = r12->_31;
	r14 = r14 * r15;
	r13 = r13 + r14;
	r14 = r5->x;
	r15 = r12->_12;
	r14 = r14 * r15;
	r15 = r5->y;
	r16 = r12->_22;
	r15 = r15 * r16;
	r14 = r14 + r15;
	r15 = r5->z;
	r16 = r12->_32;
	r15 = r15 * r16;
	r14 = r14 + r15;
	r15 = r5->x;
	r16 = r12->_13;
	r15 = r15 * r16;
	r16 = r5->y;
	r17 = r12->_23;
	r16 = r16 * r17;
	r15 = r15 + r16;
	r16 = r5->z;
	r17 = r12->_33;
	r16 = r16 * r17;
	r15 = r15 + r16;
	r5->x = r13;
	r5->y = r14;
	r5->z = r15;
	r13 = r5->x;
	r14 = r5->x;
	r13 = r13 * r14;
	r14 = r5->y;
	r15 = r5->y;
	r14 = r14 * r15;
	r13 = r13 + r14;
	r14 = r5->z;
	r15 = r5->z;
	r14 = r14 * r15;
	r13 = r13 + r14;
	r15 = 1.000000000000000036e-10;
	if( !(r13 < r15) ) goto label$4a064be_13_66;
	r14 = 0.;
	r13 = r14;
	goto label$4a064be_13_70;
	label$4a064be_13_66:
	r14 = 1.;
	r15 = hl_math_sqrt(r13);
	r14 = r14 / r15;
	r13 = r14;
	label$4a064be_13_70:
	r14 = r5->x;
	r14 = r14 * r13;
	r5->x = r14;
	r14 = r5->y;
	r14 = r14 * r13;
	r5->y = r14;
	r14 = r5->z;
	r14 = r14 * r13;
	r5->z = r14;
	return r5;
}

void h3d_Camera_movePosAxis(h3d__Camera r0,double r1,double r2,double* r3) {
	h3d__Vector r14;
	double r4, r5, r7, r9, r10, r11, r12, r13;
	h3d__Matrix r8;
	if( r3 ) goto label$4a064be_14_3;
	r4 = 0.;
	goto label$4a064be_14_4;
	label$4a064be_14_3:
	r4 = *r3;
	label$4a064be_14_4:
	r8 = r0->mcam;
	if( r8 == NULL ) hl_null_access();
	r10 = r8->_11;
	r9 = r1 * r10;
	r11 = r8->_21;
	r10 = r2 * r11;
	r9 = r9 + r10;
	r11 = r8->_31;
	r10 = r4 * r11;
	r9 = r9 + r10;
	r11 = r8->_12;
	r10 = r1 * r11;
	r12 = r8->_22;
	r11 = r2 * r12;
	r10 = r10 + r11;
	r12 = r8->_32;
	r11 = r4 * r12;
	r10 = r10 + r11;
	r12 = r8->_13;
	r11 = r1 * r12;
	r13 = r8->_23;
	r12 = r2 * r13;
	r11 = r11 + r12;
	r13 = r8->_33;
	r12 = r4 * r13;
	r11 = r11 + r12;
	r5 = r9;
	r7 = r10;
	r14 = r0->pos;
	if( r14 == NULL ) hl_null_access();
	r9 = r14->x;
	r9 = r9 + r5;
	r14->x = r9;
	r14 = r0->pos;
	if( r14 == NULL ) hl_null_access();
	r9 = r14->y;
	r9 = r9 + r7;
	r14->y = r9;
	r14 = r0->pos;
	if( r14 == NULL ) hl_null_access();
	r9 = r14->z;
	r9 = r9 + r11;
	r14->z = r9;
	return;
}

void h3d_Camera_moveTargetAxis(h3d__Camera r0,double r1,double r2,double* r3) {
	h3d__Vector r14;
	double r4, r5, r7, r9, r10, r11, r12, r13;
	h3d__Matrix r8;
	if( r3 ) goto label$4a064be_15_3;
	r4 = 0.;
	goto label$4a064be_15_4;
	label$4a064be_15_3:
	r4 = *r3;
	label$4a064be_15_4:
	r8 = r0->mcam;
	if( r8 == NULL ) hl_null_access();
	r10 = r8->_11;
	r9 = r1 * r10;
	r11 = r8->_21;
	r10 = r2 * r11;
	r9 = r9 + r10;
	r11 = r8->_31;
	r10 = r4 * r11;
	r9 = r9 + r10;
	r11 = r8->_12;
	r10 = r1 * r11;
	r12 = r8->_22;
	r11 = r2 * r12;
	r10 = r10 + r11;
	r12 = r8->_32;
	r11 = r4 * r12;
	r10 = r10 + r11;
	r12 = r8->_13;
	r11 = r1 * r12;
	r13 = r8->_23;
	r12 = r2 * r13;
	r11 = r11 + r12;
	r13 = r8->_33;
	r12 = r4 * r13;
	r11 = r11 + r12;
	r5 = r9;
	r7 = r10;
	r14 = r0->target;
	if( r14 == NULL ) hl_null_access();
	r9 = r14->x;
	r9 = r9 + r5;
	r14->x = r9;
	r14 = r0->target;
	if( r14 == NULL ) hl_null_access();
	r9 = r14->y;
	r9 = r9 + r7;
	r14->y = r9;
	r14 = r0->target;
	if( r14 == NULL ) hl_null_access();
	r9 = r14->z;
	r9 = r9 + r11;
	r14->z = r9;
	return;
}

void h3d_Camera_forward(h3d__Camera r0,double* r1) {
	h3d__Vector r7, r8;
	double r2, r3, r4, r5, r9;
	if( r1 ) goto label$4a064be_16_3;
	r2 = 1.;
	goto label$4a064be_16_4;
	label$4a064be_16_3:
	r2 = *r1;
	label$4a064be_16_4:
	r3 = 1.;
	r4 = 0.02500000000000000139;
	r4 = r4 * r2;
	r3 = r3 - r4;
	r7 = r0->pos;
	if( r7 == NULL ) hl_null_access();
	r8 = r0->target;
	if( r8 == NULL ) hl_null_access();
	r4 = r8->x;
	r8 = r0->pos;
	if( r8 == NULL ) hl_null_access();
	r5 = r8->x;
	r8 = r0->target;
	if( r8 == NULL ) hl_null_access();
	r9 = r8->x;
	r5 = r5 - r9;
	r5 = r5 * r3;
	r4 = r4 + r5;
	r7->x = r4;
	r8 = r0->target;
	if( r8 == NULL ) hl_null_access();
	r4 = r8->y;
	r8 = r0->pos;
	if( r8 == NULL ) hl_null_access();
	r5 = r8->y;
	r8 = r0->target;
	if( r8 == NULL ) hl_null_access();
	r9 = r8->y;
	r5 = r5 - r9;
	r5 = r5 * r3;
	r4 = r4 + r5;
	r7->y = r4;
	r8 = r0->target;
	if( r8 == NULL ) hl_null_access();
	r4 = r8->z;
	r8 = r0->pos;
	if( r8 == NULL ) hl_null_access();
	r5 = r8->z;
	r8 = r0->target;
	if( r8 == NULL ) hl_null_access();
	r9 = r8->z;
	r5 = r5 - r9;
	r5 = r5 * r3;
	r4 = r4 + r5;
	r7->z = r4;
	r4 = 1.;
	r7->w = r4;
	return;
}

void h3d_Camera_backward(h3d__Camera r0,double* r1) {
	h3d__Vector r7, r8;
	double r2, r3, r4, r5, r9;
	if( r1 ) goto label$4a064be_17_3;
	r2 = 1.;
	goto label$4a064be_17_4;
	label$4a064be_17_3:
	r2 = *r1;
	label$4a064be_17_4:
	r3 = 1.;
	r4 = 0.02500000000000000139;
	r4 = r4 * r2;
	r3 = r3 + r4;
	r7 = r0->pos;
	if( r7 == NULL ) hl_null_access();
	r8 = r0->target;
	if( r8 == NULL ) hl_null_access();
	r4 = r8->x;
	r8 = r0->pos;
	if( r8 == NULL ) hl_null_access();
	r5 = r8->x;
	r8 = r0->target;
	if( r8 == NULL ) hl_null_access();
	r9 = r8->x;
	r5 = r5 - r9;
	r5 = r5 * r3;
	r4 = r4 + r5;
	r7->x = r4;
	r8 = r0->target;
	if( r8 == NULL ) hl_null_access();
	r4 = r8->y;
	r8 = r0->pos;
	if( r8 == NULL ) hl_null_access();
	r5 = r8->y;
	r8 = r0->target;
	if( r8 == NULL ) hl_null_access();
	r9 = r8->y;
	r5 = r5 - r9;
	r5 = r5 * r3;
	r4 = r4 + r5;
	r7->y = r4;
	r8 = r0->target;
	if( r8 == NULL ) hl_null_access();
	r4 = r8->z;
	r8 = r0->pos;
	if( r8 == NULL ) hl_null_access();
	r5 = r8->z;
	r8 = r0->target;
	if( r8 == NULL ) hl_null_access();
	r9 = r8->z;
	r5 = r5 - r9;
	r5 = r5 * r3;
	r4 = r4 + r5;
	r7->z = r4;
	r4 = 1.;
	r7->w = r4;
	return;
}

void h3d_Camera_makeCameraMatrix(h3d__Camera r0,h3d__Matrix r1) {
	bool r11;
	h3d__Vector r2, r4, r6, r14, r22, r24;
	double r5, r7, r8, r9, r10, r12, r13, r15, r16, r17, r18, r19, r20, r21, r23;
	r2 = r0->target;
	r4 = r0->pos;
	if( r2 == NULL ) hl_null_access();
	r5 = r2->x;
	if( r4 == NULL ) hl_null_access();
	r7 = r4->x;
	r5 = r5 - r7;
	r7 = r2->y;
	r8 = r4->y;
	r7 = r7 - r8;
	r8 = r2->z;
	r9 = r4->z;
	r8 = r8 - r9;
	r9 = r2->w;
	r10 = r4->w;
	r9 = r9 - r10;
	r11 = r0->rightHanded;
	if( !r11 ) goto label$4a064be_18_27;
	r12 = -1.;
	r10 = r5 * r12;
	r5 = r10;
	r12 = -1.;
	r10 = r7 * r12;
	r7 = r10;
	r12 = -1.;
	r10 = r8 * r12;
	r8 = r10;
	label$4a064be_18_27:
	r10 = r5 * r5;
	r12 = r7 * r7;
	r10 = r10 + r12;
	r12 = r8 * r8;
	r10 = r10 + r12;
	r13 = 1.000000000000000036e-10;
	if( !(r10 < r13) ) goto label$4a064be_18_37;
	r12 = 0.;
	r10 = r12;
	goto label$4a064be_18_41;
	label$4a064be_18_37:
	r12 = 1.;
	r13 = hl_math_sqrt(r10);
	r12 = r12 / r13;
	r10 = r12;
	label$4a064be_18_41:
	r12 = r5 * r10;
	r5 = r12;
	r12 = r7 * r10;
	r7 = r12;
	r12 = r8 * r10;
	r8 = r12;
	r6 = r0->up;
	if( r6 == NULL ) hl_null_access();
	r10 = r6->y;
	r10 = r10 * r12;
	r12 = r6->z;
	r12 = r12 * r7;
	r10 = r10 - r12;
	r12 = r6->z;
	r12 = r12 * r5;
	r13 = r6->x;
	r13 = r13 * r8;
	r12 = r12 - r13;
	r13 = r6->x;
	r13 = r13 * r7;
	r15 = r6->y;
	r15 = r15 * r5;
	r13 = r13 - r15;
	r15 = 1.;
	r16 = r10 * r10;
	r17 = r12 * r12;
	r16 = r16 + r17;
	r17 = r13 * r13;
	r16 = r16 + r17;
	r18 = 1.000000000000000036e-10;
	if( !(r16 < r18) ) goto label$4a064be_18_75;
	r17 = 0.;
	r16 = r17;
	goto label$4a064be_18_79;
	label$4a064be_18_75:
	r17 = 1.;
	r18 = hl_math_sqrt(r16);
	r17 = r17 / r18;
	r16 = r17;
	label$4a064be_18_79:
	r17 = r10 * r16;
	r10 = r17;
	r17 = r12 * r16;
	r12 = r17;
	r17 = r13 * r16;
	r13 = r17;
	r16 = r10 * r10;
	r17 = r12 * r12;
	r16 = r16 + r17;
	r17 = r13 * r13;
	r16 = r16 + r17;
	r16 = hl_math_sqrt(r16);
	r17 = 0.;
	if( r16 != r17 ) goto label$4a064be_18_96;
	r10 = r7;
	r12 = r8;
	r13 = r5;
	label$4a064be_18_96:
	r16 = r7 * r13;
	r17 = r8 * r12;
	r16 = r16 - r17;
	r17 = r8 * r10;
	r18 = r5 * r13;
	r17 = r17 - r18;
	r18 = r5 * r12;
	r19 = r7 * r10;
	r18 = r18 - r19;
	r19 = 1.;
	if( r1 == NULL ) hl_null_access();
	r1->_11 = r10;
	r1->_12 = r16;
	r1->_13 = r5;
	r20 = 0.;
	r1->_14 = r20;
	r1->_21 = r12;
	r1->_22 = r17;
	r1->_23 = r7;
	r20 = 0.;
	r1->_24 = r20;
	r1->_31 = r13;
	r1->_32 = r18;
	r1->_33 = r8;
	r20 = 0.;
	r1->_34 = r20;
	r14 = r0->pos;
	if( r14 == NULL ) hl_null_access();
	r21 = r14->x;
	r20 = r10 * r21;
	r23 = r14->y;
	r21 = r12 * r23;
	r20 = r20 + r21;
	r23 = r14->z;
	r21 = r13 * r23;
	r20 = r20 + r21;
	r20 = -r20;
	r1->_41 = r20;
	r22 = r0->pos;
	if( r22 == NULL ) hl_null_access();
	r21 = r22->x;
	r20 = r16 * r21;
	r23 = r22->y;
	r21 = r17 * r23;
	r20 = r20 + r21;
	r23 = r22->z;
	r21 = r18 * r23;
	r20 = r20 + r21;
	r20 = -r20;
	r1->_42 = r20;
	r24 = r0->pos;
	if( r24 == NULL ) hl_null_access();
	r21 = r24->x;
	r20 = r5 * r21;
	r23 = r24->y;
	r21 = r7 * r23;
	r20 = r20 + r21;
	r23 = r24->z;
	r21 = r8 * r23;
	r20 = r20 + r21;
	r20 = -r20;
	r1->_43 = r20;
	r20 = 1.;
	r1->_44 = r20;
	return;
}

void h3d_Camera_setTransform(h3d__Camera r0,h3d__Matrix r1) {
	h3d__Vector r2, r4, r6;
	double r5, r7, r8, r9, r10;
	r2 = r0->pos;
	if( r2 == NULL ) hl_null_access();
	if( r1 == NULL ) hl_null_access();
	r5 = r1->_41;
	r2->x = r5;
	r5 = r1->_42;
	r2->y = r5;
	r5 = r1->_43;
	r2->z = r5;
	r5 = 1.;
	r2->w = r5;
	r2 = r0->target;
	r4 = r0->pos;
	r6 = h3d_Matrix_getDirection(r1);
	if( r4 == NULL ) hl_null_access();
	r5 = r4->x;
	if( r6 == NULL ) hl_null_access();
	r7 = r6->x;
	r5 = r5 + r7;
	r7 = r4->y;
	r8 = r6->y;
	r7 = r7 + r8;
	r8 = r4->z;
	r9 = r6->z;
	r8 = r8 + r9;
	r9 = r4->w;
	r10 = r6->w;
	r9 = r9 + r10;
	if( r2 == NULL ) hl_null_access();
	r2->x = r5;
	r2->y = r7;
	r2->z = r8;
	r2->w = r9;
	return;
}

void h3d_Camera_makeFrustumMatrix(h3d__Camera r0,h3d__Matrix r1) {
	bool r11;
	h3d__col__Bounds r3;
	$Math r9;
	double r4, r5, r6, r7, r8, r10;
	if( r1 == NULL ) hl_null_access();
	h3d_Matrix_zero(r1);
	r3 = r0->orthoBounds;
	if( !r3 ) goto label$4a064be_20_46;
	r4 = 1.;
	if( r3 == NULL ) hl_null_access();
	r5 = r3->xMax;
	r6 = r3->xMin;
	r5 = r5 - r6;
	r4 = r4 / r5;
	r5 = 1.;
	r6 = r3->yMax;
	r7 = r3->yMin;
	r6 = r6 - r7;
	r5 = r5 / r6;
	r6 = 1.;
	r7 = r3->zMax;
	r8 = r3->zMin;
	r7 = r7 - r8;
	r6 = r6 / r7;
	r7 = 2.;
	r7 = r7 * r4;
	r1->_11 = r7;
	r7 = 2.;
	r7 = r7 * r5;
	r1->_22 = r7;
	r1->_33 = r6;
	r7 = r3->xMin;
	r8 = r3->xMax;
	r7 = r7 + r8;
	r7 = -r7;
	r7 = r7 * r4;
	r1->_41 = r7;
	r7 = r3->yMin;
	r8 = r3->yMax;
	r7 = r7 + r8;
	r7 = -r7;
	r7 = r7 * r5;
	r1->_42 = r7;
	r7 = r3->zMin;
	r7 = -r7;
	r7 = r7 * r6;
	r1->_43 = r7;
	r7 = 1.;
	r1->_44 = r7;
	goto label$4a064be_20_82;
	label$4a064be_20_46:
	r9 = ($Math)g$_Math;
	r4 = r9->PI;
	r5 = 180.;
	r4 = r4 / r5;
	r5 = r0->fovY;
	r6 = 0.5;
	r5 = r5 * r6;
	r5 = r5 * r4;
	r5 = hl_math_tan(r5);
	r6 = r0->screenRatio;
	r5 = r5 * r6;
	r5 = hl_math_atan(r5);
	r6 = r0->zoom;
	r7 = hl_math_tan(r5);
	r6 = r6 / r7;
	r1->_11 = r6;
	r8 = r0->screenRatio;
	r7 = r6 * r8;
	r1->_22 = r7;
	r7 = r0->zFar;
	r8 = r0->zFar;
	r10 = r0->zNear;
	r8 = r8 - r10;
	r7 = r7 / r8;
	r1->_33 = r7;
	r7 = 1.;
	r1->_34 = r7;
	r7 = r0->zNear;
	r8 = r0->zFar;
	r7 = r7 * r8;
	r7 = -r7;
	r8 = r0->zFar;
	r10 = r0->zNear;
	r8 = r8 - r10;
	r7 = r7 / r8;
	r1->_43 = r7;
	label$4a064be_20_82:
	r4 = r1->_11;
	r5 = r0->viewX;
	r6 = r1->_14;
	r5 = r5 * r6;
	r4 = r4 + r5;
	r1->_11 = r4;
	r4 = r1->_21;
	r5 = r0->viewX;
	r6 = r1->_24;
	r5 = r5 * r6;
	r4 = r4 + r5;
	r1->_21 = r4;
	r4 = r1->_31;
	r5 = r0->viewX;
	r6 = r1->_34;
	r5 = r5 * r6;
	r4 = r4 + r5;
	r1->_31 = r4;
	r4 = r1->_41;
	r5 = r0->viewX;
	r6 = r1->_44;
	r5 = r5 * r6;
	r4 = r4 + r5;
	r1->_41 = r4;
	r4 = r1->_12;
	r5 = r0->viewY;
	r6 = r1->_14;
	r5 = r5 * r6;
	r4 = r4 + r5;
	r1->_12 = r4;
	r4 = r1->_22;
	r5 = r0->viewY;
	r6 = r1->_24;
	r5 = r5 * r6;
	r4 = r4 + r5;
	r1->_22 = r4;
	r4 = r1->_32;
	r5 = r0->viewY;
	r6 = r1->_34;
	r5 = r5 * r6;
	r4 = r4 + r5;
	r1->_32 = r4;
	r4 = r1->_42;
	r5 = r0->viewY;
	r6 = r1->_44;
	r5 = r5 * r6;
	r4 = r4 + r5;
	r1->_42 = r4;
	r11 = r0->rightHanded;
	if( !r11 ) goto label$4a064be_20_140;
	r4 = r1->_33;
	r5 = -1.;
	r4 = r4 * r5;
	r1->_33 = r4;
	r4 = r1->_34;
	r5 = -1.;
	r4 = r4 * r5;
	r1->_34 = r4;
	label$4a064be_20_140:
	return;
}

h3d__Vector h3d_Camera_project(h3d__Camera r0,double r1,double r2,double r3,double r4,double r5,bool* r6) {
	bool r7;
	h3d__Vector r8;
	double r9, r11, r13, r18, r19, r20, r21, r22, r23, r24;
	double *r10, *r12, *r14, *r15;
	int r25;
	h3d__Matrix r17;
	if( r6 ) goto label$4a064be_21_3;
	r7 = true;
	goto label$4a064be_21_4;
	label$4a064be_21_3:
	r7 = *r6;
	label$4a064be_21_4:
	r8 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r9 = r1;
	r10 = &r9;
	r11 = r2;
	r12 = &r11;
	r13 = r3;
	r14 = &r13;
	r15 = NULL;
	h3d_Vector_new(r8,r10,r12,r14,r15);
	r17 = r0->m;
	r18 = r8->x;
	if( r17 == NULL ) hl_null_access();
	r19 = r17->_11;
	r18 = r18 * r19;
	r19 = r8->y;
	r20 = r17->_21;
	r19 = r19 * r20;
	r18 = r18 + r19;
	r19 = r8->z;
	r20 = r17->_31;
	r19 = r19 * r20;
	r18 = r18 + r19;
	r19 = r8->w;
	r20 = r17->_41;
	r19 = r19 * r20;
	r18 = r18 + r19;
	r19 = r8->x;
	r20 = r17->_12;
	r19 = r19 * r20;
	r20 = r8->y;
	r21 = r17->_22;
	r20 = r20 * r21;
	r19 = r19 + r20;
	r20 = r8->z;
	r21 = r17->_32;
	r20 = r20 * r21;
	r19 = r19 + r20;
	r20 = r8->w;
	r21 = r17->_42;
	r20 = r20 * r21;
	r19 = r19 + r20;
	r20 = r8->x;
	r21 = r17->_13;
	r20 = r20 * r21;
	r21 = r8->y;
	r22 = r17->_23;
	r21 = r21 * r22;
	r20 = r20 + r21;
	r21 = r8->z;
	r22 = r17->_33;
	r21 = r21 * r22;
	r20 = r20 + r21;
	r21 = r8->w;
	r22 = r17->_43;
	r21 = r21 * r22;
	r20 = r20 + r21;
	r21 = 1.;
	r22 = r8->x;
	r23 = r17->_14;
	r22 = r22 * r23;
	r23 = r8->y;
	r24 = r17->_24;
	r23 = r23 * r24;
	r22 = r22 + r23;
	r23 = r8->z;
	r24 = r17->_34;
	r23 = r23 * r24;
	r22 = r22 + r23;
	r23 = r8->w;
	r24 = r17->_44;
	r23 = r23 * r24;
	r22 = r22 + r23;
	r21 = r21 / r22;
	r22 = r18 * r21;
	r8->x = r22;
	r22 = r19 * r21;
	r8->y = r22;
	r22 = r20 * r21;
	r8->z = r22;
	r22 = 1.;
	r8->w = r22;
	r18 = r8->x;
	r19 = 1.;
	r18 = r18 + r19;
	r19 = 0.5;
	r18 = r18 * r19;
	r18 = r18 * r4;
	r8->x = r18;
	r18 = r8->y;
	r18 = -r18;
	r19 = 1.;
	r18 = r18 + r19;
	r19 = 0.5;
	r18 = r18 * r19;
	r18 = r18 * r5;
	r8->y = r18;
	if( !r7 ) goto label$4a064be_21_109;
	r18 = r8->x;
	r25 = hl_math_round(r18);
	r18 = (double)r25;
	r8->x = r18;
	r18 = r8->y;
	r25 = hl_math_round(r18);
	r18 = (double)r25;
	r8->y = r18;
	label$4a064be_21_109:
	return r8;
}

void h3d_Camera_load(h3d__Camera r0,h3d__Camera r1) {
	vvirtual *r8, *r10;
	h3d__col__Bounds r6, r7;
	h3d__Vector r2, r4;
	double r5;
	h3d__scene__Object r9;
	r2 = r0->pos;
	if( r1 == NULL ) hl_null_access();
	r4 = r1->pos;
	if( r2 == NULL ) hl_null_access();
	if( r4 == NULL ) hl_null_access();
	r5 = r4->x;
	r2->x = r5;
	r5 = r4->y;
	r2->y = r5;
	r5 = r4->z;
	r2->z = r5;
	r5 = r4->w;
	r2->w = r5;
	r2 = r0->target;
	r4 = r1->target;
	if( r2 == NULL ) hl_null_access();
	if( r4 == NULL ) hl_null_access();
	r5 = r4->x;
	r2->x = r5;
	r5 = r4->y;
	r2->y = r5;
	r5 = r4->z;
	r2->z = r5;
	r5 = r4->w;
	r2->w = r5;
	r2 = r0->up;
	r4 = r1->up;
	if( r2 == NULL ) hl_null_access();
	if( r4 == NULL ) hl_null_access();
	r5 = r4->x;
	r2->x = r5;
	r5 = r4->y;
	r2->y = r5;
	r5 = r4->z;
	r2->z = r5;
	r5 = r4->w;
	r2->w = r5;
	r6 = r1->orthoBounds;
	if( !r6 ) goto label$4a064be_22_47;
	r6 = (h3d__col__Bounds)hl_alloc_obj(&t$h3d_col_Bounds);
	h3d_col_Bounds_new(r6);
	r0->orthoBounds = r6;
	r6 = r0->orthoBounds;
	if( r6 == NULL ) hl_null_access();
	r7 = r1->orthoBounds;
	h3d_col_Bounds_load(r6,r7);
	goto label$4a064be_22_49;
	label$4a064be_22_47:
	r6 = NULL;
	r0->orthoBounds = r6;
	label$4a064be_22_49:
	r5 = r1->fovY;
	r0->fovY = r5;
	r5 = r1->screenRatio;
	r0->screenRatio = r5;
	r5 = r1->zoom;
	r0->zoom = r5;
	r5 = r1->zNear;
	r0->zNear = r5;
	r5 = r1->zFar;
	r0->zFar = r5;
	r8 = r1->follow;
	if( !r8 ) goto label$4a064be_22_72;
	r8 = hl_alloc_virtual(&t$vrt_5ebdd1f);
	r10 = r1->follow;
	if( r10 == NULL ) hl_null_access();
	r9 = hl_vfields(r10)[0] ? (*(h3d__scene__Object*)(hl_vfields(r10)[0])) : (h3d__scene__Object)hl_dyn_getp(r10->value,5594516/*pos*/,&t$h3d_scene_Object);
	if( hl_vfields(r8)[0] ) *(h3d__scene__Object*)(hl_vfields(r8)[0]) = (h3d__scene__Object)r9; else hl_dyn_setp(r8->value,5594516/*pos*/,&t$h3d_scene_Object,r9);
	r10 = r1->follow;
	if( r10 == NULL ) hl_null_access();
	r9 = hl_vfields(r10)[1] ? (*(h3d__scene__Object*)(hl_vfields(r10)[1])) : (h3d__scene__Object)hl_dyn_getp(r10->value,-420679230/*target*/,&t$h3d_scene_Object);
	if( hl_vfields(r8)[1] ) *(h3d__scene__Object*)(hl_vfields(r8)[1]) = (h3d__scene__Object)r9; else hl_dyn_setp(r8->value,-420679230/*target*/,&t$h3d_scene_Object,r9);
	r0->follow = r8;
	goto label$4a064be_22_74;
	label$4a064be_22_72:
	r8 = NULL;
	r0->follow = r8;
	label$4a064be_22_74:
	r5 = r1->viewX;
	r0->viewX = r5;
	r5 = r1->viewY;
	r0->viewY = r5;
	h3d_Camera_update(r0);
	return;
}

void h3d_Camera_new(h3d__Camera r0,double* r1,double* r2,double* r3,double* r4,double* r5,bool* r6) {
	bool r12;
	h3d__col__Frustum r26;
	h3d__Vector r14;
	double r7, r8, r9, r10, r11, r13, r16, r17, r19, r20, r21, r22, r23, r24;
	h3d__Matrix r25;
	int r15;
	if( r1 ) goto label$4a064be_23_3;
	r7 = 25.;
	goto label$4a064be_23_4;
	label$4a064be_23_3:
	r7 = *r1;
	label$4a064be_23_4:
	if( r2 ) goto label$4a064be_23_7;
	r8 = 1.;
	goto label$4a064be_23_8;
	label$4a064be_23_7:
	r8 = *r2;
	label$4a064be_23_8:
	if( r3 ) goto label$4a064be_23_11;
	r9 = 1.333333000000000101;
	goto label$4a064be_23_12;
	label$4a064be_23_11:
	r9 = *r3;
	label$4a064be_23_12:
	if( r4 ) goto label$4a064be_23_15;
	r10 = 0.02000000000000000042;
	goto label$4a064be_23_16;
	label$4a064be_23_15:
	r10 = *r4;
	label$4a064be_23_16:
	if( r5 ) goto label$4a064be_23_19;
	r11 = 4000.;
	goto label$4a064be_23_20;
	label$4a064be_23_19:
	r11 = *r5;
	label$4a064be_23_20:
	if( r6 ) goto label$4a064be_23_23;
	r12 = false;
	goto label$4a064be_23_24;
	label$4a064be_23_23:
	r12 = *r6;
	label$4a064be_23_24:
	r13 = 0.;
	r0->viewY = r13;
	r13 = 0.;
	r0->viewX = r13;
	r0->fovY = r7;
	r0->zoom = r8;
	r0->screenRatio = r9;
	r0->zNear = r10;
	r0->zFar = r11;
	r0->rightHanded = r12;
	r14 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r15 = 2;
	r13 = (double)r15;
	r1 = &r13;
	r15 = 3;
	r16 = (double)r15;
	r2 = &r16;
	r15 = 4;
	r17 = (double)r15;
	r3 = &r17;
	r4 = NULL;
	h3d_Vector_new(r14,r1,r2,r3,r4);
	r0->pos = r14;
	r14 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r15 = 0;
	r19 = (double)r15;
	r1 = &r19;
	r15 = 0;
	r20 = (double)r15;
	r2 = &r20;
	r15 = 1;
	r21 = (double)r15;
	r3 = &r21;
	r4 = NULL;
	h3d_Vector_new(r14,r1,r2,r3,r4);
	r0->up = r14;
	r14 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r15 = 0;
	r22 = (double)r15;
	r1 = &r22;
	r15 = 0;
	r23 = (double)r15;
	r2 = &r23;
	r15 = 0;
	r24 = (double)r15;
	r3 = &r24;
	r4 = NULL;
	h3d_Vector_new(r14,r1,r2,r3,r4);
	r0->target = r14;
	r25 = (h3d__Matrix)hl_alloc_obj(&t$h3d_Matrix);
	h3d_Matrix_new(r25);
	r0->m = r25;
	r25 = (h3d__Matrix)hl_alloc_obj(&t$h3d_Matrix);
	h3d_Matrix_new(r25);
	r0->mcam = r25;
	r25 = (h3d__Matrix)hl_alloc_obj(&t$h3d_Matrix);
	h3d_Matrix_new(r25);
	r0->mproj = r25;
	r26 = (h3d__col__Frustum)hl_alloc_obj(&t$h3d_col_Frustum);
	r25 = NULL;
	h3d_col_Frustum_new(r26,r25);
	r0->frustum = r26;
	h3d_Camera_update(r0);
	return;
}


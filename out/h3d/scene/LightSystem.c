// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <h3d/scene/LightSystem.h>
#include <hxsl/Globals.h>
#include <h3d/col/Sphere.h>
#include <h3d/Matrix.h>
#include <h3d/col/Frustum.h>
#include <h3d/Camera.h>
extern hl_type t$h3d_col_Sphere;
void h3d_col_Sphere_new(h3d__col__Sphere,double*,double*,double*,double*);
bool h3d_col_Frustum_hasSphere(h3d__col__Frustum,h3d__col__Sphere);
h3d__Vector h3d_scene_Light_getShadowDirection(h3d__scene__Light);
#include <h3d/scene/Object.h>
#include <hxsl/ShaderList.h>
extern hl_type t$h3d_Vector;
void h3d_Vector_new(h3d__Vector,double*,double*,double*,double*);

void h3d_scene_LightSystem_initGlobals(h3d__scene__LightSystem r0,hxsl__Globals r1) {
	return;
}

void h3d_scene_LightSystem_cullLights(h3d__scene__LightSystem r0) {
	bool r14;
	h3d__col__Frustum r15;
	h3d__Camera r16;
	h3d__col__Sphere r5;
	h3d__scene__Light r1, r4, r10, r17;
	double r11, r13;
	double *r6, *r7, *r8, *r9;
	h3d__scene__RenderContext r2;
	int r18;
	h3d__Matrix r12;
	r2 = r0->ctx;
	if( r2 == NULL ) hl_null_access();
	r1 = r2->lights;
	r4 = NULL;
	r5 = (h3d__col__Sphere)hl_alloc_obj(&t$h3d_col_Sphere);
	r6 = NULL;
	r7 = NULL;
	r8 = NULL;
	r9 = NULL;
	h3d_col_Sphere_new(r5,r6,r7,r8,r9);
	label$4210ab5_2_10:
	if( !r1 ) goto label$4210ab5_2_64;
	if( r5 == NULL ) hl_null_access();
	if( r1 == NULL ) hl_null_access();
	r12 = r1->absPos;
	if( r12 == NULL ) hl_null_access();
	r11 = r12->_41;
	r5->x = r11;
	r12 = r1->absPos;
	if( r12 == NULL ) hl_null_access();
	r11 = r12->_42;
	r5->y = r11;
	r12 = r1->absPos;
	if( r12 == NULL ) hl_null_access();
	r11 = r12->_43;
	r5->z = r11;
	r11 = r1->cullingDistance;
	r5->r = r11;
	r11 = r1->cullingDistance;
	r13 = 0.;
	if( !(r13 < r11) ) goto label$4210ab5_2_55;
	r2 = r0->ctx;
	if( r2 == NULL ) hl_null_access();
	r14 = r2->computingStatic;
	if( r14 ) goto label$4210ab5_2_55;
	r2 = r0->ctx;
	if( r2 == NULL ) hl_null_access();
	r16 = r2->camera;
	if( r16 == NULL ) hl_null_access();
	r15 = r16->frustum;
	if( r15 == NULL ) hl_null_access();
	r14 = h3d_col_Frustum_hasSphere(r15,r5);
	if( r14 ) goto label$4210ab5_2_55;
	if( r4 ) goto label$4210ab5_2_49;
	r2 = r0->ctx;
	if( r2 == NULL ) hl_null_access();
	r10 = r1->next;
	r2->lights = r10;
	goto label$4210ab5_2_52;
	label$4210ab5_2_49:
	if( r4 == NULL ) hl_null_access();
	r17 = r1->next;
	r4->next = r17;
	label$4210ab5_2_52:
	r10 = r1->next;
	r1 = r10;
	goto label$4210ab5_2_10;
	label$4210ab5_2_55:
	r18 = r0->lightCount;
	++r18;
	r0->lightCount = r18;
	r11 = 0.;
	r1->objectDistance = r11;
	r4 = r1;
	r10 = r1->next;
	r1 = r10;
	goto label$4210ab5_2_10;
	label$4210ab5_2_64:
	return;
}

void h3d_scene_LightSystem_initLights(h3d__scene__LightSystem r0,h3d__scene__RenderContext r1) {
	h3d__Vector r7;
	h3d__scene__Light r4, r6;
	int r2, r5;
	r2 = 0;
	r0->lightCount = r2;
	r0->ctx = r1;
	h3d_scene_LightSystem_cullLights(r0);
	r4 = r0->shadowLight;
	if( !r4 ) goto label$4210ab5_3_13;
	r4 = r0->shadowLight;
	if( r4 == NULL ) hl_null_access();
	r2 = r4->flags;
	r5 = 32;
	r2 = r2 & r5;
	r5 = 0;
	if( r2 != r5 ) goto label$4210ab5_3_25;
	label$4210ab5_3_13:
	if( r1 == NULL ) hl_null_access();
	r4 = r1->lights;
	label$4210ab5_3_15:
	if( !r4 ) goto label$4210ab5_3_25;
	if( r4 == NULL ) hl_null_access();
	r7 = h3d_scene_Light_getShadowDirection(r4);
	if( !r7 ) goto label$4210ab5_3_22;
	r0->shadowLight = r4;
	goto label$4210ab5_3_25;
	label$4210ab5_3_22:
	r6 = r4->next;
	r4 = r6;
	goto label$4210ab5_3_15;
	label$4210ab5_3_25:
	return;
}

hxsl__ShaderList h3d_scene_LightSystem_computeLight(h3d__scene__LightSystem r0,h3d__scene__Object r1,hxsl__ShaderList r2) {
	return r2;
}

void h3d_scene_LightSystem_new(h3d__scene__LightSystem r0) {
	h3d__Vector r2;
	double r3, r5, r7;
	double *r4, *r6, *r8, *r9;
	int r1;
	r1 = 0;
	r0->drawPasses = r1;
	r2 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r1 = 1;
	r3 = (double)r1;
	r4 = &r3;
	r1 = 1;
	r5 = (double)r1;
	r6 = &r5;
	r1 = 1;
	r7 = (double)r1;
	r8 = &r7;
	r9 = NULL;
	h3d_Vector_new(r2,r4,r6,r8,r9);
	r0->ambientLight = r2;
	return;
}


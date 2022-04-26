﻿// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <h3d/scene/fwd/DepthPass.h>
#include <hl/types/ArrayObj.h>
#include <hxsl/Output.h>
extern hl_type t$hxsl_Output;
#include <hl/natives.h>
extern String s$output_depth;
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);
#include <h3d/mat/Texture.h>
#include <h3d/impl/TextureCache.h>
#include <h3d/Engine.h>
#include <hxd/PixelFormat.h>
extern String s$depthMap;
h3d__mat__Texture h3d_impl_TextureCache_allocTarget(h3d__impl__TextureCache,String,int,int,bool*,venum*,bool*);
void h3d_Engine_pushTarget(h3d__Engine,h3d__mat__Texture,int*,int*);
extern hl_type t$_i32;
extern hl_type t$_f64;
void h3d_Engine_clear(h3d__Engine,vdynamic*,vdynamic*,vdynamic*);
void h3d_pass_Default_draw(h3d__pass__Default,h3d__pass__PassList,vclosure*);
void h3d_Engine_popTarget(h3d__Engine);
extern hl_type t$vrt_62756b6;
extern hl_type t$h3d_mat_Texture;
void h3d_scene_RenderContext_setGlobalID(h3d__scene__RenderContext,int,vdynamic*);
extern String s$depth;
void h3d_pass_Default_new(h3d__pass__Default,String);
int hxsl_Globals_allocID(String);

hl__types__ArrayObj h3d_scene_fwd_DepthPass_getOutputs(h3d__scene__fwd__DepthPass r0) {
	String r6;
	hl__types__ArrayObj r1;
	venum *r5;
	hl_type *r3;
	vdynamic *r7;
	int r4;
	varray *r2;
	r3 = &t$hxsl_Output;
	r4 = 1;
	r2 = hl_alloc_array(r3,r4);
	r6 = (String)s$output_depth;
	r7 = NULL;
	r5 = hl_alloc_enum(&t$hxsl_Output,1);
	((hxsl_Output_Value*)r5)->p0 = r6;
	((hxsl_Output_Value*)r5)->p1 = r7;
	{ venum *tmp;
	tmp = hl_alloc_enum(&t$hxsl_Output,3);
	((hxsl_Output_PackFloat*)tmp)->p0 = r5;
	r5 = tmp; };
	r4 = 0;
	((venum**)(r2 + 1))[r4] = r5;
	r1 = hl_types_ArrayObj_alloc(r2);
	return r1;
}

void h3d_scene_fwd_DepthPass_draw(h3d__scene__fwd__DepthPass r0,h3d__pass__PassList r1,vclosure* r2) {
	bool *r11, *r13;
	String r6;
	h3d__impl__TextureCache r4;
	vvirtual *r22;
	venum *r12;
	bool r10, r18;
	h3d__Engine r8;
	double r19;
	vdynamic *r17, *r20, *r21;
	int *r15, *r16;
	h3d__scene__RenderContext r5;
	int r7, r9;
	h3d__mat__Texture r3;
	r5 = r0->ctx;
	if( r5 == NULL ) hl_null_access();
	r4 = r5->textures;
	if( r4 == NULL ) hl_null_access();
	r6 = (String)s$depthMap;
	r5 = r0->ctx;
	if( r5 == NULL ) hl_null_access();
	r8 = r5->engine;
	if( r8 == NULL ) hl_null_access();
	r7 = r8->width;
	r5 = r0->ctx;
	if( r5 == NULL ) hl_null_access();
	r8 = r5->engine;
	if( r8 == NULL ) hl_null_access();
	r9 = r8->height;
	r10 = true;
	r11 = &r10;
	r12 = NULL;
	r13 = NULL;
	r3 = h3d_impl_TextureCache_allocTarget(r4,r6,r7,r9,r11,r12,r13);
	r5 = r0->ctx;
	if( r5 == NULL ) hl_null_access();
	r8 = r5->engine;
	if( r8 == NULL ) hl_null_access();
	r15 = NULL;
	r16 = NULL;
	h3d_Engine_pushTarget(r8,r3,r15,r16);
	r5 = r0->ctx;
	if( r5 == NULL ) hl_null_access();
	r8 = r5->engine;
	if( r8 == NULL ) hl_null_access();
	r18 = r0->enableSky;
	if( !r18 ) goto label$b008eae_2_36;
	r7 = 0;
	r17 = hl_alloc_dynamic(&t$_i32);
	r17->v.i = r7;
	goto label$b008eae_2_38;
	label$b008eae_2_36:
	r7 = 16711680;
	r17 = hl_alloc_dynamic(&t$_i32);
	r17->v.i = r7;
	label$b008eae_2_38:
	r7 = 1;
	r19 = (double)r7;
	r20 = hl_alloc_dynamic(&t$_f64);
	r20->v.d = r19;
	r21 = NULL;
	h3d_Engine_clear(r8,r17,r20,r21);
	h3d_pass_Default_draw(((h3d__pass__Default)r0),r1,r2);
	r5 = r0->ctx;
	if( r5 == NULL ) hl_null_access();
	r8 = r5->engine;
	if( r8 == NULL ) hl_null_access();
	h3d_Engine_popTarget(r8);
	r5 = r0->ctx;
	if( r5 == NULL ) hl_null_access();
	r7 = r0->depthMapId;
	r22 = hl_alloc_virtual(&t$vrt_62756b6);
	if( hl_vfields(r22)[0] ) *(h3d__mat__Texture*)(hl_vfields(r22)[0]) = (h3d__mat__Texture)r3; else hl_dyn_setp(r22->value,-18823348/*texture*/,&t$h3d_mat_Texture,r3);
	h3d_scene_RenderContext_setGlobalID(r5,r7,((vdynamic*)r22));
	return;
}

void h3d_scene_fwd_DepthPass_new(h3d__scene__fwd__DepthPass r0) {
	String r3;
	bool r1;
	int r4;
	r1 = false;
	r0->enableSky = r1;
	r3 = (String)s$depth;
	h3d_pass_Default_new(((h3d__pass__Default)r0),r3);
	r3 = (String)s$depthMap;
	r4 = hxsl_Globals_allocID(r3);
	r0->depthMapId = r4;
	return;
}

﻿// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <h3d/pass/CubeCopy.h>
#include <h3d/pass/_CubeCopy/CubeCopyShader.h>
#include <h3d/Matrix.h>
h3d__Engine h3d_pass_ScreenFx_get_engine(h3d__pass__ScreenFx);
void h3d_Engine_pushTarget(h3d__Engine,h3d__mat__Texture,int*,int*);
void h3d_mat_Pass_setBlendMode(h3d__mat__Pass,venum*);
void h3d_pass_ScreenFx_render(h3d__pass__ScreenFx);
extern venum* g$h2d_BlendMode_None;
void h3d_Engine_popTarget(h3d__Engine);
#include <h3d/Engine.h>
#include <h3d/impl/Driver.h>
#include <haxe/ds/ObjectMap.h>
extern h3d__$Engine g$_h3d_Engine;
bool h3d_impl_Driver_copyTexture(h3d__impl__Driver,h3d__mat__Texture,h3d__mat__Texture);
extern h3d__pass__$CubeCopy g$_h3d_pass_CubeCopy;
vdynamic* haxe_ds_ObjectMap_get(haxe__ds__ObjectMap,vdynamic*);
extern hl_type t$h3d_pass_CubeCopy;
extern hl_type t$_dyn;
void h3d_pass_CubeCopy_new(h3d__pass__CubeCopy);
void haxe_ds_ObjectMap_set(haxe__ds__ObjectMap,vdynamic*,vdynamic*);
#include <hl/types/ArrayBytes_Float.h>
extern hl_type t$h3d_Matrix;
#include <hl/natives.h>
hl__types__ArrayBytes_Float hl_types_ArrayBase_allocF64(vbyte*,int);
h3d__Matrix h3d_Matrix_L(hl__types__ArrayBytes_Float);
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);
extern hl_type t$h3d_pass__CubeCopy_CubeCopyShader;
void h3d_pass__CubeCopy_CubeCopyShader_new(h3d__pass___CubeCopy__CubeCopyShader);
void h3d_pass_ScreenFx_new(h3d__pass__ScreenFx,h3d__shader__ScreenShader,hl__types__ArrayObj);

void h3d_pass_CubeCopy_apply(h3d__pass__CubeCopy r0,h3d__mat__Texture r1,h3d__mat__Texture r2,venum* r3,h3d__mat__Pass r4) {
	h3d__pass___CubeCopy__CubeCopyShader r6;
	hl__types__ArrayObj r15;
	h3d__shader__ScreenShader r5;
	venum *r22;
	h3d__Engine r12;
	hxsl__ShaderList r23, r24, r25;
	h3d__mat__Pass r20, r21;
	vdynamic *r18;
	int *r13, *r14;
	varray *r19;
	h3d__Matrix r17;
	int r8, r10, r11, r16;
	h3d__mat__Texture r7;
	r5 = r0->shader;
	r6 = (h3d__pass___CubeCopy__CubeCopyShader)r5;
	if( r6 == NULL ) hl_null_access();
	r6->texture__ = r1;
	r8 = 0;
	label$a193b0e_1_5:
	r11 = 6;
	if( r8 >= r11 ) goto label$a193b0e_1_67;
	r10 = r8;
	++r8;
	if( !r2 ) goto label$a193b0e_1_17;
	r12 = h3d_pass_ScreenFx_get_engine(((h3d__pass__ScreenFx)r0));
	if( r12 == NULL ) hl_null_access();
	r11 = r10;
	r13 = &r11;
	r14 = NULL;
	h3d_Engine_pushTarget(r12,r2,r13,r14);
	label$a193b0e_1_17:
	r5 = r0->shader;
	r6 = (h3d__pass___CubeCopy__CubeCopyShader)r5;
	if( r6 == NULL ) hl_null_access();
	r15 = r0->cubeDir;
	if( r15 == NULL ) hl_null_access();
	r16 = r15->length;
	if( ((unsigned)r10) < ((unsigned)r16) ) goto label$a193b0e_1_26;
	r17 = NULL;
	goto label$a193b0e_1_29;
	label$a193b0e_1_26:
	r19 = r15->array;
	r18 = ((vdynamic**)(r19 + 1))[r10];
	r17 = (h3d__Matrix)r18;
	label$a193b0e_1_29:
	r6->mat__ = r17;
	if( !r4 ) goto label$a193b0e_1_54;
	r20 = r0->pass;
	r0->pass = r4;
	if( !r3 ) goto label$a193b0e_1_37;
	r21 = r0->pass;
	if( r21 == NULL ) hl_null_access();
	h3d_mat_Pass_setBlendMode(r21,r3);
	label$a193b0e_1_37:
	r23 = r0->shaders;
	label$a193b0e_1_38:
	if( r23 == NULL ) hl_null_access();
	r24 = r23->next;
	if( !r24 ) goto label$a193b0e_1_45;
	r24 = r23->next;
	r23 = r24;
	goto label$a193b0e_1_38;
	label$a193b0e_1_45:
	r21 = r0->pass;
	if( r21 == NULL ) hl_null_access();
	r25 = r21->shaders;
	r23->next = r25;
	h3d_pass_ScreenFx_render(((h3d__pass__ScreenFx)r0));
	r0->pass = r20;
	r25 = NULL;
	r23->next = r25;
	goto label$a193b0e_1_62;
	label$a193b0e_1_54:
	r20 = r0->pass;
	if( r20 == NULL ) hl_null_access();
	if( r3 ) goto label$a193b0e_1_59;
	r22 = (venum*)g$h2d_BlendMode_None;
	goto label$a193b0e_1_60;
	label$a193b0e_1_59:
	r22 = r3;
	label$a193b0e_1_60:
	h3d_mat_Pass_setBlendMode(r20,r22);
	h3d_pass_ScreenFx_render(((h3d__pass__ScreenFx)r0));
	label$a193b0e_1_62:
	if( !r2 ) goto label$a193b0e_1_66;
	r12 = h3d_pass_ScreenFx_get_engine(((h3d__pass__ScreenFx)r0));
	if( r12 == NULL ) hl_null_access();
	h3d_Engine_popTarget(r12);
	label$a193b0e_1_66:
	goto label$a193b0e_1_5;
	label$a193b0e_1_67:
	r5 = r0->shader;
	r6 = (h3d__pass___CubeCopy__CubeCopyShader)r5;
	if( r6 == NULL ) hl_null_access();
	r7 = NULL;
	r6->texture__ = r7;
	return;
}

void h3d_pass_CubeCopy_run(h3d__mat__Texture r0,h3d__mat__Texture r1,venum* r2,h3d__mat__Pass r3) {
	haxe__ds__ObjectMap r11;
	h3d__pass__CubeCopy r13, r14;
	venum *r7;
	bool r8;
	h3d__Engine r4;
	h3d__$Engine r5;
	h3d__pass__$CubeCopy r12;
	vdynamic *r10;
	h3d__impl__Driver r9;
	r5 = (h3d__$Engine)g$_h3d_Engine;
	r4 = r5->CURRENT;
	if( !r1 ) goto label$a193b0e_2_14;
	if( !r0 ) goto label$a193b0e_2_14;
	if( !r2 ) goto label$a193b0e_2_7;
	r7 = (venum*)g$h2d_BlendMode_None;
	if( r2 != r7 ) goto label$a193b0e_2_14;
	label$a193b0e_2_7:
	if( r3 ) goto label$a193b0e_2_14;
	if( r4 == NULL ) hl_null_access();
	r9 = r4->driver;
	if( r9 == NULL ) hl_null_access();
	r8 = h3d_impl_Driver_copyTexture(r9,r0,r1);
	if( !r8 ) goto label$a193b0e_2_14;
	return;
	label$a193b0e_2_14:
	if( r4 == NULL ) hl_null_access();
	r11 = r4->resCache;
	if( r11 == NULL ) hl_null_access();
	r12 = (h3d__pass__$CubeCopy)g$_h3d_pass_CubeCopy;
	r10 = haxe_ds_ObjectMap_get(r11,((vdynamic*)r12));
	r13 = (h3d__pass__CubeCopy)hl_dyn_castp(&r10,&t$_dyn,&t$h3d_pass_CubeCopy);
	if( r13 ) goto label$a193b0e_2_28;
	r14 = (h3d__pass__CubeCopy)hl_alloc_obj(&t$h3d_pass_CubeCopy);
	h3d_pass_CubeCopy_new(r14);
	r13 = r14;
	r11 = r4->resCache;
	if( r11 == NULL ) hl_null_access();
	r12 = (h3d__pass__$CubeCopy)g$_h3d_pass_CubeCopy;
	haxe_ds_ObjectMap_set(r11,((vdynamic*)r12),((vdynamic*)r14));
	label$a193b0e_2_28:
	if( r13 == NULL ) hl_null_access();
	h3d_pass_CubeCopy_apply(r13,r0,r1,r2,r3);
	return;
}

void h3d_pass_CubeCopy_new(h3d__pass__CubeCopy r0) {
	h3d__pass___CubeCopy__CubeCopyShader r11;
	hl__types__ArrayObj r1;
	hl_type *r3;
	hl__types__ArrayBytes_Float r6;
	double r8;
	vbyte *r7;
	h3d__Matrix r5;
	int r4, r9;
	varray *r2;
	r3 = &t$h3d_Matrix;
	r4 = 6;
	r2 = hl_alloc_array(r3,r4);
	r4 = 96;
	r7 = hl_alloc_bytes(r4);
	r4 = 0;
	r8 = 0.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = 0.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = -1.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = 0.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = 0.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = -1.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = 0.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = 0.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = 1.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = 0.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = 0.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = 0.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r4 = 12;
	r6 = hl_types_ArrayBase_allocF64(r7,r4);
	r5 = h3d_Matrix_L(r6);
	r4 = 0;
	((h3d__Matrix*)(r2 + 1))[r4] = r5;
	r4 = 96;
	r7 = hl_alloc_bytes(r4);
	r4 = 0;
	r8 = 0.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = 0.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = 1.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = 0.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = 0.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = -1.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = 0.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = 0.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = -1.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = 0.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = 0.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = 0.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r4 = 12;
	r6 = hl_types_ArrayBase_allocF64(r7,r4);
	r5 = h3d_Matrix_L(r6);
	r4 = 1;
	((h3d__Matrix*)(r2 + 1))[r4] = r5;
	r4 = 96;
	r7 = hl_alloc_bytes(r4);
	r4 = 0;
	r8 = 1.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = 0.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = 0.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = 0.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = 0.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = 0.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = 1.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = 0.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = 0.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = 1.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = 0.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = 0.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r4 = 12;
	r6 = hl_types_ArrayBase_allocF64(r7,r4);
	r5 = h3d_Matrix_L(r6);
	r4 = 2;
	((h3d__Matrix*)(r2 + 1))[r4] = r5;
	r4 = 96;
	r7 = hl_alloc_bytes(r4);
	r4 = 0;
	r8 = 1.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = 0.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = 0.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = 0.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = 0.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = 0.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = -1.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = 0.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = 0.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = -1.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = 0.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = 0.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r4 = 12;
	r6 = hl_types_ArrayBase_allocF64(r7,r4);
	r5 = h3d_Matrix_L(r6);
	r4 = 3;
	((h3d__Matrix*)(r2 + 1))[r4] = r5;
	r4 = 96;
	r7 = hl_alloc_bytes(r4);
	r4 = 0;
	r8 = 1.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = 0.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = 0.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = 0.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = 0.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = -1.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = 0.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = 0.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = 0.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = 0.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = 1.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = 0.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r4 = 12;
	r6 = hl_types_ArrayBase_allocF64(r7,r4);
	r5 = h3d_Matrix_L(r6);
	r4 = 4;
	((h3d__Matrix*)(r2 + 1))[r4] = r5;
	r4 = 96;
	r7 = hl_alloc_bytes(r4);
	r4 = 0;
	r8 = -1.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = 0.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = 0.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = 0.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = 0.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = -1.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = 0.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = 0.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = 0.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = 0.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = -1.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r8 = 0.;
	r9 = 3;
	r9 = r4 << r9;
	*(double*)(r7 + r9) = r8;
	++r4;
	r4 = 12;
	r6 = hl_types_ArrayBase_allocF64(r7,r4);
	r5 = h3d_Matrix_L(r6);
	r4 = 5;
	((h3d__Matrix*)(r2 + 1))[r4] = r5;
	r1 = hl_types_ArrayObj_alloc(r2);
	r0->cubeDir = r1;
	r11 = (h3d__pass___CubeCopy__CubeCopyShader)hl_alloc_obj(&t$h3d_pass__CubeCopy_CubeCopyShader);
	h3d_pass__CubeCopy_CubeCopyShader_new(r11);
	r1 = NULL;
	h3d_pass_ScreenFx_new(((h3d__pass__ScreenFx)r0),((h3d__shader__ScreenShader)r11),r1);
	return;
}


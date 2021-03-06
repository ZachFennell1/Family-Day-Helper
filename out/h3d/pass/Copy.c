// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <h3d/pass/Copy.h>
#include <h3d/pass/_Copy/CopyShader.h>
#include <hl/types/ArrayObj.h>
extern hl_type t$h3d_pass__Copy_CopyShader;
void h3d_pass__Copy_CopyShader_new(h3d__pass___Copy__CopyShader);
void h3d_pass_ScreenFx_new(h3d__pass__ScreenFx,h3d__shader__ScreenShader,hl__types__ArrayObj);
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
extern h3d__pass__$Copy g$_h3d_pass_Copy;
vdynamic* haxe_ds_ObjectMap_get(haxe__ds__ObjectMap,vdynamic*);
extern hl_type t$h3d_pass_Copy;
extern hl_type t$_dyn;
void haxe_ds_ObjectMap_set(haxe__ds__ObjectMap,vdynamic*,vdynamic*);

void h3d_pass_Copy_new(h3d__pass__Copy r0) {
	hl__types__ArrayObj r3;
	h3d__pass___Copy__CopyShader r2;
	r2 = (h3d__pass___Copy__CopyShader)hl_alloc_obj(&t$h3d_pass__Copy_CopyShader);
	h3d_pass__Copy_CopyShader_new(r2);
	r3 = NULL;
	h3d_pass_ScreenFx_new(((h3d__pass__ScreenFx)r0),((h3d__shader__ScreenShader)r2),r3);
	return;
}

void h3d_pass_Copy_apply(h3d__pass__Copy r0,h3d__mat__Texture r1,h3d__mat__Texture r2,venum* r3,h3d__mat__Pass r4,vdynamic* r5) {
	h3d__shader__ScreenShader r12;
	venum *r16;
	h3d__Engine r8;
	hxsl__ShaderList r17, r18, r19;
	h3d__mat__Pass r14, r15;
	int *r10, *r11;
	h3d__pass___Copy__CopyShader r13;
	int r9;
	h3d__mat__Texture r7;
	if( !r2 ) goto label$99e63e8_2_10;
	r8 = h3d_pass_ScreenFx_get_engine(((h3d__pass__ScreenFx)r0));
	if( r8 == NULL ) hl_null_access();
	if( !r5 ) goto label$99e63e8_2_6;
	r9 = r5 ? r5->v.i : 0;
	goto label$99e63e8_2_7;
	label$99e63e8_2_6:
	r9 = 0;
	label$99e63e8_2_7:
	r10 = &r9;
	r11 = NULL;
	h3d_Engine_pushTarget(r8,r2,r10,r11);
	label$99e63e8_2_10:
	r12 = r0->shader;
	r13 = (h3d__pass___Copy__CopyShader)r12;
	if( r13 == NULL ) hl_null_access();
	r13->texture__ = r1;
	if( !r4 ) goto label$99e63e8_2_38;
	r14 = r0->pass;
	r0->pass = r4;
	if( !r3 ) goto label$99e63e8_2_21;
	r15 = r0->pass;
	if( r15 == NULL ) hl_null_access();
	h3d_mat_Pass_setBlendMode(r15,r3);
	label$99e63e8_2_21:
	r17 = r0->shaders;
	label$99e63e8_2_22:
	if( r17 == NULL ) hl_null_access();
	r18 = r17->next;
	if( !r18 ) goto label$99e63e8_2_29;
	r18 = r17->next;
	r17 = r18;
	goto label$99e63e8_2_22;
	label$99e63e8_2_29:
	r15 = r0->pass;
	if( r15 == NULL ) hl_null_access();
	r19 = r15->shaders;
	r17->next = r19;
	h3d_pass_ScreenFx_render(((h3d__pass__ScreenFx)r0));
	r0->pass = r14;
	r19 = NULL;
	r17->next = r19;
	goto label$99e63e8_2_46;
	label$99e63e8_2_38:
	r14 = r0->pass;
	if( r14 == NULL ) hl_null_access();
	if( r3 ) goto label$99e63e8_2_43;
	r16 = (venum*)g$h2d_BlendMode_None;
	goto label$99e63e8_2_44;
	label$99e63e8_2_43:
	r16 = r3;
	label$99e63e8_2_44:
	h3d_mat_Pass_setBlendMode(r14,r16);
	h3d_pass_ScreenFx_render(((h3d__pass__ScreenFx)r0));
	label$99e63e8_2_46:
	r12 = r0->shader;
	r13 = (h3d__pass___Copy__CopyShader)r12;
	if( r13 == NULL ) hl_null_access();
	r7 = NULL;
	r13->texture__ = r7;
	if( !r2 ) goto label$99e63e8_2_55;
	r8 = h3d_pass_ScreenFx_get_engine(((h3d__pass__ScreenFx)r0));
	if( r8 == NULL ) hl_null_access();
	h3d_Engine_popTarget(r8);
	label$99e63e8_2_55:
	return;
}

void h3d_pass_Copy_run(h3d__mat__Texture r0,h3d__mat__Texture r1,venum* r2,h3d__mat__Pass r3,vdynamic* r4) {
	haxe__ds__ObjectMap r12;
	h3d__pass__Copy r14, r15;
	venum *r8;
	bool r9;
	h3d__Engine r5;
	h3d__$Engine r6;
	h3d__pass__$Copy r13;
	vdynamic *r11;
	h3d__impl__Driver r10;
	r6 = (h3d__$Engine)g$_h3d_Engine;
	r5 = r6->CURRENT;
	if( !r1 ) goto label$99e63e8_3_15;
	if( !r0 ) goto label$99e63e8_3_15;
	if( !r2 ) goto label$99e63e8_3_7;
	r8 = (venum*)g$h2d_BlendMode_None;
	if( r2 != r8 ) goto label$99e63e8_3_15;
	label$99e63e8_3_7:
	if( r3 ) goto label$99e63e8_3_15;
	if( r4 ) goto label$99e63e8_3_15;
	if( r5 == NULL ) hl_null_access();
	r10 = r5->driver;
	if( r10 == NULL ) hl_null_access();
	r9 = h3d_impl_Driver_copyTexture(r10,r0,r1);
	if( !r9 ) goto label$99e63e8_3_15;
	return;
	label$99e63e8_3_15:
	if( r5 == NULL ) hl_null_access();
	r12 = r5->resCache;
	if( r12 == NULL ) hl_null_access();
	r13 = (h3d__pass__$Copy)g$_h3d_pass_Copy;
	r11 = haxe_ds_ObjectMap_get(r12,((vdynamic*)r13));
	r14 = (h3d__pass__Copy)hl_dyn_castp(&r11,&t$_dyn,&t$h3d_pass_Copy);
	if( r14 ) goto label$99e63e8_3_29;
	r15 = (h3d__pass__Copy)hl_alloc_obj(&t$h3d_pass_Copy);
	h3d_pass_Copy_new(r15);
	r14 = r15;
	r12 = r5->resCache;
	if( r12 == NULL ) hl_null_access();
	r13 = (h3d__pass__$Copy)g$_h3d_pass_Copy;
	haxe_ds_ObjectMap_set(r12,((vdynamic*)r13),((vdynamic*)r15));
	label$99e63e8_3_29:
	if( r14 == NULL ) hl_null_access();
	h3d_pass_Copy_apply(r14,r0,r1,r2,r3,r4);
	return;
}


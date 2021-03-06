// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <h3d/scene/fwd/Renderer.h>
extern String s$alpha;
int String___compare(String,vdynamic*);
extern String s$additive;
h3d__pass__Base h3d_scene_Renderer_getPassByName(h3d__scene__Renderer,String);
extern String s$shadow;
bool h3d_scene_Renderer_has(h3d__scene__Renderer,String);
h3d__pass__PassList h3d_scene_Renderer_get(h3d__scene__Renderer,String);
extern String s$depth;
extern String s$normal;
extern String s$default;
#include <hxd/PixelFormat.h>
#include <h3d/scene/fwd/NormalPass.h>
#include <h3d/scene/fwd/DepthPass.h>
#include <h3d/pass/Default.h>
extern hl_type t$h3d_pass_DefaultShadowMap;
void h3d_pass_DefaultShadowMap_new(h3d__pass__DefaultShadowMap,int*,venum*);
extern hl_type t$h3d_scene_fwd_NormalPass;
void h3d_scene_fwd_NormalPass_new(h3d__scene__fwd__NormalPass);
extern hl_type t$h3d_scene_fwd_DepthPass;
void h3d_scene_fwd_DepthPass_new(h3d__scene__fwd__DepthPass);
void h3d_scene_Renderer_new(h3d__scene__Renderer);
extern hl_type t$h3d_pass_Default;
void h3d_pass_Default_new(h3d__pass__Default,String);
extern hl_type t$h3d_pass_Base;
#include <hl/natives.h>
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);

h3d__pass__Base h3d_scene_fwd_Renderer_get_def(h3d__scene__fwd__Renderer r0) {
	h3d__pass__Base r1;
	r1 = r0->defaultPass;
	return r1;
}

void h3d_scene_fwd_Renderer_renderPass(h3d__scene__fwd__Renderer r0,h3d__pass__Base r1,h3d__pass__PassList r2,vclosure* r3) {
	if( r1 == NULL ) hl_null_access();
	((void (*)(h3d__pass__Base,h3d__pass__PassList,vclosure*))r1->$type->vobj_proto[2])(r1,r2,r3);
	return;
}

h3d__pass__Base h3d_scene_fwd_Renderer_getPassByName(h3d__scene__fwd__Renderer r0,String r1) {
	String r2;
	h3d__pass__Base r3;
	r2 = (String)s$alpha;
	if( r1 == r2 || (r1 && r2 && String___compare(r1,(vdynamic*)r2) == 0) ) goto label$eaf4e84_3_4;
	r2 = (String)s$additive;
	if( r1 != r2 && (!r1 || !r2 || String___compare(r1,(vdynamic*)r2) != 0) ) goto label$eaf4e84_3_6;
	label$eaf4e84_3_4:
	r3 = r0->defaultPass;
	return r3;
	label$eaf4e84_3_6:
	r3 = h3d_scene_Renderer_getPassByName(((h3d__scene__Renderer)r0),r1);
	return r3;
}

void h3d_scene_fwd_Renderer_render(h3d__scene__fwd__Renderer r0) {
	String r3;
	h3d__pass__DefaultShadowMap r4;
	h3d__pass__Base r7;
	bool r2;
	h3d__pass__PassList r5;
	vclosure *r6;
	r3 = (String)s$shadow;
	r2 = h3d_scene_Renderer_has(((h3d__scene__Renderer)r0),r3);
	if( !r2 ) goto label$eaf4e84_4_8;
	r4 = r0->shadow;
	r3 = (String)s$shadow;
	r5 = h3d_scene_Renderer_get(((h3d__scene__Renderer)r0),r3);
	r6 = NULL;
	h3d_scene_fwd_Renderer_renderPass(r0,((h3d__pass__Base)r4),r5,r6);
	label$eaf4e84_4_8:
	r3 = (String)s$depth;
	r2 = h3d_scene_Renderer_has(((h3d__scene__Renderer)r0),r3);
	if( !r2 ) goto label$eaf4e84_4_16;
	r7 = r0->depth;
	r3 = (String)s$depth;
	r5 = h3d_scene_Renderer_get(((h3d__scene__Renderer)r0),r3);
	r6 = NULL;
	h3d_scene_fwd_Renderer_renderPass(r0,r7,r5,r6);
	label$eaf4e84_4_16:
	r3 = (String)s$normal;
	r2 = h3d_scene_Renderer_has(((h3d__scene__Renderer)r0),r3);
	if( !r2 ) goto label$eaf4e84_4_24;
	r7 = r0->normal;
	r3 = (String)s$normal;
	r5 = h3d_scene_Renderer_get(((h3d__scene__Renderer)r0),r3);
	r6 = NULL;
	h3d_scene_fwd_Renderer_renderPass(r0,r7,r5,r6);
	label$eaf4e84_4_24:
	r7 = r0->defaultPass;
	r3 = (String)s$default;
	r5 = h3d_scene_Renderer_get(((h3d__scene__Renderer)r0),r3);
	r6 = NULL;
	h3d_scene_fwd_Renderer_renderPass(r0,r7,r5,r6);
	r7 = r0->defaultPass;
	r3 = (String)s$alpha;
	r5 = h3d_scene_Renderer_get(((h3d__scene__Renderer)r0),r3);
	r6 = r0->backToFront;
	h3d_scene_fwd_Renderer_renderPass(r0,r7,r5,r6);
	r7 = r0->defaultPass;
	r3 = (String)s$additive;
	r5 = h3d_scene_Renderer_get(((h3d__scene__Renderer)r0),r3);
	r6 = NULL;
	h3d_scene_fwd_Renderer_renderPass(r0,r7,r5,r6);
	return;
}

void h3d_scene_fwd_Renderer_new(h3d__scene__fwd__Renderer r0) {
	String r9;
	hl__types__ArrayObj r10;
	h3d__scene__fwd__NormalPass r6;
	hl_type *r12;
	h3d__pass__Default r8;
	venum *r4;
	h3d__pass__DefaultShadowMap r1;
	h3d__pass__Base r14;
	h3d__scene__fwd__DepthPass r7;
	int *r3;
	varray *r11;
	int r2, r13;
	r1 = (h3d__pass__DefaultShadowMap)hl_alloc_obj(&t$h3d_pass_DefaultShadowMap);
	r2 = 1024;
	r3 = &r2;
	r4 = NULL;
	h3d_pass_DefaultShadowMap_new(r1,r3,r4);
	r0->shadow = r1;
	r6 = (h3d__scene__fwd__NormalPass)hl_alloc_obj(&t$h3d_scene_fwd_NormalPass);
	h3d_scene_fwd_NormalPass_new(r6);
	r0->normal = ((h3d__pass__Base)r6);
	r7 = (h3d__scene__fwd__DepthPass)hl_alloc_obj(&t$h3d_scene_fwd_DepthPass);
	h3d_scene_fwd_DepthPass_new(r7);
	r0->depth = ((h3d__pass__Base)r7);
	h3d_scene_Renderer_new(((h3d__scene__Renderer)r0));
	r8 = (h3d__pass__Default)hl_alloc_obj(&t$h3d_pass_Default);
	r9 = (String)s$default;
	h3d_pass_Default_new(r8,r9);
	r0->defaultPass = ((h3d__pass__Base)r8);
	r12 = &t$h3d_pass_Base;
	r13 = 4;
	r11 = hl_alloc_array(r12,r13);
	r14 = r0->defaultPass;
	r13 = 0;
	((h3d__pass__Base*)(r11 + 1))[r13] = r14;
	r14 = r0->depth;
	r13 = 1;
	((h3d__pass__Base*)(r11 + 1))[r13] = r14;
	r14 = r0->normal;
	r13 = 2;
	((h3d__pass__Base*)(r11 + 1))[r13] = r14;
	r1 = r0->shadow;
	r13 = 3;
	((h3d__pass__DefaultShadowMap*)(r11 + 1))[r13] = r1;
	r10 = hl_types_ArrayObj_alloc(r11);
	r0->allPasses = r10;
	return;
}


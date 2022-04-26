﻿// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <h3d/mat/Defaults.h>
#include <h3d/shader/Shadow.h>
extern h3d__mat__$Defaults g$_h3d_mat_Defaults;
extern hl_type t$h3d_shader_Shadow;
void h3d_shader_Shadow_new(h3d__shader__Shadow);
hxsl__Shader h3d_mat_Defaults_set_shadowShader(hxsl__Shader);
void hxsl_Shader_setPriority(hxsl__Shader,int);
#include <h3d/shader/VolumeDecal.h>
extern hl_type t$h3d_shader_VolumeDecal;
void h3d_shader_VolumeDecal_new(h3d__shader__VolumeDecal,double,double);

hxsl__Shader h3d_mat_Defaults_get_shadowShader() {
	h3d__shader__Shadow r4;
	hxsl__Shader r0, r3;
	h3d__mat__$Defaults r1;
	int r5;
	r1 = (h3d__mat__$Defaults)g$_h3d_mat_Defaults;
	r0 = r1->shadowShader;
	if( r0 ) goto label$2157d44_1_12;
	r4 = (h3d__shader__Shadow)hl_alloc_obj(&t$h3d_shader_Shadow);
	h3d_shader_Shadow_new(r4);
	r0 = ((hxsl__Shader)r4);
	r3 = h3d_mat_Defaults_set_shadowShader(((hxsl__Shader)r4));
	r1 = (h3d__mat__$Defaults)g$_h3d_mat_Defaults;
	r3 = r1->shadowShader;
	if( r3 == NULL ) hl_null_access();
	r5 = -1;
	hxsl_Shader_setPriority(r3,r5);
	label$2157d44_1_12:
	return r0;
}

hxsl__Shader h3d_mat_Defaults_set_shadowShader(hxsl__Shader r0) {
	h3d__mat__$Defaults r1;
	r1 = (h3d__mat__$Defaults)g$_h3d_mat_Defaults;
	r1->shadowShader = r0;
	return r0;
}

hxsl__Shader h3d_mat_Defaults_makeVolumeDecal(h3d__col__Bounds r0) {
	double r2, r3, r4;
	h3d__shader__VolumeDecal r1;
	r1 = (h3d__shader__VolumeDecal)hl_alloc_obj(&t$h3d_shader_VolumeDecal);
	if( r0 == NULL ) hl_null_access();
	r2 = r0->xMax;
	r3 = r0->xMin;
	r2 = r2 - r3;
	r3 = r0->yMax;
	r4 = r0->yMin;
	r3 = r3 - r4;
	h3d_shader_VolumeDecal_new(r1,r2,r3);
	return ((hxsl__Shader)r1);
}

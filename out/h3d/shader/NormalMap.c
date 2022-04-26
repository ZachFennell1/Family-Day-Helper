﻿// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <h3d/shader/NormalMap.h>
void hxsl_Shader_new(hxsl__Shader);
#include <hxsl/Globals.h>
void hxsl_Shader_updateConstantsFinal(hxsl__Shader,hxsl__Globals);
extern h3d__shader__$NormalMap g$_h3d_shader_NormalMap;
vdynamic* Type_createEmptyInstance(hl__Class);
extern hl_type t$h3d_shader_NormalMap;
extern hl_type t$_dyn;

void h3d_shader_NormalMap_new(h3d__shader__NormalMap r0,h3d__mat__Texture r1) {
	hxsl_Shader_new(((hxsl__Shader)r0));
	r0->texture__ = r1;
	return;
}

h3d__mat__Texture h3d_shader_NormalMap_get_texture(h3d__shader__NormalMap r0) {
	h3d__mat__Texture r1;
	r1 = r0->texture__;
	return r1;
}

h3d__mat__Texture h3d_shader_NormalMap_set_texture(h3d__shader__NormalMap r0,h3d__mat__Texture r1) {
	r0->texture__ = r1;
	return r1;
}

void h3d_shader_NormalMap_updateConstants(h3d__shader__NormalMap r0,hxsl__Globals r1) {
	int r2;
	r2 = 0;
	r0->constBits = r2;
	hxsl_Shader_updateConstantsFinal(((hxsl__Shader)r0),r1);
	return;
}

vdynamic* h3d_shader_NormalMap_getParamValue(h3d__shader__NormalMap r0,int r1) {
	vdynamic *r4;
	h3d__mat__Texture r3;
	int r2;
	r2 = 0;
	if( r1 != r2 ) goto label$4efe39d_5_4;
	r3 = r0->texture__;
	return ((vdynamic*)r3);
	label$4efe39d_5_4:
	r4 = NULL;
	return r4;
}

double h3d_shader_NormalMap_getParamFloatValue(h3d__shader__NormalMap r0,int r1) {
	double r2;
	r2 = 0.;
	return r2;
}

hxsl__Shader h3d_shader_NormalMap_clone(h3d__shader__NormalMap r0) {
	h3d__shader__$NormalMap r2;
	hxsl__SharedShader r4;
	h3d__shader__NormalMap r3;
	vdynamic *r1;
	h3d__mat__Texture r5;
	r2 = (h3d__shader__$NormalMap)g$_h3d_shader_NormalMap;
	r1 = Type_createEmptyInstance(((hl__Class)r2));
	r3 = (h3d__shader__NormalMap)hl_dyn_castp(&r1,&t$_dyn,&t$h3d_shader_NormalMap);
	if( r3 == NULL ) hl_null_access();
	r4 = r0->shader;
	r3->shader = r4;
	r5 = r0->texture__;
	r3->texture__ = r5;
	return ((hxsl__Shader)r3);
}


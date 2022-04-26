﻿// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <h3d/shader/LineShader.h>
void hxsl_Shader_new(hxsl__Shader);
#include <hxsl/Globals.h>
void hxsl_Shader_updateConstantsFinal(hxsl__Shader,hxsl__Globals);
extern hl_type t$_f64;
extern h3d__shader__$LineShader g$_h3d_shader_LineShader;
vdynamic* Type_createEmptyInstance(hl__Class);
extern hl_type t$h3d_shader_LineShader;
extern hl_type t$_dyn;

void h3d_shader_LineShader_new(h3d__shader__LineShader r0,double* r1,double* r2) {
	double r3, r4, r5;
	if( r1 ) goto label$6fc5ece_1_3;
	r3 = 1.5;
	goto label$6fc5ece_1_4;
	label$6fc5ece_1_3:
	r3 = *r1;
	label$6fc5ece_1_4:
	if( r2 ) goto label$6fc5ece_1_7;
	r4 = 1.;
	goto label$6fc5ece_1_8;
	label$6fc5ece_1_7:
	r4 = *r2;
	label$6fc5ece_1_8:
	r5 = 0.;
	r0->width__ = r5;
	r5 = 0.;
	r0->lengthScale__ = r5;
	hxsl_Shader_new(((hxsl__Shader)r0));
	r0->width__ = r3;
	r0->lengthScale__ = r4;
	return;
}

double h3d_shader_LineShader_get_lengthScale(h3d__shader__LineShader r0) {
	double r1;
	r1 = r0->lengthScale__;
	return r1;
}

double h3d_shader_LineShader_get_width(h3d__shader__LineShader r0) {
	double r1;
	r1 = r0->width__;
	return r1;
}

double h3d_shader_LineShader_set_lengthScale(h3d__shader__LineShader r0,double r1) {
	r0->lengthScale__ = r1;
	return r1;
}

double h3d_shader_LineShader_set_width(h3d__shader__LineShader r0,double r1) {
	r0->width__ = r1;
	return r1;
}

void h3d_shader_LineShader_updateConstants(h3d__shader__LineShader r0,hxsl__Globals r1) {
	int r2;
	r2 = 0;
	r0->constBits = r2;
	hxsl_Shader_updateConstantsFinal(((hxsl__Shader)r0),r1);
	return;
}

vdynamic* h3d_shader_LineShader_getParamValue(h3d__shader__LineShader r0,int r1) {
	double r2;
	vdynamic *r3;
	switch(r1) {
		default:
			goto label$6fc5ece_7_8;
		case 0:
			r2 = r0->lengthScale__;
			r3 = hl_alloc_dynamic(&t$_f64);
			r3->v.d = r2;
			return r3;
		case 1:
			r2 = r0->width__;
			r3 = hl_alloc_dynamic(&t$_f64);
			r3->v.d = r2;
			return r3;
	}
	label$6fc5ece_7_8:
	r3 = NULL;
	return r3;
}

double h3d_shader_LineShader_getParamFloatValue(h3d__shader__LineShader r0,int r1) {
	double r2;
	switch(r1) {
		default:
			goto label$6fc5ece_8_6;
		case 0:
			r2 = r0->lengthScale__;
			return r2;
		case 1:
			r2 = r0->width__;
			return r2;
	}
	label$6fc5ece_8_6:
	r2 = 0.;
	return r2;
}

hxsl__Shader h3d_shader_LineShader_clone(h3d__shader__LineShader r0) {
	h3d__shader__$LineShader r2;
	h3d__shader__LineShader r3;
	hxsl__SharedShader r4;
	double r5;
	vdynamic *r1;
	r2 = (h3d__shader__$LineShader)g$_h3d_shader_LineShader;
	r1 = Type_createEmptyInstance(((hl__Class)r2));
	r3 = (h3d__shader__LineShader)hl_dyn_castp(&r1,&t$_dyn,&t$h3d_shader_LineShader);
	if( r3 == NULL ) hl_null_access();
	r4 = r0->shader;
	r3->shader = r4;
	r5 = r0->lengthScale__;
	r3->lengthScale__ = r5;
	r5 = r0->width__;
	r3->width__ = r5;
	return ((hxsl__Shader)r3);
}


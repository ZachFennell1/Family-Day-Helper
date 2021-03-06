// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <hxsl/BatchShader.h>
void hxsl_Shader_new(hxsl__Shader);
#include <hxsl/Globals.h>
extern String s$Batch_Count;
extern String s$_is_out_of_range_;
String String___add__(String,String);
#include <hl/natives.h>
String String___alloc__(vbyte*,int);
extern String s$cedf8da;
vdynamic* haxe_Exception_thrown(vdynamic*);
void hxsl_Shader_updateConstantsFinal(hxsl__Shader,hxsl__Globals);
extern hl_type t$_i32;
extern hxsl__$BatchShader g$_hxsl_BatchShader;
vdynamic* Type_createEmptyInstance(hl__Class);
extern hl_type t$hxsl_BatchShader;
extern hl_type t$_dyn;

void hxsl_BatchShader_new(hxsl__BatchShader r0) {
	int r1;
	r1 = 0;
	r0->Batch_Count__ = r1;
	hxsl_Shader_new(((hxsl__Shader)r0));
	return;
}

int hxsl_BatchShader_get_Batch_Count(hxsl__BatchShader r0) {
	int r1;
	r1 = r0->Batch_Count__;
	return r1;
}

h3d__Buffer hxsl_BatchShader_get_Batch_Buffer(hxsl__BatchShader r0) {
	h3d__Buffer r1;
	r1 = r0->Batch_Buffer__;
	return r1;
}

h3d__Buffer hxsl_BatchShader_set_Batch_Buffer(hxsl__BatchShader r0,h3d__Buffer r1) {
	r0->Batch_Buffer__ = r1;
	return r1;
}

int hxsl_BatchShader_set_Batch_Count(hxsl__BatchShader r0,int r1) {
	bool r2;
	r2 = true;
	r0->constModified = r2;
	r0->Batch_Count__ = r1;
	return r1;
}

void hxsl_BatchShader_updateConstants(hxsl__BatchShader r0,hxsl__Globals r1) {
	String r7, r8;
	int *r9;
	vdynamic *r6;
	vbyte *r10;
	int r2, r4, r5;
	r2 = 0;
	r0->constBits = r2;
	r2 = r0->Batch_Count__;
	r5 = 17;
	r4 = ((unsigned)r2) >> r5;
	r5 = 0;
	if( r4 == r5 ) goto label$8834cf2_6_24;
	r7 = (String)s$Batch_Count;
	r8 = (String)s$_is_out_of_range_;
	r7 = String___add__(r7,r8);
	r4 = r2;
	r9 = &r4;
	r10 = hl_itos(r4,r9);
	r8 = String___alloc__(r10,r4);
	r7 = String___add__(r7,r8);
	r8 = (String)s$cedf8da;
	r7 = String___add__(r7,r8);
	r4 = 131071;
	r9 = &r4;
	r10 = hl_itos(r4,r9);
	r8 = String___alloc__(r10,r4);
	r7 = String___add__(r7,r8);
	r6 = haxe_Exception_thrown(((vdynamic*)r7));
	hl_throw((vdynamic*)r6);
	label$8834cf2_6_24:
	r4 = r0->constBits;
	r4 = r4 | r2;
	r0->constBits = r4;
	hxsl_Shader_updateConstantsFinal(((hxsl__Shader)r0),r1);
	return;
}

vdynamic* hxsl_BatchShader_getParamValue(hxsl__BatchShader r0,int r1) {
	h3d__Buffer r4;
	vdynamic *r3;
	int r2;
	switch(r1) {
		default:
			goto label$8834cf2_7_7;
		case 0:
			r2 = r0->Batch_Count__;
			r3 = hl_alloc_dynamic(&t$_i32);
			r3->v.i = r2;
			return r3;
		case 1:
			r4 = r0->Batch_Buffer__;
			return ((vdynamic*)r4);
	}
	label$8834cf2_7_7:
	r3 = NULL;
	return r3;
}

double hxsl_BatchShader_getParamFloatValue(hxsl__BatchShader r0,int r1) {
	double r2;
	r2 = 0.;
	return r2;
}

hxsl__Shader hxsl_BatchShader_clone(hxsl__BatchShader r0) {
	hxsl__SharedShader r4;
	hxsl__BatchShader r3;
	hxsl__$BatchShader r2;
	h3d__Buffer r6;
	vdynamic *r1;
	int r5;
	r2 = (hxsl__$BatchShader)g$_hxsl_BatchShader;
	r1 = Type_createEmptyInstance(((hl__Class)r2));
	r3 = (hxsl__BatchShader)hl_dyn_castp(&r1,&t$_dyn,&t$hxsl_BatchShader);
	if( r3 == NULL ) hl_null_access();
	r4 = r0->shader;
	r3->shader = r4;
	r5 = r0->Batch_Count__;
	r3->Batch_Count__ = r5;
	r6 = r0->Batch_Buffer__;
	r3->Batch_Buffer__ = r6;
	return ((hxsl__Shader)r3);
}


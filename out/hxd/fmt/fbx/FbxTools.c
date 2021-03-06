// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <hxd/fmt/fbx/FbxTools.h>
extern String s$5058f1a;
hl__types__ArrayObj String_split(String,String);
extern hl_type t$hl_types_ArrayObj;
extern hl_type t$vrt_0813dd2;
extern hl_type t$String;
int String___compare(String,vdynamic*);
extern String s$_does_not_have_;
String String___add__(String,String);
extern String s$bbee82c;
extern String s$ba92d40;
vdynamic* haxe_Exception_thrown(vdynamic*);
#include <hl/natives.h>
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);
int hl_types_ArrayObj_push(hl__types__ArrayObj,vdynamic*);
extern String s$_has_;
String Std_string(vdynamic*);
extern String s$_props;
extern hl_type t$hl_types_ArrayBytes_Float;
void hl_types_ArrayBytes_Float_new(hl__types__ArrayBytes_Float);
int hl_types_ArrayBytes_Float_push(hl__types__ArrayBytes_Float,double);
extern hl_type t$hxd_fmt_fbx_FbxProp;
void hl_types_ArrayObj___expand(hl__types__ArrayObj,int);
extern String s$null_prop;
extern String s$Invalid_prop_;
extern String s$_is_not_an_object;
extern String s$_is_not_an_object_;
extern String s$4501c09;
vdynamic* hl_types_ArrayObj_pop(hl__types__ArrayObj);

vvirtual* hxd_fmt_fbx_FbxTools_get(vvirtual* r0,String r1,bool* r2) {
	String r5, r6, r17;
	vvirtual *r7, *r15;
	hl__types__ArrayObj r4, r11;
	bool r3, r14, r18;
	vdynamic *r12;
	varray *r13;
	int r8, r9, r10, r16;
	if( r2 ) goto label$08b5931_1_3;
	r3 = false;
	goto label$08b5931_1_4;
	label$08b5931_1_3:
	r3 = *r2;
	label$08b5931_1_4:
	if( r1 == NULL ) hl_null_access();
	r6 = (String)s$5058f1a;
	r4 = String_split(r1,r6);
	r7 = r0;
	r8 = 0;
	label$08b5931_1_9:
	if( r4 == NULL ) hl_null_access();
	r10 = r4->length;
	if( r8 >= r10 ) goto label$08b5931_1_62;
	r10 = r4->length;
	if( ((unsigned)r8) < ((unsigned)r10) ) goto label$08b5931_1_17;
	r5 = NULL;
	goto label$08b5931_1_20;
	label$08b5931_1_17:
	r13 = r4->array;
	r12 = ((vdynamic**)(r13 + 1))[r8];
	r5 = (String)r12;
	label$08b5931_1_20:
	++r8;
	r14 = false;
	r9 = 0;
	if( r7 == NULL ) hl_null_access();
	r11 = hl_vfields(r7)[0] ? (*(hl__types__ArrayObj*)(hl_vfields(r7)[0])) : (hl__types__ArrayObj)hl_dyn_getp(r7->value,-54870451/*childs*/,&t$hl_types_ArrayObj);
	label$08b5931_1_25:
	if( r11 == NULL ) hl_null_access();
	r16 = r11->length;
	if( r9 >= r16 ) goto label$08b5931_1_45;
	r16 = r11->length;
	if( ((unsigned)r9) < ((unsigned)r16) ) goto label$08b5931_1_33;
	r15 = NULL;
	goto label$08b5931_1_36;
	label$08b5931_1_33:
	r13 = r11->array;
	r12 = ((vdynamic**)(r13 + 1))[r9];
	r15 = hl_to_virtual(&t$vrt_0813dd2,(vdynamic*)r12);
	label$08b5931_1_36:
	++r9;
	if( r15 == NULL ) hl_null_access();
	r6 = hl_vfields(r15)[1] ? (*(String*)(hl_vfields(r15)[1])) : (String)hl_dyn_getp(r15->value,150958933/*name*/,&t$String);
	if( r6 != r5 && (!r6 || !r5 || String___compare(r6,(vdynamic*)r5) != 0) ) goto label$08b5931_1_44;
	r7 = r15;
	r18 = true;
	r14 = r18;
	goto label$08b5931_1_45;
	label$08b5931_1_44:
	goto label$08b5931_1_25;
	label$08b5931_1_45:
	if( r14 ) goto label$08b5931_1_61;
	if( !r3 ) goto label$08b5931_1_49;
	r15 = NULL;
	return r15;
	label$08b5931_1_49:
	if( r0 == NULL ) hl_null_access();
	r6 = hl_vfields(r0)[1] ? (*(String*)(hl_vfields(r0)[1])) : (String)hl_dyn_getp(r0->value,150958933/*name*/,&t$String);
	r17 = (String)s$_does_not_have_;
	r6 = String___add__(r6,r17);
	r6 = String___add__(r6,r1);
	r17 = (String)s$bbee82c;
	r6 = String___add__(r6,r17);
	r6 = String___add__(r6,r5);
	r17 = (String)s$ba92d40;
	r6 = String___add__(r6,r17);
	r12 = haxe_Exception_thrown(((vdynamic*)r6));
	hl_throw((vdynamic*)r12);
	label$08b5931_1_61:
	goto label$08b5931_1_9;
	label$08b5931_1_62:
	return r7;
}

hl__types__ArrayObj hxd_fmt_fbx_FbxTools_getAll(vvirtual* r0,String r1) {
	String r3, r4;
	vvirtual *r9, *r16;
	hl__types__ArrayObj r2, r5, r12, r15;
	hl_type *r7;
	vdynamic *r13;
	int r8, r10, r11, r14, r17;
	varray *r6;
	if( r1 == NULL ) hl_null_access();
	r4 = (String)s$5058f1a;
	r2 = String_split(r1,r4);
	r7 = &t$vrt_0813dd2;
	r8 = 1;
	r6 = hl_alloc_array(r7,r8);
	r8 = 0;
	((vvirtual**)(r6 + 1))[r8] = r0;
	r5 = hl_types_ArrayObj_alloc(r6);
	r8 = 0;
	label$08b5931_2_10:
	if( r2 == NULL ) hl_null_access();
	r11 = r2->length;
	if( r8 >= r11 ) goto label$08b5931_2_68;
	r11 = r2->length;
	if( ((unsigned)r8) < ((unsigned)r11) ) goto label$08b5931_2_18;
	r3 = NULL;
	goto label$08b5931_2_21;
	label$08b5931_2_18:
	r6 = r2->array;
	r13 = ((vdynamic**)(r6 + 1))[r8];
	r3 = (String)r13;
	label$08b5931_2_21:
	++r8;
	r7 = &t$vrt_0813dd2;
	r10 = 0;
	r6 = hl_alloc_array(r7,r10);
	r12 = hl_types_ArrayObj_alloc(r6);
	r10 = 0;
	label$08b5931_2_27:
	if( r5 == NULL ) hl_null_access();
	r14 = r5->length;
	if( r10 >= r14 ) goto label$08b5931_2_61;
	r14 = r5->length;
	if( ((unsigned)r10) < ((unsigned)r14) ) goto label$08b5931_2_35;
	r9 = NULL;
	goto label$08b5931_2_38;
	label$08b5931_2_35:
	r6 = r5->array;
	r13 = ((vdynamic**)(r6 + 1))[r10];
	r9 = hl_to_virtual(&t$vrt_0813dd2,(vdynamic*)r13);
	label$08b5931_2_38:
	++r10;
	r11 = 0;
	if( r9 == NULL ) hl_null_access();
	r15 = hl_vfields(r9)[0] ? (*(hl__types__ArrayObj*)(hl_vfields(r9)[0])) : (hl__types__ArrayObj)hl_dyn_getp(r9->value,-54870451/*childs*/,&t$hl_types_ArrayObj);
	label$08b5931_2_42:
	if( r15 == NULL ) hl_null_access();
	r17 = r15->length;
	if( r11 >= r17 ) goto label$08b5931_2_60;
	r17 = r15->length;
	if( ((unsigned)r11) < ((unsigned)r17) ) goto label$08b5931_2_50;
	r16 = NULL;
	goto label$08b5931_2_53;
	label$08b5931_2_50:
	r6 = r15->array;
	r13 = ((vdynamic**)(r6 + 1))[r11];
	r16 = hl_to_virtual(&t$vrt_0813dd2,(vdynamic*)r13);
	label$08b5931_2_53:
	++r11;
	if( r16 == NULL ) hl_null_access();
	r4 = hl_vfields(r16)[1] ? (*(String*)(hl_vfields(r16)[1])) : (String)hl_dyn_getp(r16->value,150958933/*name*/,&t$String);
	if( r4 != r3 && (!r4 || !r3 || String___compare(r4,(vdynamic*)r3) != 0) ) goto label$08b5931_2_59;
	if( r12 == NULL ) hl_null_access();
	r14 = hl_types_ArrayObj_push(r12,((vdynamic*)r16));
	label$08b5931_2_59:
	goto label$08b5931_2_42;
	label$08b5931_2_60:
	goto label$08b5931_2_27;
	label$08b5931_2_61:
	r5 = r12;
	if( r12 == NULL ) hl_null_access();
	r10 = r12->length;
	r11 = 0;
	if( r10 != r11 ) goto label$08b5931_2_67;
	return r12;
	label$08b5931_2_67:
	goto label$08b5931_2_10;
	label$08b5931_2_68:
	return r5;
}

hl__types__ArrayBytes_Int hxd_fmt_fbx_FbxTools_getInts(vvirtual* r0) {
	String r5, r6;
	hl__types__ArrayObj r2;
	venum *r7;
	hl__types__ArrayBytes_Int r9;
	vdynamic *r4;
	varray *r8;
	int r1, r3;
	if( r0 == NULL ) hl_null_access();
	r2 = hl_vfields(r0)[2] ? (*(hl__types__ArrayObj*)(hl_vfields(r0)[2])) : (hl__types__ArrayObj)hl_dyn_getp(r0->value,-393222421/*props*/,&t$hl_types_ArrayObj);
	if( r2 == NULL ) hl_null_access();
	r1 = r2->length;
	r3 = 1;
	if( r1 == r3 ) goto label$08b5931_3_16;
	r5 = hl_vfields(r0)[1] ? (*(String*)(hl_vfields(r0)[1])) : (String)hl_dyn_getp(r0->value,150958933/*name*/,&t$String);
	r6 = (String)s$_has_;
	r5 = String___add__(r5,r6);
	r2 = hl_vfields(r0)[2] ? (*(hl__types__ArrayObj*)(hl_vfields(r0)[2])) : (hl__types__ArrayObj)hl_dyn_getp(r0->value,-393222421/*props*/,&t$hl_types_ArrayObj);
	r6 = Std_string(((vdynamic*)r2));
	r5 = String___add__(r5,r6);
	r6 = (String)s$_props;
	r5 = String___add__(r5,r6);
	r4 = haxe_Exception_thrown(((vdynamic*)r5));
	hl_throw((vdynamic*)r4);
	label$08b5931_3_16:
	r2 = hl_vfields(r0)[2] ? (*(hl__types__ArrayObj*)(hl_vfields(r0)[2])) : (hl__types__ArrayObj)hl_dyn_getp(r0->value,-393222421/*props*/,&t$hl_types_ArrayObj);
	if( r2 == NULL ) hl_null_access();
	r1 = 0;
	r3 = r2->length;
	if( ((unsigned)r1) < ((unsigned)r3) ) goto label$08b5931_3_23;
	r7 = NULL;
	goto label$08b5931_3_26;
	label$08b5931_3_23:
	r8 = r2->array;
	r4 = ((vdynamic**)(r8 + 1))[r1];
	r7 = (venum*)r4;
	label$08b5931_3_26:
	if( r7 == NULL ) hl_null_access();
	r1 = HL__ENUM_INDEX__(r7);
	r3 = 4;
	if( r1 != r3 ) goto label$08b5931_3_32;
	r9 = ((hxd_fmt_fbx_FbxProp_PInts*)r7)->p0;
	return r9;
	label$08b5931_3_32:
	r5 = hl_vfields(r0)[1] ? (*(String*)(hl_vfields(r0)[1])) : (String)hl_dyn_getp(r0->value,150958933/*name*/,&t$String);
	r6 = (String)s$_has_;
	r5 = String___add__(r5,r6);
	r2 = hl_vfields(r0)[2] ? (*(hl__types__ArrayObj*)(hl_vfields(r0)[2])) : (hl__types__ArrayObj)hl_dyn_getp(r0->value,-393222421/*props*/,&t$hl_types_ArrayObj);
	r6 = Std_string(((vdynamic*)r2));
	r5 = String___add__(r5,r6);
	r6 = (String)s$_props;
	r5 = String___add__(r5,r6);
	r4 = haxe_Exception_thrown(((vdynamic*)r5));
	hl_throw((vdynamic*)r4);
}

hl__types__ArrayBytes_Float hxd_fmt_fbx_FbxTools_getFloats(vvirtual* r0) {
	String r6, r7;
	hl__types__ArrayObj r3;
	venum *r8, *r10;
	hl__types__ArrayBytes_Int r11;
	hl__types__ArrayBytes_Float r12;
	double r15;
	vdynamic *r5;
	vbyte *r14;
	varray *r9;
	int r2, r4, r13;
	if( r0 == NULL ) hl_null_access();
	r3 = hl_vfields(r0)[2] ? (*(hl__types__ArrayObj*)(hl_vfields(r0)[2])) : (hl__types__ArrayObj)hl_dyn_getp(r0->value,-393222421/*props*/,&t$hl_types_ArrayObj);
	if( r3 == NULL ) hl_null_access();
	r2 = r3->length;
	r4 = 1;
	if( r2 == r4 ) goto label$08b5931_4_16;
	r6 = hl_vfields(r0)[1] ? (*(String*)(hl_vfields(r0)[1])) : (String)hl_dyn_getp(r0->value,150958933/*name*/,&t$String);
	r7 = (String)s$_has_;
	r6 = String___add__(r6,r7);
	r3 = hl_vfields(r0)[2] ? (*(hl__types__ArrayObj*)(hl_vfields(r0)[2])) : (hl__types__ArrayObj)hl_dyn_getp(r0->value,-393222421/*props*/,&t$hl_types_ArrayObj);
	r7 = Std_string(((vdynamic*)r3));
	r6 = String___add__(r6,r7);
	r7 = (String)s$_props;
	r6 = String___add__(r6,r7);
	r5 = haxe_Exception_thrown(((vdynamic*)r6));
	hl_throw((vdynamic*)r5);
	label$08b5931_4_16:
	r3 = hl_vfields(r0)[2] ? (*(hl__types__ArrayObj*)(hl_vfields(r0)[2])) : (hl__types__ArrayObj)hl_dyn_getp(r0->value,-393222421/*props*/,&t$hl_types_ArrayObj);
	if( r3 == NULL ) hl_null_access();
	r2 = 0;
	r4 = r3->length;
	if( ((unsigned)r2) < ((unsigned)r4) ) goto label$08b5931_4_23;
	r8 = NULL;
	goto label$08b5931_4_26;
	label$08b5931_4_23:
	r9 = r3->array;
	r5 = ((vdynamic**)(r9 + 1))[r2];
	r8 = (venum*)r5;
	label$08b5931_4_26:
	if( r8 == NULL ) hl_null_access();
	r2 = HL__ENUM_INDEX__(r8);
	switch(r2) {
		default:
		case 0:
		case 1:
		case 2:
		case 3:
			r6 = hl_vfields(r0)[1] ? (*(String*)(hl_vfields(r0)[1])) : (String)hl_dyn_getp(r0->value,150958933/*name*/,&t$String);
			r7 = (String)s$_has_;
			r6 = String___add__(r6,r7);
			r3 = hl_vfields(r0)[2] ? (*(hl__types__ArrayObj*)(hl_vfields(r0)[2])) : (hl__types__ArrayObj)hl_dyn_getp(r0->value,-393222421/*props*/,&t$hl_types_ArrayObj);
			r7 = Std_string(((vdynamic*)r3));
			r6 = String___add__(r6,r7);
			r7 = (String)s$_props;
			r6 = String___add__(r6,r7);
			r5 = haxe_Exception_thrown(((vdynamic*)r6));
			hl_throw((vdynamic*)r5);
		case 4:
			r11 = ((hxd_fmt_fbx_FbxProp_PInts*)r8)->p0;
			r12 = (hl__types__ArrayBytes_Float)hl_alloc_obj(&t$hl_types_ArrayBytes_Float);
			hl_types_ArrayBytes_Float_new(r12);
			r2 = 0;
			label$08b5931_4_43:
			if( r11 == NULL ) hl_null_access();
			r13 = r11->length;
			if( r2 >= r13 ) goto label$08b5931_4_60;
			r13 = r11->length;
			if( ((unsigned)r2) < ((unsigned)r13) ) goto label$08b5931_4_51;
			r4 = 0;
			goto label$08b5931_4_55;
			label$08b5931_4_51:
			r14 = r11->bytes;
			r13 = 2;
			r13 = r2 << r13;
			r4 = *(int*)(r14 + r13);
			label$08b5931_4_55:
			++r2;
			if( r12 == NULL ) hl_null_access();
			r15 = (double)r4;
			r13 = hl_types_ArrayBytes_Float_push(r12,r15);
			goto label$08b5931_4_43;
			label$08b5931_4_60:
			if( r0 == NULL ) hl_null_access();
			r3 = hl_vfields(r0)[2] ? (*(hl__types__ArrayObj*)(hl_vfields(r0)[2])) : (hl__types__ArrayObj)hl_dyn_getp(r0->value,-393222421/*props*/,&t$hl_types_ArrayObj);
			if( r3 == NULL ) hl_null_access();
			r2 = 0;
			r10 = hl_alloc_enum(&t$hxd_fmt_fbx_FbxProp,5);
			((hxd_fmt_fbx_FbxProp_PFloats*)r10)->p0 = r12;
			r4 = r3->length;
			if( ((unsigned)r2) < ((unsigned)r4) ) goto label$08b5931_4_68;
			hl_types_ArrayObj___expand(r3,r2);
			label$08b5931_4_68:
			r9 = r3->array;
			((venum**)(r9 + 1))[r2] = r10;
			return r12;
		case 5:
			r12 = ((hxd_fmt_fbx_FbxProp_PFloats*)r8)->p0;
			return r12;
	}
}

bool hxd_fmt_fbx_FbxTools_hasProp(vvirtual* r0,venum* r1) {
	hl__types__ArrayObj r3;
	venum *r5;
	bool r8;
	vdynamic *r6;
	varray *r7;
	int r2, r4;
	r2 = 0;
	if( r0 == NULL ) hl_null_access();
	r3 = hl_vfields(r0)[2] ? (*(hl__types__ArrayObj*)(hl_vfields(r0)[2])) : (hl__types__ArrayObj)hl_dyn_getp(r0->value,-393222421/*props*/,&t$hl_types_ArrayObj);
	label$08b5931_5_3:
	if( r3 == NULL ) hl_null_access();
	r4 = r3->length;
	if( r2 >= r4 ) goto label$08b5931_5_20;
	r4 = r3->length;
	if( ((unsigned)r2) < ((unsigned)r4) ) goto label$08b5931_5_11;
	r5 = NULL;
	goto label$08b5931_5_14;
	label$08b5931_5_11:
	r7 = r3->array;
	r6 = ((vdynamic**)(r7 + 1))[r2];
	r5 = (venum*)r6;
	label$08b5931_5_14:
	++r2;
	r8 = hl_type_enum_eq(((vdynamic*)r1),((vdynamic*)r5));
	if( !r8 ) goto label$08b5931_5_19;
	r8 = true;
	return r8;
	label$08b5931_5_19:
	goto label$08b5931_5_3;
	label$08b5931_5_20:
	r8 = false;
	return r8;
}

int hxd_fmt_fbx_FbxTools_idToInt(double r0) {
	double r1, r2;
	int r3;
	r2 = 4294967296.;
	r1 = fmod(r0,r2);
	r2 = 2147483648.;
	if( !(r1 >= r2) ) goto label$08b5931_6_7;
	r2 = 4294967296.;
	r1 = r1 - r2;
	goto label$08b5931_6_11;
	label$08b5931_6_7:
	r2 = -2147483648.;
	if( !(r1 < r2) ) goto label$08b5931_6_11;
	r2 = 4294967296.;
	r1 = r1 + r2;
	label$08b5931_6_11:
	r3 = (int)r1;
	return r3;
}

int hxd_fmt_fbx_FbxTools_toInt(venum* r0) {
	String r2, r4;
	double r5;
	vdynamic *r1;
	int r3;
	if( r0 ) goto label$08b5931_7_4;
	r2 = (String)s$null_prop;
	r1 = haxe_Exception_thrown(((vdynamic*)r2));
	hl_throw((vdynamic*)r1);
	label$08b5931_7_4:
	if( r0 == NULL ) hl_null_access();
	r3 = HL__ENUM_INDEX__(r0);
	switch(r3) {
		default:
			r2 = (String)s$Invalid_prop_;
			r4 = Std_string(((vdynamic*)r0));
			r2 = String___add__(r2,r4);
			r1 = haxe_Exception_thrown(((vdynamic*)r2));
			hl_throw((vdynamic*)r1);
		case 0:
			r3 = ((hxd_fmt_fbx_FbxProp_PInt*)r0)->p0;
			return r3;
		case 1:
			r5 = ((hxd_fmt_fbx_FbxProp_PFloat*)r0)->p0;
			r3 = hxd_fmt_fbx_FbxTools_idToInt(r5);
			return r3;
	}
}

double hxd_fmt_fbx_FbxTools_toFloat(venum* r0) {
	String r2, r4;
	double r5, r6;
	vdynamic *r1;
	int r3;
	if( r0 ) goto label$08b5931_8_4;
	r2 = (String)s$null_prop;
	r1 = haxe_Exception_thrown(((vdynamic*)r2));
	hl_throw((vdynamic*)r1);
	label$08b5931_8_4:
	if( r0 == NULL ) hl_null_access();
	r3 = HL__ENUM_INDEX__(r0);
	switch(r3) {
		default:
			r2 = (String)s$Invalid_prop_;
			r4 = Std_string(((vdynamic*)r0));
			r2 = String___add__(r2,r4);
			r1 = haxe_Exception_thrown(((vdynamic*)r2));
			hl_throw((vdynamic*)r1);
		case 0:
			r3 = ((hxd_fmt_fbx_FbxProp_PInt*)r0)->p0;
			r5 = (double)r3;
			r6 = 1.;
			r5 = r5 * r6;
			return r5;
		case 1:
			r5 = ((hxd_fmt_fbx_FbxProp_PFloat*)r0)->p0;
			return r5;
	}
}

String hxd_fmt_fbx_FbxTools_toString(venum* r0) {
	String r2, r5;
	vdynamic *r1;
	int r3, r4;
	if( r0 ) goto label$08b5931_9_4;
	r2 = (String)s$null_prop;
	r1 = haxe_Exception_thrown(((vdynamic*)r2));
	hl_throw((vdynamic*)r1);
	label$08b5931_9_4:
	if( r0 == NULL ) hl_null_access();
	r3 = HL__ENUM_INDEX__(r0);
	r4 = 2;
	if( r3 != r4 ) goto label$08b5931_9_10;
	r2 = ((hxd_fmt_fbx_FbxProp_PString*)r0)->p0;
	return r2;
	label$08b5931_9_10:
	r2 = (String)s$Invalid_prop_;
	r5 = Std_string(((vdynamic*)r0));
	r2 = String___add__(r2,r5);
	r1 = haxe_Exception_thrown(((vdynamic*)r2));
	hl_throw((vdynamic*)r1);
}

haxe__io__Bytes hxd_fmt_fbx_FbxTools_toBinary(venum* r0) {
	String r2, r6;
	haxe__io__Bytes r5;
	vdynamic *r1;
	int r3, r4;
	if( r0 ) goto label$08b5931_10_4;
	r2 = (String)s$null_prop;
	r1 = haxe_Exception_thrown(((vdynamic*)r2));
	hl_throw((vdynamic*)r1);
	label$08b5931_10_4:
	if( r0 == NULL ) hl_null_access();
	r3 = HL__ENUM_INDEX__(r0);
	r4 = 6;
	if( r3 != r4 ) goto label$08b5931_10_10;
	r5 = ((hxd_fmt_fbx_FbxProp_PBinary*)r0)->p0;
	return r5;
	label$08b5931_10_10:
	r2 = (String)s$Invalid_prop_;
	r6 = Std_string(((vdynamic*)r0));
	r2 = String___add__(r2,r6);
	r1 = haxe_Exception_thrown(((vdynamic*)r2));
	hl_throw((vdynamic*)r1);
}

int hxd_fmt_fbx_FbxTools_getId(vvirtual* r0) {
	String r5, r6;
	hl__types__ArrayObj r2;
	venum *r7;
	double r9;
	vdynamic *r4;
	varray *r8;
	int r1, r3;
	if( r0 == NULL ) hl_null_access();
	r2 = hl_vfields(r0)[2] ? (*(hl__types__ArrayObj*)(hl_vfields(r0)[2])) : (hl__types__ArrayObj)hl_dyn_getp(r0->value,-393222421/*props*/,&t$hl_types_ArrayObj);
	if( r2 == NULL ) hl_null_access();
	r1 = r2->length;
	r3 = 3;
	if( r1 == r3 ) goto label$08b5931_11_11;
	r5 = hl_vfields(r0)[1] ? (*(String*)(hl_vfields(r0)[1])) : (String)hl_dyn_getp(r0->value,150958933/*name*/,&t$String);
	r6 = (String)s$_is_not_an_object;
	r5 = String___add__(r5,r6);
	r4 = haxe_Exception_thrown(((vdynamic*)r5));
	hl_throw((vdynamic*)r4);
	label$08b5931_11_11:
	r2 = hl_vfields(r0)[2] ? (*(hl__types__ArrayObj*)(hl_vfields(r0)[2])) : (hl__types__ArrayObj)hl_dyn_getp(r0->value,-393222421/*props*/,&t$hl_types_ArrayObj);
	if( r2 == NULL ) hl_null_access();
	r1 = 0;
	r3 = r2->length;
	if( ((unsigned)r1) < ((unsigned)r3) ) goto label$08b5931_11_18;
	r7 = NULL;
	goto label$08b5931_11_21;
	label$08b5931_11_18:
	r8 = r2->array;
	r4 = ((vdynamic**)(r8 + 1))[r1];
	r7 = (venum*)r4;
	label$08b5931_11_21:
	if( r7 == NULL ) hl_null_access();
	r1 = HL__ENUM_INDEX__(r7);
	switch(r1) {
		default:
			r5 = hl_vfields(r0)[1] ? (*(String*)(hl_vfields(r0)[1])) : (String)hl_dyn_getp(r0->value,150958933/*name*/,&t$String);
			r6 = (String)s$_is_not_an_object_;
			r5 = String___add__(r5,r6);
			r2 = hl_vfields(r0)[2] ? (*(hl__types__ArrayObj*)(hl_vfields(r0)[2])) : (hl__types__ArrayObj)hl_dyn_getp(r0->value,-393222421/*props*/,&t$hl_types_ArrayObj);
			r6 = Std_string(((vdynamic*)r2));
			r5 = String___add__(r5,r6);
			r4 = haxe_Exception_thrown(((vdynamic*)r5));
			hl_throw((vdynamic*)r4);
		case 0:
			r1 = ((hxd_fmt_fbx_FbxProp_PInt*)r7)->p0;
			return r1;
		case 1:
			r9 = ((hxd_fmt_fbx_FbxProp_PFloat*)r7)->p0;
			r1 = hxd_fmt_fbx_FbxTools_idToInt(r9);
			return r1;
	}
}

String hxd_fmt_fbx_FbxTools_getName(vvirtual* r0) {
	String r5, r6, r9;
	hl__types__ArrayObj r2;
	venum *r7;
	vdynamic *r4;
	varray *r8;
	int r1, r3;
	if( r0 == NULL ) hl_null_access();
	r2 = hl_vfields(r0)[2] ? (*(hl__types__ArrayObj*)(hl_vfields(r0)[2])) : (hl__types__ArrayObj)hl_dyn_getp(r0->value,-393222421/*props*/,&t$hl_types_ArrayObj);
	if( r2 == NULL ) hl_null_access();
	r1 = r2->length;
	r3 = 3;
	if( r1 == r3 ) goto label$08b5931_12_11;
	r5 = hl_vfields(r0)[1] ? (*(String*)(hl_vfields(r0)[1])) : (String)hl_dyn_getp(r0->value,150958933/*name*/,&t$String);
	r6 = (String)s$_is_not_an_object;
	r5 = String___add__(r5,r6);
	r4 = haxe_Exception_thrown(((vdynamic*)r5));
	hl_throw((vdynamic*)r4);
	label$08b5931_12_11:
	r2 = hl_vfields(r0)[2] ? (*(hl__types__ArrayObj*)(hl_vfields(r0)[2])) : (hl__types__ArrayObj)hl_dyn_getp(r0->value,-393222421/*props*/,&t$hl_types_ArrayObj);
	if( r2 == NULL ) hl_null_access();
	r1 = 1;
	r3 = r2->length;
	if( ((unsigned)r1) < ((unsigned)r3) ) goto label$08b5931_12_18;
	r7 = NULL;
	goto label$08b5931_12_21;
	label$08b5931_12_18:
	r8 = r2->array;
	r4 = ((vdynamic**)(r8 + 1))[r1];
	r7 = (venum*)r4;
	label$08b5931_12_21:
	if( r7 == NULL ) hl_null_access();
	r1 = HL__ENUM_INDEX__(r7);
	r3 = 2;
	if( r1 != r3 ) goto label$08b5931_12_33;
	r5 = ((hxd_fmt_fbx_FbxProp_PString*)r7)->p0;
	if( r5 == NULL ) hl_null_access();
	r9 = (String)s$4501c09;
	r2 = String_split(r5,r9);
	if( r2 == NULL ) hl_null_access();
	r4 = hl_types_ArrayObj_pop(r2);
	r6 = (String)r4;
	return r6;
	label$08b5931_12_33:
	r5 = hl_vfields(r0)[1] ? (*(String*)(hl_vfields(r0)[1])) : (String)hl_dyn_getp(r0->value,150958933/*name*/,&t$String);
	r6 = (String)s$_is_not_an_object;
	r5 = String___add__(r5,r6);
	r4 = haxe_Exception_thrown(((vdynamic*)r5));
	hl_throw((vdynamic*)r4);
}

String hxd_fmt_fbx_FbxTools_getType(vvirtual* r0) {
	String r5, r6;
	hl__types__ArrayObj r2;
	venum *r7;
	vdynamic *r4;
	varray *r8;
	int r1, r3;
	if( r0 == NULL ) hl_null_access();
	r2 = hl_vfields(r0)[2] ? (*(hl__types__ArrayObj*)(hl_vfields(r0)[2])) : (hl__types__ArrayObj)hl_dyn_getp(r0->value,-393222421/*props*/,&t$hl_types_ArrayObj);
	if( r2 == NULL ) hl_null_access();
	r1 = r2->length;
	r3 = 3;
	if( r1 == r3 ) goto label$08b5931_13_11;
	r5 = hl_vfields(r0)[1] ? (*(String*)(hl_vfields(r0)[1])) : (String)hl_dyn_getp(r0->value,150958933/*name*/,&t$String);
	r6 = (String)s$_is_not_an_object;
	r5 = String___add__(r5,r6);
	r4 = haxe_Exception_thrown(((vdynamic*)r5));
	hl_throw((vdynamic*)r4);
	label$08b5931_13_11:
	r2 = hl_vfields(r0)[2] ? (*(hl__types__ArrayObj*)(hl_vfields(r0)[2])) : (hl__types__ArrayObj)hl_dyn_getp(r0->value,-393222421/*props*/,&t$hl_types_ArrayObj);
	if( r2 == NULL ) hl_null_access();
	r1 = 2;
	r3 = r2->length;
	if( ((unsigned)r1) < ((unsigned)r3) ) goto label$08b5931_13_18;
	r7 = NULL;
	goto label$08b5931_13_21;
	label$08b5931_13_18:
	r8 = r2->array;
	r4 = ((vdynamic**)(r8 + 1))[r1];
	r7 = (venum*)r4;
	label$08b5931_13_21:
	if( r7 == NULL ) hl_null_access();
	r1 = HL__ENUM_INDEX__(r7);
	r3 = 2;
	if( r1 != r3 ) goto label$08b5931_13_27;
	r5 = ((hxd_fmt_fbx_FbxProp_PString*)r7)->p0;
	return r5;
	label$08b5931_13_27:
	r5 = hl_vfields(r0)[1] ? (*(String*)(hl_vfields(r0)[1])) : (String)hl_dyn_getp(r0->value,150958933/*name*/,&t$String);
	r6 = (String)s$_is_not_an_object;
	r5 = String___add__(r5,r6);
	r4 = haxe_Exception_thrown(((vdynamic*)r5));
	hl_throw((vdynamic*)r4);
}


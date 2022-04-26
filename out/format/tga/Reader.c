﻿// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <format/tga/Reader.h>
bool haxe_io_Input_set_bigEndian(haxe__io__Input,bool);
#include <format/tga/ImageOrigin.h>
#include <format/tga/ImageType.h>
#include <haxe/io/Encoding.h>
#include <hl/types/ArrayBytes_Int.h>
vvirtual* format_tga_Reader_readHeader(format__tga__Reader);
extern String s$;
String haxe_io_Input_readString(haxe__io__Input,int,venum*);
hl__types__ArrayBytes_Int format_tga_Reader_readColorMapData(format__tga__Reader,vvirtual*);
extern hl_type t$vrt_66ea910;
extern hl_type t$vrt_4a69d90;
extern hl_type t$String;
extern hl_type t$hl_types_ArrayBytes_Int;
hl__types__ArrayBytes_Int format_tga_Reader_readImageData(format__tga__Reader,vvirtual*,hl__types__ArrayBytes_Int);
extern hl_type t$_dyn;
extern hl_type t$format_tga_ImageType;
extern venum* g$format_tga_ImageType_NoImage;
extern venum* g$af2eafa;
extern venum* g$4bd463c;
extern venum* g$2bdd130;
extern venum* g$085a3bd;
extern venum* g$7ca9e9c;
extern venum* g$0227eec;
int haxe_io_Input_readInt16(haxe__io__Input);
extern venum* g$288eed8;
extern venum* g$0dab16b;
extern venum* g$format_tga_ImageOrigin_TopLeft;
extern venum* g$format_tga_ImageOrigin_TopRight;
extern hl_type t$_i32;
extern hl_type t$format_tga_ImageOrigin;
hl__types__ArrayBytes_Int format_tga_Reader_readPixels(format__tga__Reader,int,int,int,bool);
extern String s$Unsupported_image_data_type_;
vdynamic* haxe_Exception_thrown(vdynamic*);
hl__types__ArrayBytes_Int format_tga_Reader_readIndexes(format__tga__Reader,int,int,hl__types__ArrayBytes_Int,int,bool);
hl__types__ArrayBytes_Int format_tga_Reader_readMono(format__tga__Reader,int,int,int,bool);
#include <hl/natives.h>
hl__types__ArrayBytes_Int hl_types_ArrayBase_allocI32(vbyte*,int);
void hl_types_ArrayBytes_Int___expand(hl__types__ArrayBytes_Int,int);
extern String s$566b2bf;
extern hl_type t$fun_cf565eb;
int format_tga_Reader_parsePixel1(format__tga__Reader,int,bool);
extern hl_type t$fun_1fb5d91;
int haxe_io_Input_readUInt16(haxe__io__Input);
int format_tga_Reader_parsePixel2(format__tga__Reader,int,bool);
int haxe_io_Input_readUInt24(haxe__io__Input);
int format_tga_Reader_parsePixel3(format__tga__Reader,int,bool);
int haxe_io_Input_readInt32(haxe__io__Input);
int format_tga_Reader_parsePixel4(format__tga__Reader,int,bool);
int format_tga_Reader_parsePixelGreyAlpha(format__tga__Reader,int,bool);

void format_tga_Reader_new(format__tga__Reader r0,haxe__io__Input r1) {
	bool r2;
	r0->i = r1;
	if( r1 == NULL ) hl_null_access();
	r2 = false;
	r2 = haxe_io_Input_set_bigEndian(r1,r2);
	return;
}

vvirtual* format_tga_Reader_read(format__tga__Reader r0) {
	String r4;
	vvirtual *r3, *r8;
	venum *r6;
	hl__types__ArrayBytes_Int r7, r9;
	vdynamic *r10;
	haxe__io__Input r2;
	int r1, r5;
	r2 = r0->i;
	if( r2 == NULL ) hl_null_access();
	r1 = ((int (*)(haxe__io__Input))r2->$type->vobj_proto[0])(r2);
	r3 = format_tga_Reader_readHeader(r0);
	r5 = 0;
	if( r1 != r5 ) goto label$d29525c_2_8;
	r4 = (String)s$;
	goto label$d29525c_2_12;
	label$d29525c_2_8:
	r2 = r0->i;
	if( r2 == NULL ) hl_null_access();
	r6 = NULL;
	r4 = haxe_io_Input_readString(r2,r1,r6);
	label$d29525c_2_12:
	r7 = format_tga_Reader_readColorMapData(r0,r3);
	r8 = hl_alloc_virtual(&t$vrt_66ea910);
	if( hl_vfields(r8)[2] ) *(vvirtual**)(hl_vfields(r8)[2]) = (vvirtual*)r3; else hl_dyn_setp(r8->value,-50329203/*header*/,&t$vrt_4a69d90,r3);
	if( hl_vfields(r8)[4] ) *(String*)(hl_vfields(r8)[4]) = (String)r4; else hl_dyn_setp(r8->value,-512480367/*imageId*/,&t$String,r4);
	if( hl_vfields(r8)[0] ) *(hl__types__ArrayBytes_Int*)(hl_vfields(r8)[0]) = (hl__types__ArrayBytes_Int)r7; else hl_dyn_setp(r8->value,280364237/*colorMapData*/,&t$hl_types_ArrayBytes_Int,r7);
	r9 = format_tga_Reader_readImageData(r0,r3,r7);
	if( hl_vfields(r8)[3] ) *(hl__types__ArrayBytes_Int*)(hl_vfields(r8)[3]) = (hl__types__ArrayBytes_Int)r9; else hl_dyn_setp(r8->value,77065130/*imageData*/,&t$hl_types_ArrayBytes_Int,r9);
	r10 = NULL;
	if( hl_vfields(r8)[1] ) *(vdynamic**)(hl_vfields(r8)[1]) = (vdynamic*)r10; else hl_dyn_setp(r8->value,-491794038/*developerData*/,&t$_dyn,r10);
	return r8;
}

vvirtual* format_tga_Reader_readHeader(format__tga__Reader r0) {
	vvirtual *r17;
	venum *r5, *r16;
	haxe__io__Input r2;
	int r1, r3, r4, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15;
	r2 = r0->i;
	if( r2 == NULL ) hl_null_access();
	r1 = ((int (*)(haxe__io__Input))r2->$type->vobj_proto[0])(r2);
	r2 = r0->i;
	if( r2 == NULL ) hl_null_access();
	r3 = ((int (*)(haxe__io__Input))r2->$type->vobj_proto[0])(r2);
	switch(r3) {
		default:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			r5 = hl_alloc_enum(&t$format_tga_ImageType,7);
			((format_tga_ImageType_Unknown*)r5)->p0 = r3;
			goto label$d29525c_3_22;
		case 0:
			r5 = (venum*)g$format_tga_ImageType_NoImage;
			goto label$d29525c_3_22;
		case 1:
			r5 = (venum*)g$af2eafa;
			goto label$d29525c_3_22;
		case 2:
			r5 = (venum*)g$4bd463c;
			goto label$d29525c_3_22;
		case 3:
			r5 = (venum*)g$2bdd130;
			goto label$d29525c_3_22;
		case 9:
			r5 = (venum*)g$085a3bd;
			goto label$d29525c_3_22;
		case 10:
			r5 = (venum*)g$7ca9e9c;
			goto label$d29525c_3_22;
		case 11:
			r5 = (venum*)g$0227eec;
	}
	label$d29525c_3_22:
	r2 = r0->i;
	if( r2 == NULL ) hl_null_access();
	r4 = haxe_io_Input_readInt16(r2);
	r2 = r0->i;
	if( r2 == NULL ) hl_null_access();
	r6 = haxe_io_Input_readInt16(r2);
	r2 = r0->i;
	if( r2 == NULL ) hl_null_access();
	r7 = ((int (*)(haxe__io__Input))r2->$type->vobj_proto[0])(r2);
	r2 = r0->i;
	if( r2 == NULL ) hl_null_access();
	r8 = haxe_io_Input_readInt16(r2);
	r2 = r0->i;
	if( r2 == NULL ) hl_null_access();
	r9 = haxe_io_Input_readInt16(r2);
	r2 = r0->i;
	if( r2 == NULL ) hl_null_access();
	r10 = haxe_io_Input_readInt16(r2);
	r2 = r0->i;
	if( r2 == NULL ) hl_null_access();
	r11 = haxe_io_Input_readInt16(r2);
	r2 = r0->i;
	if( r2 == NULL ) hl_null_access();
	r12 = ((int (*)(haxe__io__Input))r2->$type->vobj_proto[0])(r2);
	r2 = r0->i;
	if( r2 == NULL ) hl_null_access();
	r13 = ((int (*)(haxe__io__Input))r2->$type->vobj_proto[0])(r2);
	r15 = 48;
	r14 = r13 & r15;
	switch(r14) {
		default:
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			r16 = (venum*)g$288eed8;
			goto label$d29525c_3_59;
		case 16:
			r16 = (venum*)g$0dab16b;
			goto label$d29525c_3_59;
		case 32:
			r16 = (venum*)g$format_tga_ImageOrigin_TopLeft;
			goto label$d29525c_3_59;
		case 48:
			r16 = (venum*)g$format_tga_ImageOrigin_TopRight;
	}
	label$d29525c_3_59:
	r17 = hl_alloc_virtual(&t$vrt_4a69d90);
	if( hl_vfields(r17)[5] ) *(int*)(hl_vfields(r17)[5]) = (int)r1; else hl_dyn_seti(r17->value,458989917/*colorMapType*/,&t$_i32,r1);
	if( hl_vfields(r17)[8] ) *(venum**)(hl_vfields(r17)[8]) = (venum*)r5; else hl_dyn_setp(r17->value,255690810/*imageType*/,&t$format_tga_ImageType,r5);
	if( hl_vfields(r17)[3] ) *(int*)(hl_vfields(r17)[3]) = (int)r4; else hl_dyn_seti(r17->value,257510570/*colorMapFirstIndex*/,&t$_i32,r4);
	if( hl_vfields(r17)[4] ) *(int*)(hl_vfields(r17)[4]) = (int)r6; else hl_dyn_seti(r17->value,-376202561/*colorMapLength*/,&t$_i32,r6);
	if( hl_vfields(r17)[2] ) *(int*)(hl_vfields(r17)[2]) = (int)r7; else hl_dyn_seti(r17->value,-294531691/*colorMapEntrySize*/,&t$_i32,r7);
	if( hl_vfields(r17)[10] ) *(int*)(hl_vfields(r17)[10]) = (int)r8; else hl_dyn_seti(r17->value,-39503746/*xOrigin*/,&t$_i32,r8);
	if( hl_vfields(r17)[11] ) *(int*)(hl_vfields(r17)[11]) = (int)r9; else hl_dyn_seti(r17->value,121286596/*yOrigin*/,&t$_i32,r9);
	if( hl_vfields(r17)[9] ) *(int*)(hl_vfields(r17)[9]) = (int)r10; else hl_dyn_seti(r17->value,-362629759/*width*/,&t$_i32,r10);
	if( hl_vfields(r17)[6] ) *(int*)(hl_vfields(r17)[6]) = (int)r11; else hl_dyn_seti(r17->value,38537191/*height*/,&t$_i32,r11);
	if( hl_vfields(r17)[1] ) *(int*)(hl_vfields(r17)[1]) = (int)r12; else hl_dyn_seti(r17->value,485379471/*bitsPerPixel*/,&t$_i32,r12);
	r15 = 15;
	r14 = r13 & r15;
	if( hl_vfields(r17)[0] ) *(int*)(hl_vfields(r17)[0]) = (int)r14; else hl_dyn_seti(r17->value,-200354399/*alphaChannelBits*/,&t$_i32,r14);
	if( hl_vfields(r17)[7] ) *(venum**)(hl_vfields(r17)[7]) = (venum*)r16; else hl_dyn_setp(r17->value,-213835246/*imageOrigin*/,&t$format_tga_ImageOrigin,r16);
	return r17;
}

hl__types__ArrayBytes_Int format_tga_Reader_readColorMapData(format__tga__Reader r0,vvirtual* r1) {
	bool r6;
	hl__types__ArrayBytes_Int r4;
	int r2, r3, r5;
	if( r1 == NULL ) hl_null_access();
	r2 = hl_vfields(r1)[5] ? (*(int*)(hl_vfields(r1)[5])) : (int)hl_dyn_geti(r1->value,458989917/*colorMapType*/,&t$_i32);
	r3 = 0;
	if( r2 != r3 ) goto label$d29525c_4_6;
	r4 = NULL;
	return r4;
	label$d29525c_4_6:
	r2 = hl_vfields(r1)[2] ? (*(int*)(hl_vfields(r1)[2])) : (int)hl_dyn_geti(r1->value,-294531691/*colorMapEntrySize*/,&t$_i32);
	r3 = hl_vfields(r1)[4] ? (*(int*)(hl_vfields(r1)[4])) : (int)hl_dyn_geti(r1->value,-376202561/*colorMapLength*/,&t$_i32);
	r5 = hl_vfields(r1)[0] ? (*(int*)(hl_vfields(r1)[0])) : (int)hl_dyn_geti(r1->value,-200354399/*alphaChannelBits*/,&t$_i32);
	r6 = false;
	r4 = format_tga_Reader_readPixels(r0,r2,r3,r5,r6);
	return r4;
}

hl__types__ArrayBytes_Int format_tga_Reader_readImageData(format__tga__Reader r0,vvirtual* r1,hl__types__ArrayBytes_Int r2) {
	String r6;
	venum *r4;
	bool r10;
	hl__types__ArrayBytes_Int r7;
	vdynamic *r5;
	int r3, r8, r9;
	if( r1 == NULL ) hl_null_access();
	r4 = hl_vfields(r1)[8] ? (*(venum**)(hl_vfields(r1)[8])) : (venum*)hl_dyn_getp(r1->value,255690810/*imageType*/,&t$format_tga_ImageType);
	if( r4 == NULL ) hl_null_access();
	r3 = HL__ENUM_INDEX__(r4);
	switch(r3) {
		default:
			r6 = (String)s$Unsupported_image_data_type_;
			r5 = haxe_Exception_thrown(((vdynamic*)r6));
			hl_throw((vdynamic*)r5);
		case 0:
			r7 = NULL;
			return r7;
		case 1:
			r3 = hl_vfields(r1)[1] ? (*(int*)(hl_vfields(r1)[1])) : (int)hl_dyn_geti(r1->value,485379471/*bitsPerPixel*/,&t$_i32);
			r8 = hl_vfields(r1)[9] ? (*(int*)(hl_vfields(r1)[9])) : (int)hl_dyn_geti(r1->value,-362629759/*width*/,&t$_i32);
			r9 = hl_vfields(r1)[6] ? (*(int*)(hl_vfields(r1)[6])) : (int)hl_dyn_geti(r1->value,38537191/*height*/,&t$_i32);
			r8 = r8 * r9;
			r9 = hl_vfields(r1)[3] ? (*(int*)(hl_vfields(r1)[3])) : (int)hl_dyn_geti(r1->value,257510570/*colorMapFirstIndex*/,&t$_i32);
			r10 = false;
			r7 = format_tga_Reader_readIndexes(r0,r3,r8,r2,r9,r10);
			return r7;
		case 2:
			r3 = hl_vfields(r1)[1] ? (*(int*)(hl_vfields(r1)[1])) : (int)hl_dyn_geti(r1->value,485379471/*bitsPerPixel*/,&t$_i32);
			r8 = hl_vfields(r1)[9] ? (*(int*)(hl_vfields(r1)[9])) : (int)hl_dyn_geti(r1->value,-362629759/*width*/,&t$_i32);
			r9 = hl_vfields(r1)[6] ? (*(int*)(hl_vfields(r1)[6])) : (int)hl_dyn_geti(r1->value,38537191/*height*/,&t$_i32);
			r8 = r8 * r9;
			r9 = hl_vfields(r1)[0] ? (*(int*)(hl_vfields(r1)[0])) : (int)hl_dyn_geti(r1->value,-200354399/*alphaChannelBits*/,&t$_i32);
			r10 = false;
			r7 = format_tga_Reader_readPixels(r0,r3,r8,r9,r10);
			return r7;
		case 3:
			r3 = hl_vfields(r1)[1] ? (*(int*)(hl_vfields(r1)[1])) : (int)hl_dyn_geti(r1->value,485379471/*bitsPerPixel*/,&t$_i32);
			r8 = hl_vfields(r1)[9] ? (*(int*)(hl_vfields(r1)[9])) : (int)hl_dyn_geti(r1->value,-362629759/*width*/,&t$_i32);
			r9 = hl_vfields(r1)[6] ? (*(int*)(hl_vfields(r1)[6])) : (int)hl_dyn_geti(r1->value,38537191/*height*/,&t$_i32);
			r8 = r8 * r9;
			r9 = hl_vfields(r1)[0] ? (*(int*)(hl_vfields(r1)[0])) : (int)hl_dyn_geti(r1->value,-200354399/*alphaChannelBits*/,&t$_i32);
			r10 = false;
			r7 = format_tga_Reader_readMono(r0,r3,r8,r9,r10);
			return r7;
		case 4:
			r3 = hl_vfields(r1)[1] ? (*(int*)(hl_vfields(r1)[1])) : (int)hl_dyn_geti(r1->value,485379471/*bitsPerPixel*/,&t$_i32);
			r8 = hl_vfields(r1)[9] ? (*(int*)(hl_vfields(r1)[9])) : (int)hl_dyn_geti(r1->value,-362629759/*width*/,&t$_i32);
			r9 = hl_vfields(r1)[6] ? (*(int*)(hl_vfields(r1)[6])) : (int)hl_dyn_geti(r1->value,38537191/*height*/,&t$_i32);
			r8 = r8 * r9;
			r9 = hl_vfields(r1)[3] ? (*(int*)(hl_vfields(r1)[3])) : (int)hl_dyn_geti(r1->value,257510570/*colorMapFirstIndex*/,&t$_i32);
			r10 = true;
			r7 = format_tga_Reader_readIndexes(r0,r3,r8,r2,r9,r10);
			return r7;
		case 5:
			r3 = hl_vfields(r1)[1] ? (*(int*)(hl_vfields(r1)[1])) : (int)hl_dyn_geti(r1->value,485379471/*bitsPerPixel*/,&t$_i32);
			r8 = hl_vfields(r1)[9] ? (*(int*)(hl_vfields(r1)[9])) : (int)hl_dyn_geti(r1->value,-362629759/*width*/,&t$_i32);
			r9 = hl_vfields(r1)[6] ? (*(int*)(hl_vfields(r1)[6])) : (int)hl_dyn_geti(r1->value,38537191/*height*/,&t$_i32);
			r8 = r8 * r9;
			r9 = hl_vfields(r1)[0] ? (*(int*)(hl_vfields(r1)[0])) : (int)hl_dyn_geti(r1->value,-200354399/*alphaChannelBits*/,&t$_i32);
			r10 = true;
			r7 = format_tga_Reader_readPixels(r0,r3,r8,r9,r10);
			return r7;
		case 6:
			r3 = hl_vfields(r1)[1] ? (*(int*)(hl_vfields(r1)[1])) : (int)hl_dyn_geti(r1->value,485379471/*bitsPerPixel*/,&t$_i32);
			r8 = hl_vfields(r1)[9] ? (*(int*)(hl_vfields(r1)[9])) : (int)hl_dyn_geti(r1->value,-362629759/*width*/,&t$_i32);
			r9 = hl_vfields(r1)[6] ? (*(int*)(hl_vfields(r1)[6])) : (int)hl_dyn_geti(r1->value,38537191/*height*/,&t$_i32);
			r8 = r8 * r9;
			r9 = hl_vfields(r1)[0] ? (*(int*)(hl_vfields(r1)[0])) : (int)hl_dyn_geti(r1->value,-200354399/*alphaChannelBits*/,&t$_i32);
			r10 = true;
			r7 = format_tga_Reader_readMono(r0,r3,r8,r9,r10);
			return r7;
	}
}

hl__types__ArrayBytes_Int format_tga_Reader_readPixels(format__tga__Reader r0,int r1,int r2,int r3,bool r4) {
	String r14;
	bool r13;
	hl__types__ArrayBytes_Int r5, r10;
	vclosure *r15, *r16, *r18, *r19;
	haxe__io__Input r17;
	vdynamic *r11;
	int r7, r9, r12, r20, r21, r22, r23;
	vbyte *r6;
	r7 = 0;
	r6 = hl_alloc_bytes(r7);
	r7 = 0;
	r7 = 0;
	r5 = hl_types_ArrayBase_allocI32(r6,r7);
	r9 = 0;
	if( r9 >= r2 ) goto label$d29525c_6_19;
	if( r5 == NULL ) hl_null_access();
	r9 = 1;
	r7 = r2 - r9;
	r11 = NULL;
	r9 = (int)hl_dyn_casti(&r11,&t$_dyn,&t$_i32);
	r12 = r5->length;
	if( ((unsigned)r7) < ((unsigned)r12) ) goto label$d29525c_6_15;
	hl_types_ArrayBytes_Int___expand(r5,r7);
	label$d29525c_6_15:
	r6 = r5->bytes;
	r12 = 2;
	r12 = r7 << r12;
	*(int*)(r6 + r12) = r9;
	label$d29525c_6_19:
	r10 = r5;
	r9 = 0;
	if( r3 != r9 ) goto label$d29525c_6_24;
	r13 = false;
	goto label$d29525c_6_25;
	label$d29525c_6_24:
	r13 = true;
	label$d29525c_6_25:
	r9 = 3;
	r7 = r9 == 0 ? 0 : r1 / r9;
	r12 = 8;
	if( r12 >= r7 ) goto label$d29525c_6_30;
	r9 = 8;
	label$d29525c_6_30:
	switch(r1) {
		default:
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
			r14 = (String)s$566b2bf;
			r11 = haxe_Exception_thrown(((vdynamic*)r14));
			hl_throw((vdynamic*)r11);
		case 8:
			r17 = r0->i;
			if( r17 == NULL ) hl_null_access();
			r16 = hl_alloc_closure_ptr(&t$fun_cf565eb,r17->$type->vobj_proto[0],r17);
			r15 = r16;
			r19 = hl_alloc_closure_ptr(&t$fun_1fb5d91,format_tga_Reader_parsePixel1,r0);
			r18 = r19;
			goto label$d29525c_6_61;
		case 16:
			r17 = r0->i;
			if( r17 == NULL ) hl_null_access();
			r16 = hl_alloc_closure_ptr(&t$fun_cf565eb,haxe_io_Input_readUInt16,r17);
			r15 = r16;
			r19 = hl_alloc_closure_ptr(&t$fun_1fb5d91,format_tga_Reader_parsePixel2,r0);
			r18 = r19;
			goto label$d29525c_6_61;
		case 24:
			r17 = r0->i;
			if( r17 == NULL ) hl_null_access();
			r16 = hl_alloc_closure_ptr(&t$fun_cf565eb,haxe_io_Input_readUInt24,r17);
			r15 = r16;
			r19 = hl_alloc_closure_ptr(&t$fun_1fb5d91,format_tga_Reader_parsePixel3,r0);
			r18 = r19;
			goto label$d29525c_6_61;
		case 32:
			r17 = r0->i;
			if( r17 == NULL ) hl_null_access();
			r16 = hl_alloc_closure_ptr(&t$fun_cf565eb,haxe_io_Input_readInt32,r17);
			r15 = r16;
			r19 = hl_alloc_closure_ptr(&t$fun_1fb5d91,format_tga_Reader_parsePixel4,r0);
			r18 = r19;
	}
	label$d29525c_6_61:
	if( !r4 ) goto label$d29525c_6_120;
	r9 = 0;
	label$d29525c_6_63:
	if( r9 >= r2 ) goto label$d29525c_6_119;
	r17 = r0->i;
	if( r17 == NULL ) hl_null_access();
	r20 = ((int (*)(haxe__io__Input))r17->$type->vobj_proto[0])(r17);
	r12 = r20;
	r21 = 128;
	r20 = r20 & r21;
	r21 = 0;
	if( r20 == r21 ) goto label$d29525c_6_96;
	r21 = 127;
	r20 = r12 & r21;
	r12 = r20;
	if( r18 == NULL ) hl_null_access();
	if( r15 == NULL ) hl_null_access();
	r20 = r15->hasValue ? ((int (*)(vdynamic*))r15->fun)((vdynamic*)r15->value) : ((int (*)(void))r15->fun)();
	r20 = r18->hasValue ? ((int (*)(vdynamic*,int,bool))r18->fun)((vdynamic*)r18->value,r20,r13) : ((int (*)(int,bool))r18->fun)(r20,r13);
	label$d29525c_6_80:
	r22 = 0;
	if( r12 < r22 ) goto label$d29525c_6_95;
	if( r10 == NULL ) hl_null_access();
	r21 = r9;
	++r9;
	r23 = r10->length;
	if( ((unsigned)r21) < ((unsigned)r23) ) goto label$d29525c_6_89;
	hl_types_ArrayBytes_Int___expand(r10,r21);
	label$d29525c_6_89:
	r6 = r10->bytes;
	r23 = 2;
	r23 = r21 << r23;
	*(int*)(r6 + r23) = r20;
	--r12;
	goto label$d29525c_6_80;
	label$d29525c_6_95:
	goto label$d29525c_6_118;
	label$d29525c_6_96:
	r21 = 127;
	r20 = r12 & r21;
	r12 = r20;
	label$d29525c_6_99:
	r21 = 0;
	if( r12 < r21 ) goto label$d29525c_6_118;
	if( r10 == NULL ) hl_null_access();
	r20 = r9;
	++r9;
	if( r18 == NULL ) hl_null_access();
	if( r15 == NULL ) hl_null_access();
	r21 = r15->hasValue ? ((int (*)(vdynamic*))r15->fun)((vdynamic*)r15->value) : ((int (*)(void))r15->fun)();
	r21 = r18->hasValue ? ((int (*)(vdynamic*,int,bool))r18->fun)((vdynamic*)r18->value,r21,r13) : ((int (*)(int,bool))r18->fun)(r21,r13);
	r22 = r10->length;
	if( ((unsigned)r20) < ((unsigned)r22) ) goto label$d29525c_6_112;
	hl_types_ArrayBytes_Int___expand(r10,r20);
	label$d29525c_6_112:
	r6 = r10->bytes;
	r22 = 2;
	r22 = r20 << r22;
	*(int*)(r6 + r22) = r21;
	--r12;
	goto label$d29525c_6_99;
	label$d29525c_6_118:
	goto label$d29525c_6_63;
	label$d29525c_6_119:
	goto label$d29525c_6_139;
	label$d29525c_6_120:
	r9 = 0;
	r12 = r2;
	label$d29525c_6_122:
	if( r9 >= r12 ) goto label$d29525c_6_139;
	r20 = r9;
	++r9;
	if( r10 == NULL ) hl_null_access();
	if( r18 == NULL ) hl_null_access();
	if( r15 == NULL ) hl_null_access();
	r22 = r15->hasValue ? ((int (*)(vdynamic*))r15->fun)((vdynamic*)r15->value) : ((int (*)(void))r15->fun)();
	r22 = r18->hasValue ? ((int (*)(vdynamic*,int,bool))r18->fun)((vdynamic*)r18->value,r22,r13) : ((int (*)(int,bool))r18->fun)(r22,r13);
	r23 = r10->length;
	if( ((unsigned)r20) < ((unsigned)r23) ) goto label$d29525c_6_134;
	hl_types_ArrayBytes_Int___expand(r10,r20);
	label$d29525c_6_134:
	r6 = r10->bytes;
	r23 = 2;
	r23 = r20 << r23;
	*(int*)(r6 + r23) = r22;
	goto label$d29525c_6_122;
	label$d29525c_6_139:
	return r10;
}

hl__types__ArrayBytes_Int format_tga_Reader_readMono(format__tga__Reader r0,int r1,int r2,int r3,bool r4) {
	String r14;
	bool r13;
	hl__types__ArrayBytes_Int r5, r10;
	vclosure *r15, *r16, *r18, *r19;
	haxe__io__Input r17;
	vdynamic *r11;
	int r7, r9, r12, r20, r21, r22;
	vbyte *r6;
	r7 = 0;
	r6 = hl_alloc_bytes(r7);
	r7 = 0;
	r7 = 0;
	r5 = hl_types_ArrayBase_allocI32(r6,r7);
	r9 = 0;
	if( r9 >= r2 ) goto label$d29525c_7_19;
	if( r5 == NULL ) hl_null_access();
	r9 = 1;
	r7 = r2 - r9;
	r11 = NULL;
	r9 = (int)hl_dyn_casti(&r11,&t$_dyn,&t$_i32);
	r12 = r5->length;
	if( ((unsigned)r7) < ((unsigned)r12) ) goto label$d29525c_7_15;
	hl_types_ArrayBytes_Int___expand(r5,r7);
	label$d29525c_7_15:
	r6 = r5->bytes;
	r12 = 2;
	r12 = r7 << r12;
	*(int*)(r6 + r12) = r9;
	label$d29525c_7_19:
	r10 = r5;
	r9 = 0;
	if( r3 != r9 ) goto label$d29525c_7_24;
	r13 = false;
	goto label$d29525c_7_25;
	label$d29525c_7_24:
	r13 = true;
	label$d29525c_7_25:
	switch(r1) {
		default:
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
			r14 = (String)s$566b2bf;
			r11 = haxe_Exception_thrown(((vdynamic*)r14));
			hl_throw((vdynamic*)r11);
		case 8:
			r17 = r0->i;
			if( r17 == NULL ) hl_null_access();
			r16 = hl_alloc_closure_ptr(&t$fun_cf565eb,r17->$type->vobj_proto[0],r17);
			r15 = r16;
			r19 = hl_alloc_closure_ptr(&t$fun_1fb5d91,format_tga_Reader_parsePixel1,r0);
			r18 = r19;
			goto label$d29525c_7_42;
		case 16:
			r17 = r0->i;
			if( r17 == NULL ) hl_null_access();
			r16 = hl_alloc_closure_ptr(&t$fun_cf565eb,haxe_io_Input_readUInt16,r17);
			r15 = r16;
			r19 = hl_alloc_closure_ptr(&t$fun_1fb5d91,format_tga_Reader_parsePixelGreyAlpha,r0);
			r18 = r19;
	}
	label$d29525c_7_42:
	if( !r4 ) goto label$d29525c_7_101;
	r7 = 0;
	label$d29525c_7_44:
	if( r7 >= r2 ) goto label$d29525c_7_100;
	r17 = r0->i;
	if( r17 == NULL ) hl_null_access();
	r12 = ((int (*)(haxe__io__Input))r17->$type->vobj_proto[0])(r17);
	r9 = r12;
	r20 = 128;
	r12 = r12 & r20;
	r20 = 0;
	if( r12 == r20 ) goto label$d29525c_7_77;
	r20 = 127;
	r12 = r9 & r20;
	r9 = r12;
	if( r18 == NULL ) hl_null_access();
	if( r15 == NULL ) hl_null_access();
	r12 = r15->hasValue ? ((int (*)(vdynamic*))r15->fun)((vdynamic*)r15->value) : ((int (*)(void))r15->fun)();
	r12 = r18->hasValue ? ((int (*)(vdynamic*,int,bool))r18->fun)((vdynamic*)r18->value,r12,r13) : ((int (*)(int,bool))r18->fun)(r12,r13);
	label$d29525c_7_61:
	r21 = 0;
	if( r9 < r21 ) goto label$d29525c_7_76;
	if( r10 == NULL ) hl_null_access();
	r20 = r7;
	++r7;
	r22 = r10->length;
	if( ((unsigned)r20) < ((unsigned)r22) ) goto label$d29525c_7_70;
	hl_types_ArrayBytes_Int___expand(r10,r20);
	label$d29525c_7_70:
	r6 = r10->bytes;
	r22 = 2;
	r22 = r20 << r22;
	*(int*)(r6 + r22) = r12;
	--r9;
	goto label$d29525c_7_61;
	label$d29525c_7_76:
	goto label$d29525c_7_99;
	label$d29525c_7_77:
	r20 = 127;
	r12 = r9 & r20;
	r9 = r12;
	label$d29525c_7_80:
	r20 = 0;
	if( r9 < r20 ) goto label$d29525c_7_99;
	if( r10 == NULL ) hl_null_access();
	r12 = r7;
	++r7;
	if( r18 == NULL ) hl_null_access();
	if( r15 == NULL ) hl_null_access();
	r20 = r15->hasValue ? ((int (*)(vdynamic*))r15->fun)((vdynamic*)r15->value) : ((int (*)(void))r15->fun)();
	r20 = r18->hasValue ? ((int (*)(vdynamic*,int,bool))r18->fun)((vdynamic*)r18->value,r20,r13) : ((int (*)(int,bool))r18->fun)(r20,r13);
	r21 = r10->length;
	if( ((unsigned)r12) < ((unsigned)r21) ) goto label$d29525c_7_93;
	hl_types_ArrayBytes_Int___expand(r10,r12);
	label$d29525c_7_93:
	r6 = r10->bytes;
	r21 = 2;
	r21 = r12 << r21;
	*(int*)(r6 + r21) = r20;
	--r9;
	goto label$d29525c_7_80;
	label$d29525c_7_99:
	goto label$d29525c_7_44;
	label$d29525c_7_100:
	goto label$d29525c_7_120;
	label$d29525c_7_101:
	r7 = 0;
	r9 = r2;
	label$d29525c_7_103:
	if( r7 >= r9 ) goto label$d29525c_7_120;
	r12 = r7;
	++r7;
	if( r10 == NULL ) hl_null_access();
	if( r18 == NULL ) hl_null_access();
	if( r15 == NULL ) hl_null_access();
	r21 = r15->hasValue ? ((int (*)(vdynamic*))r15->fun)((vdynamic*)r15->value) : ((int (*)(void))r15->fun)();
	r21 = r18->hasValue ? ((int (*)(vdynamic*,int,bool))r18->fun)((vdynamic*)r18->value,r21,r13) : ((int (*)(int,bool))r18->fun)(r21,r13);
	r22 = r10->length;
	if( ((unsigned)r12) < ((unsigned)r22) ) goto label$d29525c_7_115;
	hl_types_ArrayBytes_Int___expand(r10,r12);
	label$d29525c_7_115:
	r6 = r10->bytes;
	r22 = 2;
	r22 = r12 << r22;
	*(int*)(r6 + r22) = r21;
	goto label$d29525c_7_103;
	label$d29525c_7_120:
	return r10;
}

hl__types__ArrayBytes_Int format_tga_Reader_readIndexes(format__tga__Reader r0,int r1,int r2,hl__types__ArrayBytes_Int r3,int r4,bool r5) {
	String r14;
	hl__types__ArrayBytes_Int r6, r11;
	vclosure *r15, *r16;
	haxe__io__Input r17;
	vdynamic *r12;
	int r8, r10, r13, r18, r19, r20;
	vbyte *r7;
	r8 = 0;
	r7 = hl_alloc_bytes(r8);
	r8 = 0;
	r8 = 0;
	r6 = hl_types_ArrayBase_allocI32(r7,r8);
	r10 = 0;
	if( r10 >= r2 ) goto label$d29525c_8_19;
	if( r6 == NULL ) hl_null_access();
	r10 = 1;
	r8 = r2 - r10;
	r12 = NULL;
	r10 = (int)hl_dyn_casti(&r12,&t$_dyn,&t$_i32);
	r13 = r6->length;
	if( ((unsigned)r8) < ((unsigned)r13) ) goto label$d29525c_8_15;
	hl_types_ArrayBytes_Int___expand(r6,r8);
	label$d29525c_8_15:
	r7 = r6->bytes;
	r13 = 2;
	r13 = r8 << r13;
	*(int*)(r7 + r13) = r10;
	label$d29525c_8_19:
	r11 = r6;
	switch(r1) {
		default:
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
			r14 = (String)s$566b2bf;
			r12 = haxe_Exception_thrown(((vdynamic*)r14));
			hl_throw((vdynamic*)r12);
		case 8:
			r17 = r0->i;
			if( r17 == NULL ) hl_null_access();
			r16 = hl_alloc_closure_ptr(&t$fun_cf565eb,r17->$type->vobj_proto[0],r17);
			r15 = r16;
			goto label$d29525c_8_43;
		case 16:
			r17 = r0->i;
			if( r17 == NULL ) hl_null_access();
			r16 = hl_alloc_closure_ptr(&t$fun_cf565eb,haxe_io_Input_readUInt16,r17);
			r15 = r16;
			goto label$d29525c_8_43;
		case 24:
			r17 = r0->i;
			if( r17 == NULL ) hl_null_access();
			r16 = hl_alloc_closure_ptr(&t$fun_cf565eb,haxe_io_Input_readUInt24,r17);
			r15 = r16;
			goto label$d29525c_8_43;
		case 32:
			r17 = r0->i;
			if( r17 == NULL ) hl_null_access();
			r16 = hl_alloc_closure_ptr(&t$fun_cf565eb,haxe_io_Input_readInt32,r17);
			r15 = r16;
	}
	label$d29525c_8_43:
	if( !r5 ) goto label$d29525c_8_118;
	r8 = 0;
	label$d29525c_8_45:
	if( r8 >= r2 ) goto label$d29525c_8_117;
	r17 = r0->i;
	if( r17 == NULL ) hl_null_access();
	r13 = ((int (*)(haxe__io__Input))r17->$type->vobj_proto[0])(r17);
	r10 = r13;
	r18 = 128;
	r13 = r13 & r18;
	r18 = 0;
	if( r13 == r18 ) goto label$d29525c_8_86;
	r18 = 127;
	r13 = r10 & r18;
	r10 = r13;
	if( r3 == NULL ) hl_null_access();
	if( r15 == NULL ) hl_null_access();
	r18 = r15->hasValue ? ((int (*)(vdynamic*))r15->fun)((vdynamic*)r15->value) : ((int (*)(void))r15->fun)();
	r13 = r4 + r18;
	r18 = r3->length;
	if( ((unsigned)r13) < ((unsigned)r18) ) goto label$d29525c_8_66;
	r13 = 0;
	goto label$d29525c_8_70;
	label$d29525c_8_66:
	r7 = r3->bytes;
	r18 = 2;
	r18 = r13 << r18;
	r13 = *(int*)(r7 + r18);
	label$d29525c_8_70:
	r19 = 0;
	if( r10 < r19 ) goto label$d29525c_8_85;
	if( r11 == NULL ) hl_null_access();
	r18 = r8;
	++r8;
	r20 = r11->length;
	if( ((unsigned)r18) < ((unsigned)r20) ) goto label$d29525c_8_79;
	hl_types_ArrayBytes_Int___expand(r11,r18);
	label$d29525c_8_79:
	r7 = r11->bytes;
	r20 = 2;
	r20 = r18 << r20;
	*(int*)(r7 + r20) = r13;
	--r10;
	goto label$d29525c_8_70;
	label$d29525c_8_85:
	goto label$d29525c_8_116;
	label$d29525c_8_86:
	r18 = 127;
	r13 = r10 & r18;
	r10 = r13;
	label$d29525c_8_89:
	r18 = 0;
	if( r10 < r18 ) goto label$d29525c_8_116;
	if( r11 == NULL ) hl_null_access();
	r13 = r8;
	++r8;
	if( r3 == NULL ) hl_null_access();
	if( r15 == NULL ) hl_null_access();
	r19 = r15->hasValue ? ((int (*)(vdynamic*))r15->fun)((vdynamic*)r15->value) : ((int (*)(void))r15->fun)();
	r18 = r4 + r19;
	r19 = r3->length;
	if( ((unsigned)r18) < ((unsigned)r19) ) goto label$d29525c_8_103;
	r18 = 0;
	goto label$d29525c_8_107;
	label$d29525c_8_103:
	r7 = r3->bytes;
	r19 = 2;
	r19 = r18 << r19;
	r18 = *(int*)(r7 + r19);
	label$d29525c_8_107:
	r19 = r11->length;
	if( ((unsigned)r13) < ((unsigned)r19) ) goto label$d29525c_8_110;
	hl_types_ArrayBytes_Int___expand(r11,r13);
	label$d29525c_8_110:
	r7 = r11->bytes;
	r19 = 2;
	r19 = r13 << r19;
	*(int*)(r7 + r19) = r18;
	--r10;
	goto label$d29525c_8_89;
	label$d29525c_8_116:
	goto label$d29525c_8_45;
	label$d29525c_8_117:
	goto label$d29525c_8_145;
	label$d29525c_8_118:
	r8 = 0;
	r10 = r2;
	label$d29525c_8_120:
	if( r8 >= r10 ) goto label$d29525c_8_145;
	r13 = r8;
	++r8;
	if( r11 == NULL ) hl_null_access();
	if( r3 == NULL ) hl_null_access();
	if( r15 == NULL ) hl_null_access();
	r20 = r15->hasValue ? ((int (*)(vdynamic*))r15->fun)((vdynamic*)r15->value) : ((int (*)(void))r15->fun)();
	r19 = r4 + r20;
	r20 = r3->length;
	if( ((unsigned)r19) < ((unsigned)r20) ) goto label$d29525c_8_133;
	r19 = 0;
	goto label$d29525c_8_137;
	label$d29525c_8_133:
	r7 = r3->bytes;
	r20 = 2;
	r20 = r19 << r20;
	r19 = *(int*)(r7 + r20);
	label$d29525c_8_137:
	r20 = r11->length;
	if( ((unsigned)r13) < ((unsigned)r20) ) goto label$d29525c_8_140;
	hl_types_ArrayBytes_Int___expand(r11,r13);
	label$d29525c_8_140:
	r7 = r11->bytes;
	r20 = 2;
	r20 = r13 << r20;
	*(int*)(r7 + r20) = r19;
	goto label$d29525c_8_120;
	label$d29525c_8_145:
	return r11;
}

int format_tga_Reader_parsePixel1(format__tga__Reader r0,int r1,bool r2) {
	int r3, r4, r5;
	r4 = 16;
	r3 = r1 << r4;
	r5 = 8;
	r4 = r1 << r5;
	r3 = r3 | r4;
	r3 = r3 | r1;
	return r3;
}

int format_tga_Reader_parsePixelGreyAlpha(format__tga__Reader r0,int r1,bool r2) {
	bool r4;
	int r3, r5, r6;
	if( !r2 ) goto label$d29525c_10_6;
	r5 = 65280;
	r3 = r1 & r5;
	r5 = 16;
	r3 = r3 << r5;
	goto label$d29525c_10_7;
	label$d29525c_10_6:
	r3 = 0;
	label$d29525c_10_7:
	r6 = 255;
	r5 = r1 & r6;
	r4 = false;
	r5 = format_tga_Reader_parsePixel1(r0,r5,r4);
	r3 = r3 | r5;
	return r3;
}

int format_tga_Reader_parsePixel2(format__tga__Reader r0,int r1,bool r2) {
	double r5, r7;
	int r3, r4, r6;
	if( !r2 ) goto label$d29525c_11_9;
	r4 = 32768;
	r3 = r1 & r4;
	r4 = 1;
	if( r3 != r4 ) goto label$d29525c_11_7;
	r3 = -16777216;
	goto label$d29525c_11_8;
	label$d29525c_11_7:
	r3 = 0;
	label$d29525c_11_8:
	goto label$d29525c_11_10;
	label$d29525c_11_9:
	r3 = 0;
	label$d29525c_11_10:
	r6 = 31744;
	r4 = r1 & r6;
	r6 = 10;
	r4 = r4 >> r6;
	r5 = (double)r4;
	r7 = 31.;
	r5 = r5 / r7;
	r7 = 255.;
	r5 = r5 * r7;
	r4 = (int)r5;
	r6 = 16;
	r4 = r4 << r6;
	r3 = r3 | r4;
	r6 = 992;
	r4 = r1 & r6;
	r6 = 5;
	r4 = r4 >> r6;
	r5 = (double)r4;
	r7 = 31.;
	r5 = r5 / r7;
	r7 = 255.;
	r5 = r5 * r7;
	r4 = (int)r5;
	r6 = 8;
	r4 = r4 << r6;
	r3 = r3 | r4;
	r6 = 31;
	r4 = r1 & r6;
	r5 = (double)r4;
	r7 = 31.;
	r5 = r5 / r7;
	r7 = 255.;
	r5 = r5 * r7;
	r4 = (int)r5;
	r3 = r3 | r4;
	return r3;
}

int format_tga_Reader_parsePixel3(format__tga__Reader r0,int r1,bool r2) {
	return r1;
}

int format_tga_Reader_parsePixel4(format__tga__Reader r0,int r1,bool r2) {
	return r1;
}


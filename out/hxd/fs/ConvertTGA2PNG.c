﻿// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <hxd/fs/ConvertTGA2PNG.h>
extern String s$tga;
extern hl_type t$vrt_f85eed7;
extern String s$png;
void hxd_fs_Convert_new(hxd__fs__Convert,vvirtual*,String);
#include <haxe/io/BytesInput.h>
#include <hl/types/ArrayBytes_Int.h>
#include <format/tga/ImageOrigin.h>
#include <format/tga/ImageType.h>
#include <format/tga/Reader.h>
#include <hxd/Pixels.h>
#include <hxd/PixelFormat.h>
extern hl_type t$haxe_io_BytesInput;
haxe__io__Bytes sys_io_File_getBytes(String);
void haxe_io_BytesInput_new(haxe__io__BytesInput,haxe__io__Bytes,vdynamic*,vdynamic*);
extern hl_type t$format_tga_Reader;
#include <haxe/io/Input.h>
void format_tga_Reader_new(format__tga__Reader,haxe__io__Input);
vvirtual* format_tga_Reader_read(format__tga__Reader);
extern hl_type t$vrt_4a69d90;
extern hl_type t$format_tga_ImageType;
extern venum* g$4bd463c;
extern hl_type t$_i32;
extern String s$Not_supported_;
String Std_string(vdynamic*);
String String___add__(String,String);
extern String s$6666cd7;
#include <hl/natives.h>
String String___alloc__(vbyte*,int);
vdynamic* haxe_Exception_thrown(vdynamic*);
extern venum* g$hxd_PixelFormat_ARGB;
hxd__Pixels hxd_Pixels_alloc(int,int,venum*);
hxd__Pixels hxd__Pixels_PixelsARGB_Impl__fromPixels(hxd__Pixels);
extern hl_type t$hl_types_ArrayBytes_Int;
void haxe_io_Bytes_setInt32(haxe__io__Bytes,int,int);
extern hl_type t$format_tga_ImageOrigin;
haxe__io__Bytes hxd_Pixels_toPNG(hxd__Pixels,vdynamic*);
void sys_io_File_saveBytes(String,haxe__io__Bytes);

void hxd_fs_ConvertTGA2PNG_new(hxd__fs__ConvertTGA2PNG r0) {
	String r2;
	vvirtual *r3;
	r2 = (String)s$tga;
	r3 = hl_to_virtual(&t$vrt_f85eed7,(vdynamic*)r2);
	r2 = (String)s$png;
	hxd_fs_Convert_new(((hxd__fs__Convert)r0),r3,r2);
	return;
}

void hxd_fs_ConvertTGA2PNG_convert(hxd__fs__ConvertTGA2PNG r0) {
	String r3, r15;
	hxd__Pixels r18, r22;
	vvirtual *r7, *r10;
	haxe__io__BytesInput r1;
	venum *r9, *r11, *r21, *r34;
	haxe__io__Bytes r2;
	hl__types__ArrayBytes_Int r29;
	int *r16;
	format__tga__Reader r8;
	vdynamic *r4, *r5, *r14;
	vbyte *r17;
	int r12, r13, r19, r20, r23, r24, r25, r26, r27, r28, r30, r31, r32, r33;
	r1 = (haxe__io__BytesInput)hl_alloc_obj(&t$haxe_io_BytesInput);
	r3 = r0->srcPath;
	r2 = sys_io_File_getBytes(r3);
	r4 = NULL;
	r5 = NULL;
	haxe_io_BytesInput_new(r1,r2,r4,r5);
	r8 = (format__tga__Reader)hl_alloc_obj(&t$format_tga_Reader);
	format_tga_Reader_new(r8,((haxe__io__Input)r1));
	r7 = format_tga_Reader_read(r8);
	if( r7 == NULL ) hl_null_access();
	r10 = hl_vfields(r7)[2] ? (*(vvirtual**)(hl_vfields(r7)[2])) : (vvirtual*)hl_dyn_getp(r7->value,-50329203/*header*/,&t$vrt_4a69d90);
	if( r10 == NULL ) hl_null_access();
	r9 = hl_vfields(r10)[8] ? (*(venum**)(hl_vfields(r10)[8])) : (venum*)hl_dyn_getp(r10->value,255690810/*imageType*/,&t$format_tga_ImageType);
	r11 = (venum*)g$4bd463c;
	if( r9 != r11 ) goto label$e30124b_2_20;
	r10 = hl_vfields(r7)[2] ? (*(vvirtual**)(hl_vfields(r7)[2])) : (vvirtual*)hl_dyn_getp(r7->value,-50329203/*header*/,&t$vrt_4a69d90);
	if( r10 == NULL ) hl_null_access();
	r12 = hl_vfields(r10)[1] ? (*(int*)(hl_vfields(r10)[1])) : (int)hl_dyn_geti(r10->value,485379471/*bitsPerPixel*/,&t$_i32);
	r13 = 32;
	if( r12 == r13 ) goto label$e30124b_2_37;
	label$e30124b_2_20:
	r3 = (String)s$Not_supported_;
	r10 = hl_vfields(r7)[2] ? (*(vvirtual**)(hl_vfields(r7)[2])) : (vvirtual*)hl_dyn_getp(r7->value,-50329203/*header*/,&t$vrt_4a69d90);
	if( r10 == NULL ) hl_null_access();
	r9 = hl_vfields(r10)[8] ? (*(venum**)(hl_vfields(r10)[8])) : (venum*)hl_dyn_getp(r10->value,255690810/*imageType*/,&t$format_tga_ImageType);
	r15 = Std_string(((vdynamic*)r9));
	r3 = String___add__(r3,r15);
	r15 = (String)s$6666cd7;
	r3 = String___add__(r3,r15);
	r10 = hl_vfields(r7)[2] ? (*(vvirtual**)(hl_vfields(r7)[2])) : (vvirtual*)hl_dyn_getp(r7->value,-50329203/*header*/,&t$vrt_4a69d90);
	if( r10 == NULL ) hl_null_access();
	r12 = hl_vfields(r10)[1] ? (*(int*)(hl_vfields(r10)[1])) : (int)hl_dyn_geti(r10->value,485379471/*bitsPerPixel*/,&t$_i32);
	r16 = &r12;
	r17 = hl_itos(r12,r16);
	r15 = String___alloc__(r17,r12);
	r3 = String___add__(r3,r15);
	r14 = haxe_Exception_thrown(((vdynamic*)r3));
	hl_throw((vdynamic*)r14);
	label$e30124b_2_37:
	r10 = hl_vfields(r7)[2] ? (*(vvirtual**)(hl_vfields(r7)[2])) : (vvirtual*)hl_dyn_getp(r7->value,-50329203/*header*/,&t$vrt_4a69d90);
	if( r10 == NULL ) hl_null_access();
	r12 = hl_vfields(r10)[9] ? (*(int*)(hl_vfields(r10)[9])) : (int)hl_dyn_geti(r10->value,-362629759/*width*/,&t$_i32);
	r10 = hl_vfields(r7)[2] ? (*(vvirtual**)(hl_vfields(r7)[2])) : (vvirtual*)hl_dyn_getp(r7->value,-50329203/*header*/,&t$vrt_4a69d90);
	if( r10 == NULL ) hl_null_access();
	r13 = hl_vfields(r10)[6] ? (*(int*)(hl_vfields(r10)[6])) : (int)hl_dyn_geti(r10->value,38537191/*height*/,&t$_i32);
	r21 = (venum*)g$hxd_PixelFormat_ARGB;
	r18 = hxd_Pixels_alloc(r12,r13,r21);
	r22 = hxd__Pixels_PixelsARGB_Impl__fromPixels(r18);
	r19 = 0;
	r20 = 0;
	r23 = r13;
	label$e30124b_2_49:
	if( r20 >= r23 ) goto label$e30124b_2_100;
	r24 = r20;
	++r20;
	r25 = 0;
	r26 = r12;
	label$e30124b_2_55:
	if( r25 >= r26 ) goto label$e30124b_2_99;
	r27 = r25;
	++r25;
	if( r7 == NULL ) hl_null_access();
	r29 = hl_vfields(r7)[3] ? (*(hl__types__ArrayBytes_Int*)(hl_vfields(r7)[3])) : (hl__types__ArrayBytes_Int)hl_dyn_getp(r7->value,77065130/*imageData*/,&t$hl_types_ArrayBytes_Int);
	if( r29 == NULL ) hl_null_access();
	r30 = r24 * r12;
	r28 = r27 + r30;
	r30 = r29->length;
	if( ((unsigned)r28) < ((unsigned)r30) ) goto label$e30124b_2_68;
	r28 = 0;
	goto label$e30124b_2_72;
	label$e30124b_2_68:
	r17 = r29->bytes;
	r30 = 2;
	r30 = r28 << r30;
	r28 = *(int*)(r17 + r30);
	label$e30124b_2_72:
	if( r22 == NULL ) hl_null_access();
	r2 = r22->bytes;
	if( r2 == NULL ) hl_null_access();
	r32 = r22->width;
	r31 = r24 * r32;
	r30 = r27 + r31;
	r31 = 2;
	r30 = r30 << r31;
	r31 = r22->offset;
	r30 = r30 + r31;
	r32 = 24;
	r31 = ((unsigned)r28) >> r32;
	r33 = 8;
	r32 = r28 >> r33;
	r33 = 65280;
	r32 = r32 & r33;
	r31 = r31 | r32;
	r33 = 8;
	r32 = r28 << r33;
	r33 = 16711680;
	r32 = r32 & r33;
	r31 = r31 | r32;
	r33 = 24;
	r32 = r28 << r33;
	r31 = r31 | r32;
	haxe_io_Bytes_setInt32(r2,r30,r31);
	goto label$e30124b_2_55;
	label$e30124b_2_99:
	goto label$e30124b_2_49;
	label$e30124b_2_100:
	if( r7 == NULL ) hl_null_access();
	r10 = hl_vfields(r7)[2] ? (*(vvirtual**)(hl_vfields(r7)[2])) : (vvirtual*)hl_dyn_getp(r7->value,-50329203/*header*/,&t$vrt_4a69d90);
	if( r10 == NULL ) hl_null_access();
	r34 = hl_vfields(r10)[7] ? (*(venum**)(hl_vfields(r10)[7])) : (venum*)hl_dyn_getp(r10->value,-213835246/*imageOrigin*/,&t$format_tga_ImageOrigin);
	if( r34 == NULL ) hl_null_access();
	r20 = HL__ENUM_INDEX__(r34);
	switch(r20) {
		default:
		case 1:
			r3 = (String)s$Not_supported_;
			r10 = hl_vfields(r7)[2] ? (*(vvirtual**)(hl_vfields(r7)[2])) : (vvirtual*)hl_dyn_getp(r7->value,-50329203/*header*/,&t$vrt_4a69d90);
			if( r10 == NULL ) hl_null_access();
			r34 = hl_vfields(r10)[7] ? (*(venum**)(hl_vfields(r10)[7])) : (venum*)hl_dyn_getp(r10->value,-213835246/*imageOrigin*/,&t$format_tga_ImageOrigin);
			r15 = Std_string(((vdynamic*)r34));
			r3 = String___add__(r3,r15);
			r14 = haxe_Exception_thrown(((vdynamic*)r3));
			hl_throw((vdynamic*)r14);
		case 0:
			if( r18 == NULL ) hl_null_access();
			r20 = r18->flags;
			r23 = 4;
			r20 = r20 | r23;
			r18->flags = r20;
			goto label$e30124b_2_121;
		case 2:
			break;
	}
	label$e30124b_2_121:
	r3 = r0->dstPath;
	if( r18 == NULL ) hl_null_access();
	r4 = NULL;
	r2 = hxd_Pixels_toPNG(r18,r4);
	sys_io_File_saveBytes(r3,r2);
	return;
}


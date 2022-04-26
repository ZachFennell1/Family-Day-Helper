﻿// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <haxe/zip/Uncompress.h>
#include <hl/natives.h>
#include <haxe/io/BytesDataImpl.h>
extern hl_type t$haxe_io_BytesDataImpl;
void haxe_io_BytesDataImpl_new(haxe__io__BytesDataImpl,vbyte*,int);
extern hl_type t$vrt_0f057c0;
extern hl_type t$_bool;
extern hl_type t$_i32;
#include <haxe/zip/FlushMode.h>
#include <haxe/io/BytesBuffer.h>
#include <haxe/io/Error.h>
extern hl_type t$haxe_zip_Uncompress;
haxe__io__Bytes haxe_io_Bytes_alloc(int);
extern hl_type t$haxe_io_BytesBuffer;
void haxe_io_BytesBuffer_new(haxe__io__BytesBuffer);
extern venum* g$haxe_zip_FlushMode_SYNC;
extern venum* g$haxe_io_Error_OutsideBounds;
vdynamic* haxe_Exception_thrown(vdynamic*);
void haxe_io_BytesBuffer___add(haxe__io__BytesBuffer,vbyte*,int,int);
haxe__io__Bytes haxe_io_BytesBuffer_getBytes(haxe__io__BytesBuffer);

void haxe_zip_Uncompress_new(haxe__zip__Uncompress r0,vdynamic* r1) {
	int r3;
	fmt_zip *r2;
	r3 = r1 ? r1->v.i : 0;
	r2 = fmt_inflate_init(r3);
	r0->s = r2;
	return;
}

vvirtual* haxe_zip_Uncompress_execute(haxe__zip__Uncompress r0,haxe__io__Bytes r1,int r2,haxe__io__Bytes r3,int r4) {
	vvirtual *r18;
	bool r17;
	haxe__io__BytesDataImpl r9, r12;
	int *r15, *r16;
	vbyte *r10, *r13;
	fmt_zip *r8;
	int r5, r7, r11, r14;
	r5 = 0;
	r7 = 0;
	r8 = r0->s;
	r9 = (haxe__io__BytesDataImpl)hl_alloc_obj(&t$haxe_io_BytesDataImpl);
	if( r1 == NULL ) hl_null_access();
	r10 = r1->b;
	r11 = r1->length;
	haxe_io_BytesDataImpl_new(r9,r10,r11);
	if( r9 ) goto label$642caef_2_11;
	r10 = NULL;
	goto label$642caef_2_12;
	label$642caef_2_11:
	r10 = r9->bytes;
	label$642caef_2_12:
	r11 = r1->length;
	r12 = (haxe__io__BytesDataImpl)hl_alloc_obj(&t$haxe_io_BytesDataImpl);
	if( r3 == NULL ) hl_null_access();
	r13 = r3->b;
	r14 = r3->length;
	haxe_io_BytesDataImpl_new(r12,r13,r14);
	if( r12 ) goto label$642caef_2_21;
	r13 = NULL;
	goto label$642caef_2_22;
	label$642caef_2_21:
	r13 = r12->bytes;
	label$642caef_2_22:
	r14 = r3->length;
	r15 = &r5;
	r16 = &r7;
	r17 = fmt_inflate_buffer(r8,r10,r2,r11,r13,r4,r14,r15,r16);
	r18 = hl_alloc_virtual(&t$vrt_0f057c0);
	if( hl_vfields(r18)[0] ) *(bool*)(hl_vfields(r18)[0]) = (bool)r17; else hl_dyn_seti(r18->value,40759692/*done*/,&t$_bool,r17);
	if( hl_vfields(r18)[1] ) *(int*)(hl_vfields(r18)[1]) = (int)r5; else hl_dyn_seti(r18->value,195513440/*read*/,&t$_i32,r5);
	if( hl_vfields(r18)[2] ) *(int*)(hl_vfields(r18)[2]) = (int)r7; else hl_dyn_seti(r18->value,-262575014/*write*/,&t$_i32,r7);
	return r18;
}

void haxe_zip_Uncompress_setFlushMode(haxe__zip__Uncompress r0,venum* r1) {
	int r4;
	fmt_zip *r3;
	r3 = r0->s;
	if( r1 == NULL ) hl_null_access();
	r4 = HL__ENUM_INDEX__(r1);
	fmt_zip_flush_mode(r3,r4);
	return;
}

void haxe_zip_Uncompress_close(haxe__zip__Uncompress r0) {
	fmt_zip *r2;
	r2 = r0->s;
	fmt_zip_end(r2);
	return;
}

haxe__io__Bytes haxe_zip_Uncompress_run(haxe__io__Bytes r0,vdynamic* r1) {
	haxe__io__BytesBuffer r7;
	vvirtual *r10;
	venum *r8, *r16;
	bool r9;
	haxe__io__Bytes r6, r11;
	haxe__zip__Uncompress r2;
	vdynamic *r3, *r15;
	vbyte *r17;
	int r5, r12, r13, r14;
	r2 = (haxe__zip__Uncompress)hl_alloc_obj(&t$haxe_zip_Uncompress);
	r3 = NULL;
	haxe_zip_Uncompress_new(r2,r3);
	if( r1 ) goto label$642caef_5_7;
	r5 = 65536;
	r3 = hl_alloc_dynamic(&t$_i32);
	r3->v.i = r5;
	r1 = r3;
	label$642caef_5_7:
	r5 = r1 ? r1->v.i : 0;
	r6 = haxe_io_Bytes_alloc(r5);
	r7 = (haxe__io__BytesBuffer)hl_alloc_obj(&t$haxe_io_BytesBuffer);
	haxe_io_BytesBuffer_new(r7);
	r5 = 0;
	r8 = (venum*)g$haxe_zip_FlushMode_SYNC;
	haxe_zip_Uncompress_setFlushMode(r2,r8);
	label$642caef_5_14:
	r9 = true;
	if( !r9 ) goto label$642caef_5_41;
	if( r2 == NULL ) hl_null_access();
	r13 = 0;
	r10 = haxe_zip_Uncompress_execute(r2,r0,r5,r6,r13);
	if( r10 == NULL ) hl_null_access();
	r12 = hl_vfields(r10)[2] ? (*(int*)(hl_vfields(r10)[2])) : (int)hl_dyn_geti(r10->value,-262575014/*write*/,&t$_i32);
	r14 = 0;
	if( r12 < r14 ) goto label$642caef_5_27;
	if( r6 == NULL ) hl_null_access();
	r14 = r6->length;
	if( r14 >= r12 ) goto label$642caef_5_30;
	label$642caef_5_27:
	r16 = (venum*)g$haxe_io_Error_OutsideBounds;
	r15 = haxe_Exception_thrown(((vdynamic*)r16));
	hl_throw((vdynamic*)r15);
	label$642caef_5_30:
	if( r7 == NULL ) hl_null_access();
	r17 = r6->b;
	r13 = 0;
	haxe_io_BytesBuffer___add(r7,r17,r13,r12);
	r13 = hl_vfields(r10)[1] ? (*(int*)(hl_vfields(r10)[1])) : (int)hl_dyn_geti(r10->value,195513440/*read*/,&t$_i32);
	r12 = r5 + r13;
	r5 = r12;
	r9 = hl_vfields(r10)[0] ? (*(bool*)(hl_vfields(r10)[0])) : (bool)hl_dyn_geti(r10->value,40759692/*done*/,&t$_bool);
	if( !r9 ) goto label$642caef_5_40;
	goto label$642caef_5_41;
	label$642caef_5_40:
	goto label$642caef_5_14;
	label$642caef_5_41:
	if( r2 == NULL ) hl_null_access();
	haxe_zip_Uncompress_close(r2);
	if( r7 == NULL ) hl_null_access();
	r11 = haxe_io_BytesBuffer_getBytes(r7);
	return r11;
}


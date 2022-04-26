﻿// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <format/gif/Tools.h>
#include <haxe/ds/_List/ListNode.h>
#include <format/gif/Block.h>
extern hl_type t$haxe_ds_List;
#include <format/gif/Extension.h>
extern hl_type t$_i32;
haxe__io__Bytes haxe_io_Bytes_alloc(int);
extern hl_type t$_bool;
extern hl_type t$haxe_io_Bytes;
extern String s$5c1a108;
vdynamic* haxe_Exception_thrown(vdynamic*);
int haxe_io_Bytes_get(haxe__io__Bytes,int);
void haxe_io_Bytes_set(haxe__io__Bytes,int,int);
extern hl_type t$vrt_73ebc91;
extern hl_type t$format_gif_DisposalMethod;
extern venum* g$b009af1;
#include <format/gif/ApplicationExtension.h>
#include <hl/natives.h>
extern format__gif__$Tools g$_format_gif_Tools;

int format_gif_Tools_framesCount(vvirtual* r0) {
	vvirtual *r9;
	venum *r6;
	haxe__ds__List r3;
	vdynamic *r5;
	haxe__ds___List__ListNode r2, r4;
	int r1, r7, r8;
	r1 = 0;
	if( r0 == NULL ) hl_null_access();
	r3 = hl_vfields(r0)[0] ? (*(haxe__ds__List*)(hl_vfields(r0)[0])) : (haxe__ds__List)hl_dyn_getp(r0->value,-404083332/*blocks*/,&t$haxe_ds_List);
	if( r3 == NULL ) hl_null_access();
	r2 = r3->h;
	label$66993a7_1_5:
	if( !r2 ) goto label$66993a7_1_19;
	if( r2 == NULL ) hl_null_access();
	r5 = r2->item;
	r6 = (venum*)r5;
	r4 = r2->next;
	r2 = r4;
	if( r6 == NULL ) hl_null_access();
	r7 = HL__ENUM_INDEX__(r6);
	r8 = 0;
	if( r7 != r8 ) goto label$66993a7_1_18;
	r9 = ((format_gif_Block_BFrame*)r6)->p0;
	++r1;
	label$66993a7_1_18:
	goto label$66993a7_1_5;
	label$66993a7_1_19:
	return r1;
}

vvirtual* format_gif_Tools_frame(vvirtual* r0,int r1) {
	vvirtual *r10;
	venum *r7;
	haxe__ds__List r4;
	vdynamic *r6;
	haxe__ds___List__ListNode r3, r5;
	int r2, r8, r9;
	r2 = 0;
	if( r0 == NULL ) hl_null_access();
	r4 = hl_vfields(r0)[0] ? (*(haxe__ds__List*)(hl_vfields(r0)[0])) : (haxe__ds__List)hl_dyn_getp(r0->value,-404083332/*blocks*/,&t$haxe_ds_List);
	if( r4 == NULL ) hl_null_access();
	r3 = r4->h;
	label$66993a7_2_5:
	if( !r3 ) goto label$66993a7_2_21;
	if( r3 == NULL ) hl_null_access();
	r6 = r3->item;
	r7 = (venum*)r6;
	r5 = r3->next;
	r3 = r5;
	if( r7 == NULL ) hl_null_access();
	r8 = HL__ENUM_INDEX__(r7);
	r9 = 0;
	if( r8 != r9 ) goto label$66993a7_2_20;
	r10 = ((format_gif_Block_BFrame*)r7)->p0;
	if( r2 != r1 ) goto label$66993a7_2_19;
	return r10;
	label$66993a7_2_19:
	++r2;
	label$66993a7_2_20:
	goto label$66993a7_2_5;
	label$66993a7_2_21:
	r10 = NULL;
	return r10;
}

vvirtual* format_gif_Tools_graphicControl(vvirtual* r0,int r1) {
	vvirtual *r3, *r10, *r12;
	venum *r8, *r13;
	haxe__ds__List r5;
	vdynamic *r7;
	haxe__ds___List__ListNode r4, r6;
	int r2, r9, r11;
	r2 = 0;
	r3 = NULL;
	if( r0 == NULL ) hl_null_access();
	r5 = hl_vfields(r0)[0] ? (*(haxe__ds__List*)(hl_vfields(r0)[0])) : (haxe__ds__List)hl_dyn_getp(r0->value,-404083332/*blocks*/,&t$haxe_ds_List);
	if( r5 == NULL ) hl_null_access();
	r4 = r5->h;
	label$66993a7_3_6:
	if( !r4 ) goto label$66993a7_3_32;
	if( r4 == NULL ) hl_null_access();
	r7 = r4->item;
	r8 = (venum*)r7;
	r6 = r4->next;
	r4 = r6;
	if( r8 == NULL ) hl_null_access();
	r9 = HL__ENUM_INDEX__(r8);
	switch(r9) {
		default:
			goto label$66993a7_3_31;
		case 0:
			r10 = ((format_gif_Block_BFrame*)r8)->p0;
			if( r2 != r1 ) goto label$66993a7_3_20;
			return r3;
			label$66993a7_3_20:
			r12 = NULL;
			r3 = r12;
			++r2;
			goto label$66993a7_3_31;
		case 1:
			r13 = ((format_gif_Block_BExtension*)r8)->p0;
			if( r13 == NULL ) hl_null_access();
			r9 = HL__ENUM_INDEX__(r13);
			r11 = 0;
			if( r9 != r11 ) goto label$66993a7_3_31;
			r12 = ((format_gif_Extension_EGraphicControl*)r13)->p0;
			r3 = r12;
	}
	label$66993a7_3_31:
	goto label$66993a7_3_6;
	label$66993a7_3_32:
	r12 = NULL;
	return r12;
}

haxe__io__Bytes format_gif_Tools_extractBGRA(vvirtual* r0,int r1) {
	String r17;
	vvirtual *r2, *r11, *r18;
	venum *r9, *r26;
	bool r15;
	haxe__io__Bytes r13, r14, r16;
	haxe__ds__List r6;
	vdynamic *r8;
	haxe__ds___List__ListNode r5, r7;
	int r4, r10, r12, r19, r20, r21, r22, r23, r24, r25;
	r2 = NULL;
	r4 = 0;
	if( r0 == NULL ) hl_null_access();
	r6 = hl_vfields(r0)[0] ? (*(haxe__ds__List*)(hl_vfields(r0)[0])) : (haxe__ds__List)hl_dyn_getp(r0->value,-404083332/*blocks*/,&t$haxe_ds_List);
	if( r6 == NULL ) hl_null_access();
	r5 = r6->h;
	label$66993a7_4_6:
	if( !r5 ) goto label$66993a7_4_103;
	if( r5 == NULL ) hl_null_access();
	r8 = r5->item;
	r9 = (venum*)r8;
	r7 = r5->next;
	r5 = r7;
	if( r9 == NULL ) hl_null_access();
	r10 = HL__ENUM_INDEX__(r9);
	switch(r10) {
		default:
			goto label$66993a7_4_102;
		case 0:
			r11 = ((format_gif_Block_BFrame*)r9)->p0;
			if( r4 != r1 ) goto label$66993a7_4_91;
			if( r11 == NULL ) hl_null_access();
			r10 = hl_vfields(r11)[7] ? (*(int*)(hl_vfields(r11)[7])) : (int)hl_dyn_geti(r11->value,-362629759/*width*/,&t$_i32);
			r12 = hl_vfields(r11)[1] ? (*(int*)(hl_vfields(r11)[1])) : (int)hl_dyn_geti(r11->value,38537191/*height*/,&t$_i32);
			r10 = r10 * r12;
			r12 = 4;
			r10 = r10 * r12;
			r13 = haxe_io_Bytes_alloc(r10);
			r15 = hl_vfields(r11)[3] ? (*(bool*)(hl_vfields(r11)[3])) : (bool)hl_dyn_geti(r11->value,-367153172/*localColorTable*/,&t$_bool);
			if( !r15 ) goto label$66993a7_4_30;
			r14 = hl_vfields(r11)[0] ? (*(haxe__io__Bytes*)(hl_vfields(r11)[0])) : (haxe__io__Bytes)hl_dyn_getp(r11->value,256888880/*colorTable*/,&t$haxe_io_Bytes);
			goto label$66993a7_4_32;
			label$66993a7_4_30:
			if( r0 == NULL ) hl_null_access();
			r14 = hl_vfields(r0)[1] ? (*(haxe__io__Bytes*)(hl_vfields(r0)[1])) : (haxe__io__Bytes)hl_dyn_getp(r0->value,-390218401/*globalColorTable*/,&t$haxe_io_Bytes);
			label$66993a7_4_32:
			if( r14 ) goto label$66993a7_4_36;
			r17 = (String)s$5c1a108;
			r8 = haxe_Exception_thrown(((vdynamic*)r17));
			hl_throw((vdynamic*)r8);
			label$66993a7_4_36:
			if( !r2 ) goto label$66993a7_4_44;
			if( r2 == NULL ) hl_null_access();
			r15 = hl_vfields(r2)[2] ? (*(bool*)(hl_vfields(r2)[2])) : (bool)hl_dyn_geti(r2->value,-318285023/*hasTransparentColor*/,&t$_bool);
			if( !r15 ) goto label$66993a7_4_44;
			r10 = hl_vfields(r2)[3] ? (*(int*)(hl_vfields(r2)[3])) : (int)hl_dyn_geti(r2->value,235902693/*transparentIndex*/,&t$_i32);
			r12 = 3;
			r10 = r10 * r12;
			goto label$66993a7_4_45;
			label$66993a7_4_44:
			r10 = -1;
			label$66993a7_4_45:
			r12 = 0;
			r19 = 0;
			r16 = hl_vfields(r11)[5] ? (*(haxe__io__Bytes*)(hl_vfields(r11)[5])) : (haxe__io__Bytes)hl_dyn_getp(r11->value,-324407906/*pixels*/,&t$haxe_io_Bytes);
			if( r16 == NULL ) hl_null_access();
			r20 = r16->length;
			label$66993a7_4_50:
			if( r19 >= r20 ) goto label$66993a7_4_90;
			r21 = r19;
			++r19;
			if( r11 == NULL ) hl_null_access();
			r16 = hl_vfields(r11)[5] ? (*(haxe__io__Bytes*)(hl_vfields(r11)[5])) : (haxe__io__Bytes)hl_dyn_getp(r11->value,-324407906/*pixels*/,&t$haxe_io_Bytes);
			if( r16 == NULL ) hl_null_access();
			r22 = haxe_io_Bytes_get(r16,r21);
			r23 = 3;
			r22 = r22 * r23;
			if( r13 == NULL ) hl_null_access();
			if( r14 == NULL ) hl_null_access();
			r25 = 2;
			r24 = r22 + r25;
			r24 = haxe_io_Bytes_get(r14,r24);
			haxe_io_Bytes_set(r13,r12,r24);
			r24 = 1;
			r23 = r12 + r24;
			r25 = 1;
			r24 = r22 + r25;
			r24 = haxe_io_Bytes_get(r14,r24);
			haxe_io_Bytes_set(r13,r23,r24);
			r24 = 2;
			r23 = r12 + r24;
			r24 = haxe_io_Bytes_get(r14,r22);
			haxe_io_Bytes_set(r13,r23,r24);
			if( r10 != r22 ) goto label$66993a7_4_82;
			r24 = 3;
			r23 = r12 + r24;
			r24 = 0;
			haxe_io_Bytes_set(r13,r23,r24);
			goto label$66993a7_4_86;
			label$66993a7_4_82:
			r24 = 3;
			r23 = r12 + r24;
			r24 = 255;
			haxe_io_Bytes_set(r13,r23,r24);
			label$66993a7_4_86:
			r24 = 4;
			r23 = r12 + r24;
			r12 = r23;
			goto label$66993a7_4_50;
			label$66993a7_4_90:
			return r13;
			label$66993a7_4_91:
			++r4;
			r18 = NULL;
			r2 = r18;
			goto label$66993a7_4_102;
		case 1:
			r26 = ((format_gif_Block_BExtension*)r9)->p0;
			if( r26 == NULL ) hl_null_access();
			r10 = HL__ENUM_INDEX__(r26);
			r12 = 0;
			if( r10 != r12 ) goto label$66993a7_4_102;
			r18 = ((format_gif_Extension_EGraphicControl*)r26)->p0;
			r2 = r18;
	}
	label$66993a7_4_102:
	goto label$66993a7_4_6;
	label$66993a7_4_103:
	r13 = NULL;
	return r13;
}

haxe__io__Bytes format_gif_Tools_extractRGBA(vvirtual* r0,int r1) {
	String r17;
	vvirtual *r2, *r11, *r18;
	venum *r9, *r26;
	bool r15;
	haxe__io__Bytes r13, r14, r16;
	haxe__ds__List r6;
	vdynamic *r8;
	haxe__ds___List__ListNode r5, r7;
	int r4, r10, r12, r19, r20, r21, r22, r23, r24, r25;
	r2 = NULL;
	r4 = 0;
	if( r0 == NULL ) hl_null_access();
	r6 = hl_vfields(r0)[0] ? (*(haxe__ds__List*)(hl_vfields(r0)[0])) : (haxe__ds__List)hl_dyn_getp(r0->value,-404083332/*blocks*/,&t$haxe_ds_List);
	if( r6 == NULL ) hl_null_access();
	r5 = r6->h;
	label$66993a7_5_6:
	if( !r5 ) goto label$66993a7_5_103;
	if( r5 == NULL ) hl_null_access();
	r8 = r5->item;
	r9 = (venum*)r8;
	r7 = r5->next;
	r5 = r7;
	if( r9 == NULL ) hl_null_access();
	r10 = HL__ENUM_INDEX__(r9);
	switch(r10) {
		default:
			goto label$66993a7_5_102;
		case 0:
			r11 = ((format_gif_Block_BFrame*)r9)->p0;
			if( r4 != r1 ) goto label$66993a7_5_91;
			if( r11 == NULL ) hl_null_access();
			r10 = hl_vfields(r11)[7] ? (*(int*)(hl_vfields(r11)[7])) : (int)hl_dyn_geti(r11->value,-362629759/*width*/,&t$_i32);
			r12 = hl_vfields(r11)[1] ? (*(int*)(hl_vfields(r11)[1])) : (int)hl_dyn_geti(r11->value,38537191/*height*/,&t$_i32);
			r10 = r10 * r12;
			r12 = 4;
			r10 = r10 * r12;
			r13 = haxe_io_Bytes_alloc(r10);
			r15 = hl_vfields(r11)[3] ? (*(bool*)(hl_vfields(r11)[3])) : (bool)hl_dyn_geti(r11->value,-367153172/*localColorTable*/,&t$_bool);
			if( !r15 ) goto label$66993a7_5_30;
			r14 = hl_vfields(r11)[0] ? (*(haxe__io__Bytes*)(hl_vfields(r11)[0])) : (haxe__io__Bytes)hl_dyn_getp(r11->value,256888880/*colorTable*/,&t$haxe_io_Bytes);
			goto label$66993a7_5_32;
			label$66993a7_5_30:
			if( r0 == NULL ) hl_null_access();
			r14 = hl_vfields(r0)[1] ? (*(haxe__io__Bytes*)(hl_vfields(r0)[1])) : (haxe__io__Bytes)hl_dyn_getp(r0->value,-390218401/*globalColorTable*/,&t$haxe_io_Bytes);
			label$66993a7_5_32:
			if( r14 ) goto label$66993a7_5_36;
			r17 = (String)s$5c1a108;
			r8 = haxe_Exception_thrown(((vdynamic*)r17));
			hl_throw((vdynamic*)r8);
			label$66993a7_5_36:
			if( !r2 ) goto label$66993a7_5_44;
			if( r2 == NULL ) hl_null_access();
			r15 = hl_vfields(r2)[2] ? (*(bool*)(hl_vfields(r2)[2])) : (bool)hl_dyn_geti(r2->value,-318285023/*hasTransparentColor*/,&t$_bool);
			if( !r15 ) goto label$66993a7_5_44;
			r10 = hl_vfields(r2)[3] ? (*(int*)(hl_vfields(r2)[3])) : (int)hl_dyn_geti(r2->value,235902693/*transparentIndex*/,&t$_i32);
			r12 = 3;
			r10 = r10 * r12;
			goto label$66993a7_5_45;
			label$66993a7_5_44:
			r10 = -1;
			label$66993a7_5_45:
			r12 = 0;
			r19 = 0;
			r16 = hl_vfields(r11)[5] ? (*(haxe__io__Bytes*)(hl_vfields(r11)[5])) : (haxe__io__Bytes)hl_dyn_getp(r11->value,-324407906/*pixels*/,&t$haxe_io_Bytes);
			if( r16 == NULL ) hl_null_access();
			r20 = r16->length;
			label$66993a7_5_50:
			if( r19 >= r20 ) goto label$66993a7_5_90;
			r21 = r19;
			++r19;
			if( r11 == NULL ) hl_null_access();
			r16 = hl_vfields(r11)[5] ? (*(haxe__io__Bytes*)(hl_vfields(r11)[5])) : (haxe__io__Bytes)hl_dyn_getp(r11->value,-324407906/*pixels*/,&t$haxe_io_Bytes);
			if( r16 == NULL ) hl_null_access();
			r22 = haxe_io_Bytes_get(r16,r21);
			r23 = 3;
			r22 = r22 * r23;
			if( r13 == NULL ) hl_null_access();
			if( r14 == NULL ) hl_null_access();
			r24 = haxe_io_Bytes_get(r14,r22);
			haxe_io_Bytes_set(r13,r12,r24);
			r24 = 1;
			r23 = r12 + r24;
			r25 = 1;
			r24 = r22 + r25;
			r24 = haxe_io_Bytes_get(r14,r24);
			haxe_io_Bytes_set(r13,r23,r24);
			r24 = 2;
			r23 = r12 + r24;
			r25 = 2;
			r24 = r22 + r25;
			r24 = haxe_io_Bytes_get(r14,r24);
			haxe_io_Bytes_set(r13,r23,r24);
			if( r10 != r22 ) goto label$66993a7_5_82;
			r24 = 3;
			r23 = r12 + r24;
			r24 = 0;
			haxe_io_Bytes_set(r13,r23,r24);
			goto label$66993a7_5_86;
			label$66993a7_5_82:
			r24 = 3;
			r23 = r12 + r24;
			r24 = 255;
			haxe_io_Bytes_set(r13,r23,r24);
			label$66993a7_5_86:
			r24 = 4;
			r23 = r12 + r24;
			r12 = r23;
			goto label$66993a7_5_50;
			label$66993a7_5_90:
			return r13;
			label$66993a7_5_91:
			++r4;
			r18 = NULL;
			r2 = r18;
			goto label$66993a7_5_102;
		case 1:
			r26 = ((format_gif_Block_BExtension*)r9)->p0;
			if( r26 == NULL ) hl_null_access();
			r10 = HL__ENUM_INDEX__(r26);
			r12 = 0;
			if( r10 != r12 ) goto label$66993a7_5_102;
			r18 = ((format_gif_Extension_EGraphicControl*)r26)->p0;
			r2 = r18;
	}
	label$66993a7_5_102:
	goto label$66993a7_5_6;
	label$66993a7_5_103:
	r13 = NULL;
	return r13;
}

haxe__io__Bytes format_gif_Tools_extractFullBGRA(vvirtual* r0,int r1) {
	String r18;
	vvirtual *r2, *r7, *r14, *r19;
	venum *r13, *r23, *r30;
	bool r16;
	haxe__io__Bytes r5, r15, r17;
	haxe__ds__List r10;
	vdynamic *r12;
	haxe__ds___List__ListNode r9, r11;
	int r4, r6, r8, r20, r21, r22, r24, r25, r26, r27, r28, r29;
	r2 = NULL;
	r4 = 0;
	if( r0 == NULL ) hl_null_access();
	r7 = hl_vfields(r0)[2] ? (*(vvirtual**)(hl_vfields(r0)[2])) : (vvirtual*)hl_dyn_getp(r0->value,-114719004/*logicalScreenDescriptor*/,&t$vrt_73ebc91);
	if( r7 == NULL ) hl_null_access();
	r6 = hl_vfields(r7)[7] ? (*(int*)(hl_vfields(r7)[7])) : (int)hl_dyn_geti(r7->value,-362629759/*width*/,&t$_i32);
	r7 = hl_vfields(r0)[2] ? (*(vvirtual**)(hl_vfields(r0)[2])) : (vvirtual*)hl_dyn_getp(r0->value,-114719004/*logicalScreenDescriptor*/,&t$vrt_73ebc91);
	if( r7 == NULL ) hl_null_access();
	r8 = hl_vfields(r7)[4] ? (*(int*)(hl_vfields(r7)[4])) : (int)hl_dyn_geti(r7->value,38537191/*height*/,&t$_i32);
	r6 = r6 * r8;
	r8 = 4;
	r6 = r6 * r8;
	r5 = haxe_io_Bytes_alloc(r6);
	r10 = hl_vfields(r0)[0] ? (*(haxe__ds__List*)(hl_vfields(r0)[0])) : (haxe__ds__List)hl_dyn_getp(r0->value,-404083332/*blocks*/,&t$haxe_ds_List);
	if( r10 == NULL ) hl_null_access();
	r9 = r10->h;
	label$66993a7_6_16:
	if( !r9 ) goto label$66993a7_6_173;
	if( r9 == NULL ) hl_null_access();
	r12 = r9->item;
	r13 = (venum*)r12;
	r11 = r9->next;
	r9 = r11;
	if( r13 == NULL ) hl_null_access();
	r6 = HL__ENUM_INDEX__(r13);
	switch(r6) {
		default:
			goto label$66993a7_6_172;
		case 0:
			r14 = ((format_gif_Block_BFrame*)r13)->p0;
			if( r14 == NULL ) hl_null_access();
			r16 = hl_vfields(r14)[3] ? (*(bool*)(hl_vfields(r14)[3])) : (bool)hl_dyn_geti(r14->value,-367153172/*localColorTable*/,&t$_bool);
			if( !r16 ) goto label$66993a7_6_33;
			r15 = hl_vfields(r14)[0] ? (*(haxe__io__Bytes*)(hl_vfields(r14)[0])) : (haxe__io__Bytes)hl_dyn_getp(r14->value,256888880/*colorTable*/,&t$haxe_io_Bytes);
			goto label$66993a7_6_35;
			label$66993a7_6_33:
			if( r0 == NULL ) hl_null_access();
			r15 = hl_vfields(r0)[1] ? (*(haxe__io__Bytes*)(hl_vfields(r0)[1])) : (haxe__io__Bytes)hl_dyn_getp(r0->value,-390218401/*globalColorTable*/,&t$haxe_io_Bytes);
			label$66993a7_6_35:
			if( r15 ) goto label$66993a7_6_39;
			r18 = (String)s$5c1a108;
			r12 = haxe_Exception_thrown(((vdynamic*)r18));
			hl_throw((vdynamic*)r12);
			label$66993a7_6_39:
			if( !r2 ) goto label$66993a7_6_47;
			if( r2 == NULL ) hl_null_access();
			r16 = hl_vfields(r2)[2] ? (*(bool*)(hl_vfields(r2)[2])) : (bool)hl_dyn_geti(r2->value,-318285023/*hasTransparentColor*/,&t$_bool);
			if( !r16 ) goto label$66993a7_6_47;
			r6 = hl_vfields(r2)[3] ? (*(int*)(hl_vfields(r2)[3])) : (int)hl_dyn_geti(r2->value,235902693/*transparentIndex*/,&t$_i32);
			r8 = 3;
			r6 = r6 * r8;
			goto label$66993a7_6_48;
			label$66993a7_6_47:
			r6 = -1;
			label$66993a7_6_48:
			r17 = hl_vfields(r14)[5] ? (*(haxe__io__Bytes*)(hl_vfields(r14)[5])) : (haxe__io__Bytes)hl_dyn_getp(r14->value,-324407906/*pixels*/,&t$haxe_io_Bytes);
			r8 = 0;
			r20 = hl_vfields(r14)[9] ? (*(int*)(hl_vfields(r14)[9])) : (int)hl_dyn_geti(r14->value,121/*y*/,&t$_i32);
			if( r0 == NULL ) hl_null_access();
			r7 = hl_vfields(r0)[2] ? (*(vvirtual**)(hl_vfields(r0)[2])) : (vvirtual*)hl_dyn_getp(r0->value,-114719004/*logicalScreenDescriptor*/,&t$vrt_73ebc91);
			if( r7 == NULL ) hl_null_access();
			r21 = hl_vfields(r7)[7] ? (*(int*)(hl_vfields(r7)[7])) : (int)hl_dyn_geti(r7->value,-362629759/*width*/,&t$_i32);
			r20 = r20 * r21;
			r21 = hl_vfields(r14)[8] ? (*(int*)(hl_vfields(r14)[8])) : (int)hl_dyn_geti(r14->value,120/*x*/,&t$_i32);
			r20 = r20 + r21;
			r21 = 4;
			r20 = r20 * r21;
			r7 = hl_vfields(r0)[2] ? (*(vvirtual**)(hl_vfields(r0)[2])) : (vvirtual*)hl_dyn_getp(r0->value,-114719004/*logicalScreenDescriptor*/,&t$vrt_73ebc91);
			if( r7 == NULL ) hl_null_access();
			r21 = hl_vfields(r7)[7] ? (*(int*)(hl_vfields(r7)[7])) : (int)hl_dyn_geti(r7->value,-362629759/*width*/,&t$_i32);
			r22 = hl_vfields(r14)[7] ? (*(int*)(hl_vfields(r14)[7])) : (int)hl_dyn_geti(r14->value,-362629759/*width*/,&t$_i32);
			r21 = r21 - r22;
			r22 = 4;
			r21 = r21 * r22;
			r22 = 4;
			r21 = r21 + r22;
			if( r4 == r1 ) goto label$66993a7_6_74;
			if( !r2 ) goto label$66993a7_6_74;
			if( r2 == NULL ) hl_null_access();
			r23 = hl_vfields(r2)[1] ? (*(venum**)(hl_vfields(r2)[1])) : (venum*)hl_dyn_getp(r2->value,164371895/*disposalMethod*/,&t$format_gif_DisposalMethod);
			goto label$66993a7_6_75;
			label$66993a7_6_74:
			r23 = (venum*)g$b009af1;
			label$66993a7_6_75:
			if( r23 == NULL ) hl_null_access();
			r22 = HL__ENUM_INDEX__(r23);
			switch(r22) {
				default:
				case 0:
				case 1:
					r22 = 0;
					if( r17 == NULL ) hl_null_access();
					r24 = r17->length;
					label$66993a7_6_81:
					if( r22 >= r24 ) goto label$66993a7_6_123;
					r25 = r22;
					++r22;
					if( r17 == NULL ) hl_null_access();
					r26 = haxe_io_Bytes_get(r17,r25);
					r27 = 3;
					r26 = r26 * r27;
					if( r6 == r26 ) goto label$66993a7_6_110;
					if( r5 == NULL ) hl_null_access();
					if( r15 == NULL ) hl_null_access();
					r29 = 2;
					r28 = r26 + r29;
					r28 = haxe_io_Bytes_get(r15,r28);
					haxe_io_Bytes_set(r5,r20,r28);
					r28 = 1;
					r27 = r20 + r28;
					r29 = 1;
					r28 = r26 + r29;
					r28 = haxe_io_Bytes_get(r15,r28);
					haxe_io_Bytes_set(r5,r27,r28);
					r28 = 2;
					r27 = r20 + r28;
					r28 = haxe_io_Bytes_get(r15,r26);
					haxe_io_Bytes_set(r5,r27,r28);
					r28 = 3;
					r27 = r20 + r28;
					r28 = 255;
					haxe_io_Bytes_set(r5,r27,r28);
					label$66993a7_6_110:
					++r8;
					if( r14 == NULL ) hl_null_access();
					r27 = hl_vfields(r14)[7] ? (*(int*)(hl_vfields(r14)[7])) : (int)hl_dyn_geti(r14->value,-362629759/*width*/,&t$_i32);
					if( r8 != r27 ) goto label$66993a7_6_119;
					r27 = 0;
					r8 = r27;
					r27 = r20 + r21;
					r20 = r27;
					goto label$66993a7_6_122;
					label$66993a7_6_119:
					r28 = 4;
					r27 = r20 + r28;
					r20 = r27;
					label$66993a7_6_122:
					goto label$66993a7_6_81;
					label$66993a7_6_123:
					goto label$66993a7_6_159;
				case 2:
					r22 = 0;
					if( r17 == NULL ) hl_null_access();
					r24 = r17->length;
					label$66993a7_6_127:
					if( r22 >= r24 ) goto label$66993a7_6_158;
					++r22;
					if( r5 == NULL ) hl_null_access();
					r27 = 0;
					haxe_io_Bytes_set(r5,r20,r27);
					r27 = 1;
					r26 = r20 + r27;
					r27 = 0;
					haxe_io_Bytes_set(r5,r26,r27);
					r27 = 2;
					r26 = r20 + r27;
					r27 = 0;
					haxe_io_Bytes_set(r5,r26,r27);
					r27 = 3;
					r26 = r20 + r27;
					r27 = 0;
					haxe_io_Bytes_set(r5,r26,r27);
					++r8;
					if( r14 == NULL ) hl_null_access();
					r26 = hl_vfields(r14)[7] ? (*(int*)(hl_vfields(r14)[7])) : (int)hl_dyn_geti(r14->value,-362629759/*width*/,&t$_i32);
					if( r8 != r26 ) goto label$66993a7_6_154;
					r26 = 0;
					r8 = r26;
					r26 = r20 + r21;
					r20 = r26;
					goto label$66993a7_6_157;
					label$66993a7_6_154:
					r27 = 4;
					r26 = r20 + r27;
					r20 = r26;
					label$66993a7_6_157:
					goto label$66993a7_6_127;
					label$66993a7_6_158:
					goto label$66993a7_6_159;
				case 3:
					break;
			}
			label$66993a7_6_159:
			if( r4 != r1 ) goto label$66993a7_6_161;
			return r5;
			label$66993a7_6_161:
			++r4;
			r19 = NULL;
			r2 = r19;
			goto label$66993a7_6_172;
		case 1:
			r30 = ((format_gif_Block_BExtension*)r13)->p0;
			if( r30 == NULL ) hl_null_access();
			r6 = HL__ENUM_INDEX__(r30);
			r8 = 0;
			if( r6 != r8 ) goto label$66993a7_6_172;
			r19 = ((format_gif_Extension_EGraphicControl*)r30)->p0;
			r2 = r19;
	}
	label$66993a7_6_172:
	goto label$66993a7_6_16;
	label$66993a7_6_173:
	return r5;
}

haxe__io__Bytes format_gif_Tools_extractFullRGBA(vvirtual* r0,int r1) {
	String r18;
	vvirtual *r2, *r7, *r14, *r19;
	venum *r13, *r23, *r30;
	bool r16;
	haxe__io__Bytes r5, r15, r17;
	haxe__ds__List r10;
	vdynamic *r12;
	haxe__ds___List__ListNode r9, r11;
	int r4, r6, r8, r20, r21, r22, r24, r25, r26, r27, r28, r29;
	r2 = NULL;
	r4 = 0;
	if( r0 == NULL ) hl_null_access();
	r7 = hl_vfields(r0)[2] ? (*(vvirtual**)(hl_vfields(r0)[2])) : (vvirtual*)hl_dyn_getp(r0->value,-114719004/*logicalScreenDescriptor*/,&t$vrt_73ebc91);
	if( r7 == NULL ) hl_null_access();
	r6 = hl_vfields(r7)[7] ? (*(int*)(hl_vfields(r7)[7])) : (int)hl_dyn_geti(r7->value,-362629759/*width*/,&t$_i32);
	r7 = hl_vfields(r0)[2] ? (*(vvirtual**)(hl_vfields(r0)[2])) : (vvirtual*)hl_dyn_getp(r0->value,-114719004/*logicalScreenDescriptor*/,&t$vrt_73ebc91);
	if( r7 == NULL ) hl_null_access();
	r8 = hl_vfields(r7)[4] ? (*(int*)(hl_vfields(r7)[4])) : (int)hl_dyn_geti(r7->value,38537191/*height*/,&t$_i32);
	r6 = r6 * r8;
	r8 = 4;
	r6 = r6 * r8;
	r5 = haxe_io_Bytes_alloc(r6);
	r10 = hl_vfields(r0)[0] ? (*(haxe__ds__List*)(hl_vfields(r0)[0])) : (haxe__ds__List)hl_dyn_getp(r0->value,-404083332/*blocks*/,&t$haxe_ds_List);
	if( r10 == NULL ) hl_null_access();
	r9 = r10->h;
	label$66993a7_7_16:
	if( !r9 ) goto label$66993a7_7_173;
	if( r9 == NULL ) hl_null_access();
	r12 = r9->item;
	r13 = (venum*)r12;
	r11 = r9->next;
	r9 = r11;
	if( r13 == NULL ) hl_null_access();
	r6 = HL__ENUM_INDEX__(r13);
	switch(r6) {
		default:
			goto label$66993a7_7_172;
		case 0:
			r14 = ((format_gif_Block_BFrame*)r13)->p0;
			if( r14 == NULL ) hl_null_access();
			r16 = hl_vfields(r14)[3] ? (*(bool*)(hl_vfields(r14)[3])) : (bool)hl_dyn_geti(r14->value,-367153172/*localColorTable*/,&t$_bool);
			if( !r16 ) goto label$66993a7_7_33;
			r15 = hl_vfields(r14)[0] ? (*(haxe__io__Bytes*)(hl_vfields(r14)[0])) : (haxe__io__Bytes)hl_dyn_getp(r14->value,256888880/*colorTable*/,&t$haxe_io_Bytes);
			goto label$66993a7_7_35;
			label$66993a7_7_33:
			if( r0 == NULL ) hl_null_access();
			r15 = hl_vfields(r0)[1] ? (*(haxe__io__Bytes*)(hl_vfields(r0)[1])) : (haxe__io__Bytes)hl_dyn_getp(r0->value,-390218401/*globalColorTable*/,&t$haxe_io_Bytes);
			label$66993a7_7_35:
			if( r15 ) goto label$66993a7_7_39;
			r18 = (String)s$5c1a108;
			r12 = haxe_Exception_thrown(((vdynamic*)r18));
			hl_throw((vdynamic*)r12);
			label$66993a7_7_39:
			if( !r2 ) goto label$66993a7_7_47;
			if( r2 == NULL ) hl_null_access();
			r16 = hl_vfields(r2)[2] ? (*(bool*)(hl_vfields(r2)[2])) : (bool)hl_dyn_geti(r2->value,-318285023/*hasTransparentColor*/,&t$_bool);
			if( !r16 ) goto label$66993a7_7_47;
			r6 = hl_vfields(r2)[3] ? (*(int*)(hl_vfields(r2)[3])) : (int)hl_dyn_geti(r2->value,235902693/*transparentIndex*/,&t$_i32);
			r8 = 3;
			r6 = r6 * r8;
			goto label$66993a7_7_48;
			label$66993a7_7_47:
			r6 = -1;
			label$66993a7_7_48:
			r17 = hl_vfields(r14)[5] ? (*(haxe__io__Bytes*)(hl_vfields(r14)[5])) : (haxe__io__Bytes)hl_dyn_getp(r14->value,-324407906/*pixels*/,&t$haxe_io_Bytes);
			r8 = 0;
			r20 = hl_vfields(r14)[9] ? (*(int*)(hl_vfields(r14)[9])) : (int)hl_dyn_geti(r14->value,121/*y*/,&t$_i32);
			if( r0 == NULL ) hl_null_access();
			r7 = hl_vfields(r0)[2] ? (*(vvirtual**)(hl_vfields(r0)[2])) : (vvirtual*)hl_dyn_getp(r0->value,-114719004/*logicalScreenDescriptor*/,&t$vrt_73ebc91);
			if( r7 == NULL ) hl_null_access();
			r21 = hl_vfields(r7)[7] ? (*(int*)(hl_vfields(r7)[7])) : (int)hl_dyn_geti(r7->value,-362629759/*width*/,&t$_i32);
			r20 = r20 * r21;
			r21 = hl_vfields(r14)[8] ? (*(int*)(hl_vfields(r14)[8])) : (int)hl_dyn_geti(r14->value,120/*x*/,&t$_i32);
			r20 = r20 + r21;
			r21 = 4;
			r20 = r20 * r21;
			r7 = hl_vfields(r0)[2] ? (*(vvirtual**)(hl_vfields(r0)[2])) : (vvirtual*)hl_dyn_getp(r0->value,-114719004/*logicalScreenDescriptor*/,&t$vrt_73ebc91);
			if( r7 == NULL ) hl_null_access();
			r21 = hl_vfields(r7)[7] ? (*(int*)(hl_vfields(r7)[7])) : (int)hl_dyn_geti(r7->value,-362629759/*width*/,&t$_i32);
			r22 = hl_vfields(r14)[7] ? (*(int*)(hl_vfields(r14)[7])) : (int)hl_dyn_geti(r14->value,-362629759/*width*/,&t$_i32);
			r21 = r21 - r22;
			r22 = 4;
			r21 = r21 * r22;
			r22 = 4;
			r21 = r21 + r22;
			if( r4 == r1 ) goto label$66993a7_7_74;
			if( !r2 ) goto label$66993a7_7_74;
			if( r2 == NULL ) hl_null_access();
			r23 = hl_vfields(r2)[1] ? (*(venum**)(hl_vfields(r2)[1])) : (venum*)hl_dyn_getp(r2->value,164371895/*disposalMethod*/,&t$format_gif_DisposalMethod);
			goto label$66993a7_7_75;
			label$66993a7_7_74:
			r23 = (venum*)g$b009af1;
			label$66993a7_7_75:
			if( r23 == NULL ) hl_null_access();
			r22 = HL__ENUM_INDEX__(r23);
			switch(r22) {
				default:
				case 0:
				case 1:
					r22 = 0;
					if( r17 == NULL ) hl_null_access();
					r24 = r17->length;
					label$66993a7_7_81:
					if( r22 >= r24 ) goto label$66993a7_7_123;
					r25 = r22;
					++r22;
					if( r17 == NULL ) hl_null_access();
					r26 = haxe_io_Bytes_get(r17,r25);
					r27 = 3;
					r26 = r26 * r27;
					if( r6 == r26 ) goto label$66993a7_7_110;
					if( r5 == NULL ) hl_null_access();
					if( r15 == NULL ) hl_null_access();
					r28 = haxe_io_Bytes_get(r15,r26);
					haxe_io_Bytes_set(r5,r20,r28);
					r28 = 1;
					r27 = r20 + r28;
					r29 = 1;
					r28 = r26 + r29;
					r28 = haxe_io_Bytes_get(r15,r28);
					haxe_io_Bytes_set(r5,r27,r28);
					r28 = 2;
					r27 = r20 + r28;
					r29 = 2;
					r28 = r26 + r29;
					r28 = haxe_io_Bytes_get(r15,r28);
					haxe_io_Bytes_set(r5,r27,r28);
					r28 = 3;
					r27 = r20 + r28;
					r28 = 255;
					haxe_io_Bytes_set(r5,r27,r28);
					label$66993a7_7_110:
					++r8;
					if( r14 == NULL ) hl_null_access();
					r27 = hl_vfields(r14)[7] ? (*(int*)(hl_vfields(r14)[7])) : (int)hl_dyn_geti(r14->value,-362629759/*width*/,&t$_i32);
					if( r8 != r27 ) goto label$66993a7_7_119;
					r27 = 0;
					r8 = r27;
					r27 = r20 + r21;
					r20 = r27;
					goto label$66993a7_7_122;
					label$66993a7_7_119:
					r28 = 4;
					r27 = r20 + r28;
					r20 = r27;
					label$66993a7_7_122:
					goto label$66993a7_7_81;
					label$66993a7_7_123:
					goto label$66993a7_7_159;
				case 2:
					r22 = 0;
					if( r17 == NULL ) hl_null_access();
					r24 = r17->length;
					label$66993a7_7_127:
					if( r22 >= r24 ) goto label$66993a7_7_158;
					++r22;
					if( r5 == NULL ) hl_null_access();
					r27 = 0;
					haxe_io_Bytes_set(r5,r20,r27);
					r27 = 1;
					r26 = r20 + r27;
					r27 = 0;
					haxe_io_Bytes_set(r5,r26,r27);
					r27 = 2;
					r26 = r20 + r27;
					r27 = 0;
					haxe_io_Bytes_set(r5,r26,r27);
					r27 = 3;
					r26 = r20 + r27;
					r27 = 0;
					haxe_io_Bytes_set(r5,r26,r27);
					++r8;
					if( r14 == NULL ) hl_null_access();
					r26 = hl_vfields(r14)[7] ? (*(int*)(hl_vfields(r14)[7])) : (int)hl_dyn_geti(r14->value,-362629759/*width*/,&t$_i32);
					if( r8 != r26 ) goto label$66993a7_7_154;
					r26 = 0;
					r8 = r26;
					r26 = r20 + r21;
					r20 = r26;
					goto label$66993a7_7_157;
					label$66993a7_7_154:
					r27 = 4;
					r26 = r20 + r27;
					r20 = r26;
					label$66993a7_7_157:
					goto label$66993a7_7_127;
					label$66993a7_7_158:
					goto label$66993a7_7_159;
				case 3:
					break;
			}
			label$66993a7_7_159:
			if( r4 != r1 ) goto label$66993a7_7_161;
			return r5;
			label$66993a7_7_161:
			++r4;
			r19 = NULL;
			r2 = r19;
			goto label$66993a7_7_172;
		case 1:
			r30 = ((format_gif_Block_BExtension*)r13)->p0;
			if( r30 == NULL ) hl_null_access();
			r6 = HL__ENUM_INDEX__(r30);
			r8 = 0;
			if( r6 != r8 ) goto label$66993a7_7_172;
			r19 = ((format_gif_Extension_EGraphicControl*)r30)->p0;
			r2 = r19;
	}
	label$66993a7_7_172:
	goto label$66993a7_7_16;
	label$66993a7_7_173:
	return r5;
}

int format_gif_Tools_loopCount(vvirtual* r0) {
	venum *r5, *r8, *r9;
	haxe__ds__List r2;
	vdynamic *r4;
	haxe__ds___List__ListNode r1, r3;
	int r6, r7;
	if( r0 == NULL ) hl_null_access();
	r2 = hl_vfields(r0)[0] ? (*(haxe__ds__List*)(hl_vfields(r0)[0])) : (haxe__ds__List)hl_dyn_getp(r0->value,-404083332/*blocks*/,&t$haxe_ds_List);
	if( r2 == NULL ) hl_null_access();
	r1 = r2->h;
	label$66993a7_8_4:
	if( !r1 ) goto label$66993a7_8_28;
	if( r1 == NULL ) hl_null_access();
	r4 = r1->item;
	r5 = (venum*)r4;
	r3 = r1->next;
	r1 = r3;
	if( r5 == NULL ) hl_null_access();
	r6 = HL__ENUM_INDEX__(r5);
	r7 = 1;
	if( r6 != r7 ) goto label$66993a7_8_27;
	r8 = ((format_gif_Block_BExtension*)r5)->p0;
	if( r8 == NULL ) hl_null_access();
	r6 = HL__ENUM_INDEX__(r8);
	r7 = 3;
	if( r6 != r7 ) goto label$66993a7_8_27;
	r9 = ((format_gif_Extension_EApplicationExtension*)r8)->p0;
	if( r9 == NULL ) hl_null_access();
	r6 = HL__ENUM_INDEX__(r9);
	r7 = 0;
	if( r6 != r7 ) goto label$66993a7_8_27;
	r6 = ((format_gif_ApplicationExtension_AENetscapeLooping*)r9)->p0;
	return r6;
	label$66993a7_8_27:
	goto label$66993a7_8_4;
	label$66993a7_8_28:
	r6 = 1;
	return r6;
}

double format_gif_Tools_log2(double r0) {
	format__gif__$Tools r3;
	double r1, r2;
	r1 = hl_math_log(r0);
	r3 = (format__gif__$Tools)g$_format_gif_Tools;
	r2 = r3->LN2;
	r1 = r1 / r2;
	return r1;
}


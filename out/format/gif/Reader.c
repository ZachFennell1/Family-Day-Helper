// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <format/gif/Reader.h>
bool haxe_io_Input_set_bigEndian(haxe__io__Input,bool);
#include <haxe/io/Encoding.h>
#include <format/gif/Version.h>
#include <haxe/io/Bytes.h>
#include <haxe/ds/List.h>
#include <format/gif/Block.h>
extern String s$Invalid_header;
vdynamic* haxe_Exception_thrown(vdynamic*);
String haxe_io_Input_readString(haxe__io__Input,int,venum*);
extern venum* g$format_gif_Version_GIF89a;
#include <hl/natives.h>
extern hl_type t$format_gif_Version;
extern venum* g$format_gif_Version_GIF87a;
int haxe_io_Input_readUInt16(haxe__io__Input);
extern hl_type t$vrt_73ebc91;
extern hl_type t$_i32;
extern hl_type t$_bool;
haxe__io__Bytes format_gif_Reader_readColorTable(format__gif__Reader,int);
extern hl_type t$haxe_ds_List;
void haxe_ds_List_new(haxe__ds__List);
venum* format_gif_Reader_readBlock(format__gif__Reader);
void haxe_ds_List_add(haxe__ds__List,vdynamic*);
extern venum* g$format_gif_Block_BEOF;
extern hl_type t$vrt_b271509;
extern hl_type t$haxe_io_Bytes;
venum* format_gif_Reader_readExtension(format__gif__Reader);
venum* format_gif_Reader_readImage(format__gif__Reader);
extern hl_type t$vrt_b51decd;
haxe__io__Bytes format_gif_Reader_readPixels(format__gif__Reader,int,int,bool);
extern hl_type t$format_gif_Block;
#include <hl/types/ArrayObj.h>
#include <hl/types/ArrayBytes_Int.h>
haxe__io__Bytes haxe_io_Bytes_alloc(int);
extern hl_type t$hl_types_ArrayObj;
void hl_types_ArrayObj_new(hl__types__ArrayObj);
hl__types__ArrayBytes_Int hl_types_ArrayBase_allocI32(vbyte*,int);
void hl_types_ArrayObj___expand(hl__types__ArrayObj,int);
hl__types__ArrayObj hl_types_ArrayObj_copy(hl__types__ArrayObj);
extern hl_type t$hl_types_ArrayBytes_Int;
extern hl_type t$_dyn;
hl__types__ArrayBytes_Int hl_types_ArrayBytes_Int_copy(hl__types__ArrayBytes_Int);
int hl_types_ArrayBytes_Int_push(hl__types__ArrayBytes_Int,int);
extern String s$Invalid_LZW_code_Excepted_;
String String___alloc__(vbyte*,int);
String String___add__(String,String);
extern String s$_got_;
void haxe_io_Bytes_set(haxe__io__Bytes,int,int);
int format_gif_Reader_deinterlace(format__gif__Reader,haxe__io__Bytes,haxe__io__Bytes,int,int,int,int,int);
void haxe_io_Bytes_blit(haxe__io__Bytes,int,haxe__io__Bytes,int,int);
#include <haxe/io/BytesOutput.h>
#include <format/gif/Extension.h>
#include <format/gif/DisposalMethod.h>
extern hl_type t$haxe_io_BytesOutput;
void haxe_io_BytesOutput_new(haxe__io__BytesOutput);
int haxe_io_BytesOutput_writeBytes(haxe__io__BytesOutput,haxe__io__Bytes,int,int);
#include <haxe/io/Output.h>
void haxe_io_Output_flush(haxe__io__Output);
haxe__io__Bytes haxe_io_BytesOutput_getBytes(haxe__io__BytesOutput);
void haxe_io_Output_close(haxe__io__Output);
extern hl_type t$format_gif_Extension;
extern String s$0796990;
extern hl_type t$vrt_0188a90;
String haxe_io_Bytes_toString(haxe__io__Bytes);
extern hl_type t$String;
extern String s$5374ac7;
extern hl_type t$format_gif_DisposalMethod;
extern venum* g$7c1f7c3;
extern venum* g$b009af1;
extern venum* g$60ac84a;
extern venum* g$45deff5;
extern hl_type t$vrt_b011dd1;
venum* format_gif_Reader_readApplicationExtension(format__gif__Reader);
#include <format/gif/ApplicationExtension.h>
extern String s$01941c5;
extern String s$NETSCAPE;
int String___compare(String,vdynamic*);
extern String s$2_0;
int haxe_io_Bytes_get(haxe__io__Bytes,int);
extern hl_type t$format_gif_ApplicationExtension;

void format_gif_Reader_new(format__gif__Reader r0,haxe__io__Input r1) {
	bool r2;
	r0->i = r1;
	if( r1 == NULL ) hl_null_access();
	r2 = false;
	r2 = haxe_io_Input_set_bigEndian(r1,r2);
	return;
}

vvirtual* format_gif_Reader_read(format__gif__Reader r0) {
	String r7;
	vvirtual *r18, *r27;
	venum *r8, *r9, *r12, *r25, *r26;
	haxe__io__Bytes r22, r23;
	bool r19;
	haxe__ds__List r24;
	double r15, r16, r17;
	vdynamic *r6;
	haxe__io__Input r4;
	vbyte *r10, *r11;
	int r1, r3, r5, r13, r14, r20, r21;
	r1 = 71;
	r4 = r0->i;
	if( r4 == NULL ) hl_null_access();
	r3 = ((int (*)(haxe__io__Input))r4->$type->vobj_proto[0])(r4);
	if( r3 == r1 ) goto label$bf72c7a_2_8;
	r7 = (String)s$Invalid_header;
	r6 = haxe_Exception_thrown(((vdynamic*)r7));
	hl_throw((vdynamic*)r6);
	label$bf72c7a_2_8:
	r1 = 73;
	r4 = r0->i;
	if( r4 == NULL ) hl_null_access();
	r3 = ((int (*)(haxe__io__Input))r4->$type->vobj_proto[0])(r4);
	if( r3 == r1 ) goto label$bf72c7a_2_16;
	r7 = (String)s$Invalid_header;
	r6 = haxe_Exception_thrown(((vdynamic*)r7));
	hl_throw((vdynamic*)r6);
	label$bf72c7a_2_16:
	r1 = 70;
	r4 = r0->i;
	if( r4 == NULL ) hl_null_access();
	r3 = ((int (*)(haxe__io__Input))r4->$type->vobj_proto[0])(r4);
	if( r3 == r1 ) goto label$bf72c7a_2_24;
	r7 = (String)s$Invalid_header;
	r6 = haxe_Exception_thrown(((vdynamic*)r7));
	hl_throw((vdynamic*)r6);
	label$bf72c7a_2_24:
	r4 = r0->i;
	if( r4 == NULL ) hl_null_access();
	r1 = 3;
	r8 = NULL;
	r7 = haxe_io_Input_readString(r4,r1,r8);
	r9 = (venum*)g$format_gif_Version_GIF89a;
	if( !r7 ) goto label$bf72c7a_2_39;
	r1 = r7->length;
	r3 = 3;
	if( r1 != r3 ) goto label$bf72c7a_2_39;
	r10 = r7->bytes;
	r11 = (vbyte*)USTR("87a");
	r1 = hl_string_compare(r10,r11,r1);
	r3 = 0;
	if( r1 == r3 ) goto label$bf72c7a_2_51;
	label$bf72c7a_2_39:
	if( !r7 ) goto label$bf72c7a_2_48;
	r1 = r7->length;
	r3 = 3;
	if( r1 != r3 ) goto label$bf72c7a_2_48;
	r10 = r7->bytes;
	r11 = (vbyte*)USTR("89a");
	r1 = hl_string_compare(r10,r11,r1);
	r3 = 0;
	if( r1 == r3 ) goto label$bf72c7a_2_54;
	label$bf72c7a_2_48:
	r12 = hl_alloc_enum(&t$format_gif_Version,2);
	((format_gif_Version_Unknown*)r12)->p0 = r7;
	r9 = r12;
	goto label$bf72c7a_2_56;
	label$bf72c7a_2_51:
	r12 = (venum*)g$format_gif_Version_GIF87a;
	r9 = r12;
	goto label$bf72c7a_2_56;
	label$bf72c7a_2_54:
	r12 = (venum*)g$format_gif_Version_GIF89a;
	r9 = r12;
	label$bf72c7a_2_56:
	r4 = r0->i;
	if( r4 == NULL ) hl_null_access();
	r1 = haxe_io_Input_readUInt16(r4);
	r4 = r0->i;
	if( r4 == NULL ) hl_null_access();
	r3 = haxe_io_Input_readUInt16(r4);
	r4 = r0->i;
	if( r4 == NULL ) hl_null_access();
	r5 = ((int (*)(haxe__io__Input))r4->$type->vobj_proto[0])(r4);
	r4 = r0->i;
	if( r4 == NULL ) hl_null_access();
	r13 = ((int (*)(haxe__io__Input))r4->$type->vobj_proto[0])(r4);
	r4 = r0->i;
	if( r4 == NULL ) hl_null_access();
	r14 = ((int (*)(haxe__io__Input))r4->$type->vobj_proto[0])(r4);
	r15 = (double)r14;
	r17 = 0.;
	if( r15 == r17 ) goto label$bf72c7a_2_79;
	r17 = 15.;
	r16 = r15 + r17;
	r17 = 64.;
	r16 = r16 / r17;
	goto label$bf72c7a_2_80;
	label$bf72c7a_2_79:
	r16 = 1.;
	label$bf72c7a_2_80:
	r18 = hl_alloc_virtual(&t$vrt_73ebc91);
	if( hl_vfields(r18)[7] ) *(int*)(hl_vfields(r18)[7]) = (int)r1; else hl_dyn_seti(r18->value,-362629759/*width*/,&t$_i32,r1);
	if( hl_vfields(r18)[4] ) *(int*)(hl_vfields(r18)[4]) = (int)r3; else hl_dyn_seti(r18->value,38537191/*height*/,&t$_i32,r3);
	r20 = 128;
	r14 = r5 & r20;
	r20 = 128;
	if( r14 == r20 ) goto label$bf72c7a_2_89;
	r19 = false;
	goto label$bf72c7a_2_90;
	label$bf72c7a_2_89:
	r19 = true;
	label$bf72c7a_2_90:
	if( hl_vfields(r18)[3] ) *(bool*)(hl_vfields(r18)[3]) = (bool)r19; else hl_dyn_seti(r18->value,460173303/*hasGlobalColorTable*/,&t$_bool,r19);
	r20 = 112;
	r14 = r5 & r20;
	r20 = 4;
	r14 = ((unsigned)r14) >> r20;
	if( hl_vfields(r18)[1] ) *(int*)(hl_vfields(r18)[1]) = (int)r14; else hl_dyn_seti(r18->value,-55483547/*colorResolution*/,&t$_i32,r14);
	r20 = 8;
	r14 = r5 & r20;
	r20 = 8;
	if( r14 == r20 ) goto label$bf72c7a_2_102;
	r19 = false;
	goto label$bf72c7a_2_103;
	label$bf72c7a_2_102:
	r19 = true;
	label$bf72c7a_2_103:
	if( hl_vfields(r18)[6] ) *(bool*)(hl_vfields(r18)[6]) = (bool)r19; else hl_dyn_seti(r18->value,272077762/*sorted*/,&t$_bool,r19);
	r14 = 2;
	r21 = 7;
	r20 = r5 & r21;
	r14 = r14 << r20;
	if( hl_vfields(r18)[2] ) *(int*)(hl_vfields(r18)[2]) = (int)r14; else hl_dyn_seti(r18->value,-302016192/*globalColorTableSize*/,&t$_i32,r14);
	if( hl_vfields(r18)[0] ) *(int*)(hl_vfields(r18)[0]) = (int)r13; else hl_dyn_seti(r18->value,200065218/*backgroundColorIndex*/,&t$_i32,r13);
	if( hl_vfields(r18)[5] ) *(double*)(hl_vfields(r18)[5]) = (double)r16; else hl_dyn_setd(r18->value,-449850845/*pixelAspectRatio*/,r16);
	r22 = NULL;
	r19 = hl_vfields(r18)[3] ? (*(bool*)(hl_vfields(r18)[3])) : (bool)hl_dyn_geti(r18->value,460173303/*hasGlobalColorTable*/,&t$_bool);
	if( !r19 ) goto label$bf72c7a_2_117;
	r14 = hl_vfields(r18)[2] ? (*(int*)(hl_vfields(r18)[2])) : (int)hl_dyn_geti(r18->value,-302016192/*globalColorTableSize*/,&t$_i32);
	r23 = format_gif_Reader_readColorTable(r0,r14);
	r22 = r23;
	label$bf72c7a_2_117:
	r24 = (haxe__ds__List)hl_alloc_obj(&t$haxe_ds_List);
	haxe_ds_List_new(r24);
	label$bf72c7a_2_119:
	r19 = true;
	if( !r19 ) goto label$bf72c7a_2_129;
	r25 = format_gif_Reader_readBlock(r0);
	if( r24 == NULL ) hl_null_access();
	haxe_ds_List_add(r24,((vdynamic*)r25));
	r26 = (venum*)g$format_gif_Block_BEOF;
	if( r25 != r26 ) goto label$bf72c7a_2_128;
	goto label$bf72c7a_2_129;
	label$bf72c7a_2_128:
	goto label$bf72c7a_2_119;
	label$bf72c7a_2_129:
	r27 = hl_alloc_virtual(&t$vrt_b271509);
	if( hl_vfields(r27)[3] ) *(venum**)(hl_vfields(r27)[3]) = (venum*)r9; else hl_dyn_setp(r27->value,485615783/*version*/,&t$format_gif_Version,r9);
	if( hl_vfields(r27)[2] ) *(vvirtual**)(hl_vfields(r27)[2]) = (vvirtual*)r18; else hl_dyn_setp(r27->value,-114719004/*logicalScreenDescriptor*/,&t$vrt_73ebc91,r18);
	if( hl_vfields(r27)[1] ) *(haxe__io__Bytes*)(hl_vfields(r27)[1]) = (haxe__io__Bytes)r22; else hl_dyn_setp(r27->value,-390218401/*globalColorTable*/,&t$haxe_io_Bytes,r22);
	if( hl_vfields(r27)[0] ) *(haxe__ds__List*)(hl_vfields(r27)[0]) = (haxe__ds__List)r24; else hl_dyn_setp(r27->value,-404083332/*blocks*/,&t$haxe_ds_List,r24);
	return r27;
}

venum* format_gif_Reader_readBlock(format__gif__Reader r0) {
	venum *r3;
	haxe__io__Input r2;
	int r1;
	r2 = r0->i;
	if( r2 == NULL ) hl_null_access();
	r1 = ((int (*)(haxe__io__Input))r2->$type->vobj_proto[0])(r2);
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
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
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
		case 32:
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
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			goto label$bf72c7a_3_11;
		case 33:
			r3 = format_gif_Reader_readExtension(r0);
			return r3;
		case 44:
			r3 = format_gif_Reader_readImage(r0);
			return r3;
		case 59:
			r3 = (venum*)g$format_gif_Block_BEOF;
			return r3;
	}
	label$bf72c7a_3_11:
	r3 = (venum*)g$format_gif_Block_BEOF;
	return r3;
}

venum* format_gif_Reader_readImage(format__gif__Reader r0) {
	vvirtual *r16;
	venum *r15;
	haxe__io__Bytes r13, r14;
	bool r7, r10, r11;
	haxe__io__Input r2;
	int r1, r3, r4, r5, r6, r8, r9, r12;
	r2 = r0->i;
	if( r2 == NULL ) hl_null_access();
	r1 = haxe_io_Input_readUInt16(r2);
	r2 = r0->i;
	if( r2 == NULL ) hl_null_access();
	r3 = haxe_io_Input_readUInt16(r2);
	r2 = r0->i;
	if( r2 == NULL ) hl_null_access();
	r4 = haxe_io_Input_readUInt16(r2);
	r2 = r0->i;
	if( r2 == NULL ) hl_null_access();
	r5 = haxe_io_Input_readUInt16(r2);
	r2 = r0->i;
	if( r2 == NULL ) hl_null_access();
	r6 = ((int (*)(haxe__io__Input))r2->$type->vobj_proto[0])(r2);
	r9 = 128;
	r8 = r6 & r9;
	r9 = 128;
	if( r8 == r9 ) goto label$bf72c7a_4_21;
	r7 = false;
	goto label$bf72c7a_4_22;
	label$bf72c7a_4_21:
	r7 = true;
	label$bf72c7a_4_22:
	r9 = 64;
	r8 = r6 & r9;
	r9 = 64;
	if( r8 == r9 ) goto label$bf72c7a_4_28;
	r10 = false;
	goto label$bf72c7a_4_29;
	label$bf72c7a_4_28:
	r10 = true;
	label$bf72c7a_4_29:
	r9 = 32;
	r8 = r6 & r9;
	r9 = 32;
	if( r8 == r9 ) goto label$bf72c7a_4_35;
	r11 = false;
	goto label$bf72c7a_4_36;
	label$bf72c7a_4_35:
	r11 = true;
	label$bf72c7a_4_36:
	r8 = 2;
	r12 = 7;
	r9 = r6 & r12;
	r8 = r8 << r9;
	r13 = NULL;
	if( !r7 ) goto label$bf72c7a_4_44;
	r14 = format_gif_Reader_readColorTable(r0,r8);
	r13 = r14;
	label$bf72c7a_4_44:
	r16 = hl_alloc_virtual(&t$vrt_b51decd);
	if( hl_vfields(r16)[8] ) *(int*)(hl_vfields(r16)[8]) = (int)r1; else hl_dyn_seti(r16->value,120/*x*/,&t$_i32,r1);
	if( hl_vfields(r16)[9] ) *(int*)(hl_vfields(r16)[9]) = (int)r3; else hl_dyn_seti(r16->value,121/*y*/,&t$_i32,r3);
	if( hl_vfields(r16)[7] ) *(int*)(hl_vfields(r16)[7]) = (int)r4; else hl_dyn_seti(r16->value,-362629759/*width*/,&t$_i32,r4);
	if( hl_vfields(r16)[1] ) *(int*)(hl_vfields(r16)[1]) = (int)r5; else hl_dyn_seti(r16->value,38537191/*height*/,&t$_i32,r5);
	if( hl_vfields(r16)[3] ) *(bool*)(hl_vfields(r16)[3]) = (bool)r7; else hl_dyn_seti(r16->value,-367153172/*localColorTable*/,&t$_bool,r7);
	if( hl_vfields(r16)[2] ) *(bool*)(hl_vfields(r16)[2]) = (bool)r10; else hl_dyn_seti(r16->value,-109524212/*interlaced*/,&t$_bool,r10);
	if( hl_vfields(r16)[6] ) *(bool*)(hl_vfields(r16)[6]) = (bool)r11; else hl_dyn_seti(r16->value,272077762/*sorted*/,&t$_bool,r11);
	if( hl_vfields(r16)[4] ) *(int*)(hl_vfields(r16)[4]) = (int)r8; else hl_dyn_seti(r16->value,-25874350/*localColorTableSize*/,&t$_i32,r8);
	r14 = format_gif_Reader_readPixels(r0,r4,r5,r10);
	if( hl_vfields(r16)[5] ) *(haxe__io__Bytes*)(hl_vfields(r16)[5]) = (haxe__io__Bytes)r14; else hl_dyn_setp(r16->value,-324407906/*pixels*/,&t$haxe_io_Bytes,r14);
	if( hl_vfields(r16)[0] ) *(haxe__io__Bytes*)(hl_vfields(r16)[0]) = (haxe__io__Bytes)r13; else hl_dyn_setp(r16->value,256888880/*colorTable*/,&t$haxe_io_Bytes,r13);
	r15 = hl_alloc_enum(&t$format_gif_Block,0);
	((format_gif_Block_BFrame*)r15)->p0 = r16;
	return r15;
}

haxe__io__Bytes format_gif_Reader_readPixels(format__gif__Reader r0,int r1,int r2,bool r3) {
	String r33, r35;
	hl__types__ArrayObj r18, r22, r29;
	haxe__io__Bytes r8, r36;
	hl__types__ArrayBytes_Int r23, r30, r32;
	int *r34;
	vdynamic *r31;
	haxe__io__Input r4;
	varray *r28;
	vbyte *r24;
	int r6, r7, r9, r10, r11, r12, r13, r14, r15, r16, r17, r19, r20, r21, r25, r26, r27;
	r4 = r0->i;
	r6 = r1 * r2;
	r8 = haxe_io_Bytes_alloc(r6);
	if( r4 == NULL ) hl_null_access();
	r7 = ((int (*)(haxe__io__Input))r4->$type->vobj_proto[0])(r4);
	r9 = ((int (*)(haxe__io__Input))r4->$type->vobj_proto[0])(r4);
	r10 = 1;
	r9 = r9 - r10;
	r10 = ((int (*)(haxe__io__Input))r4->$type->vobj_proto[0])(r4);
	r11 = 8;
	r12 = 1;
	r12 = r12 << r7;
	r14 = 1;
	r13 = r12 + r14;
	r15 = 1;
	r14 = r7 + r15;
	r15 = 1;
	r15 = r15 << r14;
	r17 = 1;
	r16 = r15 - r17;
	r18 = (hl__types__ArrayObj)hl_alloc_obj(&t$hl_types_ArrayObj);
	hl_types_ArrayObj_new(r18);
	r17 = 0;
	r19 = r12;
	label$bf72c7a_5_24:
	if( r17 >= r19 ) goto label$bf72c7a_5_44;
	r20 = r17;
	++r17;
	if( r18 == NULL ) hl_null_access();
	r25 = 4;
	r24 = hl_alloc_bytes(r25);
	r25 = 0;
	r27 = 2;
	r27 = r25 << r27;
	*(int*)(r24 + r27) = r20;
	++r25;
	r25 = 1;
	r23 = hl_types_ArrayBase_allocI32(r24,r25);
	r25 = r18->length;
	if( ((unsigned)r20) < ((unsigned)r25) ) goto label$bf72c7a_5_41;
	hl_types_ArrayObj___expand(r18,r20);
	label$bf72c7a_5_41:
	r28 = r18->array;
	((hl__types__ArrayBytes_Int*)(r28 + 1))[r20] = r23;
	goto label$bf72c7a_5_24;
	label$bf72c7a_5_44:
	r22 = (hl__types__ArrayObj)hl_alloc_obj(&t$hl_types_ArrayObj);
	hl_types_ArrayObj_new(r22);
	r19 = 2;
	r17 = r12 + r19;
	r19 = 0;
	r20 = 0;
	label$bf72c7a_5_50:
	if( r19 >= r6 ) goto label$bf72c7a_5_219;
	r21 = r20;
	label$bf72c7a_5_53:
	if( r11 >= r14 ) goto label$bf72c7a_5_72;
	r26 = 0;
	if( r9 != r26 ) goto label$bf72c7a_5_58;
	goto label$bf72c7a_5_72;
	label$bf72c7a_5_58:
	if( r4 == NULL ) hl_null_access();
	r26 = ((int (*)(haxe__io__Input))r4->$type->vobj_proto[0])(r4);
	r26 = r26 << r11;
	r25 = r10 | r26;
	r10 = r25;
	r26 = 8;
	r25 = r11 + r26;
	r11 = r25;
	--r9;
	r26 = 0;
	if( r9 != r26 ) goto label$bf72c7a_5_71;
	r25 = ((int (*)(haxe__io__Input))r4->$type->vobj_proto[0])(r4);
	r9 = r25;
	label$bf72c7a_5_71:
	goto label$bf72c7a_5_53;
	label$bf72c7a_5_72:
	r25 = r10 & r16;
	r20 = r25;
	r25 = r10 >> r14;
	r10 = r25;
	r25 = r11 - r14;
	r11 = r25;
	if( r20 != r12 ) goto label$bf72c7a_5_95;
	if( r18 == NULL ) hl_null_access();
	r29 = hl_types_ArrayObj_copy(r18);
	r22 = r29;
	r26 = 2;
	r25 = r12 + r26;
	r17 = r25;
	r26 = 1;
	r25 = r7 + r26;
	r14 = r25;
	r25 = 1;
	r25 = r25 << r14;
	r15 = r25;
	r26 = 1;
	r25 = r25 - r26;
	r16 = r25;
	goto label$bf72c7a_5_50;
	label$bf72c7a_5_95:
	if( r20 != r13 ) goto label$bf72c7a_5_97;
	goto label$bf72c7a_5_219;
	label$bf72c7a_5_97:
	if( r20 >= r17 ) goto label$bf72c7a_5_136;
	if( r21 == r12 ) goto label$bf72c7a_5_135;
	if( r22 == NULL ) hl_null_access();
	r26 = r22->length;
	if( ((unsigned)r21) < ((unsigned)r26) ) goto label$bf72c7a_5_104;
	r30 = NULL;
	goto label$bf72c7a_5_107;
	label$bf72c7a_5_104:
	r28 = r22->array;
	r31 = ((vdynamic**)(r28 + 1))[r21];
	r30 = (hl__types__ArrayBytes_Int)hl_dyn_castp(&r31,&t$_dyn,&t$hl_types_ArrayBytes_Int);
	label$bf72c7a_5_107:
	if( r30 == NULL ) hl_null_access();
	r30 = hl_types_ArrayBytes_Int_copy(r30);
	if( r30 == NULL ) hl_null_access();
	r26 = r22->length;
	if( ((unsigned)r20) < ((unsigned)r26) ) goto label$bf72c7a_5_114;
	r32 = NULL;
	goto label$bf72c7a_5_117;
	label$bf72c7a_5_114:
	r28 = r22->array;
	r31 = ((vdynamic**)(r28 + 1))[r20];
	r32 = (hl__types__ArrayBytes_Int)hl_dyn_castp(&r31,&t$_dyn,&t$hl_types_ArrayBytes_Int);
	label$bf72c7a_5_117:
	if( r32 == NULL ) hl_null_access();
	r25 = 0;
	r26 = r32->length;
	if( ((unsigned)r25) < ((unsigned)r26) ) goto label$bf72c7a_5_123;
	r25 = 0;
	goto label$bf72c7a_5_127;
	label$bf72c7a_5_123:
	r24 = r32->bytes;
	r26 = 2;
	r26 = r25 << r26;
	r25 = *(int*)(r24 + r26);
	label$bf72c7a_5_127:
	r25 = hl_types_ArrayBytes_Int_push(r30,r25);
	r25 = r17;
	++r17;
	r26 = r22->length;
	if( ((unsigned)r25) < ((unsigned)r26) ) goto label$bf72c7a_5_133;
	hl_types_ArrayObj___expand(r22,r25);
	label$bf72c7a_5_133:
	r28 = r22->array;
	((hl__types__ArrayBytes_Int*)(r28 + 1))[r25] = r30;
	label$bf72c7a_5_135:
	goto label$bf72c7a_5_180;
	label$bf72c7a_5_136:
	if( r20 == r17 ) goto label$bf72c7a_5_152;
	r33 = (String)s$Invalid_LZW_code_Excepted_;
	r25 = r17;
	r34 = &r25;
	r24 = hl_itos(r25,r34);
	r35 = String___alloc__(r24,r25);
	r33 = String___add__(r33,r35);
	r35 = (String)s$_got_;
	r33 = String___add__(r33,r35);
	r25 = r20;
	r34 = &r25;
	r24 = hl_itos(r25,r34);
	r35 = String___alloc__(r24,r25);
	r33 = String___add__(r33,r35);
	r31 = haxe_Exception_thrown(((vdynamic*)r33));
	hl_throw((vdynamic*)r31);
	label$bf72c7a_5_152:
	if( r22 == NULL ) hl_null_access();
	r26 = r22->length;
	if( ((unsigned)r21) < ((unsigned)r26) ) goto label$bf72c7a_5_157;
	r30 = NULL;
	goto label$bf72c7a_5_160;
	label$bf72c7a_5_157:
	r28 = r22->array;
	r31 = ((vdynamic**)(r28 + 1))[r21];
	r30 = (hl__types__ArrayBytes_Int)hl_dyn_castp(&r31,&t$_dyn,&t$hl_types_ArrayBytes_Int);
	label$bf72c7a_5_160:
	if( r30 == NULL ) hl_null_access();
	r30 = hl_types_ArrayBytes_Int_copy(r30);
	if( r30 == NULL ) hl_null_access();
	r25 = 0;
	r26 = r30->length;
	if( ((unsigned)r25) < ((unsigned)r26) ) goto label$bf72c7a_5_168;
	r25 = 0;
	goto label$bf72c7a_5_172;
	label$bf72c7a_5_168:
	r24 = r30->bytes;
	r26 = 2;
	r26 = r25 << r26;
	r25 = *(int*)(r24 + r26);
	label$bf72c7a_5_172:
	r25 = hl_types_ArrayBytes_Int_push(r30,r25);
	r25 = r17;
	++r17;
	r26 = r22->length;
	if( ((unsigned)r25) < ((unsigned)r26) ) goto label$bf72c7a_5_178;
	hl_types_ArrayObj___expand(r22,r25);
	label$bf72c7a_5_178:
	r28 = r22->array;
	((hl__types__ArrayBytes_Int*)(r28 + 1))[r25] = r30;
	label$bf72c7a_5_180:
	if( r22 == NULL ) hl_null_access();
	r26 = r22->length;
	if( ((unsigned)r20) < ((unsigned)r26) ) goto label$bf72c7a_5_185;
	r30 = NULL;
	goto label$bf72c7a_5_188;
	label$bf72c7a_5_185:
	r28 = r22->array;
	r31 = ((vdynamic**)(r28 + 1))[r20];
	r30 = (hl__types__ArrayBytes_Int)hl_dyn_castp(&r31,&t$_dyn,&t$hl_types_ArrayBytes_Int);
	label$bf72c7a_5_188:
	r23 = r30;
	r25 = 0;
	label$bf72c7a_5_190:
	if( r23 == NULL ) hl_null_access();
	r27 = r23->length;
	if( r25 >= r27 ) goto label$bf72c7a_5_208;
	r27 = r23->length;
	if( ((unsigned)r25) < ((unsigned)r27) ) goto label$bf72c7a_5_198;
	r26 = 0;
	goto label$bf72c7a_5_202;
	label$bf72c7a_5_198:
	r24 = r23->bytes;
	r27 = 2;
	r27 = r25 << r27;
	r26 = *(int*)(r24 + r27);
	label$bf72c7a_5_202:
	++r25;
	if( r8 == NULL ) hl_null_access();
	r27 = r19;
	++r19;
	haxe_io_Bytes_set(r8,r27,r26);
	goto label$bf72c7a_5_190;
	label$bf72c7a_5_208:
	if( r17 != r15 ) goto label$bf72c7a_5_218;
	r26 = 12;
	if( r14 >= r26 ) goto label$bf72c7a_5_218;
	++r14;
	r25 = 1;
	r25 = r25 << r14;
	r15 = r25;
	r26 = 1;
	r25 = r25 - r26;
	r16 = r25;
	label$bf72c7a_5_218:
	goto label$bf72c7a_5_50;
	label$bf72c7a_5_219:
	r26 = 0;
	if( r26 >= r9 ) goto label$bf72c7a_5_230;
	if( r4 == NULL ) hl_null_access();
	r25 = ((int (*)(haxe__io__Input))r4->$type->vobj_proto[0])(r4);
	--r9;
	r26 = 0;
	if( r9 != r26 ) goto label$bf72c7a_5_229;
	r25 = ((int (*)(haxe__io__Input))r4->$type->vobj_proto[0])(r4);
	r9 = r25;
	label$bf72c7a_5_229:
	goto label$bf72c7a_5_219;
	label$bf72c7a_5_230:
	if( r19 >= r6 ) goto label$bf72c7a_5_238;
	if( r8 == NULL ) hl_null_access();
	r25 = r19;
	++r19;
	r26 = 0;
	haxe_io_Bytes_set(r8,r25,r26);
	goto label$bf72c7a_5_230;
	label$bf72c7a_5_238:
	if( !r3 ) goto label$bf72c7a_5_256;
	r36 = haxe_io_Bytes_alloc(r6);
	r25 = 8;
	r26 = 0;
	r27 = 0;
	r25 = format_gif_Reader_deinterlace(r0,r8,r36,r25,r26,r27,r1,r2);
	r26 = 8;
	r27 = 4;
	r26 = format_gif_Reader_deinterlace(r0,r8,r36,r26,r27,r25,r1,r2);
	r25 = r26;
	r26 = 4;
	r27 = 2;
	r26 = format_gif_Reader_deinterlace(r0,r8,r36,r26,r27,r25,r1,r2);
	r25 = r26;
	r26 = 2;
	r27 = 1;
	r26 = format_gif_Reader_deinterlace(r0,r8,r36,r26,r27,r25,r1,r2);
	r8 = r36;
	label$bf72c7a_5_256:
	return r8;
}

int format_gif_Reader_deinterlace(format__gif__Reader r0,haxe__io__Bytes r1,haxe__io__Bytes r2,int r3,int r4,int r5,int r6,int r7) {
	int r8;
	label$bf72c7a_6_0:
	if( r4 >= r7 ) goto label$bf72c7a_6_10;
	if( r2 == NULL ) hl_null_access();
	r8 = r4 * r6;
	haxe_io_Bytes_blit(r2,r8,r1,r5,r6);
	r8 = r5 + r6;
	r5 = r8;
	r8 = r4 + r3;
	r4 = r8;
	goto label$bf72c7a_6_0;
	label$bf72c7a_6_10:
	return r5;
}

venum* format_gif_Reader_readExtension(format__gif__Reader r0) {
	String r13;
	vvirtual *r22, *r24;
	venum *r10, *r11, *r23;
	bool r25;
	haxe__io__Bytes r6, r9;
	haxe__io__BytesOutput r5;
	vdynamic *r12;
	haxe__io__Input r2;
	int r1, r4, r7, r8, r14, r15, r16, r17, r18, r19, r20, r21;
	r2 = r0->i;
	if( r2 == NULL ) hl_null_access();
	r1 = ((int (*)(haxe__io__Input))r2->$type->vobj_proto[0])(r2);
	switch(r1) {
		default:
		case 0:
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
		case 16:
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
		case 32:
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
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
		case 112:
		case 113:
		case 114:
		case 115:
		case 116:
		case 117:
		case 118:
		case 119:
		case 120:
		case 121:
		case 122:
		case 123:
		case 124:
		case 125:
		case 126:
		case 127:
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
		case 148:
		case 149:
		case 150:
		case 151:
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
		case 158:
		case 159:
		case 160:
		case 161:
		case 162:
		case 163:
		case 164:
		case 165:
		case 166:
		case 167:
		case 168:
		case 169:
		case 170:
		case 171:
		case 172:
		case 173:
		case 174:
		case 175:
		case 176:
		case 177:
		case 178:
		case 179:
		case 180:
		case 181:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 187:
		case 188:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 196:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 205:
		case 206:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
		case 212:
		case 213:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 222:
		case 223:
		case 224:
		case 225:
		case 226:
		case 227:
		case 228:
		case 229:
		case 230:
		case 231:
		case 232:
		case 233:
		case 234:
		case 235:
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 243:
		case 244:
		case 245:
		case 246:
		case 247:
		case 248:
		case 250:
		case 251:
		case 252:
		case 253:
			r5 = (haxe__io__BytesOutput)hl_alloc_obj(&t$haxe_io_BytesOutput);
			haxe_io_BytesOutput_new(r5);
			r4 = 255;
			r6 = haxe_io_Bytes_alloc(r4);
			r2 = r0->i;
			if( r2 == NULL ) hl_null_access();
			r4 = ((int (*)(haxe__io__Input))r2->$type->vobj_proto[0])(r2);
			label$bf72c7a_7_11:
			r8 = 0;
			if( r4 == r8 ) goto label$bf72c7a_7_26;
			r2 = r0->i;
			if( r2 == NULL ) hl_null_access();
			r7 = 0;
			r7 = ((int (*)(haxe__io__Input,haxe__io__Bytes,int,int))r2->$type->vobj_proto[1])(r2,r6,r7,r4);
			if( r5 == NULL ) hl_null_access();
			r7 = 0;
			r7 = haxe_io_BytesOutput_writeBytes(r5,r6,r7,r4);
			r2 = r0->i;
			if( r2 == NULL ) hl_null_access();
			r7 = ((int (*)(haxe__io__Input))r2->$type->vobj_proto[0])(r2);
			r4 = r7;
			goto label$bf72c7a_7_11;
			label$bf72c7a_7_26:
			if( r5 == NULL ) hl_null_access();
			haxe_io_Output_flush(((haxe__io__Output)r5));
			r9 = haxe_io_BytesOutput_getBytes(r5);
			haxe_io_Output_close(((haxe__io__Output)r5));
			r11 = hl_alloc_enum(&t$format_gif_Extension,4);
			((format_gif_Extension_EUnknown*)r11)->p0 = r1;
			((format_gif_Extension_EUnknown*)r11)->p1 = r9;
			r10 = hl_alloc_enum(&t$format_gif_Block,1);
			((format_gif_Block_BExtension*)r10)->p0 = r11;
			return r10;
		case 1:
			r2 = r0->i;
			if( r2 == NULL ) hl_null_access();
			r4 = ((int (*)(haxe__io__Input))r2->$type->vobj_proto[0])(r2);
			r7 = 12;
			if( r4 == r7 ) goto label$bf72c7a_7_41;
			r13 = (String)s$0796990;
			r12 = haxe_Exception_thrown(((vdynamic*)r13));
			hl_throw((vdynamic*)r12);
			label$bf72c7a_7_41:
			r2 = r0->i;
			if( r2 == NULL ) hl_null_access();
			r4 = haxe_io_Input_readUInt16(r2);
			r2 = r0->i;
			if( r2 == NULL ) hl_null_access();
			r7 = haxe_io_Input_readUInt16(r2);
			r2 = r0->i;
			if( r2 == NULL ) hl_null_access();
			r8 = haxe_io_Input_readUInt16(r2);
			r2 = r0->i;
			if( r2 == NULL ) hl_null_access();
			r14 = haxe_io_Input_readUInt16(r2);
			r2 = r0->i;
			if( r2 == NULL ) hl_null_access();
			r15 = ((int (*)(haxe__io__Input))r2->$type->vobj_proto[0])(r2);
			r2 = r0->i;
			if( r2 == NULL ) hl_null_access();
			r16 = ((int (*)(haxe__io__Input))r2->$type->vobj_proto[0])(r2);
			r2 = r0->i;
			if( r2 == NULL ) hl_null_access();
			r17 = ((int (*)(haxe__io__Input))r2->$type->vobj_proto[0])(r2);
			r2 = r0->i;
			if( r2 == NULL ) hl_null_access();
			r18 = ((int (*)(haxe__io__Input))r2->$type->vobj_proto[0])(r2);
			r5 = (haxe__io__BytesOutput)hl_alloc_obj(&t$haxe_io_BytesOutput);
			haxe_io_BytesOutput_new(r5);
			r19 = 255;
			r6 = haxe_io_Bytes_alloc(r19);
			r2 = r0->i;
			if( r2 == NULL ) hl_null_access();
			r19 = ((int (*)(haxe__io__Input))r2->$type->vobj_proto[0])(r2);
			label$bf72c7a_7_72:
			r21 = 0;
			if( r19 == r21 ) goto label$bf72c7a_7_87;
			r2 = r0->i;
			if( r2 == NULL ) hl_null_access();
			r20 = 0;
			r20 = ((int (*)(haxe__io__Input,haxe__io__Bytes,int,int))r2->$type->vobj_proto[1])(r2,r6,r20,r19);
			if( r5 == NULL ) hl_null_access();
			r20 = 0;
			r20 = haxe_io_BytesOutput_writeBytes(r5,r6,r20,r19);
			r2 = r0->i;
			if( r2 == NULL ) hl_null_access();
			r20 = ((int (*)(haxe__io__Input))r2->$type->vobj_proto[0])(r2);
			r19 = r20;
			goto label$bf72c7a_7_72;
			label$bf72c7a_7_87:
			if( r5 == NULL ) hl_null_access();
			haxe_io_Output_flush(((haxe__io__Output)r5));
			r9 = haxe_io_BytesOutput_getBytes(r5);
			haxe_io_Output_close(((haxe__io__Output)r5));
			r22 = hl_alloc_virtual(&t$vrt_0188a90);
			if( hl_vfields(r22)[7] ) *(int*)(hl_vfields(r22)[7]) = (int)r4; else hl_dyn_seti(r22->value,316516202/*textGridX*/,&t$_i32,r4);
			if( hl_vfields(r22)[8] ) *(int*)(hl_vfields(r22)[8]) = (int)r7; else hl_dyn_seti(r22->value,316516203/*textGridY*/,&t$_i32,r7);
			if( hl_vfields(r22)[6] ) *(int*)(hl_vfields(r22)[6]) = (int)r8; else hl_dyn_seti(r22->value,381196418/*textGridWidth*/,&t$_i32,r8);
			if( hl_vfields(r22)[5] ) *(int*)(hl_vfields(r22)[5]) = (int)r14; else hl_dyn_seti(r22->value,18544351/*textGridHeight*/,&t$_i32,r14);
			if( hl_vfields(r22)[1] ) *(int*)(hl_vfields(r22)[1]) = (int)r15; else hl_dyn_seti(r22->value,31706958/*charCellWidth*/,&t$_i32,r15);
			if( hl_vfields(r22)[0] ) *(int*)(hl_vfields(r22)[0]) = (int)r16; else hl_dyn_seti(r22->value,465637033/*charCellHeight*/,&t$_i32,r16);
			if( hl_vfields(r22)[4] ) *(int*)(hl_vfields(r22)[4]) = (int)r17; else hl_dyn_seti(r22->value,130154542/*textForegroundColorIndex*/,&t$_i32,r17);
			if( hl_vfields(r22)[3] ) *(int*)(hl_vfields(r22)[3]) = (int)r18; else hl_dyn_seti(r22->value,-447464453/*textBackgroundColorIndex*/,&t$_i32,r18);
			if( r9 == NULL ) hl_null_access();
			r13 = haxe_io_Bytes_toString(r9);
			if( hl_vfields(r22)[2] ) *(String*)(hl_vfields(r22)[2]) = (String)r13; else hl_dyn_setp(r22->value,217697719/*text*/,&t$String,r13);
			r11 = hl_alloc_enum(&t$format_gif_Extension,2);
			((format_gif_Extension_EText*)r11)->p0 = r22;
			r10 = hl_alloc_enum(&t$format_gif_Block,1);
			((format_gif_Block_BExtension*)r10)->p0 = r11;
			return r10;
		case 249:
			r2 = r0->i;
			if( r2 == NULL ) hl_null_access();
			r4 = ((int (*)(haxe__io__Input))r2->$type->vobj_proto[0])(r2);
			r7 = 4;
			if( r4 == r7 ) goto label$bf72c7a_7_114;
			r13 = (String)s$5374ac7;
			r12 = haxe_Exception_thrown(((vdynamic*)r13));
			hl_throw((vdynamic*)r12);
			label$bf72c7a_7_114:
			r2 = r0->i;
			if( r2 == NULL ) hl_null_access();
			r4 = ((int (*)(haxe__io__Input))r2->$type->vobj_proto[0])(r2);
			r8 = 28;
			r7 = r4 & r8;
			r8 = 2;
			r7 = r7 >> r8;
			switch(r7) {
				default:
					r8 = 28;
					r7 = r4 & r8;
					r8 = 2;
					r7 = r7 >> r8;
					r23 = hl_alloc_enum(&t$format_gif_DisposalMethod,4);
					((format_gif_DisposalMethod_UNDEFINED*)r23)->p0 = r7;
					goto label$bf72c7a_7_135;
				case 0:
					r23 = (venum*)g$7c1f7c3;
					goto label$bf72c7a_7_135;
				case 1:
					r23 = (venum*)g$b009af1;
					goto label$bf72c7a_7_135;
				case 2:
					r23 = (venum*)g$60ac84a;
					goto label$bf72c7a_7_135;
				case 3:
					r23 = (venum*)g$45deff5;
			}
			label$bf72c7a_7_135:
			r24 = hl_alloc_virtual(&t$vrt_b011dd1);
			if( hl_vfields(r24)[1] ) *(venum**)(hl_vfields(r24)[1]) = (venum*)r23; else hl_dyn_setp(r24->value,164371895/*disposalMethod*/,&t$format_gif_DisposalMethod,r23);
			r8 = 2;
			r7 = r4 & r8;
			r8 = 2;
			if( r7 == r8 ) goto label$bf72c7a_7_143;
			r25 = false;
			goto label$bf72c7a_7_144;
			label$bf72c7a_7_143:
			r25 = true;
			label$bf72c7a_7_144:
			if( hl_vfields(r24)[4] ) *(bool*)(hl_vfields(r24)[4]) = (bool)r25; else hl_dyn_seti(r24->value,133198670/*userInput*/,&t$_bool,r25);
			r8 = 1;
			r7 = r4 & r8;
			r8 = 1;
			if( r7 == r8 ) goto label$bf72c7a_7_151;
			r25 = false;
			goto label$bf72c7a_7_152;
			label$bf72c7a_7_151:
			r25 = true;
			label$bf72c7a_7_152:
			if( hl_vfields(r24)[2] ) *(bool*)(hl_vfields(r24)[2]) = (bool)r25; else hl_dyn_seti(r24->value,-318285023/*hasTransparentColor*/,&t$_bool,r25);
			r2 = r0->i;
			if( r2 == NULL ) hl_null_access();
			r7 = haxe_io_Input_readUInt16(r2);
			if( hl_vfields(r24)[0] ) *(int*)(hl_vfields(r24)[0]) = (int)r7; else hl_dyn_seti(r24->value,-148449538/*delay*/,&t$_i32,r7);
			r2 = r0->i;
			if( r2 == NULL ) hl_null_access();
			r7 = ((int (*)(haxe__io__Input))r2->$type->vobj_proto[0])(r2);
			if( hl_vfields(r24)[3] ) *(int*)(hl_vfields(r24)[3]) = (int)r7; else hl_dyn_seti(r24->value,235902693/*transparentIndex*/,&t$_i32,r7);
			r11 = hl_alloc_enum(&t$format_gif_Extension,0);
			((format_gif_Extension_EGraphicControl*)r11)->p0 = r24;
			r10 = hl_alloc_enum(&t$format_gif_Block,1);
			((format_gif_Block_BExtension*)r10)->p0 = r11;
			r2 = r0->i;
			if( r2 == NULL ) hl_null_access();
			r7 = ((int (*)(haxe__io__Input))r2->$type->vobj_proto[0])(r2);
			return r10;
		case 254:
			r5 = (haxe__io__BytesOutput)hl_alloc_obj(&t$haxe_io_BytesOutput);
			haxe_io_BytesOutput_new(r5);
			r4 = 255;
			r6 = haxe_io_Bytes_alloc(r4);
			r2 = r0->i;
			if( r2 == NULL ) hl_null_access();
			r4 = ((int (*)(haxe__io__Input))r2->$type->vobj_proto[0])(r2);
			label$bf72c7a_7_174:
			r8 = 0;
			if( r4 == r8 ) goto label$bf72c7a_7_189;
			r2 = r0->i;
			if( r2 == NULL ) hl_null_access();
			r7 = 0;
			r7 = ((int (*)(haxe__io__Input,haxe__io__Bytes,int,int))r2->$type->vobj_proto[1])(r2,r6,r7,r4);
			if( r5 == NULL ) hl_null_access();
			r7 = 0;
			r7 = haxe_io_BytesOutput_writeBytes(r5,r6,r7,r4);
			r2 = r0->i;
			if( r2 == NULL ) hl_null_access();
			r7 = ((int (*)(haxe__io__Input))r2->$type->vobj_proto[0])(r2);
			r4 = r7;
			goto label$bf72c7a_7_174;
			label$bf72c7a_7_189:
			if( r5 == NULL ) hl_null_access();
			haxe_io_Output_flush(((haxe__io__Output)r5));
			r9 = haxe_io_BytesOutput_getBytes(r5);
			haxe_io_Output_close(((haxe__io__Output)r5));
			if( r9 == NULL ) hl_null_access();
			r13 = haxe_io_Bytes_toString(r9);
			r11 = hl_alloc_enum(&t$format_gif_Extension,1);
			((format_gif_Extension_EComment*)r11)->p0 = r13;
			r10 = hl_alloc_enum(&t$format_gif_Block,1);
			((format_gif_Block_BExtension*)r10)->p0 = r11;
			return r10;
		case 255:
			r10 = format_gif_Reader_readApplicationExtension(r0);
			return r10;
	}
}

venum* format_gif_Reader_readApplicationExtension(format__gif__Reader r0) {
	String r6, r8, r13;
	venum *r7, *r14, *r15, *r16;
	haxe__io__Bytes r10, r12;
	haxe__io__BytesOutput r9;
	vdynamic *r5;
	haxe__io__Input r3;
	int r2, r4, r11, r17;
	r3 = r0->i;
	if( r3 == NULL ) hl_null_access();
	r2 = ((int (*)(haxe__io__Input))r3->$type->vobj_proto[0])(r3);
	r4 = 11;
	if( r2 == r4 ) goto label$bf72c7a_8_8;
	r6 = (String)s$01941c5;
	r5 = haxe_Exception_thrown(((vdynamic*)r6));
	hl_throw((vdynamic*)r5);
	label$bf72c7a_8_8:
	r3 = r0->i;
	if( r3 == NULL ) hl_null_access();
	r2 = 8;
	r7 = NULL;
	r6 = haxe_io_Input_readString(r3,r2,r7);
	r3 = r0->i;
	if( r3 == NULL ) hl_null_access();
	r2 = 3;
	r7 = NULL;
	r8 = haxe_io_Input_readString(r3,r2,r7);
	r9 = (haxe__io__BytesOutput)hl_alloc_obj(&t$haxe_io_BytesOutput);
	haxe_io_BytesOutput_new(r9);
	r2 = 255;
	r10 = haxe_io_Bytes_alloc(r2);
	r3 = r0->i;
	if( r3 == NULL ) hl_null_access();
	r2 = ((int (*)(haxe__io__Input))r3->$type->vobj_proto[0])(r3);
	label$bf72c7a_8_25:
	r11 = 0;
	if( r2 == r11 ) goto label$bf72c7a_8_40;
	r3 = r0->i;
	if( r3 == NULL ) hl_null_access();
	r4 = 0;
	r4 = ((int (*)(haxe__io__Input,haxe__io__Bytes,int,int))r3->$type->vobj_proto[1])(r3,r10,r4,r2);
	if( r9 == NULL ) hl_null_access();
	r4 = 0;
	r4 = haxe_io_BytesOutput_writeBytes(r9,r10,r4,r2);
	r3 = r0->i;
	if( r3 == NULL ) hl_null_access();
	r4 = ((int (*)(haxe__io__Input))r3->$type->vobj_proto[0])(r3);
	r2 = r4;
	goto label$bf72c7a_8_25;
	label$bf72c7a_8_40:
	if( r9 == NULL ) hl_null_access();
	haxe_io_Output_flush(((haxe__io__Output)r9));
	r12 = haxe_io_BytesOutput_getBytes(r9);
	haxe_io_Output_close(((haxe__io__Output)r9));
	r13 = (String)s$NETSCAPE;
	if( r6 != r13 && (!r6 || !r13 || String___compare(r6,(vdynamic*)r13) != 0) ) goto label$bf72c7a_8_64;
	r13 = (String)s$2_0;
	if( r8 != r13 && (!r8 || !r13 || String___compare(r8,(vdynamic*)r13) != 0) ) goto label$bf72c7a_8_64;
	if( r12 == NULL ) hl_null_access();
	r4 = 0;
	r4 = haxe_io_Bytes_get(r12,r4);
	r11 = 1;
	if( r4 != r11 ) goto label$bf72c7a_8_64;
	r4 = 1;
	r4 = haxe_io_Bytes_get(r12,r4);
	r11 = 2;
	r11 = haxe_io_Bytes_get(r12,r11);
	r17 = 8;
	r11 = r11 << r17;
	r4 = r4 | r11;
	r16 = hl_alloc_enum(&t$format_gif_ApplicationExtension,0);
	((format_gif_ApplicationExtension_AENetscapeLooping*)r16)->p0 = r4;
	r15 = hl_alloc_enum(&t$format_gif_Extension,3);
	((format_gif_Extension_EApplicationExtension*)r15)->p0 = r16;
	r14 = hl_alloc_enum(&t$format_gif_Block,1);
	((format_gif_Block_BExtension*)r14)->p0 = r15;
	return r14;
	label$bf72c7a_8_64:
	r16 = hl_alloc_enum(&t$format_gif_ApplicationExtension,1);
	((format_gif_ApplicationExtension_AEUnknown*)r16)->p0 = r6;
	((format_gif_ApplicationExtension_AEUnknown*)r16)->p1 = r8;
	((format_gif_ApplicationExtension_AEUnknown*)r16)->p2 = r12;
	r15 = hl_alloc_enum(&t$format_gif_Extension,3);
	((format_gif_Extension_EApplicationExtension*)r15)->p0 = r16;
	r14 = hl_alloc_enum(&t$format_gif_Block,1);
	((format_gif_Block_BExtension*)r14)->p0 = r15;
	return r14;
}

haxe__io__Bytes format_gif_Reader_readBlocks(format__gif__Reader r0) {
	haxe__io__Bytes r3, r8;
	haxe__io__BytesOutput r1;
	haxe__io__Input r5;
	int r4, r6, r7;
	r1 = (haxe__io__BytesOutput)hl_alloc_obj(&t$haxe_io_BytesOutput);
	haxe_io_BytesOutput_new(r1);
	r4 = 255;
	r3 = haxe_io_Bytes_alloc(r4);
	r5 = r0->i;
	if( r5 == NULL ) hl_null_access();
	r4 = ((int (*)(haxe__io__Input))r5->$type->vobj_proto[0])(r5);
	label$bf72c7a_9_7:
	r7 = 0;
	if( r4 == r7 ) goto label$bf72c7a_9_22;
	r5 = r0->i;
	if( r5 == NULL ) hl_null_access();
	r6 = 0;
	r6 = ((int (*)(haxe__io__Input,haxe__io__Bytes,int,int))r5->$type->vobj_proto[1])(r5,r3,r6,r4);
	if( r1 == NULL ) hl_null_access();
	r6 = 0;
	r6 = haxe_io_BytesOutput_writeBytes(r1,r3,r6,r4);
	r5 = r0->i;
	if( r5 == NULL ) hl_null_access();
	r6 = ((int (*)(haxe__io__Input))r5->$type->vobj_proto[0])(r5);
	r4 = r6;
	goto label$bf72c7a_9_7;
	label$bf72c7a_9_22:
	if( r1 == NULL ) hl_null_access();
	haxe_io_Output_flush(((haxe__io__Output)r1));
	r8 = haxe_io_BytesOutput_getBytes(r1);
	haxe_io_Output_close(((haxe__io__Output)r1));
	return r8;
}

haxe__io__Bytes format_gif_Reader_readColorTable(format__gif__Reader r0,int r1) {
	haxe__io__Bytes r4;
	haxe__io__Input r7;
	int r2, r3, r6;
	r3 = 3;
	r2 = r1 * r3;
	r1 = r2;
	r4 = haxe_io_Bytes_alloc(r2);
	r2 = 0;
	label$bf72c7a_10_5:
	if( r2 >= r1 ) goto label$bf72c7a_10_28;
	if( r4 == NULL ) hl_null_access();
	r7 = r0->i;
	if( r7 == NULL ) hl_null_access();
	r6 = ((int (*)(haxe__io__Input))r7->$type->vobj_proto[0])(r7);
	haxe_io_Bytes_set(r4,r2,r6);
	r6 = 1;
	r3 = r2 + r6;
	r7 = r0->i;
	if( r7 == NULL ) hl_null_access();
	r6 = ((int (*)(haxe__io__Input))r7->$type->vobj_proto[0])(r7);
	haxe_io_Bytes_set(r4,r3,r6);
	r6 = 2;
	r3 = r2 + r6;
	r7 = r0->i;
	if( r7 == NULL ) hl_null_access();
	r6 = ((int (*)(haxe__io__Input))r7->$type->vobj_proto[0])(r7);
	haxe_io_Bytes_set(r4,r3,r6);
	r6 = 3;
	r3 = r2 + r6;
	r2 = r3;
	goto label$bf72c7a_10_5;
	label$bf72c7a_10_28:
	return r4;
}


// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <hxd/BitmapData.h>
extern hl_type t$hxd_BitmapInnerDataImpl;
void hxd_BitmapInnerDataImpl_new(hxd__BitmapInnerDataImpl);
#include <hl/natives.h>
void hxd_BitmapData_fill(hxd__BitmapData,int,int,int,int,int);
extern String s$Not_implemented;
vdynamic* haxe_Exception_thrown(vdynamic*);
#include <h2d/BlendMode.h>
extern venum* g$h2d_BlendMode_Alpha;
extern venum* g$h2d_BlendMode_None;
extern String s$0ded5c7;
String Std_string(vdynamic*);
String String___add__(String,String);
extern String s$Outside_bounds;
void hxd_BitmapData_setPixel(hxd__BitmapData,int,int,int);
hxd__BitmapData hxd_BitmapData_sub(hxd__BitmapData,int,int,int,int);
hxd__BitmapData hxd_BitmapData_fromNative(hxd__BitmapInnerDataImpl);
#include <haxe/io/Bytes.h>
#include <hxd/Pixels.h>
#include <hxd/PixelFormat.h>
haxe__io__Bytes haxe_io_Bytes_alloc(int);
void haxe_io_Bytes_setInt32(haxe__io__Bytes,int,int);
extern hl_type t$hxd_Pixels;
extern venum* g$hxd_PixelFormat_BGRA;
void hxd_Pixels_new(hxd__Pixels,int,int,haxe__io__Bytes,venum*,int*);
extern String s$Invalid_pixels_size;
void hxd_Pixels_setFlip(hxd__Pixels,bool);
void hxd_Pixels_convert(hxd__Pixels,venum*);
int haxe_io_Bytes_getInt32(haxe__io__Bytes,int);
extern hl_type t$hxd_BitmapData;
haxe__io__Bytes hxd_Pixels_toPNG(hxd__Pixels,vdynamic*);
void hxd_Pixels_dispose(hxd__Pixels);

void hxd_BitmapData_new(hxd__BitmapData r0,int r1,int r2) {
	hxd__BitmapInnerDataImpl r6;
	vbyte *r7, *r8;
	int r4, r5, r9;
	r5 = -101;
	if( r1 != r5 ) goto label$c088fd5_1_4;
	r5 = -102;
	if( r2 == r5 ) goto label$c088fd5_1_29;
	label$c088fd5_1_4:
	r6 = (hxd__BitmapInnerDataImpl)hl_alloc_obj(&t$hxd_BitmapInnerDataImpl);
	hxd_BitmapInnerDataImpl_new(r6);
	r0->data = r6;
	r4 = r1 * r2;
	r5 = 4;
	r4 = r4 * r5;
	r7 = hl_alloc_bytes(r4);
	r6 = r0->data;
	if( r6 == NULL ) hl_null_access();
	r6->pixels = r7;
	r6 = r0->data;
	if( r6 == NULL ) hl_null_access();
	r8 = r6->pixels;
	r4 = 0;
	r5 = r1 * r2;
	r9 = 4;
	r5 = r5 * r9;
	r9 = 0;
	hl_bytes_fill(r8,r4,r5,r9);
	r6 = r0->data;
	if( r6 == NULL ) hl_null_access();
	r6->width = r1;
	r6 = r0->data;
	if( r6 == NULL ) hl_null_access();
	r6->height = r2;
	label$c088fd5_1_29:
	return;
}

void hxd_BitmapData_clear(hxd__BitmapData r0,int r1) {
	hxd__BitmapInnerDataImpl r6;
	int r3, r4, r5, r7;
	r3 = 0;
	r4 = 0;
	r6 = r0->data;
	if( r6 == NULL ) hl_null_access();
	r5 = r6->width;
	r6 = r0->data;
	if( r6 == NULL ) hl_null_access();
	r7 = r6->height;
	hxd_BitmapData_fill(r0,r3,r4,r5,r7,r1);
	return;
}

void hxd_BitmapData_notImplemented() {
	String r1;
	vdynamic *r0;
	r1 = (String)s$Not_implemented;
	r0 = haxe_Exception_thrown(((vdynamic*)r1));
	hl_throw((vdynamic*)r0);
}

void hxd_BitmapData_fill(hxd__BitmapData r0,int r1,int r2,int r3,int r4,int r5) {
	hxd__BitmapInnerDataImpl r9;
	vbyte *r15;
	int r7, r8, r10, r11, r12, r13, r14, r16;
	r8 = 0;
	if( r1 >= r8 ) goto label$c088fd5_4_6;
	r7 = r3 + r1;
	r3 = r7;
	r7 = 0;
	r1 = r7;
	label$c088fd5_4_6:
	r8 = 0;
	if( r2 >= r8 ) goto label$c088fd5_4_12;
	r7 = r4 + r2;
	r4 = r7;
	r7 = 0;
	r2 = r7;
	label$c088fd5_4_12:
	r7 = r1 + r3;
	r9 = r0->data;
	if( r9 == NULL ) hl_null_access();
	r8 = r9->width;
	if( r8 >= r7 ) goto label$c088fd5_4_22;
	r9 = r0->data;
	if( r9 == NULL ) hl_null_access();
	r7 = r9->width;
	r7 = r7 - r1;
	r3 = r7;
	label$c088fd5_4_22:
	r7 = r2 + r4;
	r9 = r0->data;
	if( r9 == NULL ) hl_null_access();
	r8 = r9->height;
	if( r8 >= r7 ) goto label$c088fd5_4_32;
	r9 = r0->data;
	if( r9 == NULL ) hl_null_access();
	r7 = r9->height;
	r7 = r7 - r2;
	r4 = r7;
	label$c088fd5_4_32:
	r7 = 0;
	r8 = r4;
	label$c088fd5_4_34:
	if( r7 >= r8 ) goto label$c088fd5_4_59;
	r10 = r7;
	++r7;
	r12 = r2 + r10;
	r9 = r0->data;
	if( r9 == NULL ) hl_null_access();
	r13 = r9->width;
	r12 = r12 * r13;
	r11 = r1 + r12;
	r12 = 0;
	r13 = r3;
	label$c088fd5_4_46:
	if( r12 >= r13 ) goto label$c088fd5_4_58;
	++r12;
	r9 = r0->data;
	if( r9 == NULL ) hl_null_access();
	r15 = r9->pixels;
	r14 = r11;
	++r11;
	r16 = 2;
	r16 = r14 << r16;
	*(int*)(r15 + r16) = r5;
	goto label$c088fd5_4_46;
	label$c088fd5_4_58:
	goto label$c088fd5_4_34;
	label$c088fd5_4_59:
	return;
}

void hxd_BitmapData_draw(hxd__BitmapData r0,int r1,int r2,hxd__BitmapData r3,int r4,int r5,int r6,int r7,venum* r8) {
	String r10;
	vdynamic *r9;
	r10 = (String)s$Not_implemented;
	r9 = haxe_Exception_thrown(((vdynamic*)r10));
	hl_throw((vdynamic*)r9);
}

void hxd_BitmapData_drawScaled(hxd__BitmapData r0,int r1,int r2,int r3,int r4,hxd__BitmapData r5,int r6,int r7,int r8,int r9,venum* r10,bool* r11) {
	String r17, r18;
	venum *r14, *r15;
	bool r12;
	hxd__BitmapInnerDataImpl r21;
	vdynamic *r16;
	vbyte *r22, *r24;
	int r19, r20, r23, r25, r26, r27, r28;
	if( r11 ) goto label$c088fd5_6_3;
	r12 = true;
	goto label$c088fd5_6_4;
	label$c088fd5_6_3:
	r12 = *r11;
	label$c088fd5_6_4:
	if( r10 ) goto label$c088fd5_6_7;
	r14 = (venum*)g$h2d_BlendMode_Alpha;
	r10 = r14;
	label$c088fd5_6_7:
	r15 = (venum*)g$h2d_BlendMode_None;
	if( r10 == r15 ) goto label$c088fd5_6_14;
	r17 = (String)s$0ded5c7;
	r18 = Std_string(((vdynamic*)r10));
	r17 = String___add__(r17,r18);
	r16 = haxe_Exception_thrown(((vdynamic*)r17));
	hl_throw((vdynamic*)r16);
	label$c088fd5_6_14:
	r20 = 0;
	if( r1 < r20 ) goto label$c088fd5_6_51;
	r20 = 0;
	if( r2 < r20 ) goto label$c088fd5_6_51;
	r20 = 0;
	if( r3 < r20 ) goto label$c088fd5_6_51;
	r20 = 0;
	if( r4 < r20 ) goto label$c088fd5_6_51;
	r20 = 0;
	if( r6 < r20 ) goto label$c088fd5_6_51;
	r20 = 0;
	if( r7 < r20 ) goto label$c088fd5_6_51;
	r20 = 0;
	if( r8 < r20 ) goto label$c088fd5_6_51;
	r20 = 0;
	if( r9 < r20 ) goto label$c088fd5_6_51;
	r19 = r1 + r3;
	r21 = r0->data;
	if( r21 == NULL ) hl_null_access();
	r20 = r21->width;
	if( r20 < r19 ) goto label$c088fd5_6_51;
	r19 = r2 + r4;
	r21 = r0->data;
	if( r21 == NULL ) hl_null_access();
	r20 = r21->height;
	if( r20 < r19 ) goto label$c088fd5_6_51;
	r19 = r6 + r8;
	if( r5 == NULL ) hl_null_access();
	r21 = r5->data;
	if( r21 == NULL ) hl_null_access();
	r20 = r21->width;
	if( r20 < r19 ) goto label$c088fd5_6_51;
	r19 = r7 + r9;
	r21 = r5->data;
	if( r21 == NULL ) hl_null_access();
	r20 = r21->height;
	if( r20 >= r19 ) goto label$c088fd5_6_54;
	label$c088fd5_6_51:
	r17 = (String)s$Outside_bounds;
	r16 = haxe_Exception_thrown(((vdynamic*)r17));
	hl_throw((vdynamic*)r16);
	label$c088fd5_6_54:
	r21 = r0->data;
	if( r21 == NULL ) hl_null_access();
	r22 = r21->pixels;
	r21 = r0->data;
	if( r21 == NULL ) hl_null_access();
	r23 = r21->width;
	r20 = r2 * r23;
	r19 = r1 + r20;
	r20 = 2;
	r19 = r19 << r20;
	r21 = r0->data;
	if( r21 == NULL ) hl_null_access();
	r20 = r21->width;
	r23 = 2;
	r20 = r20 << r23;
	r21 = r5->data;
	if( r21 == NULL ) hl_null_access();
	r24 = r21->pixels;
	r21 = r5->data;
	if( r21 == NULL ) hl_null_access();
	r27 = r21->width;
	r26 = r7 * r27;
	r25 = r6 + r26;
	r26 = 2;
	r25 = r25 << r26;
	r21 = r5->data;
	if( r21 == NULL ) hl_null_access();
	r26 = r21->width;
	r27 = 2;
	r26 = r26 << r27;
	if( !r12 ) goto label$c088fd5_6_87;
	r28 = 1;
	goto label$c088fd5_6_88;
	label$c088fd5_6_87:
	r28 = 0;
	label$c088fd5_6_88:
	fmt_img_scale(r22,r19,r20,r3,r4,r24,r25,r26,r8,r9,r28);
	return;
}

void hxd_BitmapData_line(hxd__BitmapData r0,int r1,int r2,int r3,int r4,int r5) {
	bool r22, r30;
	double r24, r25, r26, r27, r28;
	hxd__BitmapInnerDataImpl r11;
	int r6, r7, r9, r10, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r23, r29;
	r6 = r3 - r1;
	r7 = r4 - r2;
	r10 = 0;
	if( r6 != r10 ) goto label$c088fd5_7_34;
	if( r4 >= r2 ) goto label$c088fd5_7_8;
	r9 = r2;
	r2 = r4;
	r4 = r9;
	label$c088fd5_7_8:
	r10 = 0;
	if( r2 >= r10 ) goto label$c088fd5_7_12;
	r9 = 0;
	r2 = r9;
	label$c088fd5_7_12:
	r11 = r0->data;
	if( r11 == NULL ) hl_null_access();
	r10 = r11->height;
	r12 = 1;
	r10 = r10 - r12;
	if( r10 >= r4 ) goto label$c088fd5_7_24;
	r11 = r0->data;
	if( r11 == NULL ) hl_null_access();
	r9 = r11->height;
	r10 = 1;
	r9 = r9 - r10;
	r4 = r9;
	label$c088fd5_7_24:
	r9 = r2;
	r12 = 1;
	r10 = r4 + r12;
	label$c088fd5_7_27:
	if( r9 >= r10 ) goto label$c088fd5_7_33;
	r12 = r9;
	++r9;
	hxd_BitmapData_setPixel(r0,r1,r12,r5);
	goto label$c088fd5_7_27;
	label$c088fd5_7_33:
	goto label$c088fd5_7_386;
	label$c088fd5_7_34:
	r10 = 0;
	if( r7 != r10 ) goto label$c088fd5_7_66;
	if( r3 >= r1 ) goto label$c088fd5_7_40;
	r9 = r1;
	r1 = r3;
	r3 = r9;
	label$c088fd5_7_40:
	r10 = 0;
	if( r1 >= r10 ) goto label$c088fd5_7_44;
	r9 = 0;
	r1 = r9;
	label$c088fd5_7_44:
	r11 = r0->data;
	if( r11 == NULL ) hl_null_access();
	r10 = r11->width;
	r12 = 1;
	r10 = r10 - r12;
	if( r10 >= r3 ) goto label$c088fd5_7_56;
	r11 = r0->data;
	if( r11 == NULL ) hl_null_access();
	r9 = r11->width;
	r10 = 1;
	r9 = r9 - r10;
	r3 = r9;
	label$c088fd5_7_56:
	r9 = r1;
	r12 = 1;
	r10 = r3 + r12;
	label$c088fd5_7_59:
	if( r9 >= r10 ) goto label$c088fd5_7_65;
	r12 = r9;
	++r9;
	hxd_BitmapData_setPixel(r0,r12,r2,r5);
	goto label$c088fd5_7_59;
	label$c088fd5_7_65:
	goto label$c088fd5_7_386;
	label$c088fd5_7_66:
	if( r1 >= r3 ) goto label$c088fd5_7_85;
	r11 = r0->data;
	if( r11 == NULL ) hl_null_access();
	r10 = r11->width;
	if( r1 >= r10 ) goto label$c088fd5_7_73;
	r10 = 0;
	if( r3 >= r10 ) goto label$c088fd5_7_74;
	label$c088fd5_7_73:
	return;
	label$c088fd5_7_74:
	r10 = 1;
	r9 = r10;
	r12 = 0;
	r10 = r12;
	r11 = r0->data;
	if( r11 == NULL ) hl_null_access();
	r13 = r11->width;
	r14 = 1;
	r13 = r13 - r14;
	r12 = r13;
	goto label$c088fd5_7_106;
	label$c088fd5_7_85:
	r11 = r0->data;
	if( r11 == NULL ) hl_null_access();
	r14 = r11->width;
	if( r3 >= r14 ) goto label$c088fd5_7_91;
	r14 = 0;
	if( r1 >= r14 ) goto label$c088fd5_7_92;
	label$c088fd5_7_91:
	return;
	label$c088fd5_7_92:
	r13 = -1;
	r9 = r13;
	r13 = -r3;
	r3 = r13;
	r13 = -r1;
	r1 = r13;
	r13 = 1;
	r11 = r0->data;
	if( r11 == NULL ) hl_null_access();
	r14 = r11->width;
	r13 = r13 - r14;
	r10 = r13;
	r13 = 0;
	r12 = r13;
	label$c088fd5_7_106:
	if( r2 >= r4 ) goto label$c088fd5_7_125;
	r11 = r0->data;
	if( r11 == NULL ) hl_null_access();
	r14 = r11->height;
	if( r2 >= r14 ) goto label$c088fd5_7_113;
	r14 = 0;
	if( r4 >= r14 ) goto label$c088fd5_7_114;
	label$c088fd5_7_113:
	return;
	label$c088fd5_7_114:
	r14 = 1;
	r13 = r14;
	r15 = 0;
	r14 = r15;
	r11 = r0->data;
	if( r11 == NULL ) hl_null_access();
	r16 = r11->height;
	r17 = 1;
	r16 = r16 - r17;
	r15 = r16;
	goto label$c088fd5_7_146;
	label$c088fd5_7_125:
	r11 = r0->data;
	if( r11 == NULL ) hl_null_access();
	r17 = r11->width;
	if( r4 >= r17 ) goto label$c088fd5_7_131;
	r17 = 0;
	if( r2 >= r17 ) goto label$c088fd5_7_132;
	label$c088fd5_7_131:
	return;
	label$c088fd5_7_132:
	r16 = -1;
	r13 = r16;
	r16 = -r4;
	r4 = r16;
	r16 = -r2;
	r2 = r16;
	r16 = 1;
	r11 = r0->data;
	if( r11 == NULL ) hl_null_access();
	r17 = r11->height;
	r16 = r16 - r17;
	r14 = r16;
	r16 = 0;
	r15 = r16;
	label$c088fd5_7_146:
	r16 = r3 - r1;
	r6 = r16;
	r16 = r4 - r2;
	r7 = r16;
	r17 = 1;
	r16 = r6 << r17;
	r18 = 1;
	r17 = r7 << r18;
	r18 = r1;
	r19 = r2;
	if( r6 < r7 ) goto label$c088fd5_7_272;
	r20 = r17 - r6;
	r22 = false;
	if( r2 >= r14 ) goto label$c088fd5_7_190;
	r24 = (double)r16;
	r21 = r14 - r2;
	r26 = (double)r21;
	r25 = r24 * r26;
	r26 = (double)r6;
	r25 = r25 - r26;
	r24 = r25;
	r26 = (double)r17;
	r25 = r25 / r26;
	r23 = (int)r25;
	r21 = r1 + r23;
	r18 = r21;
	if( r12 >= r21 ) goto label$c088fd5_7_174;
	return;
	label$c088fd5_7_174:
	if( r21 < r10 ) goto label$c088fd5_7_190;
	r28 = (double)r17;
	r27 = r25 * r28;
	r26 = r24 - r27;
	r23 = (int)r26;
	r23 = r23 + r6;
	r21 = r20 - r23;
	r20 = r21;
	r19 = r14;
	r27 = 0.;
	if( !(r27 < r26) ) goto label$c088fd5_7_188;
	++r18;
	r21 = r20 + r17;
	r20 = r21;
	label$c088fd5_7_188:
	r30 = true;
	r22 = r30;
	label$c088fd5_7_190:
	if( r22 ) goto label$c088fd5_7_218;
	if( r1 >= r10 ) goto label$c088fd5_7_218;
	r24 = (double)r17;
	r21 = r10 - r1;
	r26 = (double)r21;
	r25 = r24 * r26;
	r24 = r25;
	r26 = (double)r16;
	r25 = r25 / r26;
	r23 = (int)r25;
	r21 = r19 + r23;
	r19 = r21;
	r27 = (double)r16;
	r26 = fmod(r24,r27);
	if( r15 < r19 ) goto label$c088fd5_7_208;
	if( r19 != r15 ) goto label$c088fd5_7_209;
	r27 = (double)r6;
	if( !(r27 < r26) ) goto label$c088fd5_7_209;
	label$c088fd5_7_208:
	return;
	label$c088fd5_7_209:
	r18 = r10;
	r23 = (int)r26;
	r21 = r20 + r23;
	r20 = r21;
	r27 = (double)r6;
	if( !(r26 >= r27) ) goto label$c088fd5_7_218;
	++r19;
	r21 = r20 - r16;
	r20 = r21;
	label$c088fd5_7_218:
	r21 = r3;
	if( r15 >= r4 ) goto label$c088fd5_7_238;
	r24 = (double)r16;
	r23 = r15 - r4;
	r26 = (double)r23;
	r25 = r24 * r26;
	r26 = (double)r6;
	r25 = r25 + r26;
	r24 = r25;
	r26 = (double)r17;
	r25 = r25 / r26;
	r29 = (int)r25;
	r23 = r3 + r29;
	r21 = r23;
	r28 = (double)r17;
	r27 = r25 * r28;
	r26 = r24 - r27;
	r27 = 0.;
	if( r26 != r27 ) goto label$c088fd5_7_238;
	--r21;
	label$c088fd5_7_238:
	if( r12 >= r21 ) goto label$c088fd5_7_243;
	r29 = 1;
	r23 = r12 + r29;
	r21 = r23;
	goto label$c088fd5_7_244;
	label$c088fd5_7_243:
	++r21;
	label$c088fd5_7_244:
	r29 = -1;
	if( r9 != r29 ) goto label$c088fd5_7_250;
	r23 = -r18;
	r18 = r23;
	r23 = -r21;
	r21 = r23;
	label$c088fd5_7_250:
	r29 = -1;
	if( r13 != r29 ) goto label$c088fd5_7_254;
	r23 = -r19;
	r19 = r23;
	label$c088fd5_7_254:
	r23 = r16 - r17;
	r16 = r23;
	label$c088fd5_7_256:
	if( r18 == r21 ) goto label$c088fd5_7_271;
	hxd_BitmapData_setPixel(r0,r18,r19,r5);
	r29 = 0;
	if( r20 < r29 ) goto label$c088fd5_7_266;
	r23 = r19 + r13;
	r19 = r23;
	r23 = r20 - r16;
	r20 = r23;
	goto label$c088fd5_7_268;
	label$c088fd5_7_266:
	r23 = r20 + r17;
	r20 = r23;
	label$c088fd5_7_268:
	r23 = r18 + r9;
	r18 = r23;
	goto label$c088fd5_7_256;
	label$c088fd5_7_271:
	goto label$c088fd5_7_386;
	label$c088fd5_7_272:
	r20 = r16 - r7;
	r22 = false;
	if( r1 >= r10 ) goto label$c088fd5_7_305;
	r24 = (double)r17;
	r21 = r10 - r1;
	r26 = (double)r21;
	r25 = r24 * r26;
	r26 = (double)r7;
	r25 = r25 - r26;
	r24 = r25;
	r26 = (double)r16;
	r25 = r25 / r26;
	r23 = (int)r25;
	r21 = r2 + r23;
	r19 = r21;
	if( r15 >= r21 ) goto label$c088fd5_7_289;
	return;
	label$c088fd5_7_289:
	if( r21 < r14 ) goto label$c088fd5_7_305;
	r28 = (double)r16;
	r27 = r25 * r28;
	r26 = r24 - r27;
	r23 = (int)r26;
	r23 = r23 + r7;
	r21 = r20 - r23;
	r20 = r21;
	r18 = r10;
	r27 = 0.;
	if( !(r27 < r26) ) goto label$c088fd5_7_303;
	++r19;
	r21 = r20 + r16;
	r20 = r21;
	label$c088fd5_7_303:
	r30 = true;
	r22 = r30;
	label$c088fd5_7_305:
	if( r22 ) goto label$c088fd5_7_333;
	if( r2 >= r14 ) goto label$c088fd5_7_333;
	r24 = (double)r16;
	r21 = r14 - r2;
	r26 = (double)r21;
	r25 = r24 * r26;
	r24 = r25;
	r26 = (double)r17;
	r25 = r25 / r26;
	r23 = (int)r25;
	r21 = r18 + r23;
	r18 = r21;
	r27 = (double)r17;
	r26 = fmod(r24,r27);
	if( r12 < r18 ) goto label$c088fd5_7_323;
	if( r18 != r12 ) goto label$c088fd5_7_324;
	r27 = (double)r7;
	if( !(r27 < r26) ) goto label$c088fd5_7_324;
	label$c088fd5_7_323:
	return;
	label$c088fd5_7_324:
	r19 = r14;
	r23 = (int)r26;
	r21 = r20 + r23;
	r20 = r21;
	r27 = (double)r7;
	if( !(r26 >= r27) ) goto label$c088fd5_7_333;
	++r18;
	r21 = r20 - r17;
	r20 = r21;
	label$c088fd5_7_333:
	r21 = r4;
	if( r12 >= r3 ) goto label$c088fd5_7_353;
	r24 = (double)r17;
	r23 = r12 - r3;
	r26 = (double)r23;
	r25 = r24 * r26;
	r26 = (double)r7;
	r25 = r25 + r26;
	r24 = r25;
	r26 = (double)r16;
	r25 = r25 / r26;
	r29 = (int)r25;
	r23 = r4 + r29;
	r21 = r23;
	r28 = (double)r16;
	r27 = r25 * r28;
	r26 = r24 - r27;
	r27 = 0.;
	if( r26 != r27 ) goto label$c088fd5_7_353;
	--r21;
	label$c088fd5_7_353:
	if( r15 >= r21 ) goto label$c088fd5_7_358;
	r29 = 1;
	r23 = r15 + r29;
	r21 = r23;
	goto label$c088fd5_7_359;
	label$c088fd5_7_358:
	++r21;
	label$c088fd5_7_359:
	r29 = -1;
	if( r9 != r29 ) goto label$c088fd5_7_363;
	r23 = -r18;
	r18 = r23;
	label$c088fd5_7_363:
	r29 = -1;
	if( r13 != r29 ) goto label$c088fd5_7_369;
	r23 = -r19;
	r19 = r23;
	r23 = -r21;
	r21 = r23;
	label$c088fd5_7_369:
	r23 = r17 - r16;
	r17 = r23;
	label$c088fd5_7_371:
	if( r19 == r21 ) goto label$c088fd5_7_386;
	hxd_BitmapData_setPixel(r0,r18,r19,r5);
	r29 = 0;
	if( r20 < r29 ) goto label$c088fd5_7_381;
	r23 = r18 + r9;
	r18 = r23;
	r23 = r20 - r17;
	r20 = r23;
	goto label$c088fd5_7_383;
	label$c088fd5_7_381:
	r23 = r20 + r16;
	r20 = r23;
	label$c088fd5_7_383:
	r23 = r19 + r13;
	r19 = r23;
	goto label$c088fd5_7_371;
	label$c088fd5_7_386:
	return;
}

void hxd_BitmapData_dispose(hxd__BitmapData r0) {
	hxd__BitmapInnerDataImpl r1;
	r1 = NULL;
	r0->data = r1;
	return;
}

hxd__BitmapData hxd_BitmapData_clone(hxd__BitmapData r0) {
	hxd__BitmapData r1;
	hxd__BitmapInnerDataImpl r5;
	int r2, r3, r4, r6;
	r2 = 0;
	r3 = 0;
	r5 = r0->data;
	if( r5 == NULL ) hl_null_access();
	r4 = r5->width;
	r5 = r0->data;
	if( r5 == NULL ) hl_null_access();
	r6 = r5->height;
	r1 = hxd_BitmapData_sub(r0,r2,r3,r4,r6);
	return r1;
}

hxd__BitmapData hxd_BitmapData_sub(hxd__BitmapData r0,int r1,int r2,int r3,int r4) {
	String r10;
	hxd__BitmapData r21;
	hxd__BitmapInnerDataImpl r8, r11;
	vdynamic *r9;
	vbyte *r12, *r13, *r16;
	int r6, r7, r14, r15, r17, r18, r19, r20;
	r7 = 0;
	if( r1 < r7 ) goto label$c088fd5_10_18;
	r7 = 0;
	if( r2 < r7 ) goto label$c088fd5_10_18;
	r7 = 0;
	if( r3 < r7 ) goto label$c088fd5_10_18;
	r7 = 0;
	if( r4 < r7 ) goto label$c088fd5_10_18;
	r6 = r1 + r3;
	r8 = r0->data;
	if( r8 == NULL ) hl_null_access();
	r7 = r8->width;
	if( r7 < r6 ) goto label$c088fd5_10_18;
	r6 = r2 + r4;
	r8 = r0->data;
	if( r8 == NULL ) hl_null_access();
	r7 = r8->height;
	if( r7 >= r6 ) goto label$c088fd5_10_21;
	label$c088fd5_10_18:
	r10 = (String)s$Outside_bounds;
	r9 = haxe_Exception_thrown(((vdynamic*)r10));
	hl_throw((vdynamic*)r9);
	label$c088fd5_10_21:
	r8 = (hxd__BitmapInnerDataImpl)hl_alloc_obj(&t$hxd_BitmapInnerDataImpl);
	hxd_BitmapInnerDataImpl_new(r8);
	r8->width = r3;
	r8->height = r4;
	r6 = r3 * r4;
	r7 = 4;
	r6 = r6 * r7;
	r12 = hl_alloc_bytes(r6);
	r8->pixels = r12;
	r6 = 0;
	r7 = r4;
	label$c088fd5_10_32:
	if( r6 >= r7 ) goto label$c088fd5_10_56;
	r14 = r6;
	++r6;
	if( r8 == NULL ) hl_null_access();
	r13 = r8->pixels;
	r11 = r0->data;
	if( r11 == NULL ) hl_null_access();
	r16 = r11->pixels;
	r17 = r2 + r14;
	r11 = r0->data;
	if( r11 == NULL ) hl_null_access();
	r18 = r11->width;
	r17 = r17 * r18;
	r15 = r1 + r17;
	r17 = r14 * r3;
	r18 = 2;
	r17 = r17 << r18;
	r19 = 2;
	r18 = r15 << r19;
	r20 = 2;
	r19 = r3 << r20;
	hl_bytes_blit(r13,r17,r16,r18,r19);
	goto label$c088fd5_10_32;
	label$c088fd5_10_56:
	r21 = hxd_BitmapData_fromNative(r8);
	return r21;
}

void hxd_BitmapData_lock(hxd__BitmapData r0) {
	return;
}

void hxd_BitmapData_unlock(hxd__BitmapData r0) {
	return;
}

int hxd_BitmapData_getPixel(hxd__BitmapData r0,int r1,int r2) {
	hxd__BitmapInnerDataImpl r5;
	vbyte *r6;
	int r3, r4, r7;
	r4 = 0;
	if( r1 < r4 ) goto label$c088fd5_13_24;
	r4 = 0;
	if( r2 < r4 ) goto label$c088fd5_13_24;
	r5 = r0->data;
	if( r5 == NULL ) hl_null_access();
	r4 = r5->width;
	if( r1 >= r4 ) goto label$c088fd5_13_24;
	r5 = r0->data;
	if( r5 == NULL ) hl_null_access();
	r4 = r5->height;
	if( r2 >= r4 ) goto label$c088fd5_13_24;
	r5 = r0->data;
	if( r5 == NULL ) hl_null_access();
	r6 = r5->pixels;
	r5 = r0->data;
	if( r5 == NULL ) hl_null_access();
	r7 = r5->width;
	r4 = r2 * r7;
	r3 = r1 + r4;
	r7 = 2;
	r7 = r3 << r7;
	r4 = *(int*)(r6 + r7);
	return r4;
	label$c088fd5_13_24:
	r3 = 0;
	return r3;
}

void hxd_BitmapData_setPixel(hxd__BitmapData r0,int r1,int r2,int r3) {
	hxd__BitmapInnerDataImpl r7;
	vbyte *r8;
	int r5, r6, r9, r10;
	r6 = 0;
	if( r1 < r6 ) goto label$c088fd5_14_23;
	r6 = 0;
	if( r2 < r6 ) goto label$c088fd5_14_23;
	r7 = r0->data;
	if( r7 == NULL ) hl_null_access();
	r6 = r7->width;
	if( r1 >= r6 ) goto label$c088fd5_14_23;
	r7 = r0->data;
	if( r7 == NULL ) hl_null_access();
	r6 = r7->height;
	if( r2 >= r6 ) goto label$c088fd5_14_23;
	r7 = r0->data;
	if( r7 == NULL ) hl_null_access();
	r8 = r7->pixels;
	r7 = r0->data;
	if( r7 == NULL ) hl_null_access();
	r9 = r7->width;
	r6 = r2 * r9;
	r5 = r1 + r6;
	r10 = 2;
	r10 = r5 << r10;
	*(int*)(r8 + r10) = r3;
	label$c088fd5_14_23:
	return;
}

int hxd_BitmapData_get_width(hxd__BitmapData r0) {
	hxd__BitmapInnerDataImpl r2;
	int r1;
	r2 = r0->data;
	if( r2 == NULL ) hl_null_access();
	r1 = r2->width;
	return r1;
}

int hxd_BitmapData_get_height(hxd__BitmapData r0) {
	hxd__BitmapInnerDataImpl r2;
	int r1;
	r2 = r0->data;
	if( r2 == NULL ) hl_null_access();
	r1 = r2->height;
	return r1;
}

hxd__Pixels hxd_BitmapData_getPixels(hxd__BitmapData r0) {
	hxd__Pixels r11;
	venum *r12;
	haxe__io__Bytes r1;
	hxd__BitmapInnerDataImpl r3;
	int *r13;
	vbyte *r8;
	int r2, r4, r6, r7, r9, r10;
	r3 = r0->data;
	if( r3 == NULL ) hl_null_access();
	r2 = r3->width;
	r3 = r0->data;
	if( r3 == NULL ) hl_null_access();
	r4 = r3->height;
	r2 = r2 * r4;
	r4 = 4;
	r2 = r2 * r4;
	r1 = haxe_io_Bytes_alloc(r2);
	r2 = 0;
	r3 = r0->data;
	if( r3 == NULL ) hl_null_access();
	r4 = r3->width;
	r3 = r0->data;
	if( r3 == NULL ) hl_null_access();
	r6 = r3->height;
	r4 = r4 * r6;
	label$c088fd5_17_18:
	if( r2 >= r4 ) goto label$c088fd5_17_33;
	r6 = r2;
	++r2;
	r3 = r0->data;
	if( r3 == NULL ) hl_null_access();
	r8 = r3->pixels;
	if( r1 == NULL ) hl_null_access();
	r9 = 2;
	r7 = r6 << r9;
	r10 = 2;
	r10 = r6 << r10;
	r9 = *(int*)(r8 + r10);
	haxe_io_Bytes_setInt32(r1,r7,r9);
	goto label$c088fd5_17_18;
	label$c088fd5_17_33:
	r11 = (hxd__Pixels)hl_alloc_obj(&t$hxd_Pixels);
	r3 = r0->data;
	if( r3 == NULL ) hl_null_access();
	r2 = r3->width;
	r3 = r0->data;
	if( r3 == NULL ) hl_null_access();
	r4 = r3->height;
	r12 = (venum*)g$hxd_PixelFormat_BGRA;
	r13 = NULL;
	hxd_Pixels_new(r11,r2,r4,r1,r12,r13);
	return r11;
}

void hxd_BitmapData_setPixels(hxd__BitmapData r0,hxd__Pixels r1) {
	String r7;
	venum *r9;
	haxe__io__Bytes r10;
	bool r8;
	hxd__BitmapInnerDataImpl r5;
	vdynamic *r6;
	vbyte *r13;
	int r3, r4, r11, r12, r14, r15;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->width;
	r5 = r0->data;
	if( r5 == NULL ) hl_null_access();
	r4 = r5->width;
	if( r3 != r4 ) goto label$c088fd5_18_11;
	r3 = r1->height;
	r5 = r0->data;
	if( r5 == NULL ) hl_null_access();
	r4 = r5->height;
	if( r3 == r4 ) goto label$c088fd5_18_14;
	label$c088fd5_18_11:
	r7 = (String)s$Invalid_pixels_size;
	r6 = haxe_Exception_thrown(((vdynamic*)r7));
	hl_throw((vdynamic*)r6);
	label$c088fd5_18_14:
	r8 = false;
	hxd_Pixels_setFlip(r1,r8);
	r9 = (venum*)g$hxd_PixelFormat_BGRA;
	hxd_Pixels_convert(r1,r9);
	r10 = r1->bytes;
	r3 = 0;
	r5 = r0->data;
	if( r5 == NULL ) hl_null_access();
	r4 = r5->width;
	r5 = r0->data;
	if( r5 == NULL ) hl_null_access();
	r11 = r5->height;
	r4 = r4 * r11;
	label$c088fd5_18_27:
	if( r3 >= r4 ) goto label$c088fd5_18_42;
	r11 = r3;
	++r3;
	r5 = r0->data;
	if( r5 == NULL ) hl_null_access();
	r13 = r5->pixels;
	if( r10 == NULL ) hl_null_access();
	r14 = 2;
	r12 = r11 << r14;
	r12 = haxe_io_Bytes_getInt32(r10,r12);
	r15 = 2;
	r15 = r11 << r15;
	*(int*)(r13 + r15) = r12;
	goto label$c088fd5_18_27;
	label$c088fd5_18_42:
	return;
}

hxd__BitmapInnerDataImpl hxd_BitmapData_toNative(hxd__BitmapData r0) {
	hxd__BitmapInnerDataImpl r1;
	r1 = r0->data;
	return r1;
}

hxd__BitmapData hxd_BitmapData_fromNative(hxd__BitmapInnerDataImpl r0) {
	hxd__BitmapData r1;
	int r2, r3;
	r1 = (hxd__BitmapData)hl_alloc_obj(&t$hxd_BitmapData);
	r2 = -101;
	r3 = -102;
	hxd_BitmapData_new(r1,r2,r3);
	r1->data = r0;
	return r1;
}

haxe__io__Bytes hxd_BitmapData_toPNG(hxd__BitmapData r0) {
	hxd__Pixels r1;
	haxe__io__Bytes r3;
	vdynamic *r4;
	r1 = hxd_BitmapData_getPixels(r0);
	if( r1 == NULL ) hl_null_access();
	r4 = NULL;
	r3 = hxd_Pixels_toPNG(r1,r4);
	hxd_Pixels_dispose(r1);
	return r3;
}


﻿// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <hxd/res/BitmapFont.h>
#include <hxd/res/Loader.h>
void hxd_res_Resource_new(hxd__res__Resource,hxd__fs__FileEntry);
extern hxd__res__$Loader g$_hxd_res_Loader;
#include <haxe/io/Bytes.h>
#include <h2d/Tile.h>
h2d__Tile hxd_res_BitmapFont_resolveTile(hxd__res__BitmapFont,String);
extern hl_type t$fun_4aa181c;
h2d__Font hxd_fmt_bfnt_FontParser_parse(haxe__io__Bytes,String,vclosure*);
#include <h2d/FontType.h>
extern hl_type t$hl_types_ArrayObj;
void hl_types_ArrayObj_new(hl__types__ArrayObj);
extern hl_type t$_i32;
h2d__Tile hxd_res_BitmapFont_resolveSdfTile(hxd__res__BitmapFont,String);
extern hl_type t$h2d_FontType;
void h2d_Font_resizeTo(h2d__Font,int);
int hl_types_ArrayObj_push(hl__types__ArrayObj,vdynamic*);
#include <h3d/mat/Texture.h>
#include <hxd/res/Any.h>
#include <h3d/mat/Filter.h>
hxd__res__Any hxd_res_Loader_load(hxd__res__Loader,String);
h3d__mat__Texture hxd_res_Any_toTexture(hxd__res__Any);
extern venum* g$h3d_mat_Filter_Linear;
venum* h3d_mat_Texture_set_filter(h3d__mat__Texture,venum*);
h2d__Tile h2d_Tile_fromTexture(h3d__mat__Texture);
h2d__Tile hxd_res_Any_toTile(hxd__res__Any);

void hxd_res_BitmapFont_new(hxd__res__BitmapFont r0,hxd__fs__FileEntry r1) {
	hxd__res__$Loader r4;
	hxd__res__Loader r3;
	hxd_res_Resource_new(((hxd__res__Resource)r0),r1);
	r4 = (hxd__res__$Loader)g$_hxd_res_Loader;
	r3 = r4->currentInstance;
	r0->loader = r3;
	return;
}

h2d__Font hxd_res_BitmapFont_toFont(hxd__res__BitmapFont r0) {
	String r4;
	hxd__fs__FileEntry r3;
	haxe__io__Bytes r2;
	h2d__Font r1;
	vclosure *r5;
	r1 = r0->font;
	if( r1 ) goto label$fbf8bfe_2_11;
	r3 = r0->entry;
	if( r3 == NULL ) hl_null_access();
	r2 = ((haxe__io__Bytes (*)(hxd__fs__FileEntry))r3->$type->vobj_proto[1])(r3);
	r3 = r0->entry;
	if( r3 == NULL ) hl_null_access();
	r4 = ((String (*)(hxd__fs__FileEntry))r3->$type->vobj_proto[15])(r3);
	r5 = hl_alloc_closure_ptr(&t$fun_4aa181c,hxd_res_BitmapFont_resolveTile,r0);
	r1 = hxd_fmt_bfnt_FontParser_parse(r2,r4,r5);
	r0->font = r1;
	label$fbf8bfe_2_11:
	r1 = r0->font;
	return r1;
}

h2d__Font hxd_res_BitmapFont_toSdfFont(hxd__res__BitmapFont r0,vdynamic* r1,int* r2,double* r3,double* r4) {
	String r22;
	hxd__fs__FileEntry r21;
	hl__types__ArrayObj r9;
	venum *r17;
	haxe__io__Bytes r20;
	h2d__Font r12;
	vclosure *r23;
	double r6, r7, r18, r19;
	vdynamic *r10, *r15;
	varray *r16;
	int r5, r11, r13, r14;
	if( r2 ) goto label$fbf8bfe_3_3;
	r5 = 0;
	goto label$fbf8bfe_3_4;
	label$fbf8bfe_3_3:
	r5 = *r2;
	label$fbf8bfe_3_4:
	if( r3 ) goto label$fbf8bfe_3_7;
	r6 = 0.5;
	goto label$fbf8bfe_3_8;
	label$fbf8bfe_3_7:
	r6 = *r3;
	label$fbf8bfe_3_8:
	if( r4 ) goto label$fbf8bfe_3_11;
	r7 = 0.03125;
	goto label$fbf8bfe_3_12;
	label$fbf8bfe_3_11:
	r7 = *r4;
	label$fbf8bfe_3_12:
	r9 = r0->sdfFonts;
	if( r9 ) goto label$fbf8bfe_3_17;
	r9 = (hl__types__ArrayObj)hl_alloc_obj(&t$hl_types_ArrayObj);
	hl_types_ArrayObj_new(r9);
	r0->sdfFonts = r9;
	label$fbf8bfe_3_17:
	if( r1 ) goto label$fbf8bfe_3_23;
	r12 = hxd_res_BitmapFont_toFont(r0);
	if( r12 == NULL ) hl_null_access();
	r11 = r12->size;
	r10 = hl_alloc_dynamic(&t$_i32);
	r10->v.i = r11;
	r1 = r10;
	label$fbf8bfe_3_23:
	r11 = 0;
	r9 = r0->sdfFonts;
	label$fbf8bfe_3_25:
	if( r9 == NULL ) hl_null_access();
	r14 = r9->length;
	if( r11 >= r14 ) goto label$fbf8bfe_3_54;
	r14 = r9->length;
	if( ((unsigned)r11) < ((unsigned)r14) ) goto label$fbf8bfe_3_33;
	r12 = NULL;
	goto label$fbf8bfe_3_36;
	label$fbf8bfe_3_33:
	r16 = r9->array;
	r15 = ((vdynamic**)(r16 + 1))[r11];
	r12 = (h2d__Font)r15;
	label$fbf8bfe_3_36:
	++r11;
	if( r12 == NULL ) hl_null_access();
	r17 = r12->type;
	if( r17 == NULL ) hl_null_access();
	r13 = HL__ENUM_INDEX__(r17);
	r14 = 1;
	if( r13 != r14 ) goto label$fbf8bfe_3_53;
	r13 = ((h2d_FontType_SignedDistanceField*)r17)->p0;
	r18 = ((h2d_FontType_SignedDistanceField*)r17)->p1;
	r19 = ((h2d_FontType_SignedDistanceField*)r17)->p2;
	r14 = r12->size;
	r10 = hl_alloc_dynamic(&t$_i32);
	r10->v.i = r14;
	if( r10 != r1 && (!r10 || !r1 || (r10->v.i != r1->v.i)) ) goto label$fbf8bfe_3_53;
	if( r13 != r5 ) goto label$fbf8bfe_3_53;
	if( r18 != r6 ) goto label$fbf8bfe_3_53;
	if( r19 != r7 ) goto label$fbf8bfe_3_53;
	return r12;
	label$fbf8bfe_3_53:
	goto label$fbf8bfe_3_25;
	label$fbf8bfe_3_54:
	r21 = r0->entry;
	if( r21 == NULL ) hl_null_access();
	r20 = ((haxe__io__Bytes (*)(hxd__fs__FileEntry))r21->$type->vobj_proto[1])(r21);
	r21 = r0->entry;
	if( r21 == NULL ) hl_null_access();
	r22 = ((String (*)(hxd__fs__FileEntry))r21->$type->vobj_proto[15])(r21);
	r23 = hl_alloc_closure_ptr(&t$fun_4aa181c,hxd_res_BitmapFont_resolveSdfTile,r0);
	r12 = hxd_fmt_bfnt_FontParser_parse(r20,r22,r23);
	if( r12 == NULL ) hl_null_access();
	r17 = hl_alloc_enum(&t$h2d_FontType,1);
	((h2d_FontType_SignedDistanceField*)r17)->p0 = r5;
	((h2d_FontType_SignedDistanceField*)r17)->p1 = r6;
	((h2d_FontType_SignedDistanceField*)r17)->p2 = r7;
	r12->type = r17;
	r11 = r1 ? r1->v.i : 0;
	h2d_Font_resizeTo(r12,r11);
	r9 = r0->sdfFonts;
	if( r9 == NULL ) hl_null_access();
	r11 = hl_types_ArrayObj_push(r9,((vdynamic*)r12));
	return r12;
}

h2d__Tile hxd_res_BitmapFont_resolveSdfTile(hxd__res__BitmapFont r0,String r1) {
	venum *r5;
	h2d__Tile r6;
	hxd__res__Loader r4;
	hxd__res__Any r3;
	h3d__mat__Texture r2;
	r4 = r0->loader;
	if( r4 == NULL ) hl_null_access();
	r3 = hxd_res_Loader_load(r4,r1);
	if( r3 == NULL ) hl_null_access();
	r2 = hxd_res_Any_toTexture(r3);
	if( r2 == NULL ) hl_null_access();
	r5 = (venum*)g$h3d_mat_Filter_Linear;
	r5 = h3d_mat_Texture_set_filter(r2,r5);
	r6 = h2d_Tile_fromTexture(r2);
	return r6;
}

h2d__Tile hxd_res_BitmapFont_resolveTile(hxd__res__BitmapFont r0,String r1) {
	h2d__Tile r2;
	hxd__res__Loader r4;
	hxd__res__Any r3;
	r4 = r0->loader;
	if( r4 == NULL ) hl_null_access();
	r3 = hxd_res_Loader_load(r4,r1);
	if( r3 == NULL ) hl_null_access();
	r2 = hxd_res_Any_toTile(r3);
	return r2;
}

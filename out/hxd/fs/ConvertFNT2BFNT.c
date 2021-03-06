// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <hxd/fs/ConvertFNT2BFNT.h>
#include <h3d/mat/Texture.h>
extern hl_type t$h2d_Tile;
void h2d_Tile_new(h2d__Tile,h3d__mat__Texture,double,double,double,double,double*,double*);
extern String s$fnt;
extern hl_type t$vrt_f85eed7;
extern String s$bfnt;
void hxd_fs_Convert_new(hxd__fs__Convert,vvirtual*,String);
#include <h2d/Font.h>
#include <haxe/io/BytesOutput.h>
#include <hxd/fmt/bfnt/Writer.h>
h2d__Tile hxd_fs_ConvertFNT2BFNT_resolveTile(hxd__fs__ConvertFNT2BFNT,String);
extern hl_type t$fun_17f6847;
h2d__Font hxd_fmt_bfnt_FontParser_parse(haxe__io__Bytes,String,vclosure*);
extern hl_type t$haxe_io_BytesOutput;
void haxe_io_BytesOutput_new(haxe__io__BytesOutput);
extern hl_type t$hxd_fmt_bfnt_Writer;
#include <haxe/io/Output.h>
void hxd_fmt_bfnt_Writer_new(hxd__fmt__bfnt__Writer,haxe__io__Output);
void hxd_fmt_bfnt_Writer_write(hxd__fmt__bfnt__Writer,h2d__Font);
haxe__io__Bytes haxe_io_BytesOutput_getBytes(haxe__io__BytesOutput);
void hxd_fs_Convert_save(hxd__fs__Convert,haxe__io__Bytes);
bool sys_FileSystem_exists(String);
extern String s$5dc6112;
String String___add__(String,String);
vdynamic* haxe_Exception_thrown(vdynamic*);

void hxd_fs_ConvertFNT2BFNT_new(hxd__fs__ConvertFNT2BFNT r0) {
	String r13;
	vvirtual *r14;
	h2d__Tile r1;
	double r3, r4, r5, r6, r8, r10;
	double *r9, *r11;
	int r7;
	h3d__mat__Texture r2;
	r1 = (h2d__Tile)hl_alloc_obj(&t$h2d_Tile);
	r2 = NULL;
	r3 = 0.;
	r4 = 0.;
	r5 = 0.;
	r6 = 0.;
	r7 = 0;
	r8 = (double)r7;
	r9 = &r8;
	r7 = 0;
	r10 = (double)r7;
	r11 = &r10;
	h2d_Tile_new(r1,r2,r3,r4,r5,r6,r9,r11);
	r0->emptyTile = r1;
	r13 = (String)s$fnt;
	r14 = hl_to_virtual(&t$vrt_f85eed7,(vdynamic*)r13);
	r13 = (String)s$bfnt;
	hxd_fs_Convert_new(((hxd__fs__Convert)r0),r14,r13);
	r7 = 1;
	r0->version = r7;
	return;
}

void hxd_fs_ConvertFNT2BFNT_convert(hxd__fs__ConvertFNT2BFNT r0) {
	hxd__fmt__bfnt__Writer r7;
	String r3;
	haxe__io__Bytes r2;
	haxe__io__BytesOutput r6;
	h2d__Font r1;
	vclosure *r4;
	r2 = r0->srcBytes;
	r3 = r0->srcPath;
	r4 = hl_alloc_closure_ptr(&t$fun_17f6847,hxd_fs_ConvertFNT2BFNT_resolveTile,r0);
	r1 = hxd_fmt_bfnt_FontParser_parse(r2,r3,r4);
	r6 = (haxe__io__BytesOutput)hl_alloc_obj(&t$haxe_io_BytesOutput);
	haxe_io_BytesOutput_new(r6);
	r7 = (hxd__fmt__bfnt__Writer)hl_alloc_obj(&t$hxd_fmt_bfnt_Writer);
	hxd_fmt_bfnt_Writer_new(r7,((haxe__io__Output)r6));
	hxd_fmt_bfnt_Writer_write(r7,r1);
	r2 = haxe_io_BytesOutput_getBytes(r6);
	hxd_fs_Convert_save(((hxd__fs__Convert)r0),r2);
	return;
}

h2d__Tile hxd_fs_ConvertFNT2BFNT_resolveTile(hxd__fs__ConvertFNT2BFNT r0,String r1) {
	String r3;
	bool r2;
	h2d__Tile r5;
	vdynamic *r4;
	r2 = sys_FileSystem_exists(r1);
	if( r2 ) goto label$f32bc61_3_6;
	r3 = (String)s$5dc6112;
	r3 = String___add__(r3,r1);
	r4 = haxe_Exception_thrown(((vdynamic*)r3));
	hl_throw((vdynamic*)r4);
	label$f32bc61_3_6:
	r5 = r0->emptyTile;
	return r5;
}


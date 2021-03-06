// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <sys/io/FileOutput.h>
#include <hl/natives.h>
#include <haxe/io/Eof.h>
extern hl_type t$haxe_io_Eof;
void haxe_io_Eof_new(haxe__io__Eof);
vdynamic* haxe_Exception_thrown(vdynamic*);
#include <haxe/io/Bytes.h>
#include <haxe/io/Error.h>
#include <haxe/io/BytesDataImpl.h>
extern venum* g$haxe_io_Error_OutsideBounds;
extern hl_type t$haxe_io_BytesDataImpl;
void haxe_io_BytesDataImpl_new(haxe__io__BytesDataImpl,vbyte*,int);
extern String s$flush_failure;
extern hl_type t$haxe_io_Error;
void haxe_io_Output_close(haxe__io__Output);

void sys_io_FileOutput_new(sys__io__FileOutput r0,hl_fdesc* r1) {
	r0->__f = r1;
	return;
}

void sys_io_FileOutput_writeByte(sys__io__FileOutput r0,int r1) {
	bool r3;
	hl_fdesc *r4;
	haxe__io__Eof r6;
	vdynamic *r5;
	r4 = r0->__f;
	r3 = hl_file_write_char(r4,r1);
	if( r3 ) goto label$b10898c_2_7;
	r6 = (haxe__io__Eof)hl_alloc_obj(&t$haxe_io_Eof);
	haxe_io_Eof_new(r6);
	r5 = haxe_Exception_thrown(((vdynamic*)r6));
	hl_throw((vdynamic*)r5);
	label$b10898c_2_7:
	return;
}

int sys_io_FileOutput_writeBytes(sys__io__FileOutput r0,haxe__io__Bytes r1,int r2,int r3) {
	venum *r8;
	haxe__io__BytesDataImpl r10;
	hl_fdesc *r9;
	haxe__io__Eof r13;
	vdynamic *r7;
	vbyte *r11;
	int r5, r6, r12;
	r6 = 0;
	if( r2 < r6 ) goto label$b10898c_3_8;
	r6 = 0;
	if( r3 < r6 ) goto label$b10898c_3_8;
	r5 = r2 + r3;
	if( r1 == NULL ) hl_null_access();
	r6 = r1->length;
	if( r6 >= r5 ) goto label$b10898c_3_11;
	label$b10898c_3_8:
	r8 = (venum*)g$haxe_io_Error_OutsideBounds;
	r7 = haxe_Exception_thrown(((vdynamic*)r8));
	hl_throw((vdynamic*)r7);
	label$b10898c_3_11:
	r9 = r0->__f;
	r10 = (haxe__io__BytesDataImpl)hl_alloc_obj(&t$haxe_io_BytesDataImpl);
	r11 = r1->b;
	r5 = r1->length;
	haxe_io_BytesDataImpl_new(r10,r11,r5);
	if( r10 ) goto label$b10898c_3_19;
	r11 = NULL;
	goto label$b10898c_3_20;
	label$b10898c_3_19:
	r11 = r10->bytes;
	label$b10898c_3_20:
	r5 = hl_file_write(r9,r11,r2,r3);
	r12 = 0;
	if( r12 < r5 ) goto label$b10898c_3_27;
	r13 = (haxe__io__Eof)hl_alloc_obj(&t$haxe_io_Eof);
	haxe_io_Eof_new(r13);
	r7 = haxe_Exception_thrown(((vdynamic*)r13));
	hl_throw((vdynamic*)r7);
	label$b10898c_3_27:
	return r5;
}

void sys_io_FileOutput_flush(sys__io__FileOutput r0) {
	String r6;
	venum *r5;
	bool r2;
	hl_fdesc *r3;
	vdynamic *r4;
	r3 = r0->__f;
	r2 = hl_file_flush(r3);
	if( r2 ) goto label$b10898c_4_7;
	r6 = (String)s$flush_failure;
	r5 = hl_alloc_enum(&t$haxe_io_Error,3);
	((haxe_io_Error_Custom*)r5)->p0 = ((vdynamic*)r6);
	r4 = haxe_Exception_thrown(((vdynamic*)r5));
	hl_throw((vdynamic*)r4);
	label$b10898c_4_7:
	return;
}

void sys_io_FileOutput_close(sys__io__FileOutput r0) {
	hl_fdesc *r2;
	haxe_io_Output_close(((haxe__io__Output)r0));
	r2 = r0->__f;
	hl_file_close(r2);
	r2 = NULL;
	r0->__f = r2;
	return;
}


// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <hxd/_IndexBuffer/IndexBuffer_Impl_.h>
extern hl_type t$hl_types_ArrayBytes_hl_UI16;
void hl_types_ArrayBytes_hl_UI16_new(hl__types__ArrayBytes_hl_UI16);
void hl_types_ArrayBytes_hl_UI16___expand(hl__types__ArrayBytes_hl_UI16,int);
int hl_types_ArrayBytes_hl_UI16_push(hl__types__ArrayBytes_hl_UI16,unsigned short);
extern hl_type t$hxd__IndexBuffer_InnerIterator;
void hxd__IndexBuffer_InnerIterator_new(hxd___IndexBuffer__InnerIterator,hl__types__ArrayBytes_hl_UI16);

hl__types__ArrayBytes_hl_UI16 hxd__IndexBuffer_IndexBuffer_Impl___new(int* r0) {
	hl__types__ArrayBytes_hl_UI16 r2;
	unsigned short r6;
	vbyte *r8;
	int r1, r4, r5, r7;
	if( r0 ) goto label$da3af93_1_3;
	r1 = 0;
	goto label$da3af93_1_4;
	label$da3af93_1_3:
	r1 = *r0;
	label$da3af93_1_4:
	r2 = (hl__types__ArrayBytes_hl_UI16)hl_alloc_obj(&t$hl_types_ArrayBytes_hl_UI16);
	hl_types_ArrayBytes_hl_UI16_new(r2);
	r5 = 0;
	if( r5 >= r1 ) goto label$da3af93_1_22;
	r5 = r2->length;
	if( r5 >= r1 ) goto label$da3af93_1_22;
	r5 = 1;
	r4 = r1 - r5;
	r5 = 0;
	r6 = (int)r5;
	r5 = (int)r6;
	r7 = r2->length;
	if( ((unsigned)r4) < ((unsigned)r7) ) goto label$da3af93_1_18;
	hl_types_ArrayBytes_hl_UI16___expand(r2,r4);
	label$da3af93_1_18:
	r8 = r2->bytes;
	r7 = 1;
	r7 = r4 << r7;
	*(unsigned short*)(r8 + r7) = (unsigned short)r5;
	label$da3af93_1_22:
	return r2;
}

void hxd__IndexBuffer_IndexBuffer_Impl__push(hl__types__ArrayBytes_hl_UI16 r0,int r1) {
	unsigned short r3;
	int r2;
	if( r0 == NULL ) hl_null_access();
	r3 = (int)r1;
	r2 = hl_types_ArrayBytes_hl_UI16_push(r0,r3);
	return;
}

void hxd__IndexBuffer_IndexBuffer_Impl__grow(hl__types__ArrayBytes_hl_UI16 r0,int r1) {
	unsigned short r5;
	vbyte *r7;
	int r3, r4, r6;
	if( r0 == NULL ) hl_null_access();
	r4 = r0->length;
	if( r4 >= r1 ) goto label$da3af93_3_15;
	r4 = 1;
	r3 = r1 - r4;
	r4 = 0;
	r5 = (int)r4;
	r4 = (int)r5;
	r6 = r0->length;
	if( ((unsigned)r3) < ((unsigned)r6) ) goto label$da3af93_3_11;
	hl_types_ArrayBytes_hl_UI16___expand(r0,r3);
	label$da3af93_3_11:
	r7 = r0->bytes;
	r6 = 1;
	r6 = r3 << r6;
	*(unsigned short*)(r7 + r6) = (unsigned short)r4;
	label$da3af93_3_15:
	return;
}

int hxd__IndexBuffer_IndexBuffer_Impl__arrayRead(hl__types__ArrayBytes_hl_UI16 r0,int r1) {
	unsigned short r5;
	vbyte *r4;
	int r2, r3;
	if( r0 == NULL ) hl_null_access();
	r3 = r0->length;
	if( ((unsigned)r1) < ((unsigned)r3) ) goto label$da3af93_4_5;
	r2 = 0;
	goto label$da3af93_4_9;
	label$da3af93_4_5:
	r4 = r0->bytes;
	r3 = 1;
	r3 = r1 << r3;
	r2 = *(unsigned short*)(r4 + r3);
	label$da3af93_4_9:
	r5 = (int)r2;
	r2 = (int)r5;
	return r2;
}

int hxd__IndexBuffer_IndexBuffer_Impl__arrayWrite(hl__types__ArrayBytes_hl_UI16 r0,int r1,int r2) {
	unsigned short r4;
	vbyte *r7;
	int r3, r5;
	if( r0 == NULL ) hl_null_access();
	r4 = (int)r2;
	r3 = (int)r4;
	r5 = r0->length;
	if( ((unsigned)r1) < ((unsigned)r5) ) goto label$da3af93_5_6;
	hl_types_ArrayBytes_hl_UI16___expand(r0,r1);
	label$da3af93_5_6:
	r7 = r0->bytes;
	r5 = 1;
	r5 = r1 << r5;
	*(unsigned short*)(r7 + r5) = (unsigned short)r3;
	return r3;
}

hl__types__ArrayBytes_hl_UI16 hxd__IndexBuffer_IndexBuffer_Impl__getNative(hl__types__ArrayBytes_hl_UI16 r0) {
	return r0;
}

hxd___IndexBuffer__InnerIterator hxd__IndexBuffer_IndexBuffer_Impl__iterator(hl__types__ArrayBytes_hl_UI16 r0) {
	hxd___IndexBuffer__InnerIterator r1;
	r1 = (hxd___IndexBuffer__InnerIterator)hl_alloc_obj(&t$hxd__IndexBuffer_InnerIterator);
	hxd__IndexBuffer_InnerIterator_new(r1,r0);
	return r1;
}

int hxd__IndexBuffer_IndexBuffer_Impl__get_length(hl__types__ArrayBytes_hl_UI16 r0) {
	int r1;
	if( r0 == NULL ) hl_null_access();
	r1 = r0->length;
	return r1;
}


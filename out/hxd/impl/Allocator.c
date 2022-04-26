﻿// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <hxd/impl/Allocator.h>
#include <hl/types/ArrayObj.h>
#include <h3d/BufferFlag.h>
#include <h3d/Buffer.h>
extern hl_type t$h3d_BufferFlag;
#include <hl/natives.h>
extern venum* g$h3d_BufferFlag_Dynamic;
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);
extern venum* g$h3d_BufferFlag_UniformBuffer;
extern venum* g$h3d_BufferFlag_RawFormat;
extern venum* g$h3d_BufferFlag_Quads;
extern hl_type t$h3d_Buffer;
void h3d_Buffer_new(h3d__Buffer,int,int,hl__types__ArrayObj);
#include <hl/types/ArrayBytes_hl_F32.h>
void h3d_Buffer_uploadVector(h3d__Buffer,hl__types__ArrayBytes_hl_F32,int,int,int*);
void h3d_Buffer_dispose(h3d__Buffer);
#include <h3d/Indexes.h>
extern hl_type t$h3d_Indexes;
void h3d_Indexes_new(h3d__Indexes,int,bool*);
#include <hl/types/ArrayBytes_hl_UI16.h>
void h3d_Indexes_upload(h3d__Indexes,hl__types__ArrayBytes_hl_UI16,int,int,int*);
void h3d_Indexes_dispose(h3d__Indexes);
extern hl_type t$hl_types_ArrayBytes_hl_F32;
void hl_types_ArrayBytes_hl_F32_new(hl__types__ArrayBytes_hl_F32);
void hl_types_ArrayBytes_hl_F32___expand(hl__types__ArrayBytes_hl_F32,int);
extern hl_type t$hl_types_ArrayBytes_hl_UI16;
void hl_types_ArrayBytes_hl_UI16_new(hl__types__ArrayBytes_hl_UI16);
void hl_types_ArrayBytes_hl_UI16___expand(hl__types__ArrayBytes_hl_UI16,int);
extern hxd__impl__$Allocator g$_hxd_impl_Allocator;
extern hl_type t$hxd_impl_Allocator;

void hxd_impl_Allocator_new(hxd__impl__Allocator r0) {
	return;
}

h3d__Buffer hxd_impl_Allocator_allocBuffer(hxd__impl__Allocator r0,int r1,int r2,int r3) {
	hl__types__ArrayObj r6, r7;
	venum *r10;
	hl_type *r9;
	h3d__Buffer r11;
	varray *r8;
	int r5;
	switch(r3) {
		default:
			goto label$a63d0b3_2_43;
		case 0:
			r9 = &t$h3d_BufferFlag;
			r5 = 1;
			r8 = hl_alloc_array(r9,r5);
			r10 = (venum*)g$h3d_BufferFlag_Dynamic;
			r5 = 0;
			((venum**)(r8 + 1))[r5] = r10;
			r7 = hl_types_ArrayObj_alloc(r8);
			r6 = r7;
			goto label$a63d0b3_2_43;
		case 1:
			r9 = &t$h3d_BufferFlag;
			r5 = 2;
			r8 = hl_alloc_array(r9,r5);
			r10 = (venum*)g$h3d_BufferFlag_UniformBuffer;
			r5 = 0;
			((venum**)(r8 + 1))[r5] = r10;
			r10 = (venum*)g$h3d_BufferFlag_Dynamic;
			r5 = 1;
			((venum**)(r8 + 1))[r5] = r10;
			r7 = hl_types_ArrayObj_alloc(r8);
			r6 = r7;
			goto label$a63d0b3_2_43;
		case 2:
			r9 = &t$h3d_BufferFlag;
			r5 = 1;
			r8 = hl_alloc_array(r9,r5);
			r10 = (venum*)g$h3d_BufferFlag_RawFormat;
			r5 = 0;
			((venum**)(r8 + 1))[r5] = r10;
			r7 = hl_types_ArrayObj_alloc(r8);
			r6 = r7;
			goto label$a63d0b3_2_43;
		case 3:
			r9 = &t$h3d_BufferFlag;
			r5 = 2;
			r8 = hl_alloc_array(r9,r5);
			r10 = (venum*)g$h3d_BufferFlag_Quads;
			r5 = 0;
			((venum**)(r8 + 1))[r5] = r10;
			r10 = (venum*)g$h3d_BufferFlag_RawFormat;
			r5 = 1;
			((venum**)(r8 + 1))[r5] = r10;
			r7 = hl_types_ArrayObj_alloc(r8);
			r6 = r7;
	}
	label$a63d0b3_2_43:
	r11 = (h3d__Buffer)hl_alloc_obj(&t$h3d_Buffer);
	h3d_Buffer_new(r11,r1,r2,r6);
	return r11;
}

h3d__Buffer hxd_impl_Allocator_ofFloats(hxd__impl__Allocator r0,hl__types__ArrayBytes_hl_F32 r1,int r2,int r3) {
	h3d__Buffer r8;
	double r4, r6;
	int *r10;
	int r5, r9;
	if( r1 == NULL ) hl_null_access();
	r5 = r1->length;
	r4 = (double)r5;
	r6 = (double)r2;
	r4 = r4 / r6;
	r5 = (int)r4;
	r8 = hxd_impl_Allocator_allocBuffer(r0,r5,r2,r3);
	if( r8 == NULL ) hl_null_access();
	r9 = 0;
	r10 = NULL;
	h3d_Buffer_uploadVector(r8,r1,r9,r5,r10);
	return r8;
}

void hxd_impl_Allocator_disposeBuffer(hxd__impl__Allocator r0,h3d__Buffer r1) {
	if( r1 == NULL ) hl_null_access();
	h3d_Buffer_dispose(r1);
	return;
}

h3d__Indexes hxd_impl_Allocator_allocIndexBuffer(hxd__impl__Allocator r0,int r1) {
	bool *r3;
	h3d__Indexes r2;
	r2 = (h3d__Indexes)hl_alloc_obj(&t$h3d_Indexes);
	r3 = NULL;
	h3d_Indexes_new(r2,r1,r3);
	return r2;
}

h3d__Indexes hxd_impl_Allocator_ofIndexes(hxd__impl__Allocator r0,hl__types__ArrayBytes_hl_UI16 r1,int* r2) {
	h3d__Indexes r7;
	int r3, r5, r6;
	if( r2 ) goto label$a63d0b3_6_3;
	r3 = -1;
	goto label$a63d0b3_6_4;
	label$a63d0b3_6_3:
	r3 = *r2;
	label$a63d0b3_6_4:
	r6 = 0;
	if( r3 >= r6 ) goto label$a63d0b3_6_10;
	if( !r1 ) goto label$a63d0b3_6_10;
	if( r1 == NULL ) hl_null_access();
	r5 = r1->length;
	r3 = r5;
	label$a63d0b3_6_10:
	r7 = hxd_impl_Allocator_allocIndexBuffer(r0,r3);
	if( r7 == NULL ) hl_null_access();
	r5 = 0;
	r2 = NULL;
	h3d_Indexes_upload(r7,r1,r5,r3,r2);
	return r7;
}

void hxd_impl_Allocator_disposeIndexBuffer(hxd__impl__Allocator r0,h3d__Indexes r1) {
	if( r1 == NULL ) hl_null_access();
	h3d_Indexes_dispose(r1);
	return;
}

void hxd_impl_Allocator_onContextLost(hxd__impl__Allocator r0) {
	return;
}

hl__types__ArrayBytes_hl_F32 hxd_impl_Allocator_allocFloats(hxd__impl__Allocator r0,int r1) {
	hl__types__ArrayBytes_hl_F32 r2;
	float r7;
	double r6;
	vbyte *r8;
	int r4, r5;
	r2 = (hl__types__ArrayBytes_hl_F32)hl_alloc_obj(&t$hl_types_ArrayBytes_hl_F32);
	hl_types_ArrayBytes_hl_F32_new(r2);
	r5 = 0;
	if( r5 >= r1 ) goto label$a63d0b3_9_17;
	r5 = r2->length;
	if( r5 >= r1 ) goto label$a63d0b3_9_17;
	r5 = 1;
	r4 = r1 - r5;
	r6 = 0.;
	r7 = (float)r6;
	r5 = r2->length;
	if( ((unsigned)r4) < ((unsigned)r5) ) goto label$a63d0b3_9_13;
	hl_types_ArrayBytes_hl_F32___expand(r2,r4);
	label$a63d0b3_9_13:
	r8 = r2->bytes;
	r5 = 2;
	r5 = r4 << r5;
	*(float*)(r8 + r5) = r7;
	label$a63d0b3_9_17:
	return r2;
}

void hxd_impl_Allocator_disposeFloats(hxd__impl__Allocator r0,hl__types__ArrayBytes_hl_F32 r1) {
	return;
}

hl__types__ArrayBytes_hl_UI16 hxd_impl_Allocator_allocIndexes(hxd__impl__Allocator r0,int r1) {
	hl__types__ArrayBytes_hl_UI16 r2;
	unsigned short r6;
	vbyte *r8;
	int r4, r5, r7;
	r2 = (hl__types__ArrayBytes_hl_UI16)hl_alloc_obj(&t$hl_types_ArrayBytes_hl_UI16);
	hl_types_ArrayBytes_hl_UI16_new(r2);
	r5 = 0;
	if( r5 >= r1 ) goto label$a63d0b3_11_18;
	r5 = r2->length;
	if( r5 >= r1 ) goto label$a63d0b3_11_18;
	r5 = 1;
	r4 = r1 - r5;
	r5 = 0;
	r6 = (int)r5;
	r5 = (int)r6;
	r7 = r2->length;
	if( ((unsigned)r4) < ((unsigned)r7) ) goto label$a63d0b3_11_14;
	hl_types_ArrayBytes_hl_UI16___expand(r2,r4);
	label$a63d0b3_11_14:
	r8 = r2->bytes;
	r7 = 1;
	r7 = r4 << r7;
	*(unsigned short*)(r8 + r7) = (unsigned short)r5;
	label$a63d0b3_11_18:
	return r2;
}

void hxd_impl_Allocator_disposeIndexes(hxd__impl__Allocator r0,hl__types__ArrayBytes_hl_UI16 r1) {
	return;
}

void hxd_impl_Allocator_set(hxd__impl__Allocator r0) {
	hxd__impl__$Allocator r1;
	r1 = (hxd__impl__$Allocator)g$_hxd_impl_Allocator;
	r1->inst = r0;
	return;
}

hxd__impl__Allocator hxd_impl_Allocator_get() {
	hxd__impl__Allocator r1;
	hxd__impl__$Allocator r2;
	r2 = (hxd__impl__$Allocator)g$_hxd_impl_Allocator;
	r1 = r2->inst;
	if( r1 ) goto label$a63d0b3_14_7;
	r1 = (hxd__impl__Allocator)hl_alloc_obj(&t$hxd_impl_Allocator);
	hxd_impl_Allocator_new(r1);
	r2 = (hxd__impl__$Allocator)g$_hxd_impl_Allocator;
	r2->inst = r1;
	label$a63d0b3_14_7:
	r2 = (hxd__impl__$Allocator)g$_hxd_impl_Allocator;
	r1 = r2->inst;
	return r1;
}


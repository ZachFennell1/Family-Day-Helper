﻿// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <hl/types/ArrayObjKeyValueIterator.h>
extern hl_type t$hl_types_ArrayDyn;
extern hl_type t$_dyn;
void haxe_iterators_ArrayKeyValueIterator_new(haxe__iterators__ArrayKeyValueIterator,hl__types__ArrayDyn);
extern hl_type t$vrt_d46b559;
extern hl_type t$_i32;

void hl_types_ArrayObjKeyValueIterator_new(hl__types__ArrayObjKeyValueIterator r0,hl__types__ArrayObj r1) {
	hl__types__ArrayDyn r4;
	vdynamic *r3;
	r3 = NULL;
	r4 = (hl__types__ArrayDyn)hl_dyn_castp(&r3,&t$_dyn,&t$hl_types_ArrayDyn);
	haxe_iterators_ArrayKeyValueIterator_new(((haxe__iterators__ArrayKeyValueIterator)r0),r4);
	r0->arr = r1;
	return;
}

bool hl_types_ArrayObjKeyValueIterator_hasNext(hl__types__ArrayObjKeyValueIterator r0) {
	hl__types__ArrayObj r4;
	bool r1;
	int r2, r3;
	r2 = r0->current;
	r4 = r0->arr;
	if( r4 == NULL ) hl_null_access();
	r3 = r4->length;
	if( r2 < r3 ) goto label$19b6051_2_7;
	r1 = false;
	goto label$19b6051_2_8;
	label$19b6051_2_7:
	r1 = true;
	label$19b6051_2_8:
	return r1;
}

vvirtual* hl_types_ArrayObjKeyValueIterator_next(hl__types__ArrayObjKeyValueIterator r0) {
	vvirtual *r6;
	hl__types__ArrayObj r2;
	vdynamic *r5;
	int r3, r4, r7;
	varray *r1;
	r2 = r0->arr;
	if( r2 == NULL ) hl_null_access();
	r1 = r2->array;
	r3 = r0->current;
	r5 = ((vdynamic**)(r1 + 1))[r3];
	r6 = hl_alloc_virtual(&t$vrt_d46b559);
	r4 = r0->current;
	r7 = r4;
	++r4;
	r0->current = r4;
	if( hl_vfields(r6)[0] ) *(int*)(hl_vfields(r6)[0]) = (int)r7; else hl_dyn_seti(r6->value,5343647/*key*/,&t$_i32,r7);
	if( hl_vfields(r6)[1] ) *(vdynamic**)(hl_vfields(r6)[1]) = (vdynamic*)r5; else hl_dyn_setp(r6->value,297304054/*value*/,&t$_dyn,r5);
	return r6;
}


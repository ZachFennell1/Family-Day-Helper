﻿// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <hxd/impl/ArrayIterator_hxd_snd_Channel.h>
#include <hxd/snd/Channel.h>

void hxd_impl_ArrayIterator_hxd_snd_Channel_new(hxd__impl__ArrayIterator_hxd_snd_Channel r0,hl__types__ArrayObj r1) {
	hl__types__ArrayObj r3;
	int r2;
	r2 = 0;
	r0->i = r2;
	r0->a = r1;
	r3 = r0->a;
	if( r3 == NULL ) hl_null_access();
	r2 = r3->length;
	r0->l = r2;
	return;
}

bool hxd_impl_ArrayIterator_hxd_snd_Channel_hasNext(hxd__impl__ArrayIterator_hxd_snd_Channel r0) {
	bool r1;
	int r2, r3;
	r2 = r0->i;
	r3 = r0->l;
	if( r2 < r3 ) goto label$3d1bd0e_2_5;
	r1 = false;
	goto label$3d1bd0e_2_6;
	label$3d1bd0e_2_5:
	r1 = true;
	label$3d1bd0e_2_6:
	return r1;
}

hxd__snd__Channel hxd_impl_ArrayIterator_hxd_snd_Channel_next(hxd__impl__ArrayIterator_hxd_snd_Channel r0) {
	hl__types__ArrayObj r1;
	hxd__snd__Channel r4;
	vdynamic *r5;
	varray *r6;
	int r2, r3;
	r1 = r0->a;
	if( r1 == NULL ) hl_null_access();
	r2 = r0->i;
	r3 = r2;
	++r2;
	r0->i = r2;
	r2 = r1->length;
	if( ((unsigned)r3) < ((unsigned)r2) ) goto label$3d1bd0e_3_10;
	r4 = NULL;
	goto label$3d1bd0e_3_13;
	label$3d1bd0e_3_10:
	r6 = r1->array;
	r5 = ((vdynamic**)(r6 + 1))[r3];
	r4 = (hxd__snd__Channel)r5;
	label$3d1bd0e_3_13:
	return r4;
}


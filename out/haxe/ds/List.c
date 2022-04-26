﻿// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <haxe/ds/List.h>
extern hl_type t$haxe_ds__List_ListNode;
void haxe_ds__List_ListNode_new(haxe__ds___List__ListNode,vdynamic*,haxe__ds___List__ListNode);

void haxe_ds_List_new(haxe__ds__List r0) {
	int r1;
	r1 = 0;
	r0->length = r1;
	return;
}

void haxe_ds_List_add(haxe__ds__List r0,vdynamic* r1) {
	haxe__ds___List__ListNode r2, r3;
	int r5;
	r2 = (haxe__ds___List__ListNode)hl_alloc_obj(&t$haxe_ds__List_ListNode);
	r3 = NULL;
	haxe_ds__List_ListNode_new(r2,r1,r3);
	r3 = r0->h;
	if( r3 ) goto label$a1e0605_2_7;
	r0->h = r2;
	goto label$a1e0605_2_10;
	label$a1e0605_2_7:
	r3 = r0->q;
	if( r3 == NULL ) hl_null_access();
	r3->next = r2;
	label$a1e0605_2_10:
	r0->q = r2;
	r5 = r0->length;
	++r5;
	r0->length = r5;
	return;
}

void haxe_ds_List_push(haxe__ds__List r0,vdynamic* r1) {
	haxe__ds___List__ListNode r2, r3;
	int r5;
	r2 = (haxe__ds___List__ListNode)hl_alloc_obj(&t$haxe_ds__List_ListNode);
	r3 = r0->h;
	haxe_ds__List_ListNode_new(r2,r1,r3);
	r0->h = r2;
	r3 = r0->q;
	if( r3 ) goto label$a1e0605_3_7;
	r0->q = r2;
	label$a1e0605_3_7:
	r5 = r0->length;
	++r5;
	r0->length = r5;
	return;
}

bool haxe_ds_List_remove(haxe__ds__List r0,vdynamic* r1) {
	bool r8;
	vdynamic *r5;
	haxe__ds___List__ListNode r2, r3, r4, r6;
	int r7;
	r2 = NULL;
	r3 = r0->h;
	label$a1e0605_4_2:
	if( !r3 ) goto label$a1e0605_4_26;
	if( r3 == NULL ) hl_null_access();
	r5 = r3->item;
	{ int i = hl_dyn_compare((vdynamic*)r5,(vdynamic*)r1); if( i != 0 ) goto label$a1e0605_4_22; };
	if( r2 ) goto label$a1e0605_4_11;
	r4 = r3->next;
	r0->h = r4;
	goto label$a1e0605_4_14;
	label$a1e0605_4_11:
	if( r2 == NULL ) hl_null_access();
	r6 = r3->next;
	r2->next = r6;
	label$a1e0605_4_14:
	r4 = r0->q;
	if( r4 != r3 ) goto label$a1e0605_4_17;
	r0->q = r2;
	label$a1e0605_4_17:
	r7 = r0->length;
	--r7;
	r0->length = r7;
	r8 = true;
	return r8;
	label$a1e0605_4_22:
	r2 = r3;
	r4 = r3->next;
	r3 = r4;
	goto label$a1e0605_4_2;
	label$a1e0605_4_26:
	r8 = false;
	return r8;
}


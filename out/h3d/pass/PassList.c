﻿// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <h3d/pass/PassList.h>
#include <h3d/pass/PassListIterator.h>
extern hl_type t$h3d_pass_PassListIterator;
void h3d_pass_PassListIterator_new(h3d__pass__PassListIterator,h3d__pass__PassObject);

void h3d_pass_PassList_new(h3d__pass__PassList r0,h3d__pass__PassObject r1) {
	h3d__pass__PassObject r2;
	r0->current = r1;
	r2 = NULL;
	r0->lastDisc = r2;
	r0->discarded = r2;
	return;
}

void h3d_pass_PassList_init(h3d__pass__PassList r0,h3d__pass__PassObject r1) {
	h3d__pass__PassObject r2;
	r0->current = r1;
	r2 = NULL;
	r0->lastDisc = r2;
	r0->discarded = r2;
	return;
}

void h3d_pass_PassList_reset(h3d__pass__PassList r0) {
	h3d__pass__PassObject r2, r3;
	r2 = r0->discarded;
	if( !r2 ) goto label$54bfed8_3_11;
	r2 = r0->lastDisc;
	if( r2 == NULL ) hl_null_access();
	r3 = r0->current;
	r2->next = r3;
	r2 = r0->discarded;
	r0->current = r2;
	r2 = NULL;
	r0->lastDisc = r2;
	r0->discarded = r2;
	label$54bfed8_3_11:
	return;
}

h3d__pass__PassObject h3d_pass_PassList_save(h3d__pass__PassList r0) {
	h3d__pass__PassObject r1;
	r1 = r0->lastDisc;
	return r1;
}

void h3d_pass_PassList_load(h3d__pass__PassList r0,h3d__pass__PassObject r1) {
	h3d__pass__PassObject r3, r4;
	r3 = r0->lastDisc;
	if( r3 == r1 ) goto label$54bfed8_5_18;
	r3 = r0->lastDisc;
	if( r3 == NULL ) hl_null_access();
	r4 = r0->current;
	r3->next = r4;
	if( r1 ) goto label$54bfed8_5_12;
	r3 = r0->discarded;
	r0->current = r3;
	r3 = NULL;
	r0->discarded = r3;
	goto label$54bfed8_5_17;
	label$54bfed8_5_12:
	if( r1 == NULL ) hl_null_access();
	r3 = r1->next;
	r0->current = r3;
	r4 = NULL;
	r1->next = r4;
	label$54bfed8_5_17:
	r0->lastDisc = r1;
	label$54bfed8_5_18:
	return;
}

bool h3d_pass_PassList_isEmpty(h3d__pass__PassList r0) {
	bool r1;
	h3d__pass__PassObject r2, r3;
	r2 = r0->current;
	r3 = NULL;
	if( r2 == r3 ) goto label$54bfed8_6_5;
	r1 = false;
	goto label$54bfed8_6_6;
	label$54bfed8_6_5:
	r1 = true;
	label$54bfed8_6_6:
	return r1;
}

void h3d_pass_PassList_clear(h3d__pass__PassList r0) {
	h3d__pass__PassObject r2, r3;
	r2 = r0->current;
	if( r2 ) goto label$54bfed8_7_3;
	return;
	label$54bfed8_7_3:
	r2 = r0->discarded;
	if( r2 ) goto label$54bfed8_7_8;
	r2 = r0->current;
	r0->discarded = r2;
	goto label$54bfed8_7_12;
	label$54bfed8_7_8:
	r2 = r0->lastDisc;
	if( r2 == NULL ) hl_null_access();
	r3 = r0->current;
	r2->next = r3;
	label$54bfed8_7_12:
	r2 = r0->current;
	label$54bfed8_7_13:
	if( r2 == NULL ) hl_null_access();
	r3 = r2->next;
	if( !r3 ) goto label$54bfed8_7_20;
	r3 = r2->next;
	r2 = r3;
	goto label$54bfed8_7_13;
	label$54bfed8_7_20:
	r0->lastDisc = r2;
	r3 = NULL;
	r0->current = r3;
	return;
}

void h3d_pass_PassList_sort(h3d__pass__PassList r0,vclosure* r1) {
	bool r9;
	h3d__pass__PassObject r2, r4, r5, r10, r11, r14, r16, r17;
	int r6, r7, r8, r12, r13, r15;
	r2 = r0->current;
	if( r2 ) goto label$54bfed8_8_5;
	r5 = NULL;
	r4 = r5;
	goto label$54bfed8_8_89;
	label$54bfed8_8_5:
	r6 = 1;
	r7 = 0;
	r8 = 0;
	label$54bfed8_8_8:
	r9 = true;
	if( !r9 ) goto label$54bfed8_8_88;
	r5 = r2;
	r10 = NULL;
	r2 = r10;
	r11 = NULL;
	r10 = r11;
	r13 = 0;
	r12 = r13;
	label$54bfed8_8_18:
	if( !r5 ) goto label$54bfed8_8_78;
	++r12;
	r11 = r5;
	r13 = 0;
	r7 = r13;
	r13 = 0;
	r15 = r6;
	label$54bfed8_8_26:
	if( r13 >= r15 ) goto label$54bfed8_8_36;
	++r13;
	++r7;
	if( r11 == NULL ) hl_null_access();
	r14 = r11->next;
	r11 = r14;
	if( r14 ) goto label$54bfed8_8_35;
	goto label$54bfed8_8_36;
	label$54bfed8_8_35:
	goto label$54bfed8_8_26;
	label$54bfed8_8_36:
	r8 = r6;
	label$54bfed8_8_37:
	r15 = 0;
	if( r15 < r7 ) goto label$54bfed8_8_43;
	r15 = 0;
	if( r15 >= r8 ) goto label$54bfed8_8_76;
	if( !r11 ) goto label$54bfed8_8_76;
	label$54bfed8_8_43:
	r15 = 0;
	if( r7 != r15 ) goto label$54bfed8_8_51;
	r14 = r11;
	if( r11 == NULL ) hl_null_access();
	r16 = r11->next;
	r11 = r16;
	--r8;
	goto label$54bfed8_8_69;
	label$54bfed8_8_51:
	r15 = 0;
	if( r8 == r15 ) goto label$54bfed8_8_58;
	if( !r11 ) goto label$54bfed8_8_58;
	if( r1 == NULL ) hl_null_access();
	r13 = r1->hasValue ? ((int (*)(vdynamic*,h3d__pass__PassObject,h3d__pass__PassObject))r1->fun)((vdynamic*)r1->value,r5,r11) : ((int (*)(h3d__pass__PassObject,h3d__pass__PassObject))r1->fun)(r5,r11);
	r15 = 0;
	if( r15 < r13 ) goto label$54bfed8_8_64;
	label$54bfed8_8_58:
	r14 = r5;
	if( r5 == NULL ) hl_null_access();
	r16 = r5->next;
	r5 = r16;
	--r7;
	goto label$54bfed8_8_69;
	label$54bfed8_8_64:
	r14 = r11;
	if( r11 == NULL ) hl_null_access();
	r16 = r11->next;
	r11 = r16;
	--r8;
	label$54bfed8_8_69:
	if( !r10 ) goto label$54bfed8_8_73;
	if( r10 == NULL ) hl_null_access();
	r10->next = r14;
	goto label$54bfed8_8_74;
	label$54bfed8_8_73:
	r2 = r14;
	label$54bfed8_8_74:
	r10 = r14;
	goto label$54bfed8_8_37;
	label$54bfed8_8_76:
	r5 = r11;
	goto label$54bfed8_8_18;
	label$54bfed8_8_78:
	if( r10 == NULL ) hl_null_access();
	r17 = NULL;
	r10->next = r17;
	r15 = 1;
	if( r15 < r12 ) goto label$54bfed8_8_84;
	goto label$54bfed8_8_88;
	label$54bfed8_8_84:
	r15 = 2;
	r13 = r6 * r15;
	r6 = r13;
	goto label$54bfed8_8_8;
	label$54bfed8_8_88:
	r4 = r2;
	label$54bfed8_8_89:
	r0->current = r4;
	return;
}

void h3d_pass_PassList_filter(h3d__pass__PassList r0,vclosure* r1) {
	bool r9;
	h3d__pass__PassObject r2, r4, r5, r6, r7, r8, r10;
	r2 = NULL;
	r4 = NULL;
	r5 = r0->discarded;
	r6 = r0->lastDisc;
	r7 = r0->current;
	label$54bfed8_9_5:
	if( !r7 ) goto label$54bfed8_9_29;
	if( r1 == NULL ) hl_null_access();
	r9 = r1->hasValue ? ((bool (*)(vdynamic*,h3d__pass__PassObject))r1->fun)((vdynamic*)r1->value,r7) : ((bool (*)(h3d__pass__PassObject))r1->fun)(r7);
	if( !r9 ) goto label$54bfed8_9_18;
	if( r2 ) goto label$54bfed8_9_14;
	r4 = r7;
	r2 = r7;
	goto label$54bfed8_9_17;
	label$54bfed8_9_14:
	if( r4 == NULL ) hl_null_access();
	r4->next = r7;
	r4 = r7;
	label$54bfed8_9_17:
	goto label$54bfed8_9_25;
	label$54bfed8_9_18:
	if( r5 ) goto label$54bfed8_9_22;
	r6 = r7;
	r5 = r7;
	goto label$54bfed8_9_25;
	label$54bfed8_9_22:
	if( r6 == NULL ) hl_null_access();
	r6->next = r7;
	r6 = r7;
	label$54bfed8_9_25:
	if( r7 == NULL ) hl_null_access();
	r8 = r7->next;
	r7 = r8;
	goto label$54bfed8_9_5;
	label$54bfed8_9_29:
	if( !r4 ) goto label$54bfed8_9_33;
	if( r4 == NULL ) hl_null_access();
	r10 = NULL;
	r4->next = r10;
	label$54bfed8_9_33:
	if( !r6 ) goto label$54bfed8_9_37;
	if( r6 == NULL ) hl_null_access();
	r10 = NULL;
	r6->next = r10;
	label$54bfed8_9_37:
	r0->current = r2;
	r0->discarded = r5;
	r0->lastDisc = r6;
	return;
}

h3d__pass__PassListIterator h3d_pass_PassList_iterator(h3d__pass__PassList r0) {
	h3d__pass__PassListIterator r1;
	h3d__pass__PassObject r2;
	r1 = (h3d__pass__PassListIterator)hl_alloc_obj(&t$h3d_pass_PassListIterator);
	r2 = r0->current;
	h3d_pass_PassListIterator_new(r1,r2);
	return r1;
}

h3d__pass__PassListIterator h3d_pass_PassList_getFiltered(h3d__pass__PassList r0) {
	h3d__pass__PassListIterator r1;
	h3d__pass__PassObject r2;
	r1 = (h3d__pass__PassListIterator)hl_alloc_obj(&t$h3d_pass_PassListIterator);
	r2 = r0->discarded;
	h3d_pass_PassListIterator_new(r1,r2);
	return r1;
}


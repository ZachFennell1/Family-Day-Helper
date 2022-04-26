﻿// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <haxe/ds/BalancedTree.h>
haxe__ds__TreeNode haxe_ds_BalancedTree_setLoop(haxe__ds__BalancedTree,vdynamic*,vdynamic*,haxe__ds__TreeNode);
#include <hl/types/ArrayObj.h>
#include <haxe/iterators/ArrayIterator.h>
extern hl_type t$_dyn;
#include <hl/natives.h>
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);
#include <hl/types/ArrayBase.h>
hl__types__ArrayDyn hl_types_ArrayDyn_alloc(hl__types__ArrayBase,bool*);
void haxe_ds_BalancedTree_iteratorLoop(haxe__ds__TreeNode,hl__types__ArrayDyn);
extern hl_type t$haxe_iterators_ArrayIterator;
void haxe_iterators_ArrayIterator_new(haxe__iterators__ArrayIterator,hl__types__ArrayDyn);
extern hl_type t$vrt_ef76930;
extern hl_type t$haxe_ds_TreeNode;
void haxe_ds_TreeNode_new(haxe__ds__TreeNode,haxe__ds__TreeNode,vdynamic*,vdynamic*,haxe__ds__TreeNode,int*);
haxe__ds__TreeNode haxe_ds_BalancedTree_balance(haxe__ds__BalancedTree,haxe__ds__TreeNode,vdynamic*,vdynamic*,haxe__ds__TreeNode);
int hl_types_ArrayDyn_push(hl__types__ArrayDyn,vdynamic*);

void haxe_ds_BalancedTree_new(haxe__ds__BalancedTree r0) {
	return;
}

void haxe_ds_BalancedTree_set(haxe__ds__BalancedTree r0,vdynamic* r1,vdynamic* r2) {
	haxe__ds__TreeNode r3;
	r3 = r0->root;
	r3 = haxe_ds_BalancedTree_setLoop(r0,r1,r2,r3);
	r0->root = r3;
	return;
}

vdynamic* haxe_ds_BalancedTree_get(haxe__ds__BalancedTree r0,vdynamic* r1) {
	haxe__ds__TreeNode r2, r3;
	vdynamic *r5, *r6;
	int r4, r7;
	r2 = r0->root;
	label$4d011ad_3_1:
	if( !r2 ) goto label$4d011ad_3_18;
	if( r2 == NULL ) hl_null_access();
	r6 = r2->key;
	r4 = ((int (*)(haxe__ds__BalancedTree,vdynamic*,vdynamic*))r0->$type->vobj_proto[0])(r0,r1,r6);
	r7 = 0;
	if( r4 != r7 ) goto label$4d011ad_3_10;
	r5 = r2->value;
	return r5;
	label$4d011ad_3_10:
	r7 = 0;
	if( r4 >= r7 ) goto label$4d011ad_3_15;
	r3 = r2->left;
	r2 = r3;
	goto label$4d011ad_3_17;
	label$4d011ad_3_15:
	r3 = r2->right;
	r2 = r3;
	label$4d011ad_3_17:
	goto label$4d011ad_3_1;
	label$4d011ad_3_18:
	r5 = NULL;
	return r5;
}

vvirtual* haxe_ds_BalancedTree_iterator(haxe__ds__BalancedTree r0) {
	bool *r7;
	vvirtual *r11;
	hl__types__ArrayObj r5;
	hl_type *r3;
	bool r6;
	haxe__iterators__ArrayIterator r10;
	haxe__ds__TreeNode r9;
	hl__types__ArrayDyn r1;
	int r4;
	varray *r2;
	r3 = &t$_dyn;
	r4 = 0;
	r2 = hl_alloc_array(r3,r4);
	r5 = hl_types_ArrayObj_alloc(r2);
	r6 = true;
	r7 = &r6;
	r1 = hl_types_ArrayDyn_alloc(((hl__types__ArrayBase)r5),r7);
	r9 = r0->root;
	haxe_ds_BalancedTree_iteratorLoop(r9,r1);
	r10 = (haxe__iterators__ArrayIterator)hl_alloc_obj(&t$haxe_iterators_ArrayIterator);
	haxe_iterators_ArrayIterator_new(r10,r1);
	r11 = hl_to_virtual(&t$vrt_ef76930,(vdynamic*)r10);
	return r11;
}

haxe__ds__TreeNode haxe_ds_BalancedTree_setLoop(haxe__ds__BalancedTree r0,vdynamic* r1,vdynamic* r2,haxe__ds__TreeNode r3) {
	haxe__ds__TreeNode r5, r6, r9;
	int *r10;
	vdynamic *r7, *r8;
	int r11, r12, r13, r14;
	if( r3 ) goto label$4d011ad_5_7;
	r5 = (haxe__ds__TreeNode)hl_alloc_obj(&t$haxe_ds_TreeNode);
	r6 = NULL;
	r9 = NULL;
	r10 = NULL;
	haxe_ds_TreeNode_new(r5,r6,r1,r2,r9,r10);
	return r5;
	label$4d011ad_5_7:
	if( r3 == NULL ) hl_null_access();
	r8 = r3->key;
	r11 = ((int (*)(haxe__ds__BalancedTree,vdynamic*,vdynamic*))r0->$type->vobj_proto[0])(r0,r1,r8);
	r13 = 0;
	if( r11 != r13 ) goto label$4d011ad_5_22;
	r5 = (haxe__ds__TreeNode)hl_alloc_obj(&t$haxe_ds_TreeNode);
	r6 = r3->left;
	r9 = r3->right;
	if( r3 ) goto label$4d011ad_5_18;
	r12 = 0;
	goto label$4d011ad_5_19;
	label$4d011ad_5_18:
	r12 = r3->_height;
	label$4d011ad_5_19:
	r10 = &r12;
	haxe_ds_TreeNode_new(r5,r6,r1,r2,r9,r10);
	return r5;
	label$4d011ad_5_22:
	r14 = 0;
	if( r11 >= r14 ) goto label$4d011ad_5_31;
	r5 = r3->left;
	r5 = haxe_ds_BalancedTree_setLoop(r0,r1,r2,r5);
	r7 = r3->key;
	r8 = r3->value;
	r9 = r3->right;
	r6 = haxe_ds_BalancedTree_balance(r0,r5,r7,r8,r9);
	return r6;
	label$4d011ad_5_31:
	r5 = r3->right;
	r5 = haxe_ds_BalancedTree_setLoop(r0,r1,r2,r5);
	r6 = r3->left;
	r7 = r3->key;
	r8 = r3->value;
	r6 = haxe_ds_BalancedTree_balance(r0,r6,r7,r8,r5);
	return r6;
}

void haxe_ds_BalancedTree_iteratorLoop(haxe__ds__TreeNode r0,hl__types__ArrayDyn r1) {
	haxe__ds__TreeNode r3;
	vdynamic *r5;
	int r4;
	if( !r0 ) goto label$4d011ad_6_9;
	if( r0 == NULL ) hl_null_access();
	r3 = r0->left;
	haxe_ds_BalancedTree_iteratorLoop(r3,r1);
	if( r1 == NULL ) hl_null_access();
	r5 = r0->value;
	r4 = hl_types_ArrayDyn_push(r1,r5);
	r3 = r0->right;
	haxe_ds_BalancedTree_iteratorLoop(r3,r1);
	label$4d011ad_6_9:
	return;
}

haxe__ds__TreeNode haxe_ds_BalancedTree_balance(haxe__ds__BalancedTree r0,haxe__ds__TreeNode r1,vdynamic* r2,vdynamic* r3,haxe__ds__TreeNode r4) {
	haxe__ds__TreeNode r6, r12, r13, r14, r16, r18, r21;
	int *r22;
	vdynamic *r15, *r17, *r19, *r20;
	int r5, r8, r9, r10, r11;
	if( r1 ) goto label$4d011ad_7_3;
	r5 = 0;
	goto label$4d011ad_7_5;
	label$4d011ad_7_3:
	if( r1 == NULL ) hl_null_access();
	r5 = r1->_height;
	label$4d011ad_7_5:
	if( r4 ) goto label$4d011ad_7_8;
	r8 = 0;
	goto label$4d011ad_7_10;
	label$4d011ad_7_8:
	if( r4 == NULL ) hl_null_access();
	r8 = r4->_height;
	label$4d011ad_7_10:
	r11 = 2;
	r10 = r8 + r11;
	if( r10 >= r5 ) goto label$4d011ad_7_63;
	if( r1 == NULL ) hl_null_access();
	r6 = r1->left;
	r12 = r1->right;
	if( r6 ) goto label$4d011ad_7_19;
	r9 = 0;
	goto label$4d011ad_7_21;
	label$4d011ad_7_19:
	if( r6 == NULL ) hl_null_access();
	r9 = r6->_height;
	label$4d011ad_7_21:
	if( r12 ) goto label$4d011ad_7_24;
	r10 = 0;
	goto label$4d011ad_7_26;
	label$4d011ad_7_24:
	if( r12 == NULL ) hl_null_access();
	r10 = r12->_height;
	label$4d011ad_7_26:
	if( r9 < r10 ) goto label$4d011ad_7_38;
	r13 = (haxe__ds__TreeNode)hl_alloc_obj(&t$haxe_ds_TreeNode);
	r14 = r1->left;
	r15 = r1->key;
	r17 = r1->value;
	r16 = (haxe__ds__TreeNode)hl_alloc_obj(&t$haxe_ds_TreeNode);
	r18 = r1->right;
	r22 = NULL;
	haxe_ds_TreeNode_new(r16,r18,r2,r3,r4,r22);
	r22 = NULL;
	haxe_ds_TreeNode_new(r13,r14,r15,r17,r16,r22);
	return r13;
	label$4d011ad_7_38:
	r13 = (haxe__ds__TreeNode)hl_alloc_obj(&t$haxe_ds_TreeNode);
	r14 = (haxe__ds__TreeNode)hl_alloc_obj(&t$haxe_ds_TreeNode);
	r16 = r1->left;
	r15 = r1->key;
	r17 = r1->value;
	r18 = r1->right;
	if( r18 == NULL ) hl_null_access();
	r18 = r18->left;
	r22 = NULL;
	haxe_ds_TreeNode_new(r14,r16,r15,r17,r18,r22);
	r16 = r1->right;
	if( r16 == NULL ) hl_null_access();
	r15 = r16->key;
	r16 = r1->right;
	if( r16 == NULL ) hl_null_access();
	r17 = r16->value;
	r16 = (haxe__ds__TreeNode)hl_alloc_obj(&t$haxe_ds_TreeNode);
	r18 = r1->right;
	if( r18 == NULL ) hl_null_access();
	r18 = r18->right;
	r22 = NULL;
	haxe_ds_TreeNode_new(r16,r18,r2,r3,r4,r22);
	r22 = NULL;
	haxe_ds_TreeNode_new(r13,r14,r15,r17,r16,r22);
	return r13;
	label$4d011ad_7_63:
	r11 = 2;
	r10 = r5 + r11;
	if( r10 >= r8 ) goto label$4d011ad_7_116;
	if( r4 == NULL ) hl_null_access();
	r6 = r4->right;
	r12 = r4->left;
	if( r6 ) goto label$4d011ad_7_72;
	r9 = 0;
	goto label$4d011ad_7_74;
	label$4d011ad_7_72:
	if( r6 == NULL ) hl_null_access();
	r9 = r6->_height;
	label$4d011ad_7_74:
	if( r12 ) goto label$4d011ad_7_77;
	r10 = 0;
	goto label$4d011ad_7_79;
	label$4d011ad_7_77:
	if( r12 == NULL ) hl_null_access();
	r10 = r12->_height;
	label$4d011ad_7_79:
	if( r10 >= r9 ) goto label$4d011ad_7_91;
	r13 = (haxe__ds__TreeNode)hl_alloc_obj(&t$haxe_ds_TreeNode);
	r14 = (haxe__ds__TreeNode)hl_alloc_obj(&t$haxe_ds_TreeNode);
	r18 = r4->left;
	r22 = NULL;
	haxe_ds_TreeNode_new(r14,r1,r2,r3,r18,r22);
	r15 = r4->key;
	r17 = r4->value;
	r16 = r4->right;
	r22 = NULL;
	haxe_ds_TreeNode_new(r13,r14,r15,r17,r16,r22);
	return r13;
	label$4d011ad_7_91:
	r13 = (haxe__ds__TreeNode)hl_alloc_obj(&t$haxe_ds_TreeNode);
	r14 = (haxe__ds__TreeNode)hl_alloc_obj(&t$haxe_ds_TreeNode);
	r18 = r4->left;
	if( r18 == NULL ) hl_null_access();
	r18 = r18->left;
	r22 = NULL;
	haxe_ds_TreeNode_new(r14,r1,r2,r3,r18,r22);
	r16 = r4->left;
	if( r16 == NULL ) hl_null_access();
	r15 = r16->key;
	r16 = r4->left;
	if( r16 == NULL ) hl_null_access();
	r17 = r16->value;
	r16 = (haxe__ds__TreeNode)hl_alloc_obj(&t$haxe_ds_TreeNode);
	r18 = r4->left;
	if( r18 == NULL ) hl_null_access();
	r18 = r18->right;
	r19 = r4->key;
	r20 = r4->value;
	r21 = r4->right;
	r22 = NULL;
	haxe_ds_TreeNode_new(r16,r18,r19,r20,r21,r22);
	r22 = NULL;
	haxe_ds_TreeNode_new(r13,r14,r15,r17,r16,r22);
	return r13;
	label$4d011ad_7_116:
	r6 = (haxe__ds__TreeNode)hl_alloc_obj(&t$haxe_ds_TreeNode);
	if( r8 >= r5 ) goto label$4d011ad_7_120;
	r9 = r5;
	goto label$4d011ad_7_121;
	label$4d011ad_7_120:
	r9 = r8;
	label$4d011ad_7_121:
	r10 = 1;
	r9 = r9 + r10;
	r22 = &r9;
	haxe_ds_TreeNode_new(r6,r1,r2,r3,r4,r22);
	return r6;
}

int haxe_ds_BalancedTree_compare(haxe__ds__BalancedTree r0,vdynamic* r1,vdynamic* r2) {
	int r3;
	r3 = hl_dyn_compare(r1,r2);
	return r3;
}


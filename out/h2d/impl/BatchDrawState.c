﻿// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <h2d/impl/BatchDrawState.h>
#include <h3d/mat/Texture.h>
extern hl_type t$h2d_impl__BatchDrawState_StateEntry;
void h2d_impl__BatchDrawState_StateEntry_new(h2d__impl___BatchDrawState__StateEntry,h3d__mat__Texture);
#include <h2d/Tile.h>
void h2d_impl_BatchDrawState_setTexture(h2d__impl__BatchDrawState,h3d__mat__Texture);
h2d__impl___BatchDrawState__StateEntry h2d_impl__BatchDrawState_StateEntry_set(h2d__impl___BatchDrawState__StateEntry,h3d__mat__Texture);
#include <h2d/RenderContext.h>
#include <h3d/Buffer.h>
#include <h3d/Engine.h>
#include <h3d/Indexes.h>
#include <h3d/impl/MemoryManager.h>
void h2d_RenderContext_beforeDraw(h2d__RenderContext);
void h3d_Engine_renderBuffer(h3d__Engine,h3d__Buffer,h3d__Indexes,int,int*,int*);
void h3d_Engine_renderIndexed(h3d__Engine,h3d__Buffer,h3d__Indexes,int*,int*);

void h2d_impl_BatchDrawState_new(h2d__impl__BatchDrawState r0) {
	h2d__impl___BatchDrawState__StateEntry r1;
	int r4;
	h3d__mat__Texture r2;
	r1 = (h2d__impl___BatchDrawState__StateEntry)hl_alloc_obj(&t$h2d_impl__BatchDrawState_StateEntry);
	r2 = NULL;
	h2d_impl__BatchDrawState_StateEntry_new(r1,r2);
	r0->tail = r1;
	r0->head = r1;
	r4 = 0;
	r0->totalCount = r4;
	return;
}

void h2d_impl_BatchDrawState_setTile(h2d__impl__BatchDrawState r0,h2d__Tile r1) {
	h3d__mat__Texture r3;
	if( !r1 ) goto label$f1e1159_2_4;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->innerTex;
	h2d_impl_BatchDrawState_setTexture(r0,r3);
	label$f1e1159_2_4:
	return;
}

void h2d_impl_BatchDrawState_setTexture(h2d__impl__BatchDrawState r0,h3d__mat__Texture r1) {
	h2d__impl___BatchDrawState__StateEntry r4, r5, r6;
	h3d__mat__Texture r3;
	if( !r1 ) goto label$f1e1159_3_26;
	r4 = r0->tail;
	if( r4 == NULL ) hl_null_access();
	r3 = r4->texture;
	if( r3 ) goto label$f1e1159_3_9;
	r4 = r0->tail;
	if( r4 == NULL ) hl_null_access();
	r4->texture = r1;
	goto label$f1e1159_3_26;
	label$f1e1159_3_9:
	r4 = r0->tail;
	if( r4 == NULL ) hl_null_access();
	r3 = r4->texture;
	if( r3 == r1 ) goto label$f1e1159_3_26;
	r4 = r0->tail;
	if( r4 == NULL ) hl_null_access();
	r5 = r4->next;
	if( r5 ) goto label$f1e1159_3_22;
	r6 = (h2d__impl___BatchDrawState__StateEntry)hl_alloc_obj(&t$h2d_impl__BatchDrawState_StateEntry);
	h2d_impl__BatchDrawState_StateEntry_new(r6,r1);
	r0->tail = r6;
	r4->next = r6;
	goto label$f1e1159_3_26;
	label$f1e1159_3_22:
	r5 = r4->next;
	if( r5 == NULL ) hl_null_access();
	r5 = h2d_impl__BatchDrawState_StateEntry_set(r5,r1);
	r0->tail = r5;
	label$f1e1159_3_26:
	return;
}

void h2d_impl_BatchDrawState_add(h2d__impl__BatchDrawState r0,int r1) {
	h2d__impl___BatchDrawState__StateEntry r2;
	int r3;
	r2 = r0->tail;
	if( r2 == NULL ) hl_null_access();
	r3 = r2->count;
	r3 = r3 + r1;
	r2->count = r3;
	r3 = r0->totalCount;
	r3 = r3 + r1;
	r0->totalCount = r3;
	return;
}

void h2d_impl_BatchDrawState_clear(h2d__impl__BatchDrawState r0) {
	bool r3;
	h2d__impl___BatchDrawState__StateEntry r1, r4;
	int r6;
	h3d__mat__Texture r5;
	r1 = r0->head;
	label$f1e1159_5_1:
	r3 = true;
	if( !r3 ) goto label$f1e1159_5_12;
	if( r1 == NULL ) hl_null_access();
	r5 = NULL;
	r1->texture = r5;
	r4 = r1->next;
	r1 = r4;
	if( r4 ) goto label$f1e1159_5_11;
	goto label$f1e1159_5_12;
	label$f1e1159_5_11:
	goto label$f1e1159_5_1;
	label$f1e1159_5_12:
	r4 = r0->head;
	r0->tail = r4;
	r4 = r0->tail;
	if( r4 == NULL ) hl_null_access();
	r6 = 0;
	r4->count = r6;
	r6 = 0;
	r0->totalCount = r6;
	return;
}

void h2d_impl_BatchDrawState_drawQuads(h2d__impl__BatchDrawState r0,h2d__RenderContext r1,h3d__Buffer r2,int* r3,int* r4) {
	bool r13;
	h3d__Engine r10;
	h3d__impl__MemoryManager r18;
	h2d__impl___BatchDrawState__StateEntry r7, r9, r15;
	h3d__Indexes r17;
	h3d__mat__Texture r14;
	int r5, r6, r11, r12, r16, r19, r20, r21, r22, r23, r24, r25;
	if( r3 ) goto label$f1e1159_6_3;
	r5 = 0;
	goto label$f1e1159_6_4;
	label$f1e1159_6_3:
	r5 = *r3;
	label$f1e1159_6_4:
	if( r4 ) goto label$f1e1159_6_7;
	r6 = -1;
	goto label$f1e1159_6_8;
	label$f1e1159_6_7:
	r6 = *r4;
	label$f1e1159_6_8:
	r7 = r0->head;
	r9 = r0->tail;
	if( r9 == NULL ) hl_null_access();
	r9 = r9->next;
	if( r1 == NULL ) hl_null_access();
	r10 = r1->engine;
	r12 = 0;
	if( r5 != r12 ) goto label$f1e1159_6_48;
	r12 = -1;
	if( r6 != r12 ) goto label$f1e1159_6_48;
	label$f1e1159_6_18:
	r13 = true;
	if( !r13 ) goto label$f1e1159_6_47;
	if( r1 == NULL ) hl_null_access();
	if( r7 == NULL ) hl_null_access();
	r14 = r7->texture;
	r1->texture = r14;
	h2d_RenderContext_beforeDraw(r1);
	r12 = r7->count;
	r16 = 1;
	r12 = r12 >> r16;
	r11 = r12;
	if( r10 == NULL ) hl_null_access();
	r18 = r10->mem;
	if( r18 == NULL ) hl_null_access();
	r17 = r18->quadIndexes;
	r12 = 2;
	r16 = r5;
	r3 = &r16;
	r19 = r11;
	r4 = &r19;
	h3d_Engine_renderBuffer(r10,r2,r17,r12,r3,r4);
	r12 = r5 + r11;
	r5 = r12;
	r15 = r7->next;
	r7 = r15;
	if( r15 != r9 ) goto label$f1e1159_6_46;
	goto label$f1e1159_6_47;
	label$f1e1159_6_46:
	goto label$f1e1159_6_18;
	label$f1e1159_6_47:
	goto label$f1e1159_6_100;
	label$f1e1159_6_48:
	r20 = -1;
	if( r6 != r20 ) goto label$f1e1159_6_55;
	r12 = r0->totalCount;
	r20 = 1;
	r12 = r12 >> r20;
	r12 = r12 - r5;
	r6 = r12;
	label$f1e1159_6_55:
	r12 = 0;
	label$f1e1159_6_56:
	r13 = true;
	if( !r13 ) goto label$f1e1159_6_100;
	if( r7 == NULL ) hl_null_access();
	r20 = r7->count;
	r21 = 1;
	r20 = r20 >> r21;
	r11 = r20;
	r20 = r12 + r11;
	if( r20 < r5 ) goto label$f1e1159_6_93;
	if( r5 < r12 ) goto label$f1e1159_6_69;
	r20 = r5;
	goto label$f1e1159_6_70;
	label$f1e1159_6_69:
	r20 = r12;
	label$f1e1159_6_70:
	if( r11 >= r6 ) goto label$f1e1159_6_73;
	r21 = r11;
	goto label$f1e1159_6_74;
	label$f1e1159_6_73:
	r21 = r6;
	label$f1e1159_6_74:
	if( r1 == NULL ) hl_null_access();
	r14 = r7->texture;
	r1->texture = r14;
	h2d_RenderContext_beforeDraw(r1);
	if( r10 == NULL ) hl_null_access();
	r18 = r10->mem;
	if( r18 == NULL ) hl_null_access();
	r17 = r18->quadIndexes;
	r22 = 2;
	r23 = r20;
	r3 = &r23;
	r24 = r21;
	r4 = &r24;
	h3d_Engine_renderBuffer(r10,r2,r17,r22,r3,r4);
	r22 = r6 - r21;
	r6 = r22;
	r25 = 0;
	if( r22 != r25 ) goto label$f1e1159_6_93;
	goto label$f1e1159_6_100;
	label$f1e1159_6_93:
	r20 = r12 + r11;
	r12 = r20;
	r15 = r7->next;
	r7 = r15;
	if( r15 != r9 ) goto label$f1e1159_6_99;
	goto label$f1e1159_6_100;
	label$f1e1159_6_99:
	goto label$f1e1159_6_56;
	label$f1e1159_6_100:
	return;
}

void h2d_impl_BatchDrawState_drawIndexed(h2d__impl__BatchDrawState r0,h2d__RenderContext r1,h3d__Buffer r2,h3d__Indexes r3,int* r4,int* r5) {
	bool r14;
	h3d__Engine r11;
	h2d__impl___BatchDrawState__StateEntry r8, r10, r16;
	h3d__mat__Texture r15;
	int r6, r7, r12, r13, r17, r18, r19, r20, r21, r22, r23, r24, r25;
	if( r4 ) goto label$f1e1159_7_3;
	r6 = 0;
	goto label$f1e1159_7_4;
	label$f1e1159_7_3:
	r6 = *r4;
	label$f1e1159_7_4:
	if( r5 ) goto label$f1e1159_7_7;
	r7 = -1;
	goto label$f1e1159_7_8;
	label$f1e1159_7_7:
	r7 = *r5;
	label$f1e1159_7_8:
	r8 = r0->head;
	r10 = r0->tail;
	if( r10 == NULL ) hl_null_access();
	r10 = r10->next;
	if( r1 == NULL ) hl_null_access();
	r11 = r1->engine;
	r13 = 0;
	if( r6 != r13 ) goto label$f1e1159_7_44;
	r13 = -1;
	if( r7 != r13 ) goto label$f1e1159_7_44;
	label$f1e1159_7_18:
	r14 = true;
	if( !r14 ) goto label$f1e1159_7_43;
	if( r1 == NULL ) hl_null_access();
	if( r8 == NULL ) hl_null_access();
	r15 = r8->texture;
	r1->texture = r15;
	h2d_RenderContext_beforeDraw(r1);
	r12 = r8->count;
	r18 = 3;
	r17 = r18 == 0 ? 0 : r12 / r18;
	r13 = r17;
	if( r11 == NULL ) hl_null_access();
	r17 = r6;
	r4 = &r17;
	r18 = r13;
	r5 = &r18;
	h3d_Engine_renderIndexed(r11,r2,r3,r4,r5);
	r19 = r6 + r13;
	r6 = r19;
	r16 = r8->next;
	r8 = r16;
	if( r16 != r10 ) goto label$f1e1159_7_42;
	goto label$f1e1159_7_43;
	label$f1e1159_7_42:
	goto label$f1e1159_7_18;
	label$f1e1159_7_43:
	goto label$f1e1159_7_91;
	label$f1e1159_7_44:
	r19 = -1;
	if( r7 != r19 ) goto label$f1e1159_7_50;
	r12 = r0->totalCount;
	r20 = 3;
	r19 = r20 == 0 ? 0 : r12 / r20;
	r7 = r19;
	label$f1e1159_7_50:
	r12 = 0;
	label$f1e1159_7_51:
	r14 = true;
	if( !r14 ) goto label$f1e1159_7_91;
	if( r8 == NULL ) hl_null_access();
	r19 = r8->count;
	r21 = 3;
	r20 = r21 == 0 ? 0 : r19 / r21;
	r13 = r20;
	r20 = r12 + r13;
	if( r20 < r6 ) goto label$f1e1159_7_84;
	if( r6 < r12 ) goto label$f1e1159_7_64;
	r20 = r6;
	goto label$f1e1159_7_65;
	label$f1e1159_7_64:
	r20 = r12;
	label$f1e1159_7_65:
	if( r13 >= r7 ) goto label$f1e1159_7_68;
	r21 = r13;
	goto label$f1e1159_7_69;
	label$f1e1159_7_68:
	r21 = r7;
	label$f1e1159_7_69:
	if( r1 == NULL ) hl_null_access();
	r15 = r8->texture;
	r1->texture = r15;
	h2d_RenderContext_beforeDraw(r1);
	if( r11 == NULL ) hl_null_access();
	r22 = r20;
	r4 = &r22;
	r23 = r21;
	r5 = &r23;
	h3d_Engine_renderIndexed(r11,r2,r3,r4,r5);
	r24 = r7 - r21;
	r7 = r24;
	r25 = 0;
	if( r24 != r25 ) goto label$f1e1159_7_84;
	goto label$f1e1159_7_91;
	label$f1e1159_7_84:
	r20 = r12 + r13;
	r12 = r20;
	r16 = r8->next;
	r8 = r16;
	if( r16 != r10 ) goto label$f1e1159_7_90;
	goto label$f1e1159_7_91;
	label$f1e1159_7_90:
	goto label$f1e1159_7_51;
	label$f1e1159_7_91:
	return;
}

h3d__mat__Texture h2d_impl_BatchDrawState_get_currentTexture(h2d__impl__BatchDrawState r0) {
	h2d__impl___BatchDrawState__StateEntry r2;
	h3d__mat__Texture r1;
	r2 = r0->tail;
	if( r2 == NULL ) hl_null_access();
	r1 = r2->texture;
	return r1;
}

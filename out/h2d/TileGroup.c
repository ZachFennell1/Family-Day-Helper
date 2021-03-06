// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <h2d/TileGroup.h>
void h2d_Drawable_new(h2d__Drawable,h2d__Object);
extern hl_type t$h3d_Vector;
void h3d_Vector_new(h3d__Vector,double*,double*,double*,double*);
extern hl_type t$h2d_TileLayerContent;
void h2d_TileLayerContent_new(h2d__TileLayerContent);
#include <h2d/col/Bounds.h>
void h2d_Object_getBoundsRec(h2d__Object,h2d__Object,h2d__col__Bounds,bool);
void h2d_Object_addBounds(h2d__Object,h2d__Object,h2d__col__Bounds,double,double,double,double);
void h2d_TileLayerContent_clear(h2d__TileLayerContent);
void h2d_TileLayerContent_dispose(h2d__TileLayerContent);
int h2d_TileLayerContent_triCount(h2d__TileLayerContent);
void h2d_Object_onRemove(h2d__Object);
void h2d_TileLayerContent_add(h2d__TileLayerContent,double,double,double,double,double,double,h2d__Tile);
void h2d_TileLayerContent_addTransform(h2d__TileLayerContent,double,double,double,double,double,h3d__Vector,h2d__Tile);
#include <h2d/RenderContext.h>
void h2d_TileGroup_drawWith(h2d__TileGroup,h2d__RenderContext,h2d__Drawable);
#include <h3d/Buffer.h>
#include <h3d/impl/ManagedBuffer.h>
#include <h3d/Engine.h>
void h2d_Object_sync(h2d__Object,h2d__RenderContext);
extern h3d__$Engine g$_h3d_Engine;
void h2d_TileLayerContent_alloc(h2d__TileLayerContent,h3d__Engine);
#include <h2d/impl/BatchDrawState.h>
bool h2d_RenderContext_beginDrawBatchState(h2d__RenderContext,h2d__Drawable);
void h2d_impl_BatchDrawState_drawQuads(h2d__impl__BatchDrawState,h2d__RenderContext,h3d__Buffer,int*,int*);

void h2d_TileGroup_new(h2d__TileGroup r0,h2d__Tile r1,h2d__Object r2) {
	h2d__TileLayerContent r14;
	h3d__Vector r5;
	double r6, r8, r10, r12;
	double *r7, *r9, *r11, *r13;
	int r4;
	h2d_Drawable_new(((h2d__Drawable)r0),r2);
	r0->tile = r1;
	r4 = -1;
	r0->rangeMax = r4;
	r0->rangeMin = r4;
	r5 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r4 = 1;
	r6 = (double)r4;
	r7 = &r6;
	r4 = 1;
	r8 = (double)r4;
	r9 = &r8;
	r4 = 1;
	r10 = (double)r4;
	r11 = &r10;
	r4 = 1;
	r12 = (double)r4;
	r13 = &r12;
	h3d_Vector_new(r5,r7,r9,r11,r13);
	r0->curColor = r5;
	r14 = (h2d__TileLayerContent)hl_alloc_obj(&t$h2d_TileLayerContent);
	h2d_TileLayerContent_new(r14);
	r0->content = r14;
	return;
}

void h2d_TileGroup_getBoundsRec(h2d__TileGroup r0,h2d__Object r1,h2d__col__Bounds r2,bool r3) {
	h2d__TileLayerContent r6;
	double r5, r7, r8, r9, r10;
	h2d_Object_getBoundsRec(((h2d__Object)r0),r1,r2,r3);
	r6 = r0->content;
	if( r6 == NULL ) hl_null_access();
	r5 = r6->xMin;
	r6 = r0->content;
	if( r6 == NULL ) hl_null_access();
	r7 = r6->yMin;
	r6 = r0->content;
	if( r6 == NULL ) hl_null_access();
	r8 = r6->xMax;
	r6 = r0->content;
	if( r6 == NULL ) hl_null_access();
	r9 = r6->xMin;
	r8 = r8 - r9;
	r6 = r0->content;
	if( r6 == NULL ) hl_null_access();
	r9 = r6->yMax;
	r6 = r0->content;
	if( r6 == NULL ) hl_null_access();
	r10 = r6->yMin;
	r9 = r9 - r10;
	h2d_Object_addBounds(((h2d__Object)r0),r1,r2,r5,r7,r8,r9);
	return;
}

void h2d_TileGroup_clear(h2d__TileGroup r0) {
	h2d__TileLayerContent r2;
	r2 = r0->content;
	if( r2 == NULL ) hl_null_access();
	h2d_TileLayerContent_clear(r2);
	return;
}

void h2d_TileGroup_invalidate(h2d__TileGroup r0) {
	h2d__TileLayerContent r2;
	r2 = r0->content;
	if( r2 == NULL ) hl_null_access();
	h2d_TileLayerContent_dispose(r2);
	return;
}

int h2d_TileGroup_count(h2d__TileGroup r0) {
	h2d__TileLayerContent r2;
	int r1, r3;
	r2 = r0->content;
	if( r2 == NULL ) hl_null_access();
	r1 = h2d_TileLayerContent_triCount(r2);
	r3 = 1;
	r1 = r1 >> r3;
	return r1;
}

void h2d_TileGroup_onRemove(h2d__TileGroup r0) {
	h2d__TileLayerContent r2;
	r2 = r0->content;
	if( r2 == NULL ) hl_null_access();
	h2d_TileLayerContent_dispose(r2);
	h2d_Object_onRemove(((h2d__Object)r0));
	return;
}

void h2d_TileGroup_setDefaultColor(h2d__TileGroup r0,int r1,double* r2) {
	h3d__Vector r4;
	double r3, r5, r8;
	int r6, r7;
	if( r2 ) goto label$daf1523_7_3;
	r3 = 1.;
	goto label$daf1523_7_4;
	label$daf1523_7_3:
	r3 = *r2;
	label$daf1523_7_4:
	r4 = r0->curColor;
	if( r4 == NULL ) hl_null_access();
	r7 = 16;
	r6 = r1 >> r7;
	r7 = 255;
	r6 = r6 & r7;
	r5 = (double)r6;
	r8 = 255.;
	r5 = r5 / r8;
	r4->x = r5;
	r4 = r0->curColor;
	if( r4 == NULL ) hl_null_access();
	r7 = 8;
	r6 = r1 >> r7;
	r7 = 255;
	r6 = r6 & r7;
	r5 = (double)r6;
	r8 = 255.;
	r5 = r5 / r8;
	r4->y = r5;
	r4 = r0->curColor;
	if( r4 == NULL ) hl_null_access();
	r7 = 255;
	r6 = r1 & r7;
	r5 = (double)r6;
	r8 = 255.;
	r5 = r5 / r8;
	r4->z = r5;
	r4 = r0->curColor;
	if( r4 == NULL ) hl_null_access();
	r4->w = r3;
	return;
}

void h2d_TileGroup_add(h2d__TileGroup r0,double r1,double r2,h2d__Tile r3) {
	h2d__TileLayerContent r5;
	h3d__Vector r7;
	double r6, r8, r9, r10;
	r5 = r0->content;
	if( r5 == NULL ) hl_null_access();
	r7 = r0->curColor;
	if( r7 == NULL ) hl_null_access();
	r6 = r7->x;
	r7 = r0->curColor;
	if( r7 == NULL ) hl_null_access();
	r8 = r7->y;
	r7 = r0->curColor;
	if( r7 == NULL ) hl_null_access();
	r9 = r7->z;
	r7 = r0->curColor;
	if( r7 == NULL ) hl_null_access();
	r10 = r7->w;
	h2d_TileLayerContent_add(r5,r1,r2,r6,r8,r9,r10,r3);
	return;
}

void h2d_TileGroup_addColor(h2d__TileGroup r0,double r1,double r2,double r3,double r4,double r5,double r6,h2d__Tile r7) {
	h2d__TileLayerContent r9;
	r9 = r0->content;
	if( r9 == NULL ) hl_null_access();
	h2d_TileLayerContent_add(r9,r1,r2,r3,r4,r5,r6,r7);
	return;
}

void h2d_TileGroup_addAlpha(h2d__TileGroup r0,double r1,double r2,double r3,h2d__Tile r4) {
	h2d__TileLayerContent r6;
	h3d__Vector r8;
	double r7, r9, r10;
	r6 = r0->content;
	if( r6 == NULL ) hl_null_access();
	r8 = r0->curColor;
	if( r8 == NULL ) hl_null_access();
	r7 = r8->x;
	r8 = r0->curColor;
	if( r8 == NULL ) hl_null_access();
	r9 = r8->y;
	r8 = r0->curColor;
	if( r8 == NULL ) hl_null_access();
	r10 = r8->z;
	h2d_TileLayerContent_add(r6,r1,r2,r7,r9,r10,r3,r4);
	return;
}

void h2d_TileGroup_addTransform(h2d__TileGroup r0,double r1,double r2,double r3,double r4,double r5,h2d__Tile r6) {
	h2d__TileLayerContent r8;
	h3d__Vector r9;
	r8 = r0->content;
	if( r8 == NULL ) hl_null_access();
	r9 = r0->curColor;
	h2d_TileLayerContent_addTransform(r8,r1,r2,r3,r4,r5,r9,r6);
	return;
}

void h2d_TileGroup_draw(h2d__TileGroup r0,h2d__RenderContext r1) {
	h2d_TileGroup_drawWith(r0,r1,((h2d__Drawable)r0));
	return;
}

void h2d_TileGroup_sync(h2d__TileGroup r0,h2d__RenderContext r1) {
	vvirtual *r8;
	h2d__TileLayerContent r4;
	bool r3, r6;
	h3d__Engine r9;
	h3d__$Engine r10;
	h3d__Buffer r5;
	h3d__impl__ManagedBuffer r7;
	h2d_Object_sync(((h2d__Object)r0),r1);
	r3 = r0->visible;
	if( !r3 ) goto label$daf1523_13_24;
	r4 = r0->content;
	if( r4 == NULL ) hl_null_access();
	r5 = r4->buffer;
	if( !r5 ) goto label$daf1523_13_19;
	r5 = r4->buffer;
	if( r5 == NULL ) hl_null_access();
	r7 = r5->buffer;
	if( !r7 ) goto label$daf1523_13_17;
	r7 = r5->buffer;
	if( r7 == NULL ) hl_null_access();
	r8 = r7->vbuf;
	if( !r8 ) goto label$daf1523_13_17;
	r6 = false;
	goto label$daf1523_13_18;
	label$daf1523_13_17:
	r6 = true;
	label$daf1523_13_18:
	goto label$daf1523_13_20;
	label$daf1523_13_19:
	r6 = true;
	label$daf1523_13_20:
	if( !r6 ) goto label$daf1523_13_24;
	r10 = (h3d__$Engine)g$_h3d_Engine;
	r9 = r10->CURRENT;
	h2d_TileLayerContent_alloc(r4,r9);
	label$daf1523_13_24:
	return;
}

void h2d_TileGroup_drawWith(h2d__TileGroup r0,h2d__RenderContext r1,h2d__Drawable r2) {
	vvirtual *r14;
	h2d__impl__BatchDrawState r17;
	h2d__TileLayerContent r4;
	bool r8, r12;
	h3d__Engine r15;
	h3d__$Engine r16;
	h3d__Buffer r11;
	int *r18, *r19;
	h3d__impl__ManagedBuffer r13;
	int r3, r6, r7, r9, r10;
	r4 = r0->content;
	if( r4 == NULL ) hl_null_access();
	r3 = h2d_TileLayerContent_triCount(r4);
	r7 = 0;
	if( r3 != r7 ) goto label$daf1523_14_6;
	return;
	label$daf1523_14_6:
	if( r1 == NULL ) hl_null_access();
	r8 = h2d_RenderContext_beginDrawBatchState(r1,r2);
	if( r8 ) goto label$daf1523_14_10;
	return;
	label$daf1523_14_10:
	r6 = r0->rangeMin;
	r7 = 0;
	if( r6 >= r7 ) goto label$daf1523_14_15;
	r6 = 0;
	goto label$daf1523_14_18;
	label$daf1523_14_15:
	r6 = r0->rangeMin;
	r7 = 2;
	r6 = r6 * r7;
	label$daf1523_14_18:
	r7 = r0->rangeMax;
	r9 = 0;
	if( r9 >= r7 ) goto label$daf1523_14_29;
	r7 = r0->rangeMax;
	r10 = 2;
	r9 = r3 * r10;
	if( r7 >= r9 ) goto label$daf1523_14_29;
	r7 = r0->rangeMax;
	r9 = 2;
	r7 = r7 * r9;
	r3 = r7;
	label$daf1523_14_29:
	r4 = r0->content;
	if( r4 == NULL ) hl_null_access();
	r11 = r4->buffer;
	if( !r11 ) goto label$daf1523_14_45;
	r11 = r4->buffer;
	if( r11 == NULL ) hl_null_access();
	r13 = r11->buffer;
	if( !r13 ) goto label$daf1523_14_43;
	r13 = r11->buffer;
	if( r13 == NULL ) hl_null_access();
	r14 = r13->vbuf;
	if( !r14 ) goto label$daf1523_14_43;
	r12 = false;
	goto label$daf1523_14_44;
	label$daf1523_14_43:
	r12 = true;
	label$daf1523_14_44:
	goto label$daf1523_14_46;
	label$daf1523_14_45:
	r12 = true;
	label$daf1523_14_46:
	if( !r12 ) goto label$daf1523_14_50;
	r16 = (h3d__$Engine)g$_h3d_Engine;
	r15 = r16->CURRENT;
	h2d_TileLayerContent_alloc(r4,r15);
	label$daf1523_14_50:
	r17 = r4->state;
	if( r17 == NULL ) hl_null_access();
	r11 = r4->buffer;
	r7 = r6;
	r18 = &r7;
	r9 = r3 - r6;
	r19 = &r9;
	h2d_impl_BatchDrawState_drawQuads(r17,r1,r11,r18,r19);
	return;
}


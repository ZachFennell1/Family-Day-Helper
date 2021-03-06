// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <h3d/Engine.h>
extern h3d__$Engine g$_h3d_Engine;
void h3d_Engine_onCreate(h3d__Engine,bool);
extern hl_type t$fun_d6a95db;
#include <hxsl/RuntimeShader.h>
void h3d_Engine_doFlushTarget(h3d__Engine);
#include <h3d/mat/Pass.h>
#include <h3d/shader/Buffers.h>
#include <h3d/Buffer.h>
#include <h3d/impl/ManagedBuffer.h>
#include <h3d/Indexes.h>
void h3d_Engine_renderBuffer(h3d__Engine,h3d__Buffer,h3d__Indexes,int,int*,int*);
bool h3d_Indexes_isDisposed(h3d__Indexes);
extern String s$Buffer_is_split;
vdynamic* haxe_Exception_thrown(vdynamic*);
#include <h3d/BufferOffset.h>
#include <h3d/impl/InstanceBuffer.h>
#include <hxd/impl/Allocator.h>
#include <hl/types/ArrayObj.h>
#include <h3d/mat/TextureFlags.h>
#include <hxd/PixelFormat.h>
#include <h3d/impl/Feature.h>
int hxd_Window_get_width(hxd__Window);
int hxd_Window_get_height(hxd__Window);
hxd__impl__Allocator hxd_impl_Allocator_get(void);
void hxd_impl_Allocator_onContextLost(hxd__impl__Allocator);
void h3d_impl_MemoryManager_onContextLost(h3d__impl__MemoryManager);
extern hl_type t$h3d_impl_MemoryManager;
void h3d_impl_MemoryManager_new(h3d__impl__MemoryManager,h3d__impl__Driver);
void h3d_impl_MemoryManager_init(h3d__impl__MemoryManager);
extern hl_type t$h3d_mat_Texture;
extern hl_type t$h3d_mat_TextureFlags;
#include <hl/natives.h>
extern venum* g$h3d_mat_TextureFlags_NoAlloc;
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);
void h3d_mat_Texture_new(h3d__mat__Texture,int,int,hl__types__ArrayObj,venum*);
extern venum* g$6181a89;
bool h3d_Engine_set_fullScreen(h3d__Engine,bool);
void h3d_Engine_resize(h3d__Engine,int,int);
#include <hxd/SystemValue.h>
extern venum* g$hxd_SystemValue_IsWindowed;
bool hxd_System_getValue(venum*);
int hxd_Window_set_displayMode(hxd__Window,int);
#include <hxd/Timer.h>
extern hxd__$Timer g$_hxd_Timer;
extern hl_type t$_f64;
extern hl_type t$_i32;
void h3d_Engine_clear(h3d__Engine,vdynamic*,vdynamic*,vdynamic*);
extern hl_type t$h3d__Engine_TargetTmp;
void h3d__Engine_TargetTmp_new(h3d___Engine__TargetTmp,h3d__mat__Texture,h3d___Engine__TargetTmp,int,int);
void h3d_Engine_updateNeedFlush(h3d__Engine);
extern String s$6e0e621;
extern hl_type t$fun_d333c41;
void h3d_impl_Driver_dispose(h3d__impl__Driver);
extern hl_type t$fun_9e7b219;
void hxd_Window_removeResizeEvent(hxd__Window,vclosure*);
#include <h3d/impl/GlDriver.h>
extern hl_type t$haxe_ds_ObjectMap;
void haxe_ds_ObjectMap_new(haxe__ds__ObjectMap);
extern hl_type t$haxe_ds_IntMap;
void haxe_ds_IntMap_new(haxe__ds__IntMap);
extern hl_type t$h3d_Vector;
void h3d_Vector_new(h3d__Vector,double*,double*,double*,double*);
hxd__Window hxd_Window_getInstance(void);
double hxd_System_getDefaultFrameRate(void);
void hxd_Window_addResizeEvent(hxd__Window,vclosure*);
extern hl_type t$h3d_impl_GlDriver;
void h3d_impl_GlDriver_new(h3d__impl__GlDriver,int*);

void h3d_Engine_setDriver(h3d__Engine r0,h3d__impl__Driver r1) {
	h3d__impl__MemoryManager r3;
	r0->driver = r1;
	r3 = r0->mem;
	if( !r3 ) goto label$5eb80ee_1_6;
	r3 = r0->mem;
	if( r3 == NULL ) hl_null_access();
	r3->driver = r1;
	label$5eb80ee_1_6:
	return;
}

h3d__Engine h3d_Engine_getCurrent() {
	h3d__Engine r0;
	h3d__$Engine r1;
	r1 = (h3d__$Engine)g$_h3d_Engine;
	r0 = r1->CURRENT;
	return r0;
}

void h3d_Engine_setCurrent(h3d__Engine r0) {
	h3d__$Engine r1;
	r1 = (h3d__$Engine)g$_h3d_Engine;
	r1->CURRENT = r0;
	return;
}

void h3d_Engine_init(h3d__Engine r0) {
	bool *r5;
	bool r4;
	vclosure *r3;
	h3d__impl__Driver r2;
	r2 = r0->driver;
	if( r2 == NULL ) hl_null_access();
	r3 = hl_alloc_closure_ptr(&t$fun_d6a95db,h3d_Engine_onCreate,r0);
	r4 = r0->hardware;
	r4 = !r4;
	r5 = &r4;
	((void (*)(h3d__impl__Driver,vclosure*,bool*))r2->$type->vobj_proto[12])(r2,r3,r5);
	return;
}

String h3d_Engine_driverName(h3d__Engine r0,bool* r1) {
	String r3;
	bool r2;
	h3d__impl__Driver r4;
	if( r1 ) goto label$5eb80ee_5_3;
	r2 = false;
	goto label$5eb80ee_5_4;
	label$5eb80ee_5_3:
	r2 = *r1;
	label$5eb80ee_5_4:
	r4 = r0->driver;
	if( r4 == NULL ) hl_null_access();
	r3 = ((String (*)(h3d__impl__Driver,bool))r4->$type->vobj_proto[11])(r4,r2);
	return r3;
}

void h3d_Engine_selectShader(h3d__Engine r0,hxsl__RuntimeShader r1) {
	bool r3;
	h3d__impl__Driver r4;
	int r5;
	r3 = r0->needFlushTarget;
	if( !r3 ) goto label$5eb80ee_6_3;
	h3d_Engine_doFlushTarget(r0);
	label$5eb80ee_6_3:
	r4 = r0->driver;
	if( r4 == NULL ) hl_null_access();
	r3 = ((bool (*)(h3d__impl__Driver,hxsl__RuntimeShader))r4->$type->vobj_proto[14])(r4,r1);
	if( !r3 ) goto label$5eb80ee_6_10;
	r5 = r0->shaderSwitches;
	++r5;
	r0->shaderSwitches = r5;
	label$5eb80ee_6_10:
	return;
}

void h3d_Engine_selectMaterial(h3d__Engine r0,h3d__mat__Pass r1) {
	h3d__impl__Driver r3;
	r3 = r0->driver;
	if( r3 == NULL ) hl_null_access();
	((void (*)(h3d__impl__Driver,h3d__mat__Pass))r3->$type->vobj_proto[15])(r3,r1);
	return;
}

void h3d_Engine_uploadShaderBuffers(h3d__Engine r0,h3d__shader__Buffers r1,int r2) {
	h3d__impl__Driver r4;
	r4 = r0->driver;
	if( r4 == NULL ) hl_null_access();
	((void (*)(h3d__impl__Driver,h3d__shader__Buffers,int))r4->$type->vobj_proto[16])(r4,r1,r2);
	return;
}

bool h3d_Engine_selectBuffer(h3d__Engine r0,h3d__Buffer r1) {
	vvirtual *r4;
	bool r5;
	h3d__impl__Driver r6;
	h3d__impl__ManagedBuffer r3;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->buffer;
	if( !r3 ) goto label$5eb80ee_9_7;
	r3 = r1->buffer;
	if( r3 == NULL ) hl_null_access();
	r4 = r3->vbuf;
	if( r4 ) goto label$5eb80ee_9_9;
	label$5eb80ee_9_7:
	r5 = false;
	return r5;
	label$5eb80ee_9_9:
	r5 = r0->needFlushTarget;
	if( !r5 ) goto label$5eb80ee_9_12;
	h3d_Engine_doFlushTarget(r0);
	label$5eb80ee_9_12:
	r6 = r0->driver;
	if( r6 == NULL ) hl_null_access();
	((void (*)(h3d__impl__Driver,h3d__Buffer))r6->$type->vobj_proto[18])(r6,r1);
	r5 = true;
	return r5;
}

void h3d_Engine_renderTriBuffer(h3d__Engine r0,h3d__Buffer r1,int* r2,int* r3) {
	h3d__impl__MemoryManager r8;
	h3d__Indexes r7;
	int r4, r5, r9, r10, r11;
	if( r2 ) goto label$5eb80ee_10_3;
	r4 = 0;
	goto label$5eb80ee_10_4;
	label$5eb80ee_10_3:
	r4 = *r2;
	label$5eb80ee_10_4:
	if( r3 ) goto label$5eb80ee_10_7;
	r5 = -1;
	goto label$5eb80ee_10_8;
	label$5eb80ee_10_7:
	r5 = *r3;
	label$5eb80ee_10_8:
	r8 = r0->mem;
	if( r8 == NULL ) hl_null_access();
	r7 = r8->triIndexes;
	r9 = 3;
	r10 = r4;
	r2 = &r10;
	r11 = r5;
	r3 = &r11;
	h3d_Engine_renderBuffer(r0,r1,r7,r9,r2,r3);
	return;
}

void h3d_Engine_renderQuadBuffer(h3d__Engine r0,h3d__Buffer r1,int* r2,int* r3) {
	h3d__impl__MemoryManager r8;
	h3d__Indexes r7;
	int r4, r5, r9, r10, r11;
	if( r2 ) goto label$5eb80ee_11_3;
	r4 = 0;
	goto label$5eb80ee_11_4;
	label$5eb80ee_11_3:
	r4 = *r2;
	label$5eb80ee_11_4:
	if( r3 ) goto label$5eb80ee_11_7;
	r5 = -1;
	goto label$5eb80ee_11_8;
	label$5eb80ee_11_7:
	r5 = *r3;
	label$5eb80ee_11_8:
	r8 = r0->mem;
	if( r8 == NULL ) hl_null_access();
	r7 = r8->quadIndexes;
	r9 = 2;
	r10 = r4;
	r2 = &r10;
	r11 = r5;
	r3 = &r11;
	h3d_Engine_renderBuffer(r0,r1,r7,r9,r2,r3);
	return;
}

void h3d_Engine_renderBuffer(h3d__Engine r0,h3d__Buffer r1,h3d__Indexes r2,int r3,int* r4,int* r5) {
	vvirtual *r19;
	bool r9;
	h3d__Buffer r12;
	double r10, r13, r15;
	h3d__impl__Driver r18;
	int r6, r7, r11, r14, r16, r17;
	if( r4 ) goto label$5eb80ee_12_3;
	r6 = 0;
	goto label$5eb80ee_12_4;
	label$5eb80ee_12_3:
	r6 = *r4;
	label$5eb80ee_12_4:
	if( r5 ) goto label$5eb80ee_12_7;
	r7 = -1;
	goto label$5eb80ee_12_8;
	label$5eb80ee_12_7:
	r7 = *r5;
	label$5eb80ee_12_8:
	if( r2 == NULL ) hl_null_access();
	r9 = h3d_Indexes_isDisposed(r2);
	if( !r9 ) goto label$5eb80ee_12_12;
	return;
	label$5eb80ee_12_12:
	r9 = true;
	if( !r9 ) goto label$5eb80ee_12_77;
	if( r1 == NULL ) hl_null_access();
	r11 = r1->vertices;
	r10 = (double)r11;
	r13 = (double)r3;
	r10 = r10 / r13;
	r11 = (int)r10;
	r14 = r1->position;
	r13 = (double)r14;
	r15 = (double)r3;
	r13 = r13 / r15;
	r14 = (int)r13;
	r17 = 0;
	if( r17 >= r6 ) goto label$5eb80ee_12_42;
	if( r6 < r11 ) goto label$5eb80ee_12_36;
	r16 = r6 - r11;
	r6 = r16;
	r12 = r1->next;
	r1 = r12;
	if( r12 ) goto label$5eb80ee_12_35;
	goto label$5eb80ee_12_77;
	label$5eb80ee_12_35:
	goto label$5eb80ee_12_12;
	label$5eb80ee_12_36:
	r16 = r14 + r6;
	r14 = r16;
	r16 = r11 - r6;
	r11 = r16;
	r16 = 0;
	r6 = r16;
	label$5eb80ee_12_42:
	r17 = 0;
	if( r7 < r17 ) goto label$5eb80ee_12_55;
	r17 = 0;
	if( r7 != r17 ) goto label$5eb80ee_12_47;
	return;
	label$5eb80ee_12_47:
	r16 = r7 - r11;
	r7 = r16;
	r17 = 0;
	if( r16 >= r17 ) goto label$5eb80ee_12_55;
	r16 = r11 + r7;
	r11 = r16;
	r16 = 0;
	r7 = r16;
	label$5eb80ee_12_55:
	r17 = 0;
	if( r17 >= r11 ) goto label$5eb80ee_12_72;
	r9 = h3d_Engine_selectBuffer(r0,r1);
	if( !r9 ) goto label$5eb80ee_12_72;
	r18 = r0->driver;
	if( r18 == NULL ) hl_null_access();
	if( r2 == NULL ) hl_null_access();
	r19 = r2->ibuf;
	r17 = 3;
	r16 = r14 * r17;
	((void (*)(h3d__impl__Driver,vvirtual*,int,int))r18->$type->vobj_proto[20])(r18,r19,r16,r11);
	r16 = r0->drawTriangles;
	r16 = r16 + r11;
	r0->drawTriangles = r16;
	r16 = r0->drawCalls;
	++r16;
	r0->drawCalls = r16;
	label$5eb80ee_12_72:
	r12 = r1->next;
	r1 = r12;
	if( r12 ) goto label$5eb80ee_12_76;
	goto label$5eb80ee_12_77;
	label$5eb80ee_12_76:
	goto label$5eb80ee_12_12;
	label$5eb80ee_12_77:
	return;
}

void h3d_Engine_renderIndexed(h3d__Engine r0,h3d__Buffer r1,h3d__Indexes r2,int* r3,int* r4) {
	String r10;
	vvirtual *r18;
	bool r11;
	double r12, r14;
	h3d__Buffer r8;
	h3d__impl__Driver r17;
	vdynamic *r9;
	int r5, r6, r13, r15, r16;
	if( r3 ) goto label$5eb80ee_13_3;
	r5 = 0;
	goto label$5eb80ee_13_4;
	label$5eb80ee_13_3:
	r5 = *r3;
	label$5eb80ee_13_4:
	if( r4 ) goto label$5eb80ee_13_7;
	r6 = -1;
	goto label$5eb80ee_13_8;
	label$5eb80ee_13_7:
	r6 = *r4;
	label$5eb80ee_13_8:
	if( r1 == NULL ) hl_null_access();
	r8 = r1->next;
	if( !r8 ) goto label$5eb80ee_13_14;
	r10 = (String)s$Buffer_is_split;
	r9 = haxe_Exception_thrown(((vdynamic*)r10));
	hl_throw((vdynamic*)r9);
	label$5eb80ee_13_14:
	if( r2 == NULL ) hl_null_access();
	r11 = h3d_Indexes_isDisposed(r2);
	if( !r11 ) goto label$5eb80ee_13_18;
	return;
	label$5eb80ee_13_18:
	r13 = r2->count;
	r12 = (double)r13;
	r14 = 3.;
	r12 = r12 / r14;
	r13 = (int)r12;
	r16 = 0;
	if( r6 >= r16 ) goto label$5eb80ee_13_27;
	r15 = r13 - r5;
	r6 = r15;
	label$5eb80ee_13_27:
	r16 = 0;
	if( r16 >= r6 ) goto label$5eb80ee_13_43;
	r11 = h3d_Engine_selectBuffer(r0,r1);
	if( !r11 ) goto label$5eb80ee_13_43;
	r17 = r0->driver;
	if( r17 == NULL ) hl_null_access();
	r18 = r2->ibuf;
	r16 = 3;
	r15 = r5 * r16;
	((void (*)(h3d__impl__Driver,vvirtual*,int,int))r17->$type->vobj_proto[20])(r17,r18,r15,r6);
	r15 = r0->drawTriangles;
	r15 = r15 + r6;
	r0->drawTriangles = r15;
	r15 = r0->drawCalls;
	++r15;
	r0->drawCalls = r15;
	label$5eb80ee_13_43:
	return;
}

void h3d_Engine_renderMultiBuffers(h3d__Engine r0,h3d__BufferOffset r1,h3d__Indexes r2,int* r3,int* r4) {
	vvirtual *r15;
	bool r13;
	double r7, r9;
	h3d__impl__Driver r14;
	int r5, r6, r8, r11, r12;
	if( r3 ) goto label$5eb80ee_14_3;
	r5 = 0;
	goto label$5eb80ee_14_4;
	label$5eb80ee_14_3:
	r5 = *r3;
	label$5eb80ee_14_4:
	if( r4 ) goto label$5eb80ee_14_7;
	r6 = -1;
	goto label$5eb80ee_14_8;
	label$5eb80ee_14_7:
	r6 = *r4;
	label$5eb80ee_14_8:
	if( r2 == NULL ) hl_null_access();
	r8 = r2->count;
	r7 = (double)r8;
	r9 = 3.;
	r7 = r7 / r9;
	r8 = (int)r7;
	r12 = 0;
	if( r12 < r8 ) goto label$5eb80ee_14_17;
	return;
	label$5eb80ee_14_17:
	r13 = r0->needFlushTarget;
	if( !r13 ) goto label$5eb80ee_14_20;
	h3d_Engine_doFlushTarget(r0);
	label$5eb80ee_14_20:
	r14 = r0->driver;
	if( r14 == NULL ) hl_null_access();
	((void (*)(h3d__impl__Driver,h3d__BufferOffset))r14->$type->vobj_proto[19])(r14,r1);
	r13 = h3d_Indexes_isDisposed(r2);
	if( !r13 ) goto label$5eb80ee_14_26;
	return;
	label$5eb80ee_14_26:
	r12 = 0;
	if( r6 >= r12 ) goto label$5eb80ee_14_30;
	r11 = r8 - r5;
	r6 = r11;
	label$5eb80ee_14_30:
	r12 = 0;
	if( r12 >= r6 ) goto label$5eb80ee_14_44;
	r14 = r0->driver;
	if( r14 == NULL ) hl_null_access();
	r15 = r2->ibuf;
	r12 = 3;
	r11 = r5 * r12;
	((void (*)(h3d__impl__Driver,vvirtual*,int,int))r14->$type->vobj_proto[20])(r14,r15,r11,r6);
	r11 = r0->drawTriangles;
	r11 = r11 + r6;
	r0->drawTriangles = r11;
	r11 = r0->drawCalls;
	++r11;
	r0->drawCalls = r11;
	label$5eb80ee_14_44:
	return;
}

void h3d_Engine_renderInstanced(h3d__Engine r0,h3d__BufferOffset r1,h3d__Indexes r2,h3d__impl__InstanceBuffer r3) {
	vvirtual *r9;
	bool r5;
	h3d__impl__Driver r6;
	int r7, r8;
	r5 = r0->needFlushTarget;
	if( !r5 ) goto label$5eb80ee_15_3;
	h3d_Engine_doFlushTarget(r0);
	label$5eb80ee_15_3:
	r6 = r0->driver;
	if( r6 == NULL ) hl_null_access();
	((void (*)(h3d__impl__Driver,h3d__BufferOffset))r6->$type->vobj_proto[19])(r6,r1);
	if( r2 == NULL ) hl_null_access();
	r5 = h3d_Indexes_isDisposed(r2);
	if( !r5 ) goto label$5eb80ee_15_10;
	return;
	label$5eb80ee_15_10:
	if( r3 == NULL ) hl_null_access();
	r7 = r3->commandCount;
	r8 = 0;
	if( r8 >= r7 ) goto label$5eb80ee_15_25;
	r6 = r0->driver;
	if( r6 == NULL ) hl_null_access();
	r9 = r2->ibuf;
	((void (*)(h3d__impl__Driver,vvirtual*,h3d__impl__InstanceBuffer))r6->$type->vobj_proto[21])(r6,r9,r3);
	r7 = r0->drawTriangles;
	r8 = r3->triCount;
	r7 = r7 + r8;
	r0->drawTriangles = r7;
	r7 = r0->drawCalls;
	++r7;
	r0->drawCalls = r7;
	label$5eb80ee_15_25:
	return;
}

bool h3d_Engine_set_debug(h3d__Engine r0,bool r1) {
	bool r2;
	h3d__impl__Driver r4;
	r0->debug = r1;
	r4 = r0->driver;
	if( r4 == NULL ) hl_null_access();
	r2 = r0->debug;
	((void (*)(h3d__impl__Driver,bool))r4->$type->vobj_proto[30])(r4,r2);
	return r1;
}

void h3d_Engine_onCreate(h3d__Engine r0,bool r1) {
	hl__types__ArrayObj r12;
	venum *r16, *r17, *r18;
	hl_type *r14;
	bool r4;
	hxd__impl__Allocator r7;
	hxd__Window r6;
	h3d__impl__MemoryManager r8;
	h3d__$Engine r2;
	vclosure *r19;
	h3d__impl__Driver r9;
	varray *r13;
	h3d__mat__Texture r10;
	int r5, r11, r15;
	r2 = (h3d__$Engine)g$_h3d_Engine;
	r2->CURRENT = r0;
	r4 = r0->autoResize;
	if( !r4 ) goto label$5eb80ee_17_12;
	r6 = r0->window;
	if( r6 == NULL ) hl_null_access();
	r5 = hxd_Window_get_width(r6);
	r0->width = r5;
	r6 = r0->window;
	if( r6 == NULL ) hl_null_access();
	r5 = hxd_Window_get_height(r6);
	r0->height = r5;
	label$5eb80ee_17_12:
	if( !r1 ) goto label$5eb80ee_17_20;
	r7 = hxd_impl_Allocator_get();
	if( r7 == NULL ) hl_null_access();
	hxd_impl_Allocator_onContextLost(r7);
	r8 = r0->mem;
	if( r8 == NULL ) hl_null_access();
	h3d_impl_MemoryManager_onContextLost(r8);
	goto label$5eb80ee_17_40;
	label$5eb80ee_17_20:
	r8 = (h3d__impl__MemoryManager)hl_alloc_obj(&t$h3d_impl_MemoryManager);
	r9 = r0->driver;
	h3d_impl_MemoryManager_new(r8,r9);
	r0->mem = r8;
	r8 = r0->mem;
	if( r8 == NULL ) hl_null_access();
	h3d_impl_MemoryManager_init(r8);
	r10 = (h3d__mat__Texture)hl_alloc_obj(&t$h3d_mat_Texture);
	r5 = 0;
	r11 = 0;
	r14 = &t$h3d_mat_TextureFlags;
	r15 = 1;
	r13 = hl_alloc_array(r14,r15);
	r16 = (venum*)g$h3d_mat_TextureFlags_NoAlloc;
	r15 = 0;
	((venum**)(r13 + 1))[r15] = r16;
	r12 = hl_types_ArrayObj_alloc(r13);
	r17 = NULL;
	h3d_mat_Texture_new(r10,r5,r11,r12,r17);
	r0->nullTexture = r10;
	label$5eb80ee_17_40:
	r9 = r0->driver;
	if( r9 == NULL ) hl_null_access();
	r18 = (venum*)g$6181a89;
	r4 = ((bool (*)(h3d__impl__Driver,venum*))r9->$type->vobj_proto[0])(r9,r18);
	r0->hardware = r4;
	r4 = r0->debug;
	r4 = h3d_Engine_set_debug(r0,r4);
	r4 = r0->fullScreen;
	r4 = h3d_Engine_set_fullScreen(r0,r4);
	r5 = r0->width;
	r11 = r0->height;
	h3d_Engine_resize(r0,r5,r11);
	if( !r1 ) goto label$5eb80ee_17_57;
	r19 = r0->onContextLost;
	if( r19 == NULL ) hl_null_access();
	r19->hasValue ? ((void (*)(vdynamic*))r19->fun)((vdynamic*)r19->value) : ((void (*)(void))r19->fun)();
	goto label$5eb80ee_17_60;
	label$5eb80ee_17_57:
	r19 = r0->onReady;
	if( r19 == NULL ) hl_null_access();
	r19->hasValue ? ((void (*)(vdynamic*))r19->fun)((vdynamic*)r19->value) : ((void (*)(void))r19->fun)();
	label$5eb80ee_17_60:
	r4 = true;
	r0->ready = r4;
	return;
}

void h3d_Engine_onContextLost(h3d__Engine r0) {
	return;
}

void h3d_Engine_onReady(h3d__Engine r0) {
	return;
}

void h3d_Engine_onWindowResize(h3d__Engine r0) {
	bool r2;
	hxd__Window r5;
	vclosure *r8;
	h3d__impl__Driver r3;
	int r4, r6, r7;
	r2 = r0->autoResize;
	if( !r2 ) goto label$5eb80ee_20_20;
	r3 = r0->driver;
	if( r3 == NULL ) hl_null_access();
	r2 = ((bool (*)(h3d__impl__Driver))r3->$type->vobj_proto[3])(r3);
	if( r2 ) goto label$5eb80ee_20_20;
	r5 = r0->window;
	if( r5 == NULL ) hl_null_access();
	r4 = hxd_Window_get_width(r5);
	r5 = r0->window;
	if( r5 == NULL ) hl_null_access();
	r6 = hxd_Window_get_height(r5);
	r7 = r0->width;
	if( r4 != r7 ) goto label$5eb80ee_20_16;
	r7 = r0->height;
	if( r6 == r7 ) goto label$5eb80ee_20_17;
	label$5eb80ee_20_16:
	h3d_Engine_resize(r0,r4,r6);
	label$5eb80ee_20_17:
	r8 = r0->onResized;
	if( r8 == NULL ) hl_null_access();
	r8->hasValue ? ((void (*)(vdynamic*))r8->fun)((vdynamic*)r8->value) : ((void (*)(void))r8->fun)();
	label$5eb80ee_20_20:
	return;
}

bool h3d_Engine_set_fullScreen(h3d__Engine r0,bool r1) {
	venum *r4;
	bool r2;
	hxd__Window r6;
	h3d__impl__MemoryManager r3;
	int r5;
	r0->fullScreen = r1;
	r3 = r0->mem;
	if( !r3 ) goto label$5eb80ee_21_13;
	r4 = (venum*)g$hxd_SystemValue_IsWindowed;
	r2 = hxd_System_getValue(r4);
	if( !r2 ) goto label$5eb80ee_21_13;
	r6 = r0->window;
	if( r6 == NULL ) hl_null_access();
	if( !r1 ) goto label$5eb80ee_21_11;
	r5 = 2;
	goto label$5eb80ee_21_12;
	label$5eb80ee_21_11:
	r5 = 0;
	label$5eb80ee_21_12:
	r5 = hxd_Window_set_displayMode(r6,r5);
	label$5eb80ee_21_13:
	return r1;
}

void h3d_Engine_onResized(h3d__Engine r0) {
	return;
}

void h3d_Engine_resize(h3d__Engine r0,int r1,int r2) {
	bool r6;
	h3d__impl__Driver r7;
	int r4, r5;
	r5 = 32;
	if( r1 >= r5 ) goto label$5eb80ee_23_4;
	r4 = 32;
	r1 = r4;
	label$5eb80ee_23_4:
	r5 = 32;
	if( r2 >= r5 ) goto label$5eb80ee_23_8;
	r4 = 32;
	r2 = r4;
	label$5eb80ee_23_8:
	r0->width = r1;
	r0->height = r2;
	r7 = r0->driver;
	if( r7 == NULL ) hl_null_access();
	r6 = ((bool (*)(h3d__impl__Driver))r7->$type->vobj_proto[3])(r7);
	if( r6 ) goto label$5eb80ee_23_17;
	r7 = r0->driver;
	if( r7 == NULL ) hl_null_access();
	((void (*)(h3d__impl__Driver,int,int))r7->$type->vobj_proto[13])(r7,r1,r2);
	label$5eb80ee_23_17:
	return;
}

bool h3d_Engine_begin(h3d__Engine r0) {
	h3d___Engine__TargetTmp r5;
	bool r2;
	hxd__$Timer r8;
	double r10;
	vdynamic *r9, *r11, *r12;
	h3d__impl__Driver r3;
	h3d__mat__Texture r6, r7;
	int r4;
	r3 = r0->driver;
	if( r3 == NULL ) hl_null_access();
	r2 = ((bool (*)(h3d__impl__Driver))r3->$type->vobj_proto[3])(r3);
	if( !r2 ) goto label$5eb80ee_24_6;
	r2 = false;
	return r2;
	label$5eb80ee_24_6:
	r2 = true;
	r0->inRender = r2;
	r4 = 0;
	r0->drawTriangles = r4;
	r4 = 0;
	r0->shaderSwitches = r4;
	r4 = 0;
	r0->drawCalls = r4;
	r5 = NULL;
	r0->targetStack = r5;
	r6 = r0->currentTargetTex;
	r7 = NULL;
	if( r6 != r7 ) goto label$5eb80ee_24_21;
	r2 = false;
	goto label$5eb80ee_24_22;
	label$5eb80ee_24_21:
	r2 = true;
	label$5eb80ee_24_22:
	r0->needFlushTarget = r2;
	r3 = r0->driver;
	if( r3 == NULL ) hl_null_access();
	r8 = (hxd__$Timer)g$_hxd_Timer;
	r4 = r8->frameCount;
	((void (*)(h3d__impl__Driver,int))r3->$type->vobj_proto[4])(r3,r4);
	r9 = r0->backgroundColor;
	if( !r9 ) goto label$5eb80ee_24_37;
	r9 = r0->backgroundColor;
	r4 = 1;
	r10 = (double)r4;
	r11 = hl_alloc_dynamic(&t$_f64);
	r11->v.d = r10;
	r4 = 0;
	r12 = hl_alloc_dynamic(&t$_i32);
	r12->v.i = r4;
	h3d_Engine_clear(r0,r9,r11,r12);
	label$5eb80ee_24_37:
	r2 = true;
	return r2;
}

bool h3d_Engine_hasFeature(h3d__Engine r0,venum* r1) {
	bool r2;
	h3d__impl__Driver r3;
	r3 = r0->driver;
	if( r3 == NULL ) hl_null_access();
	r2 = ((bool (*)(h3d__impl__Driver,venum*))r3->$type->vobj_proto[0])(r3,r1);
	return r2;
}

void h3d_Engine_end(h3d__Engine r0) {
	bool r1;
	h3d__impl__Driver r3;
	r1 = false;
	r0->inRender = r1;
	r3 = r0->driver;
	if( r3 == NULL ) hl_null_access();
	((void (*)(h3d__impl__Driver))r3->$type->vobj_proto[29])(r3);
	return;
}

h3d__mat__Texture h3d_Engine_getCurrentTarget(h3d__Engine r0) {
	h3d___Engine__TargetTmp r1;
	hl__types__ArrayObj r5;
	vdynamic *r3;
	varray *r8;
	int r6, r7;
	h3d__mat__Texture r2, r4;
	r1 = r0->targetStack;
	if( r1 ) goto label$5eb80ee_27_4;
	r2 = NULL;
	return r2;
	label$5eb80ee_27_4:
	r1 = r0->targetStack;
	if( r1 == NULL ) hl_null_access();
	r2 = r1->_t;
	r4 = r0->nullTexture;
	if( r2 != r4 ) goto label$5eb80ee_27_22;
	r1 = r0->targetStack;
	if( r1 == NULL ) hl_null_access();
	r5 = r1->textures;
	if( r5 == NULL ) hl_null_access();
	r6 = 0;
	r7 = r5->length;
	if( ((unsigned)r6) < ((unsigned)r7) ) goto label$5eb80ee_27_18;
	r2 = NULL;
	goto label$5eb80ee_27_21;
	label$5eb80ee_27_18:
	r8 = r5->array;
	r3 = ((vdynamic**)(r8 + 1))[r6];
	r2 = (h3d__mat__Texture)r3;
	label$5eb80ee_27_21:
	return r2;
	label$5eb80ee_27_22:
	r1 = r0->targetStack;
	if( r1 == NULL ) hl_null_access();
	r2 = r1->_t;
	return r2;
}

void h3d_Engine_pushTarget(h3d__Engine r0,h3d__mat__Texture r1,int* r2,int* r3) {
	h3d___Engine__TargetTmp r6, r8, r9;
	int r4, r5;
	if( r2 ) goto label$5eb80ee_28_3;
	r4 = 0;
	goto label$5eb80ee_28_4;
	label$5eb80ee_28_3:
	r4 = *r2;
	label$5eb80ee_28_4:
	if( r3 ) goto label$5eb80ee_28_7;
	r5 = 0;
	goto label$5eb80ee_28_8;
	label$5eb80ee_28_7:
	r5 = *r3;
	label$5eb80ee_28_8:
	r6 = r0->targetTmp;
	if( r6 ) goto label$5eb80ee_28_15;
	r8 = (h3d___Engine__TargetTmp)hl_alloc_obj(&t$h3d__Engine_TargetTmp);
	r9 = r0->targetStack;
	h3d__Engine_TargetTmp_new(r8,r1,r9,r4,r5);
	r6 = r8;
	goto label$5eb80ee_28_23;
	label$5eb80ee_28_15:
	if( r6 == NULL ) hl_null_access();
	r8 = r6->next;
	r0->targetTmp = r8;
	r6->_t = r1;
	r9 = r0->targetStack;
	r6->next = r9;
	r6->mipLevel = r5;
	r6->layer = r4;
	label$5eb80ee_28_23:
	r0->targetStack = r6;
	h3d_Engine_updateNeedFlush(r0);
	return;
}

void h3d_Engine_updateNeedFlush(h3d__Engine r0) {
	h3d___Engine__TargetTmp r1;
	hl__types__ArrayObj r8;
	bool r3;
	int r6, r7;
	h3d__mat__Texture r4, r5;
	r1 = r0->targetStack;
	if( r1 ) goto label$5eb80ee_29_10;
	r4 = r0->currentTargetTex;
	r5 = NULL;
	if( r4 != r5 ) goto label$5eb80ee_29_7;
	r3 = false;
	goto label$5eb80ee_29_8;
	label$5eb80ee_29_7:
	r3 = true;
	label$5eb80ee_29_8:
	r0->needFlushTarget = r3;
	goto label$5eb80ee_29_26;
	label$5eb80ee_29_10:
	r4 = r0->currentTargetTex;
	if( r1 == NULL ) hl_null_access();
	r5 = r1->_t;
	if( r4 != r5 ) goto label$5eb80ee_29_24;
	r6 = r0->currentTargetLayer;
	r7 = r1->layer;
	if( r6 != r7 ) goto label$5eb80ee_29_24;
	r6 = r0->currentTargetMip;
	r7 = r1->mipLevel;
	if( r6 != r7 ) goto label$5eb80ee_29_24;
	r8 = r1->textures;
	if( r8 ) goto label$5eb80ee_29_24;
	r3 = false;
	goto label$5eb80ee_29_25;
	label$5eb80ee_29_24:
	r3 = true;
	label$5eb80ee_29_25:
	r0->needFlushTarget = r3;
	label$5eb80ee_29_26:
	return;
}

void h3d_Engine_pushTargets(h3d__Engine r0,hl__types__ArrayObj r1) {
	h3d___Engine__TargetTmp r6;
	bool r7;
	int *r4, *r5;
	h3d__mat__Texture r3;
	r3 = r0->nullTexture;
	r4 = NULL;
	r5 = NULL;
	h3d_Engine_pushTarget(r0,r3,r4,r5);
	r6 = r0->targetStack;
	if( r6 == NULL ) hl_null_access();
	r6->textures = r1;
	r7 = true;
	r0->needFlushTarget = r7;
	return;
}

void h3d_Engine_popTarget(h3d__Engine r0) {
	String r5;
	h3d___Engine__TargetTmp r1, r3, r8;
	hl__types__ArrayObj r7;
	vdynamic *r4;
	h3d__mat__Texture r6;
	r1 = r0->targetStack;
	if( r1 ) goto label$5eb80ee_31_5;
	r5 = (String)s$6e0e621;
	r4 = haxe_Exception_thrown(((vdynamic*)r5));
	hl_throw((vdynamic*)r4);
	label$5eb80ee_31_5:
	if( r1 == NULL ) hl_null_access();
	r3 = r1->next;
	r0->targetStack = r3;
	h3d_Engine_updateNeedFlush(r0);
	r6 = NULL;
	r1->_t = r6;
	r7 = NULL;
	r1->textures = r7;
	r8 = r0->targetTmp;
	r1->next = r8;
	r0->targetTmp = r1;
	return;
}

void h3d_Engine_flushTarget(h3d__Engine r0) {
	bool r2;
	r2 = r0->needFlushTarget;
	if( !r2 ) goto label$5eb80ee_32_3;
	h3d_Engine_doFlushTarget(r0);
	label$5eb80ee_32_3:
	return;
}

void h3d_Engine_doFlushTarget(h3d__Engine r0) {
	h3d___Engine__TargetTmp r1;
	hl__types__ArrayObj r7;
	bool r11;
	int *r5, *r6;
	h3d__impl__Driver r3;
	int r8, r9, r10;
	h3d__mat__Texture r4;
	r1 = r0->targetStack;
	if( r1 ) goto label$5eb80ee_33_11;
	r3 = r0->driver;
	if( r3 == NULL ) hl_null_access();
	r4 = NULL;
	r5 = NULL;
	r6 = NULL;
	((void (*)(h3d__impl__Driver,h3d__mat__Texture,int*,int*))r3->$type->vobj_proto[23])(r3,r4,r5,r6);
	r4 = NULL;
	r0->currentTargetTex = r4;
	goto label$5eb80ee_33_33;
	label$5eb80ee_33_11:
	if( r1 == NULL ) hl_null_access();
	r7 = r1->textures;
	if( !r7 ) goto label$5eb80ee_33_19;
	r3 = r0->driver;
	if( r3 == NULL ) hl_null_access();
	r7 = r1->textures;
	((void (*)(h3d__impl__Driver,hl__types__ArrayObj))r3->$type->vobj_proto[24])(r3,r7);
	goto label$5eb80ee_33_27;
	label$5eb80ee_33_19:
	r3 = r0->driver;
	if( r3 == NULL ) hl_null_access();
	r4 = r1->_t;
	r8 = r1->layer;
	r5 = &r8;
	r9 = r1->mipLevel;
	r6 = &r9;
	((void (*)(h3d__impl__Driver,h3d__mat__Texture,int*,int*))r3->$type->vobj_proto[23])(r3,r4,r5,r6);
	label$5eb80ee_33_27:
	r4 = r1->_t;
	r0->currentTargetTex = r4;
	r10 = r1->layer;
	r0->currentTargetLayer = r10;
	r10 = r1->mipLevel;
	r0->currentTargetMip = r10;
	label$5eb80ee_33_33:
	r11 = false;
	r0->needFlushTarget = r11;
	return;
}

void h3d_Engine_clearF(h3d__Engine r0,h3d__Vector r1,vdynamic* r2,vdynamic* r3) {
	bool r5;
	h3d__impl__Driver r6;
	r5 = r0->needFlushTarget;
	if( !r5 ) goto label$5eb80ee_34_3;
	h3d_Engine_doFlushTarget(r0);
	label$5eb80ee_34_3:
	r6 = r0->driver;
	if( r6 == NULL ) hl_null_access();
	((void (*)(h3d__impl__Driver,h3d__Vector,vdynamic*,vdynamic*))r6->$type->vobj_proto[8])(r6,r1,r2,r3);
	return;
}

void h3d_Engine_clear(h3d__Engine r0,vdynamic* r1,vdynamic* r2,vdynamic* r3) {
	bool r11;
	h3d__Vector r5;
	double r7, r10;
	h3d__impl__Driver r12;
	int r6, r8, r9;
	if( !r1 ) goto label$5eb80ee_35_32;
	r5 = r0->tmpVector;
	r6 = r1 ? r1->v.i : 0;
	if( r5 == NULL ) hl_null_access();
	r9 = 16;
	r8 = r6 >> r9;
	r9 = 255;
	r8 = r8 & r9;
	r7 = (double)r8;
	r10 = 255.;
	r7 = r7 / r10;
	r5->x = r7;
	r9 = 8;
	r8 = r6 >> r9;
	r9 = 255;
	r8 = r8 & r9;
	r7 = (double)r8;
	r10 = 255.;
	r7 = r7 / r10;
	r5->y = r7;
	r9 = 255;
	r8 = r6 & r9;
	r7 = (double)r8;
	r10 = 255.;
	r7 = r7 / r10;
	r5->z = r7;
	r9 = 24;
	r8 = ((unsigned)r6) >> r9;
	r7 = (double)r8;
	r10 = 255.;
	r7 = r7 / r10;
	r5->w = r7;
	label$5eb80ee_35_32:
	r11 = r0->needFlushTarget;
	if( !r11 ) goto label$5eb80ee_35_35;
	h3d_Engine_doFlushTarget(r0);
	label$5eb80ee_35_35:
	r12 = r0->driver;
	if( r12 == NULL ) hl_null_access();
	if( r1 ) goto label$5eb80ee_35_40;
	r5 = NULL;
	goto label$5eb80ee_35_41;
	label$5eb80ee_35_40:
	r5 = r0->tmpVector;
	label$5eb80ee_35_41:
	((void (*)(h3d__impl__Driver,h3d__Vector,vdynamic*,vdynamic*))r12->$type->vobj_proto[8])(r12,r5,r2,r3);
	return;
}

void h3d_Engine_setRenderZone(h3d__Engine r0,int* r1,int* r2,int* r3,int* r4) {
	bool r10;
	h3d__impl__Driver r11;
	int r5, r6, r7, r8;
	if( r1 ) goto label$5eb80ee_36_3;
	r5 = 0;
	goto label$5eb80ee_36_4;
	label$5eb80ee_36_3:
	r5 = *r1;
	label$5eb80ee_36_4:
	if( r2 ) goto label$5eb80ee_36_7;
	r6 = 0;
	goto label$5eb80ee_36_8;
	label$5eb80ee_36_7:
	r6 = *r2;
	label$5eb80ee_36_8:
	if( r3 ) goto label$5eb80ee_36_11;
	r7 = -1;
	goto label$5eb80ee_36_12;
	label$5eb80ee_36_11:
	r7 = *r3;
	label$5eb80ee_36_12:
	if( r4 ) goto label$5eb80ee_36_15;
	r8 = -1;
	goto label$5eb80ee_36_16;
	label$5eb80ee_36_15:
	r8 = *r4;
	label$5eb80ee_36_16:
	r10 = r0->needFlushTarget;
	if( !r10 ) goto label$5eb80ee_36_19;
	h3d_Engine_doFlushTarget(r0);
	label$5eb80ee_36_19:
	r11 = r0->driver;
	if( r11 == NULL ) hl_null_access();
	((void (*)(h3d__impl__Driver,int,int,int,int))r11->$type->vobj_proto[22])(r11,r5,r6,r7,r8);
	return;
}

bool h3d_Engine_render(h3d__Engine r0,vvirtual* r1) {
	bool r3;
	double r4, r5, r6, r7, r8;
	r3 = h3d_Engine_begin(r0);
	if( r3 ) goto label$5eb80ee_37_4;
	r3 = false;
	return r3;
	label$5eb80ee_37_4:
	if( r1 == NULL ) hl_null_access();
	if( hl_vfields(r1)[0] ) ((void (*)(vdynamic*,h3d__Engine))hl_vfields(r1)[0])(r1->value,r0); else {
		void *args[] = {r0};
		hl_dyn_call_obj(r1->value,&t$fun_d333c41,86600534/*render*/,args,NULL);
	}
	h3d_Engine_end(r0);
	r4 = hl_sys_time();
	r5 = r0->lastTime;
	r4 = r4 - r5;
	r5 = r0->lastTime;
	r5 = r5 + r4;
	r0->lastTime = r5;
	r6 = 0.;
	if( !(r6 < r4) ) goto label$5eb80ee_37_47;
	r5 = 1.;
	r5 = r5 / r4;
	r7 = r0->realFps;
	r8 = 2.;
	r7 = r7 * r8;
	if( !(r7 < r5) ) goto label$5eb80ee_37_26;
	r6 = r0->realFps;
	r7 = 2.;
	r6 = r6 * r7;
	r5 = r6;
	goto label$5eb80ee_37_34;
	label$5eb80ee_37_26:
	r7 = r0->realFps;
	r8 = 0.5;
	r7 = r7 * r8;
	if( !(r5 < r7) ) goto label$5eb80ee_37_34;
	r6 = r0->realFps;
	r7 = 0.5;
	r6 = r6 * r7;
	r5 = r6;
	label$5eb80ee_37_34:
	r7 = 0.5;
	r6 = r4 / r7;
	r8 = 0.2999999999999999889;
	if( !(r8 < r6) ) goto label$5eb80ee_37_40;
	r7 = 0.2999999999999999889;
	r6 = r7;
	label$5eb80ee_37_40:
	r7 = r0->realFps;
	r8 = 1.;
	r8 = r8 - r6;
	r7 = r7 * r8;
	r8 = r5 * r6;
	r7 = r7 + r8;
	r0->realFps = r7;
	label$5eb80ee_37_47:
	r3 = true;
	return r3;
}

void h3d_Engine_dispose(h3d__Engine r0) {
	hxd__Window r3;
	vclosure *r4;
	h3d__impl__Driver r2;
	r2 = r0->driver;
	if( r2 == NULL ) hl_null_access();
	h3d_impl_Driver_dispose(r2);
	r3 = r0->window;
	if( r3 == NULL ) hl_null_access();
	r4 = hl_alloc_closure_ptr(&t$fun_9e7b219,h3d_Engine_onWindowResize,r0);
	hxd_Window_removeResizeEvent(r3,r4);
	return;
}

double h3d_Engine_get_fps(h3d__Engine r0) {
	double r1, r3;
	int r2;
	r1 = r0->realFps;
	r3 = 100.;
	r1 = r1 * r3;
	r2 = hl_math_ceil(r1);
	r1 = (double)r2;
	r3 = 100.;
	r1 = r1 / r3;
	return r1;
}

void h3d_Engine_new(h3d__Engine r0) {
	haxe__ds__ObjectMap r2;
	venum *r14;
	bool r4;
	haxe__ds__IntMap r5;
	h3d__impl__GlDriver r17;
	hxd__Window r15;
	h3d__$Engine r13;
	h3d__Vector r6;
	double r16;
	vclosure *r1;
	int *r18;
	vdynamic *r12;
	double *r7, *r8, *r9, *r10;
	int r11;
	r1 = r0->onContextLost;
	if( r1 ) goto label$5eb80ee_40_4;
	r1 = hl_alloc_closure_ptr(&t$fun_9e7b219,h3d_Engine_onContextLost,r0);
	r0->onContextLost = r1;
	label$5eb80ee_40_4:
	r1 = r0->onReady;
	if( r1 ) goto label$5eb80ee_40_8;
	r1 = hl_alloc_closure_ptr(&t$fun_9e7b219,h3d_Engine_onReady,r0);
	r0->onReady = r1;
	label$5eb80ee_40_8:
	r1 = r0->onResized;
	if( r1 ) goto label$5eb80ee_40_12;
	r1 = hl_alloc_closure_ptr(&t$fun_9e7b219,h3d_Engine_onResized,r0);
	r0->onResized = r1;
	label$5eb80ee_40_12:
	r2 = (haxe__ds__ObjectMap)hl_alloc_obj(&t$haxe_ds_ObjectMap);
	haxe_ds_ObjectMap_new(r2);
	r0->resCache = r2;
	r4 = false;
	r0->ready = r4;
	r4 = false;
	r0->inRender = r4;
	r5 = (haxe__ds__IntMap)hl_alloc_obj(&t$haxe_ds_IntMap);
	haxe_ds_IntMap_new(r5);
	r0->textureColorCache = r5;
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r7 = NULL;
	r8 = NULL;
	r9 = NULL;
	r10 = NULL;
	h3d_Vector_new(r6,r7,r8,r9,r10);
	r0->tmpVector = r6;
	r11 = -16777216;
	r12 = hl_alloc_dynamic(&t$_i32);
	r12->v.i = r11;
	r0->backgroundColor = r12;
	r13 = (h3d__$Engine)g$_h3d_Engine;
	r4 = r13->SOFTWARE_DRIVER;
	r4 = !r4;
	r0->hardware = r4;
	r13 = (h3d__$Engine)g$_h3d_Engine;
	r11 = r13->ANTIALIASING;
	r0->antiAlias = r11;
	r4 = true;
	r0->autoResize = r4;
	r14 = (venum*)g$hxd_SystemValue_IsWindowed;
	r4 = hxd_System_getValue(r14);
	r4 = !r4;
	r4 = h3d_Engine_set_fullScreen(r0,r4);
	r15 = hxd_Window_getInstance();
	r0->window = r15;
	r16 = hxd_System_getDefaultFrameRate();
	r0->realFps = r16;
	r16 = hl_sys_time();
	r0->lastTime = r16;
	r15 = r0->window;
	if( r15 == NULL ) hl_null_access();
	r1 = hl_alloc_closure_ptr(&t$fun_9e7b219,h3d_Engine_onWindowResize,r0);
	hxd_Window_addResizeEvent(r15,r1);
	r17 = (h3d__impl__GlDriver)hl_alloc_obj(&t$h3d_impl_GlDriver);
	r11 = r0->antiAlias;
	r18 = &r11;
	h3d_impl_GlDriver_new(r17,r18);
	r0->driver = ((h3d__impl__Driver)r17);
	r13 = (h3d__$Engine)g$_h3d_Engine;
	r13->CURRENT = r0;
	return;
}


﻿// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <h3d/scene/Interactive.h>
h3d__scene__Scene h3d_scene_Object_getScene(h3d__scene__Object);
void h3d_scene_Scene_addEventTarget(h3d__scene__Scene,h3d__scene__Interactive);
void h3d_scene_Object_onAdd(h3d__scene__Object);
void h3d_scene_Scene_removeEventTarget(h3d__scene__Scene,h3d__scene__Interactive);
void h3d_scene_Object_onRemove(h3d__scene__Object);
extern hl_type t$vrt_0779518;
#include <hxd/EventKind.h>
extern hl_type t$vrt_ec71c80;
void hxd_SceneEvents_updateCursor(hxd__SceneEvents,vvirtual*);
void hxd_SceneEvents_focus(hxd__SceneEvents,vvirtual*);
bool h3d_scene_Interactive_hasFocus(h3d__scene__Interactive);
void hxd_SceneEvents_blur(hxd__SceneEvents);
int hl_types_ArrayObj_indexOf(hl__types__ArrayObj,vdynamic*,vdynamic*);
extern hl_type t$fun_620dba2;
extern hl_type t$h3d_Vector;
void h3d_Vector_new(h3d__Vector,double*,double*,double*,double*);
void h3d_scene_Object_new(h3d__scene__Object,h3d__scene__Object);
extern venum* g$hxd_Cursor_Button;

void h3d_scene_Interactive_onAdd(h3d__scene__Interactive r0) {
	h3d__scene__Scene r1;
	r1 = h3d_scene_Object_getScene(((h3d__scene__Object)r0));
	r0->scene = r1;
	r1 = r0->scene;
	if( !r1 ) goto label$a10b22e_1_7;
	r1 = r0->scene;
	if( r1 == NULL ) hl_null_access();
	h3d_scene_Scene_addEventTarget(r1,r0);
	label$a10b22e_1_7:
	h3d_scene_Object_onAdd(((h3d__scene__Object)r0));
	return;
}

void h3d_scene_Interactive_onRemove(h3d__scene__Interactive r0) {
	h3d__scene__Scene r2;
	r2 = r0->scene;
	if( !r2 ) goto label$a10b22e_2_7;
	r2 = r0->scene;
	if( r2 == NULL ) hl_null_access();
	h3d_scene_Scene_removeEventTarget(r2,r0);
	r2 = NULL;
	r0->scene = r2;
	label$a10b22e_2_7:
	h3d_scene_Object_onRemove(((h3d__scene__Object)r0));
	return;
}

void h3d_scene_Interactive_preventClick(h3d__scene__Interactive r0) {
	int r1;
	r1 = -1;
	r0->mouseDownButton = r1;
	return;
}

vvirtual* h3d_scene_Interactive_getInteractiveScene(h3d__scene__Interactive r0) {
	vvirtual *r2;
	h3d__scene__Scene r1;
	r1 = r0->scene;
	if( r1 ) goto label$a10b22e_4_4;
	r2 = NULL;
	goto label$a10b22e_4_8;
	label$a10b22e_4_4:
	r2 = r1->f$29;
	if( r2 ) goto label$a10b22e_4_8;
	r2 = hl_to_virtual(&t$vrt_0779518,(vdynamic*)r1);
	r1->f$29 = r2;
	label$a10b22e_4_8:
	return r2;
}

void h3d_scene_Interactive_handleEvent(h3d__scene__Interactive r0,hxd__Event r1) {
	venum *r5;
	bool r3;
	vclosure *r7;
	int r4, r6;
	r3 = r0->propagateEvents;
	if( !r3 ) goto label$a10b22e_5_5;
	if( r1 == NULL ) hl_null_access();
	r3 = true;
	r1->propagate = r3;
	label$a10b22e_5_5:
	r3 = r0->cancelEvents;
	if( !r3 ) goto label$a10b22e_5_10;
	if( r1 == NULL ) hl_null_access();
	r3 = true;
	r1->cancel = r3;
	label$a10b22e_5_10:
	if( r1 == NULL ) hl_null_access();
	r5 = r1->kind;
	if( r5 == NULL ) hl_null_access();
	r4 = HL__ENUM_INDEX__(r5);
	switch(r4) {
		default:
			goto label$a10b22e_5_104;
		case 0:
			r3 = r0->enableRightButton;
			if( r3 ) goto label$a10b22e_5_21;
			r4 = r1->button;
			r6 = 0;
			if( r4 != r6 ) goto label$a10b22e_5_30;
			label$a10b22e_5_21:
			r4 = r1->button;
			r0->mouseDownButton = r4;
			r7 = r0->onPush;
			if( r7 == NULL ) hl_null_access();
			r7->hasValue ? ((void (*)(vdynamic*,hxd__Event))r7->fun)((vdynamic*)r7->value,r1) : ((void (*)(hxd__Event))r7->fun)(r1);
			r3 = r1->cancel;
			if( !r3 ) goto label$a10b22e_5_30;
			r4 = -1;
			r0->mouseDownButton = r4;
			label$a10b22e_5_30:
			goto label$a10b22e_5_104;
		case 1:
			r3 = r0->enableRightButton;
			if( r3 ) goto label$a10b22e_5_36;
			r4 = r1->button;
			r6 = 0;
			if( r4 != r6 ) goto label$a10b22e_5_45;
			label$a10b22e_5_36:
			r7 = r0->onRelease;
			if( r7 == NULL ) hl_null_access();
			r7->hasValue ? ((void (*)(vdynamic*,hxd__Event))r7->fun)((vdynamic*)r7->value,r1) : ((void (*)(hxd__Event))r7->fun)(r1);
			r4 = r0->mouseDownButton;
			r6 = r1->button;
			if( r4 != r6 ) goto label$a10b22e_5_45;
			r7 = r0->onClick;
			if( r7 == NULL ) hl_null_access();
			r7->hasValue ? ((void (*)(vdynamic*,hxd__Event))r7->fun)((vdynamic*)r7->value,r1) : ((void (*)(hxd__Event))r7->fun)(r1);
			label$a10b22e_5_45:
			r4 = -1;
			r0->mouseDownButton = r4;
			goto label$a10b22e_5_104;
		case 2:
			r7 = r0->onMove;
			if( r7 == NULL ) hl_null_access();
			r7->hasValue ? ((void (*)(vdynamic*,hxd__Event))r7->fun)((vdynamic*)r7->value,r1) : ((void (*)(hxd__Event))r7->fun)(r1);
			goto label$a10b22e_5_104;
		case 3:
			r7 = r0->onOver;
			if( r7 == NULL ) hl_null_access();
			r7->hasValue ? ((void (*)(vdynamic*,hxd__Event))r7->fun)((vdynamic*)r7->value,r1) : ((void (*)(hxd__Event))r7->fun)(r1);
			goto label$a10b22e_5_104;
		case 4:
			r7 = r0->onOut;
			if( r7 == NULL ) hl_null_access();
			r7->hasValue ? ((void (*)(vdynamic*,hxd__Event))r7->fun)((vdynamic*)r7->value,r1) : ((void (*)(hxd__Event))r7->fun)(r1);
			goto label$a10b22e_5_104;
		case 5:
			r7 = r0->onWheel;
			if( r7 == NULL ) hl_null_access();
			r7->hasValue ? ((void (*)(vdynamic*,hxd__Event))r7->fun)((vdynamic*)r7->value,r1) : ((void (*)(hxd__Event))r7->fun)(r1);
			goto label$a10b22e_5_104;
		case 6:
			r7 = r0->onFocus;
			if( r7 == NULL ) hl_null_access();
			r7->hasValue ? ((void (*)(vdynamic*,hxd__Event))r7->fun)((vdynamic*)r7->value,r1) : ((void (*)(hxd__Event))r7->fun)(r1);
			goto label$a10b22e_5_104;
		case 7:
			r7 = r0->onFocusLost;
			if( r7 == NULL ) hl_null_access();
			r7->hasValue ? ((void (*)(vdynamic*,hxd__Event))r7->fun)((vdynamic*)r7->value,r1) : ((void (*)(hxd__Event))r7->fun)(r1);
			goto label$a10b22e_5_104;
		case 8:
			r7 = r0->onKeyDown;
			if( r7 == NULL ) hl_null_access();
			r7->hasValue ? ((void (*)(vdynamic*,hxd__Event))r7->fun)((vdynamic*)r7->value,r1) : ((void (*)(hxd__Event))r7->fun)(r1);
			goto label$a10b22e_5_104;
		case 9:
			r7 = r0->onKeyUp;
			if( r7 == NULL ) hl_null_access();
			r7->hasValue ? ((void (*)(vdynamic*,hxd__Event))r7->fun)((vdynamic*)r7->value,r1) : ((void (*)(hxd__Event))r7->fun)(r1);
			goto label$a10b22e_5_104;
		case 10:
			r3 = r0->enableRightButton;
			if( r3 ) goto label$a10b22e_5_85;
			r4 = r1->button;
			r6 = 0;
			if( r4 != r6 ) goto label$a10b22e_5_94;
			label$a10b22e_5_85:
			r7 = r0->onRelease;
			if( r7 == NULL ) hl_null_access();
			r7->hasValue ? ((void (*)(vdynamic*,hxd__Event))r7->fun)((vdynamic*)r7->value,r1) : ((void (*)(hxd__Event))r7->fun)(r1);
			r4 = r0->mouseDownButton;
			r6 = r1->button;
			if( r4 != r6 ) goto label$a10b22e_5_94;
			r7 = r0->onReleaseOutside;
			if( r7 == NULL ) hl_null_access();
			r7->hasValue ? ((void (*)(vdynamic*,hxd__Event))r7->fun)((vdynamic*)r7->value,r1) : ((void (*)(hxd__Event))r7->fun)(r1);
			label$a10b22e_5_94:
			r4 = -1;
			r0->mouseDownButton = r4;
			goto label$a10b22e_5_104;
		case 11:
			r7 = r0->onTextInput;
			if( r7 == NULL ) hl_null_access();
			r7->hasValue ? ((void (*)(vdynamic*,hxd__Event))r7->fun)((vdynamic*)r7->value,r1) : ((void (*)(hxd__Event))r7->fun)(r1);
			goto label$a10b22e_5_104;
		case 12:
			r7 = r0->onCheck;
			if( r7 == NULL ) hl_null_access();
			r7->hasValue ? ((void (*)(vdynamic*,hxd__Event))r7->fun)((vdynamic*)r7->value,r1) : ((void (*)(hxd__Event))r7->fun)(r1);
	}
	label$a10b22e_5_104:
	return;
}

venum* h3d_scene_Interactive_set_cursor(h3d__scene__Interactive r0,venum* r1) {
	vvirtual *r5;
	h3d__scene__Scene r3;
	hxd__SceneEvents r4;
	r0->cursor = r1;
	r3 = r0->scene;
	if( !r3 ) goto label$a10b22e_6_16;
	r3 = r0->scene;
	if( r3 == NULL ) hl_null_access();
	r4 = r3->events;
	if( !r4 ) goto label$a10b22e_6_16;
	r3 = r0->scene;
	if( r3 == NULL ) hl_null_access();
	r4 = r3->events;
	if( r4 == NULL ) hl_null_access();
	r5 = r0->f$44;
	if( r5 ) goto label$a10b22e_6_15;
	r5 = hl_to_virtual(&t$vrt_ec71c80,(vdynamic*)r0);
	r0->f$44 = r5;
	label$a10b22e_6_15:
	hxd_SceneEvents_updateCursor(r4,r5);
	label$a10b22e_6_16:
	return r1;
}

void h3d_scene_Interactive_focus(h3d__scene__Interactive r0) {
	vvirtual *r4;
	h3d__scene__Scene r2;
	hxd__SceneEvents r3;
	r2 = r0->scene;
	if( !r2 ) goto label$a10b22e_7_6;
	r2 = r0->scene;
	if( r2 == NULL ) hl_null_access();
	r3 = r2->events;
	if( r3 ) goto label$a10b22e_7_7;
	label$a10b22e_7_6:
	return;
	label$a10b22e_7_7:
	r2 = r0->scene;
	if( r2 == NULL ) hl_null_access();
	r3 = r2->events;
	if( r3 == NULL ) hl_null_access();
	r4 = r0->f$44;
	if( r4 ) goto label$a10b22e_7_15;
	r4 = hl_to_virtual(&t$vrt_ec71c80,(vdynamic*)r0);
	r0->f$44 = r4;
	label$a10b22e_7_15:
	hxd_SceneEvents_focus(r3,r4);
	return;
}

void h3d_scene_Interactive_blur(h3d__scene__Interactive r0) {
	bool r2;
	h3d__scene__Scene r4;
	hxd__SceneEvents r3;
	r2 = h3d_scene_Interactive_hasFocus(r0);
	if( !r2 ) goto label$a10b22e_8_7;
	r4 = r0->scene;
	if( r4 == NULL ) hl_null_access();
	r3 = r4->events;
	if( r3 == NULL ) hl_null_access();
	hxd_SceneEvents_blur(r3);
	label$a10b22e_8_7:
	return;
}

bool h3d_scene_Interactive_isOver(h3d__scene__Interactive r0) {
	hl__types__ArrayObj r5;
	bool r3;
	h3d__scene__Scene r1;
	hxd__SceneEvents r2;
	vdynamic *r6;
	int r4, r7;
	r1 = r0->scene;
	if( !r1 ) goto label$a10b22e_9_20;
	r1 = r0->scene;
	if( r1 == NULL ) hl_null_access();
	r2 = r1->events;
	if( !r2 ) goto label$a10b22e_9_20;
	r1 = r0->scene;
	if( r1 == NULL ) hl_null_access();
	r2 = r1->events;
	if( r2 == NULL ) hl_null_access();
	r5 = r2->overList;
	if( r5 == NULL ) hl_null_access();
	r6 = NULL;
	r4 = hl_types_ArrayObj_indexOf(r5,((vdynamic*)r0),r6);
	r7 = -1;
	if( r4 != r7 ) goto label$a10b22e_9_18;
	r3 = false;
	goto label$a10b22e_9_19;
	label$a10b22e_9_18:
	r3 = true;
	label$a10b22e_9_19:
	return r3;
	label$a10b22e_9_20:
	r3 = false;
	return r3;
}

bool h3d_scene_Interactive_hasFocus(h3d__scene__Interactive r0) {
	vvirtual *r4;
	bool r3;
	h3d__scene__Scene r1;
	hxd__SceneEvents r2;
	r1 = r0->scene;
	if( !r1 ) goto label$a10b22e_10_16;
	r1 = r0->scene;
	if( r1 == NULL ) hl_null_access();
	r2 = r1->events;
	if( !r2 ) goto label$a10b22e_10_16;
	r1 = r0->scene;
	if( r1 == NULL ) hl_null_access();
	r2 = r1->events;
	if( r2 == NULL ) hl_null_access();
	r4 = r2->currentFocus;
	if( r4 ? (r0 && r4->value == (vdynamic*)r0) : (r0 == NULL) ) goto label$a10b22e_10_14;
	r3 = false;
	goto label$a10b22e_10_15;
	label$a10b22e_10_14:
	r3 = true;
	label$a10b22e_10_15:
	return r3;
	label$a10b22e_10_16:
	r3 = false;
	return r3;
}

void h3d_scene_Interactive_onOver(h3d__scene__Interactive r0,hxd__Event r1) {
	return;
}

void h3d_scene_Interactive_onOut(h3d__scene__Interactive r0,hxd__Event r1) {
	return;
}

void h3d_scene_Interactive_onPush(h3d__scene__Interactive r0,hxd__Event r1) {
	return;
}

void h3d_scene_Interactive_onRelease(h3d__scene__Interactive r0,hxd__Event r1) {
	return;
}

void h3d_scene_Interactive_onReleaseOutside(h3d__scene__Interactive r0,hxd__Event r1) {
	return;
}

void h3d_scene_Interactive_onClick(h3d__scene__Interactive r0,hxd__Event r1) {
	return;
}

void h3d_scene_Interactive_onMove(h3d__scene__Interactive r0,hxd__Event r1) {
	return;
}

void h3d_scene_Interactive_onWheel(h3d__scene__Interactive r0,hxd__Event r1) {
	return;
}

void h3d_scene_Interactive_onFocus(h3d__scene__Interactive r0,hxd__Event r1) {
	return;
}

void h3d_scene_Interactive_onFocusLost(h3d__scene__Interactive r0,hxd__Event r1) {
	return;
}

void h3d_scene_Interactive_onKeyUp(h3d__scene__Interactive r0,hxd__Event r1) {
	return;
}

void h3d_scene_Interactive_onKeyDown(h3d__scene__Interactive r0,hxd__Event r1) {
	return;
}

void h3d_scene_Interactive_onCheck(h3d__scene__Interactive r0,hxd__Event r1) {
	return;
}

void h3d_scene_Interactive_onTextInput(h3d__scene__Interactive r0,hxd__Event r1) {
	return;
}

void h3d_scene_Interactive_new(h3d__scene__Interactive r0,vvirtual* r1,h3d__scene__Object r2) {
	venum *r12;
	bool r11;
	h3d__Vector r4;
	vclosure *r3;
	double *r5, *r6, *r7, *r8;
	int r10;
	r3 = r0->onOver;
	if( r3 ) goto label$a10b22e_25_4;
	r3 = hl_alloc_closure_ptr(&t$fun_620dba2,h3d_scene_Interactive_onOver,r0);
	r0->onOver = r3;
	label$a10b22e_25_4:
	r3 = r0->onOut;
	if( r3 ) goto label$a10b22e_25_8;
	r3 = hl_alloc_closure_ptr(&t$fun_620dba2,h3d_scene_Interactive_onOut,r0);
	r0->onOut = r3;
	label$a10b22e_25_8:
	r3 = r0->onPush;
	if( r3 ) goto label$a10b22e_25_12;
	r3 = hl_alloc_closure_ptr(&t$fun_620dba2,h3d_scene_Interactive_onPush,r0);
	r0->onPush = r3;
	label$a10b22e_25_12:
	r3 = r0->onRelease;
	if( r3 ) goto label$a10b22e_25_16;
	r3 = hl_alloc_closure_ptr(&t$fun_620dba2,h3d_scene_Interactive_onRelease,r0);
	r0->onRelease = r3;
	label$a10b22e_25_16:
	r3 = r0->onReleaseOutside;
	if( r3 ) goto label$a10b22e_25_20;
	r3 = hl_alloc_closure_ptr(&t$fun_620dba2,h3d_scene_Interactive_onReleaseOutside,r0);
	r0->onReleaseOutside = r3;
	label$a10b22e_25_20:
	r3 = r0->onClick;
	if( r3 ) goto label$a10b22e_25_24;
	r3 = hl_alloc_closure_ptr(&t$fun_620dba2,h3d_scene_Interactive_onClick,r0);
	r0->onClick = r3;
	label$a10b22e_25_24:
	r3 = r0->onMove;
	if( r3 ) goto label$a10b22e_25_28;
	r3 = hl_alloc_closure_ptr(&t$fun_620dba2,h3d_scene_Interactive_onMove,r0);
	r0->onMove = r3;
	label$a10b22e_25_28:
	r3 = r0->onWheel;
	if( r3 ) goto label$a10b22e_25_32;
	r3 = hl_alloc_closure_ptr(&t$fun_620dba2,h3d_scene_Interactive_onWheel,r0);
	r0->onWheel = r3;
	label$a10b22e_25_32:
	r3 = r0->onFocus;
	if( r3 ) goto label$a10b22e_25_36;
	r3 = hl_alloc_closure_ptr(&t$fun_620dba2,h3d_scene_Interactive_onFocus,r0);
	r0->onFocus = r3;
	label$a10b22e_25_36:
	r3 = r0->onFocusLost;
	if( r3 ) goto label$a10b22e_25_40;
	r3 = hl_alloc_closure_ptr(&t$fun_620dba2,h3d_scene_Interactive_onFocusLost,r0);
	r0->onFocusLost = r3;
	label$a10b22e_25_40:
	r3 = r0->onKeyUp;
	if( r3 ) goto label$a10b22e_25_44;
	r3 = hl_alloc_closure_ptr(&t$fun_620dba2,h3d_scene_Interactive_onKeyUp,r0);
	r0->onKeyUp = r3;
	label$a10b22e_25_44:
	r3 = r0->onKeyDown;
	if( r3 ) goto label$a10b22e_25_48;
	r3 = hl_alloc_closure_ptr(&t$fun_620dba2,h3d_scene_Interactive_onKeyDown,r0);
	r0->onKeyDown = r3;
	label$a10b22e_25_48:
	r3 = r0->onCheck;
	if( r3 ) goto label$a10b22e_25_52;
	r3 = hl_alloc_closure_ptr(&t$fun_620dba2,h3d_scene_Interactive_onCheck,r0);
	r0->onCheck = r3;
	label$a10b22e_25_52:
	r3 = r0->onTextInput;
	if( r3 ) goto label$a10b22e_25_56;
	r3 = hl_alloc_closure_ptr(&t$fun_620dba2,h3d_scene_Interactive_onTextInput,r0);
	r0->onTextInput = r3;
	label$a10b22e_25_56:
	r4 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r5 = NULL;
	r6 = NULL;
	r7 = NULL;
	r8 = NULL;
	h3d_Vector_new(r4,r5,r6,r7,r8);
	r0->hitPoint = r4;
	r10 = -1;
	r0->mouseDownButton = r10;
	r11 = false;
	r0->propagateEvents = r11;
	r11 = false;
	r0->cancelEvents = r11;
	h3d_scene_Object_new(((h3d__scene__Object)r0),r2);
	r0->shape = r1;
	r12 = (venum*)g$hxd_Cursor_Button;
	r12 = h3d_scene_Interactive_set_cursor(r0,r12);
	return;
}

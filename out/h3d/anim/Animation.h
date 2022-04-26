﻿// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_h3d__anim__Animation
#define INC_h3d__anim__Animation
typedef struct _h3d__anim__$Animation *h3d__anim__$Animation;
typedef struct _h3d__anim__Animation *h3d__anim__Animation;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/types/ArrayObj.h>


struct _h3d__anim__$Animation {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	double EPSILON;
};
struct _h3d__anim__Animation {
	hl_type *$type;
	String name;
	String resourcePath;
	int frameCount;
	double sampling;
	double frame;
	double speed;
	vclosure* onAnimEnd;
	vclosure* onEvent;
	bool pause;
	bool loop;
	hl__types__ArrayObj events;
	bool isInstance;
	hl__types__ArrayObj objects;
	bool isSync;
	int lastEvent;
	vvirtual* f$15;
};
#endif


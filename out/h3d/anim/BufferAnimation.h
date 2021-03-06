// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_h3d__anim__BufferAnimation
#define INC_h3d__anim__BufferAnimation
typedef struct _h3d__anim__$BufferAnimation *h3d__anim__$BufferAnimation;
typedef struct _h3d__anim__BufferAnimation *h3d__anim__BufferAnimation;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <h3d/anim/Animation.h>
#include <hl/types/ArrayObj.h>


struct _h3d__anim__$BufferAnimation {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _h3d__anim__BufferAnimation {
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
	double syncFrame;
	vbyte* data;
	int stride;
};
#endif


﻿// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_haxe__Timer
#define INC_haxe__Timer
typedef struct _haxe__$Timer *haxe__$Timer;
typedef struct _haxe__Timer *haxe__Timer;
#include <haxe/Timer.h>
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <sys/thread/_Thread/HaxeThread.h>
#include <sys/thread/_EventLoop/RegularEvent.h>


typedef struct {
	HL__ENUM_CONSTRUCT__
	vclosure* p0;
	haxe__Timer p1;
} Enumt$ctx_fec7ba4;
struct _haxe__$Timer {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	vclosure* delay;
};
struct _haxe__Timer {
	hl_type *$type;
	sys__thread___Thread__HaxeThread thread;
	sys__thread___EventLoop__RegularEvent eventHandler;
	vclosure* run;
};
#endif


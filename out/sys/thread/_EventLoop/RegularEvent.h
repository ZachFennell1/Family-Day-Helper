﻿// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_sys__thread___EventLoop__RegularEvent
#define INC_sys__thread___EventLoop__RegularEvent
typedef struct _sys__thread___EventLoop__$RegularEvent *sys__thread___EventLoop__$RegularEvent;
typedef struct _sys__thread___EventLoop__RegularEvent *sys__thread___EventLoop__RegularEvent;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>


struct _sys__thread___EventLoop__$RegularEvent {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _sys__thread___EventLoop__RegularEvent {
	hl_type *$type;
	double nextRunTime;
	double interval;
	vclosure* run;
	sys__thread___EventLoop__RegularEvent next;
	sys__thread___EventLoop__RegularEvent previous;
};
#endif


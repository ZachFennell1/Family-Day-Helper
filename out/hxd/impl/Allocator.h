﻿// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_hxd__impl__Allocator
#define INC_hxd__impl__Allocator
typedef struct _hxd__impl__$Allocator *hxd__impl__$Allocator;
typedef struct _hxd__impl__Allocator *hxd__impl__Allocator;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>


struct _hxd__impl__$Allocator {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	hxd__impl__Allocator inst;
	vclosure* set;
	vclosure* get;
};
struct _hxd__impl__Allocator {
	hl_type *$type;
};
#endif


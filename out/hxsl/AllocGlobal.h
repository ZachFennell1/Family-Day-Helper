﻿// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_hxsl__AllocGlobal
#define INC_hxsl__AllocGlobal
typedef struct _hxsl__$AllocGlobal *hxsl__$AllocGlobal;
typedef struct _hxsl__AllocGlobal *hxsl__AllocGlobal;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hxsl/Type.h>


struct _hxsl__$AllocGlobal {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _hxsl__AllocGlobal {
	hl_type *$type;
	int pos;
	int gid;
	String path;
	venum* type;
	hxsl__AllocGlobal next;
};
#endif


﻿// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_hxsl__AllocParam
#define INC_hxsl__AllocParam
typedef struct _hxsl__$AllocParam *hxsl__$AllocParam;
typedef struct _hxsl__AllocParam *hxsl__AllocParam;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hxsl/Type.h>
#include <hxsl/AllocGlobal.h>


struct _hxsl__$AllocParam {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _hxsl__AllocParam {
	hl_type *$type;
	String name;
	int pos;
	int instance;
	int index;
	venum* type;
	hxsl__AllocGlobal perObjectGlobal;
	hxsl__AllocParam next;
};
#endif


﻿// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_hxsl__Error
#define INC_hxsl__Error
typedef struct _hxsl__$Error *hxsl__$Error;
typedef struct _hxsl__Error *hxsl__Error;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>


struct _hxsl__$Error {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	vclosure* _t;
};
struct _hxsl__Error {
	hl_type *$type;
	String msg;
	vvirtual* pos;
};
#endif


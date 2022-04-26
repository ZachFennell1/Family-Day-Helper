﻿// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_hxd__earcut__Earcut
#define INC_hxd__earcut__Earcut
typedef struct _hxd__earcut__$Earcut *hxd__earcut__$Earcut;
typedef struct _hxd__earcut__Earcut *hxd__earcut__Earcut;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/types/ArrayBytes_Int.h>
#include <hxd/earcut/EarNode.h>


struct _hxd__earcut__$Earcut {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _hxd__earcut__Earcut {
	hl_type *$type;
	hl__types__ArrayBytes_Int triangles;
	hxd__earcut__EarNode cache;
	hxd__earcut__EarNode allocated;
	double minX;
	double minY;
	double size;
	bool hasSize;
};
#endif


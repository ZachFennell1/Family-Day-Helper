﻿// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_h2d__TileLayerContent
#define INC_h2d__TileLayerContent
typedef struct _h2d__$TileLayerContent *h2d__$TileLayerContent;
typedef struct _h2d__TileLayerContent *h2d__TileLayerContent;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <h3d/prim/Primitive.h>
#include <h3d/Buffer.h>
#include <h3d/Indexes.h>
#include <hl/types/ArrayBytes_hl_F32.h>
#include <h2d/impl/BatchDrawState.h>


struct _h2d__$TileLayerContent {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _h2d__TileLayerContent {
	hl_type *$type;
	h3d__Buffer buffer;
	h3d__Indexes indexes;
	int refCount;
	vvirtual* f$3;
	hl__types__ArrayBytes_hl_F32 tmp;
	double xMin;
	double yMin;
	double xMax;
	double yMax;
	bool useAllocator;
	h2d__impl__BatchDrawState state;
};
#endif


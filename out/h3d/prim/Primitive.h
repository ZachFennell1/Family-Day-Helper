// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_h3d__prim__Primitive
#define INC_h3d__prim__Primitive
typedef struct _h3d__prim__$Primitive *h3d__prim__$Primitive;
typedef struct _h3d__prim__Primitive *h3d__prim__Primitive;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <h3d/Buffer.h>
#include <h3d/Indexes.h>


struct _h3d__prim__$Primitive {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _h3d__prim__Primitive {
	hl_type *$type;
	h3d__Buffer buffer;
	h3d__Indexes indexes;
	int refCount;
	vvirtual* f$3;
};
#endif


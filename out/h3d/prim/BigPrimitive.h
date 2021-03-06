// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_h3d__prim__BigPrimitive
#define INC_h3d__prim__BigPrimitive
typedef struct _h3d__prim__$BigPrimitive *h3d__prim__$BigPrimitive;
typedef struct _h3d__prim__BigPrimitive *h3d__prim__BigPrimitive;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/types/ArrayBytes_hl_F32.h>
#include <hl/types/ArrayBytes_hl_UI16.h>
#include <h3d/prim/Primitive.h>
#include <h3d/Buffer.h>
#include <h3d/Indexes.h>
#include <hl/types/ArrayObj.h>
#include <h3d/col/Bounds.h>


struct _h3d__prim__$BigPrimitive {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	hl__types__ArrayBytes_hl_F32 PREV_BUFFER;
	hl__types__ArrayBytes_hl_UI16 PREV_INDEX;
};
struct _h3d__prim__BigPrimitive {
	hl_type *$type;
	h3d__Buffer buffer;
	h3d__Indexes indexes;
	int refCount;
	vvirtual* f$3;
	bool isRaw;
	int stride;
	hl__types__ArrayObj buffers;
	hl__types__ArrayObj allIndexes;
	hl__types__ArrayBytes_hl_F32 tmpBuf;
	hl__types__ArrayBytes_hl_UI16 tmpIdx;
	h3d__col__Bounds bounds;
	int bufPos;
	int idxPos;
	int startIndex;
	bool flushing;
	bool hasTangents;
	bool isStatic;
};
#endif


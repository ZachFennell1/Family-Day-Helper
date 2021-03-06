// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_h2d__col___IPolygons__IPolygons_Impl_
#define INC_h2d__col___IPolygons__IPolygons_Impl_
typedef struct _h2d__col___IPolygons__$IPolygons_Impl_ *h2d__col___IPolygons__$IPolygons_Impl_;
typedef struct _h2d__col___IPolygons__IPolygons_Impl_ *h2d__col___IPolygons__IPolygons_Impl_;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/types/ArrayObj.h>
#include <hxd/impl/ArrayIterator_h2d_col_IPolygon.h>
#include <h2d/col/IBounds.h>
#include <h2d/col/OffsetKind.h>
#include <hxd/clipper/ClipType.h>
#include <h2d/col/Point.h>


struct _h2d__col___IPolygons__$IPolygons_Impl_ {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	vclosure* get_length;
	vclosure* get_polygons;
	vclosure* _new;
	vclosure* iterator;
	vclosure* toPolygons;
	vclosure* getBounds;
	vclosure* _union;
	vclosure* intersection;
	vclosure* subtraction;
	vclosure* offset;
	vclosure* clipperOp;
	vclosure* contains;
	vclosure* optimize;
};
struct _h2d__col___IPolygons__IPolygons_Impl_ {
	hl_type *$type;
};
#endif


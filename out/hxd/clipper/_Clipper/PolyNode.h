// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_hxd__clipper___Clipper__PolyNode
#define INC_hxd__clipper___Clipper__PolyNode
typedef struct _hxd__clipper___Clipper__$PolyNode *hxd__clipper___Clipper__$PolyNode;
typedef struct _hxd__clipper___Clipper__PolyNode *hxd__clipper___Clipper__PolyNode;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/types/ArrayObj.h>
#include <hxd/clipper/JoinType.h>
#include <hxd/clipper/EndType.h>


struct _hxd__clipper___Clipper__$PolyNode {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _hxd__clipper___Clipper__PolyNode {
	hl_type *$type;
	hxd__clipper___Clipper__PolyNode parent;
	hl__types__ArrayObj childs;
	hl__types__ArrayObj polygon;
	int index;
	venum* jointype;
	venum* endtype;
};
#endif


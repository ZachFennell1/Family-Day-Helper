// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_hxsl__Clone
#define INC_hxsl__Clone
typedef struct _hxsl__$Clone *hxsl__$Clone;
typedef struct _hxsl__Clone *hxsl__Clone;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/types/ArrayObj.h>
#include <haxe/ds/IntMap.h>


struct _hxsl__$Clone {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	vclosure* shaderData;
};
struct _hxsl__Clone {
	hl_type *$type;
	haxe__ds__IntMap varMap;
};
#endif


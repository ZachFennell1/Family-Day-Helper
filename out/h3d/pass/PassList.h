﻿// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_h3d__pass__PassList
#define INC_h3d__pass__PassList
typedef struct _h3d__pass__$PassList *h3d__pass__$PassList;
typedef struct _h3d__pass__PassList *h3d__pass__PassList;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <h3d/pass/PassObject.h>


struct _h3d__pass__$PassList {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _h3d__pass__PassList {
	hl_type *$type;
	h3d__pass__PassObject current;
	h3d__pass__PassObject discarded;
	h3d__pass__PassObject lastDisc;
};
#endif

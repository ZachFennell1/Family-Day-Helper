﻿// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_h3d__mat__MaterialDatabase
#define INC_h3d__mat__MaterialDatabase
typedef struct _h3d__mat__$MaterialDatabase *h3d__mat__$MaterialDatabase;
typedef struct _h3d__mat__MaterialDatabase *h3d__mat__MaterialDatabase;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <haxe/ds/StringMap.h>


struct _h3d__mat__$MaterialDatabase {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _h3d__mat__MaterialDatabase {
	hl_type *$type;
	haxe__ds__StringMap db;
};
#endif


﻿// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_hxd__res__Loader
#define INC_hxd__res__Loader
typedef struct _hxd__res__$Loader *hxd__res__$Loader;
typedef struct _hxd__res__Loader *hxd__res__Loader;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hxd/fs/FileEntry.h>
#include <hl/types/ArrayObj.h>
#include <haxe/ds/StringMap.h>


struct _hxd__res__$Loader {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	hxd__res__Loader currentInstance;
};
struct _hxd__res__Loader {
	hl_type *$type;
	vvirtual* fs;
	haxe__ds__StringMap cache;
};
#endif


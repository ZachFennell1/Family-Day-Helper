﻿// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_hxd__File
#define INC_hxd__File
typedef struct _hxd__$File *hxd__$File;
typedef struct _hxd__File *hxd__File;
#include <haxe/io/Bytes.h>
#include <hxd/File.h>
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/types/ArrayObj.h>


typedef struct {
	HL__ENUM_CONSTRUCT__
	vclosure* p0;
	haxe__io__Bytes p1;
} Enumt$ctx_dd63cbb;
struct _hxd__$File {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	vclosure* browse;
	vclosure* saveAs;
	vclosure* exists;
	vclosure* delete;
	vclosure* listDirectory;
	vclosure* getBytes;
	vclosure* saveBytes;
	vclosure* load;
	vclosure* createDirectory;
	vclosure* applicationPath;
};
struct _hxd__File {
	hl_type *$type;
};
#endif


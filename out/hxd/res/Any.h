// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_hxd__res__Any
#define INC_hxd__res__Any
typedef struct _hxd__res__$Any *hxd__res__$Any;
typedef struct _hxd__res__Any *hxd__res__Any;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <haxe/io/Bytes.h>
#include <hxd/res/Resource.h>
#include <hxd/fs/FileEntry.h>
#include <hxd/res/Loader.h>


struct _hxd__res__$Any {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	vclosure* fromBytes;
};
struct _hxd__res__Any {
	hl_type *$type;
	hxd__fs__FileEntry entry;
	hxd__res__Loader loader;
};
#endif


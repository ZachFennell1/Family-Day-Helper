﻿// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_hxd___IndexBuffer__InnerIterator
#define INC_hxd___IndexBuffer__InnerIterator
typedef struct _hxd___IndexBuffer__$InnerIterator *hxd___IndexBuffer__$InnerIterator;
typedef struct _hxd___IndexBuffer__InnerIterator *hxd___IndexBuffer__InnerIterator;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/types/ArrayBytes_hl_UI16.h>


struct _hxd___IndexBuffer__$InnerIterator {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _hxd___IndexBuffer__InnerIterator {
	hl_type *$type;
	hl__types__ArrayBytes_hl_UI16 b;
	int len;
	int pos;
};
#endif


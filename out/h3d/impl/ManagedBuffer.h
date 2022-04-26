﻿// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_h3d__impl__ManagedBuffer
#define INC_h3d__impl__ManagedBuffer
typedef struct _h3d__impl__$ManagedBuffer *h3d__impl__$ManagedBuffer;
typedef struct _h3d__impl__ManagedBuffer *h3d__impl__ManagedBuffer;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <h3d/impl/MemoryManager.h>
#include <h3d/impl/_ManagedBuffer/FreeCell.h>


struct _h3d__impl__$ManagedBuffer {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _h3d__impl__ManagedBuffer {
	hl_type *$type;
	h3d__impl__MemoryManager mem;
	int stride;
	int size;
	int flags;
	vvirtual* vbuf;
	h3d__impl___ManagedBuffer__FreeCell freeList;
	h3d__impl__ManagedBuffer next;
};
#endif


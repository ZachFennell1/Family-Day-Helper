﻿// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_hl__types__BytesIterator_hl_F32
#define INC_hl__types__BytesIterator_hl_F32
typedef struct _hl__types__$BytesIterator_hl_F32 *hl__types__$BytesIterator_hl_F32;
typedef struct _hl__types__BytesIterator_hl_F32 *hl__types__BytesIterator_hl_F32;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <haxe/iterators/ArrayIterator.h>
#include <hl/types/ArrayDyn.h>
#include <hl/types/ArrayBytes_hl_F32.h>


struct _hl__types__$BytesIterator_hl_F32 {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _hl__types__BytesIterator_hl_F32 {
	hl_type *$type;
	hl__types__ArrayDyn array;
	int current;
	hl__types__ArrayBytes_hl_F32 a;
};
#endif


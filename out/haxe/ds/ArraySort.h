﻿// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_haxe__ds__ArraySort
#define INC_haxe__ds__ArraySort
typedef struct _haxe__ds__$ArraySort *haxe__ds__$ArraySort;
typedef struct _haxe__ds__ArraySort *haxe__ds__ArraySort;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/types/ArrayDyn.h>


struct _haxe__ds__$ArraySort {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	vclosure* sort;
	vclosure* rec;
	vclosure* doMerge;
	vclosure* rotate;
	vclosure* gcd;
	vclosure* upper;
	vclosure* lower;
	vclosure* swap;
};
struct _haxe__ds__ArraySort {
	hl_type *$type;
};
#endif


﻿// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_hxd__fmt__hmd__Library
#define INC_hxd__fmt__hmd__Library
typedef struct _hxd__fmt__hmd__$Library *hxd__fmt__hmd__$Library;
typedef struct _hxd__fmt__hmd__Library *hxd__fmt__hmd__Library;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hxd/res/Resource.h>
#include <hxd/fmt/hmd/Data.h>
#include <hl/types/ArrayObj.h>
#include <haxe/ds/StringMap.h>


struct _hxd__fmt__hmd__$Library {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _hxd__fmt__hmd__Library {
	hl_type *$type;
	hxd__res__Resource resource;
	hxd__fmt__hmd__Data header;
	hl__types__ArrayObj cachedPrimitives;
	haxe__ds__StringMap cachedAnimations;
	haxe__ds__StringMap cachedSkin;
};
#endif

﻿// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_hxsl__ShaderList
#define INC_hxsl__ShaderList
typedef struct _hxsl__$ShaderList *hxsl__$ShaderList;
typedef struct _hxsl__ShaderList *hxsl__ShaderList;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hxsl/Shader.h>


struct _hxsl__$ShaderList {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	vclosure* addSort;
};
struct _hxsl__ShaderList {
	hl_type *$type;
	hxsl__Shader s;
	hxsl__ShaderList next;
};
#endif

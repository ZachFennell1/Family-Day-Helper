﻿// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_hxsl___ShaderList__ShaderIterator
#define INC_hxsl___ShaderList__ShaderIterator
typedef struct _hxsl___ShaderList__$ShaderIterator *hxsl___ShaderList__$ShaderIterator;
typedef struct _hxsl___ShaderList__ShaderIterator *hxsl___ShaderList__ShaderIterator;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hxsl/ShaderList.h>


struct _hxsl___ShaderList__$ShaderIterator {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _hxsl___ShaderList__ShaderIterator {
	hl_type *$type;
	hxsl__ShaderList l;
	hxsl__ShaderList last;
};
#endif


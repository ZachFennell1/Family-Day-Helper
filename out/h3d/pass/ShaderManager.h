﻿// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_h3d__pass__ShaderManager
#define INC_h3d__pass__ShaderManager
typedef struct _h3d__pass__$ShaderManager *h3d__pass__$ShaderManager;
typedef struct _h3d__pass__ShaderManager *h3d__pass__ShaderManager;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hxsl/Globals.h>
#include <hxsl/Cache.h>
#include <hxsl/ShaderList.h>


struct _h3d__pass__$ShaderManager {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	bool STRICT;
};
struct _h3d__pass__ShaderManager {
	hl_type *$type;
	hxsl__Globals globals;
	hxsl__Cache shaderCache;
	hxsl__ShaderList currentOutput;
};
#endif


﻿// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_h3d__Quat
#define INC_h3d__Quat
typedef struct _h3d__$Quat *h3d__$Quat;
typedef struct _h3d__Quat *h3d__Quat;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>


struct _h3d__$Quat {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _h3d__Quat {
	hl_type *$type;
	double x;
	double y;
	double z;
	double w;
};
#endif


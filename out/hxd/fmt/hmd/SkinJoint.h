﻿// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_hxd__fmt__hmd__SkinJoint
#define INC_hxd__fmt__hmd__SkinJoint
typedef struct _hxd__fmt__hmd__$SkinJoint *hxd__fmt__hmd__$SkinJoint;
typedef struct _hxd__fmt__hmd__SkinJoint *hxd__fmt__hmd__SkinJoint;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/types/ArrayObj.h>
#include <hxd/fmt/hmd/Position.h>


struct _hxd__fmt__hmd__$SkinJoint {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _hxd__fmt__hmd__SkinJoint {
	hl_type *$type;
	String name;
	hl__types__ArrayObj props;
	int parent;
	hxd__fmt__hmd__Position position;
	int bind;
	hxd__fmt__hmd__Position transpos;
};
#endif


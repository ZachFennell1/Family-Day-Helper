﻿// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_hxd__fmt__hmd__GeometryBuffer
#define INC_hxd__fmt__hmd__GeometryBuffer
typedef struct _hxd__fmt__hmd__$GeometryBuffer *hxd__fmt__hmd__$GeometryBuffer;
typedef struct _hxd__fmt__hmd__GeometryBuffer *hxd__fmt__hmd__GeometryBuffer;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/types/ArrayBytes_hl_F32.h>
#include <hl/types/ArrayBytes_Int.h>


struct _hxd__fmt__hmd__$GeometryBuffer {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _hxd__fmt__hmd__GeometryBuffer {
	hl_type *$type;
	hl__types__ArrayBytes_hl_F32 vertexes;
	hl__types__ArrayBytes_Int indexes;
};
#endif


﻿// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_hxd___FloatBuffer__FloatBuffer_Impl_
#define INC_hxd___FloatBuffer__FloatBuffer_Impl_
typedef struct _hxd___FloatBuffer__$FloatBuffer_Impl_ *hxd___FloatBuffer__$FloatBuffer_Impl_;
typedef struct _hxd___FloatBuffer__FloatBuffer_Impl_ *hxd___FloatBuffer__FloatBuffer_Impl_;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/types/ArrayBytes_hl_F32.h>
#include <hxd/_FloatBuffer/InnerIterator.h>


struct _hxd___FloatBuffer__$FloatBuffer_Impl_ {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	vclosure* _new;
	vclosure* push;
	vclosure* grow;
	vclosure* resize;
	vclosure* arrayRead;
	vclosure* arrayWrite;
	vclosure* getNative;
	vclosure* iterator;
	vclosure* get_length;
};
struct _hxd___FloatBuffer__FloatBuffer_Impl_ {
	hl_type *$type;
};
#endif


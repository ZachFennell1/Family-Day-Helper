﻿// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_h2d__col__Matrix
#define INC_h2d__col__Matrix
typedef struct _h2d__col__$Matrix *h2d__col__$Matrix;
typedef struct _h2d__col__Matrix *h2d__col__Matrix;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>


struct _h2d__col__$Matrix {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	h2d__col__Matrix tmp;
};
struct _h2d__col__Matrix {
	hl_type *$type;
	double a;
	double b;
	double c;
	double d;
	double x;
	double y;
};
#endif


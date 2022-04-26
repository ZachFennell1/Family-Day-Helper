﻿// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_h3d__mat__Stencil
#define INC_h3d__mat__Stencil
typedef struct _h3d__mat__$Stencil *h3d__mat__$Stencil;
typedef struct _h3d__mat__Stencil *h3d__mat__Stencil;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <h3d/mat/Compare.h>
#include <h3d/mat/StencilOp.h>


struct _h3d__mat__$Stencil {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	vclosure* getReadMask;
	int readMask_bits;
	int readMask_offset;
	int readMask_mask;
	vclosure* getWriteMask;
	int writeMask_bits;
	int writeMask_offset;
	int writeMask_mask;
	vclosure* getReference;
	int reference_bits;
	int reference_offset;
	int reference_mask;
	vclosure* getFrontTest;
	int frontTest_bits;
	int frontTest_offset;
	int frontTest_mask;
	vclosure* getFrontPass;
	int frontPass_bits;
	int frontPass_offset;
	int frontPass_mask;
	vclosure* getFrontSTfail;
	int frontSTfail_bits;
	int frontSTfail_offset;
	int frontSTfail_mask;
	vclosure* getFrontDPfail;
	int frontDPfail_bits;
	int frontDPfail_offset;
	int frontDPfail_mask;
	vclosure* getBackTest;
	int backTest_bits;
	int backTest_offset;
	int backTest_mask;
	vclosure* getBackPass;
	int backPass_bits;
	int backPass_offset;
	int backPass_mask;
	vclosure* getBackSTfail;
	int backSTfail_bits;
	int backSTfail_offset;
	int backSTfail_mask;
	vclosure* getBackDPfail;
	int backDPfail_bits;
	int backDPfail_offset;
	int backDPfail_mask;
};
struct _h3d__mat__Stencil {
	hl_type *$type;
	int maskBits;
	int opBits;
	int readMask;
	int writeMask;
	int reference;
	venum* frontTest;
	venum* frontPass;
	venum* frontSTfail;
	venum* frontDPfail;
	venum* backTest;
	venum* backPass;
	venum* backSTfail;
	venum* backDPfail;
	vvirtual* f$13;
};
#endif


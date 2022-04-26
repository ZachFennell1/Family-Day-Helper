﻿// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_h3d__mat__Pass
#define INC_h3d__mat__Pass
typedef struct _h3d__mat__$Pass *h3d__mat__$Pass;
typedef struct _h3d__mat__Pass *h3d__mat__Pass;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hxsl/ShaderList.h>
#include <h3d/mat/Face.h>
#include <h3d/mat/Compare.h>
#include <h3d/mat/Blend.h>
#include <h3d/mat/Operation.h>
#include <h3d/mat/Stencil.h>


struct _h3d__mat__$Pass {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	vclosure* getEnableLights;
	int enableLights_bits;
	int enableLights_offset;
	int enableLights_mask;
	vclosure* getDynamicParameters;
	int dynamicParameters_bits;
	int dynamicParameters_offset;
	int dynamicParameters_mask;
	vclosure* getIsStatic;
	int isStatic_bits;
	int isStatic_offset;
	int isStatic_mask;
	vclosure* getBatchMode;
	int batchMode_bits;
	int batchMode_offset;
	int batchMode_mask;
	vclosure* getCulling;
	int culling_bits;
	int culling_offset;
	int culling_mask;
	vclosure* getDepthWrite;
	int depthWrite_bits;
	int depthWrite_offset;
	int depthWrite_mask;
	vclosure* getDepthTest;
	int depthTest_bits;
	int depthTest_offset;
	int depthTest_mask;
	vclosure* getBlendSrc;
	int blendSrc_bits;
	int blendSrc_offset;
	int blendSrc_mask;
	vclosure* getBlendDst;
	int blendDst_bits;
	int blendDst_offset;
	int blendDst_mask;
	vclosure* getBlendAlphaSrc;
	int blendAlphaSrc_bits;
	int blendAlphaSrc_offset;
	int blendAlphaSrc_mask;
	vclosure* getBlendAlphaDst;
	int blendAlphaDst_bits;
	int blendAlphaDst_offset;
	int blendAlphaDst_mask;
	vclosure* getBlendOp;
	int blendOp_bits;
	int blendOp_offset;
	int blendOp_mask;
	vclosure* getBlendAlphaOp;
	int blendAlphaOp_bits;
	int blendAlphaOp_offset;
	int blendAlphaOp_mask;
	vclosure* getWireframe;
	int wireframe_bits;
	int wireframe_offset;
	int wireframe_mask;
	vclosure* getReserved;
	int reserved_bits;
	int reserved_offset;
	int reserved_mask;
};
struct _h3d__mat__Pass {
	hl_type *$type;
	String name;
	int flags;
	int passId;
	int bits;
	h3d__mat__Pass parentPass;
	hxsl__ShaderList parentShaders;
	hxsl__ShaderList shaders;
	h3d__mat__Pass nextPass;
	bool enableLights;
	bool dynamicParameters;
	bool isStatic;
	bool batchMode;
	venum* culling;
	bool depthWrite;
	venum* depthTest;
	venum* blendSrc;
	venum* blendDst;
	venum* blendAlphaSrc;
	venum* blendAlphaDst;
	venum* blendOp;
	venum* blendAlphaOp;
	bool wireframe;
	int colorMask;
	int layer;
	h3d__mat__Stencil stencil;
	bool reserved;
	vvirtual* f$26;
};
#endif

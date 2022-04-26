﻿// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_h3d__pass__Default
#define INC_h3d__pass__Default
typedef struct _h3d__pass__$Default *h3d__pass__$Default;
typedef struct _h3d__pass__Default *h3d__pass__Default;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <h3d/pass/Base.h>
#include <h3d/scene/RenderContext.h>
#include <h3d/pass/ShaderManager.h>
#include <h3d/pass/PassList.h>


struct _h3d__pass__$Default {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _h3d__pass__Default {
	hl_type *$type;
	h3d__scene__RenderContext ctx;
	String name;
	h3d__pass__ShaderManager manager;
	vclosure* defaultSort;
	int cameraView_id;
	int cameraNear_id;
	int cameraFar_id;
	int cameraProj_id;
	int cameraPos_id;
	int cameraProjDiag_id;
	int cameraProjFlip_id;
	int cameraViewProj_id;
	int cameraInverseViewProj_id;
	int globalTime_id;
	int pixelSize_id;
	int globalModelView_id;
	int globalModelViewInverse_id;
};
#endif

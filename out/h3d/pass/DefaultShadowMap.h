﻿// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_h3d__pass__DefaultShadowMap
#define INC_h3d__pass__DefaultShadowMap
typedef struct _h3d__pass__$DefaultShadowMap *h3d__pass__$DefaultShadowMap;
typedef struct _h3d__pass__DefaultShadowMap *h3d__pass__DefaultShadowMap;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <h3d/pass/DirShadowMap.h>
#include <h3d/pass/Shadows.h>
#include <h3d/pass/Default.h>
#include <h3d/pass/Base.h>
#include <h3d/scene/RenderContext.h>
#include <h3d/pass/ShaderManager.h>
#include <h3d/pass/PassList.h>
#include <h3d/Camera.h>
#include <hxd/PixelFormat.h>
#include <h3d/mat/Texture.h>
#include <h3d/scene/Light.h>
#include <h3d/pass/RenderMode.h>
#include <hxsl/Shader.h>
#include <h3d/pass/Blur.h>
#include <h3d/pass/ShadowSamplingKind.h>
#include <h3d/mat/DepthBuffer.h>
#include <h3d/shader/DirShadow.h>
#include <h3d/pass/Border.h>
#include <h3d/pass/ScreenFx.h>
#include <h3d/Vector.h>


struct _h3d__pass__$DefaultShadowMap {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _h3d__pass__DefaultShadowMap {
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
	h3d__Camera lightCamera;
	venum* format;
	h3d__mat__Texture staticTexture;
	h3d__scene__Light light;
	bool enabled;
	venum* mode;
	int size;
	hxsl__Shader shader;
	h3d__pass__Blur blur;
	venum* samplingKind;
	double power;
	double bias;
	int pcfQuality;
	double pcfScale;
	bool customDepth;
	h3d__mat__DepthBuffer depth;
	h3d__shader__DirShadow dshader;
	h3d__pass__Border border;
	h3d__pass__ScreenFx mergePass;
	bool autoShrink;
	double maxDist;
	double minDist;
	vclosure* calcShadowBounds;
	int shadowMapId;
	int shadowProjId;
	int shadowColorId;
	int shadowPowerId;
	int shadowBiasId;
	h3d__Vector color;
};
#endif


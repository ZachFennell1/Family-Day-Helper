﻿// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_h3d__Camera
#define INC_h3d__Camera
typedef struct _h3d__$Camera *h3d__$Camera;
typedef struct _h3d__Camera *h3d__Camera;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <h3d/col/Bounds.h>
#include <h3d/Matrix.h>
#include <h3d/Vector.h>
#include <h3d/scene/Object.h>
#include <h3d/col/Frustum.h>


struct _h3d__$Camera {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _h3d__Camera {
	hl_type *$type;
	double zoom;
	double screenRatio;
	double fovY;
	double zNear;
	double zFar;
	h3d__col__Bounds orthoBounds;
	bool rightHanded;
	h3d__Matrix mproj;
	h3d__Matrix mcam;
	h3d__Matrix m;
	h3d__Vector pos;
	h3d__Vector up;
	h3d__Vector target;
	double viewX;
	double viewY;
	vvirtual* follow;
	h3d__col__Frustum frustum;
	h3d__Matrix minv;
	h3d__Matrix mcamInv;
	h3d__Matrix mprojInv;
	bool needInv;
};
#endif


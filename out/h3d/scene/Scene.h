// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_h3d__scene__Scene
#define INC_h3d__scene__Scene
typedef struct _h3d__scene__$Scene *h3d__scene__$Scene;
typedef struct _h3d__scene__Scene *h3d__scene__Scene;
#include <h3d/col/Ray.h>
#include <hl/types/ArrayBytes_Float.h>
#include <h3d/scene/Scene.h>
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <h3d/scene/Object.h>
#include <hl/types/ArrayObj.h>
#include <h3d/Matrix.h>
#include <h3d/anim/Animation.h>
#include <h3d/col/Sphere.h>
#include <h3d/col/Frustum.h>
#include <h3d/col/Point.h>
#include <h3d/Quat.h>
#include <h3d/Camera.h>
#include <h3d/scene/LightSystem.h>
#include <h3d/scene/Renderer.h>
#include <h3d/scene/RenderContext.h>
#include <hxd/SceneEvents.h>
#include <hxd/Window.h>
#include <h3d/pass/HardwarePick.h>
#include <hxd/Cursor.h>
#include <hxd/Event.h>
#include <h3d/Engine.h>


typedef struct {
	HL__ENUM_CONSTRUCT__
	h3d__col__Ray p0;
	h3d__scene__Scene p1;
	hl__types__ArrayBytes_Float p2;
	hl__types__ArrayBytes_Float p3;
	hl__types__ArrayBytes_Float p4;
	hl__types__ArrayBytes_Float p5;
	hl__types__ArrayBytes_Float p6;
	hl__types__ArrayBytes_Float p7;
} Enumt$ctx_a0246f7;
struct _h3d__scene__$Scene {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _h3d__scene__Scene {
	hl_type *$type;
	int flags;
	hl__types__ArrayObj children;
	h3d__scene__Object parent;
	String name;
	double x;
	double y;
	double z;
	double scaleX;
	double scaleY;
	double scaleZ;
	h3d__scene__Object follow;
	h3d__Matrix defaultTransform;
	h3d__anim__Animation currentAnimation;
	vvirtual* cullingCollider;
	h3d__Matrix absPos;
	h3d__Matrix invPos;
	h3d__Quat qRot;
	int lastFrame;
	vvirtual* f$18;
	h3d__Camera camera;
	h3d__scene__LightSystem lightSystem;
	h3d__scene__Renderer renderer;
	h3d__scene__RenderContext ctx;
	hl__types__ArrayObj interactives;
	hxd__SceneEvents events;
	hl__types__ArrayObj hitInteractives;
	hl__types__ArrayObj eventListeners;
	hxd__Window window;
	h3d__pass__HardwarePick hardwarePass;
	vvirtual* f$29;
	vvirtual* f$30;
};
#endif


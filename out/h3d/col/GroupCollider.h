// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_h3d__col__GroupCollider
#define INC_h3d__col__GroupCollider
typedef struct _h3d__col__$GroupCollider *h3d__col__$GroupCollider;
typedef struct _h3d__col__GroupCollider *h3d__col__GroupCollider;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/types/ArrayObj.h>
#include <h3d/col/Ray.h>
#include <h3d/col/Sphere.h>
#include <h3d/col/Frustum.h>
#include <h3d/Matrix.h>
#include <h3d/col/Point.h>


struct _h3d__col__$GroupCollider {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _h3d__col__GroupCollider {
	hl_type *$type;
	hl__types__ArrayObj colliders;
	vvirtual* f$1;
};
#endif


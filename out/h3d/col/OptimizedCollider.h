// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_h3d__col__OptimizedCollider
#define INC_h3d__col__OptimizedCollider
typedef struct _h3d__col__$OptimizedCollider *h3d__col__$OptimizedCollider;
typedef struct _h3d__col__OptimizedCollider *h3d__col__OptimizedCollider;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <h3d/col/Ray.h>
#include <h3d/col/Sphere.h>
#include <h3d/col/Frustum.h>
#include <h3d/Matrix.h>
#include <h3d/col/Point.h>


struct _h3d__col__$OptimizedCollider {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _h3d__col__OptimizedCollider {
	hl_type *$type;
	vvirtual* a;
	vvirtual* b;
	vvirtual* f$2;
	vvirtual* f$3;
};
#endif


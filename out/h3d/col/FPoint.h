// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_h3d__col__FPoint
#define INC_h3d__col__FPoint
typedef struct _h3d__col__$FPoint *h3d__col__$FPoint;
typedef struct _h3d__col__FPoint *h3d__col__FPoint;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>


struct _h3d__col__$FPoint {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _h3d__col__FPoint {
	hl_type *$type;
	float x;
	float y;
	float z;
};
#endif


// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_h2d__TileGroup
#define INC_h2d__TileGroup
typedef struct _h2d__$TileGroup *h2d__$TileGroup;
typedef struct _h2d__TileGroup *h2d__TileGroup;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <h2d/Drawable.h>
#include <h2d/Object.h>
#include <hl/types/ArrayObj.h>
#include <h2d/filter/Filter.h>
#include <h2d/BlendMode.h>
#include <h3d/Vector.h>
#include <hxsl/ShaderList.h>
#include <h2d/TileLayerContent.h>
#include <h2d/Tile.h>


struct _h2d__$TileGroup {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _h2d__TileGroup {
	hl_type *$type;
	hl__types__ArrayObj children;
	h2d__Object parentContainer;
	h2d__Object parent;
	String name;
	double x;
	double y;
	double scaleX;
	double scaleY;
	double rotation;
	bool visible;
	double alpha;
	h2d__filter__Filter filter;
	venum* blendMode;
	double matA;
	double matB;
	double matC;
	double matD;
	double absX;
	double absY;
	bool posChanged;
	bool allocated;
	int lastFrame;
	h3d__Vector color;
	vdynamic* smooth;
	bool tileWrap;
	vdynamic* colorKey;
	hxsl__ShaderList shaders;
	h2d__TileLayerContent content;
	h3d__Vector curColor;
	h2d__Tile tile;
	int rangeMin;
	int rangeMax;
};
#endif


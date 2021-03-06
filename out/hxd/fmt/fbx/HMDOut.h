// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_hxd__fmt__fbx__HMDOut
#define INC_hxd__fmt__fbx__HMDOut
typedef struct _hxd__fmt__fbx__$HMDOut *hxd__fmt__fbx__$HMDOut;
typedef struct _hxd__fmt__fbx__HMDOut *hxd__fmt__fbx__HMDOut;
#include <hl/types/ArrayObj.h>
#include <_std/String.h>
#include <hxd/fmt/fbx/HMDOut.h>
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <hxd/fmt/fbx/BaseLibrary.h>
#include <haxe/ds/IntMap.h>
#include <haxe/ds/StringMap.h>
#include <hxd/fmt/hmd/Data.h>
#include <haxe/io/BytesOutput.h>
#include <haxe/io/Bytes.h>


typedef struct {
	HL__ENUM_CONSTRUCT__
	hxd__fmt__fbx__HMDOut p0;
	vvirtual* p1;
} Enumt$ctx_a8c2bb0;
typedef struct {
	HL__ENUM_CONSTRUCT__
	hl__types__ArrayObj p0;
	hxd__fmt__fbx__HMDOut p1;
} Enumt$ctx_bc28faf;
typedef struct {
	HL__ENUM_CONSTRUCT__
	hl__types__ArrayObj p0;
	hl__types__ArrayObj p1;
	hl__types__ArrayObj p2;
	hl__types__ArrayObj p3;
	hl__types__ArrayObj p4;
} Enumt$ctx_c145030;
struct _hxd__fmt__fbx__$HMDOut {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _hxd__fmt__fbx__HMDOut {
	hl_type *$type;
	vvirtual* root;
	haxe__ds__IntMap ids;
	haxe__ds__IntMap connect;
	haxe__ds__IntMap namedConnect;
	haxe__ds__IntMap invConnect;
	bool leftHand;
	haxe__ds__IntMap defaultModelMatrixes;
	haxe__ds__StringMap uvAnims;
	hl__types__ArrayObj animationEvents;
	bool isMaya;
	String fileName;
	double version;
	haxe__ds__StringMap keepJoints;
	haxe__ds__StringMap skipObjects;
	int bonesPerVertex;
	bool unskinnedJointsAsObjects;
	bool allowVertexColor;
	bool normalizeScaleOrient;
	hxd__fmt__hmd__Data d;
	haxe__io__BytesOutput dataOut;
	String filePath;
	haxe__io__Bytes tmp;
	bool absoluteTexturePath;
	bool optimizeSkin;
	bool floatSkinIndexes;
};
#endif


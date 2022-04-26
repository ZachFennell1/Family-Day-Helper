﻿// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <h3d/impl/Driver.h>
#include <h3d/impl/Feature.h>
#include <h3d/impl/RenderFlag.h>
#include <hxd/PixelFormat.h>
#include <h3d/mat/Texture.h>
extern String s$05307f6;
vdynamic* haxe_Exception_thrown(vdynamic*);
#include <hxsl/RuntimeShader.h>
#include <h3d/Vector.h>
#include <hxd/Pixels.h>
#include <h2d/col/IBounds.h>
extern String s$9a580d9;
extern String s$Not_available;
#include <h3d/mat/Pass.h>
#include <h3d/shader/Buffers.h>
#include <h3d/impl/InputNames.h>
#include <h3d/Buffer.h>
#include <h3d/BufferOffset.h>
#include <h3d/impl/InstanceBuffer.h>
#include <hl/types/ArrayObj.h>
#include <h3d/mat/DepthBuffer.h>
#include <h3d/impl/ManagedBuffer.h>
#include <haxe/io/Bytes.h>
#include <hl/types/ArrayBytes_hl_UI16.h>
#include <hl/types/ArrayBytes_hl_F32.h>
#include <hxd/BitmapData.h>
extern String s$d676c91;
extern String s$8db2c7e;
#include <h3d/impl/QueryKind.h>

bool h3d_impl_Driver_hasFeature(h3d__impl__Driver r0,venum* r1) {
	bool r2;
	r2 = false;
	return r2;
}

void h3d_impl_Driver_setRenderFlag(h3d__impl__Driver r0,venum* r1,int r2) {
	return;
}

bool h3d_impl_Driver_isSupportedFormat(h3d__impl__Driver r0,venum* r1) {
	bool r2;
	r2 = false;
	return r2;
}

bool h3d_impl_Driver_isDisposed(h3d__impl__Driver r0) {
	bool r1;
	r1 = true;
	return r1;
}

void h3d_impl_Driver_dispose(h3d__impl__Driver r0) {
	return;
}

void h3d_impl_Driver_begin(h3d__impl__Driver r0,int r1) {
	return;
}

void h3d_impl_Driver_log(h3d__impl__Driver r0,String r1) {
	return;
}

void h3d_impl_Driver_generateMipMaps(h3d__impl__Driver r0,h3d__mat__Texture r1) {
	String r3;
	vdynamic *r2;
	r3 = (String)s$05307f6;
	r2 = haxe_Exception_thrown(((vdynamic*)r3));
	hl_throw((vdynamic*)r2);
}

String h3d_impl_Driver_getNativeShaderCode(h3d__impl__Driver r0,hxsl__RuntimeShader r1) {
	String r2;
	r2 = NULL;
	return r2;
}

void h3d_impl_Driver_logImpl(h3d__impl__Driver r0,String r1) {
	return;
}

void h3d_impl_Driver_clear(h3d__impl__Driver r0,h3d__Vector r1,vdynamic* r2,vdynamic* r3) {
	return;
}

void h3d_impl_Driver_captureRenderBuffer(h3d__impl__Driver r0,hxd__Pixels r1) {
	return;
}

hxd__Pixels h3d_impl_Driver_capturePixels(h3d__impl__Driver r0,h3d__mat__Texture r1,int r2,int r3,h2d__col__IBounds r4) {
	String r6;
	vdynamic *r5;
	r6 = (String)s$9a580d9;
	r5 = haxe_Exception_thrown(((vdynamic*)r6));
	hl_throw((vdynamic*)r5);
}

String h3d_impl_Driver_getDriverName(h3d__impl__Driver r0,bool r1) {
	String r2;
	r2 = (String)s$Not_available;
	return r2;
}

void h3d_impl_Driver_init(h3d__impl__Driver r0,vclosure* r1,bool* r2) {
	bool r3;
	if( r2 ) goto label$8d42b5f_15_3;
	r3 = false;
	goto label$8d42b5f_15_4;
	label$8d42b5f_15_3:
	r3 = *r2;
	label$8d42b5f_15_4:
	return;
}

void h3d_impl_Driver_resize(h3d__impl__Driver r0,int r1,int r2) {
	return;
}

bool h3d_impl_Driver_selectShader(h3d__impl__Driver r0,hxsl__RuntimeShader r1) {
	bool r2;
	r2 = false;
	return r2;
}

void h3d_impl_Driver_selectMaterial(h3d__impl__Driver r0,h3d__mat__Pass r1) {
	return;
}

void h3d_impl_Driver_uploadShaderBuffers(h3d__impl__Driver r0,h3d__shader__Buffers r1,int r2) {
	return;
}

h3d__impl__InputNames h3d_impl_Driver_getShaderInputNames(h3d__impl__Driver r0) {
	h3d__impl__InputNames r1;
	r1 = NULL;
	return r1;
}

void h3d_impl_Driver_selectBuffer(h3d__impl__Driver r0,h3d__Buffer r1) {
	return;
}

void h3d_impl_Driver_selectMultiBuffers(h3d__impl__Driver r0,h3d__BufferOffset r1) {
	return;
}

void h3d_impl_Driver_draw(h3d__impl__Driver r0,vvirtual* r1,int r2,int r3) {
	return;
}

void h3d_impl_Driver_drawInstanced(h3d__impl__Driver r0,vvirtual* r1,h3d__impl__InstanceBuffer r2) {
	return;
}

void h3d_impl_Driver_setRenderZone(h3d__impl__Driver r0,int r1,int r2,int r3,int r4) {
	return;
}

void h3d_impl_Driver_setRenderTarget(h3d__impl__Driver r0,h3d__mat__Texture r1,int* r2,int* r3) {
	int r4, r5;
	if( r2 ) goto label$8d42b5f_26_3;
	r4 = 0;
	goto label$8d42b5f_26_4;
	label$8d42b5f_26_3:
	r4 = *r2;
	label$8d42b5f_26_4:
	if( r3 ) goto label$8d42b5f_26_7;
	r5 = 0;
	goto label$8d42b5f_26_8;
	label$8d42b5f_26_7:
	r5 = *r3;
	label$8d42b5f_26_8:
	return;
}

void h3d_impl_Driver_setRenderTargets(h3d__impl__Driver r0,hl__types__ArrayObj r1) {
	return;
}

vvirtual* h3d_impl_Driver_allocDepthBuffer(h3d__impl__Driver r0,h3d__mat__DepthBuffer r1) {
	vvirtual *r2;
	r2 = NULL;
	return r2;
}

void h3d_impl_Driver_disposeDepthBuffer(h3d__impl__Driver r0,h3d__mat__DepthBuffer r1) {
	return;
}

h3d__mat__DepthBuffer h3d_impl_Driver_getDefaultDepthBuffer(h3d__impl__Driver r0) {
	h3d__mat__DepthBuffer r1;
	r1 = NULL;
	return r1;
}

void h3d_impl_Driver_present(h3d__impl__Driver r0) {
	return;
}

void h3d_impl_Driver_end(h3d__impl__Driver r0) {
	return;
}

void h3d_impl_Driver_setDebug(h3d__impl__Driver r0,bool r1) {
	return;
}

vvirtual* h3d_impl_Driver_allocTexture(h3d__impl__Driver r0,h3d__mat__Texture r1) {
	vvirtual *r2;
	r2 = NULL;
	return r2;
}

vvirtual* h3d_impl_Driver_allocIndexes(h3d__impl__Driver r0,int r1,bool r2) {
	vvirtual *r3;
	r3 = NULL;
	return r3;
}

vvirtual* h3d_impl_Driver_allocVertexes(h3d__impl__Driver r0,h3d__impl__ManagedBuffer r1) {
	vvirtual *r2;
	r2 = NULL;
	return r2;
}

void h3d_impl_Driver_allocInstanceBuffer(h3d__impl__Driver r0,h3d__impl__InstanceBuffer r1,haxe__io__Bytes r2) {
	return;
}

void h3d_impl_Driver_disposeTexture(h3d__impl__Driver r0,h3d__mat__Texture r1) {
	return;
}

void h3d_impl_Driver_disposeIndexes(h3d__impl__Driver r0,vvirtual* r1) {
	return;
}

void h3d_impl_Driver_disposeVertexes(h3d__impl__Driver r0,vvirtual* r1) {
	return;
}

void h3d_impl_Driver_disposeInstanceBuffer(h3d__impl__Driver r0,h3d__impl__InstanceBuffer r1) {
	return;
}

void h3d_impl_Driver_uploadIndexBuffer(h3d__impl__Driver r0,vvirtual* r1,int r2,int r3,hl__types__ArrayBytes_hl_UI16 r4,int r5) {
	return;
}

void h3d_impl_Driver_uploadIndexBytes(h3d__impl__Driver r0,vvirtual* r1,int r2,int r3,haxe__io__Bytes r4,int r5) {
	return;
}

void h3d_impl_Driver_uploadVertexBuffer(h3d__impl__Driver r0,vvirtual* r1,int r2,int r3,hl__types__ArrayBytes_hl_F32 r4,int r5) {
	return;
}

void h3d_impl_Driver_uploadVertexBytes(h3d__impl__Driver r0,vvirtual* r1,int r2,int r3,haxe__io__Bytes r4,int r5) {
	return;
}

void h3d_impl_Driver_uploadTextureBitmap(h3d__impl__Driver r0,h3d__mat__Texture r1,hxd__BitmapData r2,int r3,int r4) {
	return;
}

void h3d_impl_Driver_uploadTexturePixels(h3d__impl__Driver r0,h3d__mat__Texture r1,hxd__Pixels r2,int r3,int r4) {
	return;
}

void h3d_impl_Driver_readVertexBytes(h3d__impl__Driver r0,vvirtual* r1,int r2,int r3,haxe__io__Bytes r4,int r5) {
	String r7;
	vdynamic *r6;
	r7 = (String)s$d676c91;
	r6 = haxe_Exception_thrown(((vdynamic*)r7));
	hl_throw((vdynamic*)r6);
}

void h3d_impl_Driver_readIndexBytes(h3d__impl__Driver r0,vvirtual* r1,int r2,int r3,haxe__io__Bytes r4,int r5) {
	String r7;
	vdynamic *r6;
	r7 = (String)s$8db2c7e;
	r6 = haxe_Exception_thrown(((vdynamic*)r7));
	hl_throw((vdynamic*)r6);
}

bool h3d_impl_Driver_copyTexture(h3d__impl__Driver r0,h3d__mat__Texture r1,h3d__mat__Texture r2) {
	bool r3;
	r3 = false;
	return r3;
}

vvirtual* h3d_impl_Driver_allocQuery(h3d__impl__Driver r0,venum* r1) {
	vvirtual *r2;
	r2 = NULL;
	return r2;
}

void h3d_impl_Driver_deleteQuery(h3d__impl__Driver r0,vvirtual* r1) {
	return;
}

void h3d_impl_Driver_beginQuery(h3d__impl__Driver r0,vvirtual* r1) {
	return;
}

void h3d_impl_Driver_endQuery(h3d__impl__Driver r0,vvirtual* r1) {
	return;
}

bool h3d_impl_Driver_queryResultAvailable(h3d__impl__Driver r0,vvirtual* r1) {
	bool r2;
	r2 = true;
	return r2;
}

double h3d_impl_Driver_queryResult(h3d__impl__Driver r0,vvirtual* r1) {
	double r2;
	r2 = 0.;
	return r2;
}


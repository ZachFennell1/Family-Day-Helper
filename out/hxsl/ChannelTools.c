﻿// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <hxsl/ChannelTools.h>
#include <hxd/PixelFormat.h>
#include <h3d/mat/Texture.h>
extern h3d__mat__$Texture g$_h3d_mat_Texture;

bool hxsl_ChannelTools_isPackedFormat(h3d__mat__Texture r0) {
	venum *r2, *r3;
	bool r1;
	h3d__mat__$Texture r4;
	if( r0 == NULL ) hl_null_access();
	r2 = r0->format;
	r4 = (h3d__mat__$Texture)g$_h3d_mat_Texture;
	r3 = r4->nativeFormat;
	if( r2 == r3 ) goto label$205d663_1_7;
	r1 = false;
	goto label$205d663_1_8;
	label$205d663_1_7:
	r1 = true;
	label$205d663_1_8:
	return r1;
}

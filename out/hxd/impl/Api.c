﻿// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <hxd/impl/Api.h>
bool hl_BaseType_check(hl__BaseType,vdynamic*);
bool Std_isOfType(vdynamic*,vdynamic*);

vdynamic* hxd_impl_Api_downcast(vdynamic* r0,hl__Class r1) {
	bool r3;
	vdynamic *r2;
	r3 = hl_BaseType_check(((hl__BaseType)r1),r0);
	if( !r3 ) goto label$a9374f0_1_4;
	r2 = r0;
	goto label$a9374f0_1_5;
	label$a9374f0_1_4:
	r2 = NULL;
	label$a9374f0_1_5:
	return r2;
}

bool hxd_impl_Api_isOfType(vdynamic* r0,vdynamic* r1) {
	bool r2;
	r2 = Std_isOfType(r0,r1);
	return r2;
}

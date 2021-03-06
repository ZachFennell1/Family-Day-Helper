// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <h3d/col/GroupCollider.h>
extern hl_type t$vrt_016ea5d;
extern hl_type t$fun_258ac7d;
extern hl_type t$fun_c0189e8;
extern hl_type t$fun_b7b1fe3;
extern hl_type t$fun_32a6249;

void h3d_col_GroupCollider_new(h3d__col__GroupCollider r0,hl__types__ArrayObj r1) {
	r0->colliders = r1;
	return;
}

double h3d_col_GroupCollider_rayIntersection(h3d__col__GroupCollider r0,h3d__col__Ray r1,bool r2) {
	vvirtual *r7;
	hl__types__ArrayObj r5;
	double r3, r10, r11;
	vdynamic *r8;
	varray *r9;
	int r4, r6;
	r3 = -1.;
	r4 = 0;
	r5 = r0->colliders;
	label$1c2a3c4_2_3:
	if( r5 == NULL ) hl_null_access();
	r6 = r5->length;
	if( r4 >= r6 ) goto label$1c2a3c4_2_26;
	r6 = r5->length;
	if( ((unsigned)r4) < ((unsigned)r6) ) goto label$1c2a3c4_2_11;
	r7 = NULL;
	goto label$1c2a3c4_2_14;
	label$1c2a3c4_2_11:
	r9 = r5->array;
	r8 = ((vdynamic**)(r9 + 1))[r4];
	r7 = hl_to_virtual(&t$vrt_016ea5d,(vdynamic*)r8);
	label$1c2a3c4_2_14:
	++r4;
	if( r7 == NULL ) hl_null_access();
	if( hl_vfields(r7)[0] ) r10 = ((double (*)(vdynamic*,h3d__col__Ray,bool))hl_vfields(r7)[0])(r7->value,r1,r2); else {
		void *args[] = {r1,&r2};
		vdynamic ret;
		hl_dyn_call_obj(r7->value,&t$fun_258ac7d,69795042/*rayIntersection*/,args,&ret);
		r10 = (double)ret.v.d;
	}
	r11 = 0.;
	if( !(r10 >= r11) ) goto label$1c2a3c4_2_25;
	if( r2 ) goto label$1c2a3c4_2_21;
	return r10;
	label$1c2a3c4_2_21:
	r11 = 0.;
	if( r3 < r11 ) goto label$1c2a3c4_2_24;
	if( !(r10 < r3) ) goto label$1c2a3c4_2_25;
	label$1c2a3c4_2_24:
	r3 = r10;
	label$1c2a3c4_2_25:
	goto label$1c2a3c4_2_3;
	label$1c2a3c4_2_26:
	return r3;
}

bool h3d_col_GroupCollider_contains(h3d__col__GroupCollider r0,h3d__col__Point r1) {
	vvirtual *r5;
	hl__types__ArrayObj r3;
	bool r8;
	vdynamic *r6;
	varray *r7;
	int r2, r4;
	r2 = 0;
	r3 = r0->colliders;
	label$1c2a3c4_3_2:
	if( r3 == NULL ) hl_null_access();
	r4 = r3->length;
	if( r2 >= r4 ) goto label$1c2a3c4_3_20;
	r4 = r3->length;
	if( ((unsigned)r2) < ((unsigned)r4) ) goto label$1c2a3c4_3_10;
	r5 = NULL;
	goto label$1c2a3c4_3_13;
	label$1c2a3c4_3_10:
	r7 = r3->array;
	r6 = ((vdynamic**)(r7 + 1))[r2];
	r5 = hl_to_virtual(&t$vrt_016ea5d,(vdynamic*)r6);
	label$1c2a3c4_3_13:
	++r2;
	if( r5 == NULL ) hl_null_access();
	if( hl_vfields(r5)[3] ) r8 = ((bool (*)(vdynamic*,h3d__col__Point))hl_vfields(r5)[3])(r5->value,r1); else {
		void *args[] = {r1};
		vdynamic ret;
		hl_dyn_call_obj(r5->value,&t$fun_c0189e8,209410724/*contains*/,args,&ret);
		r8 = (bool)ret.v.i;
	}
	if( !r8 ) goto label$1c2a3c4_3_19;
	r8 = true;
	return r8;
	label$1c2a3c4_3_19:
	goto label$1c2a3c4_3_2;
	label$1c2a3c4_3_20:
	r8 = false;
	return r8;
}

bool h3d_col_GroupCollider_inFrustum(h3d__col__GroupCollider r0,h3d__col__Frustum r1,h3d__Matrix r2) {
	vvirtual *r6;
	hl__types__ArrayObj r4;
	bool r9;
	vdynamic *r7;
	varray *r8;
	int r3, r5;
	r3 = 0;
	r4 = r0->colliders;
	label$1c2a3c4_4_2:
	if( r4 == NULL ) hl_null_access();
	r5 = r4->length;
	if( r3 >= r5 ) goto label$1c2a3c4_4_20;
	r5 = r4->length;
	if( ((unsigned)r3) < ((unsigned)r5) ) goto label$1c2a3c4_4_10;
	r6 = NULL;
	goto label$1c2a3c4_4_13;
	label$1c2a3c4_4_10:
	r8 = r4->array;
	r7 = ((vdynamic**)(r8 + 1))[r3];
	r6 = hl_to_virtual(&t$vrt_016ea5d,(vdynamic*)r7);
	label$1c2a3c4_4_13:
	++r3;
	if( r6 == NULL ) hl_null_access();
	if( hl_vfields(r6)[2] ) r9 = ((bool (*)(vdynamic*,h3d__col__Frustum,h3d__Matrix))hl_vfields(r6)[2])(r6->value,r1,r2); else {
		void *args[] = {r1,r2};
		vdynamic ret;
		hl_dyn_call_obj(r6->value,&t$fun_b7b1fe3,-159610637/*inFrustum*/,args,&ret);
		r9 = (bool)ret.v.i;
	}
	if( !r9 ) goto label$1c2a3c4_4_19;
	r9 = true;
	return r9;
	label$1c2a3c4_4_19:
	goto label$1c2a3c4_4_2;
	label$1c2a3c4_4_20:
	r9 = false;
	return r9;
}

bool h3d_col_GroupCollider_inSphere(h3d__col__GroupCollider r0,h3d__col__Sphere r1) {
	vvirtual *r5;
	hl__types__ArrayObj r3;
	bool r8;
	vdynamic *r6;
	varray *r7;
	int r2, r4;
	r2 = 0;
	r3 = r0->colliders;
	label$1c2a3c4_5_2:
	if( r3 == NULL ) hl_null_access();
	r4 = r3->length;
	if( r2 >= r4 ) goto label$1c2a3c4_5_20;
	r4 = r3->length;
	if( ((unsigned)r2) < ((unsigned)r4) ) goto label$1c2a3c4_5_10;
	r5 = NULL;
	goto label$1c2a3c4_5_13;
	label$1c2a3c4_5_10:
	r7 = r3->array;
	r6 = ((vdynamic**)(r7 + 1))[r2];
	r5 = hl_to_virtual(&t$vrt_016ea5d,(vdynamic*)r6);
	label$1c2a3c4_5_13:
	++r2;
	if( r5 == NULL ) hl_null_access();
	if( hl_vfields(r5)[1] ) r8 = ((bool (*)(vdynamic*,h3d__col__Sphere))hl_vfields(r5)[1])(r5->value,r1); else {
		void *args[] = {r1};
		vdynamic ret;
		hl_dyn_call_obj(r5->value,&t$fun_32a6249,91552220/*inSphere*/,args,&ret);
		r8 = (bool)ret.v.i;
	}
	if( !r8 ) goto label$1c2a3c4_5_19;
	r8 = true;
	return r8;
	label$1c2a3c4_5_19:
	goto label$1c2a3c4_5_2;
	label$1c2a3c4_5_20:
	r8 = false;
	return r8;
}


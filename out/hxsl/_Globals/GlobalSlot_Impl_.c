﻿// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <hxsl/_Globals/GlobalSlot_Impl_.h>
int hxsl_Globals_allocID(String);
#include <haxe/ds/IntMap.h>
void haxe_ds_IntMap_set(haxe__ds__IntMap,int,vdynamic*);
vdynamic* haxe_ds_IntMap_get(haxe__ds__IntMap,int);

int hxsl__Globals_GlobalSlot_Impl___new(String r0) {
	int r1;
	r1 = hxsl_Globals_allocID(r0);
	return r1;
}

int hxsl__Globals_GlobalSlot_Impl__toInt(int r0) {
	return r0;
}

void hxsl__Globals_GlobalSlot_Impl__set(int r0,hxsl__Globals r1,vdynamic* r2) {
	haxe__ds__IntMap r4;
	if( r1 == NULL ) hl_null_access();
	r4 = r1->map;
	if( r4 == NULL ) hl_null_access();
	haxe_ds_IntMap_set(r4,r0,r2);
	return;
}

vdynamic* hxsl__Globals_GlobalSlot_Impl__get(int r0,hxsl__Globals r1) {
	haxe__ds__IntMap r3;
	vdynamic *r2;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r2 = haxe_ds_IntMap_get(r3,r0);
	return r2;
}

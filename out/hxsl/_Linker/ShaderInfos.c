// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <hxsl/_Linker/ShaderInfos.h>
extern hxsl___Linker__$ShaderInfos g$_hxsl__Linker_ShaderInfos;
extern hl_type t$haxe_ds_IntMap;
void haxe_ds_IntMap_new(haxe__ds__IntMap);
extern hl_type t$vrt_ab557b2;
#include <hl/natives.h>
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);

void hxsl__Linker_ShaderInfos_new(hxsl___Linker__ShaderInfos r0,String r1,vdynamic* r2) {
	hl__types__ArrayObj r8;
	hl_type *r10;
	haxe__ds__IntMap r6;
	hxsl___Linker__$ShaderInfos r3;
	varray *r9;
	int r4, r5;
	r0->name = r1;
	r3 = (hxsl___Linker__$ShaderInfos)g$_hxsl__Linker_ShaderInfos;
	r4 = r3->UID;
	r5 = r4;
	++r4;
	r3->UID = r4;
	r0->uid = r5;
	r0->vertex = r2;
	r6 = (haxe__ds__IntMap)hl_alloc_obj(&t$haxe_ds_IntMap);
	haxe_ds_IntMap_new(r6);
	r0->processed = r6;
	r10 = &t$vrt_ab557b2;
	r4 = 0;
	r9 = hl_alloc_array(r10,r4);
	r8 = hl_types_ArrayObj_alloc(r9);
	r0->usedFunctions = r8;
	r6 = (haxe__ds__IntMap)hl_alloc_obj(&t$haxe_ds_IntMap);
	haxe_ds_IntMap_new(r6);
	r0->read = r6;
	r6 = (haxe__ds__IntMap)hl_alloc_obj(&t$haxe_ds_IntMap);
	haxe_ds_IntMap_new(r6);
	r0->write = r6;
	return;
}


// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <h3d/anim/AnimatedObject.h>
extern hl_type t$h3d_anim_AnimatedObject;

void h3d_anim_AnimatedObject_new(h3d__anim__AnimatedObject r0,String r1) {
	r0->objectName = r1;
	return;
}

h3d__anim__AnimatedObject h3d_anim_AnimatedObject_clone(h3d__anim__AnimatedObject r0) {
	String r2;
	h3d__anim__AnimatedObject r1;
	r1 = (h3d__anim__AnimatedObject)hl_alloc_obj(&t$h3d_anim_AnimatedObject);
	r2 = r0->objectName;
	h3d_anim_AnimatedObject_new(r1,r2);
	return r1;
}


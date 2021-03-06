// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <hxd/Event.h>
String hxd_Event_toString(hxd__Event);
String Std_string(vdynamic*);
extern String s$8154172;
String String___add__(String,String);
#include <hl/natives.h>
String String___alloc__(vbyte*,int);
extern String s$c0cb5f0;
extern String s$0fbd177;
extern String s$_wheelDelta_;
extern String s$;
extern String s$_keyCode_;
extern String s$_button_;
extern String s$_charCode_;

vbyte* hxd_Event___string(hxd__Event r0) {
	String r2;
	vbyte *r1;
	r2 = hxd_Event_toString(r0);
	if( r2 == NULL ) hl_null_access();
	r1 = r2->bytes;
	return r1;
}

String hxd_Event_toString(hxd__Event r0) {
	String r1, r3, r9, r11, r12, r13;
	venum *r2;
	double r4, r6, r10;
	int *r7;
	vbyte *r8;
	int r5;
	r2 = r0->kind;
	r1 = Std_string(((vdynamic*)r2));
	r3 = (String)s$8154172;
	r1 = String___add__(r1,r3);
	r4 = r0->relX;
	r5 = (int)r4;
	r7 = &r5;
	r8 = hl_itos(r5,r7);
	r9 = String___alloc__(r8,r5);
	r3 = String___add__(r1,r9);
	r9 = (String)s$c0cb5f0;
	r3 = String___add__(r3,r9);
	r6 = r0->relY;
	r5 = (int)r6;
	r7 = &r5;
	r8 = hl_itos(r5,r7);
	r11 = String___alloc__(r8,r5);
	r9 = String___add__(r3,r11);
	r11 = (String)s$0fbd177;
	r9 = String___add__(r9,r11);
	r2 = r0->kind;
	if( r2 == NULL ) hl_null_access();
	r5 = HL__ENUM_INDEX__(r2);
	switch(r5) {
		default:
			goto label$a85e66a_2_59;
		case 5:
			r12 = (String)s$_wheelDelta_;
			r10 = r0->wheelDelta;
			r7 = &r5;
			r8 = hl_ftos(r10,r7);
			r13 = String___alloc__(r8,r5);
			r12 = String___add__(r12,r13);
			r11 = r12;
			goto label$a85e66a_2_59;
		case 2:
		case 3:
		case 4:
		case 6:
		case 7:
		case 12:
			r12 = (String)s$;
			r11 = r12;
			goto label$a85e66a_2_59;
		case 8:
		case 9:
			r12 = (String)s$_keyCode_;
			r5 = r0->keyCode;
			r7 = &r5;
			r8 = hl_itos(r5,r7);
			r13 = String___alloc__(r8,r5);
			r12 = String___add__(r12,r13);
			r11 = r12;
			goto label$a85e66a_2_59;
		case 0:
		case 1:
		case 10:
			r12 = (String)s$_button_;
			r5 = r0->button;
			r7 = &r5;
			r8 = hl_itos(r5,r7);
			r13 = String___alloc__(r8,r5);
			r12 = String___add__(r12,r13);
			r11 = r12;
			goto label$a85e66a_2_59;
		case 11:
			r12 = (String)s$_charCode_;
			r5 = r0->charCode;
			r7 = &r5;
			r8 = hl_itos(r5,r7);
			r13 = String___alloc__(r8,r5);
			r12 = String___add__(r12,r13);
			r11 = r12;
	}
	label$a85e66a_2_59:
	r12 = String___add__(r9,r11);
	return r12;
}

void hxd_Event_new(hxd__Event r0,venum* r1,double* r2,double* r3) {
	double r4, r5;
	int r6;
	if( r2 ) goto label$a85e66a_3_3;
	r4 = 0.;
	goto label$a85e66a_3_4;
	label$a85e66a_3_3:
	r4 = *r2;
	label$a85e66a_3_4:
	if( r3 ) goto label$a85e66a_3_7;
	r5 = 0.;
	goto label$a85e66a_3_8;
	label$a85e66a_3_7:
	r5 = *r3;
	label$a85e66a_3_8:
	r6 = 0;
	r0->button = r6;
	r0->kind = r1;
	r0->relX = r4;
	r0->relY = r5;
	return;
}


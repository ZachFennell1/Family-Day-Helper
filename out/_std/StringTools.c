// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <_std/StringTools.h>
#include <_std/StringBuf.h>
extern hl_type t$StringBuf;
void StringBuf_new(StringBuf);
void StringBuf_addChar(StringBuf,int);
extern String s$_quot_;
void StringBuf_add(StringBuf,vdynamic*);
extern String s$_amp_;
extern String s$_039_;
extern String s$_lt_;
extern String s$_gt_;
String StringBuf_toString(StringBuf);
#include <hl/natives.h>
vdynamic* String_charCodeAt(String,int);
extern hl_type t$_i32;
String String_substr(String,int,vdynamic*);
#include <hl/types/ArrayObj.h>
hl__types__ArrayObj String_split(String,String);
String hl_types_ArrayObj_join(hl__types__ArrayObj,String);
extern String s$;
extern String s$0123456789ABCDEF;
String String_charAt(String,int);
String String___add__(String,String);
extern String s$0;

String StringTools_htmlEscape(String r0,vdynamic* r1) {
	String r5, r9;
	bool r14;
	StringBuf r2;
	vbyte *r8, *r10;
	int r4, r6, r7, r11, r12, r13;
	r2 = (StringBuf)hl_alloc_obj(&t$StringBuf);
	StringBuf_new(r2);
	r4 = 0;
	r5 = r0;
	label$de37252_1_4:
	if( r5 == NULL ) hl_null_access();
	r7 = r5->length;
	if( r4 >= r7 ) goto label$de37252_1_69;
	r6 = r4;
	++r4;
	r8 = r5->bytes;
	r11 = 1;
	r7 = r6 << r11;
	r7 = *(unsigned short*)(r8 + r7);
	r12 = 55296;
	if( r7 < r12 ) goto label$de37252_1_32;
	r12 = 56319;
	if( r12 < r7 ) goto label$de37252_1_32;
	r10 = r5->bytes;
	r12 = 55232;
	r11 = r7 - r12;
	r12 = 10;
	r11 = r11 << r12;
	r13 = 1;
	r12 = r6 + r13;
	r13 = 1;
	r12 = r12 << r13;
	r12 = *(unsigned short*)(r10 + r12);
	r13 = 1023;
	r12 = r12 & r13;
	r11 = r11 | r12;
	r7 = r11;
	label$de37252_1_32:
	r13 = 65536;
	if( r7 < r13 ) goto label$de37252_1_35;
	++r4;
	label$de37252_1_35:
	switch(r7) {
		default:
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
		case 37:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 61:
			if( r2 == NULL ) hl_null_access();
			StringBuf_addChar(r2,r7);
			goto label$de37252_1_68;
		case 34:
			r14 = r1 ? r1->v.b : 0;
			if( !r14 ) goto label$de37252_1_45;
			if( r2 == NULL ) hl_null_access();
			r9 = (String)s$_quot_;
			StringBuf_add(r2,((vdynamic*)r9));
			goto label$de37252_1_47;
			label$de37252_1_45:
			if( r2 == NULL ) hl_null_access();
			StringBuf_addChar(r2,r7);
			label$de37252_1_47:
			goto label$de37252_1_68;
		case 38:
			if( r2 == NULL ) hl_null_access();
			r9 = (String)s$_amp_;
			StringBuf_add(r2,((vdynamic*)r9));
			goto label$de37252_1_68;
		case 39:
			r14 = r1 ? r1->v.b : 0;
			if( !r14 ) goto label$de37252_1_58;
			if( r2 == NULL ) hl_null_access();
			r9 = (String)s$_039_;
			StringBuf_add(r2,((vdynamic*)r9));
			goto label$de37252_1_60;
			label$de37252_1_58:
			if( r2 == NULL ) hl_null_access();
			StringBuf_addChar(r2,r7);
			label$de37252_1_60:
			goto label$de37252_1_68;
		case 60:
			if( r2 == NULL ) hl_null_access();
			r9 = (String)s$_lt_;
			StringBuf_add(r2,((vdynamic*)r9));
			goto label$de37252_1_68;
		case 62:
			if( r2 == NULL ) hl_null_access();
			r9 = (String)s$_gt_;
			StringBuf_add(r2,((vdynamic*)r9));
	}
	label$de37252_1_68:
	goto label$de37252_1_4;
	label$de37252_1_69:
	if( r2 == NULL ) hl_null_access();
	r5 = StringBuf_toString(r2);
	return r5;
}

bool StringTools_startsWith(String r0,String r1) {
	bool r4;
	vbyte *r5, *r6;
	int r2, r3, r7, r8;
	if( r0 == NULL ) hl_null_access();
	r2 = r0->length;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->length;
	if( r2 < r3 ) goto label$de37252_2_19;
	r5 = r0->bytes;
	r2 = 0;
	r6 = r1->bytes;
	r3 = 0;
	r7 = r1->length;
	r8 = 1;
	r7 = r7 << r8;
	r2 = hl_bytes_compare(r5,r2,r6,r3,r7);
	r3 = 0;
	if( r2 == r3 ) goto label$de37252_2_17;
	r4 = false;
	goto label$de37252_2_18;
	label$de37252_2_17:
	r4 = true;
	label$de37252_2_18:
	return r4;
	label$de37252_2_19:
	r4 = false;
	return r4;
}

bool StringTools_endsWith(String r0,String r1) {
	bool r6;
	vbyte *r7, *r8;
	int r2, r3, r4, r5, r9, r10;
	if( r1 == NULL ) hl_null_access();
	r2 = r1->length;
	if( r0 == NULL ) hl_null_access();
	r3 = r0->length;
	if( r3 < r2 ) goto label$de37252_3_20;
	r7 = r0->bytes;
	r4 = r3 - r2;
	r5 = 1;
	r4 = r4 << r5;
	r8 = r1->bytes;
	r5 = 0;
	r10 = 1;
	r9 = r2 << r10;
	r4 = hl_bytes_compare(r7,r4,r8,r5,r9);
	r5 = 0;
	if( r4 == r5 ) goto label$de37252_3_18;
	r6 = false;
	goto label$de37252_3_19;
	label$de37252_3_18:
	r6 = true;
	label$de37252_3_19:
	return r6;
	label$de37252_3_20:
	r6 = false;
	return r6;
}

bool StringTools_isSpace(String r0,int r1) {
	bool r5;
	vdynamic *r2, *r6;
	int r3, r4;
	if( r0 == NULL ) hl_null_access();
	r2 = String_charCodeAt(r0,r1);
	r3 = r2 ? r2->v.i : 0;
	r4 = 8;
	if( r4 >= r3 ) goto label$de37252_4_8;
	r3 = r2 ? r2->v.i : 0;
	r4 = 14;
	if( r3 < r4 ) goto label$de37252_4_15;
	label$de37252_4_8:
	r3 = 32;
	r6 = hl_alloc_dynamic(&t$_i32);
	r6->v.i = r3;
	if( r2 == r6 || (r2 && r6 && (r2->v.i == r6->v.i)) ) goto label$de37252_4_13;
	r5 = false;
	goto label$de37252_4_14;
	label$de37252_4_13:
	r5 = true;
	label$de37252_4_14:
	return r5;
	label$de37252_4_15:
	r5 = true;
	return r5;
}

String StringTools_ltrim(String r0) {
	String r2;
	bool r5;
	vdynamic *r6;
	int r1, r3, r4;
	if( r0 == NULL ) hl_null_access();
	r1 = r0->length;
	r3 = 0;
	label$de37252_5_3:
	if( r3 >= r1 ) goto label$de37252_5_9;
	r5 = StringTools_isSpace(r0,r3);
	if( !r5 ) goto label$de37252_5_9;
	++r3;
	goto label$de37252_5_3;
	label$de37252_5_9:
	r4 = 0;
	if( r4 >= r3 ) goto label$de37252_5_16;
	if( r0 == NULL ) hl_null_access();
	r4 = r1 - r3;
	r6 = hl_alloc_dynamic(&t$_i32);
	r6->v.i = r4;
	r2 = String_substr(r0,r3,r6);
	return r2;
	label$de37252_5_16:
	return r0;
}

String StringTools_rtrim(String r0) {
	String r2;
	bool r6;
	vdynamic *r7;
	int r1, r3, r4, r5;
	if( r0 == NULL ) hl_null_access();
	r1 = r0->length;
	r3 = 0;
	label$de37252_6_3:
	if( r3 >= r1 ) goto label$de37252_6_12;
	r4 = r1 - r3;
	r5 = 1;
	r4 = r4 - r5;
	r6 = StringTools_isSpace(r0,r4);
	if( !r6 ) goto label$de37252_6_12;
	++r3;
	goto label$de37252_6_3;
	label$de37252_6_12:
	r5 = 0;
	if( r5 >= r3 ) goto label$de37252_6_20;
	if( r0 == NULL ) hl_null_access();
	r4 = 0;
	r5 = r1 - r3;
	r7 = hl_alloc_dynamic(&t$_i32);
	r7->v.i = r5;
	r2 = String_substr(r0,r4,r7);
	return r2;
	label$de37252_6_20:
	return r0;
}

String StringTools_trim(String r0) {
	String r1;
	r1 = StringTools_rtrim(r0);
	r1 = StringTools_ltrim(r1);
	return r1;
}

String StringTools_lpad(String r0,String r1,int r2) {
	String r5;
	StringBuf r7;
	int r4, r6;
	if( r1 == NULL ) hl_null_access();
	r4 = r1->length;
	r6 = 0;
	if( r6 < r4 ) goto label$de37252_8_5;
	return r0;
	label$de37252_8_5:
	r7 = (StringBuf)hl_alloc_obj(&t$StringBuf);
	StringBuf_new(r7);
	if( r0 == NULL ) hl_null_access();
	r6 = r0->length;
	r4 = r2 - r6;
	r2 = r4;
	label$de37252_8_11:
	if( r7 == NULL ) hl_null_access();
	r4 = r7->pos;
	r6 = 1;
	r4 = r4 >> r6;
	if( r4 >= r2 ) goto label$de37252_8_19;
	StringBuf_add(r7,((vdynamic*)r1));
	goto label$de37252_8_11;
	label$de37252_8_19:
	StringBuf_add(r7,((vdynamic*)r0));
	r5 = StringBuf_toString(r7);
	return r5;
}

String StringTools_replace(String r0,String r1,String r2) {
	String r3;
	hl__types__ArrayObj r4;
	if( r0 == NULL ) hl_null_access();
	r4 = String_split(r0,r1);
	if( r4 == NULL ) hl_null_access();
	r3 = hl_types_ArrayObj_join(r4,r2);
	return r3;
}

String StringTools_hex(int r0,vdynamic* r1) {
	String r2, r3, r5;
	bool r4;
	int r6, r7;
	r2 = (String)s$;
	r3 = (String)s$0123456789ABCDEF;
	label$de37252_10_2:
	r4 = true;
	if( !r4 ) goto label$de37252_10_18;
	if( r3 == NULL ) hl_null_access();
	r7 = 15;
	r6 = r0 & r7;
	r5 = String_charAt(r3,r6);
	r5 = String___add__(r5,r2);
	r2 = r5;
	r7 = 4;
	r6 = ((unsigned)r0) >> r7;
	r0 = r6;
	r7 = 0;
	if( r7 < r6 ) goto label$de37252_10_17;
	goto label$de37252_10_18;
	label$de37252_10_17:
	goto label$de37252_10_2;
	label$de37252_10_18:
	if( !r1 ) goto label$de37252_10_28;
	label$de37252_10_19:
	if( r2 == NULL ) hl_null_access();
	r6 = r2->length;
	r7 = r1 ? r1->v.i : 0;
	if( r6 >= r7 ) goto label$de37252_10_28;
	r5 = (String)s$0;
	r5 = String___add__(r5,r2);
	r2 = r5;
	goto label$de37252_10_19;
	label$de37252_10_28:
	return r2;
}


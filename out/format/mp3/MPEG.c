// Generated by HLC 4.2.4 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <format/mp3/MPEG.h>
extern format__mp3__$MPEG g$_format_mp3_MPEG;
extern venum* g$fe88112;
extern venum* g$format_mp3_MPEGVersion_MPEG_V25;
extern venum* g$format_mp3_MPEGVersion_MPEG_V2;
extern venum* g$format_mp3_MPEGVersion_MPEG_V1;
extern venum* g$format_mp3_SamplingRate_SR_Bad;
extern venum* g$format_mp3_SamplingRate_SR_8000;
extern venum* g$format_mp3_SamplingRate_SR_11025;
extern venum* g$format_mp3_SamplingRate_SR_12000;
extern venum* g$format_mp3_SamplingRate_SR_22050;
extern venum* g$format_mp3_SamplingRate_SR_24000;
extern venum* g$format_mp3_SamplingRate_SR_32000;
extern venum* g$format_mp3_SamplingRate_SR_44100;
extern venum* g$format_mp3_SamplingRate_SR_48000;
int format_mp3_CLayer_enum2Num(venum*);
extern hl_type t$hl_types_ArrayObj;
extern hl_type t$_dyn;
extern String s$Bitrate_index_not_found;
vdynamic* haxe_Exception_thrown(vdynamic*);
extern String s$Sampling_rate_index_not_found;
extern venum* g$format_mp3_Bitrate_BR_Bad;
extern venum* g$format_mp3_Bitrate_BR_Free;
extern venum* g$format_mp3_Bitrate_BR_8;
extern venum* g$format_mp3_Bitrate_BR_16;
extern venum* g$format_mp3_Bitrate_BR_24;
extern venum* g$format_mp3_Bitrate_BR_32;
extern venum* g$format_mp3_Bitrate_BR_40;
extern venum* g$format_mp3_Bitrate_BR_48;
extern venum* g$format_mp3_Bitrate_BR_56;
extern venum* g$format_mp3_Bitrate_BR_64;
extern venum* g$format_mp3_Bitrate_BR_80;
extern venum* g$format_mp3_Bitrate_BR_96;
extern venum* g$format_mp3_Bitrate_BR_112;
extern venum* g$format_mp3_Bitrate_BR_128;
extern venum* g$format_mp3_Bitrate_BR_144;
extern venum* g$format_mp3_Bitrate_BR_160;
extern venum* g$format_mp3_Bitrate_BR_176;
extern venum* g$format_mp3_Bitrate_BR_192;
extern venum* g$format_mp3_Bitrate_BR_224;
extern venum* g$format_mp3_Bitrate_BR_256;
extern venum* g$format_mp3_Bitrate_BR_288;
extern venum* g$format_mp3_Bitrate_BR_320;
extern venum* g$format_mp3_Bitrate_BR_352;
extern venum* g$format_mp3_Bitrate_BR_384;
extern venum* g$format_mp3_Bitrate_BR_416;
extern venum* g$format_mp3_Bitrate_BR_448;

int format_mp3_MPEG_enum2Num(venum* r0) {
	format__mp3__$MPEG r2;
	int r1;
	if( r0 == NULL ) hl_null_access();
	r1 = HL__ENUM_INDEX__(r0);
	switch(r1) {
		default:
			goto label$4d8524f_1_13;
		case 0:
			r1 = 3;
			return r1;
		case 1:
			r1 = 2;
			return r1;
		case 2:
			r1 = 0;
			return r1;
		case 3:
			r2 = (format__mp3__$MPEG)g$_format_mp3_MPEG;
			r1 = r2->Reserved;
			return r1;
	}
	label$4d8524f_1_13:
	r1 = 0;
	return r1;
}

venum* format_mp3_MPEG_num2Enum(int r0) {
	venum *r1;
	switch(r0) {
		default:
		case 1:
			r1 = (venum*)g$fe88112;
			return r1;
		case 0:
			r1 = (venum*)g$format_mp3_MPEGVersion_MPEG_V25;
			return r1;
		case 2:
			r1 = (venum*)g$format_mp3_MPEGVersion_MPEG_V2;
			return r1;
		case 3:
			r1 = (venum*)g$format_mp3_MPEGVersion_MPEG_V1;
			return r1;
	}
}

venum* format_mp3_MPEG_srNum2Enum(int r0) {
	venum *r2;
	int r1;
	r1 = 8000;
	if( r1 == r0 ) goto label$4d8524f_3_18;
	r1 = 11025;
	if( r1 == r0 ) goto label$4d8524f_3_20;
	r1 = 12000;
	if( r1 == r0 ) goto label$4d8524f_3_22;
	r1 = 22050;
	if( r1 == r0 ) goto label$4d8524f_3_24;
	r1 = 24000;
	if( r1 == r0 ) goto label$4d8524f_3_26;
	r1 = 32000;
	if( r1 == r0 ) goto label$4d8524f_3_28;
	r1 = 44100;
	if( r1 == r0 ) goto label$4d8524f_3_30;
	r1 = 48000;
	if( r1 == r0 ) goto label$4d8524f_3_32;
	r2 = (venum*)g$format_mp3_SamplingRate_SR_Bad;
	return r2;
	label$4d8524f_3_18:
	r2 = (venum*)g$format_mp3_SamplingRate_SR_8000;
	return r2;
	label$4d8524f_3_20:
	r2 = (venum*)g$format_mp3_SamplingRate_SR_11025;
	return r2;
	label$4d8524f_3_22:
	r2 = (venum*)g$format_mp3_SamplingRate_SR_12000;
	return r2;
	label$4d8524f_3_24:
	r2 = (venum*)g$format_mp3_SamplingRate_SR_22050;
	return r2;
	label$4d8524f_3_26:
	r2 = (venum*)g$format_mp3_SamplingRate_SR_24000;
	return r2;
	label$4d8524f_3_28:
	r2 = (venum*)g$format_mp3_SamplingRate_SR_32000;
	return r2;
	label$4d8524f_3_30:
	r2 = (venum*)g$format_mp3_SamplingRate_SR_44100;
	return r2;
	label$4d8524f_3_32:
	r2 = (venum*)g$format_mp3_SamplingRate_SR_48000;
	return r2;
}

int format_mp3_MPEG_srEnum2Num(venum* r0) {
	int r1;
	if( r0 == NULL ) hl_null_access();
	r1 = HL__ENUM_INDEX__(r0);
	switch(r1) {
		default:
			goto label$4d8524f_4_22;
		case 0:
			r1 = 8000;
			return r1;
		case 1:
			r1 = 11025;
			return r1;
		case 2:
			r1 = 12000;
			return r1;
		case 3:
			r1 = 22050;
			return r1;
		case 4:
			r1 = 24000;
			return r1;
		case 5:
			r1 = 32000;
			return r1;
		case 6:
			r1 = 44100;
			return r1;
		case 7:
			r1 = 48000;
			return r1;
		case 8:
			r1 = -1;
			return r1;
	}
	label$4d8524f_4_22:
	r1 = 0;
	return r1;
}

int format_mp3_MPEG_getBitrateIdx(venum* r0,venum* r1,venum* r2) {
	String r11;
	hl__types__ArrayObj r3;
	venum *r4, *r10;
	format__mp3__$MPEG r5;
	vdynamic *r8;
	varray *r9;
	int r6, r7;
	r4 = (venum*)g$format_mp3_MPEGVersion_MPEG_V1;
	if( r1 != r4 ) goto label$4d8524f_5_5;
	r5 = (format__mp3__$MPEG)g$_format_mp3_MPEG;
	r3 = r5->V1_Bitrates;
	goto label$4d8524f_5_7;
	label$4d8524f_5_5:
	r5 = (format__mp3__$MPEG)g$_format_mp3_MPEG;
	r3 = r5->V2_Bitrates;
	label$4d8524f_5_7:
	if( r3 == NULL ) hl_null_access();
	r6 = format_mp3_CLayer_enum2Num(r2);
	r7 = r3->length;
	if( ((unsigned)r6) < ((unsigned)r7) ) goto label$4d8524f_5_13;
	r3 = NULL;
	goto label$4d8524f_5_16;
	label$4d8524f_5_13:
	r9 = r3->array;
	r8 = ((vdynamic**)(r9 + 1))[r6];
	r3 = (hl__types__ArrayObj)hl_dyn_castp(&r8,&t$_dyn,&t$hl_types_ArrayObj);
	label$4d8524f_5_16:
	if( r3 == NULL ) hl_null_access();
	r6 = 0;
	r7 = r3->length;
	if( ((unsigned)r6) < ((unsigned)r7) ) goto label$4d8524f_5_22;
	r10 = NULL;
	goto label$4d8524f_5_25;
	label$4d8524f_5_22:
	r9 = r3->array;
	r8 = ((vdynamic**)(r9 + 1))[r6];
	r10 = (venum*)r8;
	label$4d8524f_5_25:
	if( r10 != r0 ) goto label$4d8524f_5_28;
	r6 = 0;
	return r6;
	label$4d8524f_5_28:
	r6 = 1;
	r7 = r3->length;
	if( ((unsigned)r6) < ((unsigned)r7) ) goto label$4d8524f_5_33;
	r10 = NULL;
	goto label$4d8524f_5_36;
	label$4d8524f_5_33:
	r9 = r3->array;
	r8 = ((vdynamic**)(r9 + 1))[r6];
	r10 = (venum*)r8;
	label$4d8524f_5_36:
	if( r10 != r0 ) goto label$4d8524f_5_39;
	r6 = 1;
	return r6;
	label$4d8524f_5_39:
	r6 = 2;
	r7 = r3->length;
	if( ((unsigned)r6) < ((unsigned)r7) ) goto label$4d8524f_5_44;
	r10 = NULL;
	goto label$4d8524f_5_47;
	label$4d8524f_5_44:
	r9 = r3->array;
	r8 = ((vdynamic**)(r9 + 1))[r6];
	r10 = (venum*)r8;
	label$4d8524f_5_47:
	if( r10 != r0 ) goto label$4d8524f_5_50;
	r6 = 2;
	return r6;
	label$4d8524f_5_50:
	r6 = 3;
	r7 = r3->length;
	if( ((unsigned)r6) < ((unsigned)r7) ) goto label$4d8524f_5_55;
	r10 = NULL;
	goto label$4d8524f_5_58;
	label$4d8524f_5_55:
	r9 = r3->array;
	r8 = ((vdynamic**)(r9 + 1))[r6];
	r10 = (venum*)r8;
	label$4d8524f_5_58:
	if( r10 != r0 ) goto label$4d8524f_5_61;
	r6 = 3;
	return r6;
	label$4d8524f_5_61:
	r6 = 4;
	r7 = r3->length;
	if( ((unsigned)r6) < ((unsigned)r7) ) goto label$4d8524f_5_66;
	r10 = NULL;
	goto label$4d8524f_5_69;
	label$4d8524f_5_66:
	r9 = r3->array;
	r8 = ((vdynamic**)(r9 + 1))[r6];
	r10 = (venum*)r8;
	label$4d8524f_5_69:
	if( r10 != r0 ) goto label$4d8524f_5_72;
	r6 = 4;
	return r6;
	label$4d8524f_5_72:
	r6 = 5;
	r7 = r3->length;
	if( ((unsigned)r6) < ((unsigned)r7) ) goto label$4d8524f_5_77;
	r10 = NULL;
	goto label$4d8524f_5_80;
	label$4d8524f_5_77:
	r9 = r3->array;
	r8 = ((vdynamic**)(r9 + 1))[r6];
	r10 = (venum*)r8;
	label$4d8524f_5_80:
	if( r10 != r0 ) goto label$4d8524f_5_83;
	r6 = 5;
	return r6;
	label$4d8524f_5_83:
	r6 = 6;
	r7 = r3->length;
	if( ((unsigned)r6) < ((unsigned)r7) ) goto label$4d8524f_5_88;
	r10 = NULL;
	goto label$4d8524f_5_91;
	label$4d8524f_5_88:
	r9 = r3->array;
	r8 = ((vdynamic**)(r9 + 1))[r6];
	r10 = (venum*)r8;
	label$4d8524f_5_91:
	if( r10 != r0 ) goto label$4d8524f_5_94;
	r6 = 6;
	return r6;
	label$4d8524f_5_94:
	r6 = 7;
	r7 = r3->length;
	if( ((unsigned)r6) < ((unsigned)r7) ) goto label$4d8524f_5_99;
	r10 = NULL;
	goto label$4d8524f_5_102;
	label$4d8524f_5_99:
	r9 = r3->array;
	r8 = ((vdynamic**)(r9 + 1))[r6];
	r10 = (venum*)r8;
	label$4d8524f_5_102:
	if( r10 != r0 ) goto label$4d8524f_5_105;
	r6 = 7;
	return r6;
	label$4d8524f_5_105:
	r6 = 8;
	r7 = r3->length;
	if( ((unsigned)r6) < ((unsigned)r7) ) goto label$4d8524f_5_110;
	r10 = NULL;
	goto label$4d8524f_5_113;
	label$4d8524f_5_110:
	r9 = r3->array;
	r8 = ((vdynamic**)(r9 + 1))[r6];
	r10 = (venum*)r8;
	label$4d8524f_5_113:
	if( r10 != r0 ) goto label$4d8524f_5_116;
	r6 = 8;
	return r6;
	label$4d8524f_5_116:
	r6 = 9;
	r7 = r3->length;
	if( ((unsigned)r6) < ((unsigned)r7) ) goto label$4d8524f_5_121;
	r10 = NULL;
	goto label$4d8524f_5_124;
	label$4d8524f_5_121:
	r9 = r3->array;
	r8 = ((vdynamic**)(r9 + 1))[r6];
	r10 = (venum*)r8;
	label$4d8524f_5_124:
	if( r10 != r0 ) goto label$4d8524f_5_127;
	r6 = 9;
	return r6;
	label$4d8524f_5_127:
	r6 = 10;
	r7 = r3->length;
	if( ((unsigned)r6) < ((unsigned)r7) ) goto label$4d8524f_5_132;
	r10 = NULL;
	goto label$4d8524f_5_135;
	label$4d8524f_5_132:
	r9 = r3->array;
	r8 = ((vdynamic**)(r9 + 1))[r6];
	r10 = (venum*)r8;
	label$4d8524f_5_135:
	if( r10 != r0 ) goto label$4d8524f_5_138;
	r6 = 10;
	return r6;
	label$4d8524f_5_138:
	r6 = 11;
	r7 = r3->length;
	if( ((unsigned)r6) < ((unsigned)r7) ) goto label$4d8524f_5_143;
	r10 = NULL;
	goto label$4d8524f_5_146;
	label$4d8524f_5_143:
	r9 = r3->array;
	r8 = ((vdynamic**)(r9 + 1))[r6];
	r10 = (venum*)r8;
	label$4d8524f_5_146:
	if( r10 != r0 ) goto label$4d8524f_5_149;
	r6 = 11;
	return r6;
	label$4d8524f_5_149:
	r6 = 12;
	r7 = r3->length;
	if( ((unsigned)r6) < ((unsigned)r7) ) goto label$4d8524f_5_154;
	r10 = NULL;
	goto label$4d8524f_5_157;
	label$4d8524f_5_154:
	r9 = r3->array;
	r8 = ((vdynamic**)(r9 + 1))[r6];
	r10 = (venum*)r8;
	label$4d8524f_5_157:
	if( r10 != r0 ) goto label$4d8524f_5_160;
	r6 = 12;
	return r6;
	label$4d8524f_5_160:
	r6 = 13;
	r7 = r3->length;
	if( ((unsigned)r6) < ((unsigned)r7) ) goto label$4d8524f_5_165;
	r10 = NULL;
	goto label$4d8524f_5_168;
	label$4d8524f_5_165:
	r9 = r3->array;
	r8 = ((vdynamic**)(r9 + 1))[r6];
	r10 = (venum*)r8;
	label$4d8524f_5_168:
	if( r10 != r0 ) goto label$4d8524f_5_171;
	r6 = 13;
	return r6;
	label$4d8524f_5_171:
	r6 = 14;
	r7 = r3->length;
	if( ((unsigned)r6) < ((unsigned)r7) ) goto label$4d8524f_5_176;
	r10 = NULL;
	goto label$4d8524f_5_179;
	label$4d8524f_5_176:
	r9 = r3->array;
	r8 = ((vdynamic**)(r9 + 1))[r6];
	r10 = (venum*)r8;
	label$4d8524f_5_179:
	if( r10 != r0 ) goto label$4d8524f_5_182;
	r6 = 14;
	return r6;
	label$4d8524f_5_182:
	r6 = 15;
	r7 = r3->length;
	if( ((unsigned)r6) < ((unsigned)r7) ) goto label$4d8524f_5_187;
	r10 = NULL;
	goto label$4d8524f_5_190;
	label$4d8524f_5_187:
	r9 = r3->array;
	r8 = ((vdynamic**)(r9 + 1))[r6];
	r10 = (venum*)r8;
	label$4d8524f_5_190:
	if( r10 != r0 ) goto label$4d8524f_5_193;
	r6 = 15;
	return r6;
	label$4d8524f_5_193:
	r11 = (String)s$Bitrate_index_not_found;
	r8 = haxe_Exception_thrown(((vdynamic*)r11));
	hl_throw((vdynamic*)r8);
}

int format_mp3_MPEG_getSamplingRateIdx(venum* r0,venum* r1) {
	String r9;
	hl__types__ArrayObj r2;
	venum *r8;
	format__mp3__$MPEG r3;
	vdynamic *r6;
	varray *r7;
	int r4, r5;
	r3 = (format__mp3__$MPEG)g$_format_mp3_MPEG;
	r2 = r3->SamplingRates;
	if( r2 == NULL ) hl_null_access();
	r4 = format_mp3_MPEG_enum2Num(r1);
	r5 = r2->length;
	if( ((unsigned)r4) < ((unsigned)r5) ) goto label$4d8524f_6_8;
	r2 = NULL;
	goto label$4d8524f_6_11;
	label$4d8524f_6_8:
	r7 = r2->array;
	r6 = ((vdynamic**)(r7 + 1))[r4];
	r2 = (hl__types__ArrayObj)hl_dyn_castp(&r6,&t$_dyn,&t$hl_types_ArrayObj);
	label$4d8524f_6_11:
	if( r2 == NULL ) hl_null_access();
	r4 = 0;
	r5 = r2->length;
	if( ((unsigned)r4) < ((unsigned)r5) ) goto label$4d8524f_6_17;
	r8 = NULL;
	goto label$4d8524f_6_20;
	label$4d8524f_6_17:
	r7 = r2->array;
	r6 = ((vdynamic**)(r7 + 1))[r4];
	r8 = (venum*)r6;
	label$4d8524f_6_20:
	if( r8 != r0 ) goto label$4d8524f_6_23;
	r4 = 0;
	return r4;
	label$4d8524f_6_23:
	r4 = 1;
	r5 = r2->length;
	if( ((unsigned)r4) < ((unsigned)r5) ) goto label$4d8524f_6_28;
	r8 = NULL;
	goto label$4d8524f_6_31;
	label$4d8524f_6_28:
	r7 = r2->array;
	r6 = ((vdynamic**)(r7 + 1))[r4];
	r8 = (venum*)r6;
	label$4d8524f_6_31:
	if( r8 != r0 ) goto label$4d8524f_6_34;
	r4 = 1;
	return r4;
	label$4d8524f_6_34:
	r4 = 2;
	r5 = r2->length;
	if( ((unsigned)r4) < ((unsigned)r5) ) goto label$4d8524f_6_39;
	r8 = NULL;
	goto label$4d8524f_6_42;
	label$4d8524f_6_39:
	r7 = r2->array;
	r6 = ((vdynamic**)(r7 + 1))[r4];
	r8 = (venum*)r6;
	label$4d8524f_6_42:
	if( r8 != r0 ) goto label$4d8524f_6_45;
	r4 = 2;
	return r4;
	label$4d8524f_6_45:
	r4 = 3;
	r5 = r2->length;
	if( ((unsigned)r4) < ((unsigned)r5) ) goto label$4d8524f_6_50;
	r8 = NULL;
	goto label$4d8524f_6_53;
	label$4d8524f_6_50:
	r7 = r2->array;
	r6 = ((vdynamic**)(r7 + 1))[r4];
	r8 = (venum*)r6;
	label$4d8524f_6_53:
	if( r8 != r0 ) goto label$4d8524f_6_56;
	r4 = 3;
	return r4;
	label$4d8524f_6_56:
	r9 = (String)s$Sampling_rate_index_not_found;
	r6 = haxe_Exception_thrown(((vdynamic*)r9));
	hl_throw((vdynamic*)r6);
}

int format_mp3_MPEG_bitrateEnum2Num(venum* r0) {
	int r1;
	if( r0 == NULL ) hl_null_access();
	r1 = HL__ENUM_INDEX__(r0);
	switch(r1) {
		default:
			goto label$4d8524f_7_56;
		case 0:
			r1 = 8;
			return r1;
		case 1:
			r1 = 16;
			return r1;
		case 2:
			r1 = 24;
			return r1;
		case 3:
			r1 = 32;
			return r1;
		case 4:
			r1 = 40;
			return r1;
		case 5:
			r1 = 48;
			return r1;
		case 6:
			r1 = 56;
			return r1;
		case 7:
			r1 = 64;
			return r1;
		case 8:
			r1 = 80;
			return r1;
		case 9:
			r1 = 96;
			return r1;
		case 10:
			r1 = 112;
			return r1;
		case 11:
			r1 = 128;
			return r1;
		case 12:
			r1 = 144;
			return r1;
		case 13:
			r1 = 160;
			return r1;
		case 14:
			r1 = 176;
			return r1;
		case 15:
			r1 = 192;
			return r1;
		case 16:
			r1 = 224;
			return r1;
		case 17:
			r1 = 256;
			return r1;
		case 18:
			r1 = 288;
			return r1;
		case 19:
			r1 = 320;
			return r1;
		case 20:
			r1 = 352;
			return r1;
		case 21:
			r1 = 384;
			return r1;
		case 22:
			r1 = 416;
			return r1;
		case 23:
			r1 = 448;
			return r1;
		case 24:
			r1 = 0;
			return r1;
		case 25:
			r1 = -1;
			return r1;
	}
	label$4d8524f_7_56:
	r1 = 0;
	return r1;
}

venum* format_mp3_MPEG_bitrateNum2Enum(int r0) {
	venum *r2;
	int r1;
	r1 = 0;
	if( r1 == r0 ) goto label$4d8524f_8_52;
	r1 = 8;
	if( r1 == r0 ) goto label$4d8524f_8_54;
	r1 = 16;
	if( r1 == r0 ) goto label$4d8524f_8_56;
	r1 = 24;
	if( r1 == r0 ) goto label$4d8524f_8_58;
	r1 = 32;
	if( r1 == r0 ) goto label$4d8524f_8_60;
	r1 = 40;
	if( r1 == r0 ) goto label$4d8524f_8_62;
	r1 = 48;
	if( r1 == r0 ) goto label$4d8524f_8_64;
	r1 = 56;
	if( r1 == r0 ) goto label$4d8524f_8_66;
	r1 = 64;
	if( r1 == r0 ) goto label$4d8524f_8_68;
	r1 = 80;
	if( r1 == r0 ) goto label$4d8524f_8_70;
	r1 = 96;
	if( r1 == r0 ) goto label$4d8524f_8_72;
	r1 = 112;
	if( r1 == r0 ) goto label$4d8524f_8_74;
	r1 = 128;
	if( r1 == r0 ) goto label$4d8524f_8_76;
	r1 = 144;
	if( r1 == r0 ) goto label$4d8524f_8_78;
	r1 = 160;
	if( r1 == r0 ) goto label$4d8524f_8_80;
	r1 = 176;
	if( r1 == r0 ) goto label$4d8524f_8_82;
	r1 = 192;
	if( r1 == r0 ) goto label$4d8524f_8_84;
	r1 = 224;
	if( r1 == r0 ) goto label$4d8524f_8_86;
	r1 = 256;
	if( r1 == r0 ) goto label$4d8524f_8_88;
	r1 = 288;
	if( r1 == r0 ) goto label$4d8524f_8_90;
	r1 = 320;
	if( r1 == r0 ) goto label$4d8524f_8_92;
	r1 = 352;
	if( r1 == r0 ) goto label$4d8524f_8_94;
	r1 = 384;
	if( r1 == r0 ) goto label$4d8524f_8_96;
	r1 = 416;
	if( r1 == r0 ) goto label$4d8524f_8_98;
	r1 = 448;
	if( r1 == r0 ) goto label$4d8524f_8_100;
	r2 = (venum*)g$format_mp3_Bitrate_BR_Bad;
	return r2;
	label$4d8524f_8_52:
	r2 = (venum*)g$format_mp3_Bitrate_BR_Free;
	return r2;
	label$4d8524f_8_54:
	r2 = (venum*)g$format_mp3_Bitrate_BR_8;
	return r2;
	label$4d8524f_8_56:
	r2 = (venum*)g$format_mp3_Bitrate_BR_16;
	return r2;
	label$4d8524f_8_58:
	r2 = (venum*)g$format_mp3_Bitrate_BR_24;
	return r2;
	label$4d8524f_8_60:
	r2 = (venum*)g$format_mp3_Bitrate_BR_32;
	return r2;
	label$4d8524f_8_62:
	r2 = (venum*)g$format_mp3_Bitrate_BR_40;
	return r2;
	label$4d8524f_8_64:
	r2 = (venum*)g$format_mp3_Bitrate_BR_48;
	return r2;
	label$4d8524f_8_66:
	r2 = (venum*)g$format_mp3_Bitrate_BR_56;
	return r2;
	label$4d8524f_8_68:
	r2 = (venum*)g$format_mp3_Bitrate_BR_64;
	return r2;
	label$4d8524f_8_70:
	r2 = (venum*)g$format_mp3_Bitrate_BR_80;
	return r2;
	label$4d8524f_8_72:
	r2 = (venum*)g$format_mp3_Bitrate_BR_96;
	return r2;
	label$4d8524f_8_74:
	r2 = (venum*)g$format_mp3_Bitrate_BR_112;
	return r2;
	label$4d8524f_8_76:
	r2 = (venum*)g$format_mp3_Bitrate_BR_128;
	return r2;
	label$4d8524f_8_78:
	r2 = (venum*)g$format_mp3_Bitrate_BR_144;
	return r2;
	label$4d8524f_8_80:
	r2 = (venum*)g$format_mp3_Bitrate_BR_160;
	return r2;
	label$4d8524f_8_82:
	r2 = (venum*)g$format_mp3_Bitrate_BR_176;
	return r2;
	label$4d8524f_8_84:
	r2 = (venum*)g$format_mp3_Bitrate_BR_192;
	return r2;
	label$4d8524f_8_86:
	r2 = (venum*)g$format_mp3_Bitrate_BR_224;
	return r2;
	label$4d8524f_8_88:
	r2 = (venum*)g$format_mp3_Bitrate_BR_256;
	return r2;
	label$4d8524f_8_90:
	r2 = (venum*)g$format_mp3_Bitrate_BR_288;
	return r2;
	label$4d8524f_8_92:
	r2 = (venum*)g$format_mp3_Bitrate_BR_320;
	return r2;
	label$4d8524f_8_94:
	r2 = (venum*)g$format_mp3_Bitrate_BR_352;
	return r2;
	label$4d8524f_8_96:
	r2 = (venum*)g$format_mp3_Bitrate_BR_384;
	return r2;
	label$4d8524f_8_98:
	r2 = (venum*)g$format_mp3_Bitrate_BR_416;
	return r2;
	label$4d8524f_8_100:
	r2 = (venum*)g$format_mp3_Bitrate_BR_448;
	return r2;
}


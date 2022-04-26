﻿// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_format__mp3__MPEG
#define INC_format__mp3__MPEG
typedef struct _format__mp3__$MPEG *format__mp3__$MPEG;
typedef struct _format__mp3__MPEG *format__mp3__MPEG;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <format/mp3/MPEGVersion.h>
#include <hl/types/ArrayObj.h>
#include <format/mp3/SamplingRate.h>
#include <format/mp3/Bitrate.h>
#include <format/mp3/Layer.h>


struct _format__mp3__$MPEG {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	int V1;
	int V2;
	int V25;
	int Reserved;
	vclosure* enum2Num;
	vclosure* num2Enum;
	hl__types__ArrayObj V1_Bitrates;
	hl__types__ArrayObj V2_Bitrates;
	hl__types__ArrayObj SamplingRates;
	vclosure* srNum2Enum;
	vclosure* srEnum2Num;
	vclosure* getBitrateIdx;
	vclosure* getSamplingRateIdx;
	vclosure* bitrateEnum2Num;
	vclosure* bitrateNum2Enum;
};
struct _format__mp3__MPEG {
	hl_type *$type;
};
#endif


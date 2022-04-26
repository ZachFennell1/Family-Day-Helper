﻿// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_hxd__Pad
#define INC_hxd__Pad
typedef struct _hxd__$Pad *hxd__$Pad;
typedef struct _hxd__Pad *hxd__Pad;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/types/ArrayObj.h>
#include <haxe/ds/IntMap.h>
#include <sdl/Event.h>
#include <hl/types/ArrayBytes_Float.h>
#include <sdl/GameController.h>


struct _hxd__$Pad {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	vvirtual* CONFIG_SDL;
	vvirtual* ANALOG_BUTTON_THRESHOLDS;
	vvirtual* DEFAULT_CONFIG;
	vclosure* createDummy;
	vclosure* waitPad;
	bool initDone;
	haxe__ds__IntMap pads;
	vclosure* wait;
	vclosure* initPad;
	vclosure* onEvent;
	vclosure* syncPads;
};
struct _hxd__Pad {
	hl_type *$type;
	bool connected;
	int index;
	vvirtual* config;
	double axisDeadZone;
	hl__types__ArrayObj buttons;
	hl__types__ArrayBytes_Float values;
	hl__types__ArrayObj prevButtons;
	double rawXAxis;
	double rawYAxis;
	vclosure* onDisconnect;
	sdl__GameController d;
};
#endif

﻿// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_sdl__Event
#define INC_sdl__Event
typedef struct _sdl__$Event *sdl__$Event;
typedef struct _sdl__Event *sdl__Event;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>


struct _sdl__$Event {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _sdl__Event {
	hl_type *$type;
	int type;
	int mouseX;
	int mouseY;
	int mouseXRel;
	int mouseYRel;
	int button;
	int wheelDelta;
	int state;
	int keyCode;
	int scanCode;
	bool keyRepeat;
	int controller;
	int value;
	int fingerId;
	int joystick;
};
#endif


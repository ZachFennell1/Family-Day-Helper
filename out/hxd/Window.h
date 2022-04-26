﻿// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_hxd__Window
#define INC_hxd__Window
typedef struct _hxd__$Window *hxd__$Window;
typedef struct _hxd__Window *hxd__Window;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/types/ArrayBytes_Int.h>
#include <haxe/ds/List.h>
#include <sdl/Window.h>


struct _hxd__$Window {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	hl__types__ArrayBytes_Int CODEMAP;
	int TOUCH_SCALE;
	vclosure* initChars;
	hxd__Window inst;
	vclosure* getInstance;
};
struct _hxd__Window {
	hl_type *$type;
	haxe__ds__List resizeEvents;
	haxe__ds__List eventTargets;
	sdl__Window window;
	int windowWidth;
	int windowHeight;
	int curMouseX;
	int curMouseY;
	vclosure* onClose;
	bool wasBlurred;
};
#endif

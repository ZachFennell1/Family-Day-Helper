﻿// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_haxe__ds__TreeNode
#define INC_haxe__ds__TreeNode
typedef struct _haxe__ds__$TreeNode *haxe__ds__$TreeNode;
typedef struct _haxe__ds__TreeNode *haxe__ds__TreeNode;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>


struct _haxe__ds__$TreeNode {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _haxe__ds__TreeNode {
	hl_type *$type;
	haxe__ds__TreeNode left;
	haxe__ds__TreeNode right;
	vdynamic* key;
	vdynamic* value;
	int _height;
};
#endif


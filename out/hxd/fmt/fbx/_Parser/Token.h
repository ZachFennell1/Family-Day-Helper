// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_hxd__fmt__fbx___Parser__Token
#define INC_hxd__fmt__fbx___Parser__Token
typedef struct _hxd__fmt__fbx___Parser__$Token *hxd__fmt__fbx___Parser__$Token;
#include <hl/Enum.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/natives.h>
#include <hl/types/ArrayObj.h>
#include <hxd/fmt/fbx/_Parser/Token.h>


struct _hxd__fmt__fbx___Parser__$Token {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __ename__;
	hl_bytes_map* __emap__;
	hl__types__ArrayObj __constructs__;
	varray* __evalues__;
};
typedef struct {
	HL__ENUM_CONSTRUCT__
	String p0;
} hxd_fmt_fbx__Parser_Token_TIdent;
typedef struct {
	HL__ENUM_CONSTRUCT__
	String p0;
} hxd_fmt_fbx__Parser_Token_TNode;
typedef struct {
	HL__ENUM_CONSTRUCT__
	String p0;
} hxd_fmt_fbx__Parser_Token_TInt;
typedef struct {
	HL__ENUM_CONSTRUCT__
	String p0;
} hxd_fmt_fbx__Parser_Token_TFloat;
typedef struct {
	HL__ENUM_CONSTRUCT__
	String p0;
} hxd_fmt_fbx__Parser_Token_TString;
typedef struct {
	HL__ENUM_CONSTRUCT__
	int p0;
} hxd_fmt_fbx__Parser_Token_TLength;
#endif


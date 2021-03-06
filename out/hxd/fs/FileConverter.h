// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_hxd__fs__FileConverter
#define INC_hxd__fs__FileConverter
typedef struct _hxd__fs__$FileConverter *hxd__fs__$FileConverter;
typedef struct _hxd__fs__FileConverter *hxd__fs__FileConverter;
#include <hxd/fs/LocalEntry.h>
#include <hl/types/ArrayObj.h>
#include <hxd/fs/FileConverter.h>
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/types/ArrayDyn.h>
#include <hxd/fs/ConvertPattern.h>
#include <haxe/ds/StringMap.h>
#include <hxd/fs/Convert.h>


typedef struct {
	HL__ENUM_CONSTRUCT__
	hxd__fs__LocalEntry p0;
	hl__types__ArrayObj p1;
	hl__types__ArrayObj p2;
	hxd__fs__FileConverter p3;
} Enumt$ctx_5bf7227;
struct _hxd__fs__$FileConverter {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	hl__types__ArrayDyn extraConfigs;
	vclosure* addConfig;
	vclosure* sortByRulePiority;
};
struct _hxd__fs__FileConverter {
	hl_type *$type;
	String configuration;
	String baseDir;
	String tmpDir;
	haxe__ds__StringMap configs;
	vvirtual* defaultConfig;
	haxe__ds__StringMap cache;
	vclosure* onConvert;
};
#endif


﻿// Generated by HLC 4.2.4 (HL v4)
#ifndef INC__std__Type
#define INC__std__Type
typedef struct _$Type *$Type;
typedef struct _Type *Type;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/Enum.h>
#include <hl/types/ArrayDyn.h>
#include <hl/types/ArrayObj.h>
#include <_std/ValueType.h>


struct _$Type {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	vclosure* init;
	vclosure* initClass;
	vclosure* initEnum;
	vclosure* _register;
	vclosure* getClass;
	vclosure* getEnum;
	vclosure* getSuperClass;
	vclosure* getClassName;
	vclosure* getEnumName;
	vclosure* resolveClass;
	vclosure* resolveEnum;
	vclosure* createInstance;
	vclosure* createEmptyInstance;
	vclosure* createEnum;
	vclosure* createEnumIndex;
	vclosure* getInstanceFields;
	vclosure* getEnumConstructs;
	vclosure* _typeof;
	vclosure* enumConstructor;
	vclosure* enumParameters;
	vclosure* enumIndex;
	vclosure* allEnums;
};
struct _Type {
	hl_type *$type;
};
#endif


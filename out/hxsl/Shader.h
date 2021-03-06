// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_hxsl__Shader
#define INC_hxsl__Shader
typedef struct _hxsl__$Shader *hxsl__$Shader;
typedef struct _hxsl__Shader *hxsl__Shader;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hxsl/SharedShader.h>
#include <hxsl/ShaderInstance.h>


struct _hxsl__$Shader {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _hxsl__Shader {
	hl_type *$type;
	int priority;
	hxsl__SharedShader shader;
	hxsl__ShaderInstance instance;
	int constBits;
	bool constModified;
};
#endif


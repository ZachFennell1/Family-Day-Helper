// Generated by HLC 4.2.4 (HL v4)
#ifndef INC_h3d__shader__Shadow
#define INC_h3d__shader__Shadow
typedef struct _h3d__shader__$Shadow *h3d__shader__$Shadow;
typedef struct _h3d__shader__Shadow *h3d__shader__Shadow;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hxsl/SharedShader.h>
#include <hxsl/Shader.h>
#include <hxsl/ShaderInstance.h>


struct _h3d__shader__$Shadow {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	String SRC;
	hxsl__SharedShader _SHADER;
};
struct _h3d__shader__Shadow {
	hl_type *$type;
	int priority;
	hxsl__SharedShader shader;
	hxsl__ShaderInstance instance;
	int constBits;
	bool constModified;
};
#endif


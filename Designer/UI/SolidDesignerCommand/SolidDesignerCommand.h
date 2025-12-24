#pragma once
#include "AliceMacroDefinitions.h"
#include <iostream>

#if defined(_WIN32)
#ifdef SOLID_DESIGNER_COMMAND_HOME
#define SOLID_DESIGNER_COMMAND_EXPORT DLL_EXPORT
#else
#define SOLID_DESIGNER_COMMAND_EXPORT DLL_IMPORT
#endif
#else
#define SOLID_DESIGNER_COMMAND_EXPORT __attribute__((visibility("default")))
#endif

#include "AliceGuidUtils.h"
namespace soliddesignercommand
{
	extern const Guid MODULE_ID;
}




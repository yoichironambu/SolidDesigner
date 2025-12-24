#pragma once
// 此头文件包含DLL导出的宏
#include "AliceMacroDefinitions.h"
#include <iostream>
#if defined(_WIN32)
#ifdef SOLID_DESIGNER_MODEL_HOME
#define SOLIDDESIGNER_MODEL_EXPORT DLL_EXPORT
#else
#define SOLIDDESIGNER_MODEL_EXPORT DLL_IMPORT
#endif
#else
#define SOLIDDESIGNER_MODEL_EXPORT __attribute__((visibility("default")))
#endif








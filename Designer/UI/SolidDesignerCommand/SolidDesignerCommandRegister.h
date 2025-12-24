#pragma once

#include "AliceObjectMacros.h"
#include "AliceIPluginComponent.h"
#include "AlicePluginExports.h"
#include "AliceMacroDefinitions.h"

namespace alice { class ICommand; }

namespace sdr
{
	class SolidDesignerCommandRegister final
	{
		ALICE_PRIVATE_CTOR_DTOR(SolidDesignerCommandRegister)
	public:
		static SolidDesignerCommandRegister& GetInstance();

		bool RegisterCommands();
		bool UnRegisterCommands();
	};
}
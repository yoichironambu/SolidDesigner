#pragma once

#include "AliceObjectMacros.h"
#include "AliceIPluginComponent.h"
#include "AlicePluginExports.h"
#include "AliceMacroDefinitions.h"

namespace alice { class ICommand; }

namespace sdr
{
	class SolidDesignerCommandFactory final
	{
		ALICE_PRIVATE_CTOR_DTOR(SolidDesignerCommandFactory)
	public:
		static SolidDesignerCommandFactory& GetInstance();

		std::vector<std::shared_ptr<alice::ICommand>> CreateCommands();
	};
}
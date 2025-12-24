#pragma once

#include "AliceObjectMacros.h"
#include "AliceIPluginComponent.h"
#include "AlicePluginExports.h"

namespace sdr
{
	class SolidDesignerCommandComponent final : public alice::IPluginComponent
	{
		ALICE_DECLARE_OBJECT_TYPE(SolidDesignerCommandComponent, IPluginComponent)
	public:
		~SolidDesignerCommandComponent() override;

		bool InitialiseEvent() override;
		void InitialisationFinishedEvent() override;
		void FinaliseEvent() override;
	};
}

ALICE_PLUGIN_EXPORT_INTERFACES(sdr::SolidDesignerCommandComponent,
	/*AbiMajorValue*/ 1, "SolidDesigner", "SolidDesignerCommandComponent", "Solid Designer Command Component", "1.0.0");
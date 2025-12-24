#include "SolidDesignerCommandComponent.h"
#include <iostream>
#include "SolidDesignerCommandRegister.h"
#include "AliceGuidUtils.h"
#include "SolidDesignerCommand.h"

using namespace sdr;
using namespace alice;

namespace
{
	void TestInitialisationFinished()
	{
		std::cout << "calling init finish..." << std::endl;
	}
}

ALICE_IMPL_CONCRETE_OBJECT_TYPE(SolidDesignerCommandComponent, "SolidDesignerCommand")
sdr::SolidDesignerCommandComponent::~SolidDesignerCommandComponent()
{

}

bool SolidDesignerCommandComponent::InitialiseEvent()
{
	SolidDesignerCommandRegister& oRegister = SolidDesignerCommandRegister::GetInstance();
	oRegister.RegisterCommands();
	return true;
}

void SolidDesignerCommandComponent::InitialisationFinishedEvent()
{
	TestInitialisationFinished();
}

void SolidDesignerCommandComponent::FinaliseEvent()
{
	SolidDesignerCommandRegister& oRegister = SolidDesignerCommandRegister::GetInstance();
	oRegister.UnRegisterCommands();
}
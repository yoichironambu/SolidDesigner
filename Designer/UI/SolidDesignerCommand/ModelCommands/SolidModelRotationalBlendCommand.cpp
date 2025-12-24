#include "SolidModelRotationalBlendCommand.h"
#include "SolidDesignerCommands.h"
#include "AliceIOperation.h"

using namespace sdr;
using namespace alice;

sdr::SolidModelRotationalBlendCommand::SolidModelRotationalBlendCommand() noexcept
	: AppCommandBase(std::string(Cmd::MODEL_BLEND_ROTATIONAL))
{

}

sdr::SolidModelRotationalBlendCommand::~SolidModelRotationalBlendCommand()
{

}

bool SolidModelRotationalBlendCommand::IsSupported() const
{
	return false;
}

bool SolidModelRotationalBlendCommand::IsVisible() const
{
	return false;
}

bool SolidModelRotationalBlendCommand::IsEnabled() const
{
	return false;
}

std::string SolidModelRotationalBlendCommand::DisabledReason() const
{
	return {};
}

std::unique_ptr<alice::IOperation> SolidModelRotationalBlendCommand::Execute(const alice::CommandParameter& param)
{
	return nullptr;
}
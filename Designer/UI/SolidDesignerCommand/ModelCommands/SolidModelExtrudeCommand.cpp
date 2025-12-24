#include "SolidModelExtrudeCommand.h"
#include "SolidDesignerCommands.h"
#include "AliceIOperation.h"

using namespace sdr;
using namespace alice;

sdr::SolidModelExtrudeCommand::SolidModelExtrudeCommand() noexcept
	: AppCommandBase(std::string(Cmd::MODEL_EXTRUDE))
{

}

sdr::SolidModelExtrudeCommand::~SolidModelExtrudeCommand()
{

}

bool SolidModelExtrudeCommand::IsSupported() const
{
	return false;
}

bool SolidModelExtrudeCommand::IsVisible() const
{
	return false;
}

bool SolidModelExtrudeCommand::IsEnabled() const
{
	return false;
}

std::string SolidModelExtrudeCommand::DisabledReason() const
{
	return {};
}

std::unique_ptr<alice::IOperation> SolidModelExtrudeCommand::Execute(const alice::CommandParameter& param)
{
	return nullptr;
}
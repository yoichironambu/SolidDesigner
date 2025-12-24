#include "SolidModelBlendCommand.h"
#include "SolidDesignerCommands.h"
#include "AliceIOperation.h"

using namespace sdr;
using namespace alice;

sdr::SolidModelBlendCommand::SolidModelBlendCommand() noexcept
	: AppCommandBase(std::string(Cmd::MODEL_BLEND))
{

}

sdr::SolidModelBlendCommand::~SolidModelBlendCommand()
{

}

bool SolidModelBlendCommand::IsSupported() const
{
	return false;
}

bool SolidModelBlendCommand::IsVisible() const
{
	return false;
}

bool SolidModelBlendCommand::IsEnabled() const
{
	return false;
}

std::string SolidModelBlendCommand::DisabledReason() const
{
	return {};
}

std::unique_ptr<alice::IOperation> SolidModelBlendCommand::Execute(const alice::CommandParameter& param)
{
	return nullptr;
}
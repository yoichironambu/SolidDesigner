#include "SolidModelRevolveCommand.h"
#include "SolidDesignerCommands.h"
#include "AliceIOperation.h"

using namespace sdr;
using namespace alice;

sdr::SolidModelRevolveCommand::SolidModelRevolveCommand() noexcept
	: AppCommandBase(std::string(Cmd::MODEL_REVOLVE))
{

}

sdr::SolidModelRevolveCommand::~SolidModelRevolveCommand()
{

}

bool SolidModelRevolveCommand::IsSupported() const
{
	return false;
}

bool SolidModelRevolveCommand::IsVisible() const
{
	return false;
}

bool SolidModelRevolveCommand::IsEnabled() const
{
	return false;
}

std::string SolidModelRevolveCommand::DisabledReason() const
{
	return {};
}

std::unique_ptr<alice::IOperation> SolidModelRevolveCommand::Execute(const alice::CommandParameter& param)
{
	return nullptr;
}
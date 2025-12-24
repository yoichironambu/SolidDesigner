#include "SolidModelHelicalSweepCommand.h"
#include "SolidDesignerCommands.h"
#include "AliceIOperation.h"

using namespace sdr;
using namespace alice;

sdr::SolidModelHelicalSweepCommand::SolidModelHelicalSweepCommand() noexcept
	: AppCommandBase(std::string(Cmd::MODEL_SWEEP_HELICAL))
{

}

sdr::SolidModelHelicalSweepCommand::~SolidModelHelicalSweepCommand()
{

}

bool SolidModelHelicalSweepCommand::IsSupported() const
{
	return false;
}

bool SolidModelHelicalSweepCommand::IsVisible() const
{
	return false;
}

bool SolidModelHelicalSweepCommand::IsEnabled() const
{
	return false;
}

std::string SolidModelHelicalSweepCommand::DisabledReason() const
{
	return {};
}

std::unique_ptr<alice::IOperation> SolidModelHelicalSweepCommand::Execute(const alice::CommandParameter& param)
{
	return nullptr;
}
#include "SolidModelSweepCommand.h"
#include "SolidDesignerCommands.h"
#include "AliceIOperation.h"

using namespace sdr;
using namespace alice;

sdr::SolidModelSweepCommand::SolidModelSweepCommand() noexcept
	: AppCommandBase(std::string(Cmd::MODEL_SWEEP))
{

}

sdr::SolidModelSweepCommand::~SolidModelSweepCommand()
{

}

bool SolidModelSweepCommand::IsSupported() const
{
	return false;
}

bool SolidModelSweepCommand::IsVisible() const
{
	return false;
}

bool SolidModelSweepCommand::IsEnabled() const
{
	return false;
}

std::string SolidModelSweepCommand::DisabledReason() const
{
	return {};
}

std::unique_ptr<alice::IOperation> SolidModelSweepCommand::Execute(const alice::CommandParameter& param)
{
	return nullptr;
}